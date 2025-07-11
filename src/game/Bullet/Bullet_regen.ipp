#include "regen.hpp"
// Bullet.ipp
#include "Bullet.hpp"

// CBullet::Initialize
__SUB_CLASS_THIS0(00076F80, __thiscall, 18288,  CBullet, int32_t) {
__asm {

 Block0:
	push ecx
	push ebx
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x10],0
	lea ebx,[esi+0x10]
	sete al
	test al,al
	sete al
	push edi
	test al,al
	je Block2

 Block1:
	mov eax,1
	pop edi
	pop esi
	pop ebx
	pop ecx
	ret

 Block2:
	cmp dword ptr [esi+0xC],0
	sete al
	test al,al
	je Block10

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+4]
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xC]
	cmp edi,eax
	je Block8

 Block4:
	mov dword ptr [esi+0xC],eax
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	test edi,edi
	je Block8

 Block7:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block8:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block10:
	mov eax,dword ptr [esi+0xC]
	test eax,eax
	sete cl
	test cl,cl
	sete cl
	test cl,cl
	je Block16

 Block11:
	cmp dword ptr [ebx],0
	sete cl
	test cl,cl
	je Block16

 Block12:
	mov ecx,dword ptr [esi+0x14]
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x14],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block14

 Block13:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block14:
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	call edx
	push eax
	mov ecx,ebx
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	cmp dword ptr [esi+0xC],0
	je Block18

 Block17:
	cmp dword ptr [ebx],0
	jne Block1

 Block18:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	pop ecx
	ret
}
}
// CBullet::CBullet
__SUB_CLASS_THIS(00076F10, __thiscall, 18284,  CBullet, void, long, long, NakedParam<tagPOINT>, NakedParam<tagPOINT>, NakedParam<_x_com_ptr<IWzVector2D>>) {
__asm {

 Block0:
	mov edx,dword ptr [esp+0xC]
	xor eax,eax
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	int 3// TODO: 	mov dword ptr [esi],offset CBullet::`vftable'
	mov dword ptr [esi+0xC],eax
	mov dword ptr [esi+0x10],eax
	mov dword ptr [esi+0x14],eax
	mov eax,dword ptr [esp+8]
	mov dword ptr [esi+0x18],eax
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esi+0x1C],ecx
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [esi+0x20],edx
	mov edx,dword ptr [esp+0x1C]
	mov dword ptr [esi+0x24],eax
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esi+0x28],ecx
	mov dword ptr [esi+0x2C],edx
	mov dword ptr [esi+0x30],eax
	test eax,eax
	je Block3

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	mov eax,esi
	pop esi
	ret 0x1C
}
}
// CBullet::CallUpdate
__SUB_CLASS_THIS(00077060, __thiscall, 18287,  CBullet, int32_t, long) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	push edi
	mov esi,ecx
	call CBullet::NeedsUpdate
	test eax,eax
	je Block4

 Block1:
	mov ecx,esi
	call CBullet::Initialize
	test eax,eax
	jne Block3

 Block2:
	pop edi
	mov eax,1
	pop esi
	ret 4

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xC]
	push edi
	mov ecx,esi
	call edx
	pop edi
	pop esi
	ret 4

 Block4:
	sub edi,dword ptr [esi+0x1C]
	mov eax,0
	pop edi
	setns al
	pop esi
	ret 4
}
}
// CBullet::NeedsUpdate
__SUB_CLASS_THIS(00076E80, __thiscall, 18287,  CBullet, int32_t, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,eax
	sub edx,dword ptr [ecx+0x1C]
	js Block2

 Block1:
	xor eax,eax
	ret 4

 Block2:
	sub eax,dword ptr [ecx+0x18]
	xor ecx,ecx
	test eax,eax
	setg cl
	mov eax,ecx
	ret 4
}
}
// CBullet::CreateBulletOrigin
_SUB_EXCEPTION_HANDLER(77550)
__SUB_CLASS_THIS0(00077550, __thiscall, 18289,  CBullet, _x_com_ptr<IWzVector2D>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_77550
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
	xor ebp,ebp
	mov dword ptr [esp+0x28],ebp
	mov eax,dword ptr [edi+0x28]
	sub eax,dword ptr [edi+0x20]
	mov ecx,dword ptr [edi+0x2C]
	sub ecx,dword ptr [edi+0x24]
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x24],ecx
	cmp eax,ebp
	jne Block3

 Block1:
	cmp ecx,ebp
	jne Block3

 Block2:
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [eax],ebp
	jmp Block79

 Block3:
	mov edx,ecx
	imul edx,ecx
	mov ecx,eax
	imul ecx,eax
	add edx,ecx
	mov dword ptr [esp+0x1C],edx
	fild dword ptr [esp+0x1C]
	call __CIsqrt
	fstp qword ptr [esp+0x30]
	mov dword ptr [esp+0x14],ebp
	lea edx,[esp+0x20]
	push 0x3D2
	push edx
	mov dword ptr [esp+0x68],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x60],1
	cmp eax,ebp
	je Block5

 Block4:
	mov eax,dword ptr [eax]
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	push ebp
	lea ecx,[esp+0x18]
	push ecx
	push eax
	call PcCreate_IWzVector2D
	mov ecx,dword ptr [esp+0x2C]
	add esp,0xC
	mov byte ptr [esp+0x60],0
	cmp ecx,ebp
	je Block8

 Block7:
	call _xbstr_t::Data_t::Release

 Block8:
	mov eax,dword ptr [edi+0x30]
	cmp eax,ebp
	sete cl
	test cl,cl
	sete cl
	mov dword ptr [esp+0x1C],ebp
	mov dword ptr [esp+0x18],ebp
	test cl,cl
	je Block27

 Block9:
	mov edx,0xD
	mov word ptr [esp+0x38],dx
	mov dword ptr [esp+0x40],eax
	cmp eax,ebp
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block11:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x60],2
	cmp ecx,ebp
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	mov ebx,dword ptr [esp+0x38]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x4C]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x50]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0x54]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [edx+0x64]
	push ecx
	mov esi,ecx
	call eax
	cmp eax,ebp
	jge Block15

 Block14:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block15:
	mov ebx,8
	mov byte ptr [esp+0x60],0
	cmp word ptr [esp+0x38],bx
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	cmp eax,ebp
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
	push eax
	call esi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block21

 Block20:
	push eax
	call _com_issue_error

 Block21:
	mov ecx,dword ptr [edi+0x30]
	mov byte ptr [esp+0x60],3
	cmp ecx,ebp
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea edx,[esp+0x38]
	push edx
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	lea eax,[esp+0x34]
	push eax
	lea edx,[esp+0x3C]
	push edx
	call IWzVector2D::_GetSnapshot
	mov byte ptr [esp+0x60],0
	cmp word ptr [esp+0x38],bx
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block28

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block26:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block28

 Block27:
	mov esi,dword ptr [ZImports::_VariantInit]

 Block28:
	lea edx,[esp+0x48]
	push edx
	call esi
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	lea ecx,[esp+0x38]
	mov bl,4
	push ecx
	mov byte ptr [esp+0x64],bl
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x60],5
	cmp ecx,ebp
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	lea eax,[esp+0x48]
	push eax
	mov eax,dword ptr [edi+0x24]
	sub eax,dword ptr [esp+0x1C]
	lea edx,[esp+0x3C]
	push edx
	mov edx,dword ptr [edi+0x20]
	sub edx,dword ptr [esp+0x24]
	push eax
	push edx
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x60],bl
	jne Block41

 Block35:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block37

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block37:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block38:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x60],0
	jne Block42

 Block39:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	cmp eax,ebp
	je Block43

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block41:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x38]
	push ecx
	call ebx
	jmp Block38

 Block42:
	lea eax,[esp+0x48]
	push eax
	call ebx

 Block43:
	lea ecx,[esp+0x38]
	push ecx
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	mov eax,dword ptr [edi+0x1C]
	mov ecx,3
	mov word ptr [esp+0x48],cx
	mov dword ptr [esp+0x50],eax
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x60],7
	cmp ecx,ebp
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	lea edx,[esp+0x38]
	push edx
	mov edx,dword ptr [edi+0x2C]
	sub edx,dword ptr [esp+0x1C]
	lea eax,[esp+0x4C]
	push eax
	mov eax,dword ptr [edi+0x28]
	sub eax,dword ptr [esp+0x24]
	push edx
	push eax
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x60],6
	cmp word ptr [esp+0x48],si
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	cmp eax,ebp
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea edx,[esp+0x48]
	push edx
	call ebx

 Block51:
	mov byte ptr [esp+0x60],0
	cmp word ptr [esp+0x38],si
	jne Block54

 Block52:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea ecx,[esp+0x38]
	push ecx
	call ebx

 Block55:
	mov esi,dword ptr [esp+0x14]
	cmp esi,ebp
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	fild dword ptr [esp+0x24]
	fld qword ptr [esp+0x30]
	fdiv st(1),st
	fxch
	fchs
	fild dword ptr [esp+0x28]
	fdivrp st(2),st
	fxch
	fchs
	call __CIatan2
	fmul qword ptr [__real_4066800000000000]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x80]
	fdiv qword ptr [_D_PI__8]
	sub esp,8
	fstp qword ptr [esp]
	push esi
	call eax
	cmp eax,ebp
	jge Block59

 Block58:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block59:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	jne Block61

 Block60:
	push 0x80004003
	call _com_issue_error

 Block61:
	mov ecx,dword ptr [eax]
	fldz
	lea edx,[esp+0x28]
	fstp qword ptr [esp+0x28]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x7C]
	call eax
	cmp eax,ebp
	jge Block63

 Block62:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block63:
	fld qword ptr [__real_4056800000000000]
	fcomp qword ptr [esp+0x28]
	fnstsw ax
	test ah,5
	jp Block74

 Block64:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	mov ecx,dword ptr [eax]
	fldz
	lea edx,[esp+0x28]
	fstp qword ptr [esp+0x28]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x7C]
	call eax
	cmp eax,ebp
	jge Block68

 Block67:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block68:
	fld qword ptr [__real_4070e00000000000]
	fcomp qword ptr [esp+0x28]
	fnstsw ax
	test ah,0x41
	jne Block74

 Block69:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebp
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	mov esi,ecx
	call IWzVector2D::Getra
	fsub qword ptr [__real_4066800000000000]
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x80]
	sub esp,8
	fstp qword ptr [esp]
	push esi
	call edx
	cmp eax,ebp
	jge Block73

 Block72:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block73:
	mov dword ptr [edi+0x14],1

 Block74:
	mov eax,dword ptr [esp+0x14]
	mov esi,dword ptr [esp+0x68]
	mov dword ptr [esi],eax
	cmp eax,ebp
	je Block76

 Block75:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx
	mov eax,dword ptr [esp+0x14]

 Block76:
	mov dword ptr [esp+0x60],0xFFFFFFFF
	cmp eax,ebp
	je Block78

 Block77:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block78:
	mov eax,esi

 Block79:
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret 4
}
}
// CBullet::GetLayer
__SUB_CLASS_THIS0(00076EE0, __thiscall, 18292,  CBullet, _x_com_ptr<IWzGr2DLayer>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x10]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esp+4],0
	mov dword ptr [esi],eax
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}


// CFadeoutBullet::CFadeoutBullet
_SUB_EXCEPTION_HANDLER(23C450)
__SUB_CLASS_THIS(0023C450, __thiscall, 18343,  CFadeoutBullet, void, long, long, NakedParam<tagPOINT>, NakedParam<tagPOINT>, NakedParam<_x_com_ptr<IWzVector2D>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_23C450
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
	mov eax,dword ptr [esp+0x34]
	int 3// TODO: 	mov dword ptr [esi],offset CFadeoutBullet::`vftable'
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
	ret 0x1C
}
}

// CFadeoutBullet::Update
_SUB_EXCEPTION_HANDLER(77320)
__SUB_CLASS_THIS(00077320, __thiscall, 18346,  CFadeoutBullet, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_77320
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
	mov ebp,dword ptr [edi+0x1C]
	lea eax,[esp+0x14]
	push eax
	call CBullet::GetLayer
	mov eax,ebp
	sub eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x30],0
	jns Block4

 Block1:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	mov eax,1
	jmp Block28

 Block4:
	cmp eax,0xC8
	mov esi,dword ptr [esp+0x14]
	jg Block25

 Block5:
	test esi,esi
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea eax,[esp+0x38]
	push eax
	mov ecx,esi
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x30],1
	test ecx,ecx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	lea edx,[esp+0x18]
	push edx
	call IWzVector2D::Getorigin
	movzx ecx,word ptr [eax]
	cmp cx,9
	je Block16

 Block10:
	cmp cx,0xD
	je Block16

 Block11:
	mov edx,0x4009
	cmp cx,dx
	je Block14

 Block12:
	mov edx,0x400D
	cmp cx,dx
	je Block14

 Block13:
	xor eax,eax
	jmp Block17

 Block14:
	mov eax,dword ptr [eax+8]
	test eax,eax
	je Block13

 Block15:
	mov eax,dword ptr [eax]
	jmp Block17

 Block16:
	mov eax,dword ptr [eax+8]

 Block17:
	test eax,eax
	sete bl
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x30],1
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x30],0
	test eax,eax
	je Block23

 Block22:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block23:
	test bl,bl
	je Block25

 Block24:
	push ebp
	mov ecx,edi
	call CFadeoutBullet::Fadeout

 Block25:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test esi,esi
	je Block27

 Block26:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block27:
	xor eax,eax

 Block28:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 4
}
}

// CFadeoutBullet::~CFadeoutBullet
_SUB_EXCEPTION_HANDLER(23C500)
__SUB_CLASS_THIS0(0023C500, __thiscall, 18345,  CFadeoutBullet, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_23C500
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

// CFadeoutBullet::Fadeout
_SUB_EXCEPTION_HANDLER(770B0)
__SUB_CLASS_THIS(000770B0, __thiscall, 18347,  CFadeoutBullet, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_770B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	lea eax,[esp+0x18]
	push eax
	call CBullet::GetLayer
	mov dword ptr [esp+0x44],0
	mov dword ptr [esp+0x10],0
	lea ecx,[esp+0x14]
	push 0x3D2
	push ecx
	mov byte ptr [esp+0x4C],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edx,[esp+0x14]
	push edx
	push eax
	mov byte ptr [esp+0x50],2
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x44],1
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,0xD
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	mov ebp,dword ptr [esp+0x18]
	mov byte ptr [esp+0x44],3
	test ebp,ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x14]
	push eax
	mov ecx,ebp
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x44],4
	test esi,esi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
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
	jge Block10

 Block9:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],3
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x44],1
	cmp word ptr [esp+0x1C],si
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[esp+0x1C]
	push ecx
	call edi

 Block16:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
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
	mov edx,dword ptr [esp+0x4C]
	mov ecx,3
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],edx
	mov ecx,dword ptr [esp+0x10]
	mov byte ptr [esp+0x44],6
	test ecx,ecx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea eax,[esp+0x2C]
	push eax
	lea edx,[esp+0x20]
	push edx
	push 0
	push 0xFFFFFF01
	call IWzVector2D::RelMove
	mov byte ptr [esp+0x44],5
	cmp word ptr [esp+0x1C],si
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[esp+0x1C]
	push ecx
	call edi

 Block24:
	mov byte ptr [esp+0x44],1
	cmp word ptr [esp+0x2C],si
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea eax,[esp+0x2C]
	push eax
	call edi

 Block28:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x44],0
	test eax,eax
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov dword ptr [esp+0x48],0xFFFFFFFF
	call ecx
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x38
	ret 4
}
}
