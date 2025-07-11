#include "regen.hpp"
// AnimationDisplayer.ipp
#include "AnimationDisplayer.hpp"

// CAnimationDisplayer::Effect_Vega
_SUB_EXCEPTION_HANDLER(57600)
__SUB_CLASS_THIS(00057600, __thiscall, 18615,  CAnimationDisplayer, void, int32_t, NakedParam<_x_com_ptr<IWzVector2D>>, NakedParam<_x_com_ptr<IWzGr2DLayer>>, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_57600
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC0
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xD4]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	xor ebx,ebx
	mov dword ptr [esp+0xDC],ebx
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x18],ebx
	mov eax,dword ptr [esp+0xF0]
	mov byte ptr [esp+0xDC],3
	cmp eax,4
	ja Block59

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block18
cmp EAX, 2
je Block28
cmp EAX, 3
je Block38
cmp EAX, 4
je Block48


 Block2:
	push offset _S_UIUIWINDOWIMGVEG__6
	lea ecx,[esp+0x20]
	call ZXString16::AssignCStr
	push ebx
	push 0xFF
	push 3
	push ecx
	mov ecx,dword ptr [esp+0xFC]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0xFC]
	mov dword ptr [esp+0x24],esp
	cmp eax,ebx
	je Block4

 Block3:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block4:
	push 0x72
	push 0x55
	push ecx
	mov ecx,dword ptr [esp+0x104]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x104]
	mov dword ptr [esp+0x30],esp
	cmp eax,ebx
	je Block6

 Block5:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block6:
	mov ecx,dword ptr [esp+0x100]
	mov edi,dword ptr [esp+0x38]
	push ecx
	lea edx,[esp+0x50]
	push edi
	push edx
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	push eax
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebx
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov esi,dword ptr [esp+0x18]
	cmp esi,ebx
	sete al
	cmp al,bl
	je Block15

 Block9:
	mov byte ptr [esp+0xDC],2
	cmp esi,ebx
	je Block11

 Block10:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block11:
	mov byte ptr [esp+0xDC],1
	cmp edi,ebx
	je Block13

 Block12:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block13:
	mov eax,dword ptr [esp+0xE8]
	mov byte ptr [esp+0xDC],bl
	cmp eax,ebx
	je Block61

 Block14:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block61

 Block15:
	push offset _D_VTMISSING
	lea ecx,[esp+0x58]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0xE0],4
	call Ztl_variant_t::_ctor_1
	mov byte ptr [esp+0xDC],5
	cmp esi,ebx
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	lea eax,[esp+0x54]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	push 0x20
	mov ecx,esi
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x34]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x54]
	jmp Block58

 Block18:
	push offset _S_UIUIWINDOWIMGVEG__5
	lea ecx,[esp+0x20]
	call ZXString16::AssignCStr
	push ebx
	push 0xFF
	push 3
	push ecx
	mov ecx,dword ptr [esp+0xFC]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0xFC]
	mov dword ptr [esp+0x24],esp
	cmp eax,ebx
	je Block20

 Block19:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block20:
	push 0x47
	push 0x4F
	push ecx
	mov ecx,dword ptr [esp+0x104]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x104]
	mov dword ptr [esp+0x30],esp
	cmp eax,ebx
	je Block22

 Block21:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block22:
	mov ecx,dword ptr [esp+0x100]
	mov edi,dword ptr [esp+0x38]
	push ecx
	lea edx,[esp+0x40]
	push edi
	push edx
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	push eax
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebx
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block24:
	mov esi,dword ptr [esp+0x18]
	cmp esi,ebx
	sete al
	cmp al,bl
	jne Block9

 Block25:
	push offset _D_VTMISSING
	lea ecx,[esp+0x78]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x98]
	mov byte ptr [esp+0xE0],6
	call Ztl_variant_t::_ctor_1
	mov byte ptr [esp+0xDC],7
	cmp esi,ebx
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea eax,[esp+0x74]
	push eax
	lea ecx,[esp+0x98]
	push ecx
	push ebx
	mov ecx,esi
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x94]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x74]
	mov byte ptr [esp+0xDC],3
	call Ztl_variant_t::~Ztl_variant_t
	push ecx
	mov dword ptr [esp+0x18],esp
	mov eax,esp
	push ebx
	push ecx
	lea edx,[esp+0x24]
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push edx
	mov dword ptr [eax],ebx
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	mov ecx,ebp
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov byte ptr [esp+0xDC],2
	jmp Block10

 Block28:
	push offset _S_UIUIWINDOWIMGVEG__4
	lea ecx,[esp+0x20]
	call ZXString16::AssignCStr
	push ebx
	push 0xFF
	push 3
	push ecx
	mov ecx,dword ptr [esp+0xFC]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0xFC]
	mov dword ptr [esp+0x24],esp
	cmp eax,ebx
	je Block30

 Block29:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block30:
	push 0x2D
	push 6
	push ecx
	mov ecx,dword ptr [esp+0x104]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x104]
	mov dword ptr [esp+0x30],esp
	cmp eax,ebx
	je Block32

 Block31:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block32:
	mov ecx,dword ptr [esp+0x100]
	mov edi,dword ptr [esp+0x38]
	push ecx
	lea edx,[esp+0x4C]
	push edi
	push edx
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	push eax
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebx
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	mov esi,dword ptr [esp+0x18]
	cmp esi,ebx
	sete al
	cmp al,bl
	jne Block9

 Block35:
	push offset _D_VTMISSING
	lea ecx,[esp+0x48]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0xB8]
	mov byte ptr [esp+0xE0],8
	call Ztl_variant_t::_ctor_1
	mov byte ptr [esp+0xDC],9
	cmp esi,ebx
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	lea eax,[esp+0x44]
	push eax
	lea ecx,[esp+0xB8]
	push ecx
	push ebx
	mov ecx,esi
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0xB4]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0xDC],3
	call Ztl_variant_t::~Ztl_variant_t
	push ecx
	mov dword ptr [esp+0x18],esp
	mov eax,esp
	push ebx
	push ecx
	lea edx,[esp+0x24]
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push edx
	mov dword ptr [eax],ebx
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	mov ecx,ebp
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov byte ptr [esp+0xDC],2
	jmp Block10

 Block38:
	push offset _S_UIUIWINDOWIMGVEG__3
	lea ecx,[esp+0x20]
	call ZXString16::AssignCStr
	push ebx
	push 0xFF
	push 3
	push ecx
	mov ecx,dword ptr [esp+0xFC]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0xFC]
	mov dword ptr [esp+0x24],esp
	cmp eax,ebx
	je Block40

 Block39:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block40:
	push 0x29
	push 0x5B
	push ecx
	mov ecx,dword ptr [esp+0x104]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x104]
	mov dword ptr [esp+0x30],esp
	cmp eax,ebx
	je Block42

 Block41:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block42:
	mov ecx,dword ptr [esp+0x100]
	mov edi,dword ptr [esp+0x38]
	push ecx
	lea edx,[esp+0x44]
	push edi
	push edx
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	push eax
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block44

 Block43:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block44:
	mov esi,dword ptr [esp+0x18]
	cmp esi,ebx
	sete al
	cmp al,bl
	jne Block9

 Block45:
	push offset _D_VTMISSING
	lea ecx,[esp+0x88]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x68]
	mov byte ptr [esp+0xE0],0xA
	call Ztl_variant_t::_ctor_1
	mov byte ptr [esp+0xDC],0xB
	cmp esi,ebx
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	lea eax,[esp+0x84]
	push eax
	lea ecx,[esp+0x68]
	push ecx
	push 0x20
	mov ecx,esi
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x64]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x84]
	jmp Block58

 Block48:
	push offset _S_UIUIWINDOWIMGVEG__2
	lea ecx,[esp+0x20]
	call ZXString16::AssignCStr
	push ebx
	push 0xFF
	push 3
	push ecx
	mov ecx,dword ptr [esp+0xFC]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0xFC]
	mov dword ptr [esp+0x24],esp
	cmp eax,ebx
	je Block50

 Block49:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block50:
	push 0x72
	push 0x55
	push ecx
	mov ecx,dword ptr [esp+0x104]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x104]
	mov dword ptr [esp+0x30],esp
	cmp eax,ebx
	je Block52

 Block51:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block52:
	mov ecx,dword ptr [esp+0x100]
	mov edi,dword ptr [esp+0x38]
	push ecx
	lea edx,[esp+0x48]
	push edi
	push edx
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	push eax
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebx
	je Block54

 Block53:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block54:
	mov esi,dword ptr [esp+0x18]
	cmp esi,ebx
	sete al
	cmp al,bl
	jne Block9

 Block55:
	push offset _D_VTMISSING
	lea ecx,[esp+0xC8]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0xA8]
	mov byte ptr [esp+0xE0],0xC
	call Ztl_variant_t::_ctor_1
	mov byte ptr [esp+0xDC],0xD
	cmp esi,ebx
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	lea eax,[esp+0xC4]
	push eax
	lea ecx,[esp+0xA8]
	push ecx
	push 0x20
	mov ecx,esi
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0xA4]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xC4]

 Block58:
	mov byte ptr [esp+0xDC],3
	call Ztl_variant_t::~Ztl_variant_t
	push 0x9C4
	push ecx
	lea edx,[esp+0x20]
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push edx
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	mov ecx,ebp
	call CAnimationDisplayer::RegisterRepeatAnimation
	mov byte ptr [esp+0xDC],2
	jmp Block10

 Block59:
	mov eax,dword ptr [esp+0xE8]
	mov byte ptr [esp+0xDC],bl
	cmp eax,ebx
	je Block61

 Block60:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block61:
	mov eax,dword ptr [esp+0xEC]
	mov dword ptr [esp+0xDC],0xFFFFFFFF
	cmp eax,ebx
	je Block63

 Block62:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block63:
	mov ecx,dword ptr [esp+0xD4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xCC
	ret 0x10
}
}
// CAnimationDisplayer::RESERVEDINFO::~RESERVEDINFO
_SUB_EXCEPTION_HANDLER(48F70)
__SUB_CLASS_THIS0(00048F70, __thiscall, 18898,  CAnimationDisplayer::RESERVEDINFO, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_48F70
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
	mov ecx,dword ptr [esi+0x21C]
	mov dword ptr [esp+0x14],1
	test ecx,ecx
	je Block2

 Block1:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x21C],0

 Block2:
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push 0x3C
	push 8
	lea eax,[esi+0x3C]
	push eax
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+8]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov esi,dword ptr [esi+4]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block6

 Block5:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block6:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// _ZtlSecureFuse_int_
__SUB(00038F80, __cdecl, 146236,  int32_t, const int32_t*, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [eax+4]
	mov ecx,dword ptr [eax]
	mov eax,edx
	rol eax,5
	xor eax,ecx
	xor ecx,0xBAADF00D
	ror ecx,5
	add ecx,edx
	cmp ecx,dword ptr [esp+8]
	je Block2

 Block1:
	push offset ZException::THROW_INFO
	lea eax,[esp+8]
	push eax
	mov dword ptr [esp+0xC],5
	call _CxxThrowException

 Block2:
	ret
}
}
// CAnimationDisplayer::RegisterMotionBlurAnimation
_SUB_EXCEPTION_HANDLER(5AD00)
__SUB_CLASS_THIS(0005AD00, __thiscall, 18556,  CAnimationDisplayer, ZRef<AnimationState>*, ZRef<AnimationState>*, NakedParam<_x_com_ptr<IWzGr2DLayer>>, ZArray<_x_com_ptr<IWzGr2DLayer> >&, long, long, unsigned char) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5AD00
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x10],0
	mov edi,dword ptr [esp+0x24]
	mov ebp,1
	mov ecx,edi
	mov dword ptr [esp+0x1C],ebp
	mov dword ptr [edi+4],0
	call ZRef<AnimationState>::_Alloc
	mov dword ptr [esp+0x10],ebp
	call get_update_time
	lea ecx,[esi+0x120]
	mov ebp,eax
	call ZList<CAnimationDisplayer::MOTIONBLURINFO>::AddTail_
	mov esi,eax
	mov dword ptr [esi],ebp
	mov ebp,dword ptr [esi+4]
	mov eax,dword ptr [esp+0x28]
	cmp ebp,eax
	je Block5

 Block1:
	mov dword ptr [esi+4],eax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	test ebp,ebp
	je Block5

 Block4:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block5:
	mov edx,dword ptr [esp+0x2C]
	push edx
	lea ecx,[esi+8]
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::operator=
	mov ecx,dword ptr [esp+0x30]
	mov eax,dword ptr [esp+0x34]
	mov dl,byte ptr [esp+0x38]
	mov dword ptr [esi+0xC],ecx
	push edi
	lea ecx,[esi+0x18]
	mov dword ptr [esi+0x10],eax
	mov byte ptr [esi+0x14],dl
	call ZRef<AnimationState>::op_assign_copy
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x1C],0
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov eax,edi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x10
	ret 0x18
}
}
// CAnimationDisplayer::MakeLayer_FootHold
_SUB_EXCEPTION_HANDLER(515F0)
__SUB_CLASS_THIS(000515F0, __thiscall, 18623,  CAnimationDisplayer, void, const wchar_t*, const tagRECT&, ZArray<_x_com_ptr<IWzGr2DLayer> >&, long, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_515F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x84
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x64]
	push eax
	call esi
	lea ecx,[ebp-0x64]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor ebx,ebx
	add esp,8
	cmp eax,ebx
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x54]
	push edx
	mov dword ptr [ebp-4],ebx
	call esi
	lea eax,[ebp-0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	mov eax,dword ptr [ebp+8]
	push ebx
	push ebx
	lea ecx,[ebp-0x64]
	push ecx
	lea edx,[ebp-0x54]
	push edx
	push ecx
	mov dword ptr [ebp-0x28],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],1
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[ebp-0x88]
	push ecx
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov esi,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x88],si
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x80]
	xor edx,edx
	mov word ptr [ebp-0x88],dx
	cmp eax,ebx
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[ebp-0x88]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x54],si
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x4C]
	xor ecx,ecx
	mov word ptr [ebp-0x54],cx
	cmp eax,ebx
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[ebp-0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x64],si
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp-0x64],ax
	mov eax,dword ptr [ebp-0x5C]
	cmp eax,ebx
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp-0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov esi,dword ptr [ebp-0x14]
	cmp esi,ebx
	sete al
	test al,al
	je Block25

 Block22:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp esi,ebx
	je Block69

 Block23:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax
	jmp Block69

 Block25:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x28],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],8
	test esi,esi
	je Block5

 Block26:
	lea ecx,[ebp-0x38]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp-0x1C],edi
	test eax,eax
	je Block29

 Block27:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0x24]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x24]
	mov edi,ecx
	mov dword ptr [ebp-0x1C],edi
	test eax,eax
	jge Block29

 Block28:
	cmp eax,0x80004002
	jne Block1

 Block29:
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],0xB
	jne Block32

 Block30:
	mov eax,dword ptr [ebp-0x30]
	xor edx,edx
	mov word ptr [ebp-0x38],dx
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea eax,[ebp-0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block33:
	test edi,edi
	sete al
	mov byte ptr [ebp-4],7
	test al,al
	jne Block37

 Block34:
	test edi,edi
	je Block36

 Block35:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block36:
	inc ebx
	jmp Block25

 Block37:
	mov dword ptr [ebp-0x20],ebx
	test edi,edi
	je Block39

 Block38:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block39:
	mov ecx,dword ptr [ebp+0x10]
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	mov esi,dword ptr [ebp+0xC]
	mov ebx,dword ptr [esi]
	cmp ebx,dword ptr [esi+8]
	mov dword ptr [ebp-0x24],ebx
	jge Block68

 Block40:
	lea ebx,[ebx]

 Block41:
	cmp dword ptr [ebp+0x18],0
	mov dword ptr [ebp-0x18],ebx
	je Block45

 Block42:
	mov eax,0x55555556
	imul dword ptr [ebp+0x14]
	mov edi,edx
	shr edi,0x1F
	add edi,edx
	mov ecx,offset _D_G_RAND
	je Block44

 Block43:
	call CRand32::Random
	xor edx,edx
	div edi
	add edx,ebx
	mov dword ptr [ebp-0x18],edx
	jmp Block45

 Block44:
	call CRand32::Random
	mov dword ptr [ebp-0x18],eax

 Block45:
	xor eax,eax
	mov dword ptr [ebp-0x78],0
	mov dword ptr [ebp-0x70],eax
	mov dword ptr [ebp-0x6C],eax
	mov dword ptr [ebp-0x68],eax
	mov eax,dword ptr [esi+0xC]
	mov ecx,dword ptr [esi+4]
	lea edx,[ebp-0x78]
	push edx
	mov edx,dword ptr [ebp-0x18]
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	push edx
	mov byte ptr [ebp-4],0xC
	call CWvsPhysicalSpace2D::GetFootholdRange
	mov eax,dword ptr [ebp-0x6C]
	mov dword ptr [ebp-0x1C],eax
	test eax,eax
	je Block67

 Block46:
	mov ecx,dword ptr [ebp+0x10]
	push 0xFFFFFFFF
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::InsertBefore
	mov ebx,eax
	mov eax,0x20
	mov dword ptr [ebp-0x44],ebx
	call __chkstk
	mov edi,esp
	push 0
	push 0
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x90],esp
	mov dword ptr [eax],0
	lea eax,[ebp-0x1C]
	push eax
	mov byte ptr [ebp-4],0xD
	call ZList<long>::GetNext
	add esp,4
	mov ecx,offset _D_G_RAND
	mov esi,eax
	call CRand32::Random
	xor edx,edx
	mov ecx,5
	div ecx
	mov eax,dword ptr [esi]
	lea ecx,[edx+eax-2]
	mov edx,dword ptr [ebp-0x18]
	push ecx
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x8C],esp
	mov dword ptr [eax],0
	mov esi,dword ptr [ebp-0x20]
	push 0
	push 0
	push 0
	mov ecx,offset _D_G_RAND
	mov byte ptr [ebp-4],0xE
	call CRand32::Random
	test esi,esi
	je Block48

 Block47:
	xor edx,edx
	div esi
	mov eax,edx

 Block48:
	push 0xA
	push edi
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp-0x3C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x14]
	lea eax,[ebp-0x38]
	mov byte ptr [ebp-4],0xF
	push eax
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x10
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp-0x3C],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block54

 Block49:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x40]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	mov edi,eax
	mov eax,dword ptr [esi]
	test edi,edi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp-0x40]
	test eax,eax
	je Block51

 Block50:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block51:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block53

 Block52:
	cmp edi,0x80004002
	jne Block70

 Block53:
	mov ebx,dword ptr [ebp-0x44]

 Block54:
	lea eax,[ebp-0x28]
	push eax
	mov byte ptr [ebp-4],0x11
	call CAnimationDisplayer::LoadLayer_0
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx]
	add esp,0x28
	cmp esi,eax
	je Block59

 Block55:
	mov dword ptr [ebx],eax
	test eax,eax
	je Block57

 Block56:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block57:
	test esi,esi
	je Block59

 Block58:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block59:
	mov eax,dword ptr [ebp-0x28]
	test eax,eax
	je Block61

 Block60:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block61:
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],0xC
	jne Block64

 Block62:
	mov eax,dword ptr [ebp-0x30]
	xor ecx,ecx
	mov word ptr [ebp-0x38],cx
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea edx,[ebp-0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block65:
	cmp dword ptr [ebp-0x1C],0
	jne Block46

 Block66:
	mov ebx,dword ptr [ebp-0x24]
	mov esi,dword ptr [ebp+0xC]

 Block67:
	lea ecx,[ebp-0x78]
	mov byte ptr [ebp-4],7
	mov dword ptr [ebp-0x78],0
	call ZList<long>::RemoveAll
	add ebx,dword ptr [ebp+0x14]
	cmp ebx,dword ptr [esi+8]
	mov dword ptr [ebp-0x24],ebx
	jl Block41

 Block68:
	mov eax,dword ptr [ebp-0x14]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx

 Block69:
	lea esp,[ebp-0xA0]
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
	ret 0x14

 Block70:
	push edi
	call _com_issue_error
}
}
// TAnimation<CAnimationDisplayer::SQUIBINFO>::Update
__SUB_CLASS_THIS(00054F70, __thiscall, 19190,  TAnimation<CAnimationDisplayer::SQUIBINFO>, void, long) {
__asm {

 Block0:
	push ecx
	push ebx
	mov ebx,ecx
	mov eax,dword ptr [ebx+0xC]
	mov dword ptr [esp+4],eax
	test eax,eax
	je Block6

 Block1:
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]

 Block2:
	mov esi,eax
	lea eax,[esp+0xC]
	push eax
	call ZList<CAnimationDisplayer::SQUIBINFO>::GetNext
	add esp,4
	push edi
	mov ecx,eax
	call CAnimationDisplayer::SQUIBINFO::Update
	test eax,eax
	je Block4

 Block3:
	push esi
	mov ecx,ebx
	call ZList<CAnimationDisplayer::SQUIBINFO>::RemoveAt

 Block4:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	jne Block2

 Block5:
	pop edi
	pop esi

 Block6:
	pop ebx
	pop ecx
	ret 4
}
}
// CAnimationDisplayer::LoadSingleLayer
_SUB_EXCEPTION_HANDLER(4BC10)
__SUB(0004BC10, __cdecl, 18518,  _x_com_ptr<IWzGr2DLayer>, NakedParam<_x_com_ptr<IWzCanvas>>, int32_t, NakedParam<_x_com_ptr<IWzVector2D>>, long, long, NakedParam<_x_com_ptr<IWzGr2DLayer>>, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4BC10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x48
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x58]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x10],0
	mov eax,dword ptr [esp+0x6C]
	test eax,eax
	sete cl
	mov dword ptr [esp+0x60],2
	test cl,cl
	je Block8

 Block1:
	mov esi,dword ptr [esp+0x68]
	mov dword ptr [esi],0
	mov byte ptr [esp+0x60],1
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	mov eax,dword ptr [esp+0x74]
	mov byte ptr [esp+0x60],0
	test eax,eax
	je Block5

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block5:
	mov eax,dword ptr [esp+0x80]
	mov dword ptr [esp+0x60],0xFFFFFFFF
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov eax,esi
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x54
	ret

 Block8:
	mov ecx,dword ptr [esp+0x8C]
	test ecx,ecx
	jle Block13

 Block9:
	test eax,eax
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	mov edx,dword ptr [eax]
	push ecx
	mov esi,eax
	push eax
	mov eax,dword ptr [edx+0x5C]
	call eax
	test eax,eax
	jge Block13

 Block12:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block13:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
	push ecx
	call edi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	mov eax,3
	mov word ptr [esp+0x18],ax
	mov dword ptr [esp+0x20],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x60],4
	test ecx,ecx
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x1C]
	push eax
	push 0
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x2C]
	push edx
	call IWzGr2D::CreateLayer
	mov esi,8
	mov byte ptr [esp+0x60],6
	cmp word ptr [esp+0x18],si
	jne Block24

 Block18:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block20:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block21:
	mov byte ptr [esp+0x60],7
	cmp word ptr [esp+0x28],si
	jne Block25

 Block22:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block26

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block24:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x18]
	push ecx
	call ebx
	jmp Block21

 Block25:
	lea eax,[esp+0x28]
	push eax
	call ebx

 Block26:
	mov eax,dword ptr [esp+0x74]
	mov esi,dword ptr [esp+0x10]
	test eax,eax
	sete cl
	test cl,cl
	sete cl
	test cl,cl
	je Block35

 Block27:
	mov ecx,0xD
	mov word ptr [esp+0x38],cx
	mov dword ptr [esp+0x40],eax
	test eax,eax
	je Block29

 Block28:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block29:
	mov byte ptr [esp+0x60],8
	test esi,esi
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,esi
	call IWzVector2D::Putorigin
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x60],7
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea eax,[esp+0x38]
	push eax
	call ebx

 Block35:
	mov eax,dword ptr [esp+0x80]
	test eax,eax
	sete cl
	test cl,cl
	sete cl
	test cl,cl
	je Block44

 Block36:
	mov ecx,0xD
	mov word ptr [esp+0x38],cx
	mov dword ptr [esp+0x40],eax
	test eax,eax
	je Block38

 Block37:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block38:
	mov byte ptr [esp+0x60],9
	test esi,esi
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,esi
	call IWzGr2DLayer::Putoverlay
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x60],7
	jne Block43

 Block41:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea eax,[esp+0x38]
	push eax
	call ebx

 Block44:
	test esi,esi
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	mov edx,dword ptr [esp+0x70]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xD8]
	push edx
	push esi
	call eax
	test eax,eax
	jge Block48

 Block47:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block48:
	mov edx,dword ptr [esp+0x84]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xB4]
	push edx
	push esi
	call eax
	test eax,eax
	jge Block50

 Block49:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block50:
	mov edx,dword ptr [esp+0x88]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xE0]
	shl edx,0x18
	or edx,0xFFFFFF
	push edx
	push esi
	call eax
	test eax,eax
	jge Block52

 Block51:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block52:
	lea ecx,[esp+0x48]
	push ecx
	call edi
	lea edx,[esp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block54

 Block53:
	push eax
	call _com_issue_error

 Block54:
	lea eax,[esp+0x38]
	mov bl,0xA
	push eax
	mov byte ptr [esp+0x64],bl
	call edi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	mov ecx,dword ptr [esp+0x7C]
	lea edx,[esp+0x48]
	push edx
	mov edx,dword ptr [esp+0x7C]
	lea eax,[esp+0x3C]
	push eax
	push ecx
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x70],0xB
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x38],di
	jne Block59

 Block57:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	mov byte ptr [esp+0x60],7
	cmp word ptr [esp+0x48],di
	jne Block63

 Block61:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block64:
	push ecx
	mov ecx,dword ptr [esp+0x70]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x70]
	mov dword ptr [esp+0x18],esp
	test eax,eax
	je Block66

 Block65:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block66:
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x1C],esp
	push esi
	call edx
	call CAnimationDisplayer::LoadCanvas
	mov eax,dword ptr [esi]
	mov edi,dword ptr [esp+0x70]
	mov ecx,dword ptr [eax+4]
	add esp,8
	push esi
	mov dword ptr [edi],esi
	call ecx
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0x64],2
	call eax
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x60],1
	test eax,eax
	je Block68

 Block67:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block68:
	mov eax,dword ptr [esp+0x74]
	mov byte ptr [esp+0x60],0
	test eax,eax
	je Block70

 Block69:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block70:
	mov eax,dword ptr [esp+0x80]
	mov dword ptr [esp+0x60],0xFFFFFFFF
	test eax,eax
	je Block72

 Block71:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block72:
	mov eax,edi
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x54
	ret
}
}
// CAnimationDisplayer::Effect_SkillPrepare
_SUB_EXCEPTION_HANDLER(5B840)
__SUB_CLASS_THIS(0005B840, __thiscall, 18598,  CAnimationDisplayer, void, unsigned long, const wchar_t*, int32_t, NakedParam<_x_com_ptr<IWzVector2D>>, NakedParam<_x_com_ptr<IWzGr2DLayer>>, long, long, int32_t, long, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5B840
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x4C],ecx
	xor esi,esi
	mov dword ptr [ebp-4],esi
	mov dword ptr [ebp-0x1C],esi
	mov dword ptr [ebp-0x18],esi
	or edi,0xFFFFFFFF
	cmp dword ptr [ebp+0x20],edi
	mov ebx,3
	mov byte ptr [ebp-4],bl
	mov dword ptr [ebp-0x20],edi
	jl Block32

 Block1:
	test edi,edi
	jl Block3

 Block2:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push edi
	call __itow
	add esp,0xC
	mov esi,eax
	jmp Block4

 Block3:
	mov esi,offset _S___3

 Block4:
	lea eax,[ebp-0x48]
	push 0x3DA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebp+0xC]
	mov eax,dword ptr [eax]
	push esi
	push ecx
	push eax
	lea edx,[ebp-0x18]
	push edx
	mov byte ptr [ebp-4],4
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x48]
	add esp,0x10
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	push 0
	push 0xFF
	push ebx
	push ecx
	mov ecx,dword ptr [ebp+0x18]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x18]
	mov dword ptr [ebp-0x24],esp
	test eax,eax
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block8:
	mov ecx,dword ptr [ebp+0x2C]
	mov edx,dword ptr [ebp+0x28]
	push ecx
	push edx
	push ecx
	mov ecx,dword ptr [ebp+0x14]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x14]
	mov dword ptr [ebp-0x24],esp
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block10:
	mov ecx,dword ptr [ebp+0x10]
	mov esi,dword ptr [ebp-0x18]
	push ecx
	lea edx,[ebp-0x14]
	push esi
	push edx
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	mov ecx,dword ptr [ebp-0x14]
	test ecx,ecx
	sete al
	mov byte ptr [ebp-4],5
	test al,al
	jne Block41

 Block11:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block43

 Block12:
	mov edx,dword ptr [ebp+0x1C]
	mov word ptr [ebp-0x44],bx
	mov dword ptr [ebp-0x3C],edx
	mov ecx,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],7
	test ecx,ecx
	je Block44

 Block13:
	mov ebx,dword ptr [ebp-0x34]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x30]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp-0x2C]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [ebp-0x28]
	mov edi,dword ptr [ecx]
	mov dword ptr [eax+0xC],ebx
	mov ebx,dword ptr [ebp-0x44]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x40]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x38]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x24]
	neg eax
	sbb eax,eax
	and eax,0x20
	push eax
	mov esi,ecx
	push ecx
	mov ecx,dword ptr [edi+0x110]
	call ecx
	test eax,eax
	jge Block15

 Block14:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block15:
	mov esi,8
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x44],si
	jne Block18

 Block16:
	mov eax,dword ptr [ebp-0x3C]
	xor edx,edx
	mov word ptr [ebp-0x44],dx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea eax,[ebp-0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x34],si
	jne Block22

 Block20:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea edx,[ebp-0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	push 0xFFFFFFFF
	lea ecx,[ebp-0x1C]
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::InsertBefore
	mov esi,dword ptr [eax]
	mov ecx,dword ptr [ebp-0x14]
	cmp esi,ecx
	je Block28

 Block24:
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp-0x14]
	test ecx,ecx
	je Block26

 Block25:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+4]
	call ecx
	mov ecx,dword ptr [ebp-0x14]

 Block26:
	test esi,esi
	je Block28

 Block27:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax
	mov ecx,dword ptr [ebp-0x14]

 Block28:
	mov ebx,3
	mov byte ptr [ebp-4],bl
	test ecx,ecx
	je Block30

 Block29:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax

 Block30:
	mov edi,dword ptr [ebp-0x20]
	inc edi
	cmp edi,dword ptr [ebp+0x20]
	mov dword ptr [ebp-0x20],edi
	jle Block1

 Block31:
	mov esi,dword ptr [ebp-0x18]

 Block32:
	push ecx
	mov ecx,dword ptr [ebp+0x18]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x18]
	mov dword ptr [ebp-0x24],esp
	test eax,eax
	je Block34

 Block33:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block34:
	mov edx,dword ptr [ebp+8]
	lea ecx,[ebp-0x1C]
	push ecx
	mov ecx,dword ptr [ebp-0x4C]
	push edx
	call CAnimationDisplayer::RegisterPrepareAnimation
	mov byte ptr [ebp-4],2
	test esi,esi
	je Block36

 Block35:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block36:
	lea ecx,[ebp-0x1C]
	mov byte ptr [ebp-4],1
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block38

 Block37:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block38:
	mov eax,dword ptr [ebp+0x18]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block40

 Block39:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block40:
	lea esp,[ebp-0x5C]
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
	ret 0x28

 Block41:
	mov byte ptr [ebp-4],bl
	test ecx,ecx
	je Block32

 Block42:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax
	jmp Block32

 Block43:
	push eax
	call _com_issue_error

 Block44:
	push 0x80004003
	call _com_issue_error
}
}
// TAnimation<CAnimationDisplayer::FOLLOWINFO>::~TAnimation<CAnimationDisplayer::FOLLOWINFO>
__SUB_CLASS_THIS0(00041500, __thiscall, 19363,  TAnimation<CAnimationDisplayer::FOLLOWINFO>, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::FOLLOWINFO>::`vftable'
	jmp  ZList<CAnimationDisplayer::FOLLOWINFO>::RemoveAll
}
}
// CAnimationDisplayer::~CAnimationDisplayer
_SUB_EXCEPTION_HANDLER(425C0)
__SUB_CLASS_THIS0(000425C0, __thiscall, 18530,  CAnimationDisplayer, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_425C0
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
	int 3// TODO: 	mov dword ptr [esi],offset CAnimationDisplayer::`vftable'
	mov eax,dword ptr [esi+0x1C0]
	mov dword ptr [esp+0x14],0x14
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x1BC]
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0x1B8]
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0x1B4]
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0x1B0]
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+0x1AC]
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov eax,dword ptr [esi+0x1A8]
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov eax,dword ptr [esi+0x1A4]
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	lea ecx,[esi+0x190]
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::FOOTHOLDINFO>::`vftable'
	call ZList<CAnimationDisplayer::FOOTHOLDINFO>::RemoveAll
	lea ecx,[esi+0x17C]
	int 3// TODO: 	mov dword ptr [esi+0x178],offset BulletContainer<CBullet>::`vftable'
	mov byte ptr [esp+0x14],0x13
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<CBullet>>::`vftable'
	call ZList<ZRef<CBullet>>::RemoveAll
	mov eax,dword ptr [esi+0x174]
	mov byte ptr [esp+0x14],0x12
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	lea ecx,[esi+0x160]
	mov byte ptr [esp+0x14],0x11
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::USERSTATEINFO>::`vftable'
	call ZList<CAnimationDisplayer::USERSTATEINFO>::RemoveAll
	lea ecx,[esi+0x148]
	mov byte ptr [esp+0x14],0x10
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, ZRef<CAnimationDisplayer::TAnimation<CAnimationDisplayer::CHAINLIGHTNINGINFO>>, unsigned long>::`vftable'
	call ZMap<unsigned long, ZRef<CAnimationDisplayer::TAnimation<CAnimationDisplayer::CHAINLIGHTNINGINFO>>, unsigned long>::RemoveAll
	lea ecx,[esi+0x134]
	mov byte ptr [esp+0x14],0xF
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::FADEINFO>::`vftable'
	call ZList<CAnimationDisplayer::FADEINFO>::RemoveAll
	lea ecx,[esi+0x120]
	mov byte ptr [esp+0x14],0xE
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::MOTIONBLURINFO>::`vftable'
	call ZList<CAnimationDisplayer::MOTIONBLURINFO>::RemoveAll
	lea ecx,[esi+0x10C]
	mov byte ptr [esp+0x14],0xD
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::FOLLOWINFO>::`vftable'
	call ZList<CAnimationDisplayer::FOLLOWINFO>::RemoveAll
	lea ecx,[esi+0xF8]
	mov byte ptr [esp+0x14],0xC
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::NEWYEARINFO>::`vftable'
	call ZList<CAnimationDisplayer::NEWYEARINFO>::RemoveAll
	lea ecx,[esi+0xE4]
	mov byte ptr [esp+0x14],0xB
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::FIRECRACKER>::`vftable'
	call ZList<CAnimationDisplayer::FIRECRACKER>::RemoveAll
	lea ecx,[esi+0xD0]
	mov byte ptr [esp+0x14],0xA
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::HOOKING_CHAIN_INFO>::`vftable'
	call ZList<CAnimationDisplayer::HOOKING_CHAIN_INFO>::RemoveAll
	lea ecx,[esi+0xBC]
	mov byte ptr [esp+0x14],9
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::CHAINLIGHTNINGINFO>::`vftable'
	call ZList<CAnimationDisplayer::CHAINLIGHTNINGINFO>::RemoveAll
	lea ecx,[esi+0xA8]
	mov byte ptr [esp+0x14],8
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::EXPLOSIONINFO>::`vftable'
	call ZList<CAnimationDisplayer::EXPLOSIONINFO>::RemoveAll
	lea ecx,[esi+0x94]
	mov byte ptr [esp+0x14],7
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::FALLINGINFO>::`vftable'
	call ZList<CAnimationDisplayer::FALLINGINFO>::RemoveAll
	lea ecx,[esi+0x80]
	mov byte ptr [esp+0x14],6
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::ABSORBITEM>::`vftable'
	call ZList<CAnimationDisplayer::ABSORBITEM>::RemoveAll
	lea ecx,[esi+0x6C]
	mov byte ptr [esp+0x14],5
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::RESERVEDINFO>::`vftable'
	call ZList<CAnimationDisplayer::RESERVEDINFO>::RemoveAll
	lea ecx,[esi+0x58]
	mov byte ptr [esp+0x14],4
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::SQUIBINFO>::`vftable'
	call ZList<CAnimationDisplayer::SQUIBINFO>::RemoveAll
	lea ecx,[esi+0x44]
	mov byte ptr [esp+0x14],3
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::REPEATINFO>::`vftable'
	call ZList<CAnimationDisplayer::REPEATINFO>::RemoveAll
	lea ecx,[esi+0x30]
	mov byte ptr [esp+0x14],2
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::ONETIMEINFO>::`vftable'
	call ZList<CAnimationDisplayer::ONETIMEINFO>::RemoveAll
	lea ecx,[esi+0x1C]
	mov byte ptr [esp+0x14],1
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<CAnimationDisplayer::PREPAREINFO>>::`vftable'
	call ZList<ZRef<CAnimationDisplayer::PREPAREINFO>>::RemoveAll
	lea ecx,[esi+4]
	mov byte ptr [esp+0x14],0
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, ZRef<CAnimationDisplayer::PREPAREINFO>, unsigned long>::`vftable'
	call ZMap<unsigned long, ZRef<CAnimationDisplayer::PREPAREINFO>, unsigned long>::RemoveAll
	mov dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance],0
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CAnimationDisplayer::ABSORBITEM::Update
_SUB_EXCEPTION_HANDLER(41650)
__SUB_CLASS_THIS(00041650, __thiscall, 18821,  CAnimationDisplayer::ABSORBITEM, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_41650
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x64]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x18],esi
	mov eax,dword ptr [esi+8]
	mov ecx,dword ptr [esi+0xC]
	mov dword ptr [esp+0x1C],eax
	mov eax,dword ptr [esi]
	xor ebp,ebp
	mov dword ptr [esp+0x20],ecx
	test eax,eax
	je Block9

 Block1:
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push eax
	call CUserPool::GetUser
	mov edi,eax
	test edi,edi
	je Block11

 Block2:
	cmp dword ptr [edi+0x638],ebp
	jne Block11

 Block3:
	mov esi,dword ptr [esi+0x18]
	test esi,esi
	jl Block7

 Block4:
	cmp esi,3
	jge Block7

 Block5:
	mov edx,dword ptr [edi+0x2E44]
	mov esi,dword ptr [edx+esi*8+4]
	test esi,esi
	je Block8

 Block6:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x10]
	add esi,4
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x10]
	mov dword ptr [esp+0x14],eax
	lea eax,[esp+0x34]
	push eax
	mov ecx,esi
	call edx
	mov ebx,dword ptr [eax+4]
	mov ebp,1
	jmp Block12

 Block7:
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [eax+0x10]
	lea esi,[edi+4]
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x10]
	mov dword ptr [esp+0x14],eax
	lea eax,[esp+0x24]
	push eax
	mov ecx,esi
	call edx
	lea ecx,[edi+0x88]
	lea esi,[eax+4]
	call CAvatar::GetHeight
	mov ebx,dword ptr [esi]
	cdq
	sub eax,edx
	sar eax,1
	sub ebx,eax
	mov ebp,1
	jmp Block12

 Block8:
	mov ebx,dword ptr [esp+0x74]
	mov ebp,1
	jmp Block12

 Block9:
	mov eax,dword ptr [esi+4]
	mov ecx,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	push eax
	call CMobPool::GetMob
	mov edi,eax
	test edi,edi
	je Block11

 Block10:
	mov edx,dword ptr [edi+4]
	mov edx,dword ptr [edx+0x10]
	lea esi,[edi+4]
	lea eax,[esp+0x34]
	push eax
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x10]
	mov dword ptr [esp+0x14],eax
	lea eax,[esp+0x24]
	push eax
	mov ecx,esi
	call edx
	mov ecx,edi
	lea esi,[eax+4]
	call CMob::GetHeight
	mov ebx,dword ptr [esi]
	cdq
	sub eax,edx
	sar eax,1
	sub ebx,eax
	mov ebp,1
	jmp Block12

 Block11:
	mov ebx,dword ptr [esp+0x74]

 Block12:
	mov esi,dword ptr [esp+0x74]
	mov eax,dword ptr [esp+0x18]
	sub esi,dword ptr [eax+0x14]
	cmp esi,0x2BC
	jge Block66

 Block13:
	test ebp,ebp
	je Block66

 Block14:
	cmp esi,0x1A4
	mov edi,0xFF
	jle Block16

 Block15:
	mov eax,0x1A4
	sub eax,esi
	lea ecx,[eax+eax*2]
	shl ecx,6
	mov eax,0xEA0EA0EB
	imul ecx
	add edx,ecx
	sar edx,8
	mov ecx,edx
	shr ecx,0x1F
	lea edi,[edx+ecx+0xFF]

 Block16:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x24]
	push edx
	call ebp
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	lea ecx,[esp+0x34]
	push ecx
	mov dword ptr [esp+0x70],0
	call ebp
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax+0x10]
	mov byte ptr [esp+0x6C],1
	test ecx,ecx
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea edx,[esp+0x74]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x6C],2
	test ecx,ecx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea eax,[esp+0x24]
	push eax
	lea edx,[esp+0x38]
	push edx
	push 0xFF
	push edi
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x74]
	mov byte ptr [esp+0x6C],1
	test eax,eax
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block26:
	mov edi,8
	mov byte ptr [esp+0x6C],0
	cmp word ptr [esp+0x34],di
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	cmp word ptr [esp+0x24],di
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov eax,esi
	imul eax,dword ptr [esp+0x14]
	mov ecx,0x2BC
	sub ecx,esi
	mov edx,ecx
	imul ecx,dword ptr [esp+0x20]
	imul edx,dword ptr [esp+0x1C]
	add edx,eax
	lea ebp,[esi-0x15E]
	imul esi,ebx
	mov eax,0x5D9F7391
	imul edx
	sar edx,8
	add ecx,esi
	mov edi,edx
	shr edi,0x1F
	add edi,edx
	mov eax,0x5D9F7391
	imul ecx
	mov eax,ebp
	imul eax,ebp
	sar edx,8
	mov esi,edx
	lea ecx,[eax+eax*4]
	shl ecx,5
	shr esi,0x1F
	add esi,edx
	mov eax,0x447A7A9
	imul ecx
	sar edx,0xD
	mov ecx,edx
	shr ecx,0x1F
	add esi,edx
	mov edx,dword ptr [esp+0x18]
	lea ebp,[ecx+esi-0x28]
	mov ecx,dword ptr [edx+0x10]
	test ecx,ecx
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	lea eax,[esp+0x34]
	push eax
	call IWzVector2D::Getorigin
	movzx ecx,word ptr [eax]
	mov dword ptr [esp+0x6C],3
	cmp cx,9
	je Block43

 Block37:
	cmp cx,0xD
	je Block43

 Block38:
	mov edx,0x4009
	cmp cx,dx
	je Block41

 Block39:
	mov edx,0x400D
	cmp cx,dx
	je Block41

 Block40:
	xor eax,eax
	jmp Block44

 Block41:
	mov eax,dword ptr [eax+8]
	test eax,eax
	je Block40

 Block42:
	mov eax,dword ptr [eax]
	jmp Block44

 Block43:
	mov eax,dword ptr [eax+8]

 Block44:
	push eax
	lea ecx,[esp+0x78]
	mov dword ptr [esp+0x78],0
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	test eax,eax
	jge Block47

 Block45:
	cmp eax,0x80004002
	je Block47

 Block46:
	push eax
	call _com_issue_error

 Block47:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x6C],6
	jne Block50

 Block48:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x54]
	push edx
	call esi
	lea eax,[esp+0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block53

 Block52:
	push eax
	call _com_issue_error

 Block53:
	lea ecx,[esp+0x44]
	mov bl,7
	push ecx
	mov byte ptr [esp+0x70],bl
	call esi
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	mov esi,dword ptr [esp+0x74]
	mov byte ptr [esp+0x6C],8
	test esi,esi
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	lea eax,[esp+0x54]
	push eax
	lea ecx,[esp+0x48]
	push ecx
	push ebp
	push edi
	mov ecx,esi
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [esp+0x6C],bl
	cmp word ptr [esp+0x44],di
	jne Block60

 Block58:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov byte ptr [esp+0x6C],6
	cmp word ptr [esp+0x54],di
	jne Block64

 Block62:
	mov eax,dword ptr [esp+0x5C]
	xor ecx,ecx
	mov word ptr [esp+0x54],cx
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea edx,[esp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block65:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov dword ptr [esp+0x70],0xFFFFFFFF
	call ecx
	xor eax,eax
	jmp Block67

 Block66:
	mov eax,1

 Block67:
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x5C
	ret 4
}
}
// TAnimation<CAnimationDisplayer::REPEATINFO>::~TAnimation<CAnimationDisplayer::REPEATINFO>
__SUB_CLASS_THIS0(00041460, __thiscall, 19173,  TAnimation<CAnimationDisplayer::REPEATINFO>, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::REPEATINFO>::`vftable'
	jmp  ZList<CAnimationDisplayer::REPEATINFO>::RemoveAll
}
}
// CAnimationDisplayer::RegisterFallingAnimation
_SUB_EXCEPTION_HANDLER(59B40)
__SUB_CLASS_THIS(00059B40, __thiscall, 18541,  CAnimationDisplayer, void, const wchar_t*, int32_t, const tagRECT&, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_59B40
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x58
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x54]
	push eax
	call edi
	lea ecx,[ebp-0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor esi,esi
	add esp,8
	cmp eax,esi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x44]
	push edx
	mov dword ptr [ebp-4],esi
	call edi
	lea eax,[ebp-0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	mov eax,dword ptr [ebp+8]
	push esi
	push esi
	lea ecx,[ebp-0x54]
	push ecx
	lea edx,[ebp-0x44]
	push edx
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],1
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[ebp-0x64]
	push ecx
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x2C]
	mov dword ptr [ebp-0x2C],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov esi,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x64],si
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x5C]
	xor edx,edx
	mov word ptr [ebp-0x64],dx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[ebp-0x64]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x44],si
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x3C]
	xor ecx,ecx
	mov word ptr [ebp-0x44],cx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[ebp-0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x54],si
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp-0x54],ax
	mov eax,dword ptr [ebp-0x4C]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp-0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov edi,dword ptr [ebp-0x2C]
	test edi,edi
	sete al
	test al,al
	je Block24

 Block22:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test edi,edi
	je Block78

 Block23:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax
	jmp Block78

 Block24:
	call get_update_time
	lea ecx,[ebx+0x94]
	mov dword ptr [ebp-0x28],eax
	call ZList<CAnimationDisplayer::FALLINGINFO>::AddTail_
	mov ecx,dword ptr [ebp+0xC]
	mov ebx,eax
	mov eax,dword ptr [ebp+0x10]
	mov dword ptr [ebx],ecx
	mov edx,dword ptr [eax]
	mov dword ptr [ebx+4],edx
	mov ecx,dword ptr [eax+4]
	mov dword ptr [ebx+8],ecx
	mov edx,dword ptr [eax+8]
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebx+0xC],edx
	mov eax,dword ptr [eax+0xC]
	mov dword ptr [ebp-0x14],esp
	push 0x3E5
	push ecx
	mov dword ptr [ebx+0x10],eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],8
	test edi,edi
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea edx,[ebp-0x24]
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],9
	call get_int32
	add esp,8
	mov dword ptr [ebx+0x14],eax
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x24],si
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x3E6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x24]
	mov byte ptr [ebp-4],0xA
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xB
	call get_int32
	add esp,8
	mov dword ptr [ebx+0x18],eax
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x24],si
	jne Block33

 Block31:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x14],esp
	push 0x617
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x24]
	push ecx
	mov byte ptr [ebp-4],0xC
	mov ecx,edi
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xD
	call get_int32
	add esp,8
	mov dword ptr [ebx+0x1C],eax
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x24],si
	jne Block37

 Block35:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block38:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x3E8
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x24]
	mov byte ptr [ebp-4],0xE
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xF
	call get_int32
	add esp,8
	mov dword ptr [ebx+0x20],eax
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x24],si
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x1ABA
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x24]
	mov byte ptr [ebp-4],0x10
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x11
	call get_int32
	add esp,8
	mov dword ptr [ebx+0x24],eax
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x24],si
	jne Block45

 Block43:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block46:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x14],esp
	push 0x1AA6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x24]
	push ecx
	mov byte ptr [ebp-4],0x12
	mov ecx,edi
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x13
	call get_int32
	add esp,8
	mov dword ptr [ebx+0x28],eax
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x24],si
	jne Block49

 Block47:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block50:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x1ADB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x24]
	mov byte ptr [ebp-4],0x14
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x15
	call get_int32
	add eax,dword ptr [ebp-0x28]
	mov esi,dword ptr [ebp+0x14]
	add eax,esi
	add esp,8
	cmp word ptr [ebp-0x24],8
	mov dword ptr [ebx+0x2C],eax
	mov byte ptr [ebp-4],7
	jne Block53

 Block51:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x1AAC
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x24]
	mov byte ptr [ebp-4],0x16
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x17
	call get_int32
	add eax,dword ptr [ebp-0x28]
	add esp,8
	add eax,esi
	cmp word ptr [ebp-0x24],8
	mov dword ptr [ebx+0x30],eax
	mov byte ptr [ebp-4],7
	jne Block57

 Block55:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov dword ptr [ebp-0x28],0

 Block59:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	mov eax,dword ptr [ebp-0x28]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x24]
	push ecx
	mov byte ptr [ebp-4],0x18
	mov ecx,edi
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x19
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp-0x34],esi
	test eax,eax
	je Block62

 Block60:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0x30]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x30]
	mov esi,ecx
	mov dword ptr [ebp-0x34],esi
	test eax,eax
	jge Block62

 Block61:
	cmp eax,0x80004002
	jne Block1

 Block62:
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],0x1B
	jne Block65

 Block63:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block66:
	test esi,esi
	sete al
	test al,al
	jne Block75

 Block67:
	push 0xFFFFFFFF
	lea ecx,[ebx+0x34]
	call ZArray<_x_com_ptr<IWzProperty>>::InsertBefore
	mov ecx,dword ptr [eax]
	mov dword ptr [ebp-0x14],ecx
	cmp ecx,esi
	je Block72

 Block68:
	mov dword ptr [eax],esi
	test esi,esi
	je Block70

 Block69:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx
	mov ecx,dword ptr [ebp-0x14]

 Block70:
	test ecx,ecx
	je Block72

 Block71:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx

 Block72:
	mov byte ptr [ebp-4],7
	test esi,esi
	je Block74

 Block73:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block74:
	inc dword ptr [ebp-0x28]
	jmp Block59

 Block75:
	mov byte ptr [ebp-4],7
	test esi,esi
	je Block77

 Block76:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block77:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ecx

 Block78:
	lea esp,[ebp-0x74]
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
	ret 0x10
}
}
// TAnimation<CAnimationDisplayer::EXPLOSIONINFO>::Update
__SUB_CLASS_THIS(0004EC50, __thiscall, 19266,  TAnimation<CAnimationDisplayer::EXPLOSIONINFO>, void, long) {
__asm {

 Block0:
	push ecx
	push ebx
	mov ebx,ecx
	mov eax,dword ptr [ebx+0xC]
	mov dword ptr [esp+4],eax
	test eax,eax
	je Block6

 Block1:
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]

 Block2:
	mov esi,eax
	lea eax,[esp+0xC]
	push eax
	call ZList<CAnimationDisplayer::EXPLOSIONINFO>::GetNext
	add esp,4
	push edi
	mov ecx,eax
	call CAnimationDisplayer::EXPLOSIONINFO::Update
	test eax,eax
	je Block4

 Block3:
	push esi
	mov ecx,ebx
	call ZList<CAnimationDisplayer::EXPLOSIONINFO>::RemoveAt

 Block4:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	jne Block2

 Block5:
	pop edi
	pop esi

 Block6:
	pop ebx
	pop ecx
	ret 4
}
}
// CAnimationDisplayer::Effect_General
_SUB_EXCEPTION_HANDLER(55D10)
__SUB_CLASS_THIS(00055D10, __thiscall, 18584,  CAnimationDisplayer, void, const wchar_t*, int32_t, NakedParam<_x_com_ptr<IWzVector2D>>, long, long, NakedParam<_x_com_ptr<IWzGr2DLayer>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_55D10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov eax,dword ptr [esp+0x58]
	push 0
	push 0xFF
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x64]
	mov eax,esp
	mov dword ptr [esp+0x68],esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x64]
	mov dword ptr [esp+0x48],1
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	mov ecx,dword ptr [esp+0x60]
	mov edx,dword ptr [esp+0x5C]
	push ecx
	push edx
	push ecx
	mov ecx,dword ptr [esp+0x64]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x64]
	mov dword ptr [esp+0x6C],esp
	test eax,eax
	je Block4

 Block3:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block4:
	mov ecx,dword ptr [esp+0x60]
	mov edx,dword ptr [esp+0x5C]
	push ecx
	push edx
	lea eax,[esp+0x7C]
	push eax
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	sete cl
	mov byte ptr [esp+0x38],2
	test cl,cl
	jne Block22

 Block5:
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
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	lea edx,[esp+0x10]
	push edx
	mov byte ptr [esp+0x3C],3
	call esi
	lea eax,[esp+0x10]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov ecx,dword ptr [esp+0x58]
	mov byte ptr [esp+0x38],4
	test ecx,ecx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x14]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x38],3
	cmp word ptr [esp+0x10],si
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x18]
	xor ecx,ecx
	mov word ptr [esp+0x10],cx
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[esp+0x10]
	push edx
	call edi

 Block15:
	mov byte ptr [esp+0x38],2
	cmp word ptr [esp+0x20],si
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x20]
	push ecx
	call edi

 Block19:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x54],esp
	mov dword ptr [eax],0
	mov edx,dword ptr [esp+0x5C]
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x64]
	mov dword ptr [esp+0x5C],esp
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block21:
	mov ecx,ebp
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov eax,dword ptr [esp+0x58]

 Block22:
	mov byte ptr [esp+0x38],1
	test eax,eax
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block24:
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x38],0
	test eax,eax
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block26:
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test eax,eax
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block28:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x2C
	ret 0x1C
}
}
// TAnimation<CAnimationDisplayer::USERSTATEINFO>::Update
__SUB_CLASS_THIS(00041E40, __thiscall, 19468,  TAnimation<CAnimationDisplayer::USERSTATEINFO>, void, long) {
__asm {

 Block0:
	push ecx
	push ebx
	mov ebx,ecx
	mov eax,dword ptr [ebx+0xC]
	mov dword ptr [esp+4],eax
	test eax,eax
	je Block6

 Block1:
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]

 Block2:
	mov esi,eax
	lea eax,[esp+0xC]
	push eax
	call ZList<CAnimationDisplayer::USERSTATEINFO>::GetNext
	add esp,4
	push edi
	mov ecx,eax
	call CAnimationDisplayer::USERSTATEINFO::Update
	test eax,eax
	je Block4

 Block3:
	push esi
	mov ecx,ebx
	call ZList<CAnimationDisplayer::USERSTATEINFO>::RemoveAt

 Block4:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	jne Block2

 Block5:
	pop edi
	pop esi

 Block6:
	pop ebx
	pop ecx
	ret 4
}
}
// CAnimationDisplayer::LoadRotateLayer
_SUB_EXCEPTION_HANDLER(4AFB0)
__SUB(0004AFB0, __cdecl, 18516,  _x_com_ptr<IWzGr2DLayer>, NakedParam<_x_com_ptr<IWzProperty>>, int32_t, NakedParam<_x_com_ptr<IWzVector2D>>, long, long, NakedParam<_x_com_ptr<IWzGr2DLayer>>, long, long, long, long, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4AFB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov dword ptr [ebp-0x40],ebx
	lea eax,[ebp-0x34]
	push eax
	mov dword ptr [ebp-4],3
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	mov edx,3
	mov word ptr [ebp-0x20],dx
	mov dword ptr [ebp-0x18],ebx
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],5
	cmp ecx,ebx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov edi,dword ptr [ebp+8]
	lea eax,[ebp-0x34]
	push eax
	lea edx,[ebp-0x20]
	push edx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push edi
	call IWzGr2D::CreateLayer
	mov esi,8
	mov dword ptr [ebp-0x40],1
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x20],si
	jne Block7

 Block5:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	cmp eax,ebx
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block8:
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x34],si
	jne Block11

 Block9:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	cmp eax,ebx
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov eax,dword ptr [ebp+0x14]
	cmp eax,ebx
	sete cl
	test cl,cl
	sete cl
	test cl,cl
	je Block23

 Block13:
	mov ecx,0xD
	mov word ptr [ebp-0x20],cx
	mov dword ptr [ebp-0x18],eax
	cmp eax,ebx
	je Block15

 Block14:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block15:
	mov esi,dword ptr [edi]
	mov byte ptr [ebp-4],6
	cmp esi,ebx
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	mov edx,dword ptr [ebp-0x20]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x1C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x18]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x14]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,ebx
	jge Block19

 Block18:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block19:
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],3
	jne Block22

 Block20:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	cmp eax,ebx
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea edx,[ebp-0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov eax,dword ptr [ebp+0x20]
	cmp eax,ebx
	sete cl
	test cl,cl
	sete cl
	test cl,cl
	je Block34

 Block24:
	mov ecx,0xD
	mov word ptr [ebp-0x20],cx
	mov dword ptr [ebp-0x18],eax
	cmp eax,ebx
	je Block26

 Block25:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block26:
	mov esi,dword ptr [edi]
	mov byte ptr [ebp-4],7
	cmp esi,ebx
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	mov edx,dword ptr [ebp-0x20]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x1C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x18]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x14]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	cmp eax,ebx
	jge Block30

 Block29:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block30:
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],3
	jne Block33

 Block31:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	cmp eax,ebx
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[ebp-0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x38],esp
	push 0x3E9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],8
	cmp ecx,ebx
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	lea edx,[ebp-0x20]
	push edx
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],9
	mov dword ptr [ebp-0x40],3
	call get_int32
	add esp,8
	test eax,eax
	jne Block39

 Block37:
	cmp dword ptr [ebp+0x10],ebx
	je Block39

 Block38:
	lea edi,[eax+1]
	jmp Block40

 Block39:
	xor edi,edi

 Block40:
	cmp word ptr [ebp-0x20],8
	mov dword ptr [ebp-4],3
	mov dword ptr [ebp-0x40],1
	jne Block43

 Block41:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	cmp eax,ebx
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov ebx,dword ptr [ebp+0x30]
	test edi,edi
	je Block48

 Block45:
	test ebx,ebx
	je Block48

 Block46:
	mov eax,0xB60B60B7
	imul ebx
	add edx,ebx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul eax,0x5A
	mov ecx,ebx
	sub ecx,eax
	je Block48

 Block47:
	mov eax,1
	jmp Block49

 Block48:
	xor eax,eax

 Block49:
	mov edx,dword ptr [ebp+8]
	mov esi,dword ptr [edx]
	test esi,esi
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xD8]
	push eax
	push esi
	call edx
	test eax,eax
	jge Block53

 Block52:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block53:
	mov eax,dword ptr [ebp+0x24]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x38],esp
	push 0x3E7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],0xA
	test ecx,ecx
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	lea edx,[ebp-0x20]
	push edx
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	mov ecx,dword ptr [ebp+8]
	mov esi,dword ptr [ecx]
	mov byte ptr [ebp-4],0xB
	test esi,esi
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	push eax
	call get_int32
	mov edx,dword ptr [esi]
	add esp,8
	push eax
	mov eax,dword ptr [edx+0xB4]
	push esi
	call eax
	test eax,eax
	jge Block59

 Block58:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block59:
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],3
	jne Block62

 Block60:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea edx,[ebp-0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov eax,dword ptr [ebp+8]
	mov esi,dword ptr [eax]
	test esi,esi
	jne Block65

 Block64:
	push 0x80004003
	call _com_issue_error

 Block65:
	mov edx,dword ptr [ebp+0x28]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xE0]
	shl edx,0x18
	or edx,0xFFFFFF
	push edx
	push esi
	call eax
	test eax,eax
	jge Block67

 Block66:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block67:
	test ebx,ebx
	je Block158

 Block68:
	mov eax,0xB60B60B7
	imul ebx
	add edx,ebx
	sar edx,6
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	imul ecx,0x5A
	mov edx,ebx
	sub edx,ecx
	je Block158

 Block69:
	test edi,edi
	jne Block71

 Block70:
	neg ebx
	mov dword ptr [ebp+0x30],ebx

 Block71:
	cmp dword ptr [ebp+0x34],0
	je Block137

 Block72:
	mov edi,dword ptr [ebp+8]
	mov ecx,dword ptr [edi]
	test ecx,ecx
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	lea eax,[ebp-0x24]
	push eax
	call IWzGr2DLayer::Getrb
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0xC
	test ecx,ecx
	jne Block76

 Block75:
	push 0x80004003
	call _com_issue_error

 Block76:
	call IWzVector2D::Getrx
	mov eax,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block78

 Block77:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block78:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	jne Block80

 Block79:
	push 0x80004003
	call _com_issue_error

 Block80:
	lea eax,[ebp-0x24]
	push eax
	call IWzGr2DLayer::Getrb
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0xD
	test ecx,ecx
	jne Block82

 Block81:
	push 0x80004003
	call _com_issue_error

 Block82:
	call IWzVector2D::Getry
	mov eax,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block84

 Block83:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block84:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x34]
	push eax
	call esi
	lea ecx,[ebp-0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block86

 Block85:
	push eax
	call _com_issue_error

 Block86:
	lea edx,[ebp-0x20]
	push edx
	mov byte ptr [ebp-4],0xE
	call esi
	lea eax,[ebp-0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block88

 Block87:
	push eax
	call _com_issue_error

 Block88:
	mov ecx,dword ptr [edi]
	mov bl,0xF
	mov byte ptr [ebp-4],bl
	test ecx,ecx
	jne Block90

 Block89:
	push 0x80004003
	call _com_issue_error

 Block90:
	lea edx,[ebp-0x24]
	push edx
	call IWzGr2DLayer::Getrb
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x10
	test ecx,ecx
	jne Block92

 Block91:
	push 0x80004003
	call _com_issue_error

 Block92:
	lea eax,[ebp-0x34]
	push eax
	lea edx,[ebp-0x20]
	push edx
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block94

 Block93:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block94:
	mov ebx,8
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0x20],bx
	jne Block97

 Block95:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block98:
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x34],bx
	jne Block101

 Block99:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block102:
	fild dword ptr [ebp+0x30]
	mov ecx,dword ptr [edi]
	fst qword ptr [ebp-0x18]
	fdiv qword ptr [__real_4066800000000000]
	fmul qword ptr [_D_PI__215]
	fstp qword ptr [ebp-0x48]
	test ecx,ecx
	jne Block104

 Block103:
	push 0x80004003
	call _com_issue_error

 Block104:
	lea edx,[ebp-0x38]
	push edx
	call IWzGr2DLayer::Getrb
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x11
	test ecx,ecx
	jne Block106

 Block105:
	push 0x80004003
	call _com_issue_error

 Block106:
	call IWzVector2D::Getrx
	mov dword ptr [ebp-0x24],eax
	fild dword ptr [ebp-0x24]
	mov eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],3
	fmul qword ptr [__real_3fe0000000000000]
	fstp qword ptr [ebp-0x58]
	test eax,eax
	je Block108

 Block107:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block108:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	jne Block110

 Block109:
	push 0x80004003
	call _com_issue_error

 Block110:
	lea eax,[ebp-0x24]
	push eax
	call IWzGr2DLayer::Getrb
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x12
	test ecx,ecx
	jne Block112

 Block111:
	push 0x80004003
	call _com_issue_error

 Block112:
	call IWzVector2D::Getry
	mov dword ptr [ebp-0x38],eax
	fild dword ptr [ebp-0x38]
	mov eax,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],3
	fstp qword ptr [ebp-0x2C]
	test eax,eax
	je Block114

 Block113:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block114:
	fld qword ptr [ebp-0x48]
	call __CIcos
	fstp qword ptr [ebp-0x3C]
	fld qword ptr [ebp-0x48]
	call __CIsin
	fld qword ptr [ebp-0x3C]
	fld st(0)
	lea eax,[ebp-0x50]
	fld qword ptr [ebp-0x58]
	push eax
	fmul st(1),st
	fld st(3)
	fld qword ptr [ebp-0x2C]
	fmul st(1),st
	fxch st(3)
	fsubrp st(1),st(0)
	fxch st(4)
	fmul st,st(1)
	fxch st(3)
	fmul st,st(2)
	faddp st(3),st
	fsubrp st(3),st
	fxch st(2)
	fstp qword ptr [ebp-0x58]
	fsubp st(1),st(0)
	fstp qword ptr [ebp-0x2C]
	call esi
	lea ecx,[ebp-0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block116

 Block115:
	push eax
	call _com_issue_error

 Block116:
	mov ecx,dword ptr [edi]
	mov byte ptr [ebp-4],0x13
	test ecx,ecx
	jne Block118

 Block117:
	push 0x80004003
	call _com_issue_error

 Block118:
	fld qword ptr [ebp-0x18]
	lea edx,[ebp-0x50]
	push edx
	sub esp,8
	fstp qword ptr [esp]
	call IWzVector2D::Rotate
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x50],bx
	jne Block121

 Block119:
	xor eax,eax
	mov word ptr [ebp-0x50],ax
	mov eax,dword ptr [ebp-0x48]
	test eax,eax
	je Block122

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block122

 Block121:
	lea ecx,[ebp-0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block122:
	mov edi,dword ptr [ebp+8]
	mov esi,dword ptr [edi]
	test esi,esi
	jne Block124

 Block123:
	push 0x80004003
	call _com_issue_error

 Block124:
	fld qword ptr [ebp-0x2C]
	call __ftol2_sse
	fld qword ptr [ebp-0x58]
	push eax
	call __ftol2_sse
	push eax
	mov ecx,esi
	call IWzShape2D::Offset
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x34]
	push edx
	call esi
	lea eax,[ebp-0x34]
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
	lea ecx,[ebp-0x20]
	mov bl,0x14
	push ecx
	mov byte ptr [ebp-4],bl
	call esi
	lea edx,[ebp-0x20]
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
	mov ecx,dword ptr [edi]
	mov byte ptr [ebp-4],0x15
	test ecx,ecx
	jne Block130

 Block129:
	push 0x80004003
	call _com_issue_error

 Block130:
	lea eax,[ebp-0x34]
	push eax
	mov eax,dword ptr [ebp+0x1C]
	lea edx,[ebp-0x20]
	push edx
	mov edx,dword ptr [ebp+0x18]
	push eax
	push edx
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x20],si
	jne Block133

 Block131:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	test eax,eax
	je Block134

 Block132:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block134

 Block133:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block134:
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x34],si
	jne Block136

 Block135:
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	jmp Block170

 Block136:
	lea eax,[ebp-0x34]
	push eax
	jmp Block175

 Block137:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x34]
	push ecx
	call esi
	lea edx,[ebp-0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block139

 Block138:
	push eax
	call _com_issue_error

 Block139:
	lea eax,[ebp-0x20]
	mov bl,0x16
	push eax
	mov byte ptr [ebp-4],bl
	call esi
	lea ecx,[ebp-0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block141

 Block140:
	push eax
	call _com_issue_error

 Block141:
	mov edi,dword ptr [ebp+8]
	mov ecx,dword ptr [edi]
	mov byte ptr [ebp-4],0x17
	test ecx,ecx
	jne Block143

 Block142:
	push 0x80004003
	call _com_issue_error

 Block143:
	lea edx,[ebp-0x34]
	push edx
	mov edx,dword ptr [ebp+0x1C]
	lea eax,[ebp-0x20]
	push eax
	mov eax,dword ptr [ebp+0x18]
	push edx
	push eax
	call IWzVector2D::RelMove
	mov byte ptr [ebp-4],bl
	mov ebx,8
	cmp word ptr [ebp-0x20],bx
	jne Block146

 Block144:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	test eax,eax
	je Block147

 Block145:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block147

 Block146:
	lea edx,[ebp-0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block147:
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x34],bx
	jne Block150

 Block148:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	test eax,eax
	je Block151

 Block149:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block151

 Block150:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block151:
	lea edx,[ebp-0x20]
	push edx
	call esi
	lea eax,[ebp-0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block153

 Block152:
	push eax
	call _com_issue_error

 Block153:
	mov ecx,dword ptr [edi]
	mov byte ptr [ebp-4],0x18
	test ecx,ecx
	jne Block155

 Block154:
	push 0x80004003
	call _com_issue_error

 Block155:
	fild dword ptr [ebp+0x30]
	lea edx,[ebp-0x20]
	push edx
	sub esp,8
	fstp qword ptr [esp]
	call IWzVector2D::Rotate
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x20],bx
	jne Block157

 Block156:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	jmp Block171

 Block157:
	lea ecx,[ebp-0x20]
	jmp Block174

 Block158:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x34]
	push edx
	call esi
	lea eax,[ebp-0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block160

 Block159:
	push eax
	call _com_issue_error

 Block160:
	lea ecx,[ebp-0x20]
	mov bl,0x19
	push ecx
	mov byte ptr [ebp-4],bl
	call esi
	lea edx,[ebp-0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block162

 Block161:
	push eax
	call _com_issue_error

 Block162:
	mov eax,dword ptr [ebp+8]
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x1A
	test ecx,ecx
	jne Block164

 Block163:
	push 0x80004003
	call _com_issue_error

 Block164:
	lea edx,[ebp-0x34]
	push edx
	mov edx,dword ptr [ebp+0x1C]
	lea eax,[ebp-0x20]
	push eax
	mov eax,dword ptr [ebp+0x18]
	push edx
	push eax
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x20],si
	jne Block167

 Block165:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	test eax,eax
	je Block168

 Block166:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block168

 Block167:
	lea edx,[ebp-0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block168:
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x34],si
	jne Block173

 Block169:
	xor eax,eax
	mov word ptr [ebp-0x34],ax

 Block170:
	mov eax,dword ptr [ebp-0x2C]

 Block171:
	test eax,eax
	je Block176

 Block172:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block176

 Block173:
	lea ecx,[ebp-0x34]

 Block174:
	push ecx

 Block175:
	call dword ptr [ZImports::_VariantClear]

 Block176:
	mov ebx,dword ptr [ebp+0x2C]
	xor edi,edi
	lea ebx,[ebx]

 Block177:
	mov eax,0x20
	call __alloca_probe_8
	mov eax,esp
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp-0x24],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],0x1B
	test ecx,ecx
	je Block3

 Block178:
	lea edx,[ebp-0x20]
	push edx
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	cmp word ptr [ebp-0x20],0
	mov byte ptr [ebp-4],0x1C
	je Block201

 Block179:
	lea eax,[ebp-0x20]
	push eax
	lea ecx,[ebp-0x38]
	push ecx
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x1D
	mov dword ptr [ebp-0x24],0
	mov dword ptr [ebp-0x44],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block181

 Block180:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block181:
	lea ecx,[ebp-0x24]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	test eax,eax
	jge Block183

 Block182:
	cmp eax,0x80004002
	jne Block1

 Block183:
	mov eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],0x1F
	test eax,eax
	je Block185

 Block184:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block185:
	mov esi,dword ptr [ebp-0x24]
	test esi,esi
	sete al
	test al,al
	jne Block202

 Block186:
	test ebx,ebx
	jle Block190

 Block187:
	test esi,esi
	je Block3

 Block188:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0x5C]
	push ebx
	push esi
	call ecx
	test eax,eax
	jge Block190

 Block189:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block190:
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x44],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block192

 Block191:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block192:
	mov edx,dword ptr [ebp+8]
	mov eax,dword ptr [edx]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x44],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block194

 Block193:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block194:
	call CAnimationDisplayer::LoadCanvas
	add esp,8
	mov byte ptr [ebp-4],0x1C
	test esi,esi
	je Block196

 Block195:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block196:
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],3
	jne Block199

 Block197:
	mov eax,dword ptr [ebp-0x18]
	xor edx,edx
	mov word ptr [ebp-0x20],dx
	test eax,eax
	je Block200

 Block198:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc edi
	jmp Block177

 Block199:
	lea eax,[ebp-0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block200:
	inc edi
	jmp Block177

 Block201:
	lea ecx,[ebp-0x20]
	push ecx
	jmp Block208

 Block202:
	mov byte ptr [ebp-4],0x1C
	test esi,esi
	je Block204

 Block203:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block204:
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],3
	jne Block207

 Block205:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	test eax,eax
	je Block209

 Block206:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block209

 Block207:
	lea edx,[ebp-0x20]
	push edx

 Block208:
	call dword ptr [ZImports::_VariantClear]

 Block209:
	mov eax,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block211

 Block210:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block211:
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block213

 Block212:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block213:
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block215

 Block214:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block215:
	mov eax,dword ptr [ebp+8]
	lea esp,[ebp-0x68]
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
	ret
}
}
// CAnimationDisplayer::NEWYEARINFO::Update
_SUB_EXCEPTION_HANDLER(52850)
__SUB_CLASS_THIS(00052850, __thiscall, 18878,  CAnimationDisplayer::NEWYEARINFO, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_52850
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x64]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov ecx,dword ptr [esp+0x74]
	mov eax,ecx
	sub eax,dword ptr [ebp+0x24]
	test eax,eax
	jle Block4

 Block1:
	mov eax,dword ptr [ebp+0x2C]
	xor ebx,ebx
	cmp eax,ebx
	je Block3

 Block2:
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push ebx
	push eax
	call CSoundMan::StopSE
	mov dword ptr [ebp+0x2C],ebx

 Block3:
	mov eax,1
	jmp Block56

 Block4:
	mov eax,dword ptr [ebp+0x20]
	sub ecx,eax
	js Block55

 Block5:
	mov ecx,dword ptr [ebp+0x18]
	xor ebx,ebx
	add ecx,eax
	cmp dword ptr [ebp+0x1C],ebx
	mov dword ptr [ebp+0x20],ecx
	mov dword ptr [esp+0x14],ebx
	jle Block53

 Block6:
	xor edi,edi
	mov dword ptr [esp+0x74],edi
	mov eax,dword ptr [esp+0x14]
	sub eax,ebx
	mov dword ptr [esp+0x6C],ebx
	je Block19

 Block7:
	sub eax,1
	je Block14

 Block8:
	sub eax,1
	jne Block26

 Block9:
	push ebx
	push 0xFF
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [eax],ebx
	push 0xFFFFFFC4
	push 0xE6
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	push ebx
	mov dword ptr [eax],ebx
	mov eax,dword ptr [ebp+0x30]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x90],3
	mov dword ptr [esp+0x54],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block11

 Block10:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block11:
	lea ecx,[esp+0x3C]
	push ecx
	mov byte ptr [esp+0x94],bl
	call CAnimationDisplayer::LoadLayer_0
	mov eax,dword ptr [eax]
	add esp,0x28
	cmp eax,ebx
	je Block13

 Block12:
	mov edx,dword ptr [eax]
	mov edi,eax
	push eax
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x78],edi
	call eax

 Block13:
	mov eax,dword ptr [esp+0x18]
	jmp Block24

 Block14:
	push ebx
	push 0xFF
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],ebx
	push 0xFFFFFFC4
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	push ebx
	mov dword ptr [eax],ebx
	mov eax,dword ptr [ebp+0x30]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x90],2
	mov dword ptr [esp+0x50],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block16:
	lea eax,[esp+0x40]
	push eax
	mov byte ptr [esp+0x94],bl
	call CAnimationDisplayer::LoadLayer_0
	mov eax,dword ptr [eax]
	add esp,0x28
	cmp eax,ebx
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov edi,eax
	push eax
	mov dword ptr [esp+0x78],edi
	call edx

 Block18:
	mov eax,dword ptr [esp+0x1C]
	jmp Block24

 Block19:
	push ebx
	push 0xFF
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],ebx
	push 0xFFFFFFC4
	push 0xFFFFFF1A
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	push ebx
	mov dword ptr [eax],ebx
	mov eax,dword ptr [ebp+0x30]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x90],1
	mov dword ptr [esp+0x50],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block21:
	lea eax,[esp+0x44]
	push eax
	mov byte ptr [esp+0x94],bl
	call CAnimationDisplayer::LoadLayer_0
	mov eax,dword ptr [eax]
	add esp,0x28
	cmp eax,ebx
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov edi,eax
	push eax
	mov dword ptr [esp+0x78],edi
	call edx

 Block23:
	mov eax,dword ptr [esp+0x20]

 Block24:
	cmp eax,ebx
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block26:
	cmp edi,ebx
	sete al
	cmp al,bl
	jne Block57

 Block27:
	mov ecx,dword ptr [_D_G_GR]
	cmp ecx,ebx
	je Block59

 Block28:
	lea eax,[esp+0x28]
	push eax
	call IWzGr2D::Getcenter
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x6C],4
	mov word ptr [esp+0x34],cx
	mov dword ptr [esp+0x3C],eax
	cmp eax,ebx
	je Block30

 Block29:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block30:
	mov byte ptr [esp+0x6C],5
	cmp edi,ebx
	je Block59

 Block31:
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,edi
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x6C],6
	cmp esi,ebx
	je Block59

 Block32:
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x64]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x50]
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	cmp eax,ebx
	jge Block34

 Block33:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block34:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x6C],5
	cmp eax,ebx
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block36:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x6C],4
	jne Block39

 Block37:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,ebx
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x6C],bl
	cmp eax,ebx
	je Block42

 Block41:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block42:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x54]
	push ecx
	call esi
	lea edx,[esp+0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block60

 Block43:
	lea eax,[esp+0x44]
	push eax
	mov byte ptr [esp+0x70],7
	call esi
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block60

 Block44:
	lea edx,[esp+0x54]
	push edx
	lea eax,[esp+0x48]
	push eax
	push ebx
	mov ecx,edi
	mov byte ptr [esp+0x78],8
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x6C],7
	cmp word ptr [esp+0x44],si
	jne Block47

 Block45:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	cmp eax,ebx
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	mov byte ptr [esp+0x6C],bl
	cmp word ptr [esp+0x54],si
	jne Block51

 Block49:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	cmp eax,ebx
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push ebx
	mov dword ptr [eax],ebx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x3C],esp
	push edi
	call eax
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [esp+0x70],0xFFFFFFFF
	call edx
	mov eax,dword ptr [esp+0x14]
	inc eax
	cmp eax,dword ptr [ebp+0x1C]
	mov dword ptr [esp+0x14],eax
	jl Block6

 Block53:
	cmp dword ptr [ebp+0x2C],ebx
	jne Block55

 Block54:
	mov eax,dword ptr [ebp+0x28]
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push 1
	push 0x64
	push eax
	call CSoundMan::PlaySE
	mov dword ptr [ebp+0x2C],eax

 Block55:
	xor eax,eax

 Block56:
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x5C
	ret 4

 Block57:
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	cmp edi,ebx
	je Block55

 Block58:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx
	jmp Block55

 Block59:
	push 0x80004003
	call _com_issue_error

 Block60:
	push eax
	call _com_issue_error
}
}
// CAnimationDisplayer::MobBullet::Update
_SUB_EXCEPTION_HANDLER(3C500)
__SUB_CLASS_THIS(0003C500, __thiscall, 19028,  CAnimationDisplayer::MobBullet, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C500
	mov eax,dword ptr fs:[0]
	push eax
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov ecx,dword ptr [edi+0x18]
	mov eax,dword ptr [edi+0x50]
	mov ebx,dword ptr [esp+0x20]
	cmp ecx,eax
	je Block7

 Block1:
	mov ecx,ebx
	sub ecx,eax
	mov dword ptr [esp+0x20],ecx
	fild dword ptr [esp+0x20]
	fdiv qword ptr [__real_4008000000000000]
	fiadd dword ptr [edi+0x54]
	call __ftol2_sse
	lea edx,[esp+0x20]
	push edx
	mov ecx,edi
	mov dword ptr [edi+0x54],eax
	call CBullet::GetOrigin
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x18],0
	test esi,esi
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	fild dword ptr [edi+0x54]
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0x80]
	sub esp,8
	fstp qword ptr [esp]
	push esi
	call ecx
	test eax,eax
	jge Block5

 Block4:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block5:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block7:
	mov dword ptr [edi+0x50],ebx
	xor eax,eax
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 4
}
}
// TAnimation<CAnimationDisplayer::HOOKING_CHAIN_INFO>::Update
__SUB_CLASS_THIS(00055010, __thiscall, 19304,  TAnimation<CAnimationDisplayer::HOOKING_CHAIN_INFO>, void, long) {
__asm {

 Block0:
	push ecx
	push ebx
	mov ebx,ecx
	mov eax,dword ptr [ebx+0xC]
	mov dword ptr [esp+4],eax
	test eax,eax
	je Block6

 Block1:
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]

 Block2:
	mov esi,eax
	lea eax,[esp+0xC]
	push eax
	call ZList<CAnimationDisplayer::HOOKING_CHAIN_INFO>::GetNext
	add esp,4
	push edi
	mov ecx,eax
	call CAnimationDisplayer::HOOKING_CHAIN_INFO::Update
	test eax,eax
	je Block4

 Block3:
	push esi
	mov ecx,ebx
	call ZList<CAnimationDisplayer::HOOKING_CHAIN_INFO>::RemoveAt

 Block4:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	jne Block2

 Block5:
	pop edi
	pop esi

 Block6:
	pop ebx
	pop ecx
	ret 4
}
}
// CAnimationDisplayer::Effect_Cool
_SUB_EXCEPTION_HANDLER(4A700)
__SUB_CLASS_THIS(0004A700, __thiscall, 18560,  CAnimationDisplayer, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4A700
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x44]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0xC],ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x24]
	push eax
	call esi
	lea ecx,[esp+0x24]
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
	lea edx,[esp+0x14]
	push edx
	mov dword ptr [esp+0x50],0
	call esi
	lea eax,[esp+0x14]
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
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x20]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x14E3
	push eax
	mov byte ptr [esp+0x68],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x60],2
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x48]
	push ecx
	mov byte ptr [esp+0x64],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x54],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0xC],0
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
	cmp word ptr [esp+0x34],8
	mov esi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x4C],5
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x34]
	push eax
	call esi

 Block13:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x4C],6
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x14]
	push edx
	call esi

 Block17:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x4C],7
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x24]
	push ecx
	call esi

 Block21:
	mov esi,dword ptr [esp+8]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x14],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block23

 Block22:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block23:
	mov ecx,dword ptr [esp+0x5C]
	mov edx,dword ptr [esp+0x58]
	push ecx
	mov ecx,dword ptr [esp+0x14]
	push edx
	call CAnimationDisplayer::Effect_BasicFloat
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test esi,esi
	je Block25

 Block24:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block25:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x48
	ret 8
}
}
// CAnimationDisplayer::Effect_ByItem
_SUB_EXCEPTION_HANDLER(4F330)
__SUB_CLASS_THIS(0004F330, __thiscall, 18606,  CAnimationDisplayer, void, long, long, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4F330
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
	mov dword ptr [esp+0x24],ecx
	xor edi,edi
	mov dword ptr [esp+0x1C],edi
	lea eax,[esp+0x20]
	push 0x9AB
	push eax
	mov dword ptr [esp+0x88],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x80],1
	cmp eax,edi
	je Block2

 Block1:
	mov eax,dword ptr [eax]
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov ecx,dword ptr [esp+0x90]
	push ecx
	push eax
	lea edx,[esp+0x24]
	push edx
	call ZXString16::Format
	mov ecx,dword ptr [esp+0x2C]
	add esp,0xC
	mov byte ptr [esp+0x80],0
	cmp ecx,edi
	je Block5

 Block4:
	call _xbstr_t::Data_t::Release

 Block5:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
	push eax
	call ebp
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x84],2
	call ebp
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov eax,dword ptr [esp+0x1C]
	push edi
	push edi
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x34]
	push edx
	push ecx
	mov dword ptr [esp+0xA4],esp
	mov ecx,esp
	mov bl,3
	push eax
	mov byte ptr [esp+0x98],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x94],4
	cmp dword ptr [_D_G_RM],edi
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea ecx,[esp+0x7C]
	push ecx
	mov byte ptr [esp+0x98],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x94]
	mov dword ptr [esp+0x94],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block14

 Block12:
	cmp eax,0x80004002
	je Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	mov ebx,8
	mov byte ptr [esp+0x80],7
	cmp word ptr [esp+0x68],bx
	jne Block21

 Block15:
	mov eax,dword ptr [esp+0x70]
	xor edx,edx
	mov word ptr [esp+0x68],dx
	cmp eax,edi
	je Block17

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block17:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block18:
	mov byte ptr [esp+0x80],8
	cmp word ptr [esp+0x28],bx
	jne Block22

 Block19:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,edi
	je Block23

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block21:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x68]
	push eax
	call esi
	jmp Block18

 Block22:
	lea edx,[esp+0x28]
	push edx
	call esi

 Block23:
	mov byte ptr [esp+0x80],9
	cmp word ptr [esp+0x38],bx
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,edi
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea ecx,[esp+0x38]
	push ecx
	call esi

 Block27:
	cmp dword ptr [esp+0x94],edi
	jne Block37

 Block28:
	push edi
	push edi
	push ecx
	mov dword ptr [esp+0xA0],esp
	mov ecx,esp
	push offset _S_FAIL__1
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x9C]
	mov byte ptr [esp+0x8C],0xA
	cmp ecx,edi
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	lea edx,[esp+0x64]
	push edx
	mov byte ptr [esp+0x90],9
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x88],0xB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x94]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block33

 Block31:
	cmp eax,0x80004002
	je Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	mov byte ptr [esp+0x80],9
	cmp word ptr [esp+0x58],bx
	jne Block36

 Block34:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	cmp eax,edi
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea ecx,[esp+0x58]
	push ecx
	call esi

 Block37:
	mov dword ptr [esp+0x18],edi
	lea edx,[esp+0x94]
	push 0x3D2
	push edx
	mov byte ptr [esp+0x88],0xC
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea ecx,[esp+0x1C]
	push ecx
	push eax
	mov byte ptr [esp+0x8C],0xD
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0xA0]
	add esp,0xC
	mov byte ptr [esp+0x80],0xC
	cmp eax,edi
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block39:
	mov edx,dword ptr [esp+0x8C]
	push edi
	push 0xFF
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov eax,dword ptr [esp+0x98]
	mov dword ptr [esp+0xA4],esp
	push edx
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x34]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0xB0],esp
	cmp eax,edi
	je Block41

 Block40:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block41:
	mov esi,dword ptr [esp+0xAC]
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0xB8],esp
	mov dword ptr [eax],esi
	cmp esi,edi
	je Block43

 Block42:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block43:
	lea eax,[esp+0x38]
	push eax
	call CAnimationDisplayer::LoadLayer_0
	add esp,0x28
	mov eax,dword ptr [esp+0x14]
	cmp eax,edi
	sete cl
	mov byte ptr [esp+0x80],0xE
	test cl,cl
	jne Block61

 Block44:
	lea edx,[esp+0x58]
	push edx
	call ebp
	lea eax,[esp+0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	lea ecx,[esp+0x48]
	mov bl,0xF
	push ecx
	mov byte ptr [esp+0x84],bl
	call ebp
	lea edx,[esp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0x10
	cmp ecx,edi
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea eax,[esp+0x58]
	push eax
	lea edx,[esp+0x4C]
	push edx
	push edi
	call IWzGr2DLayer::Animate
	mov byte ptr [esp+0x80],bl
	mov ebx,8
	cmp word ptr [esp+0x48],bx
	jne Block53

 Block51:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	cmp eax,edi
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov byte ptr [esp+0x80],0xE
	cmp word ptr [esp+0x58],bx
	jne Block57

 Block55:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	cmp eax,edi
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea eax,[esp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block58:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x98],esp
	mov dword ptr [eax],edi
	push edi
	push ecx
	mov ecx,dword ptr [esp+0x20]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0xA0],esp
	cmp eax,edi
	je Block60

 Block59:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block60:
	mov ecx,dword ptr [esp+0x30]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov eax,dword ptr [esp+0x14]

 Block61:
	mov byte ptr [esp+0x80],0xC
	cmp eax,edi
	je Block63

 Block62:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block63:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x80],9
	cmp eax,edi
	je Block65

 Block64:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block65:
	mov byte ptr [esp+0x80],0
	cmp esi,edi
	je Block67

 Block66:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block67:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp eax,edi
	je Block69

 Block68:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block69:
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x70
	ret 0x10
}
}
// CAnimationDisplayer::LoadLayer
_SUB_EXCEPTION_HANDLER(51B10)
__SUB(00051B10, __cdecl, 18513,  _x_com_ptr<IWzGr2DLayer>, const wchar_t*, int32_t, NakedParam<_x_com_ptr<IWzVector2D>>, long, long, NakedParam<_x_com_ptr<IWzGr2DLayer>>, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_51B10
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
	mov dword ptr [esp+0x18],0
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push eax
	mov dword ptr [esp+0x5C],1
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
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x5C],2
	call esi
	lea eax,[esp+0x20]
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
	mov eax,dword ptr [esp+0x64]
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x24]
	push edx
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	mov bl,3
	push eax
	mov byte ptr [esp+0x68],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x64],4
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x4C]
	push ecx
	mov byte ptr [esp+0x68],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x60],5
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [esp+0x5C],6
	mov dword ptr [esp+0x14],0
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
	lea ecx,[esp+0x14]
	call _x_com_ptr<IWzProperty>::_QueryUnknownComPtr
	test eax,eax
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov eax,dword ptr [esp+0x18]
	mov ebx,8
	mov byte ptr [esp+0x58],bl
	test eax,eax
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x58],9
	cmp word ptr [esp+0x40],bx
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x40]
	push ecx
	call esi

 Block17:
	mov byte ptr [esp+0x58],0xA
	cmp word ptr [esp+0x20],bx
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x20]
	push eax
	call esi

 Block21:
	mov byte ptr [esp+0x58],0xB
	cmp word ptr [esp+0x30],bx
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea edx,[esp+0x30]
	push edx
	call esi

 Block25:
	mov esi,dword ptr [esp+0x10]
	test esi,esi
	sete al
	test al,al
	jne Block37

 Block26:
	test esi,esi
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],0
	call edx
	test eax,eax
	jge Block30

 Block29:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block30:
	cmp dword ptr [esp+0x14],0
	je Block37

 Block31:
	mov eax,dword ptr [esp+0x84]
	mov ecx,dword ptr [esp+0x80]
	mov edx,dword ptr [esp+0x7C]
	push eax
	push ecx
	push edx
	push ecx
	mov ecx,dword ptr [esp+0x88]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x88]
	mov dword ptr [esp+0x2C],esp
	test eax,eax
	je Block33

 Block32:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block33:
	mov ecx,dword ptr [esp+0x84]
	mov edx,dword ptr [esp+0x80]
	push ecx
	push edx
	push ecx
	mov ecx,dword ptr [esp+0x88]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x88]
	mov dword ptr [esp+0x38],esp
	test eax,eax
	je Block35

 Block34:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block35:
	mov ecx,dword ptr [esp+0x84]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x40],esp
	push esi
	call eax
	mov edi,dword ptr [esp+0x84]
	push edi
	call CAnimationDisplayer::LoadLayer_0
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	add esp,0x28
	push esi
	mov byte ptr [esp+0x5C],1
	call edx
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x58],0
	test eax,eax
	je Block41

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block41

 Block37:
	mov edi,dword ptr [esp+0x60]
	mov dword ptr [edi],0
	mov byte ptr [esp+0x58],1
	test esi,esi
	je Block39

 Block38:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block39:
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x58],0
	test eax,eax
	je Block41

 Block40:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block41:
	mov eax,dword ptr [esp+0x78]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	test eax,eax
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block43:
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
// CAnimationDisplayer::NormalBullet::NormalBullet
_SUB_EXCEPTION_HANDLER(47760)
__SUB_CLASS_THIS(00047760, __thiscall, 18797,  CAnimationDisplayer::NormalBullet, void, long, long, NakedParam<tagPOINT>, NakedParam<tagPOINT>, NakedParam<_x_com_ptr<IWzVector2D>>, long, NakedParam<Ztl_bstr_t>, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_47760
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
	push ecx
	mov ecx,dword ptr [esp+0x38]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x18],1
	mov dword ptr [esp+0xC],esp
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [esp+0x30]
	mov eax,dword ptr [esp+0x2C]
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	push edx
	mov edx,dword ptr [esp+0x2C]
	push eax
	mov eax,dword ptr [esp+0x2C]
	push ecx
	push edx
	push eax
	mov ecx,esi
	call CBullet::_ctor_0
	mov ecx,dword ptr [esp+0x38]
	int 3// TODO: 	mov dword ptr [esi],offset CAnimationDisplayer::NormalBullet::`vftable'
	mov dword ptr [esi+0x34],0
	mov dword ptr [esi+0x38],ecx
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr [esi+0x3C],ecx
	test ecx,ecx
	je Block4

 Block3:
	add ecx,8
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x3C]

 Block4:
	mov eax,dword ptr [esp+0x44]
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [esi+0x44],eax
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esi+0x40],edx
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov ecx,dword ptr [esp+0x3C]

 Block6:
	test ecx,ecx
	je Block8

 Block7:
	call _xbstr_t::Data_t::Release

 Block8:
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 0x2C
}
}
// CAnimationDisplayer::FALLINGINFO::Update
_SUB_EXCEPTION_HANDLER(4D8B0)
__SUB_CLASS_THIS(0004D8B0, __thiscall, 18835,  CAnimationDisplayer::FALLINGINFO, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4D8B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x78
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x8C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x9C]
	mov ecx,eax
	sub ecx,dword ptr [esi+0x30]
	test ecx,ecx
	jle Block2

 Block1:
	mov eax,1
	jmp Block66

 Block2:
	mov ecx,dword ptr [esi+0x2C]
	sub eax,ecx
	js Block65

 Block3:
	mov edx,dword ptr [esi+0x24]
	add edx,ecx
	cmp dword ptr [esi+0x28],0
	mov dword ptr [esi+0x2C],edx
	mov dword ptr [esp+0x1C],0
	jle Block65

 Block4:
	push 0
	push 0
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax],0
	mov edi,dword ptr [esi+0x10]
	sub edi,dword ptr [esi+8]
	mov dword ptr [esp+0xA4],0
	mov ecx,offset _D_G_RAND
	je Block6

 Block5:
	call CRand32::Random
	xor edx,edx
	div edi
	mov eax,edx
	jmp Block7

 Block6:
	call CRand32::Random

 Block7:
	mov ecx,dword ptr [esi+8]
	mov edi,dword ptr [esi+0xC]
	add ecx,eax
	sub edi,dword ptr [esi+4]
	push ecx
	mov ecx,offset _D_G_RAND
	je Block9

 Block8:
	call CRand32::Random
	xor edx,edx
	div edi
	mov eax,edx
	jmp Block10

 Block9:
	call CRand32::Random

 Block10:
	mov edx,dword ptr [esi+4]
	add edx,eax
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],0
	xor eax,eax
	cmp dword ptr [esi],eax
	mov byte ptr [esp+0xB0],1
	sete al
	push eax
	mov eax,dword ptr [esi+0x34]
	test eax,eax
	je Block13

 Block11:
	mov edi,dword ptr [eax-4]
	test edi,edi
	je Block13

 Block12:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	div edi
	mov eax,edx
	jmp Block14

 Block13:
	mov ecx,offset _D_G_RAND
	call CRand32::Random

 Block14:
	mov ecx,dword ptr [esi+0x34]
	lea eax,[ecx+eax*4]
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block16

 Block15:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block16:
	lea ecx,[esp+0x38]
	push ecx
	mov dword ptr [esp+0xBC],0xFFFFFFFF
	call CAnimationDisplayer::LoadLayer_0
	add esp,0x28
	mov eax,dword ptr [esi+0x14]
	mov ebp,dword ptr [esi+0x18]
	mov dword ptr [esp+0x94],2
	test eax,eax
	je Block18

 Block17:
	mov ecx,offset _D_G_RAND
	lea edi,[eax-0x14]
	call CRand32::Random
	xor edx,edx
	mov ecx,0x29
	div ecx
	mov ecx,dword ptr [esi+0x14]
	mov eax,ecx
	add edx,edi
	mov edi,dword ptr [esi+0x18]
	sub eax,edx
	imul eax,ecx
	cdq
	idiv edi
	mov ebp,eax
	add ebp,edi

 Block18:
	mov edi,dword ptr [esi+0x20]
	mov ecx,offset _D_G_RAND
	sub edi,0x96
	call CRand32::Random
	xor edx,edx
	mov ecx,0x12C
	div ecx
	mov ebx,edx
	lea edx,[esp+0x3C]
	push edx
	add ebx,edi
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block67

 Block19:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x94],3
	test eax,eax
	je Block68

 Block20:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x18]
	push edx
	mov edi,eax
	push eax
	mov eax,dword ptr [ecx+0x58]
	mov dword ptr [esp+0x20],0
	call eax
	test eax,eax
	jge Block22

 Block21:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block22:
	mov ecx,dword ptr [esp+0x18]
	lea eax,[ecx+ebx]
	mov edx,3
	mov word ptr [esp+0x2C],dx
	mov dword ptr [esp+0x34],eax
	cmp dword ptr [esi],0
	mov eax,dword ptr [esi+0x14]
	mov byte ptr [esp+0x94],4
	je Block24

 Block23:
	neg eax

 Block24:
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	je Block68

 Block25:
	lea edx,[esp+0x3C]
	push edx
	lea edx,[esp+0x30]
	push edx
	push ebp
	push eax
	call IWzVector2D::RelOffset
	mov edi,8
	mov byte ptr [esp+0x94],3
	cmp word ptr [esp+0x2C],di
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov byte ptr [esp+0x94],2
	cmp word ptr [esp+0x3C],di
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x5C]
	push ecx
	call ebp
	lea edx,[esp+0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block67

 Block34:
	mov eax,3
	mov word ptr [esp+0x4C],ax
	mov dword ptr [esp+0x54],0x96
	mov edi,dword ptr [esi+0x1C]
	mov byte ptr [esp+0x94],6
	test edi,edi
	jne Block36

 Block35:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	mov edi,eax
	and edi,0x3F
	sub edi,0xFFFFFF80

 Block36:
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	je Block68

 Block37:
	lea edx,[esp+0x20]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x94],7
	test ecx,ecx
	je Block68

 Block38:
	lea eax,[esp+0x5C]
	push eax
	lea edx,[esp+0x50]
	push edx
	push 0
	push edi
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x94],6
	test eax,eax
	je Block40

 Block39:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block40:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x94],5
	jne Block47

 Block41:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block43

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block43:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block44:
	cmp word ptr [esp+0x5C],8
	mov byte ptr [esp+0x94],2
	jne Block48

 Block45:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	test eax,eax
	je Block49

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block47:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x4C]
	push ecx
	call edi
	jmp Block44

 Block48:
	lea eax,[esp+0x5C]
	push eax
	call edi

 Block49:
	lea ecx,[esp+0x7C]
	push ecx
	call ebp
	lea edx,[esp+0x7C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block67

 Block50:
	lea eax,[esp+0x6C]
	push eax
	mov byte ptr [esp+0x98],8
	call ebp
	lea ecx,[esp+0x6C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block67

 Block51:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x94],9
	test ecx,ecx
	je Block68

 Block52:
	lea edx,[esp+0x7C]
	push edx
	lea eax,[esp+0x70]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov ebp,8
	mov byte ptr [esp+0x94],8
	cmp word ptr [esp+0x6C],bp
	jne Block55

 Block53:
	mov eax,dword ptr [esp+0x74]
	xor ecx,ecx
	mov word ptr [esp+0x6C],cx
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea edx,[esp+0x6C]
	push edx
	call edi

 Block56:
	mov byte ptr [esp+0x94],2
	cmp word ptr [esp+0x7C],bp
	jne Block59

 Block57:
	xor eax,eax
	mov word ptr [esp+0x7C],ax
	mov eax,dword ptr [esp+0x84]
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea ecx,[esp+0x7C]
	push ecx
	call edi

 Block60:
	mov edx,dword ptr [esp+0x14]
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x30],esp
	test eax,eax
	je Block62

 Block61:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block62:
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterRepeatAnimation
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	test eax,eax
	je Block64

 Block63:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block64:
	mov eax,dword ptr [esp+0x1C]
	inc eax
	cmp eax,dword ptr [esi+0x28]
	mov dword ptr [esp+0x1C],eax
	jl Block4

 Block65:
	xor eax,eax

 Block66:
	mov ecx,dword ptr [esp+0x8C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x84
	ret 4

 Block67:
	push eax
	call _com_issue_error

 Block68:
	push 0x80004003
	call _com_issue_error
}
}
// CAnimationDisplayer::NormalBullet::PrepareBulletLayer
_SUB_EXCEPTION_HANDLER(4C380)
__SUB_CLASS_THIS(0004C380, __thiscall, 18800,  CAnimationDisplayer::NormalBullet, _x_com_ptr<IWzGr2DLayer>*, _x_com_ptr<IWzGr2DLayer>*, NakedParam<_x_com_ptr<IWzVector2D>>, int32_t) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C380
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x70
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x68],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [ebp+0x48],ebx
	xor edi,edi
	mov dword ptr [ebp+8],edi
	lea eax,[ebp-0x2C]
	push eax
	mov dword ptr [ebp-4],edi
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x2C]
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
	mov edx,3
	mov word ptr [ebp-0x5C],dx
	mov dword ptr [ebp-0x54],edi
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],2
	cmp ecx,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea eax,[ebp-0x2C]
	push eax
	mov eax,dword ptr [ebx+0x38]
	lea edx,[ebp-0x5C]
	push edx
	push eax
	push edi
	push edi
	push edi
	push edi
	lea edx,[ebp+0x2C]
	push edx
	call IWzGr2D::CreateLayer
	mov esi,8
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x5C],si
	jne Block7

 Block5:
	xor eax,eax
	mov word ptr [ebp-0x5C],ax
	mov eax,dword ptr [ebp-0x54]
	cmp eax,edi
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea ecx,[ebp-0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block8:
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x2C],si
	jne Block11

 Block9:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	cmp eax,edi
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov esi,dword ptr [ebp+0x2C]
	cmp esi,edi
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push esi
	call edx
	cmp eax,edi
	jge Block16

 Block15:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block16:
	mov eax,0xD
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp+0x40],eax
	cmp eax,edi
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block18:
	mov edx,dword ptr [ebp+0x38]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x3C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x40]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x44]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	mov byte ptr [ebp-4],6
	call eax
	cmp eax,edi
	jge Block20

 Block19:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block20:
	cmp word ptr [ebp+0x38],8
	mov byte ptr [ebp-4],5
	jne Block23

 Block21:
	mov eax,dword ptr [ebp+0x40]
	xor ecx,ecx
	mov word ptr [ebp+0x38],cx
	cmp eax,edi
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea edx,[ebp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov eax,dword ptr [ebx+0x44]
	cmp eax,edi
	je Block175

 Block25:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[ebp+0x34]
	push eax
	call CItemInfo::GetItemProp
	mov eax,dword ptr [ebp+0x34]
	xor edi,edi
	cmp eax,edi
	sete cl
	mov byte ptr [ebp-4],7
	test cl,cl
	je Block28

 Block26:
	mov byte ptr [ebp-4],5
	cmp eax,edi
	je Block106

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block106

 Block28:
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x3EA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],8
	cmp ecx,edi
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	lea edx,[ebp-0x6C]
	push edx
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x5C],esi
	cmp eax,edi
	je Block34

 Block31:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x60]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,edi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x60]
	cmp eax,edi
	mov esi,ecx
	mov dword ptr [ebp+0x5C],esi
	jge Block34

 Block32:
	cmp eax,0x80004002
	je Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	cmp word ptr [ebp-0x6C],8
	mov byte ptr [ebp-4],0xB
	jne Block37

 Block35:
	mov eax,dword ptr [ebp-0x64]
	xor edx,edx
	mov word ptr [ebp-0x6C],dx
	cmp eax,edi
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea eax,[ebp-0x6C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block38:
	cmp esi,edi
	sete al
	test al,al
	je Block42

 Block39:
	mov byte ptr [ebp-4],7
	cmp esi,edi
	je Block41

 Block40:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block41:
	mov eax,dword ptr [ebp+0x34]
	jmp Block26

 Block42:
	cmp esi,edi
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp+0x30]
	push ecx
	push esi
	mov dword ptr [ebp+0x30],edi
	call edx
	cmp eax,edi
	jge Block46

 Block45:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block46:
	cmp dword ptr [ebp+0x30],edi
	mov dword ptr [ebp+4],edi
	jle Block104

 Block47:
	lea esp,[esp]

 Block48:
	mov eax,0x20
	call __alloca_probe_8
	mov eax,esp
	push 0xA
	push eax
	mov eax,dword ptr [ebp+4]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x7C]
	push ecx
	mov ecx,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0xC
	mov byte ptr [ebp-4],0xB
	call IWzProperty::Getitem
	push eax
	lea edx,[ebp+0x64]
	push edx
	mov byte ptr [ebp-4],0xD
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0xE
	mov dword ptr [ebp+0x60],edi
	mov dword ptr [ebp+0x44],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block50

 Block49:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block50:
	lea ecx,[ebp+0x60]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block52

 Block51:
	cmp eax,0x80004002
	jne Block1

 Block52:
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x10
	cmp eax,edi
	je Block54

 Block53:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block54:
	cmp word ptr [ebp-0x7C],8
	mov byte ptr [ebp-4],0x11
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [ebp-0x7C],ax
	mov eax,dword ptr [ebp-0x74]
	cmp eax,edi
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[ebp-0x7C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	push offset _S_SKILL322IMGSKILL
	lea ecx,[ebp]
	call _xbstr_t::_ctor_0
	mov ebx,dword ptr [ebp+0x60]
	cmp ebx,edi
	sete al
	test al,al
	sete al
	mov byte ptr [ebp-4],0x12
	test al,al
	je Block92

 Block59:
	mov ecx,dword ptr [ebp+0x48]
	mov eax,dword ptr [ecx+0x3C]
	add ecx,0x3C
	cmp eax,edi
	je Block63

 Block60:
	mov eax,dword ptr [eax]
	cmp eax,edi
	je Block63

 Block61:
	mov eax,dword ptr [eax-4]
	shr eax,1
	cmp eax,edi
	je Block63

 Block62:
	lea edx,[ebp]
	push edx
	call _xbstr_t::operator!=
	test al,al
	je Block92

 Block63:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x1C]
	push eax
	call esi
	lea ecx,[ebp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block1

 Block64:
	lea edx,[ebp+0xC]
	push edx
	mov byte ptr [ebp-4],0x13
	call esi
	lea eax,[ebp+0xC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block1

 Block65:
	lea ecx,[ebp-0x4C]
	push ecx
	mov byte ptr [ebp-4],0x14
	call esi
	lea edx,[ebp-0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block1

 Block66:
	lea eax,[ebp-0x3C]
	push eax
	mov byte ptr [ebp-4],0x15
	call esi
	lea ecx,[ebp-0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block1

 Block67:
	mov edx,3
	mov word ptr [ebp+0x4C],dx
	mov dword ptr [ebp+0x54],0x3C
	lea eax,[ebp+0x1C]
	push eax
	lea ecx,[ebp+0xC]
	push ecx
	lea edx,[ebp-0x4C]
	push edx
	lea eax,[ebp-0x3C]
	push eax
	lea ecx,[ebp+0x4C]
	push ecx
	mov ecx,dword ptr [ebp+0x2C]
	push ebx
	lea edx,[ebp-0x1C]
	push edx
	mov byte ptr [ebp-4],0x17
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x1C],8
	jne Block74

 Block68:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	cmp eax,edi
	je Block70

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block70:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block71:
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],0x16
	jne Block75

 Block72:
	mov eax,dword ptr [ebp+0x54]
	xor edx,edx
	mov word ptr [ebp+0x4C],dx
	cmp eax,edi
	je Block76

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block74:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x1C]
	push ecx
	call esi
	jmp Block71

 Block75:
	lea eax,[ebp+0x4C]
	push eax
	call esi

 Block76:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0x15
	jne Block79

 Block77:
	mov eax,dword ptr [ebp-0x34]
	xor ecx,ecx
	mov word ptr [ebp-0x3C],cx
	cmp eax,edi
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea edx,[ebp-0x3C]
	push edx
	call esi

 Block80:
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],0x14
	jne Block83

 Block81:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	cmp eax,edi
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea ecx,[ebp-0x4C]
	push ecx
	call esi

 Block84:
	cmp word ptr [ebp+0xC],8
	mov byte ptr [ebp-4],0x13
	jne Block87

 Block85:
	mov eax,dword ptr [ebp+0x14]
	xor edx,edx
	mov word ptr [ebp+0xC],dx
	cmp eax,edi
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea eax,[ebp+0xC]
	push eax
	call esi

 Block88:
	cmp word ptr [ebp+0x1C],8
	mov byte ptr [ebp-4],0x12
	jne Block91

 Block89:
	mov eax,dword ptr [ebp+0x24]
	xor ecx,ecx
	mov word ptr [ebp+0x1C],cx
	cmp eax,edi
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea edx,[ebp+0x1C]
	push edx
	call esi

 Block92:
	mov esi,dword ptr [ebp]
	mov byte ptr [ebp-4],0x11
	cmp esi,edi
	je Block100

 Block93:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,edi
	jne Block99

 Block94:
	mov eax,dword ptr [esi]
	cmp eax,edi
	je Block96

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block96:
	mov eax,dword ptr [esi+4]
	cmp eax,edi
	je Block98

 Block97:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block98:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block99:
	mov dword ptr [ebp],edi

 Block100:
	mov byte ptr [ebp-4],0xB
	cmp ebx,edi
	je Block102

 Block101:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block102:
	mov eax,dword ptr [ebp+4]
	inc eax
	cmp eax,dword ptr [ebp+0x30]
	mov dword ptr [ebp+4],eax
	jl Block48

 Block103:
	mov esi,dword ptr [ebp+0x5C]

 Block104:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],7
	call ecx
	mov eax,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],5
	cmp eax,edi
	je Block106

 Block105:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block106:
	cmp dword ptr [ebp+0x7C],edi
	je Block161

 Block107:
	mov edi,dword ptr [ebp+0x2C]
	lea ecx,[ebp+0x64]
	push ecx
	mov ecx,edi
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	xor ebx,ebx
	mov byte ptr [ebp-4],0x18
	cmp esi,ebx
	jne Block109

 Block108:
	push 0x80004003
	call _com_issue_error

 Block109:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x68]
	lea eax,[ebp+0x5C]
	push eax
	push esi
	mov dword ptr [ebp+0x5C],ebx
	call ecx
	cmp eax,ebx
	jge Block111

 Block110:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block111:
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],5
	cmp eax,ebx
	je Block113

 Block112:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block113:
	lea ecx,[ebp+0x64]
	push ecx
	mov ecx,edi
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],0x19
	cmp esi,ebx
	jne Block115

 Block114:
	push 0x80004003
	call _com_issue_error

 Block115:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x70]
	lea eax,[ebp+0x60]
	push eax
	push esi
	mov dword ptr [ebp+0x60],ebx
	call ecx
	cmp eax,ebx
	jge Block117

 Block116:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block117:
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],5
	cmp eax,ebx
	je Block119

 Block118:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block119:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x4C]
	push ecx
	call esi
	lea edx,[ebp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block121

 Block120:
	push eax
	call _com_issue_error

 Block121:
	lea eax,[ebp+0x38]
	push eax
	mov byte ptr [ebp-4],0x1A
	call esi
	lea ecx,[ebp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block123

 Block122:
	push eax
	call _com_issue_error

 Block123:
	lea edx,[ebp+0x64]
	mov bl,0x1B
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzGr2DLayer::Getlt
	mov esi,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xB8]
	lea ecx,[ebp+0x30]
	push ecx
	push edi
	mov byte ptr [ebp-4],0x1C
	mov dword ptr [ebp+0x30],0
	call edx
	test eax,eax
	jge Block125

 Block124:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block125:
	mov esi,dword ptr [esi]
	test esi,esi
	jne Block127

 Block126:
	push 0x80004003
	call _com_issue_error

 Block127:
	mov edx,dword ptr [ebp+0x4C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x50]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x54]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x58]
	mov ecx,dword ptr [esi]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [ebp+0x38]
	mov ecx,dword ptr [ecx+0x90]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x3C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x40]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x44]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x60]
	mov edx,dword ptr [ebp+0x5C]
	push eax
	mov eax,dword ptr [ebp+0x30]
	add eax,edx
	push eax
	push esi
	call ecx
	test eax,eax
	jge Block129

 Block128:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block129:
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block131

 Block130:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block131:
	mov esi,8
	mov byte ptr [ebp-4],0x1A
	cmp word ptr [ebp+0x38],si
	jne Block134

 Block132:
	mov eax,dword ptr [ebp+0x40]
	xor ecx,ecx
	mov word ptr [ebp+0x38],cx
	test eax,eax
	je Block135

 Block133:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block135

 Block134:
	lea edx,[ebp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block135:
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp+0x4C],si
	jne Block138

 Block136:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block139

 Block137:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block139

 Block138:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block139:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x38]
	push edx
	call esi
	lea eax,[ebp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block141

 Block140:
	push eax
	call _com_issue_error

 Block141:
	lea ecx,[ebp+0x4C]
	push ecx
	mov byte ptr [ebp-4],0x1D
	call esi
	lea edx,[ebp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block143

 Block142:
	push eax
	call _com_issue_error

 Block143:
	lea eax,[ebp+0x64]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x1E
	call IWzGr2DLayer::Getrb
	mov esi,eax
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0xC0]
	lea edx,[ebp+0x60]
	push edx
	push edi
	mov byte ptr [ebp-4],0x1F
	mov dword ptr [ebp+0x60],0
	call eax
	test eax,eax
	jge Block145

 Block144:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block145:
	mov ebx,dword ptr [ebp+0x2C]
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0xB8]
	mov edi,dword ptr [ebp+0x60]
	lea edx,[ebp+0x5C]
	push edx
	push ebx
	mov dword ptr [ebp+0x5C],0
	call eax
	test eax,eax
	jge Block147

 Block146:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebx
	push eax
	call _com_issue_errorex

 Block147:
	mov esi,dword ptr [esi]
	test esi,esi
	jne Block149

 Block148:
	push 0x80004003
	call _com_issue_error

 Block149:
	mov edx,dword ptr [ebp+0x38]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x3C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x40]
	mov ecx,dword ptr [esi]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x44]
	mov ecx,dword ptr [ecx+0x90]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [ebp+0x4C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x50]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x54]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x58]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x5C]
	push edi
	neg eax
	push eax
	push esi
	call ecx
	test eax,eax
	jge Block151

 Block150:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block151:
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x1E
	test eax,eax
	je Block153

 Block152:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block153:
	mov esi,8
	mov byte ptr [ebp-4],0x1D
	cmp word ptr [ebp+0x4C],si
	jne Block156

 Block154:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block157

 Block155:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block157

 Block156:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block157:
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp+0x38],si
	jne Block160

 Block158:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block161

 Block159:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block161

 Block160:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block161:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x38]
	push edx
	call esi
	lea eax,[ebp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block163

 Block162:
	push eax
	call _com_issue_error

 Block163:
	lea ecx,[ebp+0x4C]
	push ecx
	mov byte ptr [ebp-4],0x20
	call esi
	lea edx,[ebp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block165

 Block164:
	push eax
	call _com_issue_error

 Block165:
	mov edx,dword ptr [ebp+0x38]
	mov esi,dword ptr [ebp+0x2C]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x3C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x40]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x44]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [ebp+0x4C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x50]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x54]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x58]
	push 0x20
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x110]
	push esi
	mov byte ptr [ebp-4],0x21
	call eax
	test eax,eax
	jge Block167

 Block166:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block167:
	mov esi,8
	mov byte ptr [ebp-4],0x20
	cmp word ptr [ebp+0x4C],si
	jne Block170

 Block168:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block171

 Block169:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block171

 Block170:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block171:
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp+0x38],si
	jne Block174

 Block172:
	xor eax,eax
	mov word ptr [ebp+0x38],ax
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block175

 Block173:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block175

 Block174:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block175:
	mov dword ptr [ebp+0x34],0
	mov edx,dword ptr [ebp+0x48]
	mov eax,dword ptr [edx+0x3C]
	mov byte ptr [ebp-4],0x22
	test eax,eax
	je Block299

 Block176:
	mov eax,dword ptr [eax]
	test eax,eax
	je Block299

 Block177:
	mov eax,dword ptr [eax-4]
	shr eax,1
	je Block299

 Block178:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0xC]
	push eax
	call esi
	lea ecx,[ebp+0xC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block180

 Block179:
	push eax
	call _com_issue_error

 Block180:
	lea edx,[ebp+0x1C]
	push edx
	mov byte ptr [ebp-4],0x23
	call esi
	lea eax,[ebp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block182

 Block181:
	push eax
	call _com_issue_error

 Block182:
	mov edi,dword ptr [ebp+0x48]
	mov eax,dword ptr [edi+0x3C]
	push 0
	push 0
	lea ecx,[ebp+0xC]
	mov bl,0x24
	push ecx
	lea edx,[ebp+0x1C]
	mov byte ptr [ebp-4],bl
	push edx
	test eax,eax
	je Block184

 Block183:
	mov eax,dword ptr [eax]
	jmp Block185

 Block184:
	xor eax,eax

 Block185:
	push ecx
	mov dword ptr [ebp+0x44],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x25
	jne Block187

 Block186:
	push 0x80004003
	call _com_issue_error

 Block187:
	lea eax,[ebp-0x1C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x26
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block191

 Block188:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x64]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x64]
	mov esi,ecx
	mov dword ptr [ebp+0x34],esi
	test eax,eax
	jge Block192

 Block189:
	cmp eax,0x80004002
	je Block192

 Block190:
	push eax
	call _com_issue_error

 Block191:
	mov esi,dword ptr [ebp+0x34]

 Block192:
	mov byte ptr [ebp-4],bl
	mov ebx,8
	cmp word ptr [ebp-0x1C],bx
	jne Block195

 Block193:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block196

 Block194:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block196

 Block195:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block196:
	mov byte ptr [ebp-4],0x23
	cmp word ptr [ebp+0x1C],bx
	jne Block199

 Block197:
	mov eax,dword ptr [ebp+0x24]
	xor ecx,ecx
	mov word ptr [ebp+0x1C],cx
	test eax,eax
	je Block200

 Block198:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block200

 Block199:
	lea edx,[ebp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block200:
	mov byte ptr [ebp-4],0x22
	cmp word ptr [ebp+0xC],bx
	jne Block203

 Block201:
	xor eax,eax
	mov word ptr [ebp+0xC],ax
	mov eax,dword ptr [ebp+0x14]
	test eax,eax
	je Block204

 Block202:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block204

 Block203:
	lea ecx,[ebp+0xC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block204:
	test esi,esi
	sete al
	test al,al
	jne Block303

 Block205:
	test esi,esi
	jne Block207

 Block206:
	push 0x80004003
	call _com_issue_error

 Block207:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp+0x60]
	push eax
	push esi
	mov dword ptr [ebp+0x60],0
	call ecx
	test eax,eax
	jge Block209

 Block208:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block209:
	cmp dword ptr [ebp+0x60],0
	je Block303

 Block210:
	push 0
	push 0xFF
	push 1
	push ecx
	mov ecx,dword ptr [ebp+0x2C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	mov dword ptr [ebp+0x44],esp
	push ecx
	call eax
	push 0
	push 0
	push ecx
	mov ecx,dword ptr [ebp+0x78]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp+0x44],esp
	test eax,eax
	je Block212

 Block211:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block212:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [ebp+0x44],esp
	push esi
	call edx
	lea eax,[ebp+0x64]
	push eax
	call CAnimationDisplayer::LoadLayer_0
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x34]
	add esp,0x28
	cmp esi,eax
	je Block217

 Block213:
	mov dword ptr [edi+0x34],eax
	test eax,eax
	je Block215

 Block214:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block215:
	test esi,esi
	je Block217

 Block216:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block217:
	mov eax,dword ptr [ebp+0x64]
	test eax,eax
	je Block219

 Block218:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block219:
	cmp dword ptr [edi+0x34],0
	sete al
	test al,al
	sete al
	test al,al
	je Block285

 Block220:
	cmp dword ptr [ebp+0x7C],0
	je Block285

 Block221:
	mov ebx,dword ptr [ebp+0x48]
	mov ecx,dword ptr [ebx+0x34]
	xor edi,edi
	cmp ecx,edi
	jne Block223

 Block222:
	push 0x80004003
	call _com_issue_error

 Block223:
	lea edx,[ebp+0x64]
	push edx
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],0x27
	cmp esi,edi
	jne Block225

 Block224:
	push 0x80004003
	call _com_issue_error

 Block225:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x68]
	lea ecx,[ebp+0x5C]
	push ecx
	push esi
	mov dword ptr [ebp+0x5C],edi
	call edx
	cmp eax,edi
	jge Block227

 Block226:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block227:
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x22
	cmp eax,edi
	je Block229

 Block228:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block229:
	mov ecx,dword ptr [ebx+0x34]
	cmp ecx,edi
	jne Block231

 Block230:
	push 0x80004003
	call _com_issue_error

 Block231:
	lea eax,[ebp+0x64]
	push eax
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],0x28
	cmp esi,edi
	jne Block233

 Block232:
	push 0x80004003
	call _com_issue_error

 Block233:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x70]
	lea edx,[ebp+0x60]
	push edx
	push esi
	mov dword ptr [ebp+0x60],edi
	call eax
	cmp eax,edi
	jge Block235

 Block234:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block235:
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x22
	cmp eax,edi
	je Block237

 Block236:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block237:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0xC]
	push eax
	call esi
	lea ecx,[ebp+0xC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block239

 Block238:
	push eax
	call _com_issue_error

 Block239:
	lea edx,[ebp+0x1C]
	push edx
	mov byte ptr [ebp-4],0x29
	call esi
	lea eax,[ebp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block241

 Block240:
	push eax
	call _com_issue_error

 Block241:
	mov ecx,dword ptr [ebp+0x48]
	mov ecx,dword ptr [ecx+0x34]
	mov bl,0x2A
	mov byte ptr [ebp-4],bl
	cmp ecx,edi
	jne Block243

 Block242:
	push 0x80004003
	call _com_issue_error

 Block243:
	lea edx,[ebp+0x64]
	push edx
	call IWzGr2DLayer::Getlt
	mov edi,eax
	mov eax,dword ptr [ebp+0x48]
	mov esi,dword ptr [eax+0x34]
	mov byte ptr [ebp-4],0x2B
	test esi,esi
	jne Block245

 Block244:
	push 0x80004003
	call _com_issue_error

 Block245:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xB8]
	lea edx,[ebp+0x30]
	push edx
	push esi
	mov dword ptr [ebp+0x30],0
	call eax
	test eax,eax
	jge Block247

 Block246:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block247:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	jne Block249

 Block248:
	push 0x80004003
	call _com_issue_error

 Block249:
	lea edx,[ebp+0xC]
	push edx
	mov edx,dword ptr [ebp+0x60]
	lea eax,[ebp+0x1C]
	push eax
	mov eax,dword ptr [ebp+0x5C]
	push edx
	mov edx,dword ptr [ebp+0x30]
	add edx,eax
	push edx
	call IWzVector2D::RelMove
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block251

 Block250:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block251:
	mov esi,8
	mov byte ptr [ebp-4],0x29
	cmp word ptr [ebp+0x1C],si
	jne Block254

 Block252:
	xor eax,eax
	mov word ptr [ebp+0x1C],ax
	mov eax,dword ptr [ebp+0x24]
	test eax,eax
	je Block255

 Block253:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block255

 Block254:
	lea ecx,[ebp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block255:
	mov byte ptr [ebp-4],0x22
	cmp word ptr [ebp+0xC],si
	jne Block258

 Block256:
	mov eax,dword ptr [ebp+0x14]
	xor edx,edx
	mov word ptr [ebp+0xC],dx
	test eax,eax
	je Block259

 Block257:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block259

 Block258:
	lea eax,[ebp+0xC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block259:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0xC]
	push ecx
	call esi
	lea edx,[ebp+0xC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block261

 Block260:
	push eax
	call _com_issue_error

 Block261:
	lea eax,[ebp+0x1C]
	push eax
	mov byte ptr [ebp-4],0x2C
	call esi
	lea ecx,[ebp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block263

 Block262:
	push eax
	call _com_issue_error

 Block263:
	mov edx,dword ptr [ebp+0x48]
	mov ecx,dword ptr [edx+0x34]
	mov byte ptr [ebp-4],0x2D
	test ecx,ecx
	jne Block265

 Block264:
	push 0x80004003
	call _com_issue_error

 Block265:
	lea eax,[ebp+0x64]
	push eax
	call IWzGr2DLayer::Getrb
	mov ebx,eax
	mov ecx,dword ptr [ebp+0x48]
	mov esi,dword ptr [ecx+0x34]
	mov byte ptr [ebp-4],0x2E
	test esi,esi
	jne Block267

 Block266:
	push 0x80004003
	call _com_issue_error

 Block267:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xC0]
	lea eax,[ebp+0x60]
	push eax
	push esi
	mov dword ptr [ebp+0x60],0
	call ecx
	test eax,eax
	jge Block269

 Block268:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block269:
	mov edx,dword ptr [ebp+0x48]
	mov esi,dword ptr [edx+0x34]
	mov edi,dword ptr [ebp+0x60]
	test esi,esi
	jne Block271

 Block270:
	push 0x80004003
	call _com_issue_error

 Block271:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xB8]
	lea ecx,[ebp+0x5C]
	push ecx
	push esi
	mov dword ptr [ebp+0x5C],0
	call edx
	test eax,eax
	jge Block273

 Block272:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block273:
	mov ecx,dword ptr [ebx]
	test ecx,ecx
	jne Block275

 Block274:
	push 0x80004003
	call _com_issue_error

 Block275:
	lea eax,[ebp+0xC]
	push eax
	mov eax,dword ptr [ebp+0x5C]
	lea edx,[ebp+0x1C]
	push edx
	push edi
	neg eax
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x2D
	test eax,eax
	je Block277

 Block276:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block277:
	mov esi,8
	mov byte ptr [ebp-4],0x2C
	cmp word ptr [ebp+0x1C],si
	jne Block280

 Block278:
	xor eax,eax
	mov word ptr [ebp+0x1C],ax
	mov eax,dword ptr [ebp+0x24]
	test eax,eax
	je Block281

 Block279:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block281

 Block280:
	lea ecx,[ebp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block281:
	mov byte ptr [ebp-4],0x22
	cmp word ptr [ebp+0xC],si
	jne Block284

 Block282:
	mov eax,dword ptr [ebp+0x14]
	xor edx,edx
	mov word ptr [ebp+0xC],dx
	test eax,eax
	je Block285

 Block283:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block285

 Block284:
	lea eax,[ebp+0xC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block285:
	mov ecx,dword ptr [ebp+0x48]
	cmp dword ptr [ecx+0x34],0
	sete al
	test al,al
	sete al
	test al,al
	je Block299

 Block286:
	lea edx,[ebp+0xC]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0xC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block288

 Block287:
	push eax
	call _com_issue_error

 Block288:
	lea ecx,[ebp+0x1C]
	mov bl,0x2F
	push ecx
	mov byte ptr [ebp-4],bl
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block290

 Block289:
	push eax
	call _com_issue_error

 Block290:
	mov eax,dword ptr [ebp+0x48]
	mov ecx,dword ptr [eax+0x34]
	mov byte ptr [ebp-4],0x30
	test ecx,ecx
	jne Block292

 Block291:
	push 0x80004003
	call _com_issue_error

 Block292:
	lea edx,[ebp+0xC]
	push edx
	lea eax,[ebp+0x1C]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x1C],si
	jne Block295

 Block293:
	mov eax,dword ptr [ebp+0x24]
	xor ecx,ecx
	mov word ptr [ebp+0x1C],cx
	test eax,eax
	je Block296

 Block294:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block296

 Block295:
	lea edx,[ebp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block296:
	mov byte ptr [ebp-4],0x22
	cmp word ptr [ebp+0xC],si
	jne Block302

 Block297:
	xor eax,eax
	mov word ptr [ebp+0xC],ax
	mov eax,dword ptr [ebp+0x14]
	test eax,eax
	je Block299

 Block298:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block299:
	mov edi,dword ptr [ebp+0x34]
	xor esi,esi
	test edi,edi
	sete al
	test al,al
	sete al
	test al,al
	je Block310

 Block300:
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x44],esp
	push 0xB20
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x31
	test edi,edi
	jne Block308

 Block301:
	push 0x80004003
	call _com_issue_error

 Block302:
	lea ecx,[ebp+0xC]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block299

 Block303:
	mov edi,dword ptr [ebp+0x74]
	mov dword ptr [edi],0
	mov byte ptr [ebp-4],5
	test esi,esi
	je Block305

 Block304:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block305:
	mov eax,dword ptr [ebp+0x2C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0
	call edx
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block307

 Block306:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block307:
	mov eax,edi
	jmp Block354

 Block308:
	lea ecx,[ebp-0x1C]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0x22
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x32
	mov dword ptr [ebp+8],2
	call get_int32
	mov esi,eax
	add esp,8
	test esi,esi
	je Block310

 Block309:
	mov bl,1
	jmp Block311

 Block310:
	xor bl,bl

 Block311:
	test byte ptr [ebp+8],2
	mov dword ptr [ebp-4],0x22
	je Block316

 Block312:
	cmp word ptr [ebp-0x1C],8
	jne Block315

 Block313:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block316

 Block314:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block316

 Block315:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block316:
	test bl,bl
	je Block328

 Block317:
	cmp dword ptr [ebp+0x7C],0
	je Block319

 Block318:
	mov ecx,3
	mov word ptr [ebp+0x4C],cx
	mov dword ptr [ebp+0x54],esi
	mov byte ptr [ebp-4],0x33
	jmp Block320

 Block319:
	neg esi
	mov eax,3
	mov word ptr [ebp+0x4C],ax
	mov dword ptr [ebp+0x54],esi
	mov byte ptr [ebp-4],0x34

 Block320:
	mov ecx,dword ptr [ebp+0x78]
	test ecx,ecx
	jne Block322

 Block321:
	push 0x80004003
	call _com_issue_error

 Block322:
	mov ebx,dword ptr [ebp+0x4C]
	fldz
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp+0x50]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [ebp+0x58]
	sub esp,8
	mov dword ptr [eax+0xC],esi
	fstp qword ptr [esp]
	mov eax,dword ptr [edx+0xA0]
	push ecx
	mov edi,ecx
	call eax
	test eax,eax
	jge Block324

 Block323:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block324:
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],0x22
	jne Block327

 Block325:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block328

 Block326:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block328

 Block327:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block328:
	mov eax,dword ptr [ebp+0x48]
	mov ecx,dword ptr [eax+0x40]
	push ecx
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	lea edx,[ebp+0x40]
	push edx
	call CActionMan::GetCharacterImgEntry
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [ebp+0x44]
	xor ebx,ebx
	mov dword ptr [ebp+0x64],esi
	cmp eax,ebx
	je Block333

 Block329:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block332

 Block330:
	mov eax,dword ptr [ebp+0x44]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp+0x44]
	cmp ecx,ebx
	je Block332

 Block331:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block332:
	mov dword ptr [ebp+0x44],ebx

 Block333:
	cmp esi,ebx
	je Block349

 Block334:
	mov eax,dword ptr [esi+0x38]
	cmp eax,ebx
	je Block349

 Block335:
	mov eax,dword ptr [eax]
	cmp eax,ebx
	je Block349

 Block336:
	mov eax,dword ptr [eax-4]
	shr eax,1
	cmp eax,ebx
	je Block349

 Block337:
	mov eax,dword ptr [ebp+0x78]
	cmp eax,ebx
	jne Block339

 Block338:
	push 0x80004003
	call _com_issue_error

 Block339:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+8]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x28]
	mov dword ptr [ebp+8],ebx
	call eax
	cmp eax,ebx
	jge Block341

 Block340:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block341:
	mov eax,dword ptr [ebp+0x78]
	mov edi,dword ptr [ebp+8]
	cmp eax,ebx
	jne Block343

 Block342:
	push 0x80004003
	call _com_issue_error

 Block343:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x60]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x20]
	mov dword ptr [ebp+0x60],ebx
	call eax
	cmp eax,ebx
	jge Block345

 Block344:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block345:
	mov ecx,dword ptr [ebp+0x64]
	mov eax,dword ptr [ecx+0x38]
	cmp eax,ebx
	je Block347

 Block346:
	mov esi,dword ptr [eax]
	jmp Block348

 Block347:
	xor esi,esi

 Block348:
	mov edx,dword ptr [ebp+0x60]
	push edi
	push edx
	call get_sound_volume_by_pos
	push eax
	push 0x28
	push esi
	call play_weapon_sound
	add esp,0x14

 Block349:
	mov edi,dword ptr [ebp+0x2C]
	mov eax,dword ptr [edi]
	mov esi,dword ptr [ebp+0x74]
	mov ecx,dword ptr [eax+4]
	push edi
	mov dword ptr [esi],edi
	call ecx
	mov eax,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],5
	cmp eax,ebx
	je Block351

 Block350:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block351:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [ebp-4],0
	call edx
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,ebx
	je Block353

 Block352:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block353:
	mov eax,esi

 Block354:
	lea esp,[ebp-0x8C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x68]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x6C
	mov esp,ebp
	pop ebp
	ret 0xC
}
}
// TAnimation<CAnimationDisplayer::RESERVEDINFO>::Update
__SUB_CLASS_THIS(0005B5B0, __thiscall, 19209,  TAnimation<CAnimationDisplayer::RESERVEDINFO>, void, long) {
__asm {

 Block0:
	push ecx
	push ebx
	mov ebx,ecx
	mov eax,dword ptr [ebx+0xC]
	mov dword ptr [esp+4],eax
	test eax,eax
	je Block6

 Block1:
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]

 Block2:
	mov esi,eax
	lea eax,[esp+0xC]
	push eax
	call ZList<CAnimationDisplayer::RESERVEDINFO>::GetNext
	add esp,4
	push edi
	mov ecx,eax
	call CAnimationDisplayer::RESERVEDINFO::Update
	test eax,eax
	je Block4

 Block3:
	push esi
	mov ecx,ebx
	call ZList<CAnimationDisplayer::RESERVEDINFO>::RemoveAt

 Block4:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	jne Block2

 Block5:
	pop edi
	pop esi

 Block6:
	pop ebx
	pop ecx
	ret 4
}
}
// CAnimationDisplayer::RegisterMobBulletAnimation
_SUB_EXCEPTION_HANDLER(55B10)
__SUB_CLASS_THIS(00055B10, __thiscall, 18564,  CAnimationDisplayer, void, long, long, NakedParam<tagPOINT>, NakedParam<tagPOINT>, NakedParam<_x_com_ptr<IWzVector2D>>, long, unsigned long, NakedParam<Ztl_bstr_t>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_55B10
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
	mov dword ptr [esp+0x14],ecx
	xor ebx,ebx
	mov dword ptr [esp+0x3C],ebx
	int 3// TODO: 	mov esi,offset ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>::`vftable'
	mov dword ptr [esp+0x20],esi
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x30],ebx
	mov ecx,dword ptr [esp+0x64]
	lea eax,[esp+0x20]
	push eax
	push 1
	push ecx
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	mov byte ptr [esp+0x48],2
	call CActionMan::LoadMobAction
	cmp dword ptr [esp+0x28],ebx
	jne Block3

 Block1:
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x3C],1
	mov dword ptr [esp+0x20],esi
	call ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>::RemoveAll
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x3C],bl
	cmp eax,ebx
	je Block21

 Block2:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block21

 Block3:
	mov esi,dword ptr [esp+0x2C]
	push 0x60
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov edi,eax
	mov dword ptr [esp+0x64],edi
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x3C],3
	cmp edi,ebx
	je Block11

 Block4:
	push ecx
	mov ecx,dword ptr [esp+0x6C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x6C]
	mov dword ptr [esp+0x1C],esp
	cmp eax,ebx
	je Block6

 Block5:
	add eax,8
	push eax
	call ebp

 Block6:
	mov eax,dword ptr [esi+4]
	mov eax,dword ptr [eax+0xC]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block8:
	mov ecx,dword ptr [esp+0x74]
	mov edx,dword ptr [esp+0x68]
	push ecx
	push edx
	push ecx
	mov ecx,dword ptr [esp+0x70]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x70]
	mov dword ptr [esp+0x80],esp
	cmp eax,ebx
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block10:
	mov ecx,dword ptr [esp+0x6C]
	mov edx,dword ptr [esp+0x68]
	mov eax,dword ptr [esp+0x64]
	push ecx
	mov ecx,dword ptr [esp+0x64]
	push edx
	mov edx,dword ptr [esp+0x64]
	push eax
	mov eax,dword ptr [esp+0x64]
	push ecx
	push edx
	push eax
	mov ecx,edi
	call CAnimationDisplayer::MobBullet::_ctor_0
	mov esi,eax
	jmp Block12

 Block11:
	xor esi,esi

 Block12:
	mov dword ptr [esp+0x1C],esi
	cmp esi,ebx
	je Block14

 Block13:
	lea ecx,[esi+4]
	push ecx
	call ebp

 Block14:
	sub esp,8
	mov eax,esp
	mov byte ptr [esp+0x44],4
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [eax+4],esi
	cmp esi,ebx
	je Block16

 Block15:
	lea edx,[esi+4]
	push edx
	call ebp

 Block16:
	mov ecx,dword ptr [esp+0x1C]
	add ecx,0x178
	call BulletContainer<CBullet>::Insert
	mov byte ptr [esp+0x3C],2
	cmp esi,ebx
	je Block19

 Block17:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block19

 Block18:
	push edi
	call ebp
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block19:
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x3C],1
	int 3// TODO: 	mov dword ptr [esp+0x20],offset ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>::RemoveAll
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x3C],bl
	cmp eax,ebx
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block21:
	mov ecx,dword ptr [esp+0x68]
	cmp ecx,ebx
	je Block23

 Block22:
	call _xbstr_t::Data_t::Release

 Block23:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret 0x2C
}
}
// CAnimationDisplayer::NormalBullet::~NormalBullet
_SUB_EXCEPTION_HANDLER(47840)
__SUB_CLASS_THIS0(00047840, __thiscall, 18799,  CAnimationDisplayer::NormalBullet, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_47840
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
	int 3// TODO: 	mov dword ptr [esi],offset CAnimationDisplayer::NormalBullet::`vftable'
	mov ecx,dword ptr [esi+0x3C]
	test ecx,ecx
	je Block2

 Block1:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x3C],0

 Block2:
	mov eax,dword ptr [esi+0x34]
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	int 3// TODO: 	mov dword ptr [esi],offset CBullet::`vftable'
	mov eax,dword ptr [esi+0x30]
	mov dword ptr [esp+0x14],2
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0x10]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0xC]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CAnimationDisplayer::NEWYEARINFO::~NEWYEARINFO
_SUB_EXCEPTION_HANDLER(432E0)
__SUB_CLASS_THIS0(000432E0, __thiscall, 18877,  CAnimationDisplayer::NEWYEARINFO, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_432E0
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
	mov eax,dword ptr [esi+0x2C]
	mov dword ptr [esp+0x14],1
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push 0
	push eax
	call CSoundMan::StopSE
	mov dword ptr [esi+0x2C],0

 Block2:
	mov eax,dword ptr [esi+0x30]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov esi,dword ptr [esi+0x28]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block6

 Block5:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block6:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// get_double
_SUB_EXCEPTION_HANDLER(38BB0)
__SUB(00038BB0, __cdecl, 146231,  double, Ztl_variant_t&, double) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_38BB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	lea eax,[esp+0xC]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov ecx,dword ptr [esp+0x2C]
	movzx eax,word ptr [ecx]
	mov dword ptr [esp+0x24],0
	test ax,ax
	je Block4

 Block1:
	cmp ax,0xA
	je Block4

 Block2:
	push 5
	push 0
	push ecx
	lea ecx,[esp+0x18]
	push ecx
	call ZComAPI::ZComVariantChangeType
	add esp,0x10
	test eax,eax
	jl Block4

 Block3:
	fld qword ptr [esp+0x14]
	jmp Block5

 Block4:
	fld qword ptr [esp+0x30]

 Block5:
	cmp word ptr [esp+0xC],8
	fst qword ptr [esp+4]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	jne Block8

 Block6:
	mov eax,dword ptr [esp+0x14]
	xor edx,edx
	mov word ptr [esp+0xC],dx
	test eax,eax
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	fstp st(0)
	push eax
	call CoTaskMemFree
	fld qword ptr [esp+4]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x24
	ret

 Block8:
	lea eax,[esp+0xC]
	fstp st(0)
	push eax
	call dword ptr [ZImports::_VariantClear]
	fld qword ptr [esp+4]

 Block9:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x24
	ret
}
}
// TAnimation<CAnimationDisplayer::NEWYEARINFO>::Update
__SUB_CLASS_THIS(00055060, __thiscall, 19342,  TAnimation<CAnimationDisplayer::NEWYEARINFO>, void, long) {
__asm {

 Block0:
	push ecx
	push ebx
	mov ebx,ecx
	mov eax,dword ptr [ebx+0xC]
	mov dword ptr [esp+4],eax
	test eax,eax
	je Block6

 Block1:
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]

 Block2:
	mov esi,eax
	lea eax,[esp+0xC]
	push eax
	call ZList<CAnimationDisplayer::NEWYEARINFO>::GetNext
	add esp,4
	push edi
	mov ecx,eax
	call CAnimationDisplayer::NEWYEARINFO::Update
	test eax,eax
	je Block4

 Block3:
	push esi
	mov ecx,ebx
	call ZList<CAnimationDisplayer::NEWYEARINFO>::RemoveAt

 Block4:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	jne Block2

 Block5:
	pop edi
	pop esi

 Block6:
	pop ebx
	pop ecx
	ret 4
}
}
// get_rand_range
__SUB(0003B6C0, __cdecl, 146248,  uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	test esi,esi
	je Block2

 Block1:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	div esi
	pop esi
	mov eax,edx
	add eax,dword ptr [esp+8]
	ret

 Block2:
	mov eax,dword ptr [esp+0xC]
	pop esi
	ret
}
}
// CAnimationDisplayer::Effect_HP
_SUB_EXCEPTION_HANDLER(44EB0)
__SUB_CLASS_THIS(00044EB0, __thiscall, 18579,  CAnimationDisplayer, void, long, long, long, long, int32_t) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x5C]
	sub esp,0x5C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_44EB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x9C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x58],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [ebp-0x44],esi
	xor ebx,ebx
	mov dword ptr [ebp+0x1C],ebx
	mov dword ptr [ebp-4],ebx
	mov dword ptr [ebp+0x14],ebx
	mov eax,dword ptr [ebp+0x70]
	sub eax,ebx
	mov edi,dword ptr [ebp+0x74]
	mov byte ptr [ebp-4],1
	je Block11

 Block1:
	sub eax,1
	je Block6

 Block2:
	sub eax,1
	jne Block259

 Block3:
	mov eax,dword ptr [esi+0x1B8]
	cmp eax,ebx
	je Block5

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	mov dword ptr [ebp+0x1C],eax
	call edx

 Block5:
	mov eax,dword ptr [esi+0x1B4]
	jmp Block9

 Block6:
	mov eax,dword ptr [esi+0x1B0]
	cmp eax,ebx
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	mov dword ptr [ebp+0x1C],eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0x1AC]

 Block9:
	cmp eax,ebx
	je Block15

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	mov dword ptr [ebp+0x14],eax
	call edx
	jmp Block15

 Block11:
	cmp edi,ebx
	je Block13

 Block12:
	lea eax,[esi+0x1C0]
	push eax
	lea ecx,[ebp+0x1C]
	call _x_com_ptr<IWzProperty>::op_assign_copy
	add esi,0x1BC
	jmp Block14

 Block13:
	lea ecx,[esi+0x1A8]
	push ecx
	lea ecx,[ebp+0x1C]
	call _x_com_ptr<IWzProperty>::op_assign_copy
	add esi,0x1A4

 Block14:
	push esi
	lea ecx,[ebp+0x14]
	call _x_com_ptr<IWzProperty>::op_assign_copy

 Block15:
	xor ebx,ebx
	mov dword ptr [ebp+0x2C],ebx
	neg edi
	sbb edi,edi
	and edi,0x1E
	mov dword ptr [ebp+0x30],ebx
	mov dword ptr [ebp+0x20],ebx
	lea edx,[ebp+0x54]
	push 0x1A15
	push edx
	mov byte ptr [ebp-4],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x6C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x20]
	push edx
	mov byte ptr [ebp-4],4
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x54]
	add esp,0xC
	mov byte ptr [ebp-4],3
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	xor esi,esi

 Block18:
	mov eax,dword ptr [ebp+0x20]
	test eax,eax
	je Block20

 Block19:
	mov eax,dword ptr [eax-4]
	jmp Block21

 Block20:
	xor eax,eax

 Block21:
	cmp esi,eax
	jge Block44

 Block22:
	mov eax,0x20
	call __chkstk
	mov ecx,dword ptr [ebp+0x20]
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	test esi,esi
	jne Block29

 Block23:
	mov cl,byte ptr [ecx]
	movsx edx,cl
	sub edx,0x30
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x10],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x1C]
	mov byte ptr [ebp-4],5
	test ecx,ecx
	je Block45

 Block24:
	lea eax,[ebp-0x1C]
	push eax
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x2C]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block26

 Block25:
	cmp eax,0x80004002
	jne Block55

 Block26:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],3
	jne Block28

 Block27:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	jmp Block34

 Block28:
	lea edx,[ebp-0x1C]
	jmp Block37

 Block29:
	mov cl,byte ptr [esi+ecx]
	movsx edx,cl
	sub edx,0x30
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x10],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],7
	test ecx,ecx
	je Block45

 Block30:
	lea eax,[ebp]
	push eax
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],8
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x2C]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block32

 Block31:
	cmp eax,0x80004002
	jne Block55

 Block32:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],3
	jne Block36

 Block33:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx

 Block34:
	test eax,eax
	je Block38

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block36:
	lea edx,[ebp]

 Block37:
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov ebx,dword ptr [ebp+0x2C]
	test ebx,ebx
	je Block45

 Block39:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x6C]
	lea ecx,[ebp+0x24]
	push ecx
	push ebx
	mov dword ptr [ebp+0x24],0
	call edx
	test eax,eax
	jge Block41

 Block40:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block41:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[ebp+0x28]
	push ecx
	push ebx
	mov dword ptr [ebp+0x28],0
	call edx
	test eax,eax
	jge Block43

 Block42:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block43:
	mov ecx,dword ptr [ebp+0x24]
	mov eax,dword ptr [ebp+0x28]
	sub eax,ecx
	sub ecx,dword ptr [ebp+0x30]
	add ecx,edi
	lea edi,[ecx+eax]
	mov dword ptr [ebp+esi*4-0xA8],ecx
	lea ecx,[eax+eax*2]
	mov eax,0x66666667
	imul ecx
	sar edx,1
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov dword ptr [ebp+0x30],eax
	inc esi
	jmp Block18

 Block44:
	mov dword ptr [ebp+0x24],edi
	test ebx,ebx
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x6C]
	lea edx,[ebp+0x54]
	push edx
	xor edi,edi
	push ebx
	mov dword ptr [ebp+0x54],edi
	call eax
	cmp eax,edi
	jge Block48

 Block47:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block48:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[ebp+0x54]
	push edx
	push ebx
	mov dword ptr [ebp+0x54],edi
	call eax
	cmp eax,edi
	jge Block50

 Block49:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block50:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x6C]
	lea edx,[ebp+0x30]
	push edx
	push ebx
	mov dword ptr [ebp+0x30],edi
	call eax
	cmp eax,edi
	jge Block52

 Block51:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block52:
	mov dword ptr [ebp+0x18],edi
	lea ecx,[ebp+0x54]
	push 0x3D0
	push ecx
	mov byte ptr [ebp-4],9
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea edx,[ebp+0x18]
	push edx
	push eax
	mov byte ptr [ebp-4],0xA
	call PcCreate_IWzCanvas
	mov eax,dword ptr [ebp+0x54]
	add esp,0xC
	mov byte ptr [ebp-4],9
	cmp eax,edi
	je Block54

 Block53:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block54:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x44]
	push eax
	call esi
	lea ecx,[ebp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	lea edx,[ebp+0x34]
	push edx
	mov byte ptr [ebp-4],0xB
	call esi
	lea eax,[ebp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block58

 Block57:
	push eax
	call _com_issue_error

 Block58:
	mov ecx,dword ptr [ebp+0x18]
	mov byte ptr [ebp-4],0xC
	cmp ecx,edi
	jne Block60

 Block59:
	push 0x80004003
	call _com_issue_error

 Block60:
	mov edi,dword ptr [ebp+0x44]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp+0x48]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp+0x4C]
	mov edx,dword ptr [ecx]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [ebp+0x50]
	mov dword ptr [eax+0xC],edi
	mov edi,dword ptr [ebp+0x34]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp+0x38]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp+0x3C]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [ebp+0x40]
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [ebp+0x24]
	push 0x39
	push eax
	mov esi,ecx
	push ecx
	mov ecx,dword ptr [edx+0x2C]
	call ecx
	test eax,eax
	jge Block62

 Block61:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block62:
	mov esi,8
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp+0x34],si
	jne Block65

 Block63:
	mov eax,dword ptr [ebp+0x3C]
	xor edx,edx
	mov word ptr [ebp+0x34],dx
	test eax,eax
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea eax,[ebp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block66:
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp+0x44],si
	jne Block69

 Block67:
	mov eax,dword ptr [ebp+0x4C]
	xor ecx,ecx
	mov word ptr [ebp+0x44],cx
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea edx,[ebp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block70:
	xor esi,esi
	mov dword ptr [ebp+0x28],esi

 Block71:
	mov eax,dword ptr [ebp+0x20]
	mov edi,dword ptr [ebp+0x1C]
	test eax,eax
	je Block73

 Block72:
	mov eax,dword ptr [eax-4]
	jmp Block74

 Block73:
	xor eax,eax

 Block74:
	cmp esi,eax
	jge Block132

 Block75:
	mov eax,0x20
	call __chkstk
	mov ecx,dword ptr [ebp+0x20]
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	test esi,esi
	jne Block119

 Block76:
	mov cl,byte ptr [ecx]
	movsx edx,cl
	sub edx,0x30
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x54],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0xD
	test edi,edi
	je Block45

 Block77:
	lea eax,[ebp-0x1C]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xE
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block83

 Block78:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x48]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	mov edx,dword ptr [ebx]
	xor ecx,ecx
	mov esi,eax
	mov eax,dword ptr [edx+8]
	test esi,esi
	setl cl
	push ebx
	dec ecx
	and ecx,dword ptr [ebp-0x48]
	mov edi,ecx
	call eax
	mov dword ptr [ebp+0x2C],edi
	test esi,esi
	jge Block80

 Block79:
	cmp esi,0x80004002
	jne Block131

 Block80:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],9
	jne Block85

 Block81:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block86

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block83:
	mov eax,ebx
	xor edi,edi
	mov dword ptr [ebp+0x2C],edi
	test eax,eax
	je Block80

 Block84:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block80

 Block85:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block86:
	cmp dword ptr [ebp+0x74],0
	je Block104

 Block87:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x54],esp
	push 0x1AAD
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x1C]
	lea eax,[ebp]
	mov byte ptr [ebp-4],0xF
	push eax
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x10
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x54],esi
	test eax,eax
	je Block90

 Block88:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x30]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x30]
	mov esi,ecx
	mov dword ptr [ebp+0x54],esi
	test eax,eax
	jge Block90

 Block89:
	cmp eax,0x80004002
	jne Block55

 Block90:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x12
	jne Block93

 Block91:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block94:
	mov ecx,3
	mov edx,0xFF
	mov word ptr [ebp+0x34],cx
	mov dword ptr [ebp+0x3C],edx
	mov ecx,dword ptr [ebp+0x18]
	mov byte ptr [ebp-4],0x13
	test ecx,ecx
	je Block45

 Block95:
	mov ebx,dword ptr [ebp+0x34]
	mov edi,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp+0x38]
	push esi
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x40]
	push 0
	push 0
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [edi+0x80]
	push ecx
	mov dword ptr [ebp+0x30],ecx
	call eax
	test eax,eax
	jge Block97

 Block96:
	mov ecx,dword ptr [ebp+0x30]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block97:
	cmp word ptr [ebp+0x34],8
	mov byte ptr [ebp-4],0x12
	jne Block100

 Block98:
	mov eax,dword ptr [ebp+0x3C]
	xor edx,edx
	mov word ptr [ebp+0x34],dx
	test eax,eax
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea eax,[ebp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block101:
	mov byte ptr [ebp-4],9
	test esi,esi
	je Block103

 Block102:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block103:
	mov edi,dword ptr [ebp+0x2C]

 Block104:
	mov edx,3
	mov word ptr [ebp+0x44],dx
	mov dword ptr [ebp+0x4C],0xFF
	mov byte ptr [ebp-4],0x16
	test edi,edi
	je Block45

 Block105:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[ebp+0x30]
	push ecx
	push edi
	mov dword ptr [ebp+0x30],0
	call edx
	test eax,eax
	jge Block107

 Block106:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block107:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x6C]
	mov ebx,dword ptr [ebp+0x30]
	lea ecx,[ebp+0x54]
	push ecx
	push edi
	mov dword ptr [ebp+0x54],0
	call edx
	test eax,eax
	jge Block109

 Block108:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block109:
	mov esi,dword ptr [ebp+0x18]
	mov edi,dword ptr [ebp+0x54]
	test esi,esi
	je Block45

 Block110:
	call _rand
	mov ecx,eax
	and ecx,0x80000001
	jns Block112

 Block111:
	dec ecx
	or ecx,0xFFFFFFFE
	inc ecx

 Block112:
	mov edx,dword ptr [ebp+0x28]
	and edx,0x80000001
	jns Block114

 Block113:
	dec edx
	or edx,0xFFFFFFFE
	inc edx

 Block114:
	neg edx
	sbb edx,edx
	and edx,0xFFFFFFFD
	add edx,4
	mov eax,0x39
	sub eax,edx
	sub eax,ecx
	mov ecx,dword ptr [ebp+0x28]
	mov edx,dword ptr [ebp+ecx*4-0xA8]
	sub esp,0x10
	mov ecx,esp
	sub eax,ebx
	mov ebx,dword ptr [ebp+0x44]
	mov dword ptr [ecx],ebx
	mov ebx,dword ptr [ebp+0x48]
	mov dword ptr [ecx+4],ebx
	mov ebx,dword ptr [ebp+0x4C]
	mov dword ptr [ecx+8],ebx
	mov ebx,dword ptr [ebp+0x50]
	mov dword ptr [ecx+0xC],ebx
	mov ecx,dword ptr [ebp+0x2C]
	push ecx
	sub edx,edi
	mov edi,dword ptr [esi]
	push eax
	push edx
	mov edx,dword ptr [edi+0x80]
	push esi
	call edx
	test eax,eax
	jge Block116

 Block115:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block116:
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],9
	jne Block129

 Block117:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	test eax,eax
	je Block130

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc dword ptr [ebp+0x28]
	mov esi,dword ptr [ebp+0x28]
	mov ebx,dword ptr [ebp+0x2C]
	jmp Block71

 Block119:
	mov cl,byte ptr [esi+ecx]
	movsx edx,cl
	sub edx,0x30
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x54],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],0x14
	test ecx,ecx
	je Block45

 Block120:
	lea eax,[ebp-0x2C]
	push eax
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x15
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block126

 Block121:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x10]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	mov edx,dword ptr [ebx]
	xor ecx,ecx
	mov esi,eax
	mov eax,dword ptr [edx+8]
	test esi,esi
	setl cl
	push ebx
	dec ecx
	and ecx,dword ptr [ebp+0x10]
	mov edi,ecx
	call eax
	mov dword ptr [ebp+0x2C],edi
	test esi,esi
	jge Block123

 Block122:
	cmp esi,0x80004002
	jne Block131

 Block123:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],9
	jne Block128

 Block124:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block104

 Block125:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block126:
	mov eax,ebx
	xor edi,edi
	mov dword ptr [ebp+0x2C],edi
	test eax,eax
	je Block123

 Block127:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block123

 Block128:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block104

 Block129:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block130:
	inc dword ptr [ebp+0x28]
	mov esi,dword ptr [ebp+0x28]
	mov ebx,dword ptr [ebp+0x2C]
	jmp Block71

 Block131:
	push esi
	call _com_issue_error

 Block132:
	mov eax,dword ptr [ebp+0x24]
	mov edi,dword ptr [ZImports::_VariantInit]
	cdq
	sub eax,edx
	mov edx,eax
	mov eax,dword ptr [ebp+0x64]
	sar edx,1
	sub eax,edx
	mov dword ptr [ebp+0x28],eax
	mov eax,dword ptr [ebp+0x68]
	lea ecx,[ebp-0x68]
	add eax,0xFFFFFFD1
	push ecx
	mov dword ptr [ebp+0x30],eax
	call edi
	lea edx,[ebp-0x68]
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
	mov eax,3
	mov word ptr [ebp-0x58],ax
	mov dword ptr [ebp-0x50],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0x18
	test ecx,ecx
	jne Block136

 Block135:
	push 0x80004003
	call _com_issue_error

 Block136:
	lea edx,[ebp-0x68]
	push edx
	lea eax,[ebp-0x58]
	push eax
	push 0
	push 0
	push 0
	push 0
	push 0
	lea edx,[ebp+0x10]
	push edx
	call IWzGr2D::CreateLayer
	mov esi,8
	mov byte ptr [ebp-4],0x1A
	cmp word ptr [ebp-0x58],si
	jne Block139

 Block137:
	xor eax,eax
	mov word ptr [ebp-0x58],ax
	mov eax,dword ptr [ebp-0x50]
	test eax,eax
	je Block140

 Block138:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block140

 Block139:
	lea ecx,[ebp-0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block140:
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [ebp-0x68],si
	jne Block143

 Block141:
	mov eax,dword ptr [ebp-0x60]
	xor edx,edx
	mov word ptr [ebp-0x68],dx
	test eax,eax
	je Block144

 Block142:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block144

 Block143:
	lea eax,[ebp-0x68]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block144:
	mov esi,dword ptr [ebp+0x10]
	test esi,esi
	jne Block146

 Block145:
	push 0x80004003
	call _com_issue_error

 Block146:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xB4]
	push 0xC00614A4
	push esi
	call edx
	test eax,eax
	jge Block148

 Block147:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block148:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	test eax,eax
	jge Block150

 Block149:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block150:
	lea edx,[ebp-0x1C]
	push edx
	call edi
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block152

 Block151:
	push eax
	call _com_issue_error

 Block152:
	lea ecx,[ebp]
	mov bl,0x1C
	push ecx
	mov byte ptr [ebp-4],bl
	call edi
	lea edx,[ebp]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block154

 Block153:
	push eax
	call _com_issue_error

 Block154:
	mov eax,3
	mov edi,0xFF
	mov word ptr [ebp-0x2C],ax
	mov dword ptr [ebp-0x24],edi
	mov ecx,eax
	mov word ptr [ebp+0x34],cx
	mov dword ptr [ebp+0x3C],edi
	mov edx,eax
	mov word ptr [ebp+0x44],dx
	mov dword ptr [ebp+0x4C],0x190
	lea eax,[ebp-0x1C]
	push eax
	lea ecx,[ebp]
	push ecx
	lea edx,[ebp-0x2C]
	push edx
	mov edx,dword ptr [ebp+0x18]
	lea eax,[ebp+0x34]
	push eax
	lea ecx,[ebp+0x44]
	push ecx
	push edx
	lea eax,[ebp-0x40]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x20
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x40],8
	jne Block157

 Block155:
	mov eax,dword ptr [ebp-0x38]
	xor ecx,ecx
	mov word ptr [ebp-0x40],cx
	test eax,eax
	je Block158

 Block156:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block158

 Block157:
	lea edx,[ebp-0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block158:
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],0x1F
	jne Block161

 Block159:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	test eax,eax
	je Block162

 Block160:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block162

 Block161:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block162:
	cmp word ptr [ebp+0x34],8
	mov byte ptr [ebp-4],0x1E
	jne Block165

 Block163:
	mov eax,dword ptr [ebp+0x3C]
	xor edx,edx
	mov word ptr [ebp+0x34],dx
	test eax,eax
	je Block166

 Block164:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block166

 Block165:
	lea eax,[ebp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block166:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0x1D
	jne Block169

 Block167:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	test eax,eax
	je Block170

 Block168:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block170

 Block169:
	lea edx,[ebp-0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block170:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],bl
	jne Block173

 Block171:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	test eax,eax
	je Block174

 Block172:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block174

 Block173:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block174:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0x1B
	jne Block177

 Block175:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block178

 Block176:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block178

 Block177:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block178:
	lea ecx,[ebp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block180

 Block179:
	push eax
	call _com_issue_error

 Block180:
	lea eax,[ebp+0x44]
	mov bl,0x21
	push eax
	mov byte ptr [ebp-4],bl
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block182

 Block181:
	push eax
	call _com_issue_error

 Block182:
	mov edx,3
	mov word ptr [ebp-0x2C],dx
	mov dword ptr [ebp-0x24],0
	mov eax,edx
	mov word ptr [ebp],ax
	mov dword ptr [ebp+8],edi
	mov ecx,edx
	mov word ptr [ebp-0x1C],cx
	mov dword ptr [ebp-0x14],0x258
	lea edx,[ebp+0x34]
	push edx
	lea eax,[ebp+0x44]
	push eax
	lea ecx,[ebp-0x2C]
	push ecx
	mov ecx,dword ptr [ebp+0x18]
	lea edx,[ebp]
	push edx
	lea eax,[ebp-0x1C]
	push eax
	push ecx
	lea edx,[ebp-0x40]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x25
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x40],8
	jne Block185

 Block183:
	xor eax,eax
	mov word ptr [ebp-0x40],ax
	mov eax,dword ptr [ebp-0x38]
	test eax,eax
	je Block186

 Block184:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block186

 Block185:
	lea ecx,[ebp-0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block186:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0x24
	jne Block193

 Block187:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block189

 Block188:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block189:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block190:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x23
	jne Block194

 Block191:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	test eax,eax
	je Block195

 Block192:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block195

 Block193:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x1C]
	push eax
	call edi
	jmp Block190

 Block194:
	lea edx,[ebp]
	push edx
	call edi

 Block195:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0x22
	jne Block198

 Block196:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block199

 Block197:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block199

 Block198:
	lea ecx,[ebp-0x2C]
	push ecx
	call edi

 Block199:
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],bl
	jne Block202

 Block200:
	mov eax,dword ptr [ebp+0x4C]
	xor edx,edx
	mov word ptr [ebp+0x44],dx
	test eax,eax
	je Block203

 Block201:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block203

 Block202:
	lea eax,[ebp+0x44]
	push eax
	call edi

 Block203:
	cmp word ptr [ebp+0x34],8
	mov byte ptr [ebp-4],0x1B
	jne Block206

 Block204:
	mov eax,dword ptr [ebp+0x3C]
	xor ecx,ecx
	mov word ptr [ebp+0x34],cx
	test eax,eax
	je Block207

 Block205:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block207

 Block206:
	lea edx,[ebp+0x34]
	push edx
	call edi

 Block207:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x34]
	push eax
	call edi
	lea ecx,[ebp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block209

 Block208:
	push eax
	call _com_issue_error

 Block209:
	lea edx,[ebp+0x44]
	mov bl,0x26
	push edx
	mov byte ptr [ebp-4],bl
	call edi
	lea eax,[ebp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block211

 Block210:
	push eax
	call _com_issue_error

 Block211:
	mov edx,dword ptr [ebp+0x34]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x38]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x3C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x40]
	mov ecx,dword ptr [esi]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [ebp+0x44]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x48]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x4C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x50]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x30]
	mov edx,dword ptr [ebp+0x28]
	push eax
	mov eax,dword ptr [ecx+0x90]
	push edx
	push esi
	mov byte ptr [ebp-4],0x27
	call eax
	test eax,eax
	jge Block213

 Block212:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block213:
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],bl
	jne Block216

 Block214:
	mov eax,dword ptr [ebp+0x4C]
	xor ecx,ecx
	mov word ptr [ebp+0x44],cx
	test eax,eax
	je Block217

 Block215:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block217

 Block216:
	lea edx,[ebp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block217:
	cmp word ptr [ebp+0x34],8
	mov byte ptr [ebp-4],0x1B
	jne Block220

 Block218:
	xor eax,eax
	mov word ptr [ebp+0x34],ax
	mov eax,dword ptr [ebp+0x3C]
	test eax,eax
	je Block221

 Block219:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block221

 Block220:
	lea ecx,[ebp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block221:
	lea edx,[ebp+0x44]
	push edx
	call edi
	lea eax,[ebp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block223

 Block222:
	push eax
	call _com_issue_error

 Block223:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x58]
	lea edx,[ebp+0x54]
	push edx
	mov bl,0x28
	push esi
	mov byte ptr [ebp-4],bl
	mov dword ptr [ebp+0x54],0
	call eax
	test eax,eax
	jge Block225

 Block224:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block225:
	mov eax,dword ptr [ebp+0x54]
	mov ecx,3
	add eax,0x3E8
	mov word ptr [ebp+0x34],cx
	mov ecx,eax
	mov dword ptr [ebp+0x3C],ecx
	mov edi,dword ptr [ebp+0x44]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp+0x48]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp+0x4C]
	mov edx,dword ptr [esi]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [ebp+0x50]
	mov edx,dword ptr [edx+0x90]
	mov dword ptr [eax+0xC],edi
	mov edi,dword ptr [ebp+0x34]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp+0x38]
	mov dword ptr [eax+4],edi
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x40]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x30]
	mov ecx,dword ptr [ebp+0x28]
	add eax,0xFFFFFFE2
	push eax
	push ecx
	push esi
	mov byte ptr [ebp-4],0x29
	call edx
	test eax,eax
	jge Block227

 Block226:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block227:
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x34],di
	jne Block230

 Block228:
	xor eax,eax
	mov word ptr [ebp+0x34],ax
	mov eax,dword ptr [ebp+0x3C]
	test eax,eax
	je Block231

 Block229:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block231

 Block230:
	lea ecx,[ebp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block231:
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [ebp+0x44],di
	jne Block234

 Block232:
	mov eax,dword ptr [ebp+0x4C]
	xor edx,edx
	mov word ptr [ebp+0x44],dx
	test eax,eax
	je Block235

 Block233:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block235

 Block234:
	lea eax,[ebp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block235:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x34]
	push ecx
	call edi
	lea edx,[ebp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block237

 Block236:
	push eax
	call _com_issue_error

 Block237:
	lea eax,[ebp+0x44]
	mov bl,0x2A
	push eax
	mov byte ptr [ebp-4],bl
	call edi
	lea ecx,[ebp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block239

 Block238:
	push eax
	call _com_issue_error

 Block239:
	mov ecx,dword ptr [ebp+0x34]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x110]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x38]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp+0x3C]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x40]
	mov dword ptr [eax+0xC],ecx
	mov ecx,dword ptr [ebp+0x44]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x48]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp+0x4C]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x50]
	push 0
	push esi
	mov byte ptr [ebp-4],0x2B
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block241

 Block240:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block241:
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x44],di
	jne Block244

 Block242:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	test eax,eax
	je Block245

 Block243:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block245

 Block244:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block245:
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [ebp+0x34],di
	jne Block248

 Block246:
	mov eax,dword ptr [ebp+0x3C]
	xor edx,edx
	mov word ptr [ebp+0x34],dx
	test eax,eax
	je Block249

 Block247:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block249

 Block248:
	lea eax,[ebp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block249:
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x30],esp
	push 0
	push ecx
	mov dword ptr [eax],0
	mov eax,esp
	mov dword ptr [eax],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [ebp-0x30],esp
	push esi
	call edx
	mov ecx,dword ptr [ebp-0x44]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],9
	call ecx
	mov eax,dword ptr [ebp+0x18]
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block251

 Block250:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block251:
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block253

 Block252:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block253:
	mov eax,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block255

 Block254:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block255:
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block257

 Block256:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block257:
	mov eax,dword ptr [ebp+0x1C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block259

 Block258:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block259:
	lea esp,[ebp-0xB8]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x58]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x5C
	mov esp,ebp
	pop ebp
	ret 0x14
}
}
// CAnimationDisplayer::RegisterBulletAnimation
_SUB_EXCEPTION_HANDLER(55410)
__SUB_CLASS_THIS(00055410, __thiscall, 18535,  CAnimationDisplayer, void, long, long, NakedParam<tagPOINT>, NakedParam<tagPOINT>, NakedParam<_x_com_ptr<IWzVector2D>>, long, NakedParam<Ztl_bstr_t>, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_55410
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	push 0x48
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x24],1
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x10],esi
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x20],2
	test esi,esi
	je Block6

 Block1:
	mov eax,dword ptr [esp+0x50]
	mov ecx,dword ptr [esp+0x4C]
	mov edx,dword ptr [esp+0x48]
	push eax
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0x5C],esp
	test eax,eax
	je Block3

 Block2:
	add eax,8
	push eax
	call ebp

 Block3:
	mov eax,dword ptr [esp+0x50]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x54]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0x64],esp
	test eax,eax
	je Block5

 Block4:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block5:
	mov ecx,dword ptr [esp+0x50]
	mov edx,dword ptr [esp+0x4C]
	mov eax,dword ptr [esp+0x48]
	push ecx
	mov ecx,dword ptr [esp+0x48]
	push edx
	mov edx,dword ptr [esp+0x48]
	push eax
	mov eax,dword ptr [esp+0x48]
	push ecx
	push edx
	push eax
	mov ecx,esi
	call CAnimationDisplayer::NormalBullet::_ctor_0
	mov esi,eax
	jmp Block7

 Block6:
	xor esi,esi

 Block7:
	mov dword ptr [esp+0x14],esi
	test esi,esi
	je Block9

 Block8:
	lea ecx,[esi+4]
	push ecx
	call ebp

 Block9:
	sub esp,8
	mov eax,esp
	mov byte ptr [esp+0x28],3
	mov dword ptr [esp+0x58],esp
	mov dword ptr [eax+4],esi
	test esi,esi
	je Block11

 Block10:
	lea edx,[esi+4]
	push edx
	call ebp

 Block11:
	lea ecx,[edi+0x178]
	call BulletContainer<CBullet>::Insert
	mov byte ptr [esp+0x20],1
	test esi,esi
	je Block14

 Block12:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block14

 Block13:
	push edi
	call ebp
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block14:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x20],0
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	mov ecx,dword ptr [esp+0x48]
	test ecx,ecx
	je Block18

 Block17:
	call _xbstr_t::Data_t::Release

 Block18:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x14
	ret 0x2C
}
}
// CAnimationDisplayer::RemoveAll
__SUB_CLASS_THIS0(000415A0, __thiscall, 18530,  CAnimationDisplayer, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	lea ecx,[esi+0x30]
	call ZList<CAnimationDisplayer::ONETIMEINFO>::RemoveAll
	lea ecx,[esi+0x44]
	call ZList<CAnimationDisplayer::REPEATINFO>::RemoveAll
	lea ecx,[esi+0x17C]
	call ZList<ZRef<CBullet>>::RemoveAll
	lea ecx,[esi+0x58]
	call ZList<CAnimationDisplayer::SQUIBINFO>::RemoveAll
	lea ecx,[esi+0x6C]
	call ZList<CAnimationDisplayer::RESERVEDINFO>::RemoveAll
	lea ecx,[esi+0x80]
	call ZList<CAnimationDisplayer::ABSORBITEM>::RemoveAll
	lea ecx,[esi+0x94]
	call ZList<CAnimationDisplayer::FALLINGINFO>::RemoveAll
	lea ecx,[esi+0xA8]
	call ZList<CAnimationDisplayer::EXPLOSIONINFO>::RemoveAll
	lea ecx,[esi+0xBC]
	call ZList<CAnimationDisplayer::CHAINLIGHTNINGINFO>::RemoveAll
	lea ecx,[esi+0xE4]
	call ZList<CAnimationDisplayer::FIRECRACKER>::RemoveAll
	lea ecx,[esi+0xF8]
	call ZList<CAnimationDisplayer::NEWYEARINFO>::RemoveAll
	lea ecx,[esi+0x10C]
	call ZList<CAnimationDisplayer::FOLLOWINFO>::RemoveAll
	lea ecx,[esi+0x120]
	call ZList<CAnimationDisplayer::MOTIONBLURINFO>::RemoveAll
	lea ecx,[esi+0x134]
	call ZList<CAnimationDisplayer::FADEINFO>::RemoveAll
	lea ecx,[esi+0x148]
	call ZMap<unsigned long, ZRef<CAnimationDisplayer::TAnimation<CAnimationDisplayer::CHAINLIGHTNINGINFO>>, unsigned long>::RemoveAll
	lea ecx,[esi+0x160]
	call ZList<CAnimationDisplayer::USERSTATEINFO>::RemoveAll
	mov ecx,esi
	pop esi
	jmp  CAnimationDisplayer::ResetLocalFadeLayer
}
}
// CAnimationDisplayer::CHAINLIGHTNINGINFO::Update
_SUB_EXCEPTION_HANDLER(54BB0)
__SUB_CLASS_THIS(00054BB0, __thiscall, 18947,  CAnimationDisplayer::CHAINLIGHTNINGINFO, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_54BB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [esp+0x4C]
	mov eax,ecx
	sub eax,dword ptr [esi+4]
	test eax,eax
	jle Block2

 Block1:
	mov eax,1
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x38
	ret 4

 Block2:
	cmp dword ptr [esi+0x14],0
	lea eax,[esi+0x14]
	mov dword ptr [esp+0x14],eax
	sete al
	test al,al
	je Block56

 Block3:
	sub ecx,dword ptr [esi]
	test ecx,ecx
	jle Block56

 Block4:
	mov dword ptr [esp+0x4C],0
	lea ecx,[esp+0x10]
	push 0x3D2
	push ecx
	mov dword ptr [esp+0x4C],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x44],1
	test eax,eax
	je Block6

 Block5:
	mov eax,dword ptr [eax]
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	push 0
	lea edx,[esp+0x50]
	push edx
	push eax
	call PcCreate_IWzVector2D
	mov ecx,dword ptr [esp+0x1C]
	add esp,0xC
	mov byte ptr [esp+0x44],0
	test ecx,ecx
	je Block9

 Block8:
	call _xbstr_t::Data_t::Release

 Block9:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push eax
	call edi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	lea edx,[esp+0x1C]
	mov bl,2
	push edx
	mov byte ptr [esp+0x48],bl
	call edi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	mov ecx,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x44],3
	test ecx,ecx
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea edx,[esp+0x2C]
	push edx
	mov edx,dword ptr [esi+0xC]
	lea eax,[esp+0x20]
	push eax
	mov eax,dword ptr [esi+8]
	push edx
	push eax
	call IWzVector2D::RelMove
	mov byte ptr [esp+0x44],bl
	mov ebx,8
	cmp word ptr [esp+0x1C],bx
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
	mov byte ptr [esp+0x44],0
	cmp word ptr [esp+0x2C],bx
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
	lea edx,[esp+0x2C]
	push edx
	call edi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	mov eax,dword ptr [esi+0x1C]
	mov dword ptr [esp+0x10],eax
	fild dword ptr [esp+0x10]
	mov byte ptr [esp+0x44],4
	test eax,eax
	jge Block27

 Block26:
	fadd qword ptr [__real_4076800000000000]

 Block27:
	mov ecx,dword ptr [esp+0x4C]
	test ecx,ecx
	jne Block29

 Block28:
	push 0x80004003
	fstp st(0)
	call _com_issue_error

 Block29:
	lea edx,[esp+0x2C]
	push edx
	sub esp,8
	fstp qword ptr [esp]
	call IWzVector2D::Rotate
	mov byte ptr [esp+0x44],0
	cmp word ptr [esp+0x2C],bx
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov edx,dword ptr [esi+0x10]
	push 0
	push 0xFF
	push edx
	push ecx
	mov dword ptr [esp+0x20],esp
	mov eax,esp
	push 0
	mov dword ptr [eax],0
	push 0
	push ecx
	mov ecx,dword ptr [esp+0x68]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x34],esp
	test eax,eax
	je Block35

 Block34:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block35:
	mov eax,dword ptr [esi+0x18]
	test eax,eax
	je Block37

 Block36:
	mov eax,dword ptr [eax]
	jmp Block38

 Block37:
	xor eax,eax

 Block38:
	push 0
	push eax
	lea ecx,[esp+0x34]
	push ecx
	call CAnimationDisplayer::LoadLayer_1
	mov esi,dword ptr [esp+0x3C]
	add esp,0x28
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block40

 Block39:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block40:
	lea ecx,[esp+0x1C]
	push ecx
	call edi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	lea eax,[esp+0x2C]
	mov bl,5
	push eax
	mov byte ptr [esp+0x48],bl
	call edi
	lea ecx,[esp+0x2C]
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
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x44],6
	test ecx,ecx
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x44],bl
	cmp word ptr [esp+0x2C],si
	jne Block49

 Block47:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	mov byte ptr [esp+0x44],0
	cmp word ptr [esp+0x1C],si
	jne Block53

 Block51:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov eax,dword ptr [esp+0x4C]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	test eax,eax
	je Block56

 Block55:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block56:
	xor eax,eax
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x38
	ret 4
}
}
// CAnimationDisplayer::Effect_Tremble
__SUB_CLASS_THIS(00039A70, __thiscall, 18596,  CAnimationDisplayer, void, double, int32_t, long, long, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CConfig>::ms_pInstance]
	cmp dword ptr [eax+0x90],0
	push esi
	mov esi,ecx
	jne Block2

 Block1:
	cmp dword ptr [esp+0x1C],0
	je Block7

 Block2:
	fld qword ptr [esp+8]
	fstp qword ptr [esi+0x1C8]
	call get_update_time
	mov ecx,dword ptr [esp+0x14]
	add eax,ecx
	mov ecx,dword ptr [esp+0x10]
	mov edx,ecx
	neg edx
	sbb edx,edx
	and edx,0xFFFFFE0C
	add edx,0x7D0
	add edx,eax
	mov dword ptr [esi+0x1D0],eax
	mov eax,dword ptr [esp+0x18]
	add edx,eax
	mov dword ptr [esi+0x1D4],edx
	test eax,eax
	je Block4

 Block3:
	fld1
	fstp qword ptr [esi+0x1D8]
	pop esi
	ret 0x18

 Block4:
	test ecx,ecx
	je Block6

 Block5:
	fld qword ptr [__real_3feb333333333333]
	fstp qword ptr [esi+0x1D8]
	pop esi
	ret 0x18

 Block6:
	fld qword ptr [__real_3fed70a3d70a3d71]
	fstp qword ptr [esi+0x1D8]

 Block7:
	pop esi
	ret 0x18
}
}
// CAnimationDisplayer::USERSTATEINFO::Update
_SUB_EXCEPTION_HANDLER(39600)
__SUB_CLASS_THIS(00039600, __thiscall, 18779,  CAnimationDisplayer::USERSTATEINFO, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_39600
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
	mov edi,ecx
	mov eax,dword ptr [edi+0xC]
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push eax
	call CUserPool::GetUser
	mov ebp,eax
	test ebp,ebp
	jne Block2

 Block1:
	lea eax,[ebp+1]
	jmp Block32

 Block2:
	cmp dword ptr [edi+0x10],0
	jne Block33

 Block3:
	mov esi,dword ptr [edi]
	test esi,esi
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x114]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block7

 Block6:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block7:
	cmp dword ptr [esp+0x14],0
	jne Block33

 Block8:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
	mov ebx,1
	push ecx
	mov dword ptr [edi+0x10],ebx
	call esi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	lea eax,[esp+0x18]
	push eax
	mov dword ptr [esp+0x64],0
	call esi
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	mov ecx,dword ptr [edi+4]
	mov byte ptr [esp+0x60],bl
	test ecx,ecx
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x1C]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x60],0
	cmp word ptr [esp+0x18],si
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block18:
	mov dword ptr [esp+0x60],0xFFFFFFFF
	cmp word ptr [esp+0x28],si
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[esp+0x28]
	push ecx
	call ebx

 Block22:
	mov esi,dword ptr [edi+4]
	test esi,esi
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block26

 Block25:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block26:
	mov esi,dword ptr [edi]
	test esi,esi
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFF
	push esi
	call edx

 Block29:
	test eax,eax
	jge Block31

 Block30:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block31:
	xor eax,eax

 Block32:
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret 4

 Block33:
	mov eax,dword ptr [edi+0x10]
	mov ebx,1
	cmp eax,ebx
	jne Block70

 Block34:
	cmp dword ptr [ebp+0x3AB4],0
	jne Block70

 Block35:
	mov dword ptr [ebp+0x3AB8],ebx
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x18]
	mov ebx,3
	push eax
	mov dword ptr [edi+0x10],ebx
	call ebp
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block37

 Block36:
	push eax
	call _com_issue_error

 Block37:
	lea edx,[esp+0x28]
	push edx
	mov dword ptr [esp+0x64],2
	call ebp
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block39

 Block38:
	push eax
	call _com_issue_error

 Block39:
	mov ecx,dword ptr [edi+8]
	mov byte ptr [esp+0x60],bl
	test ecx,ecx
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x2C]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x60],2
	cmp word ptr [esp+0x28],si
	jne Block44

 Block42:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov dword ptr [esp+0x60],0xFFFFFFFF
	cmp word ptr [esp+0x18],si
	jne Block48

 Block46:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block49:
	mov esi,dword ptr [edi+8]
	test esi,esi
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block53

 Block52:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block53:
	lea ecx,[esp+0x48]
	push ecx
	call ebp
	lea edx,[esp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	lea eax,[esp+0x38]
	mov ebx,4
	push eax
	mov dword ptr [esp+0x64],ebx
	call ebp
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block57

 Block56:
	push eax
	call _com_issue_error

 Block57:
	mov ecx,dword ptr [edi+4]
	mov byte ptr [esp+0x60],5
	test ecx,ecx
	jne Block59

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	lea edx,[esp+0x48]
	push edx
	lea eax,[esp+0x3C]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x38],si
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov dword ptr [esp+0x60],0xFFFFFFFF
	cmp word ptr [esp+0x48],si
	jne Block66

 Block64:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov esi,dword ptr [edi+4]
	test esi,esi
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFF
	push esi
	call eax
	jmp Block29

 Block70:
	cmp eax,3
	jne Block31

 Block71:
	mov ecx,dword ptr [edi+8]
	test ecx,ecx
	jne Block73

 Block72:
	push 0x80004003
	call _com_issue_error

 Block73:
	call IWzGr2DLayer::GetanimationState
	neg eax
	sbb eax,eax
	inc eax
	jmp Block32
}
}
// CAnimationDisplayer::LoadLayer
_SUB_EXCEPTION_HANDLER(4A8F0)
__SUB(0004A8F0, __cdecl, 18511,  _x_com_ptr<IWzGr2DLayer>, NakedParam<_x_com_ptr<IWzProperty>>, int32_t, NakedParam<_x_com_ptr<IWzVector2D>>, long, long, NakedParam<_x_com_ptr<IWzGr2DLayer>>, long, long, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4A8F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	xor edi,edi
	mov dword ptr [ebp-0x3C],edi
	lea eax,[ebp-0x30]
	mov ebx,3
	push eax
	mov dword ptr [ebp-4],ebx
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x30]
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
	mov edx,ebx
	mov word ptr [ebp-0x20],dx
	mov dword ptr [ebp-0x18],edi
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],5
	cmp ecx,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea eax,[ebp-0x30]
	push eax
	mov eax,dword ptr [ebp+8]
	lea edx,[ebp-0x20]
	push edx
	push edi
	push edi
	push edi
	push edi
	push edi
	push eax
	call IWzGr2D::CreateLayer
	mov esi,8
	mov dword ptr [ebp-0x3C],1
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x20],si
	jne Block7

 Block5:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	cmp eax,edi
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea edx,[ebp-0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block8:
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x30],si
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [ebp-0x30],ax
	mov eax,dword ptr [ebp-0x28]
	cmp eax,edi
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea ecx,[ebp-0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov eax,dword ptr [ebp+0x14]
	cmp eax,edi
	sete cl
	test cl,cl
	sete cl
	test cl,cl
	je Block23

 Block13:
	mov edx,0xD
	mov word ptr [ebp-0x20],dx
	mov dword ptr [ebp-0x18],eax
	cmp eax,edi
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block15:
	mov eax,dword ptr [ebp+8]
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],6
	cmp esi,edi
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	mov edx,dword ptr [ebp-0x20]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x1C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x18]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x14]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,edi
	jge Block19

 Block18:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block19:
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],3
	jne Block22

 Block20:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	cmp eax,edi
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea edx,[ebp-0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov eax,dword ptr [ebp+0x20]
	cmp eax,edi
	sete cl
	test cl,cl
	sete cl
	test cl,cl
	je Block34

 Block24:
	mov ecx,0xD
	mov word ptr [ebp-0x20],cx
	mov dword ptr [ebp-0x18],eax
	cmp eax,edi
	je Block26

 Block25:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block26:
	mov ecx,dword ptr [ebp+8]
	mov esi,dword ptr [ecx]
	mov byte ptr [ebp-4],7
	cmp esi,edi
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	mov ecx,dword ptr [ebp-0x20]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0xFC]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp-0x1C]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp-0x18]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x14]
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	cmp eax,edi
	jge Block30

 Block29:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block30:
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],3
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	cmp eax,edi
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x34],esp
	push 0x3E9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],8
	cmp ecx,edi
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	lea eax,[ebp-0x30]
	push eax
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],9
	mov dword ptr [ebp-0x3C],ebx
	call get_int32
	add esp,8
	test eax,eax
	jne Block39

 Block37:
	cmp dword ptr [ebp+0x10],edi
	je Block39

 Block38:
	mov eax,1
	jmp Block40

 Block39:
	xor eax,eax

 Block40:
	mov ecx,dword ptr [ebp+8]
	mov esi,dword ptr [ecx]
	cmp esi,edi
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0xD8]
	push esi
	call eax
	cmp eax,edi
	jge Block44

 Block43:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block44:
	cmp word ptr [ebp-0x30],8
	mov dword ptr [ebp-4],ebx
	mov dword ptr [ebp-0x3C],1
	jne Block47

 Block45:
	mov eax,dword ptr [ebp-0x28]
	xor ecx,ecx
	mov word ptr [ebp-0x30],cx
	cmp eax,edi
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea edx,[ebp-0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	mov eax,dword ptr [ebp+0x24]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x34],esp
	push 0x3E7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],0xA
	cmp ecx,edi
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea edx,[ebp-0x30]
	push edx
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	mov ebx,dword ptr [ebp+8]
	mov esi,dword ptr [ebx]
	mov byte ptr [ebp-4],0xB
	cmp esi,edi
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	push eax
	call get_int32
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xB4]
	add esp,8
	push eax
	push esi
	call edx
	cmp eax,edi
	jge Block54

 Block53:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block54:
	cmp word ptr [ebp-0x30],8
	mov byte ptr [ebp-4],3
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [ebp-0x30],ax
	mov eax,dword ptr [ebp-0x28]
	cmp eax,edi
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[ebp-0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov esi,dword ptr [ebx]
	cmp esi,edi
	jne Block60

 Block59:
	push 0x80004003
	call _com_issue_error

 Block60:
	mov eax,dword ptr [ebp+0x28]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xE0]
	shl eax,0x18
	or eax,0xFFFFFF
	push eax
	push esi
	call ecx
	cmp eax,edi
	jge Block62

 Block61:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block62:
	lea edx,[ebp-0x20]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block64

 Block63:
	push eax
	call _com_issue_error

 Block64:
	lea ecx,[ebp-0x30]
	mov bl,0xC
	push ecx
	mov byte ptr [ebp-4],bl
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block66

 Block65:
	push eax
	call _com_issue_error

 Block66:
	mov eax,dword ptr [ebp+8]
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0xD
	cmp ecx,edi
	jne Block68

 Block67:
	push 0x80004003
	call _com_issue_error

 Block68:
	lea edx,[ebp-0x20]
	push edx
	mov edx,dword ptr [ebp+0x1C]
	lea eax,[ebp-0x30]
	push eax
	mov eax,dword ptr [ebp+0x18]
	push edx
	push eax
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x30],si
	jne Block71

 Block69:
	mov eax,dword ptr [ebp-0x28]
	xor ecx,ecx
	mov word ptr [ebp-0x30],cx
	cmp eax,edi
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea edx,[ebp-0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block72:
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x20],si
	jne Block75

 Block73:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	cmp eax,edi
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block76:
	xor ebx,ebx

 Block77:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x38],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],0xE
	cmp ecx,edi
	je Block3

 Block78:
	lea edx,[ebp-0x20]
	push edx
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x20],di
	je Block101

 Block79:
	lea eax,[ebp-0x20]
	push eax
	lea ecx,[ebp-0x34]
	push ecx
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x10
	mov dword ptr [ebp-0x38],edi
	mov dword ptr [ebp-0x40],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block81

 Block80:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block81:
	lea ecx,[ebp-0x38]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block83

 Block82:
	cmp eax,0x80004002
	jne Block1

 Block83:
	mov eax,dword ptr [ebp-0x34]
	mov byte ptr [ebp-4],0x12
	cmp eax,edi
	je Block85

 Block84:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block85:
	mov esi,dword ptr [ebp-0x38]
	cmp esi,edi
	sete al
	test al,al
	jne Block102

 Block86:
	cmp dword ptr [ebp+0x2C],edi
	jle Block90

 Block87:
	cmp esi,edi
	je Block3

 Block88:
	mov ecx,dword ptr [ebp+0x2C]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x5C]
	push ecx
	push esi
	call edx
	cmp eax,edi
	jge Block90

 Block89:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block90:
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x40],esp
	mov dword ptr [eax],esi
	cmp esi,edi
	je Block92

 Block91:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block92:
	mov edx,dword ptr [ebp+8]
	mov eax,dword ptr [edx]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x40],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block94

 Block93:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block94:
	call CAnimationDisplayer::LoadCanvas
	add esp,8
	mov byte ptr [ebp-4],0xF
	cmp esi,edi
	je Block96

 Block95:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block96:
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],3
	jne Block99

 Block97:
	mov eax,dword ptr [ebp-0x18]
	xor edx,edx
	mov word ptr [ebp-0x20],dx
	cmp eax,edi
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc ebx
	jmp Block77

 Block99:
	lea eax,[ebp-0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block100:
	inc ebx
	jmp Block77

 Block101:
	lea ecx,[ebp-0x20]
	push ecx
	jmp Block108

 Block102:
	mov byte ptr [ebp-4],0xF
	cmp esi,edi
	je Block104

 Block103:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block104:
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],3
	jne Block107

 Block105:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	cmp eax,edi
	je Block109

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block109

 Block107:
	lea edx,[ebp-0x20]
	push edx

 Block108:
	call dword ptr [ZImports::_VariantClear]

 Block109:
	mov eax,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],2
	cmp eax,edi
	je Block111

 Block110:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block111:
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],1
	cmp eax,edi
	je Block113

 Block112:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block113:
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0
	cmp eax,edi
	je Block115

 Block114:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block115:
	mov eax,dword ptr [ebp+8]
	lea esp,[ebp-0x50]
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
	ret
}
}
// TAnimation<CAnimationDisplayer::FALLINGINFO>::Update
__SUB_CLASS_THIS(0004EC00, __thiscall, 19247,  TAnimation<CAnimationDisplayer::FALLINGINFO>, void, long) {
__asm {

 Block0:
	push ecx
	push ebx
	mov ebx,ecx
	mov eax,dword ptr [ebx+0xC]
	mov dword ptr [esp+4],eax
	test eax,eax
	je Block6

 Block1:
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]

 Block2:
	mov esi,eax
	lea eax,[esp+0xC]
	push eax
	call ZList<CAnimationDisplayer::FALLINGINFO>::GetNext
	add esp,4
	push edi
	mov ecx,eax
	call CAnimationDisplayer::FALLINGINFO::Update
	test eax,eax
	je Block4

 Block3:
	push esi
	mov ecx,ebx
	call ZList<CAnimationDisplayer::FALLINGINFO>::RemoveAt

 Block4:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	jne Block2

 Block5:
	pop edi
	pop esi

 Block6:
	pop ebx
	pop ecx
	ret 4
}
}
// CAnimationDisplayer::MOTIONBLURINFO::Update
_SUB_EXCEPTION_HANDLER(47EF0)
__SUB_CLASS_THIS(00047EF0, __thiscall, 18975,  CAnimationDisplayer::MOTIONBLURINFO, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_47EF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x148
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x15C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x18],edi
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [esp+0x16C]
	sub ecx,eax
	js Block136

 Block1:
	mov edx,dword ptr [edi+0x10]
	add edx,eax
	mov eax,dword ptr [edi+0x1C]
	xor ebp,ebp
	mov dword ptr [edi],edx
	cmp dword ptr [eax],ebp
	je Block3

 Block2:
	lea eax,[ebp+1]
	jmp Block137

 Block3:
	cmp dword ptr [eax+4],ebp
	jne Block136

 Block4:
	xor ecx,ecx
	mov dword ptr [esp+0x20],ecx
	jmp Block6

 Block6:
	mov eax,dword ptr [edi+8]
	cmp eax,ebp
	je Block136

 Block7:
	cmp ecx,dword ptr [eax-4]
	jae Block136

 Block8:
	mov esi,dword ptr [eax+ecx*4]
	lea eax,[eax+ecx*4]
	mov dword ptr [esp+0x14],esi
	cmp esi,ebp
	je Block10

 Block9:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block10:
	mov eax,3
	mov dword ptr [esp+0x164],ebp
	mov word ptr [esp+0xD8],ax
	mov dword ptr [esp+0xE0],ebp
	mov byte ptr [esp+0x164],1
	cmp esi,ebp
	je Block134

 Block11:
	lea ecx,[esp+0xD8]
	push ecx
	lea edx,[esp+0x28]
	push edx
	mov ecx,esi
	call IWzGr2DLayer::Getcanvas
	cmp dword ptr [eax],ebp
	mov eax,dword ptr [esp+0x24]
	sete bl
	mov byte ptr [esp+0x164],1
	cmp eax,ebp
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	cmp word ptr [esp+0xD8],8
	mov byte ptr [esp+0x164],0
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0xD8],ax
	mov eax,dword ptr [esp+0xE0]
	cmp eax,ebp
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0xD8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	test bl,bl
	je Block19

 Block18:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov dword ptr [esp+0x168],0xFFFFFFFF
	call eax
	inc dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x20]
	jmp Block6

 Block19:
	lea ecx,[esp+0x98]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x98]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block135

 Block20:
	mov eax,3
	mov word ptr [esp+0x68],ax
	mov dword ptr [esp+0x70],ebp
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x164],4
	cmp ecx,ebp
	je Block134

 Block21:
	lea edx,[esp+0x98]
	push edx
	lea eax,[esp+0x6C]
	push eax
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	lea edx,[esp+0x4C]
	push edx
	call IWzGr2D::CreateLayer
	mov edi,8
	mov byte ptr [esp+0x164],6
	cmp word ptr [esp+0x68],di
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	cmp eax,ebp
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[esp+0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov byte ptr [esp+0x164],7
	cmp word ptr [esp+0x98],di
	jne Block28

 Block26:
	mov eax,dword ptr [esp+0xA0]
	xor edx,edx
	mov word ptr [esp+0x98],dx
	cmp eax,ebp
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea eax,[esp+0x98]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov edi,dword ptr [esp+0x30]
	cmp edi,ebp
	je Block131

 Block30:
	lea ecx,[esp+0x148]
	push ecx
	mov ecx,esi
	call IWzVector2D::Getorigin
	movzx ecx,word ptr [eax]
	mov byte ptr [esp+0x164],8
	cmp cx,9
	je Block37

 Block31:
	cmp cx,0xD
	je Block37

 Block32:
	mov edx,0x4009
	cmp cx,dx
	je Block35

 Block33:
	mov edx,0x400D
	cmp cx,dx
	je Block35

 Block34:
	xor eax,eax
	jmp Block38

 Block35:
	mov eax,dword ptr [eax+8]
	cmp eax,ebp
	je Block34

 Block36:
	mov eax,dword ptr [eax]
	jmp Block38

 Block37:
	mov eax,dword ptr [eax+8]

 Block38:
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],ebp
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,ebp
	jge Block40

 Block39:
	cmp eax,0x80004002
	jne Block135

 Block40:
	mov esi,8
	mov byte ptr [esp+0x164],0xB
	cmp word ptr [esp+0x148],si
	jne Block43

 Block41:
	xor eax,eax
	mov word ptr [esp+0x148],ax
	mov eax,dword ptr [esp+0x150]
	cmp eax,ebp
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea ecx,[esp+0x148]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [edx+4]
	mov ecx,0xD
	mov word ptr [esp+0x38],cx
	mov dword ptr [esp+0x40],eax
	cmp eax,ebp
	je Block46

 Block45:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block46:
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x168],0xC
	call IWzGr2DLayer::Putoverlay
	mov byte ptr [esp+0x164],0xB
	cmp word ptr [esp+0x38],si
	jne Block49

 Block47:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	cmp eax,ebp
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block50:
	cmp dword ptr [esp+0x1C],ebp
	je Block134

 Block51:
	mov ebx,dword ptr [esp+0x1C]
	mov ecx,ebx
	call IWzShape2D::Gety
	mov ecx,ebx
	mov esi,eax
	call IWzShape2D::Getx
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0x40]
	push esi
	push eax
	push edi
	call edx
	cmp eax,ebp
	jge Block53

 Block52:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block53:
	mov esi,dword ptr [esp+0x14]
	mov ecx,esi
	call IWzGr2DLayer::Getz
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xB4]
	sub eax,0xA
	push eax
	push edi
	call edx
	cmp eax,ebp
	jge Block55

 Block54:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block55:
	mov ecx,esi
	call IWzGr2DLayer::Getflip
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xD8]
	push eax
	push edi
	call edx
	cmp eax,ebp
	jge Block57

 Block56:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block57:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0xA8]
	push eax
	call esi
	lea ecx,[esp+0xA8]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block135

 Block58:
	lea edx,[esp+0x88]
	push edx
	mov byte ptr [esp+0x168],0xD
	call esi
	lea eax,[esp+0x88]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block135

 Block59:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x168],0xE
	call IWzGr2DLayer::Getalpha
	mov esi,eax
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x14]
	mov bl,byte ptr [edx+0x14]
	mov byte ptr [esp+0x164],0xF
	call IWzGr2DLayer::Getcolor
	shr eax,0x18
	cmp al,bl
	jb Block61

 Block60:
	mov al,bl

 Block61:
	mov ecx,dword ptr [esi]
	cmp ecx,ebp
	je Block134

 Block62:
	lea edx,[esp+0xA8]
	push edx
	lea edx,[esp+0x8C]
	push edx
	movzx eax,al
	push ebp
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x164],0xE
	cmp eax,ebp
	je Block64

 Block63:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block64:
	mov esi,8
	mov byte ptr [esp+0x164],0xD
	cmp word ptr [esp+0x88],si
	jne Block67

 Block65:
	xor eax,eax
	mov word ptr [esp+0x88],ax
	mov eax,dword ptr [esp+0x90]
	cmp eax,ebp
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea ecx,[esp+0x88]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block68:
	mov byte ptr [esp+0x164],0xB
	cmp word ptr [esp+0xA8],si
	jne Block71

 Block69:
	mov eax,dword ptr [esp+0xB0]
	xor edx,edx
	mov word ptr [esp+0xA8],dx
	cmp eax,ebp
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea eax,[esp+0xA8]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block72:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0xF8]
	push ecx
	call esi
	lea edx,[esp+0xF8]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block135

 Block73:
	mov ecx,edi
	mov byte ptr [esp+0x164],0x10
	call IWzVector2D::GetcurrentTime
	mov ebx,dword ptr [esp+0x18]
	add eax,dword ptr [ebx+0xC]
	mov ecx,3
	mov word ptr [esp+0xB8],cx
	mov dword ptr [esp+0xC0],eax
	lea edx,[esp+0x2C]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x168],0x11
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x164],0x12
	cmp ecx,ebp
	je Block134

 Block74:
	lea eax,[esp+0xF8]
	push eax
	lea edx,[esp+0xBC]
	push edx
	push ebp
	push ebp
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x164],0x11
	cmp eax,ebp
	je Block76

 Block75:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block76:
	cmp word ptr [esp+0xB8],8
	mov byte ptr [esp+0x164],0x10
	jne Block79

 Block77:
	xor eax,eax
	mov word ptr [esp+0xB8],ax
	mov eax,dword ptr [esp+0xC0]
	cmp eax,ebp
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea ecx,[esp+0xB8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block80:
	cmp word ptr [esp+0xF8],8
	mov byte ptr [esp+0x164],0xB
	jne Block83

 Block81:
	mov eax,dword ptr [esp+0x100]
	xor edx,edx
	mov word ptr [esp+0xF8],dx
	cmp eax,ebp
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea eax,[esp+0xF8]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block84:
	lea ecx,[esp+0x58]
	push ecx
	call esi
	lea edx,[esp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block135

 Block85:
	lea eax,[esp+0x48]
	push eax
	mov byte ptr [esp+0x168],0x13
	call esi
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block135

 Block86:
	lea edx,[esp+0x58]
	push edx
	lea eax,[esp+0x4C]
	push eax
	push ebp
	mov ecx,edi
	mov byte ptr [esp+0x170],0x14
	call IWzGr2DLayer::Animate
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x164],0x13
	jne Block89

 Block87:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	cmp eax,ebp
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block90:
	cmp word ptr [esp+0x58],8
	mov byte ptr [esp+0x164],0xB
	jne Block93

 Block91:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	cmp eax,ebp
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block94:
	lea edx,[esp+0x118]
	push edx
	call esi
	lea eax,[esp+0x118]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block135

 Block95:
	lea ecx,[esp+0x128]
	push ecx
	mov byte ptr [esp+0x168],0x15
	call esi
	lea edx,[esp+0x128]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block135

 Block96:
	lea eax,[esp+0x108]
	push eax
	mov byte ptr [esp+0x168],0x16
	call esi
	lea ecx,[esp+0x108]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block135

 Block97:
	lea edx,[esp+0xE8]
	push edx
	mov byte ptr [esp+0x168],0x17
	call esi
	lea eax,[esp+0xE8]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block135

 Block98:
	lea ecx,[esp+0xC8]
	push ecx
	mov byte ptr [esp+0x168],0x18
	call esi
	lea edx,[esp+0xC8]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block135

 Block99:
	mov eax,3
	mov word ptr [esp+0x78],ax
	mov dword ptr [esp+0x80],ebp
	lea ecx,[esp+0x78]
	push ecx
	mov ecx,dword ptr [esp+0x18]
	lea edx,[esp+0x38]
	push edx
	mov byte ptr [esp+0x16C],0x1A
	call IWzGr2DLayer::Getcanvas
	mov eax,dword ptr [eax]
	lea ecx,[esp+0x118]
	push ecx
	lea edx,[esp+0x12C]
	push edx
	lea ecx,[esp+0x110]
	push ecx
	lea edx,[esp+0xF4]
	push edx
	lea ecx,[esp+0xD8]
	push ecx
	push eax
	lea edx,[esp+0x150]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x180],0x1B
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x138],8
	jne Block108

 Block100:
	xor eax,eax
	mov word ptr [esp+0x138],ax
	mov eax,dword ptr [esp+0x140]
	cmp eax,ebp
	je Block102

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block102:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block103:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x164],0x1A
	cmp eax,ebp
	je Block105

 Block104:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block105:
	cmp word ptr [esp+0x78],8
	mov byte ptr [esp+0x164],0x19
	jne Block109

 Block106:
	mov eax,dword ptr [esp+0x80]
	xor ecx,ecx
	mov word ptr [esp+0x78],cx
	cmp eax,ebp
	je Block110

 Block107:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block108:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x138]
	push ecx
	call esi
	jmp Block103

 Block109:
	lea edx,[esp+0x78]
	push edx
	call esi

 Block110:
	cmp word ptr [esp+0xC8],8
	mov byte ptr [esp+0x164],0x18
	jne Block113

 Block111:
	xor eax,eax
	mov word ptr [esp+0xC8],ax
	mov eax,dword ptr [esp+0xD0]
	cmp eax,ebp
	je Block114

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block114

 Block113:
	lea ecx,[esp+0xC8]
	push ecx
	call esi

 Block114:
	cmp word ptr [esp+0xE8],8
	mov byte ptr [esp+0x164],0x17
	jne Block117

 Block115:
	mov eax,dword ptr [esp+0xF0]
	xor edx,edx
	mov word ptr [esp+0xE8],dx
	cmp eax,ebp
	je Block118

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block118

 Block117:
	lea eax,[esp+0xE8]
	push eax
	call esi

 Block118:
	cmp word ptr [esp+0x108],8
	mov byte ptr [esp+0x164],0x16
	jne Block121

 Block119:
	mov eax,dword ptr [esp+0x110]
	xor ecx,ecx
	mov word ptr [esp+0x108],cx
	cmp eax,ebp
	je Block122

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block122

 Block121:
	lea edx,[esp+0x108]
	push edx
	call esi

 Block122:
	cmp word ptr [esp+0x128],8
	mov byte ptr [esp+0x164],0x15
	jne Block125

 Block123:
	xor eax,eax
	mov word ptr [esp+0x128],ax
	mov eax,dword ptr [esp+0x130]
	cmp eax,ebp
	je Block126

 Block124:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block126

 Block125:
	lea ecx,[esp+0x128]
	push ecx
	call esi

 Block126:
	cmp word ptr [esp+0x118],8
	mov byte ptr [esp+0x164],0xB
	jne Block129

 Block127:
	mov eax,dword ptr [esp+0x120]
	xor edx,edx
	mov word ptr [esp+0x118],dx
	cmp eax,ebp
	je Block130

 Block128:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block130

 Block129:
	lea eax,[esp+0x118]
	push eax
	call esi

 Block130:
	mov ecx,dword ptr [ebx+0xC]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x160],esp
	push edi
	call eax
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterRepeatAnimation
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x168],7
	call edx
	mov esi,dword ptr [esp+0x14]

 Block131:
	mov byte ptr [esp+0x164],0
	cmp edi,ebp
	je Block133

 Block132:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block133:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov dword ptr [esp+0x168],0xFFFFFFFF
	call eax
	inc dword ptr [esp+0x20]
	mov edi,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x20]
	jmp Block6

 Block134:
	push 0x80004003
	call _com_issue_error

 Block135:
	push eax
	call _com_issue_error

 Block136:
	xor eax,eax

 Block137:
	mov ecx,dword ptr [esp+0x15C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x154
	ret 4
}
}
// CAnimationDisplayer::Effect_ApplyStartDelay
_SUB_EXCEPTION_HANDLER(49BC0)
__SUB_CLASS_THIS(00049BC0, __thiscall, 18586,  CAnimationDisplayer, void, const wchar_t*, int32_t, NakedParam<_x_com_ptr<IWzVector2D>>, long, long, NakedParam<_x_com_ptr<IWzGr2DLayer>>, long, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x58]
	sub esp,0x58
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_49BC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x78
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x54],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp],ecx
	xor esi,esi
	mov dword ptr [ebp+0x50],esi
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x64]
	push eax
	mov dword ptr [ebp-4],1
	call edi
	lea ecx,[ebp-0x64]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x24]
	push edx
	mov byte ptr [ebp-4],2
	call edi
	lea eax,[ebp-0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	mov eax,dword ptr [ebp+0x60]
	lea ecx,[ebp-0x64]
	push ecx
	lea edx,[ebp-0x24]
	push edx
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],3
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],4
	cmp dword ptr [_D_G_RM],esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[ebp-0x74]
	push ecx
	mov byte ptr [ebp-4],3
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	push eax
	lea edx,[ebp-0x14]
	push edx
	mov byte ptr [ebp-4],5
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],6
	mov dword ptr [ebp+0x18],esi
	mov dword ptr [ebp+0x3C],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block8:
	lea ecx,[ebp+0x18]
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
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],8
	cmp eax,esi
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	cmp word ptr [ebp-0x74],8
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],9
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [ebp-0x74],ax
	mov eax,dword ptr [ebp-0x6C]
	cmp eax,esi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[ebp-0x74]
	push ecx
	call ebx

 Block17:
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],0xA
	jne Block20

 Block18:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	cmp eax,esi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[ebp-0x24]
	push eax
	call ebx

 Block21:
	cmp word ptr [ebp-0x64],8
	mov byte ptr [ebp-4],0xB
	jne Block24

 Block22:
	mov eax,dword ptr [ebp-0x5C]
	xor ecx,ecx
	mov word ptr [ebp-0x64],cx
	cmp eax,esi
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea edx,[ebp-0x64]
	push edx
	call ebx

 Block25:
	mov ebx,dword ptr [ebp+0x18]
	cmp ebx,esi
	sete al
	test al,al
	jne Block178

 Block26:
	cmp ebx,esi
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp+0x50]
	push ecx
	push ebx
	mov dword ptr [ebp+0x50],esi
	call edx
	cmp eax,esi
	jge Block30

 Block29:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block30:
	cmp dword ptr [ebp+0x50],esi
	je Block178

 Block31:
	lea eax,[ebp-0x44]
	push eax
	call edi
	lea ecx,[ebp-0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	mov edx,3
	mov word ptr [ebp-0x34],dx
	mov dword ptr [ebp-0x2C],esi
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0xD
	cmp ecx,esi
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	lea eax,[ebp-0x44]
	push eax
	lea edx,[ebp-0x34]
	push edx
	push esi
	push esi
	push esi
	push esi
	push esi
	lea eax,[ebp-0x10]
	push eax
	call IWzGr2D::CreateLayer
	mov edi,8
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x34],di
	jne Block38

 Block36:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	cmp eax,esi
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea edx,[ebp-0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block39:
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp-0x44],di
	jne Block42

 Block40:
	xor eax,eax
	mov word ptr [ebp-0x44],ax
	mov eax,dword ptr [ebp-0x3C]
	cmp eax,esi
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea ecx,[ebp-0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block43:
	mov eax,dword ptr [ebp+0x68]
	mov edi,dword ptr [ebp-0x10]
	cmp eax,esi
	sete cl
	test cl,cl
	sete cl
	test cl,cl
	je Block52

 Block44:
	mov edx,0xD
	mov word ptr [ebp+0x40],dx
	mov dword ptr [ebp+0x48],eax
	cmp eax,esi
	je Block46

 Block45:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block46:
	mov byte ptr [ebp-4],0x11
	cmp edi,esi
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	lea eax,[ebp+0x40]
	push eax
	mov ecx,edi
	call IWzVector2D::Putorigin
	cmp word ptr [ebp+0x40],8
	mov byte ptr [ebp-4],0x10
	jne Block51

 Block49:
	mov eax,dword ptr [ebp+0x48]
	xor ecx,ecx
	mov word ptr [ebp+0x40],cx
	cmp eax,esi
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea edx,[ebp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov eax,dword ptr [ebp+0x74]
	cmp eax,esi
	sete cl
	test cl,cl
	sete cl
	test cl,cl
	je Block61

 Block53:
	mov ecx,0xD
	mov word ptr [ebp+0x40],cx
	mov dword ptr [ebp+0x48],eax
	cmp eax,esi
	je Block55

 Block54:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block55:
	mov byte ptr [ebp-4],0x12
	cmp edi,esi
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	lea ecx,[ebp+0x40]
	push ecx
	mov ecx,edi
	call IWzGr2DLayer::Putoverlay
	cmp word ptr [ebp+0x40],8
	mov byte ptr [ebp-4],0x10
	jne Block60

 Block58:
	mov eax,dword ptr [ebp+0x48]
	xor edx,edx
	mov word ptr [ebp+0x40],dx
	cmp eax,esi
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea eax,[ebp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block61:
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x3C],esp
	push 0x3E9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x13
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x14
	mov dword ptr [ebp+0x50],1
	call get_int32
	add esp,8
	test eax,eax
	jne Block64

 Block62:
	cmp dword ptr [ebp+0x64],esi
	je Block64

 Block63:
	mov eax,1
	jmp Block65

 Block64:
	xor eax,eax

 Block65:
	cmp edi,esi
	jne Block67

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xD8]
	push eax
	push edi
	call edx
	cmp eax,esi
	jge Block69

 Block68:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block69:
	cmp word ptr [ebp+0x2C],8
	mov dword ptr [ebp-4],0x10
	jne Block72

 Block70:
	xor eax,eax
	mov word ptr [ebp+0x2C],ax
	mov eax,dword ptr [ebp+0x34]
	cmp eax,esi
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea ecx,[ebp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block73:
	mov edx,dword ptr [ebp+0x78]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x3C],esp
	push 0x3E7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x2C]
	push ecx
	mov byte ptr [ebp-4],0x15
	mov ecx,ebx
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x16
	call get_int32
	mov edx,dword ptr [edi]
	add esp,8
	push eax
	mov eax,dword ptr [edx+0xB4]
	push edi
	call eax
	cmp eax,esi
	jge Block75

 Block74:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block75:
	cmp word ptr [ebp+0x2C],8
	mov byte ptr [ebp-4],0x10
	jne Block78

 Block76:
	mov eax,dword ptr [ebp+0x34]
	xor ecx,ecx
	mov word ptr [ebp+0x2C],cx
	cmp eax,esi
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea edx,[ebp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block79:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push edi
	call ecx
	cmp eax,esi
	jge Block81

 Block80:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block81:
	lea edx,[ebp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block83

 Block82:
	push eax
	call _com_issue_error

 Block83:
	lea ecx,[ebp+0x40]
	mov bl,0x17
	push ecx
	mov byte ptr [ebp-4],bl
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block85

 Block84:
	push eax
	call _com_issue_error

 Block85:
	mov edx,dword ptr [ebp+0x70]
	lea eax,[ebp+0x1C]
	push eax
	mov eax,dword ptr [ebp+0x6C]
	lea ecx,[ebp+0x40]
	push ecx
	push edx
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x18
	call IWzVector2D::RelMove
	cmp word ptr [ebp+0x40],8
	mov byte ptr [ebp-4],bl
	jne Block88

 Block86:
	mov eax,dword ptr [ebp+0x48]
	xor ecx,ecx
	mov word ptr [ebp+0x40],cx
	cmp eax,esi
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea edx,[ebp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block89:
	cmp word ptr [ebp+0x1C],8
	mov byte ptr [ebp-4],0x10
	jne Block92

 Block90:
	xor eax,eax
	mov word ptr [ebp+0x1C],ax
	mov eax,dword ptr [ebp+0x24]
	cmp eax,esi
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea ecx,[ebp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block93:
	mov esi,dword ptr [ebp+0x7C]
	test esi,esi
	je Block137

 Block94:
	mov dword ptr [ebp+0x50],0
	lea edx,[ebp+0x3C]
	push 0x3D0
	push edx
	mov byte ptr [ebp-4],0x19
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[ebp+0x50]
	push ecx
	push eax
	mov byte ptr [ebp-4],0x1A
	call PcCreate_IWzCanvas
	mov eax,dword ptr [ebp+0x3C]
	add esp,0xC
	mov byte ptr [ebp-4],0x19
	test eax,eax
	je Block96

 Block95:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block96:
	lea edx,[ebp+0x40]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block98

 Block97:
	push eax
	call _com_issue_error

 Block98:
	lea ecx,[ebp+0x1C]
	mov bl,0x1B
	push ecx
	mov byte ptr [ebp-4],bl
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block100

 Block99:
	push eax
	call _com_issue_error

 Block100:
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x1C
	test ecx,ecx
	jne Block102

 Block101:
	push 0x80004003
	call _com_issue_error

 Block102:
	lea eax,[ebp+0x40]
	push eax
	lea edx,[ebp+0x1C]
	push edx
	push 1
	push 1
	call IWzCanvas::Create
	cmp word ptr [ebp+0x1C],8
	mov byte ptr [ebp-4],bl
	jne Block105

 Block103:
	xor eax,eax
	mov word ptr [ebp+0x1C],ax
	mov eax,dword ptr [ebp+0x24]
	test eax,eax
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea ecx,[ebp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block106:
	cmp word ptr [ebp+0x40],8
	mov byte ptr [ebp-4],0x19
	jne Block113

 Block107:
	mov eax,dword ptr [ebp+0x48]
	xor edx,edx
	mov word ptr [ebp+0x40],dx
	test eax,eax
	je Block109

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block109:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block110:
	mov ecx,3
	xor eax,eax
	mov word ptr [ebp+0x2C],cx
	mov dword ptr [ebp+0x34],eax
	mov edx,ecx
	mov word ptr [ebp+4],dx
	mov dword ptr [ebp+0xC],eax
	mov eax,ecx
	mov word ptr [ebp-0x54],ax
	or eax,0xFFFFFFFF
	mov dword ptr [ebp-0x4C],eax
	mov word ptr [ebp+0x40],cx
	mov dword ptr [ebp+0x48],eax
	mov word ptr [ebp+0x1C],dx
	mov dword ptr [ebp+0x24],esi
	lea eax,[ebp+0x2C]
	push eax
	lea ecx,[ebp+4]
	push ecx
	lea edx,[ebp-0x54]
	push edx
	mov edx,dword ptr [ebp+0x50]
	lea eax,[ebp+0x40]
	push eax
	lea ecx,[ebp+0x1C]
	push ecx
	push edx
	lea eax,[ebp-0x84]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x21
	call IWzGr2DLayer::InsertCanvas
	mov esi,8
	cmp word ptr [ebp-0x84],si
	jne Block114

 Block111:
	mov eax,dword ptr [ebp-0x7C]
	xor ecx,ecx
	mov word ptr [ebp-0x84],cx
	test eax,eax
	je Block115

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block113:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp+0x40]
	push eax
	call ebx
	jmp Block110

 Block114:
	lea edx,[ebp-0x84]
	push edx
	call ebx

 Block115:
	mov byte ptr [ebp-4],0x20
	cmp word ptr [ebp+0x1C],si
	jne Block118

 Block116:
	xor eax,eax
	mov word ptr [ebp+0x1C],ax
	mov eax,dword ptr [ebp+0x24]
	test eax,eax
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea ecx,[ebp+0x1C]
	push ecx
	call ebx

 Block119:
	mov byte ptr [ebp-4],0x1F
	cmp word ptr [ebp+0x40],si
	jne Block122

 Block120:
	mov eax,dword ptr [ebp+0x48]
	xor edx,edx
	mov word ptr [ebp+0x40],dx
	test eax,eax
	je Block123

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block122:
	lea eax,[ebp+0x40]
	push eax
	call ebx

 Block123:
	mov byte ptr [ebp-4],0x1E
	cmp word ptr [ebp-0x54],si
	jne Block126

 Block124:
	mov eax,dword ptr [ebp-0x4C]
	xor ecx,ecx
	mov word ptr [ebp-0x54],cx
	test eax,eax
	je Block127

 Block125:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block126:
	lea edx,[ebp-0x54]
	push edx
	call ebx

 Block127:
	mov byte ptr [ebp-4],0x1D
	cmp word ptr [ebp+4],si
	jne Block130

 Block128:
	xor eax,eax
	mov word ptr [ebp+4],ax
	mov eax,dword ptr [ebp+0xC]
	test eax,eax
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea ecx,[ebp+4]
	push ecx
	call ebx

 Block131:
	mov byte ptr [ebp-4],0x19
	cmp word ptr [ebp+0x2C],si
	jne Block134

 Block132:
	mov eax,dword ptr [ebp+0x34]
	xor edx,edx
	mov word ptr [ebp+0x2C],dx
	test eax,eax
	je Block135

 Block133:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block135

 Block134:
	lea eax,[ebp+0x2C]
	push eax
	call ebx

 Block135:
	mov eax,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block137

 Block136:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block137:
	xor ebx,ebx

 Block138:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x50],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x18]
	lea eax,[ebp+0x40]
	mov byte ptr [ebp-4],0x22
	push eax
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	cmp word ptr [ebp+0x40],0
	mov byte ptr [ebp-4],0x23
	je Block155

 Block139:
	lea ecx,[ebp+0x40]
	push ecx
	lea edx,[ebp+0x3C]
	push edx
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x24
	mov dword ptr [ebp+0x50],0
	mov dword ptr [ebp+0x14],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block141

 Block140:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block141:
	lea ecx,[ebp+0x50]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	test eax,eax
	jge Block143

 Block142:
	cmp eax,0x80004002
	jne Block1

 Block143:
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x26
	test eax,eax
	je Block145

 Block144:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block145:
	mov esi,dword ptr [ebp+0x50]
	test esi,esi
	sete al
	test al,al
	jne Block156

 Block146:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x14],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block148

 Block147:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block148:
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [ebp+0x14],esp
	push edi
	call eax
	call CAnimationDisplayer::LoadCanvas
	add esp,8
	mov byte ptr [ebp-4],0x23
	test esi,esi
	je Block150

 Block149:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block150:
	cmp word ptr [ebp+0x40],8
	mov byte ptr [ebp-4],0x10
	jne Block153

 Block151:
	xor eax,eax
	mov word ptr [ebp+0x40],ax
	mov eax,dword ptr [ebp+0x48]
	test eax,eax
	je Block154

 Block152:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc ebx
	jmp Block138

 Block153:
	lea ecx,[ebp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block154:
	inc ebx
	jmp Block138

 Block155:
	lea edx,[ebp+0x40]
	mov byte ptr [ebp-4],0x10
	push edx
	jmp Block162

 Block156:
	mov byte ptr [ebp-4],0x23
	test esi,esi
	je Block158

 Block157:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block158:
	cmp word ptr [ebp+0x40],8
	mov byte ptr [ebp-4],0x10
	jne Block161

 Block159:
	mov eax,dword ptr [ebp+0x48]
	xor edx,edx
	mov word ptr [ebp+0x40],dx
	test eax,eax
	je Block163

 Block160:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block163

 Block161:
	lea eax,[ebp+0x40]
	push eax

 Block162:
	call dword ptr [ZImports::_VariantClear]

 Block163:
	lea ecx,[ebp+4]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block165

 Block164:
	push eax
	call _com_issue_error

 Block165:
	lea eax,[ebp+0x2C]
	mov bl,0x27
	push eax
	mov byte ptr [ebp-4],bl
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block167

 Block166:
	push eax
	call _com_issue_error

 Block167:
	lea edx,[ebp+4]
	push edx
	lea eax,[ebp+0x2C]
	push eax
	push 0
	mov ecx,edi
	mov byte ptr [ebp-4],0x28
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x2C],si
	jne Block170

 Block168:
	mov eax,dword ptr [ebp+0x34]
	xor ecx,ecx
	mov word ptr [ebp+0x2C],cx
	test eax,eax
	je Block171

 Block169:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block171

 Block170:
	lea edx,[ebp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block171:
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp+4],si
	jne Block174

 Block172:
	xor eax,eax
	mov word ptr [ebp+4],ax
	mov eax,dword ptr [ebp+0xC]
	test eax,eax
	je Block175

 Block173:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block175

 Block174:
	lea ecx,[ebp+4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block175:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x14],esp
	push 0
	mov dword ptr [eax],0
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [ebp+0x14],esp
	push edi
	call eax
	mov ecx,dword ptr [ebp]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [ebp-4],0xB
	call edx
	mov eax,dword ptr [ebp+0x18]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],1
	call edx
	mov eax,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block177

 Block176:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block177:
	mov eax,dword ptr [ebp+0x74]
	test eax,eax
	jmp Block183

 Block178:
	mov byte ptr [ebp-4],1
	cmp ebx,esi
	je Block180

 Block179:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block180:
	mov eax,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],0
	cmp eax,esi
	je Block182

 Block181:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block182:
	mov eax,dword ptr [ebp+0x74]
	cmp eax,esi

 Block183:
	mov dword ptr [ebp-4],0xFFFFFFFF
	je Block185

 Block184:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block185:
	lea esp,[ebp-0x94]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x54]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x58
	mov esp,ebp
	pop ebp
	ret 0x20
}
}
// CAnimationDisplayer::RegisterPrepareAnimation
_SUB_EXCEPTION_HANDLER(5B420)
__SUB_CLASS_THIS(0005B420, __thiscall, 18566,  CAnimationDisplayer, void, unsigned long, ZArray<_x_com_ptr<IWzGr2DLayer> >&, NakedParam<_x_com_ptr<IWzGr2DLayer>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5B420
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
	mov ebx,ecx
	xor edi,edi
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x2C],edi
	mov dword ptr [esp+0x18],edi
	call ZRef<CAnimationDisplayer::PREPAREINFO>::_Alloc
	mov esi,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esi],eax
	mov ebp,dword ptr [esi+0xC]
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x2C],1
	cmp ebp,eax
	je Block5

 Block1:
	mov dword ptr [esi+0xC],eax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,edi
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	cmp ebp,edi
	je Block5

 Block4:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block5:
	mov ebp,dword ptr [esp+0x38]
	mov eax,dword ptr [ebp]
	cmp eax,edi
	jne Block7

 Block6:
	xor eax,eax
	jmp Block8

 Block7:
	mov eax,dword ptr [eax-4]

 Block8:
	lea edx,[esp+0x3C]
	push edx
	lea edi,[esi+8]
	push eax
	mov ecx,edi
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::_Alloc
	mov ecx,edi
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	mov eax,dword ptr [ebp]
	mov dword ptr [edi],eax
	mov dword ptr [ebp],0
	mov dword ptr [esp+0x20],0
	lea ecx,[esp+0x1C]
	push ecx
	lea ebp,[ebx+4]
	push esi
	mov ecx,ebp
	mov byte ptr [esp+0x34],2
	call ZMap<unsigned long, ZRef<CAnimationDisplayer::PREPAREINFO>, unsigned long>::GetAt
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [esp+0x20]
	mov eax,dword ptr [edx+4]
	push eax
	lea ecx,[ebx+0x1C]
	call ZList<ZRef<CAnimationDisplayer::PREPAREINFO>>::RemoveAt

 Block10:
	lea ecx,[ebx+0x1C]
	call ZList<ZRef<CAnimationDisplayer::PREPAREINFO>>::AddTail_
	lea ecx,[esp+0x14]
	mov edi,eax
	push ecx
	mov ecx,edi
	call ZRef<CAnimationDisplayer::PREPAREINFO>::op_assign_copy
	lea edx,[esp+0x14]
	push edx
	push esi
	mov ecx,ebp
	mov dword ptr [esi+4],edi
	call ZMap<unsigned long, ZRef<CAnimationDisplayer::PREPAREINFO>, unsigned long>::Insert
	mov eax,dword ptr [esp+0x20]
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	mov byte ptr [esp+0x2C],1
	test eax,eax
	je Block14

 Block11:
	lea edi,[eax-0x10]
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
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x30],0
	call ebp
	test eax,eax
	jne Block17

 Block15:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block17

 Block16:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block17:
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block19

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block19:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 0xC
}
}
// CAnimationDisplayer::FOLLOWINFO::~FOLLOWINFO
_SUB_EXCEPTION_HANDLER(439A0)
__SUB_CLASS_THIS0(000439A0, __thiscall, 18685,  CAnimationDisplayer::FOLLOWINFO, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_439A0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x10],esi
	mov eax,dword ptr [esi+0x5C]
	mov dword ptr [esp+0x1C],3
	test eax,eax
	je Block5

 Block1:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block4

 Block3:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block4:
	mov dword ptr [esi+0x5C],0

 Block5:
	lea ecx,[esi+0xC]
	mov byte ptr [esp+0x1C],2
	call ZArray<_x_com_ptr<IWzVector2D>>::RemoveAll
	mov eax,dword ptr [esi+8]
	mov byte ptr [esp+0x1C],1
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov eax,dword ptr [esi+4]
	mov byte ptr [esp+0x1C],0
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	mov ecx,esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZArray<_x_com_ptr<IWzProperty>>::RemoveAll
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x10
	ret
}
}
// CAnimationDisplayer::RESERVEDINFO::RESERVEDINFO
_SUB_EXCEPTION_HANDLER(48F00)
__SUB_CLASS_THIS0(00048F00, __thiscall, 18896,  CAnimationDisplayer::RESERVEDINFO, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_48F00
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
	mov dword ptr [esi+4],edi
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+8],edi
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push offset ZRef<GW_ItemSlotBase>::_ctor_default
	push 0x3C
	push 8
	lea eax,[esi+0x3C]
	push eax
	mov byte ptr [esp+0x2C],1
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x21C],edi
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
// CAnimationDisplayer::SQUIBINFO::~SQUIBINFO
_SUB_EXCEPTION_HANDLER(42510)
__SUB_CLASS_THIS0(00042510, __thiscall, 18912,  CAnimationDisplayer::SQUIBINFO, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_42510
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
	mov eax,dword ptr [esi+4]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov esi,dword ptr [esi]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block4

 Block3:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// TAnimation<CAnimationDisplayer::MOTIONBLURINFO>::~TAnimation<CAnimationDisplayer::MOTIONBLURINFO>
__SUB_CLASS_THIS0(00041510, __thiscall, 19382,  TAnimation<CAnimationDisplayer::MOTIONBLURINFO>, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::MOTIONBLURINFO>::`vftable'
	jmp  ZList<CAnimationDisplayer::MOTIONBLURINFO>::RemoveAll
}
}
// TAnimation<CAnimationDisplayer::MOTIONBLURINFO>::Update
__SUB_CLASS_THIS(00048BC0, __thiscall, 19380,  TAnimation<CAnimationDisplayer::MOTIONBLURINFO>, void, long) {
__asm {

 Block0:
	push ecx
	push ebx
	mov ebx,ecx
	mov eax,dword ptr [ebx+0xC]
	mov dword ptr [esp+4],eax
	test eax,eax
	je Block6

 Block1:
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]

 Block2:
	mov esi,eax
	lea eax,[esp+0xC]
	push eax
	call ZList<CAnimationDisplayer::MOTIONBLURINFO>::GetNext
	add esp,4
	push edi
	mov ecx,eax
	call CAnimationDisplayer::MOTIONBLURINFO::Update
	test eax,eax
	je Block4

 Block3:
	push esi
	mov ecx,ebx
	call ZList<CAnimationDisplayer::MOTIONBLURINFO>::RemoveAt

 Block4:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	jne Block2

 Block5:
	pop edi
	pop esi

 Block6:
	pop ebx
	pop ecx
	ret 4
}
}
// TAnimation<CAnimationDisplayer::ABSORBITEM>::~TAnimation<CAnimationDisplayer::ABSORBITEM>
__SUB_CLASS_THIS0(00041490, __thiscall, 19230,  TAnimation<CAnimationDisplayer::ABSORBITEM>, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::ABSORBITEM>::`vftable'
	jmp  ZList<CAnimationDisplayer::ABSORBITEM>::RemoveAll
}
}
// _com_util__UIntAdd
__SUB(00038360, __cdecl, 146226,  HRESULT, uint32_t, uint32_t, uint32_t*) {
__asm {

 Block0:
	add eax,ecx
	cmp eax,ecx
	jae Block2

 Block1:
	or eax,0xFFFFFFFF
	ret

 Block2:
	mov ecx,dword ptr [esp+4]
	mov dword ptr [ecx],eax
	xor eax,eax
	ret
}
}
// CAnimationDisplayer::Effect_ViciousHammer
_SUB_EXCEPTION_HANDLER(57210)
__SUB_CLASS_THIS(00057210, __thiscall, 18604,  CAnimationDisplayer, void, int32_t, NakedParam<_x_com_ptr<IWzVector2D>>, NakedParam<_x_com_ptr<IWzGr2DLayer>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_57210
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x38]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x14],ecx
	mov dword ptr [esp+0x40],0
	mov dword ptr [esp+0x10],0
	mov esi,dword ptr [esp+0x54]
	mov byte ptr [esp+0x40],2
	mov eax,offset _S_UIUIWINDOWIMGVIC__3
	test esi,esi
	je Block2

 Block1:
	mov eax,offset _S_UIUIWINDOWIMGVIC__2

 Block2:
	push eax
	lea ecx,[esp+0x14]
	call ZXString16::AssignCStr
	push 0
	push 0xFF
	push 3
	push ecx
	mov ecx,dword ptr [esp+0x60]
	mov eax,esp
	mov dword ptr [esp+0x64],esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x60]
	test esi,esi
	jne Block29

 Block3:
	test eax,eax
	je Block5

 Block4:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block5:
	push 0x51
	push 0x5B
	push ecx
	mov ecx,dword ptr [esp+0x68]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x28],esp
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block7:
	mov ecx,dword ptr [esp+0x64]
	mov esi,dword ptr [esp+0x2C]
	push ecx
	lea edx,[esp+0x74]
	push esi
	push edx
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	sete cl
	mov byte ptr [esp+0x40],3
	test cl,cl
	je Block12

 Block8:
	mov byte ptr [esp+0x40],2
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov byte ptr [esp+0x40],1
	test esi,esi
	je Block56

 Block11:
	add esi,0xFFFFFFF4
	push esi
	jmp Block55

 Block12:
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
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0x44],4
	call esi
	lea eax,[esp+0x18]
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
	mov ecx,dword ptr [esp+0x54]
	mov byte ptr [esp+0x40],5
	test ecx,ecx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x1C]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x40],4
	cmp word ptr [esp+0x18],si
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[esp+0x18]
	push edx
	call edi

 Block22:
	mov byte ptr [esp+0x40],3
	cmp word ptr [esp+0x28],si
	jne Block25

 Block23:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea ecx,[esp+0x28]
	push ecx
	call edi

 Block26:
	mov edx,dword ptr [esp+0x54]
	push 0xA8C
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [esp+0x50],esp
	test eax,eax
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block28:
	mov ecx,dword ptr [esp+0x1C]
	call CAnimationDisplayer::RegisterRepeatAnimation
	mov eax,dword ptr [esp+0x54]
	jmp Block51

 Block29:
	test eax,eax
	je Block31

 Block30:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block31:
	push 0x69
	push 0x59
	push ecx
	mov ecx,dword ptr [esp+0x68]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x70],esp
	test eax,eax
	je Block33

 Block32:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block33:
	mov ecx,dword ptr [esp+0x64]
	mov esi,dword ptr [esp+0x2C]
	push ecx
	lea edx,[esp+0x2C]
	push esi
	push edx
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	sete cl
	mov byte ptr [esp+0x40],6
	test cl,cl
	jne Block8

 Block34:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x18]
	push eax
	call esi
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x44],7
	call esi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	mov ecx,dword ptr [esp+0xC]
	mov byte ptr [esp+0x40],8
	test ecx,ecx
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x2C]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x40],7
	cmp word ptr [esp+0x28],si
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
	call edi

 Block44:
	mov byte ptr [esp+0x40],6
	cmp word ptr [esp+0x18],si
	jne Block47

 Block45:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea ecx,[esp+0x18]
	push ecx
	call edi

 Block48:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [eax],0
	mov edx,dword ptr [esp+0x10]
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x54],esp
	test eax,eax
	je Block50

 Block49:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block50:
	mov ecx,dword ptr [esp+0x20]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov eax,dword ptr [esp+0xC]

 Block51:
	mov byte ptr [esp+0x40],2
	test eax,eax
	je Block53

 Block52:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block53:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x40],1
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFF4
	push eax

 Block55:
	call ZXString16::_Release
	add esp,4

 Block56:
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x40],0
	test eax,eax
	je Block58

 Block57:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block58:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test eax,eax
	je Block60

 Block59:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block60:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x38
	ret 0x10
}
}
// TAnimation<CAnimationDisplayer::FADEINFO>::~TAnimation<CAnimationDisplayer::FADEINFO>
__SUB_CLASS_THIS0(00041520, __thiscall, 19401,  TAnimation<CAnimationDisplayer::FADEINFO>, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::FADEINFO>::`vftable'
	jmp  ZList<CAnimationDisplayer::FADEINFO>::RemoveAll
}
}
// CAnimationDisplayer::NonFieldUpdate
_SUB_EXCEPTION_HANDLER(5B6C0)
__SUB_CLASS_THIS(0005B6C0, __thiscall, 18559,  CAnimationDisplayer, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5B6C0
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
	mov edi,dword ptr [esp+0x2C]
	push edi
	lea ecx,[esi+0x30]
	call CAnimationDisplayer::TAnimation<CAnimationDisplayer::ONETIMEINFO>::Update
	push edi
	lea ecx,[esi+0x44]
	call CAnimationDisplayer::TAnimation<CAnimationDisplayer::REPEATINFO>::Update
	push edi
	lea ecx,[esi+0x178]
	call BulletContainer<CBullet>::CallUpdate_T
	push edi
	lea ecx,[esi+0x58]
	call CAnimationDisplayer::TAnimation<CAnimationDisplayer::SQUIBINFO>::Update
	push edi
	lea ecx,[esi+0x6C]
	call CAnimationDisplayer::TAnimation<CAnimationDisplayer::RESERVEDINFO>::Update
	push edi
	lea ecx,[esi+0x80]
	call CAnimationDisplayer::TAnimation<CAnimationDisplayer::ABSORBITEM>::Update
	push edi
	lea ecx,[esi+0x94]
	call CAnimationDisplayer::TAnimation<CAnimationDisplayer::FALLINGINFO>::Update
	push edi
	lea ecx,[esi+0xA8]
	call CAnimationDisplayer::TAnimation<CAnimationDisplayer::EXPLOSIONINFO>::Update
	push edi
	lea ecx,[esi+0x190]
	call CAnimationDisplayer::TAnimation<CAnimationDisplayer::FOOTHOLDINFO>::Update
	push edi
	lea ecx,[esi+0xBC]
	call CAnimationDisplayer::TAnimation<CAnimationDisplayer::CHAINLIGHTNINGINFO>::Update
	push edi
	lea ecx,[esi+0xD0]
	call CAnimationDisplayer::TAnimation<CAnimationDisplayer::HOOKING_CHAIN_INFO>::Update
	push edi
	lea ecx,[esi+0xE4]
	call CAnimationDisplayer::TAnimation<CAnimationDisplayer::FIRECRACKER>::Update
	push edi
	lea ecx,[esi+0xF8]
	call CAnimationDisplayer::TAnimation<CAnimationDisplayer::NEWYEARINFO>::Update
	push edi
	lea ecx,[esi+0x10C]
	call CAnimationDisplayer::TAnimation<CAnimationDisplayer::FOLLOWINFO>::Update
	push edi
	lea ecx,[esi+0x134]
	call CAnimationDisplayer::TAnimation<CAnimationDisplayer::FADEINFO>::Update
	push edi
	lea ecx,[esi+0x160]
	call CAnimationDisplayer::TAnimation<CAnimationDisplayer::USERSTATEINFO>::Update
	lea ebp,[esi+0x148]
	mov ecx,ebp
	call ZMap<unsigned long, ZRef<CAnimationDisplayer::TAnimation<CAnimationDisplayer::CHAINLIGHTNINGINFO>>, unsigned long>::GetHeadPosition
	xor ebx,ebx
	mov dword ptr [esp+0x2C],eax
	cmp eax,ebx
	je Block9

 Block1:
	jmp Block3

 Block3:
	mov dword ptr [esp+0x18],ebx
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,ebp
	mov dword ptr [esp+0x2C],ebx
	call ZMap<unsigned long, ZRef<CAnimationDisplayer::TAnimation<CAnimationDisplayer::CHAINLIGHTNINGINFO>>, unsigned long>::GetNext
	mov esi,dword ptr [esp+0x18]
	push edi
	mov ecx,esi
	call CAnimationDisplayer::TAnimation<CAnimationDisplayer::CHAINLIGHTNINGINFO>::Update
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp esi,ebx
	je Block8

 Block4:
	add esi,0xFFFFFFF0
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block7

 Block5:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block7

 Block6:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block7:
	mov dword ptr [esp+0x18],0
	xor ebx,ebx

 Block8:
	cmp dword ptr [esp+0x2C],ebx
	jne Block3

 Block9:
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
// TAnimation<CAnimationDisplayer::RESERVEDINFO>::~TAnimation<CAnimationDisplayer::RESERVEDINFO>
__SUB_CLASS_THIS0(00041480, __thiscall, 19211,  TAnimation<CAnimationDisplayer::RESERVEDINFO>, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::RESERVEDINFO>::`vftable'
	jmp  ZList<CAnimationDisplayer::RESERVEDINFO>::RemoveAll
}
}
// CAnimationDisplayer::MobSwallowedBullet::Update
_SUB_EXCEPTION_HANDLER(3C430)
__SUB_CLASS_THIS(0003C430, __thiscall, 19012,  CAnimationDisplayer::MobSwallowedBullet, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C430
	mov eax,dword ptr fs:[0]
	push eax
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov ecx,dword ptr [edi+0x18]
	mov eax,dword ptr [edi+0x50]
	mov ebx,dword ptr [esp+0x20]
	cmp ecx,eax
	je Block7

 Block1:
	mov ecx,ebx
	sub ecx,eax
	mov dword ptr [esp+0x20],ecx
	fild dword ptr [esp+0x20]
	fdiv qword ptr [__real_4008000000000000]
	fiadd dword ptr [edi+0x54]
	call __ftol2_sse
	lea edx,[esp+0x20]
	push edx
	mov ecx,edi
	mov dword ptr [edi+0x54],eax
	call CBullet::GetOrigin
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x18],0
	test esi,esi
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	fild dword ptr [edi+0x54]
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0x80]
	sub esp,8
	fstp qword ptr [esp]
	push esi
	call ecx
	test eax,eax
	jge Block5

 Block4:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block5:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block7:
	mov dword ptr [edi+0x50],ebx
	xor eax,eax
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 4
}
}
// CAnimationDisplayer::LoadSingleLayer
_SUB_EXCEPTION_HANDLER(4C0C0)
__SUB(0004C0C0, __cdecl, 18513,  _x_com_ptr<IWzGr2DLayer>, const wchar_t*, int32_t, NakedParam<_x_com_ptr<IWzVector2D>>, long, long, NakedParam<_x_com_ptr<IWzGr2DLayer>>, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C0C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x4C]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x14],0
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push eax
	mov dword ptr [esp+0x58],1
	call esi
	lea ecx,[esp+0x2C]
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
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x58],2
	call esi
	lea eax,[esp+0x1C]
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
	mov eax,dword ptr [esp+0x60]
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x20]
	push edx
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	mov bl,3
	push eax
	mov byte ptr [esp+0x64],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x60],4
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x48]
	push ecx
	mov byte ptr [esp+0x64],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	push eax
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0x5C],5
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [esp+0x58],6
	mov dword ptr [esp+0x14],0
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
	lea ecx,[esp+0x14]
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
	mov eax,dword ptr [esp+0x14]
	mov ebx,8
	mov byte ptr [esp+0x54],bl
	test eax,eax
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x54],9
	cmp word ptr [esp+0x3C],bx
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x3C]
	push ecx
	call esi

 Block17:
	mov byte ptr [esp+0x54],0xA
	cmp word ptr [esp+0x1C],bx
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x1C]
	push eax
	call esi

 Block21:
	mov byte ptr [esp+0x54],0xB
	cmp word ptr [esp+0x2C],bx
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea edx,[esp+0x2C]
	push edx
	call esi

 Block25:
	mov eax,dword ptr [esp+0x80]
	mov ecx,dword ptr [esp+0x7C]
	mov edx,dword ptr [esp+0x78]
	push eax
	push ecx
	push edx
	push ecx
	mov ecx,dword ptr [esp+0x84]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x84]
	mov dword ptr [esp+0x28],esp
	test eax,eax
	je Block27

 Block26:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block27:
	mov ecx,dword ptr [esp+0x80]
	mov edx,dword ptr [esp+0x7C]
	push ecx
	push edx
	push ecx
	mov ecx,dword ptr [esp+0x84]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x84]
	mov dword ptr [esp+0x34],esp
	test eax,eax
	je Block29

 Block28:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block29:
	mov ecx,dword ptr [esp+0x80]
	mov esi,dword ptr [esp+0x2C]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block31

 Block30:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block31:
	mov edi,dword ptr [esp+0x80]
	push edi
	call CAnimationDisplayer::LoadSingleLayer_0
	add esp,0x28
	mov byte ptr [esp+0x54],1
	test esi,esi
	je Block33

 Block32:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block33:
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0x54],0
	test eax,eax
	je Block35

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block35:
	mov eax,dword ptr [esp+0x74]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	test eax,eax
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block37:
	mov eax,edi
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x48
	ret
}
}
// CAnimationDisplayer::Effect_BasicFloat
_SUB_EXCEPTION_HANDLER(46530)
__SUB_CLASS_THIS(00046530, __thiscall, 18613,  CAnimationDisplayer, void, long, long, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_46530
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x90
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xA4]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x80],ecx
	lea eax,[esp+0x84]
	xor ebx,ebx
	push eax
	mov dword ptr [esp+0xB0],ebx
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x84]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	mov edx,3
	mov word ptr [esp+0x94],dx
	mov dword ptr [esp+0x9C],ebx
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xAC],2
	cmp ecx,ebx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea eax,[esp+0x84]
	push eax
	lea edx,[esp+0x98]
	push edx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	lea eax,[esp+0x98]
	push eax
	call IWzGr2D::CreateLayer
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0xAC],4
	cmp word ptr [esp+0x94],si
	jne Block7

 Block5:
	mov eax,dword ptr [esp+0x9C]
	xor ecx,ecx
	mov word ptr [esp+0x94],cx
	cmp eax,ebx
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea edx,[esp+0x94]
	push edx
	call edi

 Block8:
	mov byte ptr [esp+0xAC],5
	cmp word ptr [esp+0x84],si
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [esp+0x84],ax
	mov eax,dword ptr [esp+0x8C]
	cmp eax,ebx
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea ecx,[esp+0x84]
	push ecx
	call edi

 Block12:
	mov esi,dword ptr [esp+0x7C]
	cmp esi,ebx
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xB4]
	push 0xC00614A4
	push esi
	call eax
	cmp eax,ebx
	jge Block16

 Block15:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block16:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push esi
	call edx
	cmp eax,ebx
	jge Block18

 Block17:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block18:
	mov eax,dword ptr [esp+0xBC]
	cmp eax,ebx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x38]
	push edx
	mov edi,eax
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [esp+0x40],ebx
	call eax
	cmp eax,ebx
	jge Block22

 Block21:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block22:
	mov eax,dword ptr [esp+0xBC]
	cmp eax,ebx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x34]
	push edx
	mov edi,eax
	push eax
	mov eax,dword ptr [ecx+0x48]
	mov dword ptr [esp+0x3C],ebx
	call eax
	cmp eax,ebx
	jge Block26

 Block25:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block26:
	mov eax,dword ptr [esp+0x38]
	mov ebp,dword ptr [esp+0xB4]
	cdq
	sub eax,edx
	sar eax,1
	sub ebp,eax
	mov eax,dword ptr [esp+0xB8]
	sub eax,dword ptr [esp+0x34]
	lea ecx,[esp+0x24]
	push ecx
	mov dword ptr [esp+0x3C],eax
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	lea eax,[esp+0x14]
	mov bl,6
	push eax
	mov byte ptr [esp+0xB0],bl
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	mov edx,3
	mov edi,0xFF
	mov word ptr [esp+0x4C],dx
	mov dword ptr [esp+0x54],edi
	mov eax,edx
	mov word ptr [esp+0x3C],ax
	mov dword ptr [esp+0x44],edi
	mov ecx,edx
	mov word ptr [esp+0x5C],cx
	mov dword ptr [esp+0x64],0x190
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x54]
	push ecx
	mov ecx,dword ptr [esp+0xC8]
	lea edx,[esp+0x48]
	push edx
	lea eax,[esp+0x6C]
	push eax
	push ecx
	lea edx,[esp+0x84]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xC8],0xA
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x6C],8
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[esp+0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	cmp word ptr [esp+0x5C],8
	mov byte ptr [esp+0xAC],9
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea eax,[esp+0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block38:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xAC],8
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0xAC],7
	jne Block45

 Block43:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block46:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xAC],bl
	jne Block49

 Block47:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block50:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0xAC],5
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	lea eax,[esp+0x5C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x5C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	lea edx,[esp+0x3C]
	mov bl,0xB
	push edx
	mov byte ptr [esp+0xB0],bl
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block58

 Block57:
	push eax
	call _com_issue_error

 Block58:
	mov ecx,3
	mov word ptr [esp+0x4C],cx
	mov dword ptr [esp+0x54],0
	mov edx,ecx
	mov word ptr [esp+0x14],dx
	mov dword ptr [esp+0x1C],edi
	mov eax,ecx
	mov word ptr [esp+0x24],ax
	mov dword ptr [esp+0x2C],0x258
	lea ecx,[esp+0x5C]
	push ecx
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x54]
	push eax
	mov eax,dword ptr [esp+0xC8]
	lea ecx,[esp+0x20]
	push ecx
	lea edx,[esp+0x34]
	push edx
	push eax
	lea ecx,[esp+0x84]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0xC8],0xF
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x6C],8
	jne Block61

 Block59:
	mov eax,dword ptr [esp+0x74]
	xor edx,edx
	mov word ptr [esp+0x6C],dx
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea eax,[esp+0x6C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block62:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0xAC],0xE
	jne Block69

 Block63:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block65

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block65:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block66:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xAC],0xD
	jne Block70

 Block67:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block71

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block69:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x24]
	push edx
	call edi
	jmp Block66

 Block70:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block71:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0xAC],0xC
	jne Block74

 Block72:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea eax,[esp+0x4C]
	push eax
	call edi

 Block75:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xAC],bl
	jne Block78

 Block76:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea edx,[esp+0x3C]
	push edx
	call edi

 Block79:
	cmp word ptr [esp+0x5C],8
	mov byte ptr [esp+0xAC],5
	jne Block82

 Block80:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea ecx,[esp+0x5C]
	push ecx
	call edi

 Block83:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x14]
	push edx
	call edi
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block85

 Block84:
	push eax
	call _com_issue_error

 Block85:
	lea ecx,[esp+0x24]
	mov bl,0x10
	push ecx
	mov byte ptr [esp+0xB0],bl
	call edi
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block87

 Block86:
	push eax
	call _com_issue_error

 Block87:
	mov edx,dword ptr [esp+0x38]
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	push edx
	push ebp
	mov ecx,esi
	mov byte ptr [esp+0xBC],0x11
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0xAC],bl
	jne Block90

 Block88:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block91:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xAC],5
	jne Block94

 Block92:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block95:
	lea ecx,[esp+0x14]
	push ecx
	call edi
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block97

 Block96:
	push eax
	call _com_issue_error

 Block97:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x58]
	lea ecx,[esp+0x34]
	push ecx
	mov bl,0x12
	push esi
	mov byte ptr [esp+0xB4],bl
	mov dword ptr [esp+0x3C],0
	call edx
	test eax,eax
	jge Block99

 Block98:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block99:
	mov eax,dword ptr [esp+0x34]
	add eax,0x3E8
	mov ecx,3
	mov word ptr [esp+0x24],cx
	mov dword ptr [esp+0x2C],eax
	mov ecx,dword ptr [esp+0x38]
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x28]
	push eax
	add ecx,0xFFFFFFE2
	push ecx
	push ebp
	mov ecx,esi
	mov byte ptr [esp+0xBC],0x13
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0xAC],bl
	jne Block102

 Block100:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block103:
	mov ebp,8
	mov byte ptr [esp+0xAC],5
	cmp word ptr [esp+0x14],bp
	jne Block106

 Block104:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block107:
	lea eax,[esp+0x14]
	push eax
	call edi
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block109

 Block108:
	push eax
	call _com_issue_error

 Block109:
	lea edx,[esp+0x24]
	mov bl,0x14
	push edx
	mov byte ptr [esp+0xB0],bl
	call edi
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block111

 Block110:
	push eax
	call _com_issue_error

 Block111:
	lea ecx,[esp+0x14]
	push ecx
	lea edx,[esp+0x28]
	push edx
	push 0
	mov ecx,esi
	mov byte ptr [esp+0xB8],0x15
	call IWzGr2DLayer::Animate
	mov byte ptr [esp+0xAC],bl
	cmp word ptr [esp+0x24],bp
	jne Block114

 Block112:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block115:
	mov byte ptr [esp+0xAC],5
	cmp word ptr [esp+0x14],bp
	jne Block118

 Block116:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block119:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push 0
	push ecx
	mov dword ptr [eax],0
	mov eax,esp
	mov dword ptr [eax],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x40],esp
	push esi
	call edx
	mov ecx,dword ptr [esp+0x8C]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0xB0],0
	call ecx
	mov eax,dword ptr [esp+0xBC]
	mov dword ptr [esp+0xAC],0xFFFFFFFF
	test eax,eax
	je Block121

 Block120:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block121:
	mov ecx,dword ptr [esp+0xA4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x9C
	ret 0xC
}
}
// TAnimation<CAnimationDisplayer::FOLLOWINFO>::Update
__SUB_CLASS_THIS(0004ECF0, __thiscall, 19361,  TAnimation<CAnimationDisplayer::FOLLOWINFO>, void, long) {
__asm {

 Block0:
	push ecx
	push ebx
	mov ebx,ecx
	mov eax,dword ptr [ebx+0xC]
	mov dword ptr [esp+4],eax
	test eax,eax
	je Block6

 Block1:
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]

 Block2:
	mov esi,eax
	lea eax,[esp+0xC]
	push eax
	call ZList<CAnimationDisplayer::FOLLOWINFO>::GetNext
	add esp,4
	push edi
	mov ecx,eax
	call CAnimationDisplayer::FOLLOWINFO::Update
	test eax,eax
	je Block4

 Block3:
	push esi
	mov ecx,ebx
	call ZList<CAnimationDisplayer::FOLLOWINFO>::RemoveAt

 Block4:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	jne Block2

 Block5:
	pop edi
	pop esi

 Block6:
	pop ebx
	pop ecx
	ret 4
}
}
// get_string
__SUB(00038C80, __cdecl, 146233,  const wchar_t*, Ztl_variant_t&, const wchar_t*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp word ptr [eax],8
	jne Block2

 Block1:
	mov eax,dword ptr [eax+8]
	ret

 Block2:
	mov eax,dword ptr [esp+8]
	ret
}
}
// CAnimationDisplayer::PREPAREINFO::Update
__SUB_CLASS_THIS(0003C5D0, __thiscall, 18933,  CAnimationDisplayer::PREPAREINFO, int32_t, long) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	push esi
	push edi
	mov ebx,ecx
	xor ebp,ebp
	lea esp,[esp]

 Block1:
	mov eax,dword ptr [ebx+8]
	test eax,eax
	je Block21

 Block2:
	cmp ebp,dword ptr [eax-4]
	jae Block21

 Block3:
	lea edi,[ebp*4]
	add eax,edi
	cmp dword ptr [eax],0
	je Block10

 Block4:
	mov esi,dword ptr [eax]
	test esi,esi
	je Block13

 Block5:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x114]
	lea edx,[esp+0x10]
	push edx
	push esi
	mov dword ptr [esp+0x18],0
	call eax
	test eax,eax
	jge Block7

 Block6:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block7:
	cmp dword ptr [esp+0x10],0
	jne Block11

 Block8:
	mov eax,dword ptr [ebx+8]
	mov ecx,dword ptr [eax+edi]
	add eax,edi
	test ecx,ecx
	je Block10

 Block9:
	mov dword ptr [eax],0
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax

 Block10:
	inc ebp
	jmp Block1

 Block11:
	cmp dword ptr [ebx+0xC],0
	je Block20

 Block12:
	mov esi,dword ptr [ebx+0xC]
	test esi,esi
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xD4]
	lea edx,[esp+0x10]
	push edx
	push esi
	mov dword ptr [esp+0x18],0
	call eax
	test eax,eax
	jge Block16

 Block15:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block16:
	mov ecx,dword ptr [ebx+8]
	mov esi,dword ptr [ecx+ebp*4]
	lea eax,[ecx+ebp*4]
	test esi,esi
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov eax,dword ptr [esp+0x10]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xD8]
	push eax
	push esi
	call ecx
	test eax,eax
	jge Block20

 Block19:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block20:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	pop ecx
	ret 4

 Block21:
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	pop ecx
	ret 4
}
}
// CAnimationDisplayer::CalcTotalDelay
_SUB_EXCEPTION_HANDLER(474B0)
__SUB(000474B0, __cdecl, 18522,  unsigned long, NakedParam<_x_com_ptr<IWzGr2DLayer>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_474B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x4C]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x5C]
	xor ebx,ebx
	cmp eax,ebx
	sete cl
	mov dword ptr [esp+0x54],ebx
	cmp cl,bl
	jne Block43

 Block1:
	cmp eax,ebx
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x18]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x1C]
	mov dword ptr [esp+0x20],ebx
	call eax
	cmp eax,ebx
	jge Block5

 Block4:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block5:
	mov eax,dword ptr [esp+0x5C]
	cmp dword ptr [esp+0x18],ebx
	je Block43

 Block6:
	mov dword ptr [esp+0x18],ebx
	cmp eax,ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x14]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call eax
	cmp eax,ebx
	jge Block10

 Block9:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	xor esi,esi
	mov dword ptr [esp+0x1C],esi
	xor ebp,ebp
	cmp dword ptr [esp+0x14],ebx
	jbe Block35

 Block11:
	jmp Block13

 Block13:
	mov ecx,3
	mov word ptr [esp+0x2C],cx
	mov dword ptr [esp+0x34],ebp
	mov ecx,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x54],2
	cmp ecx,ebx
	je Block2

 Block14:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x24]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov eax,dword ptr [eax]
	cmp esi,eax
	je Block19

 Block15:
	mov edi,esi
	mov esi,eax
	mov dword ptr [esp+0x1C],esi
	cmp eax,ebx
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block17:
	cmp edi,ebx
	je Block19

 Block18:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block19:
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebx
	je Block21

 Block20:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block21:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x54],1
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebx
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	cmp esi,ebx
	sete al
	cmp al,bl
	jne Block40

 Block26:
	push 0x78
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0x1AA9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x5C],3
	cmp esi,ebx
	je Block2

 Block27:
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x5C],4
	cmp ecx,ebx
	je Block2

 Block28:
	lea edx,[esp+0x44]
	push edx
	mov byte ptr [esp+0x60],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x5C],6
	call get_int32
	add esp,8
	cmp word ptr [esp+0x3C],8
	mov edi,eax
	mov byte ptr [esp+0x54],5
	jne Block31

 Block29:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebx
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x54],1
	cmp eax,ebx
	je Block34

 Block33:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block34:
	add dword ptr [esp+0x18],edi
	inc ebp
	cmp ebp,dword ptr [esp+0x14]
	jb Block13

 Block35:
	mov byte ptr [esp+0x54],bl
	cmp esi,ebx
	je Block37

 Block36:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block37:
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp eax,ebx
	je Block39

 Block38:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block39:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret

 Block40:
	mov byte ptr [esp+0x54],bl
	cmp esi,ebx
	je Block42

 Block41:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block42:
	mov eax,dword ptr [esp+0x5C]

 Block43:
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp eax,ebx
	je Block45

 Block44:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block45:
	xor eax,eax
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret
}
}
// CAnimationDisplayer::Effect_SkillBookUsed
_SUB_EXCEPTION_HANDLER(581B0)
__SUB_CLASS_THIS(000581B0, __thiscall, 18610,  CAnimationDisplayer, void, int32_t, NakedParam<_x_com_ptr<IWzVector2D>>, NakedParam<_x_com_ptr<IWzGr2DLayer>>, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_581B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x6C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x50],ecx
	xor eax,eax
	mov dword ptr [ebp-0x14],eax
	mov dword ptr [ebp-4],eax
	mov dword ptr [ebp-0x24],eax
	mov dword ptr [ebp-0x28],eax
	mov dword ptr [ebp-0x2C],eax
	mov esi,dword ptr [ebp+0x14]
	lea edi,[eax+4]
	mov byte ptr [ebp-4],4
	cmp esi,eax
	je Block2

 Block1:
	lea eax,[ebp-0x20]
	push 0xFF1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [ebp-4],5
	lea ebx,[edi-3]
	jmp Block3

 Block2:
	lea ecx,[ebp-0x18]
	push 0xFF3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [ebp-4],6
	mov ebx,2

 Block3:
	push eax
	lea ecx,[ebp-0x28]
	mov dword ptr [ebp-0x14],ebx
	call ZXString16::op_assign
	mov dword ptr [ebp-4],5
	test bl,2
	je Block6

 Block4:
	mov eax,dword ptr [ebp-0x18]
	and ebx,0xFFFFFFFD
	mov dword ptr [ebp-0x14],ebx
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	mov dword ptr [ebp-4],edi
	test bl,1
	je Block9

 Block7:
	mov eax,dword ptr [ebp-0x20]
	and ebx,0xFFFFFFFE
	mov dword ptr [ebp-0x14],ebx
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block9:
	test esi,esi
	je Block11

 Block10:
	lea edx,[ebp-0x18]
	push 0xFF2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [ebp-4],7
	or ebx,edi
	jmp Block12

 Block11:
	lea eax,[ebp-0x20]
	push 0xFF4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [ebp-4],8
	or ebx,8

 Block12:
	push eax
	lea ecx,[ebp-0x2C]
	mov dword ptr [ebp-0x14],ebx
	call ZXString16::op_assign
	mov dword ptr [ebp-4],7
	test bl,8
	je Block15

 Block13:
	mov eax,dword ptr [ebp-0x20]
	and ebx,0xFFFFFFF7
	mov dword ptr [ebp-0x14],ebx
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block15:
	mov dword ptr [ebp-4],edi
	test bl,4
	je Block18

 Block16:
	mov eax,dword ptr [ebp-0x18]
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block18:
	mov dword ptr [ebp-0x18],0xFFFFFFFF

 Block19:
	mov esi,dword ptr [ebp-0x18]
	test esi,esi
	jl Block21

 Block20:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push esi
	call __itow
	add esp,0xC
	mov esi,eax
	jmp Block22

 Block21:
	mov esi,offset _S___3

 Block22:
	lea ecx,[ebp-0x20]
	push 0x3DA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [ebp-0x28]
	mov eax,dword ptr [eax]
	push esi
	push edx
	push eax
	lea eax,[ebp-0x24]
	push eax
	mov byte ptr [ebp-4],9
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x20]
	add esp,0x10
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block24:
	push 0
	push 0xFF
	push 3
	push ecx
	mov ecx,dword ptr [ebp+0x10]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x10]
	mov dword ptr [ebp-0x1C],esp
	test eax,eax
	je Block26

 Block25:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block26:
	push 0
	push 0
	push ecx
	mov ecx,dword ptr [ebp+0xC]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [ebp-0x1C],esp
	test eax,eax
	je Block28

 Block27:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block28:
	mov ecx,dword ptr [ebp+8]
	mov edi,dword ptr [ebp-0x24]
	push ecx
	lea edx,[ebp-0x14]
	push edi
	push edx
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	mov ecx,dword ptr [ebp-0x14]
	test ecx,ecx
	sete al
	mov byte ptr [ebp-4],0xA
	test al,al
	jne Block78

 Block29:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x3C]
	push eax
	call esi
	lea ecx,[ebp-0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block80

 Block30:
	lea edx,[ebp-0x4C]
	push edx
	mov byte ptr [ebp-4],0xB
	call esi
	lea eax,[ebp-0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block80

 Block31:
	mov ecx,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0xC
	test ecx,ecx
	je Block81

 Block32:
	mov edi,dword ptr [ebp-0x3C]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp-0x38]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp-0x34]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [ebp-0x30]
	mov dword ptr [eax+0xC],edi
	mov edi,dword ptr [ebp-0x4C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp-0x48]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp-0x44]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [ebp-0x40]
	push 0
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [edx+0x110]
	push ecx
	mov esi,ecx
	call eax
	test eax,eax
	jge Block34

 Block33:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block34:
	mov esi,8
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp-0x4C],si
	jne Block37

 Block35:
	mov eax,dword ptr [ebp-0x44]
	xor ecx,ecx
	mov word ptr [ebp-0x4C],cx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea edx,[ebp-0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x3C],si
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x1C],esp
	mov dword ptr [eax],0
	mov edx,dword ptr [ebp-0x14]
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-0x1C],esp
	test eax,eax
	je Block44

 Block43:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block44:
	mov ebx,dword ptr [ebp-0x50]
	mov ecx,ebx
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov esi,dword ptr [ebp-0x18]
	test esi,esi
	jl Block46

 Block45:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push esi
	call __itow
	add esp,0xC
	mov esi,eax
	jmp Block47

 Block46:
	mov esi,offset _S___3

 Block47:
	lea eax,[ebp-0x54]
	push 0x3DA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebp-0x2C]
	mov eax,dword ptr [eax]
	push esi
	push ecx
	push eax
	lea edx,[ebp-0x24]
	push edx
	mov byte ptr [ebp-4],0xD
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x54]
	add esp,0x10
	mov byte ptr [ebp-4],0xA
	test eax,eax
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block49:
	push 0
	push 0xFF
	push 0xFFFFFFFF
	push ecx
	mov ecx,dword ptr [ebp+0x10]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x10]
	mov dword ptr [ebp-0x1C],esp
	test eax,eax
	je Block51

 Block50:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block51:
	push 0
	push 0
	push ecx
	mov ecx,dword ptr [ebp+0xC]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [ebp-0x1C],esp
	test eax,eax
	je Block53

 Block52:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block53:
	mov ecx,dword ptr [ebp+8]
	mov edi,dword ptr [ebp-0x24]
	push ecx
	lea edx,[ebp-0x58]
	push edi
	push edx
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [ebp-0x14]
	add esp,0x28
	cmp ecx,eax
	je Block58

 Block54:
	mov esi,ecx
	mov ecx,eax
	mov dword ptr [ebp-0x14],ecx
	test eax,eax
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx
	mov ecx,dword ptr [ebp-0x14]

 Block56:
	test esi,esi
	je Block58

 Block57:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx
	mov ecx,dword ptr [ebp-0x14]

 Block58:
	mov eax,dword ptr [ebp-0x58]
	test eax,eax
	je Block60

 Block59:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	mov ecx,dword ptr [ebp-0x14]

 Block60:
	test ecx,ecx
	sete al
	test al,al
	jne Block82

 Block61:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x78]
	push ecx
	call esi
	lea edx,[ebp-0x78]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block80

 Block62:
	lea eax,[ebp-0x68]
	push eax
	mov byte ptr [ebp-4],0xE
	call esi
	lea ecx,[ebp-0x68]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block80

 Block63:
	mov ecx,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0xF
	test ecx,ecx
	je Block81

 Block64:
	lea edx,[ebp-0x78]
	push edx
	lea eax,[ebp-0x68]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0x68],si
	jne Block67

 Block65:
	mov eax,dword ptr [ebp-0x60]
	xor ecx,ecx
	mov word ptr [ebp-0x68],cx
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea edx,[ebp-0x68]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block68:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x78],si
	jne Block71

 Block69:
	xor eax,eax
	mov word ptr [ebp-0x78],ax
	mov eax,dword ptr [ebp-0x70]
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea ecx,[ebp-0x78]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block72:
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x1C],esp
	mov dword ptr [eax],0
	mov edx,dword ptr [ebp-0x14]
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-0x1C],esp
	test eax,eax
	je Block74

 Block73:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block74:
	mov ecx,ebx
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block76

 Block75:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block76:
	mov eax,dword ptr [ebp-0x18]
	inc eax
	mov dword ptr [ebp-0x18],eax
	test eax,eax
	jle Block19

 Block77:
	jmp Block84

 Block78:
	mov byte ptr [ebp-4],4
	test ecx,ecx
	je Block84

 Block79:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx
	jmp Block84

 Block80:
	push eax
	call _com_issue_error

 Block81:
	push 0x80004003
	call _com_issue_error

 Block82:
	mov byte ptr [ebp-4],4
	test ecx,ecx
	je Block84

 Block83:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax

 Block84:
	mov eax,dword ptr [ebp-0x2C]
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block86

 Block85:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block86:
	mov eax,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block88

 Block87:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block88:
	mov byte ptr [ebp-4],1
	test edi,edi
	je Block90

 Block89:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block90:
	mov eax,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block92

 Block91:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block92:
	mov eax,dword ptr [ebp+0x10]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block94

 Block93:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block94:
	lea esp,[ebp-0x88]
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
	ret 0x10
}
}
// CAnimationDisplayer::RegisterOneTimeAnimation
_SUB_EXCEPTION_HANDLER(44410)
__SUB_CLASS_THIS(00044410, __thiscall, 18532,  CAnimationDisplayer, void, NakedParam<_x_com_ptr<IWzGr2DLayer>>, long, NakedParam<_x_com_ptr<IWzGr2DLayer>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_44410
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
	add ecx,0x30
	mov dword ptr [esp+0x3C],1
	call ZList<CAnimationDisplayer::ONETIMEINFO>::AddTail_
	mov esi,eax
	mov edi,dword ptr [esi]
	mov eax,dword ptr [esp+0x44]
	cmp edi,eax
	je Block5

 Block1:
	mov dword ptr [esi],eax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	test edi,edi
	je Block5

 Block4:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block5:
	xor ebx,ebx
	mov dword ptr [esi+8],ebx
	mov dword ptr [esi+0xC],ebx
	mov edi,dword ptr [esi+4]
	mov eax,dword ptr [esp+0x4C]
	cmp edi,eax
	je Block10

 Block6:
	mov dword ptr [esi+4],eax
	mov eax,dword ptr [esp+0x4C]
	cmp eax,ebx
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax
	mov eax,dword ptr [esp+0x4C]

 Block8:
	cmp edi,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx
	mov eax,dword ptr [esp+0x4C]

 Block10:
	mov ebp,dword ptr [esp+0x48]
	cmp ebp,ebx
	jle Block30

 Block11:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x24]
	push eax
	call edi
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	lea edx,[esp+0x14]
	mov bl,2
	push edx
	mov byte ptr [esp+0x40],bl
	call edi
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	mov ecx,dword ptr [esp+0x44]
	mov byte ptr [esp+0x3C],3
	test ecx,ecx
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x18]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov edi,8
	mov byte ptr [esp+0x3C],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x14],di
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[esp+0x14]
	push edx
	call ebx

 Block21:
	mov byte ptr [esp+0x3C],1
	cmp word ptr [esp+0x24],di
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[esp+0x24]
	push ecx
	call ebx

 Block25:
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	mov edx,dword ptr [eax]
	push 0xFFFFFF
	mov edi,eax
	push eax
	mov eax,dword ptr [edx+0xE0]
	call eax
	test eax,eax
	jge Block29

 Block28:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block29:
	mov dword ptr [esi+8],1
	mov dword ptr [esi+0xC],ebp
	mov eax,dword ptr [esp+0x4C]

 Block30:
	mov ecx,dword ptr [esp+0x44]
	mov byte ptr [esp+0x3C],0
	test ecx,ecx
	je Block32

 Block31:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax
	mov eax,dword ptr [esp+0x4C]

 Block32:
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret 0xC
}
}
// CAnimationDisplayer::RegisterFireCrackerAnimation
_SUB_EXCEPTION_HANDLER(5A6E0)
__SUB_CLASS_THIS(0005A6E0, __thiscall, 18545,  CAnimationDisplayer, void, const wchar_t*, const tagRECT&, long, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A6E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x4C]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x14],ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push eax
	call esi
	lea ecx,[esp+0x2C]
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
	lea edx,[esp+0x1C]
	push edx
	mov dword ptr [esp+0x58],ebp
	call esi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	mov eax,dword ptr [esp+0x5C]
	push ebp
	push ebp
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x28]
	push edx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,1
	push eax
	mov byte ptr [esp+0x6C],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x68],2
	cmp dword ptr [_D_G_RM],ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0x6C],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x5C],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x60]
	mov dword ptr [esp+0x60],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x54],5
	cmp word ptr [esp+0x3C],bx
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebp
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x3C]
	push eax
	call esi

 Block13:
	mov byte ptr [esp+0x54],6
	cmp word ptr [esp+0x1C],bx
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x1C]
	push edx
	call esi

 Block17:
	mov byte ptr [esp+0x54],7
	cmp word ptr [esp+0x2C],bx
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x2C]
	push ecx
	call esi

 Block21:
	mov edi,dword ptr [esp+0x5C]
	cmp edi,ebp
	sete al
	test al,al
	je Block24

 Block22:
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp edi,ebp
	je Block34

 Block23:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax
	jmp Block34

 Block24:
	call get_update_time
	mov ecx,dword ptr [esp+0x14]
	add ecx,0xE4
	mov ebp,eax
	call ZList<CAnimationDisplayer::FIRECRACKER>::AddTail_
	mov ecx,dword ptr [esp+0x60]
	mov edx,dword ptr [ecx]
	mov esi,eax
	mov dword ptr [esi],edx
	mov eax,dword ptr [ecx+4]
	mov dword ptr [esi+4],eax
	mov eax,dword ptr [ecx+8]
	sub eax,dword ptr [ecx]
	mov dword ptr [esp+0x60],edi
	mov dword ptr [esi+8],eax
	lea edx,[eax+eax*4]
	mov eax,0x2AAAAAAB
	imul edx
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov dword ptr [esi+0xC],eax
	mov eax,dword ptr [ecx+0xC]
	sub eax,dword ptr [ecx+4]
	mov dword ptr [esi+0x20],ebp
	lea ecx,[eax+eax*4]
	mov dword ptr [esi+0x10],eax
	mov eax,0x2AAAAAAB
	imul ecx
	mov eax,dword ptr [esp+0x68]
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov edx,dword ptr [esp+0x64]
	mov dword ptr [esi+0x14],ecx
	mov ecx,dword ptr [esp+0x70]
	add ebp,ecx
	mov dword ptr [esi+0x18],edx
	mov dword ptr [esi+0x1C],eax
	mov dword ptr [esi+0x24],ebp
	test edi,edi
	je Block26

 Block25:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax

 Block26:
	mov byte ptr [esp+0x54],bl
	test edi,edi
	je Block30

 Block27:
	push 0xFFFFFFFF
	lea ecx,[esi+0x28]
	call ZArray<_x_com_ptr<IWzProperty>>::InsertBefore
	mov esi,dword ptr [eax]
	cmp esi,edi
	je Block30

 Block28:
	mov dword ptr [eax],edi
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx
	test esi,esi
	je Block30

 Block29:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block30:
	mov byte ptr [esp+0x54],7
	test edi,edi
	je Block32

 Block31:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block32:
	mov dword ptr [esp+0x54],0xFFFFFFFF
	test edi,edi
	je Block34

 Block33:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block34:
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret 0x18
}
}
// CAfterImageBullet::~CAfterImageBullet
_SUB_EXCEPTION_HANDLER(3B470)
__SUB_CLASS_THIS0(0003B470, __thiscall, 18330,  CAfterImageBullet, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B470
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
	int 3// TODO: 	mov dword ptr [esi],offset CBullet::`vftable'
	mov eax,dword ptr [esi+0x30]
	mov dword ptr [esp+0x14],2
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x10]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0xC]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// get_stage
__SUB0(00038CB0, __cdecl, 146234,  ZRef<CStage>&) {
__asm {

 Block0:
	mov eax,offset _D_G_PSTAGE
	ret
}
}
// CAnimationDisplayer::HOOKING_CHAIN_INFO::Update
_SUB_EXCEPTION_HANDLER(53EB0)
__SUB_CLASS_THIS(00053EB0, __thiscall, 18961,  CAnimationDisplayer::HOOKING_CHAIN_INFO, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_53EB0
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
	mov eax,dword ptr [esp+0xA4]
	mov ecx,eax
	sub ecx,dword ptr [esi+4]
	test ecx,ecx
	jg Block43

 Block1:
	sub eax,dword ptr [esi]
	test eax,eax
	jle Block4

 Block2:
	cmp dword ptr [esi+8],0
	jle Block43

 Block3:
	mov dword ptr [esi+0xC],0xFFFFFFE2
	mov dword ptr [esi+0x14],0

 Block4:
	mov edx,dword ptr [esi+0x10]
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push edx
	call CUserPool::GetUser
	test eax,eax
	je Block43

 Block5:
	lea edi,[eax+4]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,edi
	call edx
	mov ecx,dword ptr [esi+0x2C]
	neg ecx
	sbb ecx,ecx
	and ecx,0xFFFFFFCE
	add ecx,0x19
	add ecx,dword ptr [eax]
	lea eax,[esp+0x34]
	mov dword ptr [esi+0x18],ecx
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x10]
	push eax
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [esi+0x14]
	sub eax,0x14
	mov dword ptr [esi+0x1C],eax
	push ecx
	mov ecx,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	call CMobPool::GetMob
	mov edi,eax
	mov dword ptr [esp+0x2C],edi
	test edi,edi
	je Block10

 Block6:
	mov eax,dword ptr [edi+0x174]
	mov edx,dword ptr [eax+0x6C]
	push edx
	add eax,0x64
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block8

 Block7:
	push 1
	lea eax,[esp+0x78]
	push eax
	mov ecx,edi
	call CMob::GetBodyRect
	mov ecx,dword ptr [esp+0x74]
	mov edx,dword ptr [esp+0x7C]
	lea eax,[edx+ecx]
	mov ecx,dword ptr [esp+0x78]
	cdq
	sub eax,edx
	sar eax,1
	mov dword ptr [esi+0x20],eax
	mov eax,dword ptr [esp+0x80]
	add eax,ecx
	cdq
	sub eax,edx
	sar eax,1
	jmp Block9

 Block8:
	mov edx,dword ptr [edi+4]
	mov edx,dword ptr [edx+0x10]
	add edi,4
	lea eax,[esp+0x34]
	push eax
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax]
	mov dword ptr [esi+0x20],eax
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x34]
	push eax
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax+4]
	sub eax,0x14

 Block9:
	mov dword ptr [esi+0x24],eax

 Block10:
	mov edi,dword ptr [esi+0x20]
	sub edi,dword ptr [esi+0x18]
	mov ebp,dword ptr [esi+0x24]
	sub ebp,dword ptr [esi+0x1C]
	mov edx,edi
	mov ecx,ebp
	imul edx,edi
	imul ecx,ebp
	add ecx,edx
	mov dword ptr [esp+0x28],ecx
	mov dword ptr [esp+0x18],edi
	fild dword ptr [esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call __CIsqrt
	call __ftol2_sse
	mov ebx,dword ptr [esi+0x38]
	mov dword ptr [esp+0x28],eax
	test ebx,ebx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x1C]
	push ecx
	push ebx
	mov dword ptr [esp+0x24],0
	call edx
	test eax,eax
	jge Block14

 Block13:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block14:
	mov eax,dword ptr [esp+0x28]
	sub eax,dword ptr [esp+0x1C]
	xor ebx,ebx
	test eax,eax
	setle bl
	dec ebx
	and ebx,eax
	mov dword ptr [esp+0x28],ebx
	test edi,edi
	jne Block16

 Block15:
	mov eax,dword ptr [esi+0x1C]
	xor ecx,ecx
	cmp eax,dword ptr [esi+0x24]
	setge cl
	dec ecx
	and ecx,0xFFFFFF4C
	add ecx,0x10E
	mov dword ptr [esp+0x18],ecx
	jmp Block25

 Block16:
	test ebp,ebp
	jne Block18

 Block17:
	mov edx,dword ptr [esi+0x18]
	xor eax,eax
	cmp edx,dword ptr [esi+0x20]
	setl al
	dec eax
	and eax,0xB4
	jmp Block24

 Block18:
	fild dword ptr [esp+0x24]
	fabs
	fild dword ptr [esp+0x18]
	fabs
	fdivp st(1),st(0)
	call __CIatan
	fmul qword ptr [__real_4066800000000000]
	fdiv qword ptr [_D_PI__215]
	call __ftol2_sse
	mov dword ptr [esp+0x18],eax
	test edi,edi
	jle Block21

 Block19:
	test ebp,ebp
	jg Block25

 Block20:
	mov ecx,0x168
	sub ecx,eax
	mov dword ptr [esp+0x18],ecx
	jmp Block25

 Block21:
	test ebp,ebp
	jle Block23

 Block22:
	mov edx,0xB4
	sub edx,eax
	mov dword ptr [esp+0x18],edx
	jmp Block25

 Block23:
	add eax,0xB4

 Block24:
	mov dword ptr [esp+0x18],eax

 Block25:
	cmp dword ptr [esi+0x28],0
	jne Block36

 Block26:
	cmp ebx,dword ptr [esi+8]
	jg Block36

 Block27:
	cmp dword ptr [esp+0x2C],0
	mov dword ptr [esi+0x28],1
	je Block35

 Block28:
	push offset _S_2__3
	lea ecx,[esp+0x28]
	call _xbstr_t::_ctor_0
	push 0
	push 0xFF
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0xAC],0
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],0
	mov eax,dword ptr [esi+0x24]
	mov ecx,dword ptr [esi+0x20]
	push eax
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x50],esp
	mov dword ptr [eax],0
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x4C]
	push eax
	lea ecx,[esi+0x30]
	mov byte ptr [esp+0xC0],2
	call Ztl_bstr_t::op_add_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xB8],3
	test eax,eax
	je Block30

 Block29:
	mov eax,dword ptr [eax]
	jmp Block31

 Block30:
	xor eax,eax

 Block31:
	xor ecx,ecx
	cmp dword ptr [esi+0x2C],ecx
	lea edx,[esp+0x38]
	sete cl
	mov byte ptr [esp+0xB8],4
	push ecx
	push eax
	push edx
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	lea ecx,[esp+0x2C]
	call _xbstr_t::~_xbstr_t
	mov bl,7
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x9C],bl
	call Ztl_bstr_t::~Ztl_bstr_t
	push offset _D_VTMISSING
	lea ecx,[esp+0x78]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x88]
	mov byte ptr [esp+0xA0],8
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x9C],9
	test ecx,ecx
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	lea eax,[esp+0x74]
	push eax
	lea edx,[esp+0x88]
	push edx
	push 0
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x84]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x74]
	mov byte ptr [esp+0x9C],bl
	call Ztl_variant_t::~Ztl_variant_t
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push 0
	push ecx
	mov dword ptr [eax],0
	lea eax,[esp+0x28]
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push eax
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	test eax,eax
	je Block36

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block36

 Block35:
	mov dword ptr [esi+0xC],0xFFFFFFE2

 Block36:
	mov eax,dword ptr [esi+0xC]
	add dword ptr [esi+8],eax
	mov eax,dword ptr [esi+8]
	xor ecx,ecx
	xor ebp,ebp
	cmp eax,ebp
	setle cl
	dec ecx
	and eax,ecx
	mov ecx,dword ptr [esp+0x28]
	cmp eax,ecx
	jl Block38

 Block37:
	mov eax,ecx

 Block38:
	mov dword ptr [esi+8],eax
	mov dword ptr [esp+0x14],ebp
	lea edx,[esp+0x2C]
	push 0x3D0
	push edx
	mov dword ptr [esp+0xA4],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea ecx,[esp+0x18]
	push ecx
	push eax
	mov byte ptr [esp+0xA8],0xB
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x38]
	add esp,0xC
	mov byte ptr [esp+0x9C],0xA
	cmp eax,ebp
	je Block40

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block40:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	sete cl
	test cl,cl
	je Block44

 Block41:
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	cmp eax,ebp
	je Block43

 Block42:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block43:
	mov eax,1
	jmp Block172

 Block44:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x34]
	push ecx
	call edi
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	lea eax,[esp+0x44]
	mov bl,0xC
	push eax
	mov byte ptr [esp+0xA0],bl
	call edi
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x9C],0xD
	cmp ecx,ebp
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x48]
	push eax
	push 0x64
	push 0x320
	call IWzCanvas::Create
	mov edi,8
	mov byte ptr [esp+0x9C],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x44],di
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	cmp eax,ebp
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[esp+0x44]
	push edx
	call ebx

 Block54:
	mov byte ptr [esp+0x9C],0xA
	cmp word ptr [esp+0x34],di
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,ebp
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[esp+0x34]
	push ecx
	call ebx

 Block58:
	mov edi,dword ptr [esi+0x34]
	mov dword ptr [esp+0x1C],ebp
	cmp edi,ebp
	je Block74

 Block59:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x24]
	push eax
	xor ebp,ebp
	push edi
	mov dword ptr [esp+0x2C],ebp
	call ecx
	cmp eax,ebp
	jge Block61

 Block60:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block61:
	mov edx,dword ptr [esp+0x24]
	imul edx,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x4C],0xFF
	cmp edx,dword ptr [esi+8]
	jae Block75

 Block62:
	mov eax,3
	mov word ptr [esp+0x44],ax
	mov ebx,dword ptr [esi+0x34]
	mov edi,ebx
	mov byte ptr [esp+0x9C],0xE
	test edi,edi
	je Block11

 Block63:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x24]
	push edx
	push edi
	mov dword ptr [esp+0x2C],0
	call eax
	test eax,eax
	jge Block65

 Block64:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block65:
	mov ebp,dword ptr [esi+0x34]
	mov edi,dword ptr [esp+0x24]
	test ebp,ebp
	je Block11

 Block66:
	mov ecx,dword ptr [ebp]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x28]
	push edx
	push ebp
	mov dword ptr [esp+0x30],0
	call eax
	test eax,eax
	jge Block68

 Block67:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block68:
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	je Block11

 Block69:
	lea edx,[esp+0x44]
	push edx
	mov edx,dword ptr [esp+0x2C]
	imul edx,dword ptr [esp+0x20]
	push ebx
	shr edi,1
	mov eax,0x32
	sub eax,edi
	push eax
	push edx
	call IWzCanvas::Copy
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x9C],0xA
	jne Block72

 Block70:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block73:
	mov edi,dword ptr [esi+0x34]
	inc dword ptr [esp+0x1C]
	test edi,edi
	jne Block59

 Block74:
	push 0x80004003
	call _com_issue_error

 Block75:
	mov edx,3
	mov word ptr [esp+0x44],dx
	mov ebx,dword ptr [esi+0x38]
	mov edi,ebx
	mov byte ptr [esp+0x9C],0xF
	cmp edi,ebp
	jne Block77

 Block76:
	push 0x80004003
	call _com_issue_error

 Block77:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x28]
	push ecx
	push edi
	mov dword ptr [esp+0x30],ebp
	call edx
	cmp eax,ebp
	jge Block79

 Block78:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block79:
	mov ebp,dword ptr [esi+0x34]
	mov edi,dword ptr [esp+0x28]
	test ebp,ebp
	jne Block81

 Block80:
	push 0x80004003
	call _com_issue_error

 Block81:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x24]
	push ecx
	push ebp
	mov dword ptr [esp+0x2C],0
	call edx
	test eax,eax
	jge Block83

 Block82:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block83:
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	jne Block85

 Block84:
	push 0x80004003
	call _com_issue_error

 Block85:
	lea eax,[esp+0x44]
	push eax
	mov eax,dword ptr [esp+0x28]
	imul eax,dword ptr [esp+0x20]
	push ebx
	shr edi,1
	mov edx,0x32
	sub edx,edi
	push edx
	push eax
	call IWzCanvas::Copy
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x9C],0xA
	jne Block88

 Block86:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block89:
	mov dword ptr [esp+0x20],0
	lea eax,[esp+0x2C]
	push 0x3D2
	push eax
	mov byte ptr [esp+0xA4],0x10
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x9C],0x11
	test eax,eax
	je Block91

 Block90:
	mov eax,dword ptr [eax]
	jmp Block92

 Block91:
	xor eax,eax

 Block92:
	push 0
	lea ecx,[esp+0x24]
	push ecx
	push eax
	call PcCreate_IWzVector2D
	mov ecx,dword ptr [esp+0x38]
	add esp,0xC
	mov byte ptr [esp+0x9C],0x10
	test ecx,ecx
	je Block94

 Block93:
	call _xbstr_t::Data_t::Release

 Block94:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x34]
	push edx
	call ebp
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block96

 Block95:
	push eax
	call _com_issue_error

 Block96:
	lea ecx,[esp+0x44]
	mov bl,0x12
	push ecx
	mov byte ptr [esp+0xA0],bl
	call ebp
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block98

 Block97:
	push eax
	call _com_issue_error

 Block98:
	mov ecx,dword ptr [esp+0x20]
	mov byte ptr [esp+0x9C],0x13
	test ecx,ecx
	jne Block100

 Block99:
	push 0x80004003
	call _com_issue_error

 Block100:
	lea eax,[esp+0x34]
	push eax
	mov eax,dword ptr [esi+0x1C]
	lea edx,[esp+0x48]
	push edx
	mov edx,dword ptr [esi+0x18]
	push eax
	push edx
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [esp+0x9C],bl
	cmp word ptr [esp+0x44],di
	jne Block103

 Block101:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block104:
	mov byte ptr [esp+0x9C],0x10
	cmp word ptr [esp+0x34],di
	jne Block107

 Block105:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block108

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block107:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block108:
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	jne Block110

 Block109:
	push 0x80004003
	call _com_issue_error

 Block110:
	fild dword ptr [esp+0x18]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x80]
	sub esp,8
	fstp qword ptr [esp]
	push eax
	mov edi,eax
	call edx
	test eax,eax
	jge Block112

 Block111:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block112:
	mov eax,3
	mov word ptr [esp+0x44],ax
	mov dword ptr [esp+0x4C],0xFFFFFFFE
	mov ecx,dword ptr [esi+0x3C]
	mov byte ptr [esp+0x9C],0x14
	test ecx,ecx
	jne Block114

 Block113:
	push 0x80004003
	call _com_issue_error

 Block114:
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x30]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block116

 Block115:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block116:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x9C],0x10
	jne Block122

 Block117:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block119

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block119:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block120:
	lea edx,[esp+0x74]
	push edx
	call ebp
	lea eax,[esp+0x74]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block123

 Block121:
	push eax
	call _com_issue_error

 Block122:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x44]
	push ecx
	call edi
	jmp Block120

 Block123:
	lea ecx,[esp+0x64]
	push ecx
	mov byte ptr [esp+0xA0],0x15
	call ebp
	lea edx,[esp+0x64]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block125

 Block124:
	push eax
	call _com_issue_error

 Block125:
	lea eax,[esp+0x54]
	push eax
	mov byte ptr [esp+0xA0],0x16
	call ebp
	lea ecx,[esp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block127

 Block126:
	push eax
	call _com_issue_error

 Block127:
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0xA0],0x17
	call ebp
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block129

 Block128:
	push eax
	call _com_issue_error

 Block129:
	lea ecx,[esp+0x44]
	mov bl,0x18
	push ecx
	mov byte ptr [esp+0xA0],bl
	call ebp
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block131

 Block130:
	push eax
	call _com_issue_error

 Block131:
	mov ecx,dword ptr [esi+0x3C]
	mov byte ptr [esp+0x9C],0x19
	test ecx,ecx
	jne Block133

 Block132:
	push 0x80004003
	call _com_issue_error

 Block133:
	lea eax,[esp+0x74]
	push eax
	lea edx,[esp+0x68]
	push edx
	lea eax,[esp+0x5C]
	push eax
	lea edx,[esp+0x40]
	push edx
	mov edx,dword ptr [esp+0x24]
	lea eax,[esp+0x54]
	push eax
	push edx
	lea eax,[esp+0x9C]
	push eax
	call IWzGr2DLayer::InsertCanvas
	mov ebp,8
	cmp word ptr [esp+0x84],bp
	jne Block136

 Block134:
	mov eax,dword ptr [esp+0x8C]
	xor ecx,ecx
	mov word ptr [esp+0x84],cx
	test eax,eax
	je Block137

 Block135:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block137

 Block136:
	lea edx,[esp+0x84]
	push edx
	call edi

 Block137:
	mov byte ptr [esp+0x9C],bl
	cmp word ptr [esp+0x44],bp
	jne Block140

 Block138:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block141

 Block139:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block141

 Block140:
	lea ecx,[esp+0x44]
	push ecx
	call edi

 Block141:
	mov byte ptr [esp+0x9C],0x17
	cmp word ptr [esp+0x34],bp
	jne Block144

 Block142:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block145

 Block143:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block145

 Block144:
	lea eax,[esp+0x34]
	push eax
	call edi

 Block145:
	mov byte ptr [esp+0x9C],0x16
	cmp word ptr [esp+0x54],bp
	jne Block148

 Block146:
	mov eax,dword ptr [esp+0x5C]
	xor ecx,ecx
	mov word ptr [esp+0x54],cx
	test eax,eax
	je Block149

 Block147:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block149

 Block148:
	lea edx,[esp+0x54]
	push edx
	call edi

 Block149:
	mov byte ptr [esp+0x9C],0x15
	cmp word ptr [esp+0x64],bp
	jne Block152

 Block150:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	test eax,eax
	je Block153

 Block151:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block153

 Block152:
	lea ecx,[esp+0x64]
	push ecx
	call edi

 Block153:
	mov byte ptr [esp+0x9C],0x10
	cmp word ptr [esp+0x74],bp
	jne Block156

 Block154:
	mov eax,dword ptr [esp+0x7C]
	xor edx,edx
	mov word ptr [esp+0x74],dx
	test eax,eax
	je Block157

 Block155:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block157

 Block156:
	lea eax,[esp+0x74]
	push eax
	call edi

 Block157:
	mov eax,dword ptr [esp+0x20]
	mov ecx,0xD
	mov word ptr [esp+0x44],cx
	mov dword ptr [esp+0x4C],eax
	test eax,eax
	je Block159

 Block158:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block159:
	mov esi,dword ptr [esi+0x3C]
	mov byte ptr [esp+0x9C],0x1A
	test esi,esi
	jne Block161

 Block160:
	push 0x80004003
	call _com_issue_error

 Block161:
	mov edx,dword ptr [esp+0x44]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x58]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x5C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x60]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block163

 Block162:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block163:
	mov byte ptr [esp+0x9C],0x10
	cmp word ptr [esp+0x44],bp
	jne Block166

 Block164:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block167

 Block165:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block167

 Block166:
	lea edx,[esp+0x44]
	push edx
	call edi

 Block167:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x9C],0xA
	test eax,eax
	je Block169

 Block168:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block169:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	test eax,eax
	je Block171

 Block170:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block171:
	xor eax,eax

 Block172:
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
// CAnimationDisplayer::Effect_RewardRullet
_SUB_EXCEPTION_HANDLER(58820)
__SUB_CLASS_THIS(00058820, __thiscall, 18612,  CAnimationDisplayer, void, long, long, long, NakedParam<_x_com_ptr<IWzVector2D>>) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_58820
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov dword ptr [ebp+0x44],ecx
	xor ebx,ebx
	xor edi,edi
	mov dword ptr [ebp-4],ebx
	mov dword ptr [ebp+0x58],edi
	lea eax,[ebp+0x10]
	push 0x11E0
	push eax
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [ebp+0x3C],ebx
	mov ecx,dword ptr [ebp+0x70]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x3C]
	push edx
	mov byte ptr [ebp-4],3
	call ZXString16::Format
	add esp,0xC
	push eax
	lea ecx,[ebp+0x4C]
	mov dword ptr [ebp+0x4C],ebx
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],5
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],6
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	lea eax,[ebp-0x14]
	push 0x11E1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [ebp+0x38],ebx
	mov ecx,dword ptr [ebp+0x74]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x38]
	push edx
	mov byte ptr [ebp-4],8
	call ZXString16::Format
	add esp,0xC
	push eax
	lea ecx,[ebp+0x48]
	mov dword ptr [ebp+0x48],ebx
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0xA
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0xB
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block8:
	lea eax,[ebp+0x14]
	push 0x11E2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [ebp+0x40],ebx
	mov ecx,dword ptr [ebp+0x78]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x40]
	push edx
	mov byte ptr [ebp-4],0xD
	call ZXString16::Format
	add esp,0xC
	push eax
	lea ecx,[ebp+0x50]
	mov dword ptr [ebp+0x50],ebx
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0xF
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block10:
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],0x10
	cmp eax,ebx
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block12:
	or eax,0xFFFFFFFF
	mov byte ptr [ebp-4],0x11
	mov dword ptr [ebp+0x54],eax
	lea esp,[esp]

 Block13:
	cmp eax,ebx
	jg Block118

 Block14:
	jl Block16

 Block15:
	mov eax,0x20
	call __chkstk
	mov dword ptr [ebp-0x10],esp
	mov eax,esp
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x54]
	push eax
	call __itow
	add esp,0xC
	mov esi,eax
	jmp Block17

 Block16:
	mov esi,offset _S___3

 Block17:
	call StringPool::GetInstance
	push 0x3DA
	lea ecx,[ebp+8]
	push ecx
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [ebp+0x4C]
	mov eax,dword ptr [eax]
	push esi
	push edx
	push eax
	lea eax,[ebp+0x58]
	push eax
	mov byte ptr [ebp-4],0x12
	call ZXString16::Format
	mov eax,dword ptr [ebp+8]
	add esp,0x10
	mov byte ptr [ebp-4],0x11
	cmp eax,ebx
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block19:
	push ebx
	push 0xFF
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x104
	mov dword ptr [eax],ebx
	push 0x190
	push ecx
	mov ecx,dword ptr [ebp+0x7C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp+0x5C],esp
	cmp eax,ebx
	je Block21

 Block20:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block21:
	mov edi,dword ptr [ebp+0x58]
	push ebx
	lea ecx,[ebp+0x60]
	push edi
	push ecx
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	mov ecx,dword ptr [ebp+0x60]
	cmp ecx,ebx
	sete al
	mov byte ptr [ebp-4],0x13
	cmp al,bl
	je Block24

 Block22:
	mov byte ptr [ebp-4],0x11
	cmp ecx,ebx
	je Block118

 Block23:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax
	jmp Block118

 Block24:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x28]
	push ecx
	call esi
	lea edx,[ebp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	lea eax,[ebp+0x18]
	push eax
	mov byte ptr [ebp-4],0x14
	call esi
	lea ecx,[ebp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	mov ecx,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x15
	cmp ecx,ebx
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	mov edi,dword ptr [ebp+0x28]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp+0x2C]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp+0x30]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [ebp+0x34]
	mov dword ptr [eax+0xC],edi
	mov edi,dword ptr [ebp+0x18]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp+0x1C]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp+0x20]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [ebp+0x24]
	push ebx
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [edx+0x110]
	push ecx
	mov esi,ecx
	call eax
	cmp eax,ebx
	jge Block32

 Block31:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block32:
	mov esi,8
	mov byte ptr [ebp-4],0x14
	cmp word ptr [ebp+0x18],si
	jne Block35

 Block33:
	mov eax,dword ptr [ebp+0x20]
	xor ecx,ecx
	mov word ptr [ebp+0x18],cx
	cmp eax,ebx
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea edx,[ebp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp+0x28],si
	jne Block39

 Block37:
	xor eax,eax
	mov word ptr [ebp+0x28],ax
	mov eax,dword ptr [ebp+0x30]
	cmp eax,ebx
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea ecx,[ebp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	mov dword ptr [eax],ebx
	mov edx,dword ptr [ebp+0x60]
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp+0x60]
	mov dword ptr [ebp+0x5C],esp
	cmp eax,ebx
	je Block42

 Block41:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block42:
	mov ecx,dword ptr [ebp+0x44]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov esi,dword ptr [ebp+0x54]
	cmp esi,ebx
	jl Block44

 Block43:
	mov eax,0x20
	call __chkstk
	mov dword ptr [ebp-0x10],esp
	mov eax,esp
	push 0xA
	push eax
	push esi
	call __itow
	add esp,0xC
	mov esi,eax
	jmp Block45

 Block44:
	mov esi,offset _S___3

 Block45:
	call StringPool::GetInstance
	push 0x3DA
	lea ecx,[ebp+0xC]
	push ecx
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [ebp+0x48]
	mov eax,dword ptr [eax]
	push esi
	push edx
	push eax
	lea eax,[ebp+0x58]
	push eax
	mov byte ptr [ebp-4],0x16
	call ZXString16::Format
	mov eax,dword ptr [ebp+0xC]
	add esp,0x10
	mov byte ptr [ebp-4],0x13
	cmp eax,ebx
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block47:
	push ebx
	push 0xFF
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x104
	mov dword ptr [eax],ebx
	push 0x190
	push ecx
	mov ecx,dword ptr [ebp+0x7C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp+0x5C],esp
	cmp eax,ebx
	je Block49

 Block48:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block49:
	mov edi,dword ptr [ebp+0x58]
	push ebx
	lea ecx,[ebp]
	push edi
	push ecx
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [ebp+0x60]
	add esp,0x28
	cmp ecx,eax
	je Block54

 Block50:
	mov esi,ecx
	mov ecx,eax
	mov dword ptr [ebp+0x60],ecx
	cmp eax,ebx
	je Block52

 Block51:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax
	mov ecx,dword ptr [ebp+0x60]

 Block52:
	cmp esi,ebx
	je Block54

 Block53:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx
	mov ecx,dword ptr [ebp+0x60]

 Block54:
	mov eax,dword ptr [ebp]
	cmp eax,ebx
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov ecx,dword ptr [ebp+0x60]

 Block56:
	cmp ecx,ebx
	sete al
	cmp al,bl
	jne Block116

 Block57:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x48]
	push edx
	call esi
	lea eax,[ebp-0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block59

 Block58:
	push eax
	call _com_issue_error

 Block59:
	lea ecx,[ebp-0x28]
	push ecx
	mov byte ptr [ebp-4],0x17
	call esi
	lea edx,[ebp-0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block61

 Block60:
	push eax
	call _com_issue_error

 Block61:
	mov ecx,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x18
	cmp ecx,ebx
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	lea eax,[ebp-0x48]
	push eax
	lea edx,[ebp-0x28]
	push edx
	push ebx
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [ebp-4],0x17
	cmp word ptr [ebp-0x28],si
	jne Block66

 Block64:
	xor eax,eax
	mov word ptr [ebp-0x28],ax
	mov eax,dword ptr [ebp-0x20]
	cmp eax,ebx
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea ecx,[ebp-0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x48],si
	jne Block70

 Block68:
	mov eax,dword ptr [ebp-0x40]
	xor edx,edx
	mov word ptr [ebp-0x48],dx
	cmp eax,ebx
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea eax,[ebp-0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block71:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	mov dword ptr [eax],ebx
	push ebx
	push ecx
	mov ecx,dword ptr [ebp+0x60]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x60]
	mov dword ptr [ebp+0x5C],esp
	cmp eax,ebx
	je Block73

 Block72:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block73:
	mov ecx,dword ptr [ebp+0x44]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov esi,dword ptr [ebp+0x54]
	cmp esi,ebx
	jl Block75

 Block74:
	mov eax,0x20
	call __chkstk
	mov dword ptr [ebp-0x10],esp
	mov eax,esp
	push 0xA
	push eax
	push esi
	call __itow
	add esp,0xC
	mov esi,eax
	jmp Block76

 Block75:
	mov esi,offset _S___3

 Block76:
	call StringPool::GetInstance
	push 0x3DA
	lea ecx,[ebp+4]
	push ecx
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [ebp+0x50]
	mov eax,dword ptr [eax]
	push esi
	push edx
	push eax
	lea eax,[ebp+0x58]
	push eax
	mov byte ptr [ebp-4],0x19
	call ZXString16::Format
	mov eax,dword ptr [ebp+4]
	add esp,0x10
	mov byte ptr [ebp-4],0x13
	cmp eax,ebx
	je Block78

 Block77:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block78:
	push ebx
	push 0xFF
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x104
	mov dword ptr [eax],ebx
	push 0x190
	push ecx
	mov ecx,dword ptr [ebp+0x7C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp+0x5C],esp
	cmp eax,ebx
	je Block80

 Block79:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block80:
	mov edi,dword ptr [ebp+0x58]
	push ebx
	lea ecx,[ebp-0x18]
	push edi
	push ecx
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [ebp+0x60]
	add esp,0x28
	cmp ecx,eax
	je Block85

 Block81:
	mov esi,ecx
	mov ecx,eax
	mov dword ptr [ebp+0x60],ecx
	cmp eax,ebx
	je Block83

 Block82:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax
	mov ecx,dword ptr [ebp+0x60]

 Block83:
	cmp esi,ebx
	je Block85

 Block84:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx
	mov ecx,dword ptr [ebp+0x60]

 Block85:
	mov eax,dword ptr [ebp-0x18]
	cmp eax,ebx
	je Block87

 Block86:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov ecx,dword ptr [ebp+0x60]

 Block87:
	cmp ecx,ebx
	sete al
	cmp al,bl
	jne Block116

 Block88:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x58]
	push edx
	call esi
	lea eax,[ebp-0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block90

 Block89:
	push eax
	call _com_issue_error

 Block90:
	lea ecx,[ebp-0x38]
	push ecx
	mov byte ptr [ebp-4],0x1A
	call esi
	lea edx,[ebp-0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block92

 Block91:
	push eax
	call _com_issue_error

 Block92:
	mov ecx,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x1B
	cmp ecx,ebx
	jne Block94

 Block93:
	push 0x80004003
	call _com_issue_error

 Block94:
	lea eax,[ebp-0x58]
	push eax
	lea edx,[ebp-0x38]
	push edx
	push ebx
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [ebp-4],0x1A
	cmp word ptr [ebp-0x38],si
	jne Block97

 Block95:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	cmp eax,ebx
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea ecx,[ebp-0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block98:
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x58],si
	jne Block101

 Block99:
	mov eax,dword ptr [ebp-0x50]
	xor edx,edx
	mov word ptr [ebp-0x58],dx
	cmp eax,ebx
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea eax,[ebp-0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block102:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	mov dword ptr [eax],ebx
	push ebx
	push ecx
	mov ecx,dword ptr [ebp+0x60]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x60]
	mov dword ptr [ebp+0x5C],esp
	cmp eax,ebx
	je Block104

 Block103:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block104:
	mov ecx,dword ptr [ebp+0x44]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x11
	cmp eax,ebx
	je Block106

 Block105:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block106:
	inc dword ptr [ebp+0x54]
	mov eax,dword ptr [ebp+0x54]
	jmp Block13

 Block116:
	mov byte ptr [ebp-4],0x11
	cmp ecx,ebx
	je Block118

 Block117:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx

 Block118:
	mov eax,dword ptr [ebp+0x50]
	mov dword ptr [ebp-4],0xB
	cmp eax,ebx
	je Block120

 Block119:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block120:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],6
	cmp eax,ebx
	je Block122

 Block121:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block122:
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],1
	cmp eax,ebx
	je Block124

 Block123:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block124:
	mov byte ptr [ebp-4],bl
	cmp edi,ebx
	je Block127

 Block125:
	add edi,0xFFFFFFF4
	push edi

 Block126:
	call ZXString16::_Release
	add esp,4

 Block127:
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,ebx
	je Block129

 Block128:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block129:
	lea esp,[ebp-0x68]
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
	ret 0x10
}
}
// CAnimationDisplayer::SQUIBINFO::Update
_SUB_EXCEPTION_HANDLER(51300)
__SUB_CLASS_THIS(00051300, __thiscall, 18905,  CAnimationDisplayer::SQUIBINFO, int32_t, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_51300
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [ebp+8]
	cmp eax,dword ptr [edi+0x20]
	jg Block22

 Block1:
	fld qword ptr [edi+0x18]
	fmul qword ptr [__real_408f400000000000]
	call __ftol2_sse
	mov ecx,offset _D_G_RAND
	mov esi,eax
	call CRand32::Random
	xor edx,edx
	mov ecx,0x3E9
	div ecx
	cmp edx,esi
	ja Block41

 Block2:
	mov esi,dword ptr [edi]
	test esi,esi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp-0x14]
	push eax
	push esi
	mov dword ptr [ebp-0x14],0
	call ecx
	test eax,eax
	jge Block6

 Block5:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,0x2BD
	div ecx
	add edx,0x12C
	mov dword ptr [ebp-0x18],edx
	fild dword ptr [ebp-0x18]
	test edx,edx
	jge Block8

 Block7:
	fadd qword ptr [__real_41f0000000000000]

 Block8:
	fdiv qword ptr [__real_408f400000000000]
	mov eax,0x20
	fstp qword ptr [ebp-0x20]
	call __alloca_probe_8
	mov ebx,dword ptr [ebp-0x14]
	mov esi,esp
	push 0
	push 0
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	test ebx,ebx
	je Block10

 Block9:
	xor edx,edx
	div ebx
	mov eax,edx

 Block10:
	push 0xA
	push esi
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [edi]
	xor esi,esi
	mov dword ptr [ebp-4],esi
	cmp ecx,esi
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea edx,[ebp-0x30]
	or ebx,0xFFFFFFFF
	push edx
	mov dword ptr [ebp-4],ebx
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [ebp-4],1
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block15

 Block13:
	cmp eax,0x80004002
	je Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	cmp word ptr [ebp-0x30],8
	mov byte ptr [ebp-4],3
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [ebp-0x30],ax
	mov eax,dword ptr [ebp-0x28]
	cmp eax,esi
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[ebp-0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov eax,dword ptr [ebp-0x14]
	cmp eax,esi
	sete cl
	test cl,cl
	je Block23

 Block20:
	mov dword ptr [ebp-4],ebx
	cmp eax,esi
	je Block22

 Block21:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block22:
	mov eax,1
	jmp Block42

 Block23:
	fldz
	mov ecx,dword ptr [edi+0x24]
	sub esp,0x10
	fstp qword ptr [esp+8]
	fld qword ptr [ebp-0x20]
	fstp qword ptr [esp]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x34],esp
	mov dword ptr [eax],esi
	mov eax,dword ptr [edi+0x2C]
	mov esi,eax
	sar esi,1
	mov ecx,offset _D_G_RAND
	mov byte ptr [ebp-4],4
	neg esi
	lea ebx,[eax+1]
	call CRand32::Random
	test ebx,ebx
	je Block25

 Block24:
	xor edx,edx
	div ebx
	mov eax,edx
	add eax,esi

 Block25:
	mov dword ptr [ebp-0x1C],eax
	fild dword ptr [ebp-0x1C]
	test eax,eax
	jge Block27

 Block26:
	fadd qword ptr [__real_41f0000000000000]

 Block27:
	mov eax,dword ptr [edi+0x28]
	fadd qword ptr [edi+0x10]
	mov esi,eax
	sub esp,8
	sar esi,1
	fstp qword ptr [esp]
	mov ecx,offset _D_G_RAND
	neg esi
	lea ebx,[eax+1]
	call CRand32::Random
	test ebx,ebx
	je Block29

 Block28:
	xor edx,edx
	div ebx
	mov eax,edx
	add eax,esi

 Block29:
	mov dword ptr [ebp-0x1C],eax
	fild dword ptr [ebp-0x1C]
	test eax,eax
	jge Block31

 Block30:
	fadd qword ptr [__real_41f0000000000000]

 Block31:
	fadd qword ptr [edi+8]
	mov esi,dword ptr [ebp-0x14]
	sub esp,0xC
	mov eax,esp
	fstp qword ptr [esp+4]
	mov dword ptr [ebp-0x1C],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block33

 Block32:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block33:
	lea ecx,[ebp-0x18]
	push ecx
	mov byte ptr [ebp-4],3
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::Effect_Transformed
	mov eax,dword ptr [ebp-0x18]
	test eax,eax
	je Block35

 Block34:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block35:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block39

 Block36:
	cmp word ptr [eax],0
	je Block39

 Block37:
	call get_update_time
	mov ecx,dword ptr [CAnimationDisplayer::SQUIBINFO::tLastSoundPlayed]
	add ecx,0x32
	cmp ecx,eax
	jge Block39

 Block38:
	mov edi,dword ptr [edi+4]
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push 0
	push 0x64
	push edi
	call CSoundMan::PlaySE
	call get_update_time
	mov dword ptr [CAnimationDisplayer::SQUIBINFO::tLastSoundPlayed],eax

 Block39:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test esi,esi
	je Block41

 Block40:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block41:
	xor eax,eax

 Block42:
	lea esp,[ebp-0x44]
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
// TAnimation<CAnimationDisplayer::ONETIMEINFO>::Update
__SUB_CLASS_THIS(00041D10, __thiscall, 19152,  TAnimation<CAnimationDisplayer::ONETIMEINFO>, void, long) {
__asm {

 Block0:
	push ecx
	push ebx
	mov ebx,ecx
	mov eax,dword ptr [ebx+0xC]
	mov dword ptr [esp+4],eax
	test eax,eax
	je Block6

 Block1:
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]

 Block2:
	mov esi,eax
	lea eax,[esp+0xC]
	push eax
	call ZList<CAnimationDisplayer::ONETIMEINFO>::GetNext
	add esp,4
	push edi
	mov ecx,eax
	call CAnimationDisplayer::ONETIMEINFO::Update
	test eax,eax
	je Block4

 Block3:
	push esi
	mov ecx,ebx
	call ZList<CAnimationDisplayer::ONETIMEINFO>::RemoveAt

 Block4:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	jne Block2

 Block5:
	pop edi
	pop esi

 Block6:
	pop ebx
	pop ecx
	ret 4
}
}
// CAnimationDisplayer::RESERVEDINFO::Update
_SUB_EXCEPTION_HANDLER(5ADF0)
__SUB_CLASS_THIS(0005ADF0, __thiscall, 18891,  CAnimationDisplayer::RESERVEDINFO, int32_t, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5ADF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x428
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x68],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [ebp+0x74]
	cmp eax,dword ptr [esi+0xC]
	jle Block55

 Block1:
	mov eax,dword ptr [esi]
	cmp eax,6
	ja Block54

 Block2:
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block31
cmp EAX, 2
je Block40
cmp EAX, 3
je Block42
cmp EAX, 4
je Block47
cmp EAX, 5
je Block51
cmp EAX, 6
je Block52


 Block3:
	push offset _D_VTMISSING
	lea ecx,[ebp+0x30]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp]
	mov dword ptr [ebp-4],0
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [esi+4]
	push 0
	push 0
	lea ecx,[ebp+0x30]
	push ecx
	lea edx,[ebp]
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push eax
	mov byte ptr [ebp-4],1
	call Ztl_bstr_t::_ctor_2
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],2
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	lea eax,[ebp-0x2C]
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x58]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[ebp-0x2C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp+0x30]
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::~Ztl_variant_t
	mov edi,dword ptr [ebp+0x58]
	test edi,edi
	sete al
	test al,al
	jne Block29

 Block6:
	test edi,edi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov ecx,edi
	call IWzProperty::Getcount
	test eax,eax
	je Block29

 Block9:
	mov eax,0x20
	call __alloca_probe_8
	mov eax,esp
	push 0
	push 0
	push eax
	push 0
	mov ecx,edi
	call IWzProperty::Getcount
	push eax
	call get_rand_0
	add esp,8
	push eax
	call _Int2StrW
	add esp,4
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push eax
	call Ztl_bstr_t::_ctor_2
	lea ecx,[ebp-0x4C]
	push ecx
	mov byte ptr [ebp-4],8
	mov ecx,edi
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x64]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[ebp-0x4C]
	mov byte ptr [ebp-4],0xB
	call Ztl_variant_t::~Ztl_variant_t
	mov ebx,dword ptr [ebp+0x64]
	test ebx,ebx
	sete al
	test al,al
	jne Block26

 Block10:
	test ebx,ebx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov ecx,ebx
	call IWzProperty::Getcount
	test eax,eax
	je Block26

 Block13:
	fldz
	mov edx,dword ptr [esi+0x20]
	sub esp,0x10
	fstp qword ptr [esp+8]
	fld1
	fstp qword ptr [esp]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [eax],0
	fild dword ptr [esi+0x14]
	mov dword ptr [ebp+0x60],esp
	sub esp,0x14
	fstp qword ptr [esp+0xC]
	lea eax,[ebp+0x64]
	fild dword ptr [esi+0x10]
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	fstp qword ptr [esp+4]
	push eax
	call _x_com_ptr<IWzProperty>::_ctor_copy
	lea ecx,[ebp+0x5C]
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::Effect_Transformed
	mov ebx,dword ptr [ebp+0x5C]
	test ebx,ebx
	sete al
	test al,al
	sete al
	mov byte ptr [ebp-4],0xC
	test al,al
	je Block21

 Block14:
	cmp dword ptr [esi+0x18],0
	jne Block16

 Block15:
	cmp dword ptr [esi+0x1C],0
	je Block21

 Block16:
	push offset _D_VTMISSING
	lea ecx,[ebp+0x20]
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0xD
	test ecx,ecx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	call IWzVector2D::GetcurrentTime
	add eax,dword ptr [esi+0x24]
	mov edx,3
	mov word ptr [ebp+0x40],dx
	mov dword ptr [ebp+0x48],eax
	mov ecx,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0xE
	test ecx,ecx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea eax,[ebp+0x20]
	push eax
	mov eax,dword ptr [esi+0x1C]
	lea edx,[ebp+0x40]
	push edx
	mov edx,dword ptr [esi+0x18]
	push eax
	push edx
	call IWzVector2D::RelOffset
	lea ecx,[ebp+0x40]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0xC
	call Ztl_variant_t::~Ztl_variant_t
	mov ebx,dword ptr [ebp+0x5C]

 Block21:
	add esi,8
	mov ecx,esi
	call ZXString16::IsEmpty
	test eax,eax
	jne Block23

 Block22:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push 0
	push 0x64
	push eax
	call CSoundMan::PlaySE
	mov ebx,dword ptr [ebp+0x5C]

 Block23:
	mov byte ptr [ebp-4],0xB
	test ebx,ebx
	je Block25

 Block24:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block25:
	mov eax,dword ptr [ebp+0x64]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],7
	call eax
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	mov eax,1
	jmp Block56

 Block26:
	mov byte ptr [ebp-4],7
	test ebx,ebx
	je Block28

 Block27:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block28:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call eax
	mov eax,1
	jmp Block56

 Block29:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test edi,edi
	je Block54

 Block30:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx
	mov eax,1
	jmp Block56

 Block31:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x1C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp+0x10]
	mov dword ptr [ebp-4],0xF
	call Ztl_variant_t::_ctor_1
	push 0
	push 0
	lea eax,[ebp-0x1C]
	push eax
	mov eax,dword ptr [esi+4]
	lea ecx,[ebp+0x10]
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	mov bl,0x10
	push eax
	mov byte ptr [ebp-4],bl
	call Ztl_bstr_t::_ctor_2
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x11
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	lea edx,[ebp-0x3C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x12
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x64]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[ebp-0x3C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp+0x10]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x1C]
	mov byte ptr [ebp-4],0x16
	call Ztl_variant_t::~Ztl_variant_t
	mov edi,dword ptr [ebp+0x64]
	test edi,edi
	sete al
	test al,al
	jne Block38

 Block34:
	test edi,edi
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	mov ecx,edi
	call IWzProperty::Getcount
	test eax,eax
	je Block38

 Block37:
	mov eax,dword ptr [esi+0x20]
	fld qword ptr [esi+0x30]
	mov ecx,dword ptr [esi+0x24]
	push eax
	sub esp,8
	fstp qword ptr [esp]
	push ecx
	push ecx
	lea edx,[esi+8]
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push edx
	call ZXString16::_ctor_copy
	fild dword ptr [esi+0x14]
	mov eax,dword ptr [esi+0x2C]
	mov ecx,dword ptr [esi+0x28]
	push eax
	push ecx
	sub esp,0x14
	fstp qword ptr [esp+0xC]
	lea edx,[ebp+0x64]
	fild dword ptr [esi+0x10]
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	fstp qword ptr [esp+4]
	push edx
	call _x_com_ptr<IWzProperty>::_ctor_copy
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::Effect_Squib
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ecx
	mov eax,1
	jmp Block56

 Block38:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test edi,edi
	je Block54

 Block39:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax
	mov eax,1
	jmp Block56

 Block40:
	call get_field
	test eax,eax
	je Block54

 Block41:
	mov ecx,dword ptr [esi+0x38]
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,eax
	call CField::SendTransferFieldRequest
	mov eax,1
	jmp Block56

 Block42:
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push offset ZRef<GW_ItemSlotBase>::_ctor_default
	push 0x3C
	push 8
	lea edx,[ebp-0x434]
	push edx
	call __eh_vector_ctor_iterator
	lea ecx,[ebp-0x254]
	mov dword ptr [ebp-4],0x17
	call AvatarLook::_ctor_default
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov bl,0x18
	mov byte ptr [ebp-4],bl
	test ecx,ecx
	je Block44

 Block43:
	lea eax,[ebp+0x50]
	push eax
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	lea ecx,[ebp-0x434]
	push ecx
	add esi,0x3C
	push esi
	push eax
	lea ecx,[ebp-0x254]
	mov byte ptr [ebp-4],0x19
	call AvatarLook::Load_1
	lea ecx,[ebp+0x50]
	mov byte ptr [ebp-4],bl
	call ZRef<CharacterData>::~ZRef<CharacterData>

 Block44:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test eax,eax
	je Block46

 Block45:
	lea edx,[ebp-0x254]
	push edx
	lea ecx,[eax+0x88]
	call CAvatar::SetAvatarLook

 Block46:
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push 0x3C
	push 8
	lea eax,[ebp-0x434]
	push eax
	int 3// TODO: 	mov dword ptr [ebp-0x254],offset ZRefCounted::`vftable'
	mov dword ptr [ebp-4],0xFFFFFFFF
	call __eh_vector_dtor_iterator
	mov eax,1
	jmp Block56

 Block47:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test eax,eax
	je Block49

 Block48:
	lea edi,[eax+0x88]
	jmp Block50

 Block49:
	xor edi,edi

 Block50:
	push ecx
	add esi,0x21C
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push esi
	call Ztl_bstr_t::_ctor_copy
	call get_action_code_from_name
	add esp,4
	push eax
	mov ecx,edi
	call CAvatar::SetOneTimeAction
	mov eax,1
	jmp Block56

 Block51:
	mov ecx,dword ptr [esi+8]
	push 0
	push 0
	push 0
	push 1
	push ecx
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	call CSoundMan::PlayBGM
	mov eax,1
	jmp Block56

 Block52:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test eax,eax
	je Block54

 Block53:
	mov edx,dword ptr [esi+0x10]
	push 0xFFFFFFFF
	push edx
	lea ecx,[eax+0x88]
	call CAvatar::SetEmotion

 Block54:
	mov eax,1
	jmp Block56

 Block55:
	xor eax,eax

 Block56:
	lea esp,[ebp-0x444]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x68]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x6C
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CAnimationDisplayer::LoadRandomLayer
_SUB_EXCEPTION_HANDLER(51E50)
__SUB(00051E50, __cdecl, 18513,  _x_com_ptr<IWzGr2DLayer>, const wchar_t*, int32_t, NakedParam<_x_com_ptr<IWzVector2D>>, long, long, NakedParam<_x_com_ptr<IWzGr2DLayer>>, long, long, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_51E50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x60
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	xor edi,edi
	mov dword ptr [ebp-0x24],edi
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x38]
	push eax
	mov dword ptr [ebp-4],2
	call esi
	lea ecx,[ebp-0x38]
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
	lea edx,[ebp-0x48]
	push edx
	mov byte ptr [ebp-4],3
	call esi
	lea eax,[ebp-0x48]
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
	mov eax,dword ptr [ebp+0xC]
	lea ecx,[ebp-0x38]
	push ecx
	lea edx,[ebp-0x48]
	push edx
	push ecx
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	mov bl,4
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],5
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[ebp-0x68]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	push eax
	lea edx,[ebp-0x28]
	push edx
	mov byte ptr [ebp-4],6
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],7
	mov dword ptr [ebp-0x20],edi
	mov dword ptr [ebp-0x18],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block8:
	lea ecx,[ebp-0x20]
	call _x_com_ptr<IWzProperty>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov eax,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],9
	cmp eax,edi
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	mov esi,8
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x68],si
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [ebp-0x68],ax
	mov eax,dword ptr [ebp-0x60]
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[ebp-0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp-0x48],si
	jne Block20

 Block18:
	mov eax,dword ptr [ebp-0x40]
	xor edx,edx
	mov word ptr [ebp-0x48],dx
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[ebp-0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp-0x38],si
	jne Block24

 Block22:
	mov eax,dword ptr [ebp-0x30]
	xor ecx,ecx
	mov word ptr [ebp-0x38],cx
	cmp eax,edi
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea edx,[ebp-0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov ebx,dword ptr [ebp-0x20]
	cmp ebx,edi
	sete al
	test al,al
	jne Block62

 Block26:
	cmp ebx,edi
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp-0x14]
	push ecx
	push ebx
	mov dword ptr [ebp-0x14],edi
	call edx
	cmp eax,edi
	jge Block30

 Block29:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block30:
	cmp dword ptr [ebp-0x14],edi
	je Block62

 Block31:
	mov dword ptr [ebp-0x14],edi
	mov byte ptr [ebp-4],0xD
	mov dword ptr [ebp-0x1C],edi
	lea esp,[esp]

 Block32:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push edi
	push edi
	push 0xA
	push eax
	mov eax,dword ptr [ebp-0x1C]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x58]
	push ecx
	mov byte ptr [ebp-4],0xE
	mov ecx,ebx
	mov byte ptr [ebp-4],0xD
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-0x18],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block34

 Block33:
	cmp eax,0x80004002
	jne Block1

 Block34:
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp-0x58],si
	jne Block37

 Block35:
	mov eax,dword ptr [ebp-0x50]
	xor edx,edx
	mov word ptr [ebp-0x58],dx
	cmp eax,edi
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea eax,[ebp-0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov esi,dword ptr [ebp-0x18]
	cmp esi,edi
	sete al
	test al,al
	jne Block47

 Block39:
	push 0xFFFFFFFF
	lea ecx,[ebp-0x14]
	call ZArray<_x_com_ptr<IWzProperty>>::InsertBefore
	mov edi,dword ptr [eax]
	cmp edi,esi
	je Block44

 Block40:
	mov dword ptr [eax],esi
	test esi,esi
	je Block42

 Block41:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block42:
	test edi,edi
	je Block44

 Block43:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block44:
	mov byte ptr [ebp-4],0xD
	test esi,esi
	je Block46

 Block45:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block46:
	inc dword ptr [ebp-0x1C]
	mov esi,8
	xor edi,edi
	jmp Block32

 Block47:
	mov byte ptr [ebp-4],0xD
	cmp esi,edi
	je Block49

 Block48:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block49:
	mov eax,dword ptr [ebp+0x2C]
	mov ecx,dword ptr [ebp+0x28]
	mov edx,dword ptr [ebp+0x24]
	push eax
	push ecx
	push edx
	push ecx
	mov ecx,dword ptr [ebp+0x20]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x20]
	mov dword ptr [ebp-0x18],esp
	cmp eax,edi
	je Block51

 Block50:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block51:
	mov ecx,dword ptr [ebp+0x1C]
	mov edx,dword ptr [ebp+0x18]
	push ecx
	push edx
	push ecx
	mov ecx,dword ptr [ebp+0x14]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],0x12
	mov dword ptr [ebp-0x1C],esp
	cmp eax,edi
	je Block53

 Block52:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block53:
	mov esi,dword ptr [ebp-0x14]
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0x13
	push ecx
	cmp esi,edi
	je Block57

 Block54:
	mov edi,dword ptr [esi-4]
	test edi,edi
	je Block56

 Block55:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	div edi
	xor edi,edi
	mov eax,edx
	jmp Block58

 Block56:
	xor edi,edi

 Block57:
	mov ecx,offset _D_G_RAND
	call CRand32::Random

 Block58:
	mov eax,dword ptr [esi+eax*4]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x6C],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block60

 Block59:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block60:
	mov esi,dword ptr [ebp+8]
	push esi
	mov byte ptr [ebp-4],0xD
	call CAnimationDisplayer::LoadLayer_0
	add esp,0x28
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x24],1
	mov byte ptr [ebp-4],0xC
	call ZArray<_x_com_ptr<IWzProperty>>::RemoveAll
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov byte ptr [ebp-4],2
	call edx
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],1
	cmp eax,edi
	je Block66

 Block61:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block66

 Block62:
	mov esi,dword ptr [ebp+8]
	mov dword ptr [esi],edi
	mov dword ptr [ebp-0x24],1
	mov byte ptr [ebp-4],2
	cmp ebx,edi
	je Block64

 Block63:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block64:
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],1
	cmp eax,edi
	je Block66

 Block65:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block66:
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0
	cmp eax,edi
	je Block68

 Block67:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block68:
	mov eax,esi
	lea esp,[ebp-0x7C]
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
	ret
}
}
// get_field
__SUB0(00039320, __cdecl, 146239,  CField*) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [_D_G_PSTAGE+4]
	test esi,esi
	je Block3

 Block1:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	je Block3

 Block2:
	mov eax,esi
	pop esi
	ret

 Block3:
	xor eax,eax
	pop esi
	ret
}
}
// CAnimationDisplayer::RemoveTeslacoilAnimation
_SUB_EXCEPTION_HANDLER(41C00)
__SUB_CLASS_THIS(00041C00, __thiscall, 18567,  CAnimationDisplayer, void, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_41C00
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
	mov dword ptr [esp+0x10],0
	lea edi,[ecx+0x148]
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0x24],0
	call ZMap<unsigned long, ZRef<CAnimationDisplayer::TAnimation<CAnimationDisplayer::CHAINLIGHTNINGINFO>>, unsigned long>::GetAt
	test eax,eax
	jne Block3

 Block1:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block8

 Block2:
	lea esi,[eax-0x10]
	jmp Block5

 Block3:
	mov esi,dword ptr [esp+0x10]
	mov ecx,esi
	call ZList<CAnimationDisplayer::CHAINLIGHTNINGINFO>::RemoveAll
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,edi
	call ZMap<unsigned long, ZRef<CAnimationDisplayer::TAnimation<CAnimationDisplayer::CHAINLIGHTNINGINFO>>, unsigned long>::RemoveKey
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test esi,esi
	je Block8

 Block4:
	add esi,0xFFFFFFF0

 Block5:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block8

 Block7:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block8:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4
}
}
// TAnimation<CAnimationDisplayer::EXPLOSIONINFO>::~TAnimation<CAnimationDisplayer::EXPLOSIONINFO>
__SUB_CLASS_THIS0(000414B0, __thiscall, 19268,  TAnimation<CAnimationDisplayer::EXPLOSIONINFO>, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::EXPLOSIONINFO>::`vftable'
	jmp  ZList<CAnimationDisplayer::EXPLOSIONINFO>::RemoveAll
}
}
// CAnimationDisplayer::Effect_Transformed
_SUB_EXCEPTION_HANDLER(50BA0)
__SUB_CLASS_THIS(00050BA0, __thiscall, 18619,  CAnimationDisplayer, _x_com_ptr<IWzGr2DLayer>*, _x_com_ptr<IWzGr2DLayer>*, NakedParam<_x_com_ptr<IWzProperty>>, double, double, NakedParam<_x_com_ptr<IWzGr2DLayer>>, long, double, double) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_50BA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x4C]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x20],ecx
	xor ebp,ebp
	mov dword ptr [esp+0x1C],ebp
	mov eax,dword ptr [esp+0x78]
	push ebp
	push 0xFF
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x84]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x84]
	mov dword ptr [esp+0x64],1
	mov dword ptr [esp+0x2C],esp
	cmp eax,ebp
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [eax],ebp
	push ebp
	push ecx
	mov ecx,dword ptr [esp+0x84]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x84]
	mov byte ptr [esp+0x78],2
	mov dword ptr [esp+0x38],esp
	cmp eax,ebp
	je Block4

 Block3:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block4:
	lea ecx,[esp+0x9C]
	push ecx
	mov byte ptr [esp+0x7C],1
	call CAnimationDisplayer::LoadLayer_0
	add esp,0x28
	mov esi,dword ptr [esp+0x78]
	cmp esi,ebp
	sete al
	mov byte ptr [esp+0x54],3
	test al,al
	je Block12

 Block5:
	mov edi,dword ptr [esp+0x5C]
	mov dword ptr [edi],ebp
	mov byte ptr [esp+0x54],1
	cmp esi,ebp
	je Block7

 Block6:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block7:
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0x54],0
	cmp eax,ebp
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	mov eax,dword ptr [esp+0x74]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp eax,ebp
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov eax,edi
	jmp Block110

 Block12:
	fld1
	mov edi,dword ptr [ZImports::_VariantInit]
	fcomp qword ptr [esp+0x7C]
	fnstsw ax
	test ah,0x44
	jp Block14

 Block13:
	fldz
	fcomp qword ptr [esp+0x84]
	fnstsw ax
	test ah,0x44
	jnp Block81

 Block14:
	cmp esi,ebp
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	call IWzGr2DLayer::Getrb
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x54],4
	cmp esi,ebp
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x68]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],ebp
	call eax
	cmp eax,ebp
	jge Block20

 Block19:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block20:
	fild dword ptr [esp+0x14]
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x54],3
	fstp qword ptr [esp+0x24]
	cmp eax,ebp
	je Block22

 Block21:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block22:
	mov ecx,dword ptr [esp+0x78]
	cmp ecx,ebp
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea eax,[esp+0x1C]
	push eax
	call IWzGr2DLayer::Getrb
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x54],5
	cmp esi,ebp
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x70]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],ebp
	call eax
	cmp eax,ebp
	jge Block28

 Block27:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block28:
	fild dword ptr [esp+0x14]
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x54],3
	fstp qword ptr [esp+0x14]
	cmp eax,ebp
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	lea eax,[esp+0x3C]
	push eax
	call edi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x58],6
	call edi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	mov ecx,dword ptr [esp+0x78]
	mov bl,7
	mov byte ptr [esp+0x54],bl
	cmp ecx,ebp
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	lea edx,[esp+0x1C]
	push edx
	call IWzGr2DLayer::Getrb
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x54],8
	cmp esi,ebp
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	fld qword ptr [esp+0x14]
	lea eax,[esp+0x3C]
	fld qword ptr [esp+0x7C]
	push eax
	lea ecx,[esp+0x30]
	fmul st(1),st
	push ecx
	fxch
	call __ftol2_sse
	fmul qword ptr [esp+0x2C]
	push eax
	call __ftol2_sse
	push eax
	mov ecx,esi
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x54],bl
	cmp eax,ebp
	je Block40

 Block39:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block40:
	mov esi,8
	mov byte ptr [esp+0x54],6
	cmp word ptr [esp+0x2C],si
	jne Block43

 Block41:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov byte ptr [esp+0x54],3
	cmp word ptr [esp+0x3C],si
	jne Block47

 Block45:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebp
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	mov esi,dword ptr [esp+0x78]
	cmp esi,ebp
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	fld1
	mov ebx,dword ptr [esi]
	fsub qword ptr [esp+0x7C]
	fld qword ptr [esp+0x14]
	fmul st,st(1)
	call __ftol2_sse
	fld qword ptr [esp+0x24]
	fmul qword ptr [__real_3fe0000000000000]
	push eax
	fmulp st(1),st(0)
	call __ftol2_sse
	mov edx,dword ptr [ebx+0x44]
	push eax
	push esi
	call edx
	cmp eax,ebp
	jge Block52

 Block51:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block52:
	fld qword ptr [esp+0x84]
	mov ecx,dword ptr [esp+0x78]
	fdiv qword ptr [__real_4066800000000000]
	fmul qword ptr [_D_PI__215]
	fstp qword ptr [esp+0x24]
	cmp ecx,ebp
	jne Block54

 Block53:
	push 0x80004003
	call _com_issue_error

 Block54:
	lea eax,[esp+0x1C]
	push eax
	call IWzGr2DLayer::Getrb
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x54],9
	cmp esi,ebp
	jne Block56

 Block55:
	push 0x80004003
	call _com_issue_error

 Block56:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x68]
	lea edx,[esp+0x7C]
	push edx
	push esi
	mov dword ptr [esp+0x84],ebp
	call eax
	cmp eax,ebp
	jge Block58

 Block57:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block58:
	fild dword ptr [esp+0x7C]
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x54],3
	fmul qword ptr [__real_3fe0000000000000]
	fstp qword ptr [esp+0x14]
	cmp eax,ebp
	je Block60

 Block59:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block60:
	mov ecx,dword ptr [esp+0x78]
	cmp ecx,ebp
	jne Block62

 Block61:
	push 0x80004003
	call _com_issue_error

 Block62:
	lea eax,[esp+0x1C]
	push eax
	call IWzGr2DLayer::Getrb
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x54],0xA
	cmp esi,ebp
	jne Block64

 Block63:
	push 0x80004003
	call _com_issue_error

 Block64:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x70]
	lea edx,[esp+0x7C]
	push edx
	push esi
	mov dword ptr [esp+0x84],ebp
	call eax
	cmp eax,ebp
	jge Block66

 Block65:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block66:
	fild dword ptr [esp+0x7C]
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x54],3
	fstp qword ptr [esp+0x2C]
	cmp eax,ebp
	je Block68

 Block67:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block68:
	fld qword ptr [esp+0x24]
	call __CIcos
	fstp qword ptr [esp+0x7C]
	fld qword ptr [esp+0x24]
	call __CIsin
	fld qword ptr [esp+0x7C]
	fld st(0)
	lea eax,[esp+0x3C]
	fld qword ptr [esp+0x14]
	push eax
	fmul st(1),st
	fld st(3)
	fld qword ptr [esp+0x30]
	fmul st(1),st
	fxch st(3)
	fsubrp st(1),st(0)
	fxch st(3)
	fmul st,st(2)
	fxch st(4)
	fmul st,st(1)
	faddp st(4),st
	fsubrp st(2),st
	fxch
	fstp qword ptr [esp+0x30]
	fsubrp st(1),st(0)
	fstp qword ptr [esp+0x80]
	call edi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block70

 Block69:
	push eax
	call _com_issue_error

 Block70:
	mov ecx,dword ptr [esp+0x78]
	mov byte ptr [esp+0x54],0xB
	cmp ecx,ebp
	jne Block72

 Block71:
	push 0x80004003
	call _com_issue_error

 Block72:
	fld qword ptr [esp+0x84]
	lea edx,[esp+0x3C]
	push edx
	sub esp,8
	fstp qword ptr [esp]
	call IWzVector2D::Rotate
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x54],3
	jne Block75

 Block73:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebp
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block76:
	mov esi,dword ptr [esp+0x78]
	cmp esi,ebp
	jne Block78

 Block77:
	push 0x80004003
	call _com_issue_error

 Block78:
	fld qword ptr [esp+0x7C]
	mov ebx,dword ptr [esi]
	call __ftol2_sse
	fld qword ptr [esp+0x2C]
	push eax
	call __ftol2_sse
	mov edx,dword ptr [ebx+0x44]
	push eax
	push esi
	call edx
	cmp eax,ebp
	jge Block80

 Block79:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block80:
	mov esi,dword ptr [esp+0x78]

 Block81:
	cmp esi,ebp
	jne Block83

 Block82:
	push 0x80004003
	call _com_issue_error

 Block83:
	fld qword ptr [esp+0x6C]
	mov ebx,dword ptr [esi]
	call __ftol2_sse
	fld qword ptr [esp+0x64]
	push eax
	call __ftol2_sse
	push eax
	mov eax,dword ptr [ebx+0x44]
	push esi
	call eax
	cmp eax,ebp
	jge Block85

 Block84:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block85:
	lea ecx,[esp+0x2C]
	push ecx
	call edi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block87

 Block86:
	push eax
	call _com_issue_error

 Block87:
	lea eax,[esp+0x3C]
	mov bl,0xC
	push eax
	mov byte ptr [esp+0x58],bl
	call edi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block89

 Block88:
	push eax
	call _com_issue_error

 Block89:
	mov ecx,dword ptr [esp+0x78]
	mov byte ptr [esp+0x54],0xD
	cmp ecx,ebp
	jne Block91

 Block90:
	push 0x80004003
	call _com_issue_error

 Block91:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x40]
	push eax
	push ebp
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x3C],si
	jne Block94

 Block92:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,ebp
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block95:
	mov byte ptr [esp+0x54],3
	cmp word ptr [esp+0x2C],si
	jne Block98

 Block96:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block99:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x80],esp
	mov dword ptr [eax],ebp
	mov edx,dword ptr [esp+0x7C]
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x84]
	mov dword ptr [esp+0x88],esp
	cmp eax,ebp
	je Block101

 Block100:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block101:
	mov ecx,dword ptr [esp+0x2C]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov eax,dword ptr [esp+0x78]
	mov esi,dword ptr [esp+0x5C]
	mov dword ptr [esi],eax
	cmp eax,ebp
	je Block103

 Block102:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx
	mov eax,dword ptr [esp+0x78]

 Block103:
	mov byte ptr [esp+0x54],1
	cmp eax,ebp
	je Block105

 Block104:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block105:
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0x54],0
	cmp eax,ebp
	je Block107

 Block106:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block107:
	mov eax,dword ptr [esp+0x74]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp eax,ebp
	je Block109

 Block108:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block109:
	mov eax,esi

 Block110:
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret 0x30
}
}
// CAnimationDisplayer::Effect_Squib
_SUB_EXCEPTION_HANDLER(55F30)
__SUB_CLASS_THIS(00055F30, __thiscall, 18590,  CAnimationDisplayer, void, NakedParam<_x_com_ptr<IWzProperty>>, double, double, long, long, NakedParam<ZXString16>, long, double, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_55F30
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	add ecx,0x58
	mov dword ptr [esp+0x14],1
	call ZList<CAnimationDisplayer::SQUIBINFO>::AddTail_
	mov esi,eax
	mov edi,dword ptr [esi]
	mov eax,dword ptr [esp+0x1C]
	cmp edi,eax
	je Block5

 Block1:
	mov dword ptr [esi],eax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	test edi,edi
	je Block5

 Block4:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block5:
	lea edx,[esp+0x38]
	push edx
	lea ecx,[esi+4]
	call ZXString16::op_assign
	fld qword ptr [esp+0x20]
	mov eax,dword ptr [esp+0x30]
	fstp qword ptr [esi+8]
	mov ecx,dword ptr [esp+0x34]
	fld qword ptr [esp+0x28]
	fstp qword ptr [esi+0x10]
	mov dword ptr [esi+0x28],eax
	mov dword ptr [esi+0x2C],ecx
	call get_update_time
	fld qword ptr [esp+0x40]
	add eax,dword ptr [esp+0x3C]
	fstp qword ptr [esi+0x18]
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [esi+0x20],eax
	mov dword ptr [esi+0x24],edx
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block9:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 0x30
}
}
// CAnimationDisplayer::Effect_QuestDeliveryItemUse
_SUB_EXCEPTION_HANDLER(59530)
__SUB_CLASS_THIS(00059530, __thiscall, 18621,  CAnimationDisplayer, void, long, NakedParam<_x_com_ptr<IWzVector2D>>, NakedParam<_x_com_ptr<IWzGr2DLayer>>, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_59530
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x50]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x2C],ecx
	xor ebp,ebp
	mov dword ptr [esp+0x58],ebp
	mov dword ptr [esp+0x24],ebp
	lea eax,[esp+0x20]
	push 0x1A05
	push eax
	mov byte ptr [esp+0x60],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov esi,dword ptr [esp+0x60]
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	mov byte ptr [esp+0x64],3
	call ZXString16::Format
	mov eax,dword ptr [esp+0x2C]
	add esp,0xC
	mov byte ptr [esp+0x58],2
	cmp eax,ebp
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov edx,dword ptr [esp+0x68]
	push ebp
	push 0xFF
	push 3
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x78]
	mov dword ptr [esp+0x70],esp
	cmp eax,ebp
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	push ebp
	push ebp
	push ecx
	mov ecx,dword ptr [esp+0x80]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x80]
	mov dword ptr [esp+0x7C],esp
	cmp eax,ebp
	je Block6

 Block5:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block6:
	mov ebx,dword ptr [esp+0x40]
	push ebp
	lea ecx,[esp+0x3C]
	push ebx
	push ecx
	call CAnimationDisplayer::LoadRandomLayer
	add esp,0x28
	mov dword ptr [esp+0x20],ebp
	lea edx,[esp+0x60]
	push 0x1A06
	push edx
	mov byte ptr [esp+0x60],5
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea eax,[esp+0x28]
	push eax
	mov byte ptr [esp+0x64],6
	call ZXString16::Format
	mov eax,dword ptr [esp+0x6C]
	add esp,0xC
	mov byte ptr [esp+0x58],5
	cmp eax,ebp
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block8:
	push ebp
	push 0xFF
	push 3
	push ecx
	mov ecx,dword ptr [esp+0x78]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x78]
	mov dword ptr [esp+0x70],esp
	cmp eax,ebp
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block10:
	push ebp
	push ebp
	push ecx
	mov ecx,dword ptr [esp+0x80]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x80]
	mov dword ptr [esp+0x7C],esp
	cmp eax,ebp
	je Block12

 Block11:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block12:
	mov edi,dword ptr [esp+0x3C]
	push ebp
	lea ecx,[esp+0x38]
	push edi
	push ecx
	call CAnimationDisplayer::LoadRandomLayer
	add esp,0x28
	mov dword ptr [esp+0x60],ebp
	lea edx,[esp+0x28]
	push 0x1A07
	push edx
	mov byte ptr [esp+0x60],8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea eax,[esp+0x68]
	push eax
	mov byte ptr [esp+0x64],9
	call ZXString16::Format
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov byte ptr [esp+0x58],8
	cmp eax,ebp
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block14:
	push ebp
	push 0xFF
	push 3
	push ecx
	mov ecx,dword ptr [esp+0x78]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x78]
	mov dword ptr [esp+0x38],esp
	cmp eax,ebp
	je Block16

 Block15:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block16:
	push ebp
	push ebp
	push ecx
	mov ecx,dword ptr [esp+0x80]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x80]
	mov dword ptr [esp+0x44],esp
	cmp eax,ebp
	je Block18

 Block17:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block18:
	mov esi,dword ptr [esp+0x7C]
	push ebp
	lea ecx,[esp+0x34]
	push esi
	push ecx
	call CAnimationDisplayer::LoadRandomLayer
	add esp,0x28
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0x14]
	cmp edx,ebp
	sete al
	mov byte ptr [esp+0x58],0xA
	test al,al
	jne Block53

 Block19:
	cmp dword ptr [esp+0x18],ebp
	sete al
	test al,al
	jne Block53

 Block20:
	cmp ecx,ebp
	sete al
	test al,al
	jne Block53

 Block21:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x40]
	push edx
	call esi
	lea eax,[esp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	lea ecx,[esp+0x30]
	mov bl,0xB
	push ecx
	mov byte ptr [esp+0x5C],bl
	call esi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x58],0xC
	cmp ecx,ebp
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea eax,[esp+0x40]
	push eax
	lea edx,[esp+0x34]
	push edx
	push ebp
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x58],bl
	cmp word ptr [esp+0x30],si
	jne Block30

 Block28:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebp
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea ecx,[esp+0x30]
	push ecx
	call edi

 Block31:
	mov byte ptr [esp+0x58],0xA
	cmp word ptr [esp+0x40],si
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	cmp eax,ebp
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea eax,[esp+0x40]
	push eax
	call edi

 Block35:
	mov ecx,dword ptr [esp+0x6C]
	mov edx,dword ptr [esp+0x14]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x74],esp
	cmp eax,ebp
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block37:
	push ecx
	mov ecx,dword ptr [esp+0x24]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x78],esp
	cmp eax,ebp
	je Block39

 Block38:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block39:
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x7C],esp
	cmp eax,ebp
	je Block41

 Block40:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block41:
	mov ecx,dword ptr [esp+0x3C]
	call CAnimationDisplayer::RegisterUserStateAnimation
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x58],8
	cmp eax,ebp
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block43:
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0x58],7
	cmp eax,ebp
	je Block45

 Block44:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block45:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x58],5
	cmp eax,ebp
	je Block47

 Block46:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block47:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x58],4
	cmp eax,ebp
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block49:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x58],2
	cmp eax,ebp
	je Block51

 Block50:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block51:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x58],1
	cmp eax,ebp
	je Block74

 Block52:
	add eax,0xFFFFFFF4
	push eax
	jmp Block73

 Block53:
	cmp edx,ebp
	je Block56

 Block54:
	mov eax,edx
	mov dword ptr [esp+0x1C],ebp
	cmp eax,ebp
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov ecx,dword ptr [esp+0x14]

 Block56:
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebp
	je Block58

 Block57:
	mov dword ptr [esp+0x18],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov ecx,dword ptr [esp+0x14]

 Block58:
	cmp ecx,ebp
	je Block61

 Block59:
	mov eax,ecx
	xor ecx,ecx
	mov dword ptr [esp+0x14],ecx
	cmp eax,ebp
	je Block61

 Block60:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov ecx,dword ptr [esp+0x14]

 Block61:
	mov byte ptr [esp+0x58],8
	cmp ecx,ebp
	je Block63

 Block62:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx

 Block63:
	mov byte ptr [esp+0x58],7
	cmp esi,ebp
	je Block65

 Block64:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block65:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x58],5
	cmp eax,ebp
	je Block67

 Block66:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block67:
	mov byte ptr [esp+0x58],4
	cmp edi,ebp
	je Block69

 Block68:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block69:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x58],2
	cmp eax,ebp
	je Block71

 Block70:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block71:
	mov byte ptr [esp+0x58],1
	cmp ebx,ebp
	je Block74

 Block72:
	add ebx,0xFFFFFFF4
	push ebx

 Block73:
	call ZXString16::_Release
	add esp,4

 Block74:
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0x58],0
	cmp eax,ebp
	je Block76

 Block75:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block76:
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	cmp eax,ebp
	je Block78

 Block77:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block78:
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret 0x10
}
}
// CAnimationDisplayer::MagicBullet::MagicBullet
_SUB_EXCEPTION_HANDLER(47910)
__SUB_CLASS_THIS(00047910, __thiscall, 18811,  CAnimationDisplayer::MagicBullet, void, long, long, NakedParam<tagPOINT>, NakedParam<tagPOINT>, NakedParam<_x_com_ptr<IWzVector2D>>, long, NakedParam<Ztl_bstr_t>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_47910
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x3C]
	push 0xC8
	push 0xC8
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x40]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x20],1
	mov dword ptr [esp+0x4C],esp
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [esp+0x38]
	mov eax,dword ptr [esp+0x34]
	push ecx
	mov ecx,dword ptr [esp+0x34]
	push edx
	mov edx,dword ptr [esp+0x34]
	push eax
	mov eax,dword ptr [esp+0x34]
	push ecx
	push edx
	push eax
	mov ecx,esi
	call CAfterImageBullet::_ctor_0
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [esi+0x44],ecx
	mov ecx,dword ptr [esp+0x38]
	int 3// TODO: 	mov dword ptr [esi],offset CAnimationDisplayer::MagicBullet::`vftable'
	mov dword ptr [esi+0x48],ecx
	test ecx,ecx
	je Block4

 Block3:
	add ecx,8
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x38]

 Block4:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x10],0
	test eax,eax
	je Block6

 Block5:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	mov ecx,dword ptr [esp+0x38]

 Block6:
	test ecx,ecx
	je Block8

 Block7:
	call _xbstr_t::Data_t::Release

 Block8:
	mov eax,esi
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 0x28
}
}
// CAnimationDisplayer::Effect_ItemUnrelease
_SUB_EXCEPTION_HANDLER(56360)
__SUB_CLASS_THIS(00056360, __thiscall, 18600,  CAnimationDisplayer, void, int32_t, NakedParam<_x_com_ptr<IWzVector2D>>, NakedParam<_x_com_ptr<IWzGr2DLayer>>) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56360
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x74
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x50],ecx
	xor edi,edi
	mov dword ptr [ebp-4],edi
	mov dword ptr [ebp-0x24],edi
	mov dword ptr [ebp-0x1C],edi
	lea eax,[ebp-0x18]
	push 0xD91
	push eax
	mov byte ptr [ebp-4],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp-0x1C]
	mov byte ptr [ebp-4],4
	call ZXString16::op_assign
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],3
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x60]
	push ecx
	call esi
	lea edx,[ebp-0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea eax,[ebp-0x70]
	push eax
	mov byte ptr [ebp-4],5
	call esi
	lea ecx,[ebp-0x70]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	push edi
	push edi
	lea edx,[ebp-0x60]
	push edx
	lea eax,[ebp-0x70]
	push eax
	push ecx
	mov dword ptr [ebp-0x28],esp
	mov ecx,esp
	mov bl,6
	push offset _S_EFFECTBASICEFFIM__16
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],7
	cmp dword ptr [_D_G_RM],edi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea ecx,[ebp-0x80]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ebx,8
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-0x18],edi
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
	mov esi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x80],bx
	jne Block14

 Block12:
	mov eax,dword ptr [ebp-0x78]
	xor edx,edx
	mov word ptr [ebp-0x80],dx
	cmp eax,edi
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea eax,[ebp-0x80]
	push eax
	call esi

 Block15:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp-0x70],bx
	jne Block18

 Block16:
	mov eax,dword ptr [ebp-0x68]
	xor ecx,ecx
	mov word ptr [ebp-0x70],cx
	cmp eax,edi
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea edx,[ebp-0x70]
	push edx
	call esi

 Block19:
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp-0x60],bx
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [ebp-0x60],ax
	mov eax,dword ptr [ebp-0x58]
	cmp eax,edi
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[ebp-0x60]
	push ecx
	call esi

 Block23:
	or esi,0xFFFFFFFF
	mov dword ptr [ebp-0x2C],esi
	mov bl,0xE
	cmp esi,edi

 Block24:
	jl Block26

 Block25:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push esi
	call __itow
	add esp,0xC
	mov esi,eax
	jmp Block27

 Block26:
	mov esi,offset _S___3

 Block27:
	lea edx,[ebp-0x28]
	push 0x3DA
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebp-0x1C]
	mov eax,dword ptr [eax]
	push esi
	push ecx
	push eax
	lea edx,[ebp-0x24]
	push edx
	mov byte ptr [ebp-4],0xD
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x28]
	add esp,0x10
	mov byte ptr [ebp-4],0xC
	cmp eax,edi
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block29:
	push edi
	push 0xFF
	push 3
	push ecx
	mov ecx,dword ptr [ebp+0x10]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x10]
	mov dword ptr [ebp-0x20],esp
	cmp eax,edi
	je Block31

 Block30:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block31:
	push edi
	push edi
	push ecx
	mov ecx,dword ptr [ebp+0xC]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [ebp-0x20],esp
	cmp eax,edi
	je Block33

 Block32:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block33:
	mov ecx,dword ptr [ebp+8]
	mov esi,dword ptr [ebp-0x24]
	push ecx
	lea edx,[ebp-0x14]
	push esi
	push edx
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	mov ecx,dword ptr [ebp-0x14]
	cmp ecx,edi
	sete al
	mov byte ptr [ebp-4],bl
	test al,al
	jne Block53

 Block34:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x3C]
	push eax
	call esi
	lea ecx,[ebp-0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block3

 Block35:
	lea edx,[ebp-0x4C]
	push edx
	mov byte ptr [ebp-4],0xF
	call esi
	lea eax,[ebp-0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block3

 Block36:
	mov ecx,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0x10
	cmp ecx,edi
	je Block7

 Block37:
	mov ebx,dword ptr [ebp-0x3C]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x38]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp-0x34]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [ebp-0x30]
	mov dword ptr [eax+0xC],ebx
	mov ebx,dword ptr [ebp-0x4C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x48]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp-0x44]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [ebp-0x40]
	push edi
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [edx+0x110]
	push ecx
	mov esi,ecx
	call eax
	cmp eax,edi
	jge Block39

 Block38:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block39:
	mov esi,8
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x4C],si
	jne Block42

 Block40:
	mov eax,dword ptr [ebp-0x44]
	xor ecx,ecx
	mov word ptr [ebp-0x4C],cx
	cmp eax,edi
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea edx,[ebp-0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block43:
	mov bl,0xE
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x3C],si
	jne Block46

 Block44:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	cmp eax,edi
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block47:
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x20],esp
	mov dword ptr [eax],edi
	mov edx,dword ptr [ebp-0x14]
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-0x20],esp
	cmp eax,edi
	je Block49

 Block48:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block49:
	mov ecx,dword ptr [ebp-0x50]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0xC
	cmp eax,edi
	je Block51

 Block50:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block51:
	mov esi,dword ptr [ebp-0x2C]
	inc esi
	cmp esi,edi
	mov dword ptr [ebp-0x2C],esi
	jle Block24

 Block52:
	mov esi,dword ptr [ebp-0x24]
	jmp Block55

 Block53:
	mov byte ptr [ebp-4],0xC
	cmp ecx,edi
	je Block55

 Block54:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx

 Block55:
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],3
	cmp eax,edi
	je Block57

 Block56:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block57:
	mov eax,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],2
	cmp eax,edi
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block59:
	mov byte ptr [ebp-4],1
	cmp esi,edi
	je Block61

 Block60:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block61:
	mov eax,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],0
	cmp eax,edi
	je Block63

 Block62:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block63:
	mov eax,dword ptr [ebp+0x10]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,edi
	je Block65

 Block64:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block65:
	lea esp,[ebp-0x90]
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
	ret 0xC
}
}
// CAnimationDisplayer::Effect_CashItemGachapon
_SUB_EXCEPTION_HANDLER(57F30)
__SUB_CLASS_THIS(00057F30, __thiscall, 18610,  CAnimationDisplayer, void, int32_t, NakedParam<_x_com_ptr<IWzVector2D>>, NakedParam<_x_com_ptr<IWzGr2DLayer>>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_57F30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x38]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x10],ecx
	mov dword ptr [esp+0x40],0
	mov dword ptr [esp+0xC],0
	cmp dword ptr [esp+0x54],0
	mov byte ptr [esp+0x40],2
	mov eax,offset _S_UIUIWINDOWIMGCAS__4
	jne Block2

 Block1:
	mov eax,offset _S_UIUIWINDOWIMGCAS__3

 Block2:
	push eax
	lea ecx,[esp+0x10]
	call ZXString16::AssignCStr
	push 0
	push 0xFF
	push 3
	push ecx
	mov ecx,dword ptr [esp+0x60]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x60]
	mov dword ptr [esp+0x24],esp
	test eax,eax
	je Block4

 Block3:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block4:
	push 0x1F
	push 2
	push ecx
	mov ecx,dword ptr [esp+0x68]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x30],esp
	test eax,eax
	je Block6

 Block5:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block6:
	mov ecx,dword ptr [esp+0x64]
	mov esi,dword ptr [esp+0x28]
	push ecx
	lea edx,[esp+0x74]
	push esi
	push edx
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	sete cl
	mov byte ptr [esp+0x40],3
	test cl,cl
	je Block11

 Block7:
	mov byte ptr [esp+0x40],2
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	mov byte ptr [esp+0x40],1
	test esi,esi
	je Block32

 Block10:
	add esi,0xFFFFFFF4
	push esi
	jmp Block31

 Block11:
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
	jge Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0x44],4
	call esi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	mov ecx,dword ptr [esp+0x54]
	mov byte ptr [esp+0x40],5
	test ecx,ecx
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x1C]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x40],4
	cmp word ptr [esp+0x18],si
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[esp+0x18]
	push edx
	call edi

 Block21:
	mov byte ptr [esp+0x40],3
	cmp word ptr [esp+0x28],si
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[esp+0x28]
	push ecx
	call edi

 Block25:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [eax],0
	mov edx,dword ptr [esp+0x58]
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x60]
	mov dword ptr [esp+0x54],esp
	test eax,eax
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block27:
	mov ecx,dword ptr [esp+0x1C]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x40],2
	test eax,eax
	je Block29

 Block28:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block29:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x40],1
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFF4
	push eax

 Block31:
	call ZXString16::_Release
	add esp,4

 Block32:
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x40],0
	test eax,eax
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test eax,eax
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block36:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x38
	ret 0x10
}
}
// TAnimation<CAnimationDisplayer::FIRECRACKER>::~TAnimation<CAnimationDisplayer::FIRECRACKER>
__SUB_CLASS_THIS0(000414E0, __thiscall, 19325,  TAnimation<CAnimationDisplayer::FIRECRACKER>, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::FIRECRACKER>::`vftable'
	jmp  ZList<CAnimationDisplayer::FIRECRACKER>::RemoveAll
}
}
// CAnimationDisplayer::RegisterFootHoldAnimation
_SUB_EXCEPTION_HANDLER(5A990)
__SUB_CLASS_THIS(0005A990, __thiscall, 18550,  CAnimationDisplayer, void, const wchar_t*, const tagRECT&, long, long, long, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A990
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x60]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x18],ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push eax
	call esi
	lea ecx,[esp+0x30]
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
	lea edx,[esp+0x20]
	push edx
	mov dword ptr [esp+0x6C],ebp
	call esi
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	mov eax,dword ptr [esp+0x70]
	push ebp
	push ebp
	lea ecx,[esp+0x38]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,1
	push eax
	mov byte ptr [esp+0x80],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x7C],2
	cmp dword ptr [_D_G_RM],ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x54]
	push ecx
	mov byte ptr [esp+0x80],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x70],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov edi,8
	mov byte ptr [esp+0x68],5
	cmp word ptr [esp+0x40],di
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	cmp eax,ebp
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [esp+0x68],6
	cmp word ptr [esp+0x20],di
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov bl,7
	mov byte ptr [esp+0x68],bl
	cmp word ptr [esp+0x30],di
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebp
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov esi,dword ptr [esp+0x14]
	cmp esi,ebp
	sete al
	test al,al
	je Block24

 Block22:
	mov dword ptr [esp+0x68],0xFFFFFFFF
	cmp esi,ebp
	je Block31

 Block23:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax
	jmp Block31

 Block24:
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0xB88
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x70],8
	cmp esi,ebp
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea edx,[esp+0x58]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x74],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x70],9
	call get_int32
	add esp,8
	mov ebp,eax
	mov byte ptr [esp+0x68],bl
	cmp word ptr [esp+0x50],di
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	call get_update_time
	mov ebx,dword ptr [esp+0x18]
	lea ecx,[ebx+0x190]
	mov edi,eax
	call ZList<CAnimationDisplayer::FOOTHOLDINFO>::AddTail_
	mov edx,dword ptr [esp+0x78]
	lea ecx,[edi+edx]
	mov edx,dword ptr [esp+0x7C]
	mov dword ptr [eax],ecx
	add ecx,edx
	mov edx,dword ptr [esp+0x84]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x80]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x88]
	push ecx
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [esp+0x78]
	push ebp
	add eax,0x10
	push eax
	mov eax,dword ptr [esp+0x7C]
	push edx
	push eax
	mov ecx,ebx
	call CAnimationDisplayer::MakeLayer_FootHold
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	call edx

 Block31:
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret 0x1C
}
}
// TAnimation<CAnimationDisplayer::ABSORBITEM>::Update
__SUB_CLASS_THIS(00041DA0, __thiscall, 19228,  TAnimation<CAnimationDisplayer::ABSORBITEM>, void, long) {
__asm {

 Block0:
	push ecx
	push ebx
	mov ebx,ecx
	mov eax,dword ptr [ebx+0xC]
	mov dword ptr [esp+4],eax
	test eax,eax
	je Block6

 Block1:
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]

 Block2:
	mov esi,eax
	lea eax,[esp+0xC]
	push eax
	call ZList<CAnimationDisplayer::ABSORBITEM>::GetNext
	add esp,4
	push edi
	mov ecx,eax
	call CAnimationDisplayer::ABSORBITEM::Update
	test eax,eax
	je Block4

 Block3:
	push esi
	mov ecx,ebx
	call ZList<CAnimationDisplayer::ABSORBITEM>::RemoveAt

 Block4:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	jne Block2

 Block5:
	pop edi
	pop esi

 Block6:
	pop ebx
	pop ecx
	ret 4
}
}
// CAnimationDisplayer::RemoveAllFadeInAnimation
__SUB_CLASS_THIS(00041550, __thiscall, 18559,  CAnimationDisplayer, void, long) {
__asm {

 Block0:
	push ebx
	push ebp
	mov ebp,dword ptr [ecx+0x13C]
	lea ebx,[ecx+0x134]
	push edi
	xor edi,edi
	test ebp,ebp
	jle Block7

 Block1:
	push esi

 Block2:
	push edi
	mov ecx,ebx
	call ZList<CAnimationDisplayer::FADEINFO>::FindIndex
	mov esi,eax
	cmp dword ptr [esi],0
	jne Block5

 Block3:
	call get_update_time
	cmp dword ptr [esi],eax
	jge Block5

 Block4:
	call get_update_time
	mov dword ptr [esi+4],eax
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esi+8],eax

 Block5:
	inc edi
	cmp edi,ebp
	jl Block2

 Block6:
	pop esi

 Block7:
	pop edi
	pop ebp
	pop ebx
	ret 4
}
}
// CAnimationDisplayer::Effect_Guard
_SUB_EXCEPTION_HANDLER(498E0)
__SUB_CLASS_THIS(000498E0, __thiscall, 18580,  CAnimationDisplayer, void, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_498E0
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
	mov ebp,ecx
	xor edi,edi
	xor ebx,ebx
	mov dword ptr [esp+0x14],edi
	mov eax,dword ptr [esp+0x44]
	sub eax,ebx
	mov dword ptr [esp+0x34],ebx
	je Block3

 Block1:
	sub eax,2
	jne Block20

 Block2:
	mov eax,dword ptr [ebp+0x1B4]
	jmp Block4

 Block3:
	mov eax,dword ptr [ebp+0x1A4]

 Block4:
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov edi,eax
	push eax
	mov dword ptr [esp+0x18],edi
	call edx

 Block6:
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x50],esp
	push 0x1918
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x40],1
	cmp edi,ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x44],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x3C],2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x48]
	mov dword ptr [esp+0x48],ebx
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
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],4
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	cmp eax,ebx
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov esi,dword ptr [esp+0x44]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [eax],esi
	cmp esi,ebx
	je Block17

 Block16:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block17:
	mov eax,dword ptr [esp+0x44]
	mov ecx,dword ptr [esp+0x40]
	push eax
	push ecx
	mov ecx,ebp
	call CAnimationDisplayer::Effect_BasicFloat
	mov byte ptr [esp+0x34],bl
	cmp esi,ebx
	je Block19

 Block18:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block19:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call edx

 Block20:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 0xC
}
}
// CAnimationDisplayer::MOTIONBLURINFO::~MOTIONBLURINFO
_SUB_EXCEPTION_HANDLER(43A60)
__SUB_CLASS_THIS0(00043A60, __thiscall, 18982,  CAnimationDisplayer::MOTIONBLURINFO, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43A60
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x10],edi
	mov eax,dword ptr [edi+0x1C]
	mov dword ptr [esp+0x1C],1
	test eax,eax
	je Block5

 Block1:
	lea esi,[eax-0x10]
	lea ebp,[esi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebp
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
	mov dword ptr [edi+0x1C],0

 Block5:
	lea ecx,[edi+8]
	mov byte ptr [esp+0x1C],0
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	mov edi,dword ptr [edi+4]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test edi,edi
	je Block7

 Block6:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block7:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x10
	ret
}
}
// CAnimationDisplayer::EXPLOSIONINFO::Update
_SUB_EXCEPTION_HANDLER(4DDF0)
__SUB_CLASS_THIS(0004DDF0, __thiscall, 18849,  CAnimationDisplayer::EXPLOSIONINFO, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4DDF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x4C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [esp+0x5C]
	mov eax,ecx
	sub eax,dword ptr [esi+0x24]
	test eax,eax
	jle Block2

 Block1:
	mov eax,1
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x48
	ret 4

 Block2:
	mov eax,dword ptr [esi+0x20]
	sub ecx,eax
	js Block32

 Block3:
	mov ecx,dword ptr [esi+0x18]
	mov edi,dword ptr [esi+8]
	mov ebp,dword ptr [esi+0x10]
	add ecx,eax
	mov eax,dword ptr [esi+0xC]
	sub edi,eax
	lea eax,[eax+eax*2]
	cdq
	and edx,3
	add eax,edx
	sar eax,2
	mov dword ptr [esi+0xC],eax
	mov eax,dword ptr [esi+0x14]
	sub ebp,eax
	lea eax,[eax+eax*2]
	cdq
	and edx,3
	add eax,edx
	sar eax,2
	cmp dword ptr [esi+0x1C],0
	mov dword ptr [esi+0x20],ecx
	mov dword ptr [esp+0x10],edi
	mov dword ptr [esi+0x14],eax
	mov dword ptr [esp+0x14],0
	jle Block32

 Block4:
	mov eax,ebp
	cdq
	sub eax,edx
	mov ecx,eax
	mov eax,edi
	cdq
	sar ecx,1
	sub eax,edx
	sar eax,1
	mov dword ptr [esp+0x18],ecx
	mov dword ptr [esp+0x1C],eax
	jmp Block6

 Block5:
	mov ecx,dword ptr [esp+0x18]

 Block6:
	push 0
	push 0xFF
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [eax],0
	mov edi,dword ptr [esi+4]
	sub edi,ecx
	mov ecx,offset _D_G_RAND
	mov dword ptr [esp+0x64],0
	call CRand32::Random
	test ebp,ebp
	je Block8

 Block7:
	xor edx,edx
	div ebp
	mov eax,edx
	add eax,edi

 Block8:
	mov edi,dword ptr [esi]
	sub edi,dword ptr [esp+0x2C]
	push eax
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	cmp dword ptr [esp+0x24],0
	je Block10

 Block9:
	xor edx,edx
	div dword ptr [esp+0x24]
	mov eax,edx
	add eax,edi

 Block10:
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],0
	mov eax,dword ptr [esi+0x28]
	mov byte ptr [esp+0x70],1
	push 0
	test eax,eax
	je Block13

 Block11:
	mov edi,dword ptr [eax-4]
	test edi,edi
	je Block13

 Block12:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	div edi
	mov eax,edx
	jmp Block14

 Block13:
	mov ecx,offset _D_G_RAND
	call CRand32::Random

 Block14:
	mov edx,dword ptr [esi+0x28]
	lea eax,[edx+eax*4]
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block16:
	lea eax,[esp+0x80]
	push eax
	mov dword ptr [esp+0x7C],0xFFFFFFFF
	call CAnimationDisplayer::LoadLayer_0
	add esp,0x28
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x3C]
	push ecx
	mov dword ptr [esp+0x58],2
	call edi
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block33

 Block17:
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x58],3
	call edi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block33

 Block18:
	mov ecx,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x54],4
	test ecx,ecx
	je Block34

 Block19:
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov edi,8
	mov byte ptr [esp+0x54],3
	cmp word ptr [esp+0x2C],di
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov byte ptr [esp+0x54],2
	cmp word ptr [esp+0x3C],di
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block27:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [eax],0
	mov edx,dword ptr [esp+0x60]
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x34],esp
	test eax,eax
	je Block29

 Block28:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block29:
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	test eax,eax
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block31:
	mov eax,dword ptr [esp+0x14]
	inc eax
	cmp eax,dword ptr [esi+0x1C]
	mov dword ptr [esp+0x14],eax
	jl Block5

 Block32:
	xor eax,eax
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x48
	ret 4

 Block33:
	push eax
	call _com_issue_error

 Block34:
	push 0x80004003
	call _com_issue_error
}
}
// CAnimationDisplayer::MobBullet::PrepareBulletLayer
_SUB_EXCEPTION_HANDLER(52CD0)
__SUB_CLASS_THIS(00052CD0, __thiscall, 19027,  CAnimationDisplayer::MobBullet, _x_com_ptr<IWzGr2DLayer>, NakedParam<_x_com_ptr<IWzVector2D>>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_52CD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xA4
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xB8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x28],esi
	xor ebp,ebp
	mov dword ptr [esp+0x18],ebp
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+4]
	lea ecx,[esp+0x94]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0xC4],ebp
	call edx
	mov eax,dword ptr [esi+0x44]
	push ebp
	push 0xFF
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push ebp
	mov dword ptr [eax],ebp
	push ebp
	push ecx
	mov ecx,dword ptr [esp+0xB0]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0xB0]
	mov byte ptr [esp+0xDC],1
	mov dword ptr [esp+0x34],esp
	cmp eax,ebp
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	mov eax,dword ptr [esi+0x58]
	cmp eax,ebp
	je Block4

 Block3:
	mov eax,dword ptr [eax]
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	push ebp
	push eax
	lea ecx,[esp+0x40]
	push ecx
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	mov ecx,dword ptr [esp+0x1C]
	cmp ecx,ebp
	sete al
	mov byte ptr [esp+0xC0],2
	test al,al
	je Block11

 Block6:
	mov esi,dword ptr [esp+0xC8]
	mov dword ptr [esi],ebp
	mov byte ptr [esp+0xC0],1
	cmp ecx,ebp
	je Block8

 Block7:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax

 Block8:
	mov eax,dword ptr [esp+0x94]
	mov byte ptr [esp+0xC0],0
	cmp eax,ebp
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esp+0xCC]
	cmp eax,ebp
	jmp Block265

 Block11:
	cmp dword ptr [esp+0xD0],ebp
	je Block76

 Block12:
	cmp ecx,ebp
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0xC0],3
	cmp esi,ebp
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x68]
	lea edx,[esp+0x20]
	push edx
	push esi
	mov dword ptr [esp+0x28],ebp
	call eax
	cmp eax,ebp
	jge Block18

 Block17:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block18:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xC0],2
	cmp eax,ebp
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	mov ecx,dword ptr [esp+0x1C]
	cmp ecx,ebp
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0xC0],4
	cmp esi,ebp
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x70]
	lea edx,[esp+0x70]
	push edx
	push esi
	mov dword ptr [esp+0x78],ebp
	call eax
	cmp eax,ebp
	jge Block26

 Block25:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block26:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xC0],2
	cmp eax,ebp
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block28:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push eax
	call esi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0xC4],5
	call esi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	mov ecx,dword ptr [esp+0x1C]
	mov bl,6
	mov byte ptr [esp+0xC0],bl
	cmp ecx,ebp
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::Getlt
	mov edi,eax
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xC0],7
	cmp eax,ebp
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x14]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0xB8]
	mov dword ptr [esp+0x1C],ebp
	call eax
	cmp eax,ebp
	jge Block38

 Block37:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block38:
	mov ecx,dword ptr [edi]
	cmp ecx,ebp
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	lea edx,[esp+0x3C]
	push edx
	mov edx,dword ptr [esp+0x74]
	lea eax,[esp+0x30]
	push eax
	mov eax,dword ptr [esp+0x28]
	push edx
	mov edx,dword ptr [esp+0x20]
	add edx,eax
	push edx
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xC0],bl
	cmp eax,ebp
	je Block42

 Block41:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block42:
	mov esi,8
	mov byte ptr [esp+0xC0],5
	cmp word ptr [esp+0x2C],si
	jne Block45

 Block43:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
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
	mov byte ptr [esp+0xC0],2
	cmp word ptr [esp+0x3C],si
	jne Block49

 Block47:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebp
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block50:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push ecx
	call esi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block52

 Block51:
	push eax
	call _com_issue_error

 Block52:
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0xC4],8
	call esi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block54

 Block53:
	push eax
	call _com_issue_error

 Block54:
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xC0],9
	cmp ecx,ebp
	jne Block56

 Block55:
	push 0x80004003
	call _com_issue_error

 Block56:
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::Getrb
	mov ebx,eax
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xC0],0xA
	cmp eax,ebp
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x14]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0xC0]
	mov dword ptr [esp+0x1C],ebp
	call eax
	cmp eax,ebp
	jge Block60

 Block59:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block60:
	mov eax,dword ptr [esp+0x1C]
	mov edi,dword ptr [esp+0x14]
	cmp eax,ebp
	jne Block62

 Block61:
	push 0x80004003
	call _com_issue_error

 Block62:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x20]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0xB8]
	mov dword ptr [esp+0x28],ebp
	call eax
	cmp eax,ebp
	jge Block64

 Block63:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block64:
	mov ecx,dword ptr [ebx]
	cmp ecx,ebp
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	lea edx,[esp+0x2C]
	push edx
	mov edx,dword ptr [esp+0x24]
	lea eax,[esp+0x40]
	push eax
	push edi
	neg edx
	push edx
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xC0],9
	cmp eax,ebp
	je Block68

 Block67:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block68:
	mov esi,8
	mov byte ptr [esp+0xC0],8
	cmp word ptr [esp+0x3C],si
	jne Block71

 Block69:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebp
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block72:
	mov byte ptr [esp+0xC0],2
	cmp word ptr [esp+0x2C],si
	jne Block75

 Block73:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,ebp
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block76:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push ecx
	call esi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block78

 Block77:
	push eax
	call _com_issue_error

 Block78:
	lea eax,[esp+0x3C]
	mov bl,0xB
	push eax
	mov byte ptr [esp+0xC4],bl
	call esi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block80

 Block79:
	push eax
	call _com_issue_error

 Block80:
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xC0],0xC
	cmp ecx,ebp
	jne Block82

 Block81:
	push 0x80004003
	call _com_issue_error

 Block82:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x40]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0xC0],bl
	cmp word ptr [esp+0x3C],si
	jne Block85

 Block83:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,ebp
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block86:
	mov byte ptr [esp+0xC0],2
	cmp word ptr [esp+0x2C],si
	jne Block89

 Block87:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block90:
	mov esi,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x18],esi
	cmp esi,ebp
	je Block92

 Block91:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block92:
	mov ebx,dword ptr [esp+0x28]
	mov edi,dword ptr [ebx+0x5C]
	mov byte ptr [esp+0xC0],0xD
	cmp edi,esi
	je Block97

 Block93:
	mov dword ptr [ebx+0x5C],esi
	cmp esi,ebp
	je Block95

 Block94:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block95:
	cmp edi,ebp
	je Block97

 Block96:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block97:
	mov byte ptr [esp+0xC0],2
	cmp esi,ebp
	je Block99

 Block98:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block99:
	mov esi,dword ptr [ebx+0x4C]
	cmp esi,ebp
	jne Block101

 Block100:
	push 0x80004003
	call _com_issue_error

 Block101:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x24]
	push edx
	push esi
	mov dword ptr [esp+0x2C],ebp
	call eax
	cmp eax,ebp
	jge Block103

 Block102:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block103:
	mov esi,dword ptr [ebx+0x4C]
	cmp esi,ebp
	jne Block105

 Block104:
	push 0x80004003
	call _com_issue_error

 Block105:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x70]
	push edx
	push esi
	mov dword ptr [esp+0x78],ebp
	call eax
	cmp eax,ebp
	jge Block107

 Block106:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block107:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block109

 Block108:
	push eax
	call _com_issue_error

 Block109:
	mov eax,3
	mov word ptr [esp+0x3C],ax
	mov dword ptr [esp+0x44],ebp
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xC0],0xF
	cmp ecx,ebp
	jne Block111

 Block110:
	push 0x80004003
	call _com_issue_error

 Block111:
	lea edx,[esp+0x2C]
	push edx
	mov edx,dword ptr [ebx+0x44]
	lea eax,[esp+0x40]
	push eax
	push edx
	push ebp
	push ebp
	push ebp
	push ebp
	lea eax,[esp+0x34]
	push eax
	call IWzGr2D::CreateLayer
	mov edi,8
	mov byte ptr [esp+0xC0],0x11
	cmp word ptr [esp+0x3C],di
	jne Block114

 Block112:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,ebp
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block115:
	mov byte ptr [esp+0xC0],0x12
	cmp word ptr [esp+0x2C],di
	jne Block118

 Block116:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block119:
	mov eax,dword ptr [esp+0xCC]
	mov esi,dword ptr [esp+0x18]
	cmp eax,ebp
	sete cl
	test cl,cl
	sete cl
	test cl,cl
	je Block128

 Block120:
	mov edx,0xD
	mov word ptr [esp+0x74],dx
	mov dword ptr [esp+0x7C],eax
	cmp eax,ebp
	je Block122

 Block121:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block122:
	mov byte ptr [esp+0xC0],0x13
	cmp esi,ebp
	jne Block124

 Block123:
	push 0x80004003
	call _com_issue_error

 Block124:
	lea eax,[esp+0x74]
	push eax
	mov ecx,esi
	call IWzVector2D::Putorigin
	mov byte ptr [esp+0xC0],0x12
	cmp word ptr [esp+0x74],di
	jne Block127

 Block125:
	mov eax,dword ptr [esp+0x7C]
	xor ecx,ecx
	mov word ptr [esp+0x74],cx
	cmp eax,ebp
	je Block128

 Block126:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block128

 Block127:
	lea edx,[esp+0x74]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block128:
	cmp esi,ebp
	jne Block130

 Block129:
	push 0x80004003
	call _com_issue_error

 Block130:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	cmp eax,ebp
	jge Block132

 Block131:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block132:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	jne Block134

 Block133:
	push 0x80004003
	call _com_issue_error

 Block134:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0xC0]
	lea ecx,[esp+0x14]
	push ecx
	push eax
	mov esi,eax
	mov dword ptr [esp+0x1C],ebp
	call edx
	cmp eax,ebp
	jge Block136

 Block135:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block136:
	mov eax,dword ptr [esp+0x1C]
	mov edi,dword ptr [esp+0x14]
	cmp eax,ebp
	jne Block138

 Block137:
	push 0x80004003
	call _com_issue_error

 Block138:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x20]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0xB8]
	mov dword ptr [esp+0x28],ebp
	call eax
	cmp eax,ebp
	jge Block140

 Block139:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block140:
	mov eax,edi
	cdq
	mov ecx,eax
	mov eax,dword ptr [esp+0x20]
	xor ecx,edx
	sub ecx,edx
	cdq
	xor eax,edx
	sub eax,edx
	cmp eax,ecx
	jl Block142

 Block141:
	mov eax,ecx

 Block142:
	mov ebp,dword ptr [esp+0x24]
	mov edi,dword ptr [esp+0x70]
	cmp edi,ebp
	mov esi,ebp
	jl Block144

 Block143:
	mov esi,edi

 Block144:
	test esi,esi
	jne Block146

 Block145:
	mov esi,eax

 Block146:
	imul eax,0xFFFFFFCE
	cdq
	idiv esi
	mov dword ptr [esp+0x6C],0
	mov esi,eax
	lea ecx,[esp+0x24]
	push 0x3D0
	push ecx
	mov byte ptr [esp+0xC8],0x14
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edx,[esp+0x70]
	push edx
	push eax
	mov byte ptr [esp+0xCC],0x15
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0xC0],0x14
	test eax,eax
	je Block148

 Block147:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block148:
	lea eax,[esp+0x84]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x84]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block150

 Block149:
	push eax
	call _com_issue_error

 Block150:
	lea edx,[esp+0x74]
	mov bl,0x16
	push edx
	mov byte ptr [esp+0xC4],bl
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x74]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block152

 Block151:
	push eax
	call _com_issue_error

 Block152:
	mov ecx,dword ptr [esp+0x6C]
	mov byte ptr [esp+0xC0],0x17
	test ecx,ecx
	jne Block154

 Block153:
	push 0x80004003
	call _com_issue_error

 Block154:
	lea edx,[esp+0x84]
	push edx
	lea eax,[esp+0x78]
	push eax
	push edi
	push ebp
	call IWzCanvas::Create
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0xC0],bl
	jne Block157

 Block155:
	mov eax,dword ptr [esp+0x7C]
	xor ecx,ecx
	mov word ptr [esp+0x74],cx
	test eax,eax
	je Block158

 Block156:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block158

 Block157:
	lea edx,[esp+0x74]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block158:
	mov ebx,8
	mov byte ptr [esp+0xC0],0x14
	cmp word ptr [esp+0x84],bx
	jne Block161

 Block159:
	xor eax,eax
	mov word ptr [esp+0x84],ax
	mov eax,dword ptr [esp+0x8C]
	test eax,eax
	je Block162

 Block160:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block162

 Block161:
	lea ecx,[esp+0x84]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block162:
	lea edx,[esp+0x84]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x84]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block164

 Block163:
	push eax
	call _com_issue_error

 Block164:
	mov ecx,dword ptr [esp+0x6C]
	mov edi,dword ptr [esp+0x28]
	mov eax,dword ptr [edi+0x4C]
	mov byte ptr [esp+0xC0],0x18
	test ecx,ecx
	jne Block166

 Block165:
	push 0x80004003
	call _com_issue_error

 Block166:
	lea edx,[esp+0x84]
	push edx
	push eax
	push 0
	push 0
	call IWzCanvas::Copy
	mov byte ptr [esp+0xC0],0x14
	cmp word ptr [esp+0x84],bx
	jne Block169

 Block167:
	xor eax,eax
	mov word ptr [esp+0x84],ax
	mov eax,dword ptr [esp+0x8C]
	test eax,eax
	je Block170

 Block168:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block170

 Block169:
	lea ecx,[esp+0x84]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block170:
	mov edx,3
	mov word ptr [esp+0x4C],dx
	mov dword ptr [esp+0x54],esi
	mov eax,edx
	mov word ptr [esp+0x5C],ax
	mov dword ptr [esp+0x64],esi
	mov ecx,edx
	mov eax,0xFF
	mov word ptr [esp+0x98],cx
	mov dword ptr [esp+0xA0],eax
	mov word ptr [esp+0x74],dx
	mov dword ptr [esp+0x7C],eax
	mov eax,dword ptr [edi+0x1C]
	sub eax,dword ptr [edi+0x18]
	mov word ptr [esp+0x84],cx
	mov dword ptr [esp+0x8C],eax
	mov ebp,dword ptr [esp+0x18]
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x60]
	push eax
	lea ecx,[esp+0xA0]
	push ecx
	mov ecx,dword ptr [esp+0x78]
	lea edx,[esp+0x80]
	push edx
	lea eax,[esp+0x94]
	push eax
	push ecx
	lea edx,[esp+0xC0]
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0xDC],0x1D
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0xA8],bx
	jne Block177

 Block171:
	xor eax,eax
	mov word ptr [esp+0xA8],ax
	mov eax,dword ptr [esp+0xB0]
	test eax,eax
	je Block173

 Block172:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block173:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block174:
	mov byte ptr [esp+0xC0],0x1C
	cmp word ptr [esp+0x84],bx
	jne Block178

 Block175:
	mov eax,dword ptr [esp+0x8C]
	xor edx,edx
	mov word ptr [esp+0x84],dx
	test eax,eax
	je Block179

 Block176:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block179

 Block177:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0xA8]
	push ecx
	call esi
	jmp Block174

 Block178:
	lea eax,[esp+0x84]
	push eax
	call esi

 Block179:
	mov byte ptr [esp+0xC0],0x1B
	cmp word ptr [esp+0x74],bx
	jne Block182

 Block180:
	mov eax,dword ptr [esp+0x7C]
	xor ecx,ecx
	mov word ptr [esp+0x74],cx
	test eax,eax
	je Block183

 Block181:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block183

 Block182:
	lea edx,[esp+0x74]
	push edx
	call esi

 Block183:
	mov byte ptr [esp+0xC0],0x1A
	cmp word ptr [esp+0x98],bx
	jne Block186

 Block184:
	xor eax,eax
	mov word ptr [esp+0x98],ax
	mov eax,dword ptr [esp+0xA0]
	test eax,eax
	je Block187

 Block185:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block187

 Block186:
	lea ecx,[esp+0x98]
	push ecx
	call esi

 Block187:
	mov byte ptr [esp+0xC0],0x19
	cmp word ptr [esp+0x5C],bx
	jne Block190

 Block188:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	test eax,eax
	je Block191

 Block189:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block191

 Block190:
	lea eax,[esp+0x5C]
	push eax
	call esi

 Block191:
	mov byte ptr [esp+0xC0],0x14
	cmp word ptr [esp+0x4C],bx
	jne Block194

 Block192:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block195

 Block193:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block195

 Block194:
	lea edx,[esp+0x4C]
	push edx
	call esi

 Block195:
	cmp dword ptr [esp+0xD0],0
	je Block246

 Block196:
	lea eax,[esp+0x28]
	push eax
	mov ecx,ebp
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	xor ebx,ebx
	mov byte ptr [esp+0xC0],0x1E
	cmp esi,ebx
	jne Block198

 Block197:
	push 0x80004003
	call _com_issue_error

 Block198:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x68]
	lea edx,[esp+0x24]
	push edx
	push esi
	mov dword ptr [esp+0x2C],ebx
	call eax
	cmp eax,ebx
	jge Block200

 Block199:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block200:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0xC0],0x14
	cmp eax,ebx
	je Block202

 Block201:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block202:
	lea eax,[esp+0x14]
	push eax
	mov ecx,ebp
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0xC0],0x1F
	cmp esi,ebx
	jne Block204

 Block203:
	push 0x80004003
	call _com_issue_error

 Block204:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x70]
	lea edx,[esp+0x28]
	push edx
	push esi
	mov dword ptr [esp+0x30],ebx
	call eax
	cmp eax,ebx
	jge Block206

 Block205:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block206:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xC0],0x14
	cmp eax,ebx
	je Block208

 Block207:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block208:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x5C]
	push eax
	call edi
	lea ecx,[esp+0x5C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block210

 Block209:
	push eax
	call _com_issue_error

 Block210:
	lea edx,[esp+0x4C]
	push edx
	mov byte ptr [esp+0xC4],0x20
	call edi
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block212

 Block211:
	push eax
	call _com_issue_error

 Block212:
	lea ecx,[esp+0x20]
	push ecx
	mov bl,0x21
	mov ecx,ebp
	mov byte ptr [esp+0xC4],bl
	call IWzGr2DLayer::Getlt
	mov esi,eax
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0xB8]
	lea eax,[esp+0x14]
	push eax
	push ebp
	mov byte ptr [esp+0xC8],0x22
	mov dword ptr [esp+0x1C],0
	call ecx
	test eax,eax
	jge Block214

 Block213:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebp
	push eax
	call _com_issue_errorex

 Block214:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	jne Block216

 Block215:
	push 0x80004003
	call _com_issue_error

 Block216:
	lea edx,[esp+0x5C]
	push edx
	mov edx,dword ptr [esp+0x2C]
	lea eax,[esp+0x50]
	push eax
	mov eax,dword ptr [esp+0x2C]
	push edx
	mov edx,dword ptr [esp+0x20]
	add edx,eax
	push edx
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0xC0],bl
	test eax,eax
	je Block218

 Block217:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block218:
	mov esi,8
	mov byte ptr [esp+0xC0],0x20
	cmp word ptr [esp+0x4C],si
	jne Block221

 Block219:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block222

 Block220:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block222

 Block221:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block222:
	mov byte ptr [esp+0xC0],0x14
	cmp word ptr [esp+0x5C],si
	jne Block225

 Block223:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	test eax,eax
	je Block226

 Block224:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block226

 Block225:
	lea eax,[esp+0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block226:
	lea ecx,[esp+0x5C]
	push ecx
	call edi
	lea edx,[esp+0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block228

 Block227:
	push eax
	call _com_issue_error

 Block228:
	lea eax,[esp+0x4C]
	push eax
	mov byte ptr [esp+0xC4],0x23
	call edi
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block230

 Block229:
	push eax
	call _com_issue_error

 Block230:
	lea edx,[esp+0x14]
	mov bl,0x24
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0xC4],bl
	call IWzGr2DLayer::Getrb
	mov edi,eax
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0xC0]
	lea ecx,[esp+0x28]
	push ecx
	push ebp
	mov byte ptr [esp+0xC8],0x25
	mov dword ptr [esp+0x30],0
	call edx
	test eax,eax
	jge Block232

 Block231:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebp
	push eax
	call _com_issue_errorex

 Block232:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0xB8]
	mov esi,dword ptr [esp+0x28]
	lea ecx,[esp+0x24]
	push ecx
	push ebp
	mov dword ptr [esp+0x2C],0
	call edx
	test eax,eax
	jge Block234

 Block233:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebp
	push eax
	call _com_issue_errorex

 Block234:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	jne Block236

 Block235:
	push 0x80004003
	call _com_issue_error

 Block236:
	lea eax,[esp+0x5C]
	push eax
	mov eax,dword ptr [esp+0x28]
	lea edx,[esp+0x50]
	push edx
	push esi
	neg eax
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xC0],bl
	test eax,eax
	je Block238

 Block237:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block238:
	mov esi,8
	mov byte ptr [esp+0xC0],0x23
	cmp word ptr [esp+0x4C],si
	jne Block241

 Block239:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block242

 Block240:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block242

 Block241:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block242:
	mov byte ptr [esp+0xC0],0x14
	cmp word ptr [esp+0x5C],si
	jne Block245

 Block243:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	test eax,eax
	je Block246

 Block244:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block246

 Block245:
	lea eax,[esp+0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block246:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x5C]
	push ecx
	call esi
	lea edx,[esp+0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block248

 Block247:
	push eax
	call _com_issue_error

 Block248:
	lea eax,[esp+0x4C]
	mov bl,0x26
	push eax
	mov byte ptr [esp+0xC4],bl
	call esi
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block250

 Block249:
	push eax
	call _com_issue_error

 Block250:
	lea edx,[esp+0x5C]
	push edx
	lea eax,[esp+0x50]
	push eax
	push 0x20
	mov ecx,ebp
	mov byte ptr [esp+0xCC],0x27
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0xC0],bl
	cmp word ptr [esp+0x4C],si
	jne Block253

 Block251:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block254

 Block252:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block254

 Block253:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block254:
	mov byte ptr [esp+0xC0],0x14
	cmp word ptr [esp+0x5C],si
	jne Block257

 Block255:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block258

 Block256:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block258

 Block257:
	lea ecx,[esp+0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block258:
	mov edx,dword ptr [ebp]
	mov esi,dword ptr [esp+0xC8]
	mov eax,dword ptr [edx+4]
	push ebp
	mov dword ptr [esi],ebp
	call eax
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0xC0],0x12
	test eax,eax
	je Block260

 Block259:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block260:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0xC4],2
	call ecx
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xC0],1
	test eax,eax
	je Block262

 Block261:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block262:
	mov eax,dword ptr [esp+0x94]
	mov byte ptr [esp+0xC0],0
	test eax,eax
	je Block264

 Block263:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block264:
	mov eax,dword ptr [esp+0xCC]
	test eax,eax

 Block265:
	mov dword ptr [esp+0xC0],0xFFFFFFFF
	je Block267

 Block266:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block267:
	mov eax,esi
	mov ecx,dword ptr [esp+0xB8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xB0
	ret 0xC
}
}
// CAnimationDisplayer::RegisterAbsorbItemAnimation
_SUB_EXCEPTION_HANDLER(446B0)
__SUB_CLASS_THIS(000446B0, __thiscall, 18539,  CAnimationDisplayer, void, unsigned long, unsigned long, NakedParam<tagPOINT>, NakedParam<_x_com_ptr<IWzGr2DLayer>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_446B0
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	sub ecx,0xFFFFFF80
	mov dword ptr [esp+0x14],0
	call ZList<CAnimationDisplayer::ABSORBITEM>::AddTail_
	mov ecx,dword ptr [esp+0x20]
	mov esi,eax
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esi],eax
	mov dword ptr [esi+4],ecx
	mov edx,dword ptr [esp+0x24]
	mov dword ptr [esi+8],edx
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esi+0xC],eax
	mov edi,dword ptr [esi+0x10]
	mov eax,dword ptr [esp+0x2C]
	cmp edi,eax
	je Block5

 Block1:
	mov dword ptr [esi+0x10],eax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	test edi,edi
	je Block5

 Block4:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block5:
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [esi+0x18],edx
	call get_update_time
	mov dword ptr [esi+0x14],eax
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 0x18
}
}
// CAnimationDisplayer::ONETIMEINFO::Update
_SUB_EXCEPTION_HANDLER(39370)
__SUB_CLASS_THIS(00039370, __thiscall, 18749,  CAnimationDisplayer::ONETIMEINFO, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_39370
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
	mov esi,ecx
	xor ebx,ebx
	cmp dword ptr [esi+4],ebx
	sete al
	cmp al,bl
	sete al
	cmp al,bl
	je Block18

 Block1:
	mov edi,dword ptr [esi+4]
	cmp edi,ebx
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xD4]
	lea ecx,[esp+0x14]
	push ecx
	push edi
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block5

 Block4:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block5:
	mov edi,dword ptr [esi]
	mov ebp,dword ptr [esp+0x14]
	cmp edi,ebx
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xD4]
	lea ecx,[esp+0x18]
	push ecx
	push edi
	mov dword ptr [esp+0x20],ebx
	call edx
	cmp eax,ebx
	jge Block9

 Block8:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block9:
	cmp ebp,dword ptr [esp+0x18]
	je Block18

 Block10:
	mov edi,dword ptr [esi+4]
	cmp edi,ebx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xD4]
	lea ecx,[esp+0x18]
	push ecx
	push edi
	mov dword ptr [esp+0x20],ebx
	call edx
	cmp eax,ebx
	jge Block14

 Block13:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block14:
	mov edi,dword ptr [esi]
	cmp edi,ebx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xD8]
	push ecx
	push edi
	call edx
	cmp eax,ebx
	jge Block18

 Block17:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block18:
	cmp dword ptr [esi+8],ebx
	je Block39

 Block19:
	add dword ptr [esi+0xC],0xFFFFFFE2
	jns Block38

 Block20:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push eax
	mov dword ptr [esi+8],ebx
	call edi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	lea edx,[esp+0x20]
	push edx
	mov dword ptr [esp+0x4C],ebx
	call edi
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block24

 Block23:
	push eax
	call _com_issue_error

 Block24:
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x48],1
	cmp ecx,ebx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	push ebx
	call IWzGr2DLayer::Animate
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [esp+0x48],bl
	cmp word ptr [esp+0x20],di
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebx
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[esp+0x20]
	push edx
	call ebp

 Block30:
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp word ptr [esp+0x30],di
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebx
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[esp+0x30]
	push ecx
	call ebp

 Block34:
	mov esi,dword ptr [esi]
	cmp esi,ebx
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	cmp eax,ebx
	jge Block38

 Block37:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block38:
	xor eax,eax
	jmp Block44

 Block39:
	mov esi,dword ptr [esi]
	cmp esi,ebx
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x114]
	lea edx,[esp+0x1C]
	push edx
	push esi
	mov dword ptr [esp+0x24],ebx
	call eax
	cmp eax,ebx
	jge Block43

 Block42:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block43:
	xor eax,eax
	cmp dword ptr [esp+0x1C],ebx
	sete al

 Block44:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x38
	ret 4
}
}
// TAnimation<CAnimationDisplayer::ONETIMEINFO>::~TAnimation<CAnimationDisplayer::ONETIMEINFO>
__SUB_CLASS_THIS0(00041450, __thiscall, 19154,  TAnimation<CAnimationDisplayer::ONETIMEINFO>, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::ONETIMEINFO>::`vftable'
	jmp  ZList<CAnimationDisplayer::ONETIMEINFO>::RemoveAll
}
}
// CAnimationDisplayer::Effect_Miss
_SUB_EXCEPTION_HANDLER(49A50)
__SUB_CLASS_THIS(00049A50, __thiscall, 18580,  CAnimationDisplayer, void, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_49A50
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
	mov ebp,ecx
	xor edi,edi
	xor ebx,ebx
	mov dword ptr [esp+0x14],edi
	mov eax,dword ptr [esp+0x44]
	sub eax,ebx
	mov dword ptr [esp+0x34],ebx
	je Block3

 Block1:
	sub eax,2
	jne Block20

 Block2:
	mov eax,dword ptr [ebp+0x1B4]
	jmp Block4

 Block3:
	mov eax,dword ptr [ebp+0x1A4]

 Block4:
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov edi,eax
	push eax
	mov dword ptr [esp+0x18],edi
	call edx

 Block6:
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x50],esp
	push 0x3EB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x40],1
	cmp edi,ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x44],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x3C],2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x48]
	mov dword ptr [esp+0x48],ebx
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
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],4
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	cmp eax,ebx
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov esi,dword ptr [esp+0x44]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [eax],esi
	cmp esi,ebx
	je Block17

 Block16:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block17:
	mov eax,dword ptr [esp+0x44]
	mov ecx,dword ptr [esp+0x40]
	push eax
	push ecx
	mov ecx,ebp
	call CAnimationDisplayer::Effect_BasicFloat
	mov byte ptr [esp+0x34],bl
	cmp esi,ebx
	je Block19

 Block18:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block19:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call edx

 Block20:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 0xC
}
}
// TAnimation<CAnimationDisplayer::FALLINGINFO>::~TAnimation<CAnimationDisplayer::FALLINGINFO>
__SUB_CLASS_THIS0(000414A0, __thiscall, 19249,  TAnimation<CAnimationDisplayer::FALLINGINFO>, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::FALLINGINFO>::`vftable'
	jmp  ZList<CAnimationDisplayer::FALLINGINFO>::RemoveAll
}
}
// CAnimationDisplayer::RegisterFadeInOutAnimation
_SUB_EXCEPTION_HANDLER(44770)
__SUB_CLASS_THIS(00044770, __thiscall, 18558,  CAnimationDisplayer, void, long, long, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_44770
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x64]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x20],ecx
	xor edi,edi
	mov dword ptr [esp+0x14],edi
	lea eax,[esp+0x18]
	push 0x3D0
	push eax
	mov dword ptr [esp+0x74],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea ecx,[esp+0x18]
	push ecx
	push eax
	mov byte ptr [esp+0x78],1
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x6C],0
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+0x14]
	cmp eax,edi
	sete cl
	test cl,cl
	je Block5

 Block3:
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	cmp eax,edi
	je Block86

 Block4:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block86

 Block5:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x34]
	push ecx
	call ebp
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	lea eax,[esp+0x24]
	mov bl,2
	push eax
	mov byte ptr [esp+0x70],bl
	call ebp
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x6C],3
	cmp ecx,edi
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push 0x300
	push 0x400
	call IWzCanvas::Create
	mov esi,8
	mov byte ptr [esp+0x6C],bl
	cmp word ptr [esp+0x24],si
	jne Block18

 Block12:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	cmp eax,edi
	je Block14

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block14:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block15:
	mov byte ptr [esp+0x6C],0
	cmp word ptr [esp+0x34],si
	jne Block19

 Block16:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,edi
	je Block20

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block18:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x24]
	push edx
	call ebx
	jmp Block15

 Block19:
	lea ecx,[esp+0x34]
	push ecx
	call ebx

 Block20:
	mov eax,dword ptr [esp+0x14]
	cmp eax,edi
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	mov edx,dword ptr [eax]
	push edi
	mov esi,eax
	push eax
	mov eax,dword ptr [edx+0x70]
	call eax
	cmp eax,edi
	jge Block24

 Block23:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block24:
	mov eax,dword ptr [esp+0x14]
	cmp eax,edi
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x78]
	push edi
	push eax
	mov esi,eax
	call edx
	cmp eax,edi
	jge Block28

 Block27:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block28:
	mov eax,dword ptr [esp+0x14]
	cmp eax,edi
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFF000000
	push 0x300
	push 0x400
	push edi
	push edi
	push eax
	mov esi,eax
	call edx
	cmp eax,edi
	jge Block32

 Block31:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block32:
	lea eax,[esp+0x24]
	push eax
	call ebp
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	mov eax,dword ptr [esp+0x14]
	mov edx,0xD
	mov byte ptr [esp+0x6C],4
	mov word ptr [esp+0x34],dx
	mov dword ptr [esp+0x3C],eax
	cmp eax,edi
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block36:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x6C],5
	cmp ecx,edi
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea eax,[esp+0x24]
	push eax
	mov eax,dword ptr [esp+0x84]
	lea edx,[esp+0x38]
	push edx
	push eax
	push edi
	push edi
	push 0xFFFFFE2C
	push 0xFFFFFE00
	lea edx,[esp+0x34]
	push edx
	call IWzGr2D::CreateLayer
	mov esi,8
	mov byte ptr [esp+0x6C],7
	cmp word ptr [esp+0x34],si
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,edi
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[esp+0x34]
	push ecx
	call ebx

 Block42:
	mov byte ptr [esp+0x6C],8
	cmp word ptr [esp+0x24],si
	jne Block45

 Block43:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	cmp eax,edi
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea eax,[esp+0x24]
	push eax
	call ebx

 Block46:
	mov esi,dword ptr [esp+0x18]
	cmp esi,edi
	sete al
	test al,al
	je Block50

 Block47:
	mov byte ptr [esp+0x6C],0
	cmp esi,edi
	je Block49

 Block48:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block49:
	mov eax,dword ptr [esp+0x14]
	cmp eax,edi
	jmp Block84

 Block50:
	cmp esi,edi
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFF
	push esi
	call ecx
	cmp eax,edi
	jge Block54

 Block53:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block54:
	mov ecx,dword ptr [_D_G_GR]
	cmp ecx,edi
	jne Block56

 Block55:
	push 0x80004003
	call _com_issue_error

 Block56:
	lea edx,[esp+0x80]
	push edx
	call IWzGr2D::Getcenter
	mov eax,dword ptr [eax]
	mov bl,9
	mov ecx,0xD
	mov byte ptr [esp+0x6C],bl
	mov word ptr [esp+0x44],cx
	mov dword ptr [esp+0x4C],eax
	cmp eax,edi
	je Block58

 Block57:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block58:
	lea ecx,[esp+0x44]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x70],0xA
	call IWzVector2D::Putorigin
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x6C],bl
	jne Block61

 Block59:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	cmp eax,edi
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block62:
	mov eax,dword ptr [esp+0x80]
	mov byte ptr [esp+0x6C],8
	cmp eax,edi
	je Block64

 Block63:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block64:
	lea eax,[esp+0x54]
	push eax
	call ebp
	lea ecx,[esp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block66

 Block65:
	push eax
	call _com_issue_error

 Block66:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x58]
	lea eax,[esp+0x80]
	push eax
	push esi
	mov byte ptr [esp+0x74],0xB
	mov dword ptr [esp+0x88],edi
	call ecx
	cmp eax,edi
	jge Block68

 Block67:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block68:
	mov edx,dword ptr [esp+0x80]
	mov eax,dword ptr [esp+0x74]
	add eax,edx
	mov ecx,3
	mov word ptr [esp+0x44],cx
	mov dword ptr [esp+0x4C],eax
	lea edx,[esp+0x1C]
	mov bl,0xC
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x70],bl
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x6C],0xD
	cmp ecx,edi
	jne Block70

 Block69:
	push 0x80004003
	call _com_issue_error

 Block70:
	lea eax,[esp+0x54]
	push eax
	mov eax,dword ptr [esp+0x88]
	lea edx,[esp+0x48]
	push edx
	push 0xFF
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x6C],bl
	cmp eax,edi
	je Block72

 Block71:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block72:
	mov ebx,8
	mov byte ptr [esp+0x6C],0xB
	cmp word ptr [esp+0x44],bx
	jne Block75

 Block73:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	cmp eax,edi
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block76:
	mov byte ptr [esp+0x6C],bl
	cmp word ptr [esp+0x54],bx
	jne Block79

 Block77:
	mov eax,dword ptr [esp+0x5C]
	xor edx,edx
	mov word ptr [esp+0x54],dx
	cmp eax,edi
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea eax,[esp+0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block80:
	call get_update_time
	mov ecx,dword ptr [esp+0x20]
	add ecx,0x134
	mov ebx,eax
	call ZList<CAnimationDisplayer::FADEINFO>::AddTail_
	mov edi,eax
	mov ebp,dword ptr [edi+0xC]
	cmp ebp,esi
	je Block83

 Block81:
	mov dword ptr [edi+0xC],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx
	test ebp,ebp
	je Block83

 Block82:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block83:
	mov edx,dword ptr [esp+0x74]
	mov eax,dword ptr [esp+0x7C]
	add ebx,edx
	add ebx,dword ptr [esp+0x78]
	mov dword ptr [edi],0
	mov dword ptr [edi+4],ebx
	mov dword ptr [edi+8],eax
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0x70],0
	call edx
	mov eax,dword ptr [esp+0x14]
	test eax,eax

 Block84:
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	je Block86

 Block85:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block86:
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x5C
	ret 0x14
}
}
// TAnimation<CAnimationDisplayer::REPEATINFO>::Update
__SUB_CLASS_THIS(00041D60, __thiscall, 19171,  TAnimation<CAnimationDisplayer::REPEATINFO>, void, long) {
__asm {

 Block0:
	push ecx
	push edi
	mov edi,ecx
	mov eax,dword ptr [edi+0xC]
	mov dword ptr [esp+4],eax
	test eax,eax
	je Block6

 Block1:
	push esi

 Block2:
	mov esi,eax
	lea eax,[esp+8]
	push eax
	call ZList<CAnimationDisplayer::REPEATINFO>::GetNext
	add esp,4
	add dword ptr [eax],0xFFFFFFE2
	jns Block4

 Block3:
	push esi
	mov ecx,edi
	call ZList<CAnimationDisplayer::REPEATINFO>::RemoveAt

 Block4:
	mov eax,dword ptr [esp+8]
	test eax,eax
	jne Block2

 Block5:
	pop esi

 Block6:
	pop edi
	pop ecx
	ret 4
}
}
// TAnimation<CAnimationDisplayer::USERSTATEINFO>::~TAnimation<CAnimationDisplayer::USERSTATEINFO>
__SUB_CLASS_THIS0(00041530, __thiscall, 19470,  TAnimation<CAnimationDisplayer::USERSTATEINFO>, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::USERSTATEINFO>::`vftable'
	jmp  ZList<CAnimationDisplayer::USERSTATEINFO>::RemoveAll
}
}
// CAnimationDisplayer::MobBullet::MobBullet
_SUB_EXCEPTION_HANDLER(489F0)
__SUB_CLASS_THIS(000489F0, __thiscall, 19024,  CAnimationDisplayer::MobBullet, void, long, long, NakedParam<tagPOINT>, NakedParam<tagPOINT>, NakedParam<_x_com_ptr<IWzVector2D>>, long, int32_t, NakedParam<_x_com_ptr<IWzCanvas>>, NakedParam<Ztl_bstr_t>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_489F0
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
	mov eax,dword ptr [esp+0x3C]
	push 0xC8
	push 0xC8
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x44]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x24],2
	mov dword ptr [esp+0x4C],esp
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x3C]
	mov eax,dword ptr [esp+0x38]
	mov edi,dword ptr [esp+0x2C]
	push ecx
	mov ecx,dword ptr [esp+0x38]
	push edx
	mov edx,dword ptr [esp+0x38]
	push eax
	push ecx
	push edx
	push edi
	mov ecx,esi
	call CAfterImageBullet::_ctor_0
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esi+0x44],eax
	mov eax,dword ptr [esp+0x40]
	int 3// TODO: 	mov dword ptr [esi],offset CAnimationDisplayer::MobBullet::`vftable'
	mov dword ptr [esi+0x4C],eax
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx
	mov eax,dword ptr [esp+0x40]

 Block4:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr [esi+0x50],edi
	mov dword ptr [esi+0x58],ecx
	test ecx,ecx
	je Block6

 Block5:
	add ecx,8
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x44]
	mov eax,dword ptr [esp+0x40]

 Block6:
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [esi+0x5C],0
	mov byte ptr [esp+0x14],1
	test edx,edx
	je Block8

 Block7:
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [eax+8]
	push edx
	call ecx
	mov ecx,dword ptr [esp+0x44]
	mov eax,dword ptr [esp+0x40]

 Block8:
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	mov ecx,dword ptr [esp+0x44]

 Block10:
	test ecx,ecx
	je Block12

 Block11:
	call _xbstr_t::Data_t::Release

 Block12:
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 0x2C
}
}
// CAfterImageBullet::CAfterImageBullet
_SUB_EXCEPTION_HANDLER(3B3B0)
__SUB_CLASS_THIS(0003B3B0, __thiscall, 18328,  CAfterImageBullet, void, long, long, NakedParam<tagPOINT>, NakedParam<tagPOINT>, NakedParam<_x_com_ptr<IWzVector2D>>, int32_t, unsigned long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B3B0
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
	push ecx
	mov ecx,dword ptr [esp+0x38]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x18],0
	mov dword ptr [esp+0xC],esp
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [esp+0x30]
	mov eax,dword ptr [esp+0x2C]
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	push edx
	mov edx,dword ptr [esp+0x2C]
	push eax
	mov eax,dword ptr [esp+0x2C]
	push ecx
	push edx
	push eax
	mov ecx,esi
	call CBullet::_ctor_0
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [esi+0x40],eax
	mov eax,dword ptr [esp+0x34]
	int 3// TODO: 	mov dword ptr [esi],offset CAfterImageBullet::`vftable'
	mov dword ptr [esi+0x34],ecx
	mov dword ptr [esi+0x38],edx
	mov dword ptr [esi+0x3C],0
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 0x28
}
}
// CAnimationDisplayer::RegisterFollowAnimation
_SUB_EXCEPTION_HANDLER(5AC50)
__SUB_CLASS_THIS(0005AC50, __thiscall, 18554,  CAnimationDisplayer, ZRef<AnimationState>*, ZRef<AnimationState>*, const CAnimationDisplayer::FOLLOWINFO&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5AC50
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
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov edi,dword ptr [esp+0x28]
	mov ecx,edi
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [edi+4],ebx
	call ZRef<AnimationState>::_Alloc
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x14],1
	call get_update_time
	lea ecx,[esi+0x10C]
	mov ebp,eax
	call ZList<CAnimationDisplayer::FOLLOWINFO>::AddTail_
	mov esi,eax
	mov eax,dword ptr [esp+0x2C]
	push eax
	mov ecx,esi
	call CAnimationDisplayer::FOLLOWINFO::operator=
	push edi
	lea ecx,[esi+0x58]
	mov dword ptr [esi+0x4C],ebp
	call ZRef<AnimationState>::op_assign_copy
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,0x168
	div ecx
	mov dword ptr [esi+0x54],ebx
	mov eax,edi
	mov dword ptr [esi+0x50],edx
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8
}
}
// CAnimationDisplayer::Effect_ItemUpgrade
_SUB_EXCEPTION_HANDLER(567F0)
__SUB_CLASS_THIS(000567F0, __thiscall, 18602,  CAnimationDisplayer, void, int32_t, NakedParam<_x_com_ptr<IWzVector2D>>, NakedParam<_x_com_ptr<IWzGr2DLayer>>, int32_t, int32_t) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x64]
	sub esp,0x64
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_567F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x80
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x60],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x10],ecx
	xor esi,esi
	mov dword ptr [ebp+0x5C],esi
	mov dword ptr [ebp-4],esi
	mov dword ptr [ebp+0x4C],esi
	mov dword ptr [ebp+0x50],esi
	mov byte ptr [ebp-4],3
	cmp dword ptr [ebp+0x78],esi
	je Block2

 Block1:
	lea eax,[ebp+0x58]
	push 0xD91
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [ebp-4],4
	lea ebx,[esi+1]
	jmp Block3

 Block2:
	lea ecx,[ebp+0x54]
	push 0xD92
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [ebp-4],5
	mov ebx,2

 Block3:
	push eax
	lea ecx,[ebp+0x50]
	mov dword ptr [ebp+0x5C],ebx
	call ZXString16::op_assign
	mov dword ptr [ebp-4],4
	test bl,2
	je Block6

 Block4:
	mov eax,dword ptr [ebp+0x54]
	and ebx,0xFFFFFFFD
	mov dword ptr [ebp+0x5C],ebx
	cmp eax,esi
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	mov dword ptr [ebp-4],3
	test bl,1
	je Block9

 Block7:
	mov eax,dword ptr [ebp+0x58]
	cmp eax,esi
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block9:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x5C]
	push edx
	call edi
	lea eax,[ebp-0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	lea ecx,[ebp-0x3C]
	push ecx
	mov byte ptr [ebp-4],6
	call edi
	lea edx,[ebp-0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	push esi
	push esi
	lea eax,[ebp-0x5C]
	push eax
	lea ecx,[ebp-0x3C]
	push ecx
	push ecx
	mov dword ptr [ebp+0x44],esp
	mov ecx,esp
	mov bl,7
	push offset _S_EFFECTBASICEFFIM__16
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],8
	cmp dword ptr [_D_G_RM],esi
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea edx,[ebp-0x7C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x48]
	mov dword ptr [ebp+0x48],esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block18

 Block16:
	cmp eax,0x80004002
	je Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	cmp word ptr [ebp-0x7C],8
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],0xB
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [ebp-0x7C],ax
	mov eax,dword ptr [ebp-0x74]
	cmp eax,esi
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[ebp-0x7C]
	push ecx
	call ebx

 Block22:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0xC
	jne Block25

 Block23:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	cmp eax,esi
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[ebp-0x3C]
	push eax
	call ebx

 Block26:
	cmp word ptr [ebp-0x5C],8
	mov bl,0xD
	mov byte ptr [ebp-4],bl
	jne Block29

 Block27:
	mov eax,dword ptr [ebp-0x54]
	xor ecx,ecx
	mov word ptr [ebp-0x5C],cx
	cmp eax,esi
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[ebp-0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	or esi,0xFFFFFFFF
	mov dword ptr [ebp+0x54],esi
	test esi,esi

 Block31:
	jl Block33

 Block32:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push esi
	call __itow
	add esp,0xC
	mov esi,eax
	jmp Block34

 Block33:
	mov esi,offset _S___3

 Block34:
	lea eax,[ebp+0x44]
	push 0x3DA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebp+0x50]
	mov eax,dword ptr [eax]
	push esi
	push ecx
	push eax
	lea edx,[ebp+0x4C]
	push edx
	mov byte ptr [ebp-4],0xE
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x44]
	add esp,0x10
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block36:
	push 0
	push 0xFF
	push 3
	push ecx
	mov ecx,dword ptr [ebp+0x74]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x74]
	mov dword ptr [ebp+0x58],esp
	test eax,eax
	je Block38

 Block37:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block38:
	push 0
	push 0
	push ecx
	mov ecx,dword ptr [ebp+0x70]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x70]
	mov dword ptr [ebp+0x58],esp
	test eax,eax
	je Block40

 Block39:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block40:
	mov ecx,dword ptr [ebp+0x6C]
	mov esi,dword ptr [ebp+0x4C]
	push ecx
	lea edx,[ebp+0x5C]
	push esi
	push edx
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	mov eax,dword ptr [ebp+0x5C]
	test eax,eax
	sete cl
	mov byte ptr [ebp-4],0xF
	test cl,cl
	jne Block102

 Block41:
	cmp dword ptr [ebp+0x7C],0
	je Block83

 Block42:
	test eax,eax
	je Block14

 Block43:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x58]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x1C]
	mov dword ptr [ebp+0x58],0
	call eax
	test eax,eax
	jge Block45

 Block44:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block45:
	lea ecx,[ebp-0x4C]
	push ecx
	call edi
	lea edx,[ebp-0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block10

 Block46:
	lea eax,[ebp-0x2C]
	push eax
	mov byte ptr [ebp-4],0x10
	call edi
	lea ecx,[ebp-0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block10

 Block47:
	lea edx,[ebp-0x1C]
	push edx
	mov byte ptr [ebp-4],0x11
	call edi
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block10

 Block48:
	lea ecx,[ebp-0x6C]
	push ecx
	mov byte ptr [ebp-4],0x12
	call edi
	lea edx,[ebp-0x6C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block10

 Block49:
	mov eax,3
	mov word ptr [ebp],ax
	mov dword ptr [ebp+8],0xC30
	mov ecx,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x14
	test ecx,ecx
	je Block14

 Block50:
	lea edx,[ebp-0x4C]
	push edx
	lea eax,[ebp-0x2C]
	push eax
	lea edx,[ebp-0x1C]
	push edx
	lea eax,[ebp-0x6C]
	push eax
	mov eax,dword ptr [ebp+0x48]
	lea edx,[ebp]
	push edx
	push eax
	lea edx,[ebp-0x8C]
	push edx
	call IWzGr2DLayer::InsertCanvas
	mov edi,8
	cmp word ptr [ebp-0x8C],di
	jne Block57

 Block51:
	xor eax,eax
	mov word ptr [ebp-0x8C],ax
	mov eax,dword ptr [ebp-0x84]
	test eax,eax
	je Block53

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block53:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block54:
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp],di
	jne Block58

 Block55:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block59

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block57:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x8C]
	push ecx
	call esi
	jmp Block54

 Block58:
	lea eax,[ebp]
	push eax
	call esi

 Block59:
	mov byte ptr [ebp-4],0x12
	cmp word ptr [ebp-0x6C],di
	jne Block62

 Block60:
	mov eax,dword ptr [ebp-0x64]
	xor ecx,ecx
	mov word ptr [ebp-0x6C],cx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea edx,[ebp-0x6C]
	push edx
	call esi

 Block63:
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp-0x1C],di
	jne Block66

 Block64:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea ecx,[ebp-0x1C]
	push ecx
	call esi

 Block67:
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp-0x2C],di
	jne Block70

 Block68:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea eax,[ebp-0x2C]
	push eax
	call esi

 Block71:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x4C],di
	jne Block74

 Block72:
	mov eax,dword ptr [ebp-0x44]
	xor ecx,ecx
	mov word ptr [ebp-0x4C],cx
	test eax,eax
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea edx,[ebp-0x4C]
	push edx
	call esi

 Block75:
	mov edx,dword ptr [ebp+0x58]
	mov eax,3
	mov word ptr [ebp+0x14],ax
	mov dword ptr [ebp+0x1C],edx
	mov ecx,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x15
	test ecx,ecx
	je Block14

 Block76:
	mov ebx,dword ptr [ebp+0x14]
	mov edi,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp+0x18]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x20]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [edi+0x10C]
	push ecx
	mov esi,ecx
	call eax
	test eax,eax
	jge Block78

 Block77:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block78:
	cmp word ptr [ebp+0x14],8
	mov byte ptr [ebp-4],0xF
	jne Block81

 Block79:
	mov eax,dword ptr [ebp+0x1C]
	xor ecx,ecx
	mov word ptr [ebp+0x14],cx
	test eax,eax
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea edx,[ebp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block82:
	mov edi,dword ptr [ZImports::_VariantInit]

 Block83:
	lea eax,[ebp+0x34]
	push eax
	call edi
	lea ecx,[ebp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block10

 Block84:
	lea edx,[ebp+0x24]
	push edx
	mov byte ptr [ebp-4],0x16
	call edi
	lea eax,[ebp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block10

 Block85:
	mov ecx,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x17
	test ecx,ecx
	je Block14

 Block86:
	mov ebx,dword ptr [ebp+0x34]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp+0x38]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp+0x3C]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [ebp+0x40]
	mov dword ptr [eax+0xC],ebx
	mov ebx,dword ptr [ebp+0x24]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp+0x28]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp+0x2C]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [ebp+0x30]
	push 0
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [edx+0x110]
	push ecx
	mov esi,ecx
	call eax
	test eax,eax
	jge Block88

 Block87:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block88:
	mov esi,8
	mov byte ptr [ebp-4],0x16
	cmp word ptr [ebp+0x24],si
	jne Block91

 Block89:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	test eax,eax
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea edx,[ebp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block92:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp+0x34],si
	jne Block95

 Block93:
	xor eax,eax
	mov word ptr [ebp+0x34],ax
	mov eax,dword ptr [ebp+0x3C]
	test eax,eax
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea ecx,[ebp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	mov dword ptr [eax],0
	mov edx,dword ptr [ebp+0x5C]
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp+0x5C]
	mov dword ptr [ebp+0x58],esp
	test eax,eax
	je Block98

 Block97:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block98:
	mov ecx,dword ptr [ebp+0x10]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov eax,dword ptr [ebp+0x5C]
	mov bl,0xD
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block100

 Block99:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block100:
	mov esi,dword ptr [ebp+0x54]
	inc esi
	mov dword ptr [ebp+0x54],esi
	test esi,esi
	jle Block31

 Block101:
	mov esi,dword ptr [ebp+0x4C]
	jmp Block104

 Block102:
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block104

 Block103:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block104:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block106

 Block105:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block106:
	mov eax,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block108

 Block107:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block108:
	mov byte ptr [ebp-4],1
	test esi,esi
	je Block110

 Block109:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block110:
	mov eax,dword ptr [ebp+0x70]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block112

 Block111:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block112:
	mov eax,dword ptr [ebp+0x74]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block114

 Block113:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block114:
	lea esp,[ebp-0x9C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x60]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x64
	mov esp,ebp
	pop ebp
	ret 0x14
}
}
// CAnimationDisplayer::Effect_ItemMake
_SUB_EXCEPTION_HANDLER(56F80)
__SUB_CLASS_THIS(00056F80, __thiscall, 18604,  CAnimationDisplayer, void, int32_t, NakedParam<_x_com_ptr<IWzVector2D>>, NakedParam<_x_com_ptr<IWzGr2DLayer>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56F80
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x38]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x10],ecx
	mov dword ptr [esp+0x40],0
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block2

 Block1:
	cmp eax,1
	jne Block34

 Block2:
	mov dword ptr [esp+0xC],0
	test eax,eax
	mov byte ptr [esp+0x40],2
	mov eax,offset _S_EFFECTBASICEFFIM__18
	je Block4

 Block3:
	mov eax,offset _S_EFFECTBASICEFFIM__17

 Block4:
	push eax
	lea ecx,[esp+0x10]
	call ZXString16::AssignCStr
	push 0
	push 0xFF
	push 3
	push ecx
	mov ecx,dword ptr [esp+0x60]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x60]
	mov dword ptr [esp+0x24],esp
	test eax,eax
	je Block6

 Block5:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block6:
	push 0
	push 0
	push ecx
	mov ecx,dword ptr [esp+0x68]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x30],esp
	test eax,eax
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block8:
	mov ecx,dword ptr [esp+0x64]
	mov esi,dword ptr [esp+0x28]
	push ecx
	lea edx,[esp+0x74]
	push esi
	push edx
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	sete cl
	mov byte ptr [esp+0x40],3
	test cl,cl
	je Block13

 Block9:
	mov byte ptr [esp+0x40],2
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov byte ptr [esp+0x40],1
	test esi,esi
	je Block34

 Block12:
	add esi,0xFFFFFFF4
	push esi
	jmp Block33

 Block13:
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
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0x44],4
	call esi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	mov ecx,dword ptr [esp+0x54]
	mov byte ptr [esp+0x40],5
	test ecx,ecx
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x1C]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x40],4
	cmp word ptr [esp+0x18],si
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea edx,[esp+0x18]
	push edx
	call edi

 Block23:
	mov byte ptr [esp+0x40],3
	cmp word ptr [esp+0x28],si
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea ecx,[esp+0x28]
	push ecx
	call edi

 Block27:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [eax],0
	mov edx,dword ptr [esp+0x58]
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x60]
	mov dword ptr [esp+0x54],esp
	test eax,eax
	je Block29

 Block28:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block29:
	mov ecx,dword ptr [esp+0x1C]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x40],2
	test eax,eax
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block31:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x40],1
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFF4
	push eax

 Block33:
	call ZXString16::_Release
	add esp,4

 Block34:
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x40],0
	test eax,eax
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block36:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test eax,eax
	je Block38

 Block37:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block38:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x38
	ret 0x10
}
}
// CAnimationDisplayer::RegisterRepeatAnimation
_SUB_EXCEPTION_HANDLER(44620)
__SUB_CLASS_THIS(00044620, __thiscall, 18533,  CAnimationDisplayer, void, NakedParam<_x_com_ptr<IWzGr2DLayer>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_44620
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	add ecx,0x44
	mov dword ptr [esp+0x10],0
	call ZList<CAnimationDisplayer::REPEATINFO>::AddTail_
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax],ecx
	mov esi,dword ptr [eax+4]
	mov ecx,dword ptr [esp+0x18]
	cmp esi,ecx
	je Block5

 Block1:
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x18]
	test ecx,ecx
	je Block3

 Block2:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	push ecx
	call eax
	mov ecx,dword ptr [esp+0x18]

 Block3:
	test esi,esi
	je Block5

 Block4:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx
	mov ecx,dword ptr [esp+0x18]

 Block5:
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test ecx,ecx
	je Block7

 Block6:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx

 Block7:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 8
}
}
// CAnimationDisplayer::RegisterUserStateAnimation
_SUB_EXCEPTION_HANDLER(44D30)
__SUB_CLASS_THIS(00044D30, __thiscall, 18575,  CAnimationDisplayer, void, NakedParam<_x_com_ptr<IWzGr2DLayer>>, NakedParam<_x_com_ptr<IWzGr2DLayer>>, NakedParam<_x_com_ptr<IWzGr2DLayer>>, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_44D30
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	add ecx,0x160
	mov dword ptr [esp+0x14],2
	call ZList<CAnimationDisplayer::USERSTATEINFO>::AddTail_
	mov esi,eax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFF
	push eax
	mov edi,eax
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block4:
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFF
	push eax
	mov edi,eax
	call edx
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block8:
	mov edi,dword ptr [esi]
	mov eax,dword ptr [esp+0x1C]
	cmp edi,eax
	je Block13

 Block9:
	mov dword ptr [esi],eax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block11:
	test edi,edi
	je Block13

 Block12:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block13:
	mov edi,dword ptr [esi+4]
	mov eax,dword ptr [esp+0x20]
	cmp edi,eax
	je Block18

 Block14:
	mov dword ptr [esi+4],eax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block16

 Block15:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block16:
	test edi,edi
	je Block18

 Block17:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block18:
	mov edi,dword ptr [esi+8]
	mov eax,dword ptr [esp+0x24]
	cmp edi,eax
	je Block23

 Block19:
	mov dword ptr [esi+8],eax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block21:
	test edi,edi
	je Block23

 Block22:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block23:
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [esi+0xC],edx
	mov dword ptr [esi+0x10],0
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block25:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block27:
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block29

 Block28:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block29:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 0x10
}
}
// CAnimationDisplayer::FOOTHOLDINFO::Update
_SUB_EXCEPTION_HANDLER(47A30)
__SUB_CLASS_THIS(00047A30, __thiscall, 18919,  CAnimationDisplayer::FOOTHOLDINFO, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_47A30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x64]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x18],ebx
	mov eax,dword ptr [ebx+0x10]
	xor ebp,ebp
	cmp eax,ebp
	jne Block2

 Block1:
	xor ecx,ecx
	mov dword ptr [esp+0x14],ecx
	jmp Block3

 Block2:
	mov eax,dword ptr [eax-4]
	mov dword ptr [esp+0x14],eax
	mov ecx,eax

 Block3:
	mov esi,dword ptr [esp+0x74]
	mov edx,esi
	sub edx,dword ptr [ebx+4]
	test edx,edx
	jle Block29

 Block4:
	cmp ecx,ebp
	jle Block26

 Block5:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block27

 Block6:
	mov eax,dword ptr [ebx+0x10]
	lea edi,[ebp*4]
	mov esi,dword ptr [eax+edi]
	add eax,edi
	mov dword ptr [esp+0x6C],0
	test esi,esi
	je Block28

 Block7:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x58]
	lea eax,[esp+0x74]
	push eax
	push esi
	mov dword ptr [esp+0x7C],0
	call ecx
	test eax,eax
	jge Block9

 Block8:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block9:
	mov eax,dword ptr [esp+0x74]
	add eax,0x1F4
	mov edx,3
	mov word ptr [esp+0x24],dx
	mov dword ptr [esp+0x2C],eax
	mov eax,dword ptr [ebx+0x10]
	add eax,edi
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x6C],1
	test eax,eax
	je Block28

 Block10:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,eax
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x6C],2
	test esi,esi
	je Block28

 Block11:
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x90]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr [eax+0xC],ecx
	mov ecx,dword ptr [esp+0x34]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x4C]
	push 0
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x54]
	push 0
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block13

 Block12:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block13:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x6C],1
	test eax,eax
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block15:
	mov esi,8
	mov byte ptr [esp+0x6C],0
	cmp word ptr [esp+0x24],si
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	cmp word ptr [esp+0x34],si
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov edx,dword ptr [ebx+0x10]
	mov eax,dword ptr [edi+edx]
	push 0x1F4
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x7C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block25:
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterRepeatAnimation
	inc ebp
	cmp ebp,dword ptr [esp+0x14]
	jl Block5

 Block26:
	mov eax,1
	jmp Block64

 Block27:
	push eax
	call _com_issue_error

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	mov eax,dword ptr [ebx]
	cmp eax,ebp
	je Block63

 Block30:
	mov edx,esi
	sub edx,eax
	test edx,edx
	jle Block63

 Block31:
	cmp ecx,ebp
	mov dword ptr [esp+0x1C],ebp
	jle Block62

 Block32:
	jmp Block34

 Block33:
	mov esi,dword ptr [esp+0x74]

 Block34:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block27

 Block35:
	mov ecx,offset _D_G_RAND
	mov dword ptr [esp+0x6C],3
	call CRand32::Random
	xor edx,edx
	mov ecx,5
	div ecx
	mov eax,3
	mov word ptr [esp+0x34],ax
	inc edx
	imul edx,0x64
	add edx,esi
	mov dword ptr [esp+0x3C],edx
	mov ebp,dword ptr [esp+0x1C]
	mov eax,dword ptr [ebx+0x10]
	add ebp,ebp
	add ebp,ebp
	add eax,ebp
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x6C],4
	test eax,eax
	je Block28

 Block36:
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,eax
	call IWzGr2DLayer::Getalpha
	mov ebx,eax
	mov eax,dword ptr [esp+0x18]
	mov edi,dword ptr [eax+8]
	mov esi,dword ptr [eax+0xC]
	mov ecx,offset _D_G_RAND
	mov byte ptr [esp+0x6C],5
	sub esi,edi
	call CRand32::Random
	add esi,1
	je Block38

 Block37:
	xor edx,edx
	div esi
	mov eax,edx
	add eax,edi

 Block38:
	mov ecx,dword ptr [ebx]
	test ecx,ecx
	je Block28

 Block39:
	lea edx,[esp+0x24]
	push edx
	lea edx,[esp+0x38]
	push edx
	push 0
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x6C],4
	test eax,eax
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block41:
	mov esi,8
	mov byte ptr [esp+0x6C],3
	cmp word ptr [esp+0x34],si
	jne Block48

 Block42:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block44

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block44:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block45:
	or ebx,0xFFFFFFFF
	mov dword ptr [esp+0x6C],ebx
	cmp word ptr [esp+0x24],si
	jne Block49

 Block46:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block50

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block48:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x34]
	push ecx
	call edi
	jmp Block45

 Block49:
	lea eax,[esp+0x24]
	push eax
	call edi

 Block50:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x54]
	push ecx
	call esi
	lea edx,[esp+0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block27

 Block51:
	lea eax,[esp+0x44]
	push eax
	mov dword ptr [esp+0x70],6
	call esi
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block27

 Block52:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [edx+0x10]
	add eax,ebp
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x6C],7
	test eax,eax
	je Block28

 Block53:
	lea ecx,[esp+0x54]
	push ecx
	lea edx,[esp+0x48]
	push edx
	push 0x20
	mov ecx,eax
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x6C],6
	cmp word ptr [esp+0x44],si
	jne Block56

 Block54:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea ecx,[esp+0x44]
	push ecx
	call edi

 Block57:
	mov dword ptr [esp+0x6C],ebx
	cmp word ptr [esp+0x54],si
	jne Block60

 Block58:
	mov eax,dword ptr [esp+0x5C]
	xor edx,edx
	mov word ptr [esp+0x54],dx
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea eax,[esp+0x54]
	push eax
	call edi

 Block61:
	mov eax,dword ptr [esp+0x1C]
	mov ebx,dword ptr [esp+0x18]
	inc eax
	cmp eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x1C],eax
	jl Block33

 Block62:
	mov dword ptr [ebx],0

 Block63:
	xor eax,eax

 Block64:
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x5C
	ret 4
}
}
// CAnimationDisplayer::Effect_Reserved
_SUB_EXCEPTION_HANDLER(5BF90)
__SUB_CLASS_THIS(0005BF90, __thiscall, 18588,  CAnimationDisplayer, void, const wchar_t*, long, long, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5BF90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x158
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x40],ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x20]
	push eax
	call esi
	lea ecx,[ebp+0x20]
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
	lea edx,[ebp+0x30]
	push edx
	mov dword ptr [ebp-4],edi
	call esi
	lea eax,[ebp+0x30]
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
	mov eax,dword ptr [ebp+0x70]
	push edi
	push edi
	lea ecx,[ebp+0x20]
	push ecx
	lea edx,[ebp+0x30]
	push edx
	push ecx
	mov dword ptr [ebp+0x50],esp
	mov ecx,esp
	mov bl,1
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[ebp-0x1C]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x4C]
	mov dword ptr [ebp+0x4C],edi
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
	mov ebx,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x1C],bx
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[ebp-0x1C]
	push eax
	call esi

 Block13:
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp+0x30],bx
	jne Block16

 Block14:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[ebp+0x30]
	push edx
	call esi

 Block17:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x20],bx
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp+0x20],ax
	mov eax,dword ptr [ebp+0x28]
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp+0x20]
	push ecx
	call esi

 Block21:
	mov esi,dword ptr [ebp+0x4C]
	cmp esi,edi
	sete al
	test al,al
	jne Block119

 Block22:
	cmp esi,edi
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp+0x5C]
	push eax
	push esi
	mov dword ptr [ebp+0x5C],edi
	call ecx
	cmp eax,edi
	jge Block26

 Block25:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block26:
	cmp dword ptr [ebp+0x5C],edi
	je Block119

 Block27:
	mov dword ptr [ebp+0x5C],edi
	mov bl,0xF

 Block28:
	mov eax,0x20
	call __alloca_probe_8
	mov edx,dword ptr [ebp+0x5C]
	mov eax,esp
	push edi
	push edi
	push 0xA
	push eax
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x50],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x8C]
	mov byte ptr [ebp-4],8
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x50]
	mov dword ptr [ebp+0x50],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block30

 Block29:
	cmp eax,0x80004002
	jne Block1

 Block30:
	cmp word ptr [ebp-0x8C],8
	mov byte ptr [ebp-4],0xB
	jne Block33

 Block31:
	mov eax,dword ptr [ebp-0x84]
	xor ecx,ecx
	mov word ptr [ebp-0x8C],cx
	cmp eax,edi
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[ebp-0x8C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov edi,dword ptr [ebp+0x50]
	test edi,edi
	sete al
	test al,al
	jne Block116

 Block35:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x54],esp
	push 0x1074
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0xC
	test edi,edi
	je Block5

 Block36:
	lea ecx,[ebp-0x3C]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0xB
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0xD
	jne Block38

 Block37:
	mov eax,dword ptr [eax+8]
	jmp Block39

 Block38:
	mov eax,offset _S___3

 Block39:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp+0x54],0
	call ZXString16::Assign
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],bl
	jne Block42

 Block40:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block43:
	mov ecx,dword ptr [ebp+0x40]
	add ecx,0x6C
	call ZList<CAnimationDisplayer::RESERVEDINFO>::AddTail_
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x618
	push ecx
	mov esi,eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0xAC]
	mov byte ptr [ebp-4],0x10
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x11
	call get_int32
	add esp,8
	cmp word ptr [ebp-0xAC],8
	mov dword ptr [esi],eax
	mov byte ptr [ebp-4],bl
	jne Block46

 Block44:
	xor eax,eax
	mov word ptr [ebp-0xAC],ax
	mov eax,dword ptr [ebp-0xA4]
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea ecx,[ebp-0xAC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block47:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1ADB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x5C]
	mov byte ptr [ebp-4],0x12
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x13
	call get_int32
	add esp,8
	mov ebx,eax
	call get_update_time
	add ebx,eax
	cmp word ptr [ebp-0x5C],8
	mov dword ptr [esi+0xC],ebx
	mov bl,0xF
	mov byte ptr [ebp-4],bl
	jne Block50

 Block48:
	mov eax,dword ptr [ebp-0x54]
	xor ecx,ecx
	mov word ptr [ebp-0x5C],cx
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea edx,[ebp-0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov eax,dword ptr [esi]
	cmp eax,6
	ja Block113

 Block52:
	cmp EAX, 0
je Block54
cmp EAX, 1
je Block53
cmp EAX, 2
je Block93
cmp EAX, 3
je Block94
cmp EAX, 4
je Block104
cmp EAX, 5
je Block107
cmp EAX, 6
je Block110


 Block53:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1AAC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0xF4]
	push ecx
	mov byte ptr [ebp-4],0x14
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x15
	call get_int32
	add esp,8
	lea ecx,[ebp-0xF4]
	mov dword ptr [esi+0x24],eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	fldz
	sub esp,0xC
	fstp qword ptr [esp+4]
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1076
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x114]
	mov byte ptr [ebp-4],0x16
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x17
	call get_double
	fstp qword ptr [esi+0x30]
	add esp,0xC
	lea ecx,[ebp-0x114]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x700
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x154]
	mov byte ptr [ebp-4],0x18
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x19
	call get_int32
	add esp,8
	lea ecx,[ebp-0x154]
	mov dword ptr [esi+0x28],eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x701
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x134]
	push ecx
	mov byte ptr [ebp-4],0x1A
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1B
	call get_int32
	add esp,8
	lea ecx,[ebp-0x134]
	mov dword ptr [esi+0x2C],eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t

 Block54:
	lea edx,[ebp+0x54]
	push edx
	lea ecx,[esi+4]
	call ZXString16::op_assign
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1075
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x10]
	push ecx
	mov byte ptr [ebp-4],0x1C
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x1D
	jne Block56

 Block55:
	mov eax,dword ptr [eax+8]
	jmp Block57

 Block56:
	mov eax,offset _S___3

 Block57:
	push eax
	lea ecx,[esi+8]
	call ZXString16::AssignCStr
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],bl
	jne Block60

 Block58:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov ecx,dword ptr [ebp+0x78]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x3E5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x7C]
	mov byte ptr [ebp-4],0x1E
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1F
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x7C],8
	mov dword ptr [esi+0x10],eax
	mov byte ptr [ebp-4],bl
	jne Block64

 Block62:
	mov eax,dword ptr [ebp-0x74]
	xor ecx,ecx
	mov word ptr [ebp-0x7C],cx
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea edx,[ebp-0x7C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block65:
	mov eax,dword ptr [ebp+0x7C]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x3E6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0xCC]
	mov byte ptr [ebp-4],0x20
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x21
	call get_int32
	add esp,8
	cmp word ptr [ebp-0xCC],8
	mov dword ptr [esi+0x14],eax
	mov byte ptr [ebp-4],bl
	jne Block68

 Block66:
	xor eax,eax
	mov word ptr [ebp-0xCC],ax
	mov eax,dword ptr [ebp-0xC4]
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea ecx,[ebp-0xCC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x5E8
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x9C]
	mov byte ptr [ebp-4],0x22
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x23
	call get_int32
	add dword ptr [esi+0x10],eax
	add esp,8
	cmp word ptr [ebp-0x9C],8
	mov byte ptr [ebp-4],bl
	jne Block72

 Block70:
	mov eax,dword ptr [ebp-0x94]
	xor ecx,ecx
	mov word ptr [ebp-0x9C],cx
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea edx,[ebp-0x9C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block73:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x5E9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0xDC]
	push ecx
	mov byte ptr [ebp-4],0x24
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x25
	call get_int32
	add dword ptr [esi+0x14],eax
	add esp,8
	cmp word ptr [ebp-0xDC],8
	mov byte ptr [ebp-4],bl
	jne Block76

 Block74:
	mov eax,dword ptr [ebp-0xD4]
	xor edx,edx
	mov word ptr [ebp-0xDC],dx
	test eax,eax
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea eax,[ebp-0xDC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block77:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x937
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0xBC]
	mov byte ptr [ebp-4],0x26
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x27
	call get_int32
	add esp,8
	cmp word ptr [ebp-0xBC],8
	mov dword ptr [esi+0x18],eax
	mov byte ptr [ebp-4],bl
	jne Block80

 Block78:
	xor eax,eax
	mov word ptr [ebp-0xBC],ax
	mov eax,dword ptr [ebp-0xB4]
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea ecx,[ebp-0xBC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block81:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x939
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp]
	mov byte ptr [ebp-4],0x28
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x29
	call get_int32
	add esp,8
	cmp word ptr [ebp],8
	mov dword ptr [esi+0x1C],eax
	mov byte ptr [ebp-4],bl
	jne Block84

 Block82:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	test eax,eax
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea edx,[ebp]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block85:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1AAC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x2C]
	push ecx
	mov byte ptr [ebp-4],0x2A
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x2B
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x2C],8
	mov dword ptr [esi+0x24],eax
	mov byte ptr [ebp-4],bl
	jne Block88

 Block86:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block89:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x3E7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x4C]
	mov byte ptr [ebp-4],0x2C
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x2D
	call get_int32
	add eax,dword ptr [ebp+0x74]
	add esp,8
	cmp word ptr [ebp-0x4C],8
	mov dword ptr [esi+0x20],eax
	mov byte ptr [ebp-4],bl
	jne Block92

 Block90:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	test eax,eax
	je Block113

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block113

 Block92:
	lea ecx,[ebp-0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block113

 Block93:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x11F9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x104]
	mov byte ptr [ebp-4],0x2E
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x2F
	call get_int32
	mov dword ptr [esi+0x38],eax
	lea ecx,[ebp-0x104]
	jmp Block111

 Block94:
	add esi,0x44
	mov dword ptr [ebp+0x60],1
	mov dword ptr [ebp+0x58],esi

 Block95:
	mov eax,0x20
	call __alloca_probe_8
	mov ecx,dword ptr [ebp+0x60]
	mov eax,esp
	push 0
	push 0xA
	push eax
	push ecx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x6C]
	mov byte ptr [ebp-4],0x30
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x31
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x6C],8
	mov esi,eax
	mov byte ptr [ebp-4],bl
	jne Block98

 Block96:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	test eax,eax
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea ecx,[ebp-0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block99:
	test esi,esi
	je Block101

 Block100:
	push esi
	call get_item_slottype_from_id
	push eax
	lea edx,[ebp-0xE4]
	push edx
	call GW_ItemSlotBase::CreateItem
	add esp,0xC
	mov ecx,dword ptr [ebp+0x58]
	push eax
	mov byte ptr [ebp-4],0x32
	call ZRef<GW_ItemSlotBase>::op_assign_copy
	lea ecx,[ebp-0xE4]
	mov byte ptr [ebp-4],bl
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	mov eax,dword ptr [ebp+0x58]
	mov eax,dword ptr [eax+4]
	lea ecx,[eax+0xC]
	push esi
	call TSecType<long>::SetData
	jmp Block102

 Block101:
	mov ecx,dword ptr [ebp+0x58]
	push 0
	call ZRef<GW_ItemSlotBase>::op_assign_zero

 Block102:
	mov eax,dword ptr [ebp+0x60]
	add dword ptr [ebp+0x58],8
	inc eax
	cmp eax,0x3C
	mov dword ptr [ebp+0x60],eax
	jl Block95

 Block103:
	jmp Block113

 Block104:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x48],esp
	push 0x1A9A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x124]
	mov byte ptr [ebp-4],0x33
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	lea ecx,[ebp+0x44]
	mov byte ptr [ebp-4],0x34
	call _xbstr_t::_ctor_3
	lea eax,[ebp+0x44]
	push eax
	lea ecx,[esi+0x21C]
	call Ztl_bstr_t::op_assign
	mov ecx,dword ptr [ebp+0x44]
	test ecx,ecx
	je Block106

 Block105:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x44],0

 Block106:
	lea ecx,[ebp-0x124]
	jmp Block112

 Block107:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x48],esp
	push 0x1075
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x144]
	mov byte ptr [ebp-4],0x35
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x36
	jne Block109

 Block108:
	mov eax,dword ptr [eax+8]
	push eax
	lea ecx,[esi+8]
	call ZXString16::AssignCStr
	lea ecx,[ebp-0x144]
	jmp Block112

 Block109:
	mov eax,offset _S___3
	push eax
	lea ecx,[esi+8]
	call ZXString16::AssignCStr
	lea ecx,[ebp-0x144]
	jmp Block112

 Block110:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x48],esp
	push 0x3E5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x164]
	push ecx
	mov byte ptr [ebp-4],0x37
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x38
	call get_int32
	mov dword ptr [esi+0x10],eax
	lea ecx,[ebp-0x164]

 Block111:
	add esp,8

 Block112:
	call Ztl_variant_t::~Ztl_variant_t

 Block113:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0xB
	test eax,eax
	je Block115

 Block114:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block115:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [ebp-4],7
	call eax
	inc dword ptr [ebp+0x5C]
	mov esi,dword ptr [ebp+0x4C]
	xor edi,edi
	jmp Block28

 Block116:
	mov byte ptr [ebp-4],7
	test edi,edi
	je Block118

 Block117:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block118:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ecx
	jmp Block121

 Block119:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp esi,edi
	je Block121

 Block120:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block121:
	lea esp,[ebp-0x174]
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
	ret 0x10
}
}
// CAnimationDisplayer::RegisterHookingChainAnimation
_SUB_EXCEPTION_HANDLER(5CBD0)
__SUB_CLASS_THIS(0005CBD0, __thiscall, 18569,  CAnimationDisplayer, void, long, unsigned long, unsigned long, int32_t, long, NakedParam<Ztl_bstr_t>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5CBD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x54]
	mov dword ptr fs:[0],eax
	xor ebp,ebp
	add ecx,0xD0
	mov dword ptr [esp+0x5C],ebp
	call ZList<CAnimationDisplayer::HOOKING_CHAIN_INFO>::AddTail_
	mov edi,dword ptr [ZImports::_VariantInit]
	mov esi,eax
	lea eax,[esp+0x34]
	push eax
	call edi
	lea ecx,[esp+0x34]
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
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x60],1
	call edi
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push offset _S_00__1
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x60],2
	call _xbstr_t::_ctor_0
	push ebp
	push ebp
	lea ecx,[esp+0x3C]
	push ecx
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	lea ecx,[esp+0x90]
	mov byte ptr [esp+0x74],3
	call Ztl_bstr_t::op_add_0
	mov eax,dword ptr [eax]
	mov bl,4
	mov byte ptr [esp+0x6C],bl
	cmp eax,ebp
	je Block6

 Block5:
	mov eax,dword ptr [eax]
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x70],5
	cmp dword ptr [_D_G_RM],ebp
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	lea edx,[esp+0x58]
	mov byte ptr [esp+0x70],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x64],6
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x38]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block12

 Block10:
	cmp eax,0x80004002
	je Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	mov byte ptr [esp+0x5C],bl
	mov ebx,8
	cmp word ptr [esp+0x44],bx
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	cmp eax,ebp
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebp
	je Block18

 Block17:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x14],ebp

 Block18:
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,ebp
	je Block20

 Block19:
	call _xbstr_t::Data_t::Release

 Block20:
	mov byte ptr [esp+0x5C],1
	cmp word ptr [esp+0x24],bx
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	cmp eax,ebp
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov byte ptr [esp+0x5C],0
	cmp word ptr [esp+0x34],bx
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	cmp eax,ebp
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	lea eax,[esp+0x24]
	push eax
	call edi
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x60],7
	call edi
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	push offset _S_10__1
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x60],8
	call _xbstr_t::_ctor_0
	push ebp
	push ebp
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	lea ecx,[esp+0x90]
	mov byte ptr [esp+0x74],9
	call Ztl_bstr_t::op_add_0
	mov eax,dword ptr [eax]
	mov bl,0xA
	mov byte ptr [esp+0x6C],bl
	cmp eax,ebp
	je Block34

 Block33:
	mov eax,dword ptr [eax]
	jmp Block35

 Block34:
	xor eax,eax

 Block35:
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x70],0xB
	cmp dword ptr [_D_G_RM],ebp
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	lea edx,[esp+0x58]
	mov byte ptr [esp+0x70],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x64],0xC
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x34]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block40

 Block38:
	cmp eax,0x80004002
	je Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	mov edi,8
	mov byte ptr [esp+0x5C],bl
	cmp word ptr [esp+0x44],di
	jne Block43

 Block41:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	cmp eax,ebp
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,ebp
	je Block46

 Block45:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x18],ebp

 Block46:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebp
	je Block48

 Block47:
	call _xbstr_t::Data_t::Release

 Block48:
	mov byte ptr [esp+0x5C],7
	cmp word ptr [esp+0x34],di
	jne Block51

 Block49:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	cmp eax,ebp
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov byte ptr [esp+0x5C],0
	cmp word ptr [esp+0x24],di
	jne Block55

 Block53:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	cmp eax,ebp
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esi+0x10],eax
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push eax
	call CUserPool::GetUser
	cmp eax,ebp
	jne Block58

 Block57:
	mov ecx,dword ptr [esp+0x78]
	cmp ecx,ebp
	jmp Block87

 Block58:
	lea edi,[eax+4]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,edi
	call edx
	mov ebp,dword ptr [esp+0x70]
	mov ecx,ebp
	neg ecx
	sbb ecx,ecx
	and ecx,0xFFFFFFCE
	add ecx,0x19
	add ecx,dword ptr [eax]
	lea eax,[esp+0x1C]
	mov dword ptr [esi+0x18],ecx
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x10]
	push eax
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax+4]
	sub eax,0x14
	mov ecx,ebp
	neg ecx
	sbb ecx,ecx
	and ecx,0xFFFFFDA8
	add ecx,0x12C
	add ecx,dword ptr [esi+0x18]
	mov edx,eax
	mov dword ptr [esi+0x20],ecx
	xor ebx,ebx
	mov dword ptr [esi+0x1C],eax
	mov eax,dword ptr [esp+0x6C]
	lea edi,[esi+0x30]
	lea ecx,[esp+0x78]
	mov dword ptr [esi+0x24],edx
	mov dword ptr [esi+0x14],eax
	mov dword ptr [esi+8],ebx
	mov dword ptr [esi+0xC],0x3C
	mov dword ptr [esi+0x28],ebx
	mov dword ptr [esi+0x2C],ebp
	cmp edi,ecx
	je Block63

 Block59:
	mov ecx,dword ptr [edi]
	cmp ecx,ebx
	je Block61

 Block60:
	call _xbstr_t::Data_t::Release
	mov dword ptr [edi],ebx

 Block61:
	mov edx,dword ptr [esp+0x78]
	mov dword ptr [edi],edx
	mov eax,dword ptr [esp+0x78]
	cmp eax,ebx
	je Block63

 Block62:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block63:
	mov eax,dword ptr [esp+0x64]
	add eax,0xFFFFFF9C
	mov dword ptr [esi],eax
	add eax,0x3E8
	mov dword ptr [esi+4],eax
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	mov edx,3
	mov word ptr [esp+0x34],dx
	mov dword ptr [esp+0x3C],ebx
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x5C],0xE
	cmp ecx,ebx
	jne Block67

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	lea eax,[esp+0x24]
	push eax
	mov eax,dword ptr [esp+0x78]
	lea edx,[esp+0x38]
	push edx
	dec eax
	push eax
	push 0x64
	push 0x320
	push 0xFFFFFFCE
	push ebx
	lea edx,[esp+0x84]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x3C]
	cmp edi,eax
	je Block72

 Block68:
	mov dword ptr [esi+0x3C],eax
	cmp eax,ebx
	je Block70

 Block69:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block70:
	cmp edi,ebx
	je Block72

 Block71:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block72:
	mov eax,dword ptr [esp+0x68]
	cmp eax,ebx
	je Block74

 Block73:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block74:
	mov edi,8
	mov byte ptr [esp+0x5C],0xD
	cmp word ptr [esp+0x34],di
	jne Block77

 Block75:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	cmp eax,ebx
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block78:
	mov byte ptr [esp+0x5C],0
	cmp word ptr [esp+0x24],di
	jne Block81

 Block79:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebx
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block82:
	mov esi,dword ptr [esi+0x3C]
	cmp esi,ebx
	jne Block84

 Block83:
	push 0x80004003
	call _com_issue_error

 Block84:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	cmp eax,ebx
	jge Block86

 Block85:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block86:
	mov ecx,dword ptr [esp+0x78]
	cmp ecx,ebx

 Block87:
	je Block89

 Block88:
	call _xbstr_t::Data_t::Release

 Block89:
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret 0x18
}
}
// CAnimationDisplayer::RegisterExplosionAnimation
_SUB_EXCEPTION_HANDLER(5A1D0)
__SUB_CLASS_THIS(0005A1D0, __thiscall, 18543,  CAnimationDisplayer, void, const wchar_t*, const tagRECT&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5A1D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x58
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x54]
	push eax
	call edi
	lea ecx,[ebp-0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor ebx,ebx
	add esp,8
	cmp eax,ebx
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x44]
	push edx
	mov dword ptr [ebp-4],ebx
	call edi
	lea eax,[ebp-0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	mov eax,dword ptr [ebp+8]
	push ebx
	push ebx
	lea ecx,[ebp-0x54]
	push ecx
	lea edx,[ebp-0x44]
	push edx
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],1
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[ebp-0x64]
	push ecx
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x2C]
	mov dword ptr [ebp-0x2C],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov edi,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x64],di
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x5C]
	xor edx,edx
	mov word ptr [ebp-0x64],dx
	cmp eax,ebx
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[ebp-0x64]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x44],di
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x3C]
	xor ecx,ecx
	mov word ptr [ebp-0x44],cx
	cmp eax,ebx
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[ebp-0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x54],di
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp-0x54],ax
	mov eax,dword ptr [ebp-0x4C]
	cmp eax,ebx
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp-0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov ebx,dword ptr [ebp-0x2C]
	test ebx,ebx
	sete al
	test al,al
	je Block24

 Block22:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test ebx,ebx
	je Block63

 Block23:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax
	jmp Block63

 Block24:
	call get_update_time
	lea ecx,[esi+0xA8]
	mov edi,eax
	call ZList<CAnimationDisplayer::EXPLOSIONINFO>::AddTail_
	mov ecx,dword ptr [ebp+0xC]
	mov esi,eax
	mov eax,dword ptr [ecx+8]
	add eax,dword ptr [ecx]
	push 0
	cdq
	sub eax,edx
	sar eax,1
	mov dword ptr [esi],eax
	mov eax,dword ptr [ecx+0xC]
	add eax,dword ptr [ecx+4]
	cdq
	sub eax,edx
	sar eax,1
	mov dword ptr [esi+4],eax
	mov eax,dword ptr [ecx+8]
	sub eax,dword ptr [ecx]
	mov dword ptr [esi+8],eax
	lea edx,[eax+eax*4]
	mov eax,0x2AAAAAAB
	imul edx
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov dword ptr [esi+0xC],eax
	mov eax,dword ptr [ecx+0xC]
	sub eax,dword ptr [ecx+4]
	lea ecx,[eax+eax*4]
	mov dword ptr [esi+0x10],eax
	mov eax,0x2AAAAAAB
	imul ecx
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x1ABA
	push edx
	mov dword ptr [esi+0x14],ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],8
	test ebx,ebx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea eax,[ebp-0x24]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],9
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x24],8
	mov dword ptr [esi+0x18],eax
	mov byte ptr [ebp-4],7
	jne Block29

 Block27:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x14],esp
	push 0x1AA6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x24]
	push ecx
	mov byte ptr [ebp-4],0xA
	mov ecx,ebx
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xB
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x24],8
	mov dword ptr [esi+0x1C],eax
	mov byte ptr [ebp-4],7
	jne Block33

 Block31:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block34:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x1ADB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x24]
	mov byte ptr [ebp-4],0xC
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xD
	call get_int32
	add eax,edi
	add esp,8
	cmp word ptr [ebp-0x24],8
	mov dword ptr [esi+0x20],eax
	mov byte ptr [ebp-4],7
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x1AAC
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x24]
	mov byte ptr [ebp-4],0xE
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xF
	call get_int32
	add eax,edi
	add esp,8
	cmp word ptr [ebp-0x24],8
	mov dword ptr [esi+0x24],eax
	mov byte ptr [ebp-4],7
	jne Block41

 Block39:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov dword ptr [ebp-0x28],0
	jmp Block44

 Block44:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	mov eax,dword ptr [ebp-0x28]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x24]
	push ecx
	mov byte ptr [ebp-4],0x10
	mov ecx,ebx
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x11
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp-0x34],edi
	test eax,eax
	je Block47

 Block45:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0x30]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x30]
	mov edi,ecx
	mov dword ptr [ebp-0x34],edi
	test eax,eax
	jge Block47

 Block46:
	cmp eax,0x80004002
	jne Block1

 Block47:
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],0x13
	jne Block50

 Block48:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block51:
	test edi,edi
	sete al
	test al,al
	jne Block60

 Block52:
	push 0xFFFFFFFF
	lea ecx,[esi+0x28]
	call ZArray<_x_com_ptr<IWzProperty>>::InsertBefore
	mov ecx,dword ptr [eax]
	mov dword ptr [ebp-0x14],ecx
	cmp ecx,edi
	je Block57

 Block53:
	mov dword ptr [eax],edi
	test edi,edi
	je Block55

 Block54:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx
	mov ecx,dword ptr [ebp-0x14]

 Block55:
	test ecx,ecx
	je Block57

 Block56:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx

 Block57:
	mov byte ptr [ebp-4],7
	test edi,edi
	je Block59

 Block58:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block59:
	inc dword ptr [ebp-0x28]
	jmp Block44

 Block60:
	mov byte ptr [ebp-4],7
	test edi,edi
	je Block62

 Block61:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block62:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ecx

 Block63:
	lea esp,[ebp-0x74]
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
	ret 8
}
}
// CAnimationDisplayer::Update
__SUB_CLASS_THIS0(000498C0, __thiscall, 18530,  CAnimationDisplayer, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call get_update_time
	push eax
	lea ecx,[esi+0x120]
	call CAnimationDisplayer::TAnimation<CAnimationDisplayer::MOTIONBLURINFO>::Update
	pop esi
	ret
}
}
// CAnimationDisplayer::Effect_BuffItemUse
_SUB_EXCEPTION_HANDLER(56020)
__SUB_CLASS_THIS(00056020, __thiscall, 18584,  CAnimationDisplayer, void, const wchar_t*, int32_t, NakedParam<_x_com_ptr<IWzVector2D>>, long, long, NakedParam<_x_com_ptr<IWzGr2DLayer>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_56020
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x38]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x14],ecx
	mov esi,dword ptr [esp+0x60]
	push 0
	push 0xFF
	push esi
	push ecx
	mov ecx,dword ptr [esp+0x6C]
	mov eax,esp
	mov dword ptr [esp+0x70],esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x6C]
	mov dword ptr [esp+0x50],1
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	mov edi,dword ptr [esp+0x68]
	mov ebp,dword ptr [esp+0x64]
	push edi
	push ebp
	push ecx
	mov ecx,dword ptr [esp+0x6C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x6C]
	mov dword ptr [esp+0x74],esp
	test eax,eax
	je Block4

 Block3:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block4:
	mov ebx,dword ptr [esp+0x68]
	mov ecx,dword ptr [esp+0x64]
	push ebx
	push ecx
	lea edx,[esp+0x84]
	push edx
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	cmp dword ptr [esp+0x60],0
	mov byte ptr [esp+0x40],2
	sete al
	test al,al
	je Block25

 Block5:
	mov dword ptr [esp+0x58],0
	lea eax,[esp+0x58]
	push offset _S_EFFECTBASICEFFIM__15
	push eax
	mov byte ptr [esp+0x48],3
	call ZXString16::Format
	add esp,8
	push 0
	push 0xFF
	push esi
	push ecx
	mov ecx,dword ptr [esp+0x6C]
	mov eax,esp
	mov dword ptr [esp+0x64],esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x6C]
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block7:
	push edi
	push ebp
	push ecx
	mov ecx,dword ptr [esp+0x6C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x6C]
	mov dword ptr [esp+0x68],esp
	test eax,eax
	je Block9

 Block8:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block9:
	mov edi,dword ptr [esp+0x74]
	push ebx
	lea ecx,[esp+0x74]
	push edi
	push ecx
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0x88]
	add esp,0x28
	cmp ecx,eax
	je Block14

 Block10:
	mov esi,ecx
	mov ecx,eax
	mov dword ptr [esp+0x60],ecx
	test eax,eax
	je Block12

 Block11:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax
	mov ecx,dword ptr [esp+0x60]

 Block12:
	test esi,esi
	je Block14

 Block13:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx
	mov ecx,dword ptr [esp+0x60]

 Block14:
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov ecx,dword ptr [esp+0x60]

 Block16:
	test ecx,ecx
	sete al
	mov byte ptr [esp+0x40],2
	test al,al
	je Block23

 Block17:
	test edi,edi
	je Block19

 Block18:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	mov ecx,dword ptr [esp+0x64]
	add esp,4

 Block19:
	mov byte ptr [esp+0x40],1
	test ecx,ecx
	je Block21

 Block20:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx

 Block21:
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x40],0
	test eax,eax
	je Block45

 Block22:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block45

 Block23:
	test edi,edi
	je Block25

 Block24:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block25:
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
	jge Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	lea edx,[esp+0x18]
	mov bl,4
	push edx
	mov byte ptr [esp+0x44],bl
	call esi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	mov ecx,dword ptr [esp+0x60]
	mov byte ptr [esp+0x40],5
	test ecx,ecx
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x1C]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x40],bl
	cmp word ptr [esp+0x18],si
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea edx,[esp+0x18]
	push edx
	call edi

 Block35:
	mov byte ptr [esp+0x40],2
	cmp word ptr [esp+0x28],si
	jne Block38

 Block36:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea ecx,[esp+0x28]
	push ecx
	call edi

 Block39:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	mov dword ptr [eax],0
	mov edx,dword ptr [esp+0x64]
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x6C]
	mov dword ptr [esp+0x64],esp
	test eax,eax
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block41:
	mov ecx,dword ptr [esp+0x20]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0x40],1
	test eax,eax
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block43:
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x40],0
	test eax,eax
	je Block45

 Block44:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block45:
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test eax,eax
	je Block47

 Block46:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block47:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret 0x1C
}
}
// CAnimationDisplayer::SetLocalFadeLayer
_SUB_EXCEPTION_HANDLER(42870)
__SUB_CLASS_THIS(00042870, __thiscall, 18560,  CAnimationDisplayer, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_42870
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x60]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x14],ecx
	mov dword ptr [esp+0x10],0
	lea eax,[esp+0x18]
	push 0x3D0
	push eax
	mov dword ptr [esp+0x70],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[esp+0x14]
	push ecx
	push eax
	mov byte ptr [esp+0x74],1
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x68],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	sete cl
	test cl,cl
	je Block5

 Block3:
	mov dword ptr [esp+0x68],0xFFFFFFFF
	test eax,eax
	je Block86

 Block4:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x5C
	ret 8

 Block5:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x30]
	push ecx
	call edi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	lea eax,[esp+0x20]
	mov bl,2
	push eax
	mov byte ptr [esp+0x6C],bl
	call edi
	lea ecx,[esp+0x20]
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
	mov ecx,dword ptr [esp+0x10]
	mov byte ptr [esp+0x68],3
	test ecx,ecx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	push 0x258
	push 0x320
	call IWzCanvas::Create
	mov esi,8
	mov byte ptr [esp+0x68],bl
	cmp word ptr [esp+0x20],si
	jne Block18

 Block12:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block14:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block15:
	mov byte ptr [esp+0x68],0
	cmp word ptr [esp+0x30],si
	jne Block19

 Block16:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block20

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block18:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x20]
	push edx
	call ebx
	jmp Block15

 Block19:
	lea ecx,[esp+0x30]
	push ecx
	call ebx

 Block20:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	mov edx,dword ptr [eax]
	push 0
	mov esi,eax
	push eax
	mov eax,dword ptr [edx+0x70]
	call eax
	test eax,eax
	jge Block24

 Block23:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block24:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x78]
	push 0
	push eax
	mov esi,eax
	call edx
	test eax,eax
	jge Block28

 Block27:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block28:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFF000000
	push 0x258
	push 0x320
	push 0
	push 0
	push eax
	mov esi,eax
	call edx
	test eax,eax
	jge Block32

 Block31:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block32:
	lea eax,[esp+0x20]
	push eax
	call edi
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	mov eax,dword ptr [esp+0x10]
	mov edx,0xD
	mov byte ptr [esp+0x68],4
	mov word ptr [esp+0x30],dx
	mov dword ptr [esp+0x38],eax
	test eax,eax
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block36:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x68],5
	test ecx,ecx
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea eax,[esp+0x20]
	push eax
	mov eax,dword ptr [esp+0x74]
	lea edx,[esp+0x34]
	push edx
	push eax
	push 0
	push 0
	push 0xFFFFFED4
	push 0xFFFFFE70
	lea edx,[esp+0x34]
	push edx
	call IWzGr2D::CreateLayer
	mov esi,8
	mov byte ptr [esp+0x68],7
	cmp word ptr [esp+0x30],si
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[esp+0x30]
	push ecx
	call ebx

 Block42:
	mov byte ptr [esp+0x68],8
	cmp word ptr [esp+0x20],si
	jne Block45

 Block43:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea eax,[esp+0x20]
	push eax
	call ebx

 Block46:
	mov esi,dword ptr [esp+0x18]
	test esi,esi
	sete al
	test al,al
	je Block49

 Block47:
	mov byte ptr [esp+0x68],0
	test esi,esi
	je Block84

 Block48:
	jmp Block83

 Block49:
	test esi,esi
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFF
	push esi
	call ecx
	test eax,eax
	jge Block53

 Block52:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block53:
	mov ecx,dword ptr [_D_G_GR]
	test ecx,ecx
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	lea edx,[esp+0x70]
	push edx
	call IWzGr2D::Getcenter
	mov eax,dword ptr [eax]
	mov bl,9
	mov ecx,0xD
	mov byte ptr [esp+0x68],bl
	mov word ptr [esp+0x40],cx
	mov dword ptr [esp+0x48],eax
	test eax,eax
	je Block57

 Block56:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block57:
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x6C],0xA
	call IWzVector2D::Putorigin
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x68],bl
	jne Block60

 Block58:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov eax,dword ptr [esp+0x70]
	mov byte ptr [esp+0x68],8
	test eax,eax
	je Block63

 Block62:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block63:
	lea eax,[esp+0x50]
	push eax
	call edi
	lea ecx,[esp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x58]
	lea eax,[esp+0x70]
	push eax
	push esi
	mov byte ptr [esp+0x70],0xB
	mov dword ptr [esp+0x78],0
	call ecx
	test eax,eax
	jge Block67

 Block66:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block67:
	mov eax,dword ptr [esp+0x70]
	mov edx,3
	mov word ptr [esp+0x40],dx
	mov dword ptr [esp+0x48],eax
	lea ecx,[esp+0x1C]
	push ecx
	mov bl,0xC
	mov ecx,esi
	mov byte ptr [esp+0x6C],bl
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x68],0xD
	test ecx,ecx
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	lea edx,[esp+0x50]
	push edx
	mov edx,dword ptr [esp+0x78]
	lea eax,[esp+0x44]
	push eax
	push 0xFF
	push edx
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x68],bl
	test eax,eax
	je Block71

 Block70:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block71:
	mov edi,8
	mov byte ptr [esp+0x68],0xB
	cmp word ptr [esp+0x40],di
	jne Block74

 Block72:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov byte ptr [esp+0x68],8
	cmp word ptr [esp+0x50],di
	jne Block78

 Block76:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea eax,[esp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block79:
	mov ecx,dword ptr [esp+0x14]
	mov edi,dword ptr [ecx+0x174]
	cmp edi,esi
	je Block82

 Block80:
	mov edx,ecx
	mov dword ptr [edx+0x174],esi
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx
	test edi,edi
	je Block82

 Block81:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block82:
	mov byte ptr [esp+0x68],0

 Block83:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block84:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x68],0xFFFFFFFF
	test eax,eax
	je Block86

 Block85:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block86:
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x5C
	ret 8
}
}
// CAnimationDisplayer::Effect_FullChargedAngerGauge
_SUB_EXCEPTION_HANDLER(57D00)
__SUB_CLASS_THIS(00057D00, __thiscall, 18617,  CAnimationDisplayer, void, NakedParam<ZXString16>, NakedParam<_x_com_ptr<IWzVector2D>>, NakedParam<_x_com_ptr<IWzGr2DLayer>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_57D00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x38]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	push 0
	push 0xFF
	push 0xC00614A4
	push ecx
	mov ecx,dword ptr [esp+0x60]
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x60]
	mov dword ptr [esp+0x50],2
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	push 0
	push 0
	push ecx
	mov ecx,dword ptr [esp+0x68]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x30],esp
	test eax,eax
	je Block4

 Block3:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block4:
	mov ecx,dword ptr [esp+0x64]
	push 0
	push ecx
	lea edx,[esp+0x34]
	push edx
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	sete cl
	mov byte ptr [esp+0x40],3
	test cl,cl
	jne Block22

 Block5:
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
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0x44],4
	call esi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov ecx,dword ptr [esp+0x10]
	mov byte ptr [esp+0x40],5
	test ecx,ecx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x1C]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x40],4
	cmp word ptr [esp+0x18],si
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[esp+0x18]
	push edx
	call edi

 Block15:
	mov byte ptr [esp+0x40],3
	cmp word ptr [esp+0x28],si
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x28]
	push ecx
	call edi

 Block19:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [eax],0
	mov edx,dword ptr [esp+0x14]
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x20],esp
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block21:
	mov ecx,ebp
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov eax,dword ptr [esp+0x10]

 Block22:
	mov byte ptr [esp+0x40],2
	test eax,eax
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block24:
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x40],1
	test eax,eax
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block26:
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x40],0
	test eax,eax
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block28:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test eax,eax
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x34
	ret 0xC
}
}
// TAnimation<CAnimationDisplayer::CHAINLIGHTNINGINFO>::~TAnimation<CAnimationDisplayer::CHAINLIGHTNINGINFO>
__SUB_CLASS_THIS0(000414C0, __thiscall, 19287,  TAnimation<CAnimationDisplayer::CHAINLIGHTNINGINFO>, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::CHAINLIGHTNINGINFO>::`vftable'
	jmp  ZList<CAnimationDisplayer::CHAINLIGHTNINGINFO>::RemoveAll
}
}
// TAnimation<CAnimationDisplayer::SQUIBINFO>::~TAnimation<CAnimationDisplayer::SQUIBINFO>
__SUB_CLASS_THIS0(00041470, __thiscall, 19192,  TAnimation<CAnimationDisplayer::SQUIBINFO>, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::SQUIBINFO>::`vftable'
	jmp  ZList<CAnimationDisplayer::SQUIBINFO>::RemoveAll
}
}
// CAnimationDisplayer::MagicBullet::PrepareBulletLayer
_SUB_EXCEPTION_HANDLER(52290)
__SUB_CLASS_THIS(00052290, __thiscall, 18814,  CAnimationDisplayer::MagicBullet, _x_com_ptr<IWzGr2DLayer>, NakedParam<_x_com_ptr<IWzVector2D>>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_52290
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
	mov esi,ecx
	xor ebp,ebp
	mov dword ptr [esp+0x20],ebp
	mov eax,dword ptr [esi+0x44]
	push ebp
	push 0xFF
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push ebp
	mov dword ptr [eax],ebp
	push ebp
	push ecx
	mov ecx,dword ptr [esp+0x74]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x74]
	mov dword ptr [esp+0x68],ebp
	mov dword ptr [esp+0x3C],esp
	cmp eax,ebp
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	mov esi,dword ptr [esi+0x48]
	cmp esi,ebp
	je Block4

 Block3:
	mov eax,dword ptr [esi]
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	push ebp
	push eax
	lea ecx,[esp+0x38]
	push ecx
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebp
	sete al
	mov byte ptr [esp+0x4C],1
	test al,al
	je Block8

 Block6:
	mov esi,dword ptr [esp+0x54]
	mov dword ptr [esi],ebp
	mov byte ptr [esp+0x4C],0
	cmp ecx,ebp
	je Block91

 Block7:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax
	jmp Block91

 Block8:
	cmp dword ptr [esp+0x5C],ebp
	je Block73

 Block9:
	cmp ecx,ebp
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea eax,[esp+0x5C]
	push eax
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x4C],2
	cmp esi,ebp
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x68]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],ebp
	call eax
	cmp eax,ebp
	jge Block15

 Block14:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block15:
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x4C],1
	cmp eax,ebp
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block17:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebp
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	lea eax,[esp+0x1C]
	push eax
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x4C],3
	cmp esi,ebp
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x70]
	lea edx,[esp+0x5C]
	push edx
	push esi
	mov dword ptr [esp+0x64],ebp
	call eax
	cmp eax,ebp
	jge Block23

 Block22:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block23:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x4C],1
	cmp eax,ebp
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block25:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
	push eax
	call esi
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x50],4
	call esi
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	mov ecx,dword ptr [esp+0x14]
	mov bl,5
	mov byte ptr [esp+0x4C],bl
	cmp ecx,ebp
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	lea edx,[esp+0x20]
	push edx
	call IWzGr2DLayer::Getlt
	mov edi,eax
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x4C],6
	cmp eax,ebp
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x1C]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0xB8]
	mov dword ptr [esp+0x24],ebp
	call eax
	cmp eax,ebp
	jge Block35

 Block34:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block35:
	mov ecx,dword ptr [edi]
	cmp ecx,ebp
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	lea edx,[esp+0x34]
	push edx
	mov edx,dword ptr [esp+0x60]
	lea eax,[esp+0x28]
	push eax
	mov eax,dword ptr [esp+0x20]
	push edx
	mov edx,dword ptr [esp+0x28]
	add edx,eax
	push edx
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x4C],bl
	cmp eax,ebp
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block39:
	mov esi,8
	mov byte ptr [esp+0x4C],4
	cmp word ptr [esp+0x24],si
	jne Block42

 Block40:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebp
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block43:
	mov byte ptr [esp+0x4C],1
	cmp word ptr [esp+0x34],si
	jne Block46

 Block44:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	cmp eax,ebp
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block47:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push ecx
	call esi
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block49

 Block48:
	push eax
	call _com_issue_error

 Block49:
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0x50],7
	call esi
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x4C],8
	cmp ecx,ebp
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	lea edx,[esp+0x20]
	push edx
	call IWzGr2DLayer::Getrb
	mov ebx,eax
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x4C],9
	cmp eax,ebp
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x5C]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0xC0]
	mov dword ptr [esp+0x64],ebp
	call eax
	cmp eax,ebp
	jge Block57

 Block56:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block57:
	mov eax,dword ptr [esp+0x14]
	mov edi,dword ptr [esp+0x5C]
	cmp eax,ebp
	jne Block59

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x1C]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0xB8]
	mov dword ptr [esp+0x24],ebp
	call eax
	cmp eax,ebp
	jge Block61

 Block60:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block61:
	mov ecx,dword ptr [ebx]
	cmp ecx,ebp
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	lea edx,[esp+0x24]
	push edx
	mov edx,dword ptr [esp+0x20]
	lea eax,[esp+0x38]
	push eax
	push edi
	neg edx
	push edx
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x4C],8
	cmp eax,ebp
	je Block65

 Block64:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block65:
	mov esi,8
	mov byte ptr [esp+0x4C],7
	cmp word ptr [esp+0x34],si
	jne Block68

 Block66:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,ebp
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	mov byte ptr [esp+0x4C],1
	cmp word ptr [esp+0x24],si
	jne Block72

 Block70:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	cmp eax,ebp
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block73:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push ecx
	call esi
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block75

 Block74:
	push eax
	call _com_issue_error

 Block75:
	lea eax,[esp+0x34]
	mov bl,0xA
	push eax
	mov byte ptr [esp+0x50],bl
	call esi
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block77

 Block76:
	push eax
	call _com_issue_error

 Block77:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x4C],0xB
	cmp ecx,ebp
	jne Block79

 Block78:
	push 0x80004003
	call _com_issue_error

 Block79:
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x38]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x4C],bl
	cmp word ptr [esp+0x34],si
	jne Block82

 Block80:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	cmp eax,ebp
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block83:
	mov byte ptr [esp+0x4C],1
	cmp word ptr [esp+0x24],si
	jne Block86

 Block84:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebp
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block87:
	mov eax,dword ptr [esp+0x14]
	mov esi,dword ptr [esp+0x54]
	mov dword ptr [esi],eax
	cmp eax,ebp
	je Block89

 Block88:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax
	mov eax,dword ptr [esp+0x14]

 Block89:
	mov byte ptr [esp+0x4C],0
	cmp eax,ebp
	je Block91

 Block90:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block91:
	mov eax,dword ptr [esp+0x58]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	cmp eax,ebp
	je Block93

 Block92:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block93:
	mov eax,esi
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 0xC
}
}
// CAnimationDisplayer::MobSwallowedBullet::MobSwallowedBullet
_SUB_EXCEPTION_HANDLER(3B930)
__SUB_CLASS_THIS(0003B930, __thiscall, 19008,  CAnimationDisplayer::MobSwallowedBullet, void, long, long, NakedParam<tagPOINT>, NakedParam<tagPOINT>, NakedParam<_x_com_ptr<IWzVector2D>>, long, int32_t, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B930
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
	mov eax,dword ptr [esp+0x3C]
	push 0xC8
	push 0xC8
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x44]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x24],1
	mov dword ptr [esp+0x4C],esp
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x3C]
	mov eax,dword ptr [esp+0x38]
	mov edi,dword ptr [esp+0x2C]
	push ecx
	mov ecx,dword ptr [esp+0x38]
	push edx
	mov edx,dword ptr [esp+0x38]
	push eax
	push ecx
	push edx
	push edi
	mov ecx,esi
	call CAfterImageBullet::_ctor_0
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esi+0x44],eax
	mov eax,dword ptr [esp+0x40]
	int 3// TODO: 	mov dword ptr [esi],offset CAnimationDisplayer::MobSwallowedBullet::`vftable'
	mov dword ptr [esi+0x4C],eax
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx
	mov eax,dword ptr [esp+0x40]

 Block4:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [esi+0x50],edi
	mov byte ptr [esp+0x14],0
	test ecx,ecx
	je Block6

 Block5:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx
	mov eax,dword ptr [esp+0x40]

 Block6:
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block8:
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 0x28
}
}
// CAnimationDisplayer::RegisterNewYearAnimation
_SUB_EXCEPTION_HANDLER(556F0)
__SUB_CLASS_THIS(000556F0, __thiscall, 18548,  CAnimationDisplayer, void, const wchar_t*, NakedParam<ZXString16>, const tagRECT&, long, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_556F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x4C]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x14],ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	xor ebp,ebp
	push eax
	mov dword ptr [esp+0x58],ebp
	call esi
	lea ecx,[esp+0x2C]
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
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x58],1
	call esi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	mov eax,dword ptr [esp+0x5C]
	push ebp
	push ebp
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x28]
	push edx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,2
	push eax
	mov byte ptr [esp+0x6C],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x68],3
	cmp dword ptr [_D_G_RM],ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0x6C],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x5C],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x60]
	mov dword ptr [esp+0x60],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x54],6
	cmp word ptr [esp+0x3C],bx
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebp
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x3C]
	push eax
	call esi

 Block13:
	mov byte ptr [esp+0x54],7
	cmp word ptr [esp+0x1C],bx
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x1C]
	push edx
	call esi

 Block17:
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x2C],bx
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x2C]
	push ecx
	call esi

 Block21:
	mov edi,dword ptr [esp+0x5C]
	cmp edi,ebp
	sete al
	test al,al
	je Block25

 Block22:
	mov byte ptr [esp+0x54],0
	cmp edi,ebp
	je Block24

 Block23:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block24:
	mov eax,dword ptr [esp+0x60]
	cmp eax,ebp
	jmp Block33

 Block25:
	call get_update_time
	mov ecx,dword ptr [esp+0x14]
	add ecx,0xF8
	mov ebp,eax
	call ZList<CAnimationDisplayer::NEWYEARINFO>::AddTail_
	mov ecx,dword ptr [esp+0x64]
	mov edx,dword ptr [ecx]
	mov esi,eax
	mov dword ptr [esi],edx
	mov eax,dword ptr [ecx+4]
	mov dword ptr [esi+4],eax
	mov eax,dword ptr [ecx+8]
	sub eax,dword ptr [ecx]
	mov dword ptr [esi+8],eax
	lea edx,[eax+eax*4]
	mov eax,0x2AAAAAAB
	imul edx
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov dword ptr [esi+0xC],eax
	mov eax,dword ptr [ecx+0xC]
	sub eax,dword ptr [ecx+4]
	mov dword ptr [esi+0x20],ebp
	lea ecx,[eax+eax*4]
	mov dword ptr [esi+0x10],eax
	mov eax,0x2AAAAAAB
	imul ecx
	mov eax,dword ptr [esp+0x6C]
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov edx,dword ptr [esp+0x68]
	mov dword ptr [esi+0x14],ecx
	mov ecx,dword ptr [esp+0x74]
	mov dword ptr [esi+0x18],edx
	add ebp,ecx
	lea edx,[esp+0x60]
	push edx
	lea ecx,[esi+0x28]
	mov dword ptr [esi+0x1C],eax
	mov dword ptr [esi+0x24],ebp
	call ZXString16::op_assign
	mov dword ptr [esi+0x2C],0
	test edi,edi
	je Block30

 Block26:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx
	mov ebp,dword ptr [esi+0x30]
	cmp ebp,edi
	je Block29

 Block27:
	mov dword ptr [esi+0x30],edi
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax
	test ebp,ebp
	je Block29

 Block28:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx

 Block29:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block30:
	mov byte ptr [esp+0x54],0
	test edi,edi
	je Block32

 Block31:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block32:
	mov eax,dword ptr [esp+0x60]
	test eax,eax

 Block33:
	mov dword ptr [esp+0x54],0xFFFFFFFF
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block35:
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret 0x1C
}
}
// CAnimationDisplayer::FOLLOWINFO::Update
_SUB_EXCEPTION_HANDLER(4E4F0)
__SUB_CLASS_THIS(0004E4F0, __thiscall, 18681,  CAnimationDisplayer::FOLLOWINFO, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E4F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x58
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x6C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebp,ebp
	mov dword ptr [esp+0x2C],ebp
	mov eax,dword ptr [esi+0x4C]
	mov ecx,dword ptr [esp+0x7C]
	sub ecx,eax
	js Block101

 Block1:
	mov edx,dword ptr [esi+0x38]
	add edx,eax
	mov eax,dword ptr [esi+0x5C]
	mov dword ptr [esi+0x4C],edx
	cmp dword ptr [eax],ebp
	je Block3

 Block2:
	lea eax,[ebp+1]
	jmp Block102

 Block3:
	cmp dword ptr [eax+4],ebp
	jne Block101

 Block4:
	mov eax,dword ptr [esi+0x18]
	sub eax,dword ptr [esi+0x10]
	mov ebx,dword ptr [esi+0x20]
	mov edi,dword ptr [esi+0x28]
	mov dword ptr [esp+0x40],eax
	mov eax,dword ptr [esi+0x1C]
	sub eax,dword ptr [esi+0x14]
	sub edi,ebx
	mov dword ptr [esp+0x44],eax
	je Block6

 Block5:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	div edi
	add edx,ebx
	mov dword ptr [esp+0x7C],edx
	jmp Block7

 Block6:
	mov dword ptr [esp+0x7C],ebx

 Block7:
	mov ebx,dword ptr [esi+0x24]
	mov edi,dword ptr [esi+0x2C]
	sub edi,ebx
	je Block9

 Block8:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	div edi
	add edx,ebx
	mov dword ptr [esp+0x30],edx
	jmp Block10

 Block9:
	mov dword ptr [esp+0x30],ebx

 Block10:
	mov eax,dword ptr [esi+0xC]
	cmp eax,ebp
	jne Block12

 Block11:
	xor eax,eax
	jmp Block13

 Block12:
	mov eax,dword ptr [eax-4]

 Block13:
	xor ebx,ebx
	cmp eax,ebp
	setne bl
	mov dword ptr [esp+0x14],ebp
	cmp ebx,ebp
	je Block21

 Block14:
	mov ecx,dword ptr [esi+0xC]
	mov eax,dword ptr [esi+0x54]
	lea eax,[ecx+eax*4]
	mov ecx,dword ptr [eax]
	cmp ecx,ebp
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	call IWzShape2D::Getx
	mov edx,dword ptr [esi+0x54]
	mov ebp,eax
	mov eax,dword ptr [esi+0xC]
	mov ecx,dword ptr [eax+edx*4]
	lea eax,[eax+edx*4]
	mov dword ptr [esp+0x28],ebp
	test ecx,ecx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	call IWzShape2D::Gety
	inc dword ptr [esi+0x54]
	mov ecx,dword ptr [esi+0xC]
	mov edi,eax
	mov eax,dword ptr [esi+0x54]
	mov dword ptr [esp+0x24],edi
	test ecx,ecx
	jne Block20

 Block19:
	xor edx,edx
	div ecx
	mov dword ptr [esi+0x54],edx
	jmp Block25

 Block20:
	mov ecx,dword ptr [ecx-4]
	xor edx,edx
	div ecx
	mov dword ptr [esi+0x54],edx
	jmp Block25

 Block21:
	mov ecx,dword ptr [esi+0x44]
	cmp ecx,ebp
	je Block23

 Block22:
	mov eax,dword ptr [esi+0x50]
	mov dword ptr [esp+0x14],eax
	lea eax,[eax+ecx+0x168]
	cdq
	mov ecx,0x168
	idiv ecx
	mov dword ptr [esi+0x50],edx
	jmp Block24

 Block23:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,0x168
	div ecx
	mov dword ptr [esp+0x14],edx

 Block24:
	mov edi,dword ptr [esp+0x24]
	mov ebp,dword ptr [esp+0x28]

 Block25:
	cmp dword ptr [esi+0x40],0
	fild dword ptr [esp+0x14]
	fdiv qword ptr [__real_4066800000000000]
	fmul qword ptr [_D_PI__215]
	fst qword ptr [esp+0x14]
	je Block29

 Block26:
	test ebx,ebx
	je Block28

 Block27:
	fstp st(0)
	fild dword ptr [esp+0x24]
	fild dword ptr [esp+0x28]
	call __CIatan2
	fstp qword ptr [esp+0x14]
	jmp Block36

 Block28:
	fild dword ptr [esp+0x7C]
	fstp qword ptr [esp+0x44]
	call __CIcos
	fmul qword ptr [esp+0x44]
	call __ftol2_sse
	fld qword ptr [esp+0x14]
	mov ebp,eax
	call __CIsin
	fmul qword ptr [esp+0x44]
	call __ftol2_sse
	mov edi,eax
	jmp Block36

 Block29:
	mov eax,dword ptr [esp+0x40]
	fstp st(0)
	test eax,eax
	je Block31

 Block30:
	push 0
	push eax
	call get_rand_0
	add esp,8
	jmp Block32

 Block31:
	xor eax,eax

 Block32:
	mov ebp,dword ptr [esi+0x10]
	add ebp,eax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block34

 Block33:
	push 0
	push eax
	call get_rand_0
	add esp,8
	jmp Block35

 Block34:
	xor eax,eax

 Block35:
	mov edi,dword ptr [esi+0x14]
	add edi,eax

 Block36:
	xor ebx,ebx
	cmp dword ptr [esi+0x40],ebx
	je Block38

 Block37:
	mov ebx,0xA

 Block38:
	cmp dword ptr [esi+0x3C],0
	mov ecx,dword ptr [esi+8]
	push 0
	push 0xFF
	je Block44

 Block39:
	test ecx,ecx
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	call IWzGr2DLayer::Getz
	add eax,dword ptr [esi+0x30]
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [eax],0
	add ebx,edi
	push ebx
	push ebp
	push ecx
	lea edx,[esi+4]
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push edx
	mov dword ptr [esp+0x94],0
	call _x_com_ptr<IWzVector2D>::_ctor_copy
	mov eax,dword ptr [esi]
	mov byte ptr [esp+0x90],1
	push 0
	test eax,eax
	je Block43

 Block42:
	mov eax,dword ptr [eax-4]

 Block43:
	push 0
	push eax
	call get_rand_0
	mov ecx,dword ptr [esi]
	add esp,4
	lea eax,[ecx+eax*4]
	mov ecx,esp
	mov dword ptr [esp+0x50],esp
	push eax
	call _x_com_ptr<IWzProperty>::_ctor_copy
	lea edx,[esp+0x64]
	push edx
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	call CAnimationDisplayer::LoadLayer_0
	add esp,0x28
	mov dword ptr [esp+0x74],2
	mov ebx,1
	jmp Block53

 Block44:
	test ecx,ecx
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	call IWzGr2DLayer::Getz
	add eax,dword ptr [esi+0x30]
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [eax],0
	mov ecx,dword ptr [esi+4]
	mov dword ptr [esp+0x84],3
	test ecx,ecx
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	call IWzShape2D::Gety
	mov ecx,dword ptr [esi+4]
	add eax,ebx
	add eax,edi
	push eax
	test ecx,ecx
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	call IWzShape2D::Getx
	add eax,ebp
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],0
	mov eax,dword ptr [esi]
	mov byte ptr [esp+0x90],4
	push 0
	test eax,eax
	je Block52

 Block51:
	mov eax,dword ptr [eax-4]

 Block52:
	push 0
	push eax
	call get_rand_0
	mov ecx,dword ptr [esi]
	add esp,4
	lea eax,[ecx+eax*4]
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	push eax
	call _x_com_ptr<IWzProperty>::_ctor_copy
	lea edx,[esp+0x68]
	push edx
	mov byte ptr [esp+0x9C],2
	call CAnimationDisplayer::LoadLayer_0
	add esp,0x28
	mov ebx,2

 Block53:
	mov edi,dword ptr [eax]
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x28],edi
	test edi,edi
	je Block55

 Block54:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx

 Block55:
	mov dword ptr [esp+0x74],5
	test bl,2
	je Block58

 Block56:
	mov eax,dword ptr [esp+0x44]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x2C],ebx
	test eax,eax
	je Block58

 Block57:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block58:
	mov byte ptr [esp+0x74],6
	test bl,1
	je Block61

 Block59:
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block61

 Block60:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block61:
	cmp dword ptr [esi+0x48],0
	jne Block65

 Block62:
	mov eax,dword ptr [esi+0x5C]
	test edi,edi
	jne Block64

 Block63:
	push 0x80004003
	call _com_issue_error

 Block64:
	mov eax,dword ptr [eax+8]
	push eax
	mov ecx,edi
	call IWzGr2DLayer::Putflip

 Block65:
	cmp dword ptr [esi+0x40],0
	push offset _D_VTMISSING
	lea ecx,[esp+0x60]
	je Block69

 Block66:
	call Ztl_variant_t::_ctor_1
	mov byte ptr [esp+0x74],7
	test edi,edi
	jne Block68

 Block67:
	push 0x80004003
	call _com_issue_error

 Block68:
	mov ecx,edi
	call IWzVector2D::GetcurrentTime
	add eax,dword ptr [esi+0x34]
	mov ecx,3
	mov word ptr [esp+0x4C],cx
	mov dword ptr [esp+0x54],eax
	fild dword ptr [esp+0x30]
	lea edx,[esp+0x5C]
	push edx
	lea eax,[esp+0x50]
	fstp qword ptr [esp+0x34]
	fld qword ptr [esp+0x18]
	push eax
	mov byte ptr [esp+0x7C],8
	call __CIsin
	fmul qword ptr [esp+0x38]
	call __ftol2_sse
	fld qword ptr [esp+0x1C]
	push eax
	call __CIcos
	fmul qword ptr [esp+0x3C]
	call __ftol2_sse
	jmp Block74

 Block69:
	call Ztl_variant_t::_ctor_1
	mov byte ptr [esp+0x74],9
	test edi,edi
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	mov ecx,edi
	call IWzVector2D::GetcurrentTime
	add eax,dword ptr [esi+0x34]
	mov ecx,3
	mov word ptr [esp+0x4C],cx
	mov dword ptr [esp+0x54],eax
	mov ecx,edi
	mov byte ptr [esp+0x74],0xA
	call IWzGr2DLayer::Getflip
	test eax,eax
	mov eax,dword ptr [esp+0x7C]
	je Block73

 Block72:
	neg eax

 Block73:
	lea edx,[esp+0x5C]
	push edx
	mov edx,dword ptr [esp+0x34]
	lea ecx,[esp+0x50]
	push ecx
	push edx

 Block74:
	push eax
	mov ecx,edi
	call IWzVector2D::RelOffset
	lea ecx,[esp+0x4C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x74],6
	call Ztl_variant_t::~Ztl_variant_t
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
	push eax
	call ebp
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block76

 Block75:
	push eax
	call _com_issue_error

 Block76:
	mov ecx,edi
	mov byte ptr [esp+0x74],0xB
	call IWzVector2D::GetcurrentTime
	add eax,dword ptr [esi+0x34]
	mov edx,3
	mov word ptr [esp+0x30],dx
	mov dword ptr [esp+0x38],eax
	lea eax,[esp+0x7C]
	mov bl,0xC
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x78],bl
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x74],0xD
	test ecx,ecx
	jne Block78

 Block77:
	push 0x80004003
	call _com_issue_error

 Block78:
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x34]
	push eax
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x7C]
	mov byte ptr [esp+0x74],bl
	test eax,eax
	je Block80

 Block79:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block80:
	cmp word ptr [esp+0x30],8
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x74],0xB
	jne Block83

 Block81:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea ecx,[esp+0x30]
	push ecx
	call ebx

 Block84:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x74],6
	jne Block87

 Block85:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea eax,[esp+0x14]
	push eax
	call ebx

 Block88:
	lea ecx,[esp+0x14]
	push ecx
	call ebp
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block90

 Block89:
	push eax
	call _com_issue_error

 Block90:
	lea eax,[esp+0x30]
	mov bl,0xE
	push eax
	mov byte ptr [esp+0x78],bl
	call ebp
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block92

 Block91:
	push eax
	call _com_issue_error

 Block92:
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x34]
	push eax
	push 0x20
	mov ecx,edi
	mov byte ptr [esp+0x80],0xF
	call IWzGr2DLayer::Animate
	mov byte ptr [esp+0x74],bl
	mov ebx,8
	cmp word ptr [esp+0x30],bx
	jne Block95

 Block93:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	mov byte ptr [esp+0x74],6
	cmp word ptr [esp+0x14],bx
	jne Block99

 Block97:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block100:
	mov edx,dword ptr [esi+0x34]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x84],esp
	push edi
	call ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterRepeatAnimation
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov dword ptr [esp+0x78],0xFFFFFFFF
	call eax

 Block101:
	xor eax,eax

 Block102:
	mov ecx,dword ptr [esp+0x6C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x64
	ret 4
}
}
// CAnimationDisplayer::ResetLocalFadeLayer
__SUB_CLASS_THIS0(0003B6F0, __thiscall, 18530,  CAnimationDisplayer, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x174]
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [ecx+0x174],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	ret
}
}
// CAnimationDisplayer::SetCenterOrigin
_SUB_EXCEPTION_HANDLER(42E10)
__SUB_CLASS_THIS(00042E10, __thiscall, 18577,  CAnimationDisplayer, void, NakedParam<_x_com_ptr<IWzVector2D>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_42E10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x4C]
	mov dword ptr fs:[0],eax
	xor ebp,ebp
	mov dword ptr [esp+0x54],ebp
	mov dword ptr [esp+0x14],ebp
	lea eax,[esp+0x18]
	push 0x3D2
	push eax
	mov byte ptr [esp+0x5C],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea ecx,[esp+0x18]
	push ecx
	push eax
	mov byte ptr [esp+0x60],2
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x54],1
	cmp eax,ebp
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+0x5C]
	mov edx,0xD
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],eax
	cmp eax,ebp
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x54],3
	cmp ecx,ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov edi,dword ptr [esp+0x1C]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x30]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x34]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x38]
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [edx+0x64]
	push ecx
	mov esi,ecx
	call eax
	cmp eax,ebp
	jge Block8

 Block7:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	mov edi,8
	mov byte ptr [esp+0x54],1
	cmp word ptr [esp+0x1C],di
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push eax
	call esi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	lea edx,[esp+0x1C]
	mov bl,4
	push edx
	mov byte ptr [esp+0x58],bl
	call esi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x54],5
	cmp ecx,ebp
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x20]
	push eax
	push 0xFFFFFFCE
	push ebp
	call IWzVector2D::RelMove
	mov byte ptr [esp+0x54],bl
	cmp word ptr [esp+0x1C],di
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov byte ptr [esp+0x54],1
	cmp word ptr [esp+0x2C],di
	jne Block25

 Block23:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	mov edx,dword ptr [eax]
	push 0x64
	mov esi,eax
	push eax
	mov eax,dword ptr [edx+0xA8]
	call eax
	cmp eax,ebp
	jge Block30

 Block29:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block30:
	mov esi,dword ptr [_D_G_PSTAGE+4]
	cmp esi,ebp
	je Block33

 Block31:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	je Block33

 Block32:
	mov eax,esi
	jmp Block34

 Block33:
	xor eax,eax

 Block34:
	mov ecx,dword ptr [eax+0x120]
	mov ebx,dword ptr [eax+0x11C]
	mov edi,dword ptr [eax+0x124]
	mov ebp,dword ptr [eax+0x128]
	mov eax,dword ptr [esp+0x14]
	mov edx,0xD
	mov dword ptr [esp+0x40],ecx
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block36:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x54],6
	test ecx,ecx
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea eax,[esp+0x18]
	push eax
	call IWzGr2D::Getcenter
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x54],7
	test esi,esi
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
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block42

 Block41:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block42:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x54],6
	test eax,eax
	je Block44

 Block43:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block44:
	mov esi,8
	mov byte ptr [esp+0x54],1
	cmp word ptr [esp+0x1C],si
	jne Block47

 Block45:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	mov edx,3
	mov word ptr [esp+0x2C],dx
	mov dword ptr [esp+0x34],1
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x54],8
	test ecx,ecx
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea eax,[esp+0x18]
	push eax
	call IWzGr2D::Getcenter
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x54],9
	test ecx,ecx
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	mov eax,dword ptr [esp+0x40]
	lea edx,[esp+0x2C]
	push edx
	sub ebp,eax
	push ebp
	sub edi,ebx
	push edi
	push eax
	push ebx
	push offset _D_VTEMPTY
	call IWzVector2D::WrapClip
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x54],8
	test eax,eax
	je Block54

 Block53:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block54:
	mov byte ptr [esp+0x54],1
	cmp word ptr [esp+0x2C],si
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
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
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x54],0
	test eax,eax
	je Block60

 Block59:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block60:
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	test eax,eax
	je Block62

 Block61:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block62:
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret 4
}
}
// TAnimation<CAnimationDisplayer::HOOKING_CHAIN_INFO>::~TAnimation<CAnimationDisplayer::HOOKING_CHAIN_INFO>
__SUB_CLASS_THIS0(000414D0, __thiscall, 19306,  TAnimation<CAnimationDisplayer::HOOKING_CHAIN_INFO>, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::HOOKING_CHAIN_INFO>::`vftable'
	jmp  ZList<CAnimationDisplayer::HOOKING_CHAIN_INFO>::RemoveAll
}
}
// TAnimation<CAnimationDisplayer::FADEINFO>::Update
__SUB_CLASS_THIS(00041DF0, __thiscall, 19399,  TAnimation<CAnimationDisplayer::FADEINFO>, void, long) {
__asm {

 Block0:
	push ecx
	push ebx
	mov ebx,ecx
	mov eax,dword ptr [ebx+0xC]
	mov dword ptr [esp+4],eax
	test eax,eax
	je Block6

 Block1:
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]

 Block2:
	mov esi,eax
	lea eax,[esp+0xC]
	push eax
	call ZList<CAnimationDisplayer::FADEINFO>::GetNext
	add esp,4
	push edi
	mov ecx,eax
	call CAnimationDisplayer::FADEINFO::Update
	test eax,eax
	je Block4

 Block3:
	push esi
	mov ecx,ebx
	call ZList<CAnimationDisplayer::FADEINFO>::RemoveAt

 Block4:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	jne Block2

 Block5:
	pop edi
	pop esi

 Block6:
	pop ebx
	pop ecx
	ret 4
}
}
// CAnimationDisplayer::RemovePrepareAnimation
_SUB_EXCEPTION_HANDLER(41B50)
__SUB_CLASS_THIS(00041B50, __thiscall, 18567,  CAnimationDisplayer, void, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_41B50
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
	lea eax,[esp+0x10]
	push eax
	lea ecx,[esp+0x2C]
	lea edi,[esi+4]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0x28],0
	call ZMap<unsigned long, ZRef<CAnimationDisplayer::PREPAREINFO>, unsigned long>::GetAt
	mov ebx,dword ptr [esp+0x14]
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [ebx+4]
	push edx
	lea ecx,[esi+0x1C]
	call ZList<ZRef<CAnimationDisplayer::PREPAREINFO>>::RemoveAt
	push ebx
	mov ecx,edi
	call ZMap<unsigned long, ZRef<CAnimationDisplayer::PREPAREINFO>, unsigned long>::RemoveKey

 Block2:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test ebx,ebx
	je Block6

 Block3:
	lea esi,[ebx-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block6

 Block4:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block6

 Block5:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block6:
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
// CAnimationDisplayer::FIRECRACKER::Update
_SUB_EXCEPTION_HANDLER(4E0F0)
__SUB_CLASS_THIS(0004E0F0, __thiscall, 18863,  CAnimationDisplayer::FIRECRACKER, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E0F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x64]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov ecx,dword ptr [esp+0x74]
	mov eax,ecx
	sub eax,dword ptr [edi+0x24]
	test eax,eax
	jle Block2

 Block1:
	mov eax,1
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x60
	ret 4

 Block2:
	mov eax,dword ptr [edi+0x20]
	sub ecx,eax
	js Block47

 Block3:
	mov ecx,dword ptr [edi+0x18]
	mov esi,dword ptr [edi+8]
	mov ebx,dword ptr [edi+0x10]
	add ecx,eax
	mov eax,dword ptr [edi+0xC]
	sub esi,eax
	lea eax,[eax+eax*2]
	cdq
	and edx,3
	add eax,edx
	sar eax,2
	mov dword ptr [edi+0xC],eax
	mov eax,dword ptr [edi+0x14]
	sub ebx,eax
	lea eax,[eax+eax*2]
	cdq
	and edx,3
	add eax,edx
	sar eax,2
	cmp dword ptr [edi+0x1C],0
	mov dword ptr [edi+0x20],ecx
	mov dword ptr [esp+0x10],esi
	mov dword ptr [edi+0x14],eax
	mov dword ptr [esp+0x14],0
	jle Block47

 Block4:
	mov eax,ebx
	cdq
	sub eax,edx
	mov ecx,eax
	mov eax,esi
	cdq
	sar ecx,1
	sub eax,edx
	sar eax,1
	mov dword ptr [esp+0x18],ecx
	mov dword ptr [esp+0x1C],eax
	jmp Block6

 Block5:
	mov ecx,dword ptr [esp+0x18]

 Block6:
	push 0
	push 0xFF
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [eax],0
	mov esi,dword ptr [edi+4]
	sub esi,ecx
	mov ecx,offset _D_G_RAND
	mov dword ptr [esp+0x7C],0
	call CRand32::Random
	test ebx,ebx
	je Block8

 Block7:
	xor edx,edx
	div ebx
	mov eax,edx
	add eax,esi

 Block8:
	mov esi,dword ptr [edi]
	sub esi,dword ptr [esp+0x2C]
	push eax
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	cmp dword ptr [esp+0x24],0
	je Block10

 Block9:
	xor edx,edx
	div dword ptr [esp+0x24]
	mov eax,edx
	add eax,esi

 Block10:
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	mov dword ptr [eax],0
	mov eax,dword ptr [edi+0x28]
	mov byte ptr [esp+0x88],1
	push 0
	test eax,eax
	je Block13

 Block11:
	mov esi,dword ptr [eax-4]
	test esi,esi
	je Block13

 Block12:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	div esi
	mov eax,edx
	jmp Block14

 Block13:
	mov ecx,offset _D_G_RAND
	call CRand32::Random

 Block14:
	mov edx,dword ptr [edi+0x28]
	lea eax,[edx+eax*4]
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x54],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block16:
	lea eax,[esp+0x98]
	push eax
	mov dword ptr [esp+0x94],0xFFFFFFFF
	call CAnimationDisplayer::LoadLayer_0
	add esp,0x28
	mov ecx,dword ptr [_D_G_GR]
	mov dword ptr [esp+0x6C],2
	test ecx,ecx
	je Block48

 Block17:
	lea edx,[esp+0x24]
	push edx
	call IWzGr2D::Getcenter
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x6C],3
	mov word ptr [esp+0x34],cx
	mov dword ptr [esp+0x3C],eax
	test eax,eax
	je Block19

 Block18:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block19:
	mov ecx,dword ptr [esp+0x74]
	mov byte ptr [esp+0x6C],4
	test ecx,ecx
	je Block48

 Block20:
	lea edx,[esp+0x20]
	push edx
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x6C],5
	test esi,esi
	je Block48

 Block21:
	mov edx,dword ptr [esp+0x34]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x50]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block23

 Block22:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block23:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x6C],4
	test eax,eax
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block25:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x6C],3
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x6C],2
	test eax,eax
	je Block31

 Block30:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block31:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x54]
	push ecx
	call esi
	lea edx,[esp+0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block49

 Block32:
	lea eax,[esp+0x44]
	push eax
	mov byte ptr [esp+0x70],6
	call esi
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block49

 Block33:
	mov ecx,dword ptr [esp+0x74]
	mov byte ptr [esp+0x6C],7
	test ecx,ecx
	je Block48

 Block34:
	lea edx,[esp+0x54]
	push edx
	lea eax,[esp+0x48]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x6C],6
	cmp word ptr [esp+0x44],si
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov byte ptr [esp+0x6C],2
	cmp word ptr [esp+0x54],si
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [eax],0
	mov edx,dword ptr [esp+0x78]
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x80]
	mov dword ptr [esp+0x3C],esp
	test eax,eax
	je Block44

 Block43:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block44:
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov eax,dword ptr [esp+0x74]
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	test eax,eax
	je Block46

 Block45:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block46:
	mov eax,dword ptr [esp+0x14]
	inc eax
	cmp eax,dword ptr [edi+0x1C]
	mov dword ptr [esp+0x14],eax
	jl Block5

 Block47:
	xor eax,eax
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x60
	ret 4

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	push eax
	call _com_issue_error
}
}
// CAnimationDisplayer::Effect_SkillUse
_SUB_EXCEPTION_HANDLER(59100)
__SUB_CLASS_THIS(00059100, __thiscall, 18592,  CAnimationDisplayer, void, const wchar_t*, int32_t, NakedParam<_x_com_ptr<IWzVector2D>>, NakedParam<_x_com_ptr<IWzGr2DLayer>>, long, long, long, long, long, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_59100
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
	mov dword ptr [ebp-0x24],ecx
	xor esi,esi
	mov dword ptr [ebp-4],esi
	mov dword ptr [ebp-0x1C],esi
	or edi,0xFFFFFFFF
	cmp dword ptr [ebp+0x1C],edi
	mov bl,2
	mov byte ptr [ebp-4],bl
	mov dword ptr [ebp-0x20],edi
	jl Block33

 Block1:
	test edi,edi
	jl Block3

 Block2:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push edi
	call __itow
	add esp,0xC
	mov esi,eax
	jmp Block4

 Block3:
	mov esi,offset _S___3

 Block4:
	lea eax,[ebp-0x48]
	push 0x3DA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebp+8]
	mov eax,dword ptr [eax]
	push esi
	push ecx
	push eax
	lea edx,[ebp-0x1C]
	push edx
	mov byte ptr [ebp-4],3
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x48]
	add esp,0x10
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [ebp+0x20]
	push 0
	push 0xFF
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x14]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x14]
	mov dword ptr [ebp-0x18],esp
	test eax,eax
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block8:
	mov ecx,dword ptr [ebp+0x28]
	mov edx,dword ptr [ebp+0x24]
	push ecx
	push edx
	push ecx
	mov ecx,dword ptr [ebp+0x10]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x10]
	mov dword ptr [ebp-0x18],esp
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block10:
	mov ecx,dword ptr [ebp+0xC]
	mov esi,dword ptr [ebp-0x1C]
	push ecx
	lea edx,[ebp-0x14]
	push esi
	push edx
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	mov ecx,dword ptr [ebp-0x14]
	test ecx,ecx
	sete al
	mov byte ptr [ebp-4],4
	test al,al
	jne Block40

 Block11:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block42

 Block12:
	mov edx,3
	mov word ptr [ebp-0x44],dx
	mov edx,dword ptr [ebp+0x18]
	mov dword ptr [ebp-0x3C],edx
	mov ecx,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],6
	test ecx,ecx
	je Block43

 Block13:
	mov ebx,dword ptr [ebp-0x34]
	mov edi,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x30]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp-0x2C]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [ebp-0x28]
	mov dword ptr [eax+0xC],ebx
	mov ebx,dword ptr [ebp-0x44]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x40]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x38]
	push 0
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [edi+0x110]
	push ecx
	mov esi,ecx
	call eax
	test eax,eax
	jge Block15

 Block14:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block15:
	mov esi,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x44],si
	jne Block18

 Block16:
	mov eax,dword ptr [ebp-0x3C]
	xor ecx,ecx
	mov word ptr [ebp-0x44],cx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea edx,[ebp-0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x34],si
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	cmp dword ptr [ebp+0x2C],0
	push ecx
	mov dword ptr [ebp-0x18],esp
	mov eax,esp
	je Block26

 Block24:
	mov edx,dword ptr [ebp+0x14]
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp+0x14]
	test eax,eax
	je Block27

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx
	jmp Block27

 Block26:
	mov dword ptr [eax],0

 Block27:
	push 0
	push ecx
	mov ecx,dword ptr [ebp-0x14]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-0x18],esp
	test eax,eax
	je Block29

 Block28:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block29:
	mov ecx,dword ptr [ebp-0x24]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov eax,dword ptr [ebp-0x14]
	mov bl,2
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block31:
	mov edi,dword ptr [ebp-0x20]
	inc edi
	cmp edi,dword ptr [ebp+0x1C]
	mov dword ptr [ebp-0x20],edi
	jle Block1

 Block32:
	mov esi,dword ptr [ebp-0x1C]

 Block33:
	mov byte ptr [ebp-4],1
	test esi,esi
	je Block35

 Block34:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block35:
	mov eax,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block37

 Block36:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block37:
	mov eax,dword ptr [ebp+0x14]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block39:
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
	ret 0x28

 Block40:
	mov byte ptr [ebp-4],bl
	test ecx,ecx
	je Block33

 Block41:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx
	jmp Block33

 Block42:
	push eax
	call _com_issue_error

 Block43:
	push 0x80004003
	call _com_issue_error
}
}
// TAnimation<CAnimationDisplayer::CHAINLIGHTNINGINFO>::Update
__SUB_CLASS_THIS(00054FC0, __thiscall, 19285,  TAnimation<CAnimationDisplayer::CHAINLIGHTNINGINFO>, void, long) {
__asm {

 Block0:
	push ecx
	push ebx
	mov ebx,ecx
	mov eax,dword ptr [ebx+0xC]
	mov dword ptr [esp+4],eax
	test eax,eax
	je Block6

 Block1:
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]

 Block2:
	mov esi,eax
	lea eax,[esp+0xC]
	push eax
	call ZList<CAnimationDisplayer::CHAINLIGHTNINGINFO>::GetNext
	add esp,4
	push edi
	mov ecx,eax
	call CAnimationDisplayer::CHAINLIGHTNINGINFO::Update
	test eax,eax
	je Block4

 Block3:
	push esi
	mov ecx,ebx
	call ZList<CAnimationDisplayer::CHAINLIGHTNINGINFO>::RemoveAt

 Block4:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	jne Block2

 Block5:
	pop edi
	pop esi

 Block6:
	pop ebx
	pop ecx
	ret 4
}
}
// TAnimation<CAnimationDisplayer::FOOTHOLDINFO>::Update
__SUB_CLASS_THIS(00048C10, __thiscall, 19487,  TAnimation<CAnimationDisplayer::FOOTHOLDINFO>, void, long) {
__asm {

 Block0:
	push ecx
	push ebx
	mov ebx,ecx
	mov eax,dword ptr [ebx+0xC]
	mov dword ptr [esp+4],eax
	test eax,eax
	je Block6

 Block1:
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]

 Block2:
	mov esi,eax
	lea eax,[esp+0xC]
	push eax
	call ZList<CAnimationDisplayer::FOOTHOLDINFO>::GetNext
	add esp,4
	push edi
	mov ecx,eax
	call CAnimationDisplayer::FOOTHOLDINFO::Update
	test eax,eax
	je Block4

 Block3:
	push esi
	mov ecx,ebx
	call ZList<CAnimationDisplayer::FOOTHOLDINFO>::RemoveAt

 Block4:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	jne Block2

 Block5:
	pop edi
	pop esi

 Block6:
	pop ebx
	pop ecx
	ret 4
}
}
// CAnimationDisplayer::LoadCanvas
_SUB_EXCEPTION_HANDLER(46E60)
__SUB(00046E60, __cdecl, 18521,  void, NakedParam<_x_com_ptr<IWzGr2DLayer>>, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_46E60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x70
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x84]
	mov dword ptr fs:[0],eax
	push 0x78
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x1AA9
	push eax
	mov dword ptr [esp+0x9C],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xA0]
	mov byte ptr [esp+0x94],2
	test ecx,ecx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x1C]
	push edx
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x94],3
	test ecx,ecx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea eax,[esp+0x6C]
	mov bl,4
	push eax
	mov byte ptr [esp+0x98],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x94],5
	call get_int32
	mov esi,8
	add esp,8
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x8C],bl
	cmp word ptr [esp+0x64],si
	jne Block7

 Block5:
	mov eax,dword ptr [esp+0x6C]
	xor ecx,ecx
	mov word ptr [esp+0x64],cx
	test eax,eax
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea edx,[esp+0x64]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block8:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x8C],1
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	push 0xFFFFFFFF
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x1A98
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xA0]
	mov byte ptr [esp+0x94],6
	test ecx,ecx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea edx,[esp+0x1C]
	push edx
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x94],7
	test ecx,ecx
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea eax,[esp+0x6C]
	push eax
	mov byte ptr [esp+0x98],8
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x94],9
	call get_int32
	add esp,8
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x8C],8
	cmp word ptr [esp+0x64],si
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x6C]
	xor ecx,ecx
	mov word ptr [esp+0x64],cx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea edx,[esp+0x64]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x8C],1
	test eax,eax
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	push 0xFFFFFFFF
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x1A99
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xA0]
	mov byte ptr [esp+0x94],0xA
	test ecx,ecx
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea edx,[esp+0x1C]
	push edx
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x94],0xB
	test ecx,ecx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea eax,[esp+0x6C]
	mov bl,0xC
	push eax
	mov byte ptr [esp+0x98],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x94],0xD
	call get_int32
	add esp,8
	mov ebp,eax
	mov byte ptr [esp+0x8C],bl
	cmp word ptr [esp+0x64],si
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x6C]
	xor ecx,ecx
	mov word ptr [esp+0x64],cx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea edx,[esp+0x64]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x8C],1
	test eax,eax
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x3D7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xA0]
	mov byte ptr [esp+0x94],0xE
	test ecx,ecx
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	lea edx,[esp+0x1C]
	push edx
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x94],0xF
	test ecx,ecx
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	lea eax,[esp+0x6C]
	mov bl,0x10
	push eax
	mov byte ptr [esp+0x98],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x94],0x11
	call get_int32
	add esp,8
	mov edi,eax
	mov byte ptr [esp+0x8C],bl
	cmp word ptr [esp+0x64],si
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x6C]
	xor ecx,ecx
	mov word ptr [esp+0x64],cx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea edx,[esp+0x64]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x8C],1
	test eax,eax
	je Block40

 Block39:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block40:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x3D8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0xA0]
	mov byte ptr [esp+0x94],0x12
	test ecx,ecx
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	lea edx,[esp+0x1C]
	push edx
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x94],0x13
	test ecx,ecx
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	lea eax,[esp+0x6C]
	mov bl,0x14
	push eax
	mov byte ptr [esp+0x98],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x94],0x15
	call get_int32
	add esp,8
	cmp word ptr [esp+0x64],8
	mov esi,eax
	mov byte ptr [esp+0x8C],bl
	jne Block52

 Block45:
	mov eax,dword ptr [esp+0x6C]
	xor ecx,ecx
	mov word ptr [esp+0x64],cx
	test eax,eax
	je Block47

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block47:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block48:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x8C],1
	test eax,eax
	je Block50

 Block49:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block50:
	mov eax,3
	mov word ptr [esp+0x64],ax
	mov dword ptr [esp+0x6C],esi
	mov ecx,eax
	mov word ptr [esp+0x54],cx
	mov dword ptr [esp+0x5C],edi
	mov edx,eax
	mov word ptr [esp+0x44],dx
	mov dword ptr [esp+0x4C],ebp
	mov ecx,dword ptr [esp+0x18]
	mov word ptr [esp+0x34],ax
	mov dword ptr [esp+0x3C],ecx
	mov eax,dword ptr [esp+0x1C]
	mov word ptr [esp+0x24],dx
	mov dword ptr [esp+0x2C],eax
	mov ecx,dword ptr [esp+0x94]
	mov byte ptr [esp+0x8C],0x1A
	test ecx,ecx
	jne Block53

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x64]
	push edx
	call ebx
	jmp Block48

 Block53:
	lea edx,[esp+0x64]
	push edx
	lea eax,[esp+0x58]
	push eax
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x40]
	push eax
	mov eax,dword ptr [esp+0xA8]
	lea edx,[esp+0x34]
	push edx
	push eax
	lea edx,[esp+0x8C]
	push edx
	call IWzGr2DLayer::InsertCanvas
	mov esi,8
	cmp word ptr [esp+0x74],si
	jne Block56

 Block54:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea ecx,[esp+0x74]
	push ecx
	call ebx

 Block57:
	mov byte ptr [esp+0x8C],0x19
	cmp word ptr [esp+0x24],si
	jne Block60

 Block58:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea eax,[esp+0x24]
	push eax
	call ebx

 Block61:
	mov byte ptr [esp+0x8C],0x18
	cmp word ptr [esp+0x34],si
	jne Block64

 Block62:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea edx,[esp+0x34]
	push edx
	call ebx

 Block65:
	mov byte ptr [esp+0x8C],0x17
	cmp word ptr [esp+0x44],si
	jne Block68

 Block66:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea ecx,[esp+0x44]
	push ecx
	call ebx

 Block69:
	mov byte ptr [esp+0x8C],0x16
	cmp word ptr [esp+0x54],si
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
	call ebx

 Block73:
	mov byte ptr [esp+0x8C],1
	cmp word ptr [esp+0x64],si
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
	call ebx

 Block77:
	mov eax,dword ptr [esp+0x94]
	mov byte ptr [esp+0x8C],0
	test eax,eax
	je Block79

 Block78:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block79:
	mov eax,dword ptr [esp+0x98]
	mov dword ptr [esp+0x8C],0xFFFFFFFF
	test eax,eax
	je Block81

 Block80:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block81:
	mov ecx,dword ptr [esp+0x84]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x7C
	ret
}
}
// CAnimationDisplayer::RegisterMagicBulletAnimation
_SUB_EXCEPTION_HANDLER(55570)
__SUB_CLASS_THIS(00055570, __thiscall, 18537,  CAnimationDisplayer, void, long, long, NakedParam<tagPOINT>, NakedParam<tagPOINT>, NakedParam<_x_com_ptr<IWzVector2D>>, long, NakedParam<Ztl_bstr_t>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_55570
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr [esp+0x20],1
	test ecx,ecx
	je Block4

 Block1:
	cmp dword ptr [ecx],0
	je Block4

 Block2:
	mov eax,dword ptr [ecx]
	test eax,eax
	je Block4

 Block3:
	mov eax,dword ptr [eax-4]
	shr eax,1
	jne Block6

 Block4:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x20],0
	test eax,eax
	je Block23

 Block5:
	jmp Block21

 Block6:
	push 0x4C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x10],esi
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x20],2
	test esi,esi
	je Block12

 Block7:
	mov eax,dword ptr [esp+0x4C]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x50]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x54],esp
	test eax,eax
	je Block9

 Block8:
	add eax,8
	push eax
	call ebp

 Block9:
	mov edx,dword ptr [esp+0x4C]
	push edx
	push ecx
	mov ecx,dword ptr [esp+0x50]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x5C],esp
	test eax,eax
	je Block11

 Block10:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block11:
	mov ecx,dword ptr [esp+0x4C]
	mov edx,dword ptr [esp+0x48]
	mov eax,dword ptr [esp+0x44]
	push ecx
	mov ecx,dword ptr [esp+0x44]
	push edx
	mov edx,dword ptr [esp+0x44]
	push eax
	mov eax,dword ptr [esp+0x44]
	push ecx
	push edx
	push eax
	mov ecx,esi
	call CAnimationDisplayer::MagicBullet::_ctor_0
	mov esi,eax
	jmp Block13

 Block12:
	xor esi,esi

 Block13:
	mov dword ptr [esp+0x14],esi
	test esi,esi
	je Block15

 Block14:
	lea ecx,[esi+4]
	push ecx
	call ebp

 Block15:
	sub esp,8
	mov eax,esp
	mov byte ptr [esp+0x28],3
	mov dword ptr [esp+0x54],esp
	mov dword ptr [eax+4],esi
	test esi,esi
	je Block17

 Block16:
	lea edx,[esi+4]
	push edx
	call ebp

 Block17:
	lea ecx,[edi+0x178]
	call BulletContainer<CBullet>::Insert
	mov byte ptr [esp+0x20],1
	test esi,esi
	je Block20

 Block18:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block20

 Block19:
	push edi
	call ebp
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block20:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x20],0
	test eax,eax
	je Block22

 Block21:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block22:
	mov ecx,dword ptr [esp+0x48]

 Block23:
	test ecx,ecx
	je Block25

 Block24:
	call _xbstr_t::Data_t::Release

 Block25:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x14
	ret 0x28
}
}
// CAnimationDisplayer::RegisterMobSwallowAnimation
_SUB_EXCEPTION_HANDLER(559B0)
__SUB_CLASS_THIS(000559B0, __thiscall, 18562,  CAnimationDisplayer, void, long, long, NakedParam<tagPOINT>, NakedParam<tagPOINT>, NakedParam<_x_com_ptr<IWzVector2D>>, long, NakedParam<_x_com_ptr<IWzCanvas>>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_559B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	push 0x58
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x28],1
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x10],esi
	mov byte ptr [esp+0x24],2
	test esi,esi
	je Block6

 Block1:
	push ecx
	mov ecx,dword ptr [esp+0x50]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x18],esp
	test eax,eax
	je Block3

 Block2:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block3:
	mov ecx,dword ptr [esp+0x54]
	mov edx,dword ptr [esp+0x4C]
	push ecx
	push edx
	push ecx
	mov ecx,dword ptr [esp+0x54]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0x60],esp
	test eax,eax
	je Block5

 Block4:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block5:
	mov ecx,dword ptr [esp+0x50]
	mov edx,dword ptr [esp+0x4C]
	mov eax,dword ptr [esp+0x48]
	push ecx
	mov ecx,dword ptr [esp+0x48]
	push edx
	mov edx,dword ptr [esp+0x48]
	push eax
	mov eax,dword ptr [esp+0x48]
	push ecx
	push edx
	push eax
	mov ecx,esi
	call CAnimationDisplayer::MobSwallowedBullet::_ctor_0
	mov esi,eax
	jmp Block7

 Block6:
	xor esi,esi

 Block7:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x18],esi
	test esi,esi
	je Block9

 Block8:
	lea ecx,[esi+4]
	push ecx
	call ebp

 Block9:
	sub esp,8
	mov eax,esp
	mov byte ptr [esp+0x2C],3
	mov dword ptr [esp+0x58],esp
	mov dword ptr [eax+4],esi
	test esi,esi
	je Block11

 Block10:
	lea edx,[esi+4]
	push edx
	call ebp

 Block11:
	lea ecx,[edi+0x178]
	call BulletContainer<CBullet>::Insert
	mov byte ptr [esp+0x24],1
	test esi,esi
	je Block14

 Block12:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block14

 Block13:
	push edi
	call ebp
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block14:
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x24],0
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	mov eax,dword ptr [esp+0x4C]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x18
	ret 0x28
}
}
// CAnimationDisplayer::FOLLOWINFO::operator=
__SUB_CLASS_THIS(00043B80, __thiscall, 18687,  CAnimationDisplayer::FOLLOWINFO, CAnimationDisplayer::FOLLOWINFO&, const CAnimationDisplayer::FOLLOWINFO&) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	push edi
	mov esi,ecx
	call ZArray<_x_com_ptr<IWzProperty>>::operator=
	mov eax,dword ptr [edi+4]
	mov ebx,dword ptr [esi+4]
	cmp ebx,eax
	je Block5

 Block1:
	mov dword ptr [esi+4],eax
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	test ebx,ebx
	je Block5

 Block4:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block5:
	mov eax,dword ptr [edi+8]
	mov ebx,dword ptr [esi+8]
	cmp ebx,eax
	je Block10

 Block6:
	mov dword ptr [esi+8],eax
	test eax,eax
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block8:
	test ebx,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block10:
	lea eax,[edi+0xC]
	push eax
	lea ecx,[esi+0xC]
	call ZArray<_x_com_ptr<IWzVector2D>>::operator=
	mov ecx,dword ptr [edi+0x10]
	mov dword ptr [esi+0x10],ecx
	mov edx,dword ptr [edi+0x14]
	mov dword ptr [esi+0x14],edx
	mov eax,dword ptr [edi+0x18]
	mov dword ptr [esi+0x18],eax
	mov ecx,dword ptr [edi+0x1C]
	mov dword ptr [esi+0x1C],ecx
	mov edx,dword ptr [edi+0x20]
	mov dword ptr [esi+0x20],edx
	mov eax,dword ptr [edi+0x24]
	mov dword ptr [esi+0x24],eax
	mov ecx,dword ptr [edi+0x28]
	mov dword ptr [esi+0x28],ecx
	mov edx,dword ptr [edi+0x2C]
	mov dword ptr [esi+0x2C],edx
	mov eax,dword ptr [edi+0x30]
	mov dword ptr [esi+0x30],eax
	mov ecx,dword ptr [edi+0x34]
	mov dword ptr [esi+0x34],ecx
	mov edx,dword ptr [edi+0x38]
	mov dword ptr [esi+0x38],edx
	mov eax,dword ptr [edi+0x3C]
	mov dword ptr [esi+0x3C],eax
	mov ecx,dword ptr [edi+0x40]
	mov dword ptr [esi+0x40],ecx
	mov edx,dword ptr [edi+0x44]
	mov dword ptr [esi+0x44],edx
	mov eax,dword ptr [edi+0x48]
	mov dword ptr [esi+0x48],eax
	mov ecx,dword ptr [edi+0x4C]
	mov dword ptr [esi+0x4C],ecx
	mov edx,dword ptr [edi+0x50]
	mov dword ptr [esi+0x50],edx
	mov eax,dword ptr [edi+0x54]
	add edi,0x58
	push edi
	lea ecx,[esi+0x58]
	mov dword ptr [esi+0x54],eax
	call ZRef<AnimationState>::op_assign_copy
	pop edi
	mov eax,esi
	pop esi
	pop ebx
	ret 4
}
}
// CAnimationDisplayer::Effect_Quest
_SUB_EXCEPTION_HANDLER(59410)
__SUB_CLASS_THIS(00059410, __thiscall, 18594,  CAnimationDisplayer, void, long, NakedParam<_x_com_ptr<IWzVector2D>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_59410
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
	mov dword ptr [esp+0x10],ecx
	mov esi,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],0
	test esi,esi
	jl Block7

 Block1:
	mov dword ptr [esp+0x28],0
	lea eax,[esp+0xC]
	push 0x3EC
	push eax
	mov byte ptr [esp+0x28],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea ecx,[esp+0x30]
	push ecx
	mov byte ptr [esp+0x2C],2
	call ZXString16::Format
	mov eax,dword ptr [esp+0x18]
	add esp,0xC
	mov byte ptr [esp+0x20],1
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block3:
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0
	mov dword ptr [eax],0
	mov edx,dword ptr [esp+0x38]
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x28],esp
	test eax,eax
	je Block5

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block5:
	mov edi,dword ptr [esp+0x3C]
	mov ecx,dword ptr [esp+0x24]
	push 0
	push edi
	call CAnimationDisplayer::Effect_General
	push esi
	call play_quest_sound
	add esp,4
	mov byte ptr [esp+0x20],0
	test edi,edi
	je Block7

 Block6:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block7:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x18
	ret 8
}
}
// CAnimationDisplayer::FADEINFO::Update
_SUB_EXCEPTION_HANDLER(3B780)
__SUB_CLASS_THIS(0003B780, __thiscall, 18989,  CAnimationDisplayer::FADEINFO, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B780
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [esi+8]
	mov ecx,dword ptr [esp+0x38]
	add edx,eax
	cmp ecx,edx
	jl Block2

 Block1:
	mov eax,1
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x2C
	ret 4

 Block2:
	cmp ecx,eax
	jl Block22

 Block3:
	cmp dword ptr [esi],0
	jne Block22

 Block4:
	lea eax,[esp+0x18]
	push eax
	mov dword ptr [esi],1
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [esi+0xC]
	mov dword ptr [esp+0x30],0
	test ecx,ecx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	call IWzVector2D::GetcurrentTime
	add eax,dword ptr [esi+8]
	mov edx,3
	mov word ptr [esp+8],dx
	mov dword ptr [esp+0x10],eax
	mov ecx,dword ptr [esi+0xC]
	mov byte ptr [esp+0x30],1
	test ecx,ecx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea eax,[esp+0x38]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x30],2
	test ecx,ecx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0xC]
	push eax
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x30],1
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	cmp word ptr [esp+8],8
	mov esi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x30],0
	jne Block17

 Block15:
	xor eax,eax
	mov word ptr [esp+8],ax
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea ecx,[esp+8]
	push ecx
	call esi

 Block18:
	cmp word ptr [esp+0x18],8
	mov dword ptr [esp+0x30],0xFFFFFFFF
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	xor eax,eax
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x2C
	ret 4

 Block21:
	lea eax,[esp+0x18]
	push eax
	call esi

 Block22:
	xor eax,eax
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x2C
	ret 4
}
}
// TAnimation<CAnimationDisplayer::FIRECRACKER>::Update
__SUB_CLASS_THIS(0004ECA0, __thiscall, 19323,  TAnimation<CAnimationDisplayer::FIRECRACKER>, void, long) {
__asm {

 Block0:
	push ecx
	push ebx
	mov ebx,ecx
	mov eax,dword ptr [ebx+0xC]
	mov dword ptr [esp+4],eax
	test eax,eax
	je Block6

 Block1:
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]

 Block2:
	mov esi,eax
	lea eax,[esp+0xC]
	push eax
	call ZList<CAnimationDisplayer::FIRECRACKER>::GetNext
	add esp,4
	push edi
	mov ecx,eax
	call CAnimationDisplayer::FIRECRACKER::Update
	test eax,eax
	je Block4

 Block3:
	push esi
	mov ecx,ebx
	call ZList<CAnimationDisplayer::FIRECRACKER>::RemoveAt

 Block4:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	jne Block2

 Block5:
	pop edi
	pop esi

 Block6:
	pop ebx
	pop ecx
	ret 4
}
}
// TAnimation<CAnimationDisplayer::NEWYEARINFO>::~TAnimation<CAnimationDisplayer::NEWYEARINFO>
__SUB_CLASS_THIS0(000414F0, __thiscall, 19344,  TAnimation<CAnimationDisplayer::NEWYEARINFO>, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::NEWYEARINFO>::`vftable'
	jmp  ZList<CAnimationDisplayer::NEWYEARINFO>::RemoveAll
}
}
// raw_InvokeFly
__SUB(000388D0, __cdecl, 146229,  HRESULT, IWzVector2D*, int32_t, none*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	sub esp,8
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-4],eax
	push ebx
	push esi
	push edi
	mov edi,dword ptr [ebp+0xC]
	lea ebx,[edi+edi*2]
	add ebx,ebx
	mov esi,ebx
	shl esi,4
	mov eax,esi
	call __alloca_probe_16
	mov eax,esp
	lea edi,[edi+edi*2]
	lea ecx,[esi+eax-0x10]
	mov esi,dword ptr [ebp+0x10]
	shl edi,4
	add edi,esi
	mov dword ptr [ebp-8],eax
	cmp esi,edi
	jae Block6

 Block1:
	mov edx,edi
	sub edx,esi
	add edx,0x2F
	mov eax,0x2AAAAAAB
	imul edx
	sar edx,3
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,4
	jl Block4

 Block2:
	lea eax,[edi-0x90]
	lea ebx,[ebx]

 Block3:
	sub ecx,0x10
	sub ecx,0x10
	mov edx,0xD
	mov word ptr [ecx+0x20],dx
	mov edx,dword ptr [esi]
	mov dword ptr [ecx+0x28],edx
	mov edx,5
	mov word ptr [ecx+0x10],dx
	fld qword ptr [esi+8]
	fstp qword ptr [ecx+0x18]
	mov word ptr [ecx],dx
	fld qword ptr [esi+0x10]
	sub ecx,0x10
	fstp qword ptr [ecx+0x18]
	mov word ptr [ecx],dx
	fld qword ptr [esi+0x18]
	sub ecx,0x10
	fstp qword ptr [ecx+0x18]
	mov word ptr [ecx],dx
	fld qword ptr [esi+0x20]
	sub ecx,0x10
	fstp qword ptr [ecx+0x18]
	sub ecx,0x10
	mov edx,3
	mov word ptr [ecx+0x10],dx
	mov edx,dword ptr [esi+0x28]
	mov dword ptr [ecx+0x18],edx
	sub ecx,0x10
	mov edx,0xD
	mov word ptr [ecx+0x10],dx
	mov edx,dword ptr [esi+0x30]
	mov dword ptr [ecx+0x18],edx
	sub ecx,0x10
	mov edx,5
	mov word ptr [ecx+0x10],dx
	fld qword ptr [esi+0x38]
	fstp qword ptr [ecx+0x18]
	mov word ptr [ecx],dx
	fld qword ptr [esi+0x40]
	sub ecx,0x10
	fstp qword ptr [ecx+0x18]
	mov word ptr [ecx],dx
	fld qword ptr [esi+0x48]
	sub ecx,0x10
	fstp qword ptr [ecx+0x18]
	mov word ptr [ecx],dx
	fld qword ptr [esi+0x50]
	sub ecx,0x10
	fstp qword ptr [ecx+0x18]
	mov edx,3
	mov word ptr [ecx],dx
	mov edx,dword ptr [esi+0x58]
	mov dword ptr [ecx+8],edx
	sub ecx,0x10
	mov edx,0xD
	mov word ptr [ecx],dx
	mov edx,dword ptr [esi+0x60]
	mov dword ptr [ecx+8],edx
	sub ecx,0x10
	mov edx,5
	mov word ptr [ecx],dx
	fld qword ptr [esi+0x68]
	fstp qword ptr [ecx+8]
	mov word ptr [ecx-0x10],dx
	fld qword ptr [esi+0x70]
	sub ecx,0x10
	fstp qword ptr [ecx+8]
	mov word ptr [ecx-0x10],dx
	fld qword ptr [esi+0x78]
	sub ecx,0x10
	fstp qword ptr [ecx+8]
	mov word ptr [ecx-0x10],dx
	fld qword ptr [esi+0x80]
	sub ecx,0x10
	fstp qword ptr [ecx+8]
	sub ecx,0x10
	mov edx,3
	mov word ptr [ecx],dx
	mov edx,dword ptr [esi+0x88]
	mov dword ptr [ecx+8],edx
	sub ecx,0x10
	mov edx,0xD
	mov word ptr [ecx],dx
	mov edx,dword ptr [esi+0x90]
	mov dword ptr [ecx+8],edx
	sub ecx,0x10
	mov edx,5
	mov word ptr [ecx],dx
	fld qword ptr [esi+0x98]
	fstp qword ptr [ecx+8]
	mov word ptr [ecx-0x10],dx
	fld qword ptr [esi+0xA0]
	sub ecx,0x10
	fstp qword ptr [ecx+8]
	mov word ptr [ecx-0x10],dx
	fld qword ptr [esi+0xA8]
	sub ecx,0x10
	fstp qword ptr [ecx+8]
	mov word ptr [ecx-0x10],dx
	fld qword ptr [esi+0xB0]
	sub ecx,0x10
	fstp qword ptr [ecx+8]
	sub ecx,0x10
	mov edx,3
	mov word ptr [ecx],dx
	mov edx,dword ptr [esi+0xB8]
	mov dword ptr [ecx+8],edx
	add esi,0xC0
	sub ecx,0x10
	cmp esi,eax
	jl Block3

 Block4:
	cmp esi,edi
	jae Block6

 Block5:
	mov eax,0xD
	mov word ptr [ecx],ax
	mov edx,dword ptr [esi]
	mov dword ptr [ecx+8],edx
	sub ecx,0x10
	mov eax,5
	mov word ptr [ecx],ax
	fld qword ptr [esi+8]
	fstp qword ptr [ecx+8]
	sub ecx,0x10
	mov edx,eax
	mov word ptr [ecx],dx
	fld qword ptr [esi+0x10]
	fstp qword ptr [ecx+8]
	mov word ptr [ecx-0x10],ax
	fld qword ptr [esi+0x18]
	sub ecx,0x10
	fstp qword ptr [ecx+8]
	sub ecx,0x10
	mov word ptr [ecx],dx
	fld qword ptr [esi+0x20]
	fstp qword ptr [ecx+8]
	sub ecx,0x10
	mov eax,3
	mov word ptr [ecx],ax
	mov edx,dword ptr [esi+0x28]
	mov dword ptr [ecx+8],edx
	add esi,0x30
	sub ecx,0x10
	cmp esi,edi
	jb Block5

 Block6:
	mov eax,dword ptr [ebp+8]
	mov edx,dword ptr [ebp-8]
	mov ecx,dword ptr [eax]
	push ebx
	push edx
	push eax
	mov eax,dword ptr [ecx+0xAC]
	call eax
	lea esp,[ebp-0x14]
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp-4]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret
}
}
// TAnimation<CAnimationDisplayer::FOOTHOLDINFO>::~TAnimation<CAnimationDisplayer::FOOTHOLDINFO>
__SUB_CLASS_THIS0(00041540, __thiscall, 19489,  TAnimation<CAnimationDisplayer::FOOTHOLDINFO>, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CAnimationDisplayer::FOOTHOLDINFO>::`vftable'
	jmp  ZList<CAnimationDisplayer::FOOTHOLDINFO>::RemoveAll
}
}
// PcCreateObject__com_ptr_t__com_IIID_IWzVector2D___GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4___
__SUB(00039E20, __cdecl, 146241,  void, const wchar_t*, _x_com_ptr<IWzVector2D>&, IUnknown*) {
__asm {

 Block0:
	sub esp,0x10
	push esi
	mov esi,dword ptr [esp+0x1C]
	mov eax,dword ptr [esi]
	test eax,eax
	je Block3

 Block1:
	mov dword ptr [esi],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov eax,dword ptr [esi]
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	mov dword ptr [esi],0
	mov eax,dword ptr [_D__G_APFNPCOMAPIS]
	test eax,eax
	jne Block5

 Block4:
	mov eax,0x800401F0
	jmp Block6

 Block5:
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x18]
	push ecx
	push esi
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edx
	call eax
	add esp,0x10
	test eax,eax
	jge Block7

 Block6:
	mov dword ptr [esp+8],eax
	push offset _COM_ERROR_THROW_INFO
	lea eax,[esp+8]
	push eax
	int 3// TODO: 	mov dword ptr [esp+0xC],offset _com_error::`vftable'
	mov dword ptr [esp+0x14],0
	mov dword ptr [esp+0x18],0
	call _CxxThrowException

 Block7:
	pop esi
	add esp,0x10
	ret
}
}
// CAnimationDisplayer::MobSwallowedBullet::PrepareBulletLayer
_SUB_EXCEPTION_HANDLER(3BAA0)
__SUB_CLASS_THIS(0003BAA0, __thiscall, 19011,  CAnimationDisplayer::MobSwallowedBullet, _x_com_ptr<IWzGr2DLayer>, NakedParam<_x_com_ptr<IWzVector2D>>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3BAA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x74
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x88]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	xor ebp,ebp
	mov dword ptr [esp+0x20],ebp
	mov esi,dword ptr [edi+0x4C]
	mov ebx,1
	mov dword ptr [esp+0x90],ebx
	cmp esi,ebp
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x18]
	push ecx
	push esi
	mov dword ptr [esp+0x20],ebp
	call edx
	cmp eax,ebp
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov esi,dword ptr [edi+0x4C]
	cmp esi,ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],ebp
	call edx
	cmp eax,ebp
	jge Block8

 Block7:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov edx,3
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],ebp
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x90],dl
	cmp ecx,ebp
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov esi,dword ptr [esp+0x18]
	lea eax,[esp+0x38]
	push eax
	mov eax,dword ptr [edi+0x44]
	lea edx,[esp+0x2C]
	push edx
	push eax
	mov eax,dword ptr [esp+0x20]
	push eax
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push esi
	push eax
	mov eax,esi
	cdq
	sub eax,edx
	mov edx,dword ptr [esp+0xB0]
	sar eax,1
	neg eax
	push eax
	push edx
	call IWzGr2D::CreateLayer
	cmp word ptr [esp+0x28],8
	mov dword ptr [esp+0x20],ebx
	mov byte ptr [esp+0x90],2
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x90],1
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	cmp eax,ebp
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov eax,dword ptr [esp+0x9C]
	cmp eax,ebp
	sete cl
	test cl,cl
	sete cl
	test cl,cl
	je Block31

 Block21:
	mov ecx,0xD
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],eax
	cmp eax,ebp
	je Block23

 Block22:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block23:
	mov ebx,dword ptr [esp+0x98]
	mov esi,dword ptr [ebx]
	mov byte ptr [esp+0x90],4
	cmp esi,ebp
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,ebp
	jge Block27

 Block26:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block27:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x90],1
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebp
	je Block32

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block30:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]
	jmp Block32

 Block31:
	mov ebx,dword ptr [esp+0x98]

 Block32:
	mov esi,dword ptr [ebx]
	cmp esi,ebp
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	cmp eax,ebp
	jge Block36

 Block35:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block36:
	mov edx,3
	mov word ptr [esp+0x68],dx
	mov dword ptr [esp+0x70],0xFFFFFFE2
	mov eax,edx
	mov word ptr [esp+0x58],ax
	mov dword ptr [esp+0x60],0xFFFFFF9C
	mov ecx,edx
	mov eax,0xFF
	mov word ptr [esp+0x48],cx
	mov dword ptr [esp+0x50],eax
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],eax
	mov eax,dword ptr [edi+0x1C]
	sub eax,dword ptr [edi+0x18]
	mov word ptr [esp+0x38],cx
	mov dword ptr [esp+0x40],eax
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [edi+0x4C]
	mov byte ptr [esp+0x90],9
	cmp ecx,ebp
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea edx,[esp+0x68]
	push edx
	lea edx,[esp+0x5C]
	push edx
	lea edx,[esp+0x50]
	push edx
	lea edx,[esp+0x34]
	push edx
	lea edx,[esp+0x48]
	push edx
	push eax
	lea eax,[esp+0x90]
	push eax
	call IWzGr2DLayer::InsertCanvas
	mov edi,8
	cmp word ptr [esp+0x78],di
	jne Block45

 Block39:
	mov eax,dword ptr [esp+0x80]
	xor ecx,ecx
	mov word ptr [esp+0x78],cx
	cmp eax,ebp
	je Block41

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block41:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block42:
	mov byte ptr [esp+0x90],8
	cmp word ptr [esp+0x38],di
	jne Block46

 Block43:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block47

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block45:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x78]
	push edx
	call esi
	jmp Block42

 Block46:
	lea ecx,[esp+0x38]
	push ecx
	call esi

 Block47:
	mov byte ptr [esp+0x90],7
	cmp word ptr [esp+0x28],di
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebp
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea eax,[esp+0x28]
	push eax
	call esi

 Block51:
	mov byte ptr [esp+0x90],6
	cmp word ptr [esp+0x48],di
	jne Block54

 Block52:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	cmp eax,ebp
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea edx,[esp+0x48]
	push edx
	call esi

 Block55:
	mov byte ptr [esp+0x90],5
	cmp word ptr [esp+0x58],di
	jne Block58

 Block56:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	cmp eax,ebp
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea ecx,[esp+0x58]
	push ecx
	call esi

 Block59:
	mov byte ptr [esp+0x90],1
	cmp word ptr [esp+0x68],di
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x70]
	xor edx,edx
	mov word ptr [esp+0x68],dx
	cmp eax,ebp
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea eax,[esp+0x68]
	push eax
	call esi

 Block63:
	cmp dword ptr [esp+0xA0],ebp
	je Block128

 Block64:
	mov edi,dword ptr [esp+0x98]
	mov ecx,dword ptr [edi]
	cmp ecx,ebp
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	lea edx,[esp+0x1C]
	push edx
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x90],0xA
	cmp esi,ebp
	jne Block68

 Block67:
	push 0x80004003
	call _com_issue_error

 Block68:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x68]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],ebp
	call edx
	cmp eax,ebp
	jge Block70

 Block69:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block70:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x90],1
	cmp eax,ebp
	je Block72

 Block71:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block72:
	mov ecx,dword ptr [edi]
	cmp ecx,ebp
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	lea eax,[esp+0x1C]
	push eax
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x90],0xB
	cmp esi,ebp
	jne Block76

 Block75:
	push 0x80004003
	call _com_issue_error

 Block76:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x70]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],ebp
	call eax
	cmp eax,ebp
	jge Block78

 Block77:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block78:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x90],1
	cmp eax,ebp
	je Block80

 Block79:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block80:
	lea eax,[esp+0x58]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block82

 Block81:
	push eax
	call _com_issue_error

 Block82:
	lea edx,[esp+0x68]
	mov bl,0xC
	push edx
	mov byte ptr [esp+0x94],bl
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x68]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block84

 Block83:
	push eax
	call _com_issue_error

 Block84:
	mov ecx,dword ptr [esp+0x98]
	mov ecx,dword ptr [ecx]
	mov byte ptr [esp+0x90],0xD
	cmp ecx,ebp
	jne Block86

 Block85:
	push 0x80004003
	call _com_issue_error

 Block86:
	lea edx,[esp+0x24]
	push edx
	call IWzGr2DLayer::Getlt
	mov edi,eax
	mov eax,dword ptr [esp+0x98]
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x90],0xE
	cmp esi,ebp
	jne Block88

 Block87:
	push 0x80004003
	call _com_issue_error

 Block88:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xB8]
	lea edx,[esp+0x1C]
	push edx
	push esi
	mov dword ptr [esp+0x24],ebp
	call eax
	cmp eax,ebp
	jge Block90

 Block89:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block90:
	mov ecx,dword ptr [edi]
	cmp ecx,ebp
	jne Block92

 Block91:
	push 0x80004003
	call _com_issue_error

 Block92:
	lea edx,[esp+0x58]
	push edx
	mov edx,dword ptr [esp+0x1C]
	lea eax,[esp+0x6C]
	push eax
	mov eax,dword ptr [esp+0x1C]
	push edx
	mov edx,dword ptr [esp+0x28]
	add edx,eax
	push edx
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x90],0xD
	cmp eax,ebp
	je Block94

 Block93:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block94:
	mov esi,8
	mov byte ptr [esp+0x90],bl
	cmp word ptr [esp+0x68],si
	jne Block97

 Block95:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	cmp eax,ebp
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea ecx,[esp+0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block98:
	mov byte ptr [esp+0x90],1
	cmp word ptr [esp+0x58],si
	jne Block101

 Block99:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	cmp eax,ebp
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea eax,[esp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block102:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x58]
	push ecx
	call esi
	lea edx,[esp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block104

 Block103:
	push eax
	call _com_issue_error

 Block104:
	lea eax,[esp+0x68]
	push eax
	mov byte ptr [esp+0x94],0xF
	call esi
	lea ecx,[esp+0x68]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block106

 Block105:
	push eax
	call _com_issue_error

 Block106:
	mov edx,dword ptr [esp+0x98]
	mov ecx,dword ptr [edx]
	mov byte ptr [esp+0x90],0x10
	cmp ecx,ebp
	jne Block108

 Block107:
	push 0x80004003
	call _com_issue_error

 Block108:
	lea eax,[esp+0x24]
	push eax
	call IWzGr2DLayer::Getrb
	mov ebx,eax
	mov ecx,dword ptr [esp+0x98]
	mov esi,dword ptr [ecx]
	mov byte ptr [esp+0x90],0x11
	cmp esi,ebp
	jne Block110

 Block109:
	push 0x80004003
	call _com_issue_error

 Block110:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xC0]
	lea eax,[esp+0x1C]
	push eax
	push esi
	mov dword ptr [esp+0x24],ebp
	call ecx
	cmp eax,ebp
	jge Block112

 Block111:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block112:
	mov edx,dword ptr [esp+0x98]
	mov esi,dword ptr [edx]
	mov edi,dword ptr [esp+0x1C]
	cmp esi,ebp
	jne Block114

 Block113:
	push 0x80004003
	call _com_issue_error

 Block114:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xB8]
	lea ecx,[esp+0x18]
	push ecx
	push esi
	mov dword ptr [esp+0x20],ebp
	call edx
	cmp eax,ebp
	jge Block116

 Block115:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block116:
	mov ecx,dword ptr [ebx]
	cmp ecx,ebp
	jne Block118

 Block117:
	push 0x80004003
	call _com_issue_error

 Block118:
	lea eax,[esp+0x58]
	push eax
	mov eax,dword ptr [esp+0x1C]
	lea edx,[esp+0x6C]
	push edx
	push edi
	neg eax
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x90],0x10
	cmp eax,ebp
	je Block120

 Block119:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block120:
	mov esi,8
	mov byte ptr [esp+0x90],0xF
	cmp word ptr [esp+0x68],si
	jne Block123

 Block121:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	cmp eax,ebp
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea ecx,[esp+0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block124:
	mov byte ptr [esp+0x90],1
	cmp word ptr [esp+0x58],si
	jne Block127

 Block125:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	cmp eax,ebp
	je Block128

 Block126:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block128

 Block127:
	lea eax,[esp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block128:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x58]
	push ecx
	call esi
	lea edx,[esp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block130

 Block129:
	push eax
	call _com_issue_error

 Block130:
	lea eax,[esp+0x68]
	mov bl,0x12
	push eax
	mov byte ptr [esp+0x94],bl
	call esi
	lea ecx,[esp+0x68]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block132

 Block131:
	push eax
	call _com_issue_error

 Block132:
	mov edi,dword ptr [esp+0x98]
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x90],0x13
	cmp ecx,ebp
	jne Block134

 Block133:
	push 0x80004003
	call _com_issue_error

 Block134:
	lea edx,[esp+0x58]
	push edx
	lea eax,[esp+0x6C]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x90],bl
	cmp word ptr [esp+0x68],si
	jne Block137

 Block135:
	mov eax,dword ptr [esp+0x70]
	xor ecx,ecx
	mov word ptr [esp+0x68],cx
	cmp eax,ebp
	je Block138

 Block136:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block138

 Block137:
	lea edx,[esp+0x68]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block138:
	mov byte ptr [esp+0x90],1
	cmp word ptr [esp+0x58],si
	jne Block141

 Block139:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	cmp eax,ebp
	je Block142

 Block140:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block142

 Block141:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block142:
	mov eax,dword ptr [esp+0x9C]
	mov byte ptr [esp+0x90],0
	cmp eax,ebp
	je Block144

 Block143:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block144:
	mov eax,edi
	mov ecx,dword ptr [esp+0x88]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x80
	ret 0xC
}
}
// CAnimationDisplayer::CAnimationDisplayer
_SUB_EXCEPTION_HANDLER(49010)
__SUB_CLASS_THIS0(00049010, __thiscall, 18528,  CAnimationDisplayer, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_49010
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x60]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x18],esi
	lea ecx,[esi+4]
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset IGObj::`vftable'
	cmp ecx,edi
	je Block2

 Block1:
	lea eax,[ecx-4]
	mov dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CAnimationDisplayer::`vftable'
	mov ebx,0x1F
	push 0x64
	mov dword ptr [esp+0x6C],edi
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, ZRef<CAnimationDisplayer::PREPAREINFO>, unsigned long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned long, ZRef<CAnimationDisplayer::PREPAREINFO>, unsigned long>::_CalcAutoGrow
	int 3// TODO: 	mov dword ptr [esi+0x1C],offset ZList<ZRef<CAnimationDisplayer::PREPAREINFO>>::`vftable'
	mov dword ptr [esi+0x24],edi
	mov dword ptr [esi+0x28],edi
	mov dword ptr [esi+0x2C],edi
	int 3// TODO: 	mov dword ptr [esi+0x30],offset ZList<CAnimationDisplayer::ONETIMEINFO>::`vftable'
	mov dword ptr [esi+0x38],edi
	mov dword ptr [esi+0x3C],edi
	mov dword ptr [esi+0x40],edi
	int 3// TODO: 	mov dword ptr [esi+0x44],offset ZList<CAnimationDisplayer::REPEATINFO>::`vftable'
	mov dword ptr [esi+0x4C],edi
	mov dword ptr [esi+0x50],edi
	mov dword ptr [esi+0x54],edi
	int 3// TODO: 	mov dword ptr [esi+0x58],offset ZList<CAnimationDisplayer::SQUIBINFO>::`vftable'
	mov dword ptr [esi+0x60],edi
	mov dword ptr [esi+0x64],edi
	mov dword ptr [esi+0x68],edi
	int 3// TODO: 	mov dword ptr [esi+0x6C],offset ZList<CAnimationDisplayer::RESERVEDINFO>::`vftable'
	mov dword ptr [esi+0x74],edi
	mov dword ptr [esi+0x78],edi
	mov dword ptr [esi+0x7C],edi
	int 3// TODO: 	mov dword ptr [esi+0x80],offset ZList<CAnimationDisplayer::ABSORBITEM>::`vftable'
	mov dword ptr [esi+0x88],edi
	mov dword ptr [esi+0x8C],edi
	mov dword ptr [esi+0x90],edi
	int 3// TODO: 	mov dword ptr [esi+0x94],offset ZList<CAnimationDisplayer::FALLINGINFO>::`vftable'
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esi+0xA4],edi
	int 3// TODO: 	mov dword ptr [esi+0xA8],offset ZList<CAnimationDisplayer::EXPLOSIONINFO>::`vftable'
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xB8],edi
	int 3// TODO: 	mov dword ptr [esi+0xBC],offset ZList<CAnimationDisplayer::CHAINLIGHTNINGINFO>::`vftable'
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esi+0xC8],edi
	mov dword ptr [esi+0xCC],edi
	int 3// TODO: 	mov dword ptr [esi+0xD0],offset ZList<CAnimationDisplayer::HOOKING_CHAIN_INFO>::`vftable'
	mov dword ptr [esi+0xD8],edi
	mov dword ptr [esi+0xDC],edi
	mov dword ptr [esi+0xE0],edi
	int 3// TODO: 	mov dword ptr [esi+0xE4],offset ZList<CAnimationDisplayer::FIRECRACKER>::`vftable'
	mov dword ptr [esi+0xEC],edi
	mov dword ptr [esi+0xF0],edi
	mov dword ptr [esi+0xF4],edi
	int 3// TODO: 	mov dword ptr [esi+0xF8],offset ZList<CAnimationDisplayer::NEWYEARINFO>::`vftable'
	mov dword ptr [esi+0x100],edi
	mov dword ptr [esi+0x104],edi
	mov dword ptr [esi+0x108],edi
	int 3// TODO: 	mov dword ptr [esi+0x10C],offset ZList<CAnimationDisplayer::FOLLOWINFO>::`vftable'
	mov dword ptr [esi+0x114],edi
	mov dword ptr [esi+0x118],edi
	mov dword ptr [esi+0x11C],edi
	int 3// TODO: 	mov dword ptr [esi+0x120],offset ZList<CAnimationDisplayer::MOTIONBLURINFO>::`vftable'
	mov dword ptr [esi+0x128],edi
	mov dword ptr [esi+0x12C],edi
	mov dword ptr [esi+0x130],edi
	int 3// TODO: 	mov dword ptr [esi+0x134],offset ZList<CAnimationDisplayer::FADEINFO>::`vftable'
	mov dword ptr [esi+0x13C],edi
	mov dword ptr [esi+0x140],edi
	mov dword ptr [esi+0x144],edi
	lea ecx,[esi+0x148]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, ZRef<CAnimationDisplayer::TAnimation<CAnimationDisplayer::CHAINLIGHTNINGINFO>>, unsigned long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned long, ZRef<CAnimationDisplayer::TAnimation<CAnimationDisplayer::CHAINLIGHTNINGINFO>>, unsigned long>::_CalcAutoGrow
	int 3// TODO: 	mov dword ptr [esi+0x160],offset ZList<CAnimationDisplayer::USERSTATEINFO>::`vftable'
	mov dword ptr [esi+0x168],edi
	mov dword ptr [esi+0x16C],edi
	mov dword ptr [esi+0x170],edi
	mov dword ptr [esi+0x174],edi
	int 3// TODO: 	mov dword ptr [esi+0x178],offset BulletContainer<CBullet>::`vftable'
	int 3// TODO: 	mov dword ptr [esi+0x17C],offset ZList<ZRef<CBullet>>::`vftable'
	mov dword ptr [esi+0x184],edi
	mov dword ptr [esi+0x188],edi
	mov dword ptr [esi+0x18C],edi
	int 3// TODO: 	mov dword ptr [esi+0x190],offset ZList<CAnimationDisplayer::FOOTHOLDINFO>::`vftable'
	mov dword ptr [esi+0x198],edi
	mov dword ptr [esi+0x19C],edi
	mov dword ptr [esi+0x1A0],edi
	lea ebx,[esi+0x1A4]
	mov dword ptr [ebx],edi
	mov dword ptr [esi+0x1A8],edi
	mov dword ptr [esi+0x1AC],edi
	mov dword ptr [esi+0x1B0],edi
	mov dword ptr [esi+0x1B4],edi
	mov dword ptr [esi+0x1B8],edi
	mov dword ptr [esi+0x1BC],edi
	mov dword ptr [esi+0x1C0],edi
	fldz
	mov ebp,dword ptr [ZImports::_VariantInit]
	fst qword ptr [esi+0x1C8]
	lea ecx,[esp+0x30]
	fstp qword ptr [esi+0x1D8]
	push ecx
	mov byte ptr [esp+0x6C],0x1D
	mov dword ptr [esi+0x1D0],edi
	mov dword ptr [esi+0x1D4],edi
	call ebp
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x6C],0x1E
	call ebp
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	push edi
	push edi
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x2C]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x3DC
	push ecx
	mov byte ptr [esp+0x84],0x1F
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x7C],0x20
	cmp dword ptr [_D_G_RM],edi
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	lea edx,[esp+0x54]
	mov byte ptr [esp+0x7C],0x1F
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x70],0x21
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block12

 Block10:
	cmp eax,0x80004002
	je Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	mov ebp,8
	mov byte ptr [esp+0x68],0x23
	cmp word ptr [esp+0x40],bp
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	cmp eax,edi
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov byte ptr [esp+0x68],0x24
	cmp word ptr [esp+0x20],bp
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	cmp eax,edi
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov byte ptr [esp+0x68],0x25
	cmp word ptr [esp+0x30],bp
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,edi
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x3DD
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,dword ptr [esp+0x20]
	mov byte ptr [esp+0x74],0x26
	cmp ebp,edi
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea ecx,[esp+0x5C]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x78],0x25
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x70],0x27
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block29

 Block27:
	cmp eax,0x80004002
	je Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x68],0x25
	jne Block36

 Block30:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	cmp eax,edi
	je Block32

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block32:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block33:
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x3DE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x5C]
	mov byte ptr [esp+0x74],0x28
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x78],0x25
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x70],0x29
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0x1A8]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block37

 Block34:
	cmp eax,0x80004002
	je Block37

 Block35:
	push eax
	call _com_issue_error

 Block36:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x50]
	push eax
	call ebx
	jmp Block33

 Block37:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x68],0x25
	jne Block40

 Block38:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	cmp eax,edi
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea ecx,[esp+0x50]
	push ecx
	call ebx

 Block41:
	push edi
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x3DF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x5C]
	mov byte ptr [esp+0x74],0x2A
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x78],0x25
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x70],0x2B
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0x1AC]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block44

 Block42:
	cmp eax,0x80004002
	je Block44

 Block43:
	push eax
	call _com_issue_error

 Block44:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x68],0x25
	jne Block47

 Block45:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	cmp eax,edi
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea edx,[esp+0x50]
	push edx
	call ebx

 Block48:
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x3E0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0x78],0x2C
	mov ecx,ebp
	mov byte ptr [esp+0x78],0x25
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x70],0x2D
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0x1B0]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block51

 Block49:
	cmp eax,0x80004002
	je Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x68],0x25
	jne Block54

 Block52:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	cmp eax,edi
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea eax,[esp+0x50]
	push eax
	call ebx

 Block55:
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x3E1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x5C]
	mov byte ptr [esp+0x74],0x2E
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x78],0x25
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x70],0x2F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0x1B4]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block58

 Block56:
	cmp eax,0x80004002
	je Block58

 Block57:
	push eax
	call _com_issue_error

 Block58:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x68],0x25
	jne Block61

 Block59:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	cmp eax,edi
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea ecx,[esp+0x50]
	push ecx
	call ebx

 Block62:
	push edi
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x3E2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x5C]
	mov byte ptr [esp+0x74],0x30
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x78],0x25
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x70],0x31
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0x1B8]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block65

 Block63:
	cmp eax,0x80004002
	je Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x68],0x25
	jne Block68

 Block66:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	cmp eax,edi
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea edx,[esp+0x50]
	push edx
	call ebx

 Block69:
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x3E3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0x78],0x32
	mov ecx,ebp
	mov byte ptr [esp+0x78],0x25
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x70],0x33
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0x1BC]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block72

 Block70:
	cmp eax,0x80004002
	je Block72

 Block71:
	push eax
	call _com_issue_error

 Block72:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x68],0x25
	jne Block75

 Block73:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	cmp eax,edi
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea eax,[esp+0x50]
	push eax
	call ebx

 Block76:
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x3E4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x5C]
	mov byte ptr [esp+0x74],0x34
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x78],0x25
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x70],0x35
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esi+0x1C0]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block79

 Block77:
	cmp eax,0x80004002
	je Block79

 Block78:
	push eax
	call _com_issue_error

 Block79:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x68],0x25
	jne Block82

 Block80:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	cmp eax,edi
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea ecx,[esp+0x50]
	push ecx
	call ebx

 Block83:
	call get_update_time
	mov dword ptr [CAnimationDisplayer::SQUIBINFO::tLastSoundPlayed],eax
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	mov byte ptr [esp+0x6C],0x1D
	call eax
	mov eax,esi
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret
}
}
// CAfterImageBullet::Update
_SUB_EXCEPTION_HANDLER(77AA0)
__SUB_CLASS_THIS(00077AA0, __thiscall, 18331,  CAfterImageBullet, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_77AA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC0
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xD4]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x70],ecx
	xor ebp,ebp
	cmp dword ptr [ecx+0x40],ebp
	je Block227

 Block1:
	lea eax,[esp+0x5C]
	push eax
	call CBullet::GetLayer
	mov esi,dword ptr [esp+0x5C]
	cmp esi,ebp
	sete al
	mov dword ptr [esp+0xDC],ebp
	test al,al
	je Block4

 Block2:
	mov dword ptr [esp+0xDC],0xFFFFFFFF
	cmp esi,ebp
	je Block227

 Block3:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx
	jmp Block227

 Block4:
	lea eax,[esp+0x74]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x74]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov edx,3
	mov word ptr [esp+0xA4],dx
	mov dword ptr [esp+0xAC],ebp
	mov byte ptr [esp+0xDC],2
	cmp esi,ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xB0]
	lea ecx,[esp+0x50]
	push ecx
	push esi
	mov dword ptr [esp+0x58],ebp
	call edx
	cmp eax,ebp
	jge Block10

 Block9:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	mov ecx,dword ptr [_D_G_GR]
	cmp ecx,ebp
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea eax,[esp+0x74]
	push eax
	mov eax,dword ptr [esp+0x54]
	lea edx,[esp+0xA8]
	push edx
	add eax,0xFFFFFFF6
	push eax
	push ebp
	push ebp
	push ebp
	push ebp
	lea edx,[esp+0x68]
	push edx
	call IWzGr2D::CreateLayer
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0xDC],4
	cmp word ptr [esp+0xA4],bx
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0xA4],ax
	mov eax,dword ptr [esp+0xAC]
	cmp eax,ebp
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[esp+0xA4]
	push ecx
	call edi

 Block16:
	mov byte ptr [esp+0xDC],5
	cmp word ptr [esp+0x74],bx
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x7C]
	xor edx,edx
	mov word ptr [esp+0x74],dx
	cmp eax,ebp
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea eax,[esp+0x74]
	push eax
	call edi

 Block20:
	mov dword ptr [esp+0x54],ebp
	lea ecx,[esp+0x14]
	push 0x3D2
	push ecx
	mov byte ptr [esp+0xE4],6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xDC],7
	cmp eax,ebp
	je Block22

 Block21:
	mov eax,dword ptr [eax]
	jmp Block23

 Block22:
	xor eax,eax

 Block23:
	push ebp
	lea edx,[esp+0x58]
	push edx
	push eax
	call PcCreate_IWzVector2D
	mov ecx,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0xDC],6
	cmp ecx,ebp
	je Block25

 Block24:
	call _xbstr_t::Data_t::Release

 Block25:
	lea eax,[esp+0xB4]
	push eax
	mov ecx,esi
	call IWzVector2D::Getorigin
	movzx ecx,word ptr [eax]
	mov byte ptr [esp+0xDC],8
	cmp cx,9
	je Block32

 Block26:
	cmp cx,0xD
	je Block32

 Block27:
	mov edx,0x4009
	cmp cx,dx
	je Block30

 Block28:
	mov edx,0x400D
	cmp cx,dx
	je Block30

 Block29:
	xor eax,eax
	jmp Block33

 Block30:
	mov eax,dword ptr [eax+8]
	cmp eax,ebp
	je Block29

 Block31:
	mov eax,dword ptr [eax]
	jmp Block33

 Block32:
	mov eax,dword ptr [eax+8]

 Block33:
	push eax
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x54],ebp
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,ebp
	jge Block36

 Block34:
	cmp eax,0x80004002
	je Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	mov byte ptr [esp+0xDC],0xB
	cmp word ptr [esp+0xB4],bx
	jne Block39

 Block37:
	xor eax,eax
	mov word ptr [esp+0xB4],ax
	mov eax,dword ptr [esp+0xBC]
	cmp eax,ebp
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea ecx,[esp+0xB4]
	push ecx
	call edi

 Block40:
	mov edi,dword ptr [esp+0x50]
	cmp edi,ebp
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	lea edx,[esp+0x3C]
	push edx
	mov ecx,edi
	call IWzVector2D::Getorigin
	movzx ecx,word ptr [eax]
	cmp cx,9
	je Block49

 Block43:
	cmp cx,0xD
	je Block49

 Block44:
	mov edx,0x4009
	cmp cx,dx
	je Block47

 Block45:
	mov edx,0x400D
	cmp cx,dx
	je Block47

 Block46:
	xor esi,esi
	jmp Block50

 Block47:
	mov eax,dword ptr [eax+8]
	cmp eax,ebp
	je Block46

 Block48:
	mov esi,dword ptr [eax]
	jmp Block50

 Block49:
	mov esi,dword ptr [eax+8]

 Block50:
	mov byte ptr [esp+0xDC],0xB
	cmp word ptr [esp+0x3C],bx
	jne Block53

 Block51:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebp
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	cmp esi,ebp
	je Block61

 Block55:
	lea edx,[esp+0x3C]
	push edx
	mov ecx,edi
	call IWzVector2D::Getorigin
	mov ecx,dword ptr [esp+0x54]
	mov byte ptr [esp+0xDC],0xE
	cmp ecx,ebp
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	push eax
	call IWzVector2D::Putorigin
	mov byte ptr [esp+0xDC],0xB
	cmp word ptr [esp+0x3C],bx
	jne Block60

 Block58:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebp
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block63

 Block62:
	push eax
	call _com_issue_error

 Block63:
	lea ecx,[esp+0x2C]
	mov bl,0xF
	push ecx
	mov byte ptr [esp+0xE0],bl
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x70]
	lea ecx,[esp+0x58]
	push ecx
	push edi
	mov byte ptr [esp+0xE4],0x10
	mov dword ptr [esp+0x60],ebp
	call edx
	cmp eax,ebp
	jge Block67

 Block66:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block67:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x68]
	mov esi,dword ptr [esp+0x58]
	lea ecx,[esp+0x14]
	push ecx
	push edi
	mov dword ptr [esp+0x1C],ebp
	call edx
	cmp eax,ebp
	jge Block69

 Block68:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block69:
	mov ecx,dword ptr [esp+0x54]
	cmp ecx,ebp
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	lea eax,[esp+0x1C]
	push eax
	mov eax,dword ptr [esp+0x18]
	lea edx,[esp+0x30]
	push edx
	push esi
	push eax
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xDC],bl
	jne Block74

 Block72:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov ebx,8
	mov byte ptr [esp+0xDC],0xB
	cmp word ptr [esp+0x1C],bx
	jne Block78

 Block76:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block79:
	mov edx,dword ptr [edi]
	fldz
	mov ecx,dword ptr [edx+0x7C]
	fstp qword ptr [esp+0x14]
	lea eax,[esp+0x14]
	push eax
	push edi
	call ecx
	cmp eax,ebp
	jge Block81

 Block80:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block81:
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebp
	jne Block83

 Block82:
	push 0x80004003
	call _com_issue_error

 Block83:
	fld qword ptr [esp+0x14]
	mov edx,dword ptr [eax]
	sub esp,8
	fstp qword ptr [esp]
	mov esi,eax
	push eax
	mov eax,dword ptr [edx+0x80]
	call eax
	cmp eax,ebp
	jge Block85

 Block84:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block85:
	mov eax,dword ptr [esp+0x54]
	mov ecx,0xD
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	cmp eax,ebp
	je Block87

 Block86:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block87:
	mov edi,dword ptr [esp+0x4C]
	mov byte ptr [esp+0xDC],0x11
	cmp edi,ebp
	jne Block89

 Block88:
	push 0x80004003
	call _com_issue_error

 Block89:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,edi
	call IWzVector2D::Putorigin
	mov byte ptr [esp+0xDC],0xB
	cmp word ptr [esp+0x1C],bx
	jne Block92

 Block90:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	cmp eax,ebp
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block93:
	mov esi,dword ptr [esp+0x5C]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xD4]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],ebp
	call eax
	cmp eax,ebp
	jge Block95

 Block94:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block95:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0xD8]
	push edx
	push edi
	call eax
	cmp eax,ebp
	jge Block97

 Block96:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block97:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push ecx
	call esi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block99

 Block98:
	push eax
	call _com_issue_error

 Block99:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xE0],0x12
	call esi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block101

 Block100:
	push eax
	call _com_issue_error

 Block101:
	mov ecx,dword ptr [esp+0x5C]
	lea edx,[esp+0x58]
	push edx
	mov byte ptr [esp+0xE0],0x13
	call IWzGr2DLayer::Getalpha
	mov esi,eax
	lea eax,[esp+0x14]
	mov bl,0x14
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xE0],bl
	call IWzGr2DLayer::Getalpha
	cmp dword ptr [esi],ebp
	mov ecx,dword ptr [eax]
	setne dl
	mov byte ptr [esp+0xDC],0x15
	cmp ecx,ebp
	jne Block103

 Block102:
	push 0x80004003
	call _com_issue_error

 Block103:
	lea eax,[esp+0x2C]
	push eax
	lea eax,[esp+0x20]
	push eax
	mov eax,dword ptr [esp+0x78]
	movzx edx,dl
	imul edx,dword ptr [eax+0x38]
	push ebp
	push edx
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xDC],bl
	cmp eax,ebp
	je Block105

 Block104:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block105:
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0xDC],0x13
	cmp eax,ebp
	je Block107

 Block106:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block107:
	mov esi,8
	mov byte ptr [esp+0xDC],0x12
	cmp word ptr [esp+0x1C],si
	jne Block110

 Block108:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block111

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block111

 Block110:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block111:
	mov byte ptr [esp+0xDC],0xB
	cmp word ptr [esp+0x2C],si
	jne Block114

 Block112:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,ebp
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block115:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push ecx
	call esi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block117

 Block116:
	push eax
	call _com_issue_error

 Block117:
	mov eax,dword ptr [esp+0x70]
	mov eax,dword ptr [eax+0x34]
	add eax,dword ptr [esp+0xE4]
	mov ecx,3
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	lea edx,[esp+0x14]
	mov bl,0x17
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xE0],bl
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xDC],0x18
	cmp ecx,ebp
	jne Block119

 Block118:
	push 0x80004003
	call _com_issue_error

 Block119:
	lea eax,[esp+0x2C]
	push eax
	lea edx,[esp+0x20]
	push edx
	push ebp
	push ebp
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xDC],bl
	cmp eax,ebp
	je Block121

 Block120:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block121:
	mov ebx,8
	mov byte ptr [esp+0xDC],0x16
	cmp word ptr [esp+0x1C],bx
	jne Block124

 Block122:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block125

 Block123:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block125

 Block124:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block125:
	mov byte ptr [esp+0xDC],0xB
	cmp word ptr [esp+0x2C],bx
	jne Block128

 Block126:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,ebp
	je Block129

 Block127:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block129

 Block128:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block129:
	lea ecx,[esp+0x2C]
	push ecx
	call esi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block131

 Block130:
	push eax
	call _com_issue_error

 Block131:
	lea eax,[esp+0x1C]
	mov bl,0x19
	push eax
	mov byte ptr [esp+0xE0],bl
	call esi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block133

 Block132:
	push eax
	call _com_issue_error

 Block133:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x20]
	push eax
	push ebp
	mov ecx,edi
	mov byte ptr [esp+0xE8],0x1A
	call IWzGr2DLayer::Animate
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0xDC],bl
	jne Block136

 Block134:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block137

 Block135:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block137

 Block136:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block137:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xDC],0xB
	jne Block140

 Block138:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block141

 Block139:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block141

 Block140:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block141:
	lea edx,[esp+0x3C]
	push edx
	call esi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block143

 Block142:
	push eax
	call _com_issue_error

 Block143:
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0xE0],0x1B
	call esi
	lea edx,[esp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block145

 Block144:
	push eax
	call _com_issue_error

 Block145:
	lea eax,[esp+0x94]
	push eax
	mov byte ptr [esp+0xE0],0x1C
	call esi
	lea ecx,[esp+0x94]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block147

 Block146:
	push eax
	call _com_issue_error

 Block147:
	lea edx,[esp+0x84]
	push edx
	mov byte ptr [esp+0xE0],0x1D
	call esi
	lea eax,[esp+0x84]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block149

 Block148:
	push eax
	call _com_issue_error

 Block149:
	lea ecx,[esp+0x2C]
	push ecx
	mov byte ptr [esp+0xE0],0x1E
	call esi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block151

 Block150:
	push eax
	call _com_issue_error

 Block151:
	mov eax,3
	mov word ptr [esp+0x1C],ax
	mov dword ptr [esp+0x24],ebp
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [esp+0x60]
	lea edx,[esp+0x18]
	mov bl,0x20
	push edx
	mov byte ptr [esp+0xE4],bl
	call IWzGr2DLayer::Getcanvas
	mov eax,dword ptr [eax]
	lea ecx,[esp+0x3C]
	push ecx
	lea edx,[esp+0x64]
	push edx
	lea ecx,[esp+0x9C]
	push ecx
	lea edx,[esp+0x90]
	push edx
	lea ecx,[esp+0x3C]
	push ecx
	push eax
	lea edx,[esp+0xDC]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xF8],0x21
	call IWzGr2DLayer::InsertCanvas
	mov edi,8
	cmp word ptr [esp+0xC4],di
	jne Block160

 Block152:
	xor eax,eax
	mov word ptr [esp+0xC4],ax
	mov eax,dword ptr [esp+0xCC]
	cmp eax,ebp
	je Block154

 Block153:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block154:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block155:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xDC],bl
	cmp eax,ebp
	je Block157

 Block156:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block157:
	mov byte ptr [esp+0xDC],0x1F
	cmp word ptr [esp+0x1C],di
	jne Block161

 Block158:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block162

 Block159:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block162

 Block160:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0xC4]
	push ecx
	call esi
	jmp Block155

 Block161:
	lea edx,[esp+0x1C]
	push edx
	call esi

 Block162:
	mov byte ptr [esp+0xDC],0x1E
	cmp word ptr [esp+0x2C],di
	jne Block165

 Block163:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block166

 Block164:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block166

 Block165:
	lea ecx,[esp+0x2C]
	push ecx
	call esi

 Block166:
	mov byte ptr [esp+0xDC],0x1D
	cmp word ptr [esp+0x84],di
	jne Block169

 Block167:
	mov eax,dword ptr [esp+0x8C]
	xor edx,edx
	mov word ptr [esp+0x84],dx
	cmp eax,ebp
	je Block170

 Block168:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block170

 Block169:
	lea eax,[esp+0x84]
	push eax
	call esi

 Block170:
	mov byte ptr [esp+0xDC],0x1C
	cmp word ptr [esp+0x94],di
	jne Block173

 Block171:
	mov eax,dword ptr [esp+0x9C]
	xor ecx,ecx
	mov word ptr [esp+0x94],cx
	cmp eax,ebp
	je Block174

 Block172:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block174

 Block173:
	lea edx,[esp+0x94]
	push edx
	call esi

 Block174:
	mov byte ptr [esp+0xDC],0x1B
	cmp word ptr [esp+0x60],di
	jne Block177

 Block175:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	cmp eax,ebp
	je Block178

 Block176:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block178

 Block177:
	lea ecx,[esp+0x60]
	push ecx
	call esi

 Block178:
	mov byte ptr [esp+0xDC],0xB
	cmp word ptr [esp+0x3C],di
	jne Block181

 Block179:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebp
	je Block182

 Block180:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block182

 Block181:
	lea eax,[esp+0x3C]
	push eax
	call esi

 Block182:
	mov ecx,dword ptr [esp+0x70]
	cmp dword ptr [ecx+0x14],ebp
	je Block224

 Block183:
	mov esi,dword ptr [esp+0x4C]
	lea edx,[esp+0x14]
	push edx
	mov ecx,esi
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xDC],0x22
	test ecx,ecx
	jne Block185

 Block184:
	push 0x80004003
	call _com_issue_error

 Block185:
	call IWzVector2D::Getrx
	mov ebp,eax
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xDC],0xB
	test eax,eax
	je Block187

 Block186:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block187:
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xDC],0x23
	test ecx,ecx
	jne Block189

 Block188:
	push 0x80004003
	call _com_issue_error

 Block189:
	call IWzVector2D::Getry
	mov edi,eax
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xDC],0xB
	test eax,eax
	je Block191

 Block190:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block191:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x60]
	push eax
	call esi
	lea ecx,[esp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block193

 Block192:
	push eax
	call _com_issue_error

 Block193:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0xE0],0x24
	call esi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block195

 Block194:
	push eax
	call _com_issue_error

 Block195:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [esp+0x50]
	mov bl,0x25
	mov byte ptr [esp+0xE0],bl
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0xDC],0x26
	test esi,esi
	jne Block197

 Block196:
	push 0x80004003
	call _com_issue_error

 Block197:
	mov ecx,dword ptr [esp+0x4C]
	lea edx,[esp+0x60]
	push edx
	lea eax,[esp+0x40]
	push eax
	push edi
	call IWzGr2DLayer::Getwidth
	add eax,ebp
	push eax
	mov ecx,esi
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xDC],bl
	test eax,eax
	je Block199

 Block198:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block199:
	mov esi,8
	mov byte ptr [esp+0xDC],0x24
	cmp word ptr [esp+0x3C],si
	jne Block206

 Block200:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block202

 Block201:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block202:
	mov ebp,dword ptr [ZImports::_VariantClear]

 Block203:
	mov byte ptr [esp+0xDC],0xB
	cmp word ptr [esp+0x60],si
	jne Block207

 Block204:
	mov eax,dword ptr [esp+0x68]
	xor edx,edx
	mov word ptr [esp+0x60],dx
	test eax,eax
	je Block208

 Block205:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block208

 Block206:
	mov ebp,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x3C]
	push ecx
	call ebp
	jmp Block203

 Block207:
	lea eax,[esp+0x60]
	push eax
	call ebp

 Block208:
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
	jge Block210

 Block209:
	push eax
	call _com_issue_error

 Block210:
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0xE0],0x27
	call esi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block212

 Block211:
	push eax
	call _com_issue_error

 Block212:
	mov edi,dword ptr [esp+0x4C]
	lea edx,[esp+0x14]
	mov bl,0x28
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xE0],bl
	call IWzGr2DLayer::Getrb
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0xDC],0x29
	test esi,esi
	jne Block214

 Block213:
	push 0x80004003
	call _com_issue_error

 Block214:
	lea eax,[esp+0x60]
	push eax
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,edi
	call IWzGr2DLayer::Getheight
	push eax
	mov ecx,edi
	call IWzGr2DLayer::Getwidth
	neg eax
	push eax
	mov ecx,esi
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xDC],bl
	test eax,eax
	je Block216

 Block215:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block216:
	mov esi,8
	mov byte ptr [esp+0xDC],0x27
	cmp word ptr [esp+0x3C],si
	jne Block219

 Block217:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block220

 Block218:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block220

 Block219:
	lea edx,[esp+0x3C]
	push edx
	call ebp

 Block220:
	mov byte ptr [esp+0xDC],0xB
	cmp word ptr [esp+0x60],si
	jne Block223

 Block221:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block224

 Block222:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block224

 Block223:
	lea ecx,[esp+0x60]
	push ecx
	call ebp

 Block224:
	mov edi,dword ptr [esp+0x70]
	mov edx,dword ptr [edi+0x34]
	mov esi,dword ptr [esp+0x4C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x60],esp
	push esi
	call ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterRepeatAnimation
	mov edx,dword ptr [esp+0xE4]
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [edi+0x3C],edx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0xE0],6
	call edx
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0xDC],5
	test eax,eax
	je Block226

 Block225:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block226:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0xE0],0
	call ecx
	mov eax,dword ptr [esp+0x5C]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov dword ptr [esp+0xE0],0xFFFFFFFF
	call eax

 Block227:
	xor eax,eax
	mov ecx,dword ptr [esp+0xD4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xCC
	ret 4
}
}
// CAnimationDisplayer::RegisterChainlightningAnimation
_SUB_EXCEPTION_HANDLER(5D1B0)
__SUB_CLASS_THIS(0005D1B0, __thiscall, 18571,  CAnimationDisplayer, void, long, long, NakedParam<tagPOINT>, NakedParam<tagPOINT>, long, NakedParam<Ztl_bstr_t>, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5D1B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x18],ecx
	mov esi,dword ptr [ebp+0x10]
	mov edi,dword ptr [ebp+0x18]
	cmp esi,edi
	mov dword ptr [ebp-4],0
	jle Block2

 Block1:
	mov ebx,dword ptr [ebp+0x14]
	mov ecx,dword ptr [ebp+0x1C]
	mov eax,esi
	mov esi,edi
	mov edi,eax
	mov dword ptr [ebp+0x10],esi
	mov dword ptr [ebp+0x14],ecx
	mov dword ptr [ebp+0x18],edi
	mov dword ptr [ebp+0x1C],ebx
	jmp Block3

 Block2:
	mov ebx,dword ptr [ebp+0x1C]

 Block3:
	cmp esi,edi
	jne Block5

 Block4:
	xor edx,edx
	cmp dword ptr [ebp+0x14],ebx
	setge dl
	dec edx
	and edx,0xFFFFFF4C
	add edx,0x10E
	mov dword ptr [ebp-0x20],edx
	jmp Block6

 Block5:
	fild dword ptr [ebp+0x1C]
	fisub dword ptr [ebp+0x14]
	fild dword ptr [ebp+0x18]
	fisub dword ptr [ebp+0x10]
	fdivp st(1),st(0)
	call __CIatan
	fmul qword ptr [__real_4066800000000000]
	fdiv qword ptr [_D_PI__215]
	call __ftol2_sse
	mov dword ptr [ebp-0x20],eax

 Block6:
	mov ecx,edi
	sub ecx,esi
	mov edx,ecx
	mov eax,ebx
	imul edx,ecx
	sub eax,dword ptr [ebp+0x14]
	mov ecx,eax
	imul ecx,eax
	add edx,ecx
	mov dword ptr [ebp-0x14],edx
	fild dword ptr [ebp-0x14]
	call __CIsqrt
	call __ftol2_sse
	mov ecx,eax
	mov eax,0x2AAAAAAB
	imul ecx
	sar edx,3
	mov eax,edx
	shr eax,0x1F
	lea ecx,[edx+eax+1]
	test ecx,ecx
	jle Block68

 Block7:
	mov edx,dword ptr [ebp-0x18]
	mov esi,dword ptr [ebp-0x20]
	add edx,0xBC
	mov dword ptr [ebp-0x3C],edx
	mov eax,esi
	cdq
	xor eax,edx
	sub eax,edx
	add eax,eax
	mov dword ptr [ebp-0x14],eax
	lea edx,[esi+esi]
	fild dword ptr [ebp-0x14]
	mov dword ptr [ebp-0x14],edx
	mov eax,ecx
	cdq
	sub eax,edx
	fstp qword ptr [ebp-0x44]
	fild dword ptr [ebp-0x14]
	sar eax,1
	neg eax
	mov dword ptr [ebp-0x24],eax
	fstp qword ptr [ebp-0x4C]
	mov dword ptr [ebp-0x14],ecx
	jmp Block9

 Block8:
	mov esi,dword ptr [ebp-0x20]

 Block9:
	mov ecx,dword ptr [ebp-0x3C]
	call ZList<CAnimationDisplayer::CHAINLIGHTNINGINFO>::AddTail_
	mov ecx,dword ptr [ebp+0xC]
	mov edx,dword ptr [ebp+0x20]
	mov edi,eax
	mov eax,dword ptr [ebp+8]
	mov dword ptr [edi+4],ecx
	mov ecx,offset _D_G_RAND
	mov dword ptr [ebp-0x30],edi
	mov dword ptr [edi],eax
	mov dword ptr [edi+0x10],edx
	mov dword ptr [edi+0x1C],esi
	call CRand32::Random
	xor edx,edx
	mov ecx,3
	div ecx
	cmp dword ptr [ebp+0x28],0
	mov esi,edx
	je Block11

 Block10:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	mov esi,eax
	and esi,1

 Block11:
	mov eax,0x20
	call __alloca_probe_8
	mov eax,esp
	push 0xA
	push eax
	push esi
	call __itow
	add esp,0xC
	push eax
	lea ecx,[ebp-0x1C]
	call _xbstr_t::_ctor_1
	push offset _S___10
	lea ecx,[ebp-0x28]
	mov byte ptr [ebp-4],1
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x28]
	push edx
	lea eax,[ebp-0x18]
	push eax
	lea ecx,[ebp+0x24]
	mov byte ptr [ebp-4],2
	call Ztl_bstr_t::op_add_0
	lea ecx,[ebp-0x1C]
	push ecx
	lea edx,[ebp-0x2C]
	push edx
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call _xbstr_t::operator+
	mov esi,dword ptr [eax]
	test esi,esi
	je Block13

 Block12:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block13:
	lea ebx,[edi+0x18]
	lea ecx,[ebp-0x34]
	cmp ebx,ecx
	je Block25

 Block14:
	mov edi,dword ptr [ebx]
	test edi,edi
	je Block23

 Block15:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block22

 Block16:
	test edi,edi
	je Block22

 Block17:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block19

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block19:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block21

 Block20:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block21:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block22:
	mov dword ptr [ebx],0

 Block23:
	mov dword ptr [ebx],esi
	test esi,esi
	je Block32

 Block24:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edi,dword ptr [ebp-0x30]

 Block25:
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	test esi,esi
	je Block33

 Block26:
	lea ecx,[esi+8]
	push ecx
	call ebx
	test eax,eax
	jne Block33

 Block27:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block29:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block31

 Block30:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block31:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free
	jmp Block33

 Block32:
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	mov edi,dword ptr [ebp-0x30]

 Block33:
	mov esi,dword ptr [ebp-0x2C]
	test esi,esi
	je Block42

 Block34:
	lea edx,[esi+8]
	push edx
	call ebx
	test eax,eax
	jne Block41

 Block35:
	test esi,esi
	je Block41

 Block36:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block38

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block38:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block40

 Block39:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block40:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block41:
	mov dword ptr [ebp-0x2C],0

 Block42:
	mov esi,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],2
	test esi,esi
	je Block51

 Block43:
	lea eax,[esi+8]
	push eax
	call ebx
	test eax,eax
	jne Block50

 Block44:
	test esi,esi
	je Block50

 Block45:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block47

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block47:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block49

 Block48:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block49:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block50:
	mov dword ptr [ebp-0x18],0

 Block51:
	mov esi,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],1
	test esi,esi
	je Block59

 Block52:
	lea ecx,[esi+8]
	push ecx
	call ebx
	test eax,eax
	jne Block58

 Block53:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block55

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block55:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block57

 Block56:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block57:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block58:
	mov dword ptr [ebp-0x28],0

 Block59:
	mov esi,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],0
	test esi,esi
	je Block67

 Block60:
	lea edx,[esi+8]
	push edx
	call ebx
	test eax,eax
	jne Block66

 Block61:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block63

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block63:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block65

 Block64:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block65:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block66:
	mov dword ptr [ebp-0x1C],0

 Block67:
	fild dword ptr [ebp-0x24]
	fmul qword ptr [__real_4048000000000000]
	fstp qword ptr [ebp-0x38]
	fld qword ptr [ebp-0x44]
	fmul qword ptr [_D_PI__215]
	fdiv qword ptr [__real_4076800000000000]
	call __CIcos
	fmul qword ptr [ebp-0x38]
	fild dword ptr [ebp+0x18]
	fiadd dword ptr [ebp+0x10]
	fmul qword ptr [__real_3fe0000000000000]
	faddp st(1),st(0)
	call __ftol2_sse
	fld qword ptr [ebp-0x4C]
	fmul qword ptr [_D_PI__215]
	mov dword ptr [edi+8],eax
	fdiv qword ptr [__real_4076800000000000]
	call __CIsin
	fmul qword ptr [ebp-0x38]
	fild dword ptr [ebp+0x1C]
	fiadd dword ptr [ebp+0x14]
	fmul qword ptr [__real_3fe0000000000000]
	faddp st(1),st(0)
	call __ftol2_sse
	mov dword ptr [edi+0xC],eax
	mov eax,1
	add dword ptr [ebp-0x24],eax
	sub dword ptr [ebp-0x14],eax
	jne Block8

 Block68:
	mov esi,dword ptr [ebp+0x24]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test esi,esi
	je Block76

 Block69:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block76

 Block70:
	test esi,esi
	je Block76

 Block71:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block73

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block73:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block75

 Block74:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block75:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block76:
	lea esp,[ebp-0x5C]
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
	ret 0x24
}
}
// CAnimationDisplayer::Effect_Catch
_SUB_EXCEPTION_HANDLER(4FDB0)
__SUB_CLASS_THIS(0004FDB0, __thiscall, 18582,  CAnimationDisplayer, void, long, long, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4FDB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xB0
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC4]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x90],ecx
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0xA4]
	push eax
	call edi
	lea ecx,[esp+0xA4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor esi,esi
	add esp,8
	cmp eax,esi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x94]
	push edx
	mov dword ptr [esp+0xD0],esi
	call edi
	lea eax,[esp+0x94]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push esi
	push esi
	lea ecx,[esp+0xAC]
	push ecx
	lea edx,[esp+0xA0]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push 0x3DC
	mov bl,1
	push eax
	mov byte ptr [esp+0xE8],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xE0],2
	cmp dword ptr [_D_G_RM],esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0xC8]
	push ecx
	mov byte ptr [esp+0xE4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xD4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x64]
	mov dword ptr [esp+0x64],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov ebp,8
	mov byte ptr [esp+0xCC],5
	cmp word ptr [esp+0xB4],bp
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0xBC]
	xor edx,edx
	mov word ptr [esp+0xB4],dx
	cmp eax,esi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0xB4]
	push eax
	call ebx

 Block13:
	mov byte ptr [esp+0xCC],6
	cmp word ptr [esp+0x94],bp
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x9C]
	xor ecx,ecx
	mov word ptr [esp+0x94],cx
	cmp eax,esi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x94]
	push edx
	call ebx

 Block17:
	mov byte ptr [esp+0xCC],7
	cmp word ptr [esp+0xA4],bp
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0xA4],ax
	mov eax,dword ptr [esp+0xAC]
	cmp eax,esi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0xA4]
	push ecx
	call ebx

 Block21:
	mov dword ptr [esp+0x68],esi
	xor ebp,ebp
	mov dword ptr [esp+0x7C],ebp
	push esi
	push esi
	push ecx
	mov byte ptr [esp+0xD8],9
	mov edx,esp
	cmp dword ptr [esp+0xE8],esi
	je Block57

 Block22:
	mov dword ptr [esp+0x30],esp
	push 0xE8F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [esp+0x6C]
	mov byte ptr [esp+0xD8],0xA
	cmp edi,esi
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea eax,[esp+0x20]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xDC],9
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xD4],0xB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x30],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block27

 Block25:
	cmp eax,0x80004002
	je Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xCC],0xD
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,esi
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[esp+0x14]
	push edx
	call ebx

 Block31:
	mov esi,dword ptr [esp+0x2C]
	test esi,esi
	sete al
	test al,al
	je Block35

 Block32:
	mov byte ptr [esp+0xCC],9
	test esi,esi
	je Block34

 Block33:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block34:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov dword ptr [esp+0xD0],0xFFFFFFFF
	call eax
	jmp Block193

 Block35:
	mov dword ptr [esp+0x28],0
	lea ecx,[esp+0x24]
	push 0x3D2
	mov bl,0xE
	push ecx
	mov byte ptr [esp+0xD4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edx,[esp+0x2C]
	push edx
	push eax
	mov byte ptr [esp+0xD8],0xF
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0xCC],bl
	test eax,eax
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block37:
	push 0
	push 0xFF
	push 0xC00614A4
	push ecx
	mov ecx,dword ptr [esp+0xE4]
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [eax],0
	mov eax,dword ptr [esp+0xE8]
	mov edx,dword ptr [esp+0x38]
	push eax
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x80],esp
	test eax,eax
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block39:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x88],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block41

 Block40:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block41:
	lea edx,[esp+0x48]
	push edx
	call CAnimationDisplayer::LoadLayer_0
	mov eax,dword ptr [eax]
	add esp,0x28
	test eax,eax
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov ebp,eax
	push eax
	mov dword ptr [esp+0x80],ebp
	call edx

 Block43:
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block45

 Block44:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block45:
	test ebp,ebp
	sete al
	test al,al
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0xCC],0xD
	je Block53

 Block46:
	test eax,eax
	je Block48

 Block47:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block48:
	mov byte ptr [esp+0xCC],9
	test esi,esi
	je Block50

 Block49:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block50:
	mov byte ptr [esp+0xCC],8
	test ebp,ebp
	je Block52

 Block51:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	call eax

 Block52:
	mov ecx,dword ptr [edi]
	push edi
	jmp Block192

 Block53:
	test eax,eax
	je Block55

 Block54:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block55:
	mov byte ptr [esp+0xCC],9
	test esi,esi
	je Block175

 Block56:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx
	jmp Block175

 Block57:
	mov dword ptr [esp+0x70],esp
	push 0xE90
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x6C]
	mov byte ptr [esp+0xD8],0x10
	cmp ecx,esi
	jne Block59

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0xDC],9
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xD4],0x11
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x6C]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block62

 Block60:
	cmp eax,0x80004002
	je Block62

 Block61:
	push eax
	call _com_issue_error

 Block62:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xCC],9
	jne Block65

 Block63:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,esi
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea edx,[esp+0x14]
	push edx
	call ebx

 Block66:
	lea eax,[esp+0x40]
	push eax
	call edi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block68

 Block67:
	push eax
	call _com_issue_error

 Block68:
	mov edx,3
	mov word ptr [esp+0x50],dx
	mov dword ptr [esp+0x58],esi
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xCC],0x13
	cmp ecx,esi
	jne Block70

 Block69:
	push 0x80004003
	call _com_issue_error

 Block70:
	lea eax,[esp+0x40]
	push eax
	lea edx,[esp+0x54]
	push edx
	push esi
	push esi
	push esi
	push esi
	push esi
	lea eax,[esp+0x40]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	cmp eax,esi
	je Block72

 Block71:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov ebp,eax
	push eax
	mov dword ptr [esp+0x80],ebp
	call edx

 Block72:
	mov eax,dword ptr [esp+0x24]
	cmp eax,esi
	je Block74

 Block73:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block74:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0xCC],0x12
	jne Block77

 Block75:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	cmp eax,esi
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea ecx,[esp+0x50]
	push ecx
	call ebx

 Block78:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0xCC],9
	jne Block81

 Block79:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	cmp eax,esi
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea eax,[esp+0x40]
	push eax
	call ebx

 Block82:
	cmp ebp,esi
	jne Block84

 Block83:
	push 0x80004003
	call _com_issue_error

 Block84:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+0xB4]
	push 0xC00614A4
	push ebp
	call edx
	cmp eax,esi
	jge Block86

 Block85:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebp
	push eax
	call _com_issue_errorex

 Block86:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push ebp
	call ecx
	cmp eax,esi
	jge Block88

 Block87:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebp
	push eax
	call _com_issue_errorex

 Block88:
	lea edx,[esp+0x14]
	push edx
	call edi
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block90

 Block89:
	push eax
	call _com_issue_error

 Block90:
	lea ecx,[esp+0x30]
	mov bl,0x14
	push ecx
	mov byte ptr [esp+0xD0],bl
	call edi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block92

 Block91:
	push eax
	call _com_issue_error

 Block92:
	mov eax,3
	mov edi,0xFF
	mov word ptr [esp+0x6C],ax
	mov dword ptr [esp+0x74],edi
	mov ecx,eax
	mov word ptr [esp+0x50],cx
	mov dword ptr [esp+0x58],edi
	mov edx,eax
	mov word ptr [esp+0x40],dx
	mov dword ptr [esp+0x48],0xC8
	mov esi,dword ptr [esp+0x68]
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x74]
	push edx
	lea eax,[esp+0x5C]
	push eax
	lea ecx,[esp+0x50]
	push ecx
	push esi
	lea edx,[esp+0x98]
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0xE8],0x18
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x80],8
	jne Block95

 Block93:
	xor eax,eax
	mov word ptr [esp+0x80],ax
	mov eax,dword ptr [esp+0x88]
	test eax,eax
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea ecx,[esp+0x80]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0xCC],0x17
	jne Block99

 Block97:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block100:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0xCC],0x16
	jne Block103

 Block101:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	test eax,eax
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea edx,[esp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block104:
	cmp word ptr [esp+0x6C],8
	mov byte ptr [esp+0xCC],0x15
	jne Block107

 Block105:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	test eax,eax
	je Block108

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block107:
	lea ecx,[esp+0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block108:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0xCC],bl
	jne Block111

 Block109:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block112

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block111:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block112:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xCC],9
	jne Block115

 Block113:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block116:
	lea eax,[esp+0x50]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block118

 Block117:
	push eax
	call _com_issue_error

 Block118:
	lea edx,[esp+0x40]
	mov bl,0x19
	push edx
	mov byte ptr [esp+0xD0],bl
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block120

 Block119:
	push eax
	call _com_issue_error

 Block120:
	mov ecx,3
	mov word ptr [esp+0x6C],cx
	mov dword ptr [esp+0x74],0
	mov edx,ecx
	mov word ptr [esp+0x30],dx
	mov dword ptr [esp+0x38],edi
	mov eax,ecx
	mov word ptr [esp+0x14],ax
	mov dword ptr [esp+0x1C],0xC8
	lea ecx,[esp+0x50]
	push ecx
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x74]
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	lea edx,[esp+0x24]
	push edx
	push esi
	lea eax,[esp+0x98]
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0xE8],0x1D
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x80],8
	jne Block123

 Block121:
	mov eax,dword ptr [esp+0x88]
	xor ecx,ecx
	mov word ptr [esp+0x80],cx
	test eax,eax
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea edx,[esp+0x80]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block124:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xCC],0x1C
	jne Block131

 Block125:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block127

 Block126:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block127:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block128:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0xCC],0x1B
	jne Block132

 Block129:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block133

 Block130:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block133

 Block131:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x14]
	push ecx
	call edi
	jmp Block128

 Block132:
	lea eax,[esp+0x30]
	push eax
	call edi

 Block133:
	cmp word ptr [esp+0x6C],8
	mov byte ptr [esp+0xCC],0x1A
	jne Block136

 Block134:
	mov eax,dword ptr [esp+0x74]
	xor ecx,ecx
	mov word ptr [esp+0x6C],cx
	test eax,eax
	je Block137

 Block135:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block137

 Block136:
	lea edx,[esp+0x6C]
	push edx
	call edi

 Block137:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0xCC],bl
	jne Block140

 Block138:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block141

 Block139:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block141

 Block140:
	lea ecx,[esp+0x40]
	push ecx
	call edi

 Block141:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0xCC],9
	jne Block144

 Block142:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block145

 Block143:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block145

 Block144:
	lea eax,[esp+0x50]
	push eax
	call edi

 Block145:
	test esi,esi
	jne Block147

 Block146:
	push 0x80004003
	call _com_issue_error

 Block147:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x2C]
	push edx
	push esi
	mov dword ptr [esp+0x34],0
	call eax
	test eax,eax
	jge Block149

 Block148:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block149:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x28]
	push edx
	push esi
	mov dword ptr [esp+0x30],0
	call eax
	test eax,eax
	jge Block151

 Block150:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block151:
	mov eax,dword ptr [esp+0x2C]
	mov esi,dword ptr [esp+0xD4]
	mov edi,dword ptr [esp+0xD8]
	sub edi,dword ptr [esp+0x28]
	cdq
	sub eax,edx
	lea ecx,[esp+0x30]
	sar eax,1
	push ecx
	sub esi,eax
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x30]
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
	lea eax,[esp+0x14]
	mov bl,0x1E
	push eax
	mov byte ptr [esp+0xD0],bl
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block155

 Block154:
	push eax
	call _com_issue_error

 Block155:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x18]
	push eax
	push edi
	push esi
	mov ecx,ebp
	mov byte ptr [esp+0xDC],0x1F
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xCC],bl
	jne Block158

 Block156:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block159

 Block157:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block159

 Block158:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block159:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0xCC],9
	jne Block162

 Block160:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block163

 Block161:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block163

 Block162:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block163:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block165

 Block164:
	push eax
	call _com_issue_error

 Block165:
	mov ecx,dword ptr [ebp]
	mov eax,dword ptr [ecx+0x58]
	lea edx,[esp+0x2C]
	push edx
	mov bl,0x20
	push ebp
	mov byte ptr [esp+0xD4],bl
	mov dword ptr [esp+0x34],0
	call eax
	test eax,eax
	jge Block167

 Block166:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push ebp
	push eax
	call _com_issue_errorex

 Block167:
	mov eax,dword ptr [esp+0x2C]
	add eax,0x190
	mov ecx,3
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],eax
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x18]
	push eax
	push edi
	push esi
	mov ecx,ebp
	mov byte ptr [esp+0xDC],0x21
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xCC],bl
	jne Block170

 Block168:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block171

 Block169:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block171

 Block170:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block171:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0xCC],9
	jne Block174

 Block172:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block175

 Block173:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block175

 Block174:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block175:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x30]
	push edx
	call esi
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block177

 Block176:
	push eax
	call _com_issue_error

 Block177:
	lea ecx,[esp+0x14]
	mov bl,0x22
	push ecx
	mov byte ptr [esp+0xD0],bl
	call esi
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block179

 Block178:
	push eax
	call _com_issue_error

 Block179:
	mov byte ptr [esp+0xCC],0x23
	test ebp,ebp
	jne Block181

 Block180:
	push 0x80004003
	call _com_issue_error

 Block181:
	lea eax,[esp+0x30]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	push 0
	mov ecx,ebp
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0xCC],bl
	cmp word ptr [esp+0x14],si
	jne Block184

 Block182:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
	je Block185

 Block183:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block185

 Block184:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block185:
	mov byte ptr [esp+0xCC],9
	cmp word ptr [esp+0x30],si
	jne Block188

 Block186:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block189

 Block187:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block189

 Block188:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block189:
	push ecx
	mov eax,esp
	mov dword ptr [eax],0
	mov eax,dword ptr [esp+0xE4]
	mov dword ptr [esp+0x68],esp
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x70],esp
	push ebp
	call edx
	mov ecx,dword ptr [esp+0x9C]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0xD0],8
	call ecx
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0xCC],7
	test eax,eax
	je Block191

 Block190:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block191:
	mov eax,dword ptr [esp+0x60]
	mov ecx,dword ptr [eax]
	push eax

 Block192:
	mov edx,dword ptr [ecx+8]
	mov dword ptr [esp+0xD0],0xFFFFFFFF
	call edx

 Block193:
	mov ecx,dword ptr [esp+0xC4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xBC
	ret 0x10
}
}
// CAnimationDisplayer::RegisterTeslacoilAnimation
_SUB_EXCEPTION_HANDLER(5D650)
__SUB_CLASS_THIS(0005D650, __thiscall, 18573,  CAnimationDisplayer, void, long, long, NakedParam<tagPOINT>, NakedParam<tagPOINT>, long, NakedParam<Ztl_bstr_t>, unsigned long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5D650
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x18],ecx
	mov esi,dword ptr [ebp+0x10]
	mov edi,dword ptr [ebp+0x18]
	cmp esi,edi
	mov dword ptr [ebp-4],0
	jle Block2

 Block1:
	mov ebx,dword ptr [ebp+0x14]
	mov ecx,dword ptr [ebp+0x1C]
	mov eax,esi
	mov esi,edi
	mov edi,eax
	mov dword ptr [ebp+0x10],esi
	mov dword ptr [ebp+0x14],ecx
	mov dword ptr [ebp+0x18],edi
	mov dword ptr [ebp+0x1C],ebx
	jmp Block3

 Block2:
	mov ebx,dword ptr [ebp+0x1C]

 Block3:
	cmp esi,edi
	jne Block5

 Block4:
	xor edx,edx
	cmp dword ptr [ebp+0x14],ebx
	setge dl
	dec edx
	and edx,0xFFFFFF4C
	add edx,0x10E
	mov dword ptr [ebp-0x20],edx
	jmp Block6

 Block5:
	fild dword ptr [ebp+0x1C]
	fisub dword ptr [ebp+0x14]
	fild dword ptr [ebp+0x18]
	fisub dword ptr [ebp+0x10]
	fdivp st(1),st(0)
	call __CIatan
	fmul qword ptr [__real_4066800000000000]
	fdiv qword ptr [_D_PI__215]
	call __ftol2_sse
	mov dword ptr [ebp-0x20],eax

 Block6:
	mov ecx,edi
	sub ecx,esi
	mov edx,ecx
	mov eax,ebx
	imul edx,ecx
	sub eax,dword ptr [ebp+0x14]
	mov ecx,eax
	imul ecx,eax
	add edx,ecx
	mov dword ptr [ebp-0x14],edx
	fild dword ptr [ebp-0x14]
	call __CIsqrt
	call __ftol2_sse
	mov ecx,eax
	mov eax,0x2AAAAAAB
	imul ecx
	sar edx,3
	mov eax,edx
	shr eax,0x1F
	lea edi,[edx+eax+1]
	xor ebx,ebx
	mov dword ptr [ebp-0x3C],edi
	mov dword ptr [ebp-0x2C],ebx
	mov esi,dword ptr [ebp-0x18]
	lea ecx,[ebp-0x30]
	push ecx
	lea edx,[ebp+0x28]
	add esi,0x148
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],1
	call ZMap<unsigned long, ZRef<CAnimationDisplayer::TAnimation<CAnimationDisplayer::CHAINLIGHTNINGINFO>>, unsigned long>::GetAt
	test eax,eax
	jne Block8

 Block7:
	lea ecx,[ebp-0x30]
	call ZRef<CAnimationDisplayer::TAnimation<CAnimationDisplayer::CHAINLIGHTNINGINFO>>::_Alloc
	lea eax,[ebp-0x30]
	push eax
	lea ecx,[ebp+0x28]
	push ecx
	mov ecx,esi
	call ZMap<unsigned long, ZRef<CAnimationDisplayer::TAnimation<CAnimationDisplayer::CHAINLIGHTNINGINFO>>, unsigned long>::Insert

 Block8:
	mov dword ptr [ebp-0x1C],ebx
	test edi,edi
	jle Block73

 Block9:
	mov esi,dword ptr [ebp-0x20]
	mov eax,esi
	cdq
	xor eax,edx
	sub eax,edx
	lea edx,[eax+eax]
	mov dword ptr [ebp-0x14],edx
	fild dword ptr [ebp-0x14]
	lea eax,[esi+esi]
	mov dword ptr [ebp-0x14],eax
	dec edi
	fstp qword ptr [ebp-0x54]
	mov dword ptr [ebp-0x38],edi
	fild dword ptr [ebp-0x14]
	fstp qword ptr [ebp-0x5C]
	fild dword ptr [ebp-0x38]
	fmul qword ptr [__real_3fe0000000000000]
	fstp qword ptr [ebp-0x4C]
	jmp Block12

 Block11:
	mov ebx,dword ptr [ebp-0x1C]
	mov esi,dword ptr [ebp-0x20]

 Block12:
	mov ecx,dword ptr [ebp-0x2C]
	call ZList<CAnimationDisplayer::CHAINLIGHTNINGINFO>::AddTail_
	mov ecx,dword ptr [ebp+8]
	mov edx,dword ptr [ebp+0xC]
	mov edi,eax
	mov eax,dword ptr [ebp+0x20]
	mov dword ptr [edi],ecx
	mov ecx,offset _D_G_RAND
	mov dword ptr [ebp-0x34],edi
	mov dword ptr [edi+4],edx
	mov dword ptr [edi+0x10],eax
	mov dword ptr [edi+0x1C],esi
	call CRand32::Random
	xor edx,edx
	mov ecx,3
	div ecx
	mov esi,edx
	inc esi
	test ebx,ebx
	jne Block14

 Block13:
	xor esi,esi
	jmp Block16

 Block14:
	cmp ebx,dword ptr [ebp-0x38]
	jne Block16

 Block15:
	mov esi,4

 Block16:
	mov eax,0x20
	call __alloca_probe_8
	mov eax,esp
	push 0xA
	push eax
	push esi
	call __itow
	add esp,0xC
	push eax
	lea ecx,[ebp-0x24]
	call _xbstr_t::_ctor_1
	push offset _S___10
	lea ecx,[ebp-0x28]
	mov byte ptr [ebp-4],2
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x28]
	push edx
	lea eax,[ebp-0x14]
	push eax
	lea ecx,[ebp+0x24]
	mov byte ptr [ebp-4],3
	call Ztl_bstr_t::op_add_0
	lea ecx,[ebp-0x24]
	push ecx
	lea edx,[ebp-0x18]
	push edx
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call _xbstr_t::operator+
	mov esi,dword ptr [eax]
	test esi,esi
	je Block18

 Block17:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block18:
	lea ebx,[edi+0x18]
	lea ecx,[ebp-0x40]
	cmp ebx,ecx
	je Block30

 Block19:
	mov edi,dword ptr [ebx]
	test edi,edi
	je Block28

 Block20:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block27

 Block21:
	test edi,edi
	je Block27

 Block22:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block24

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block24:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block26

 Block25:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block26:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block27:
	mov dword ptr [ebx],0

 Block28:
	mov dword ptr [ebx],esi
	test esi,esi
	je Block37

 Block29:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edi,dword ptr [ebp-0x34]

 Block30:
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	test esi,esi
	je Block38

 Block31:
	lea ecx,[esi+8]
	push ecx
	call ebx
	test eax,eax
	jne Block38

 Block32:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block34

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block34:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block36

 Block35:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block36:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free
	jmp Block38

 Block37:
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	mov edi,dword ptr [ebp-0x34]

 Block38:
	mov esi,dword ptr [ebp-0x18]
	test esi,esi
	je Block47

 Block39:
	lea edx,[esi+8]
	push edx
	call ebx
	test eax,eax
	jne Block46

 Block40:
	test esi,esi
	je Block46

 Block41:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block43

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block43:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block45

 Block44:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block45:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block46:
	mov dword ptr [ebp-0x18],0

 Block47:
	mov esi,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],3
	test esi,esi
	je Block56

 Block48:
	lea eax,[esi+8]
	push eax
	call ebx
	test eax,eax
	jne Block55

 Block49:
	test esi,esi
	je Block55

 Block50:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block52

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block52:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block54

 Block53:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block54:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block55:
	mov dword ptr [ebp-0x14],0

 Block56:
	mov esi,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],2
	test esi,esi
	je Block64

 Block57:
	lea ecx,[esi+8]
	push ecx
	call ebx
	test eax,eax
	jne Block63

 Block58:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block60

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block60:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block62

 Block61:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block62:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block63:
	mov dword ptr [ebp-0x28],0

 Block64:
	mov esi,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],1
	test esi,esi
	je Block72

 Block65:
	lea edx,[esi+8]
	push edx
	call ebx
	test eax,eax
	jne Block71

 Block66:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block68

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block68:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block70

 Block69:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block70:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block71:
	mov dword ptr [ebp-0x24],0

 Block72:
	fild dword ptr [ebp-0x1C]
	fsub qword ptr [ebp-0x4C]
	fmul qword ptr [__real_4048000000000000]
	fstp qword ptr [ebp-0x44]
	fld qword ptr [ebp-0x54]
	fmul qword ptr [_D_PI__215]
	fdiv qword ptr [__real_4076800000000000]
	call __CIcos
	fmul qword ptr [ebp-0x44]
	fild dword ptr [ebp+0x18]
	fiadd dword ptr [ebp+0x10]
	fmul qword ptr [__real_3fe0000000000000]
	faddp st(1),st(0)
	call __ftol2_sse
	fld qword ptr [ebp-0x5C]
	fmul qword ptr [_D_PI__215]
	mov dword ptr [edi+8],eax
	fdiv qword ptr [__real_4076800000000000]
	call __CIsin
	fmul qword ptr [ebp-0x44]
	fild dword ptr [ebp+0x1C]
	fiadd dword ptr [ebp+0x14]
	fmul qword ptr [__real_3fe0000000000000]
	faddp st(1),st(0)
	call __ftol2_sse
	mov dword ptr [edi+0xC],eax
	mov eax,dword ptr [ebp-0x1C]
	inc eax
	cmp eax,dword ptr [ebp-0x3C]
	mov dword ptr [ebp-0x1C],eax
	jl Block11

 Block73:
	mov esi,dword ptr [ebp-0x2C]
	mov byte ptr [ebp-4],0
	test esi,esi
	je Block77

 Block74:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block77

 Block75:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block77

 Block76:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block77:
	mov esi,dword ptr [ebp+0x24]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test esi,esi
	je Block85

 Block78:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block85

 Block79:
	test esi,esi
	je Block85

 Block80:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block82

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block82:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block84

 Block83:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block84:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block85:
	lea esp,[ebp-0x6C]
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
	ret 0x24
}
}
