#include "regen.hpp"
// MovePath.ipp
#include "MovePath.hpp"

// CMovePath::Decode
// 667C60
static uint8_t _SUB_267920_LOOKUP_TABLE_0[37] = {
0, 1, 1, 2, 2, 0, 2, 2, 2, 3, 2, 4, 0, 1, 0, 7, 
1, 5, 1, 7, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 1, 
1, 1, 1, 0, 0, 
};
__SUB_CLASS_THIS(00267920, __thiscall, 23138,  CMovePath, void, CInPacket&, int32_t) {
__asm {

 Block0:
	sub esp,0xC
	push ebx
	push ebp
	push esi
	push edi
	mov edi,dword ptr [esp+0x20]
	mov esi,ecx
	mov ecx,edi
	mov dword ptr [esp+0x10],esi
	call CInPacket::Decode2
	movzx ebx,ax
	mov edx,esi
	mov ecx,ebx
	call _ZtlSecureTearHelper<short>::call
	mov ecx,edi
	mov dword ptr [esi+4],eax
	movzx ebp,bx
	call CInPacket::Decode2
	movzx ebx,ax
	lea edx,[esi+8]
	mov ecx,ebx
	call _ZtlSecureTearHelper<short>::call
	mov ecx,edi
	mov dword ptr [esi+0xC],eax
	movzx ebx,bx
	call CInPacket::Decode2
	movzx eax,ax
	mov ecx,edi
	mov dword ptr [esp+0x20],eax
	call CInPacket::Decode2
	movzx ecx,ax
	mov dword ptr [esp+0x14],ecx
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	test eax,eax
	jle Block11

 Block1:
	mov dword ptr [esp+0x18],eax

 Block2:
	lea ecx,[esi+0x20]
	call ZList<CMovePath::ELEM>::AddTail_
	mov esi,eax
	xor eax,eax
	mov dword ptr [esi],eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	mov dword ptr [esi+0xC],eax
	mov dword ptr [esi+0x10],eax
	mov dword ptr [esi+0x14],eax
	mov ecx,edi
	mov dword ptr [esi+0x18],eax
	call CInPacket::Decode1
	mov byte ptr [esi],al
	movzx eax,al
	cmp eax,0x24
	ja Block7

 Block3:
	movzx edx,byte ptr [eax+_SUB_267920_LOOKUP_TABLE_0]
	cmp EDX, 0
je Block4
cmp EDX, 1
je Block15
cmp EDX, 2
je Block18
cmp EDX, 3
je Block21
cmp EDX, 4
je Block19
cmp EDX, 5
je Block20
cmp EDX, 6
je Block17
cmp EDX, 7
je Block7


 Block4:
	mov ecx,edi
	call CInPacket::Decode2
	mov ecx,edi
	mov word ptr [esi+2],ax
	call CInPacket::Decode2
	mov ecx,edi
	mov word ptr [esi+4],ax
	call CInPacket::Decode2
	mov ecx,edi
	mov word ptr [esi+6],ax
	call CInPacket::Decode2
	mov ecx,edi
	mov word ptr [esi+8],ax
	call CInPacket::Decode2
	mov ecx,dword ptr [esp+0x10]
	mov word ptr [esi+0xC],ax
	mov word ptr [ecx+0x40],ax
	cmp byte ptr [esi],0xC
	jne Block6

 Block5:
	mov ecx,edi
	call CInPacket::Decode2
	mov word ptr [esi+0xE],ax

 Block6:
	mov ecx,edi
	call CInPacket::Decode2
	mov ecx,edi
	mov word ptr [esi+0x14],ax
	call CInPacket::Decode2
	mov word ptr [esi+0x16],ax

 Block7:
	mov ecx,edi
	call CInPacket::Decode1
	mov ecx,edi
	mov byte ptr [esi+0xA],al
	call CInPacket::Decode2
	mov word ptr [esi+0x10],ax
	mov ecx,dword ptr [TSingleton<CClientOptMan>::ms_pInstance]
	push 2
	call CClientOptMan::GetOpt
	test eax,eax
	je Block9

 Block8:
	mov ecx,edi
	call CInPacket::Decode2
	mov ecx,edi
	mov word ptr [esi+0x18],ax
	call CInPacket::Decode2
	mov word ptr [esi+0x1A],ax

 Block9:
	movzx eax,word ptr [esi+6]
	movzx ecx,word ptr [esi+8]
	movzx ebp,word ptr [esi+2]
	movzx ebx,word ptr [esi+4]
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x14],ecx

 Block10:
	sub dword ptr [esp+0x18],1
	mov esi,dword ptr [esp+0x10]
	jne Block2

 Block11:
	cmp dword ptr [esp+0x24],0
	je Block25

 Block12:
	mov ecx,edi
	call CInPacket::Decode1
	movzx ebp,al
	xor ebx,ebx
	mov byte ptr [esp+0x20],0
	test ebp,ebp
	jle Block24

 Block13:
	test bl,1
	jne Block22

 Block14:
	mov ecx,edi
	call CInPacket::Decode1
	mov byte ptr [esp+0x20],al
	jmp Block23

 Block15:
	xor edx,edx
	mov word ptr [esi+2],bp
	mov word ptr [esi+4],bx
	mov word ptr [esi+0xC],dx

 Block16:
	mov ecx,edi
	call CInPacket::Decode2
	mov ecx,edi
	mov word ptr [esi+6],ax
	call CInPacket::Decode2
	mov word ptr [esi+8],ax
	jmp Block7

 Block17:
	mov ax,word ptr [esp+0x20]
	mov cx,word ptr [esp+0x14]
	mov word ptr [esi+2],bp
	mov word ptr [esi+4],bx
	mov word ptr [esi+6],ax
	mov word ptr [esi+8],cx
	jmp Block7

 Block18:
	mov ecx,edi
	call CInPacket::Decode2
	mov ecx,edi
	mov word ptr [esi+2],ax
	call CInPacket::Decode2
	mov ecx,edi
	mov word ptr [esi+4],ax
	call CInPacket::Decode2
	mov edx,dword ptr [esp+0x10]
	mov word ptr [esi+0xC],ax
	mov word ptr [edx+0x40],ax
	xor eax,eax
	xor ecx,ecx
	mov word ptr [esi+8],ax
	mov word ptr [esi+6],cx
	jmp Block7

 Block19:
	xor edx,edx
	mov ecx,edi
	mov word ptr [esi+2],bp
	mov word ptr [esi+4],bx
	mov word ptr [esi+0xC],dx
	call CInPacket::Decode2
	mov ecx,edi
	mov word ptr [esi+6],ax
	call CInPacket::Decode2
	mov ecx,edi
	mov word ptr [esi+8],ax
	call CInPacket::Decode2
	mov word ptr [esi+0xE],ax
	jmp Block7

 Block20:
	mov ecx,edi
	call CInPacket::Decode2
	mov ecx,edi
	mov word ptr [esi+2],ax
	call CInPacket::Decode2
	mov word ptr [esi+4],ax
	jmp Block16

 Block21:
	mov ecx,edi
	call CInPacket::Decode1
	xor ecx,ecx
	mov byte ptr [esi+0x12],al
	xor eax,eax
	mov word ptr [esi+8],cx
	mov ecx,dword ptr [esp+0x10]
	xor edx,edx
	mov word ptr [esi+2],bp
	mov word ptr [esi+4],bx
	mov word ptr [esi+0x10],ax
	mov byte ptr [esi+0xA],al
	mov word ptr [esi+6],dx
	mov word ptr [ecx+0x40],ax
	mov word ptr [esi+0xC],dx
	jmp Block10

 Block22:
	shr byte ptr [esp+0x20],4

 Block23:
	push 0xFFFFFFFF
	lea ecx,[esi+0x34]
	call ZArray<unsigned char>::InsertBefore
	mov dl,byte ptr [esp+0x20]
	and dl,0xF
	inc ebx
	cmp ebx,ebp
	mov byte ptr [eax],dl
	jl Block13

 Block24:
	mov ecx,edi
	call CInPacket::Decode2
	cwde
	mov ecx,edi
	mov dword ptr [esi+0x44],eax
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [esi+0x48],ecx
	mov ecx,edi
	call CInPacket::Decode2
	movsx edx,ax
	mov ecx,edi
	mov dword ptr [esi+0x4C],edx
	call CInPacket::Decode2
	cwde
	mov dword ptr [esi+0x50],eax

 Block25:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 8
}
}
// CMovePath::AddNewElem
__SUB_CLASS_THIS(00267E70, __thiscall, 23159,  CMovePath, void, long, const CStaticFoothold*, const CStaticFoothold*, const CLadderOrRope*, long, long, long, long, long, long, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	push edi
	lea ecx,[esi+0x20]
	call ZList<CMovePath::ELEM>::AddTail_
	mov ecx,dword ptr [esp+0x10]
	test ecx,ecx
	je Block2

 Block1:
	movzx edi,word ptr [ecx+0x58]
	jmp Block5

 Block2:
	mov ecx,dword ptr [esp+0x18]
	test ecx,ecx
	je Block4

 Block3:
	mov cx,word ptr [ecx]
	neg cx
	movzx edi,cx
	jmp Block5

 Block4:
	xor edi,edi

 Block5:
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	je Block7

 Block6:
	movzx edx,word ptr [ecx+0x58]
	jmp Block8

 Block7:
	xor edx,edx

 Block8:
	xor ecx,ecx
	mov dword ptr [eax],ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	mov dword ptr [eax+0xC],ecx
	mov dword ptr [eax+0x10],ecx
	mov dword ptr [eax+0x14],ecx
	mov dword ptr [eax+0x18],ecx
	mov cl,byte ptr [esp+0xC]
	mov word ptr [eax+0xE],dx
	mov dx,word ptr [esp+0x1C]
	mov byte ptr [eax],cl
	mov cx,word ptr [esp+0x20]
	mov word ptr [eax+2],dx
	mov dx,word ptr [esp+0x24]
	mov word ptr [eax+4],cx
	mov cx,word ptr [esp+0x28]
	mov word ptr [eax+6],dx
	mov dl,byte ptr [esp+0x2C]
	mov word ptr [eax+8],cx
	mov cx,word ptr [esp+0x30]
	mov byte ptr [eax+0xA],dl
	mov dx,word ptr [esp+0x34]
	mov word ptr [eax+0xC],di
	mov word ptr [eax+0x14],cx
	mov word ptr [eax+0x16],dx
	movzx ecx,word ptr [esi+0x54]
	mov word ptr [eax+0x18],cx
	movzx edx,word ptr [esi+0x56]
	pop edi
	mov word ptr [eax+0x1A],dx
	pop esi
	ret 0x2C
}
}
// CMovePath::SetStatChangedPoint
__SUB_CLASS_THIS(00267F30, __thiscall, 23160,  CMovePath, void, unsigned char) {
__asm {

 Block0:
	add ecx,0x20
	call ZList<CMovePath::ELEM>::AddTail_
	xor ecx,ecx
	mov dword ptr [eax],ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	mov dword ptr [eax+0xC],ecx
	mov dword ptr [eax+0x10],ecx
	mov dword ptr [eax+0x14],ecx
	mov dword ptr [eax+0x18],ecx
	mov cl,byte ptr [esp+4]
	mov byte ptr [eax],9
	mov byte ptr [eax+0x12],cl
	ret 4
}
}
// CMovePath::IsTimeForFlush
__SUB_CLASS_THIS(00266870, __thiscall, 23161,  CMovePath, int32_t, int32_t, int32_t) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x28],0
	je Block10

 Block1:
	mov edx,dword ptr [ecx+0x58]
	test edx,edx
	je Block3

 Block2:
	mov eax,dword ptr [esp+8]
	neg eax
	sbb eax,eax
	and eax,0xFFFFFED4
	add eax,0x1F4
	jmp Block4

 Block3:
	mov eax,0x3E8

 Block4:
	cmp dword ptr [ecx+0x78],eax
	jl Block10

 Block5:
	test edx,edx
	jne Block11

 Block6:
	cmp dword ptr [esp+4],edx
	jne Block11

 Block7:
	mov eax,dword ptr [ecx+0x30]
	mov dword ptr [esp+8],eax
	test eax,eax
	je Block10

 Block8:
	cmp word ptr [eax+0xC],0
	jg Block11

 Block9:
	lea eax,[esp+8]
	push eax
	call ZList<CMovePath::ELEM>::GetPrev
	mov eax,dword ptr [esp+0xC]
	add esp,4
	test eax,eax
	jne Block8

 Block10:
	xor eax,eax
	ret 8

 Block11:
	mov eax,1
	ret 8
}
}
// CMovePath::SetKeyPadState
__SUB_CLASS_THIS(002673C0, __thiscall, 23165,  CMovePath, void, int32_t, int32_t, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	add ecx,0x34
	call ZArray<unsigned char>::InsertBefore
	mov cl,byte ptr [esp+4]
	add cl,cl
	or cl,byte ptr [esp+8]
	add cl,cl
	or cl,byte ptr [esp+0xC]
	add cl,cl
	or cl,byte ptr [esp+0x10]
	mov byte ptr [eax],cl
	ret 0x10
}
}
// CMovePath::CalcPassivePos
__SUB_CLASS_THIS(002673F0, __thiscall, 23170,  CMovePath, int32_t, double&, double&, double&, double&, short&, long&, int64_t&, double&, double&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	sub esp,0x2C
	push ebx
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x28],0
	push edi
	jne Block2

 Block1:
	xor eax,eax
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0x24

 Block2:
	mov eax,dword ptr [esi+0x90]
	push eax
	lea ebx,[esi+0x88]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x84]
	mov edi,eax
	lea eax,[esi+0x7C]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add eax,edi
	add esp,0x10
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	cmp dword ptr [esi+0x28],0
	mov dword ptr [esi+0x90],eax
	je Block14

 Block3:
	mov edi,dword ptr [esi+0x2C]
	mov cl,byte ptr [edi]
	cmp cl,9
	jne Block5

 Block4:
	mov edx,dword ptr [esi+0x2C]
	lea ecx,[esi+0x20]
	push edx
	jmp Block7

 Block5:
	mov eax,dword ptr [ebp+0x20]
	mov edx,1
	shl edx,cl
	or dword ptr [eax],edx
	mov eax,dword ptr [esi+0x90]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	movsx ecx,word ptr [edi+0x10]
	add esp,8
	cmp eax,ecx
	jl Block8

 Block6:
	mov edx,dword ptr [esi+0x90]
	push edx
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	movsx ecx,word ptr [edi+0x10]
	sub eax,ecx
	add esp,8
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x90],eax
	movzx ecx,word ptr [edi+2]
	mov edx,esi
	mov dword ptr [esp+0xC],ecx
	call _ZtlSecureTearHelper<short>::call
	movsx edx,word ptr [esp+0xC]
	mov dword ptr [esp+0xC],edx
	mov dword ptr [esi+4],eax
	mov eax,dword ptr [ebp+8]
	fild dword ptr [esp+0xC]
	lea edx,[esi+8]
	fstp qword ptr [eax]
	movzx ecx,word ptr [edi+4]
	mov dword ptr [esp+0xC],ecx
	call _ZtlSecureTearHelper<short>::call
	movsx ecx,word ptr [esp+0xC]
	mov edx,dword ptr [ebp+0xC]
	mov dword ptr [esp+0xC],ecx
	mov dword ptr [esi+0xC],eax
	fild dword ptr [esp+0xC]
	fstp qword ptr [edx]
	movzx ecx,word ptr [edi+6]
	lea edx,[esi+0x10]
	mov dword ptr [esp+0xC],ecx
	call _ZtlSecureTearHelper<short>::call
	mov ecx,dword ptr [ebp+0x10]
	mov dword ptr [esi+0x14],eax
	movsx eax,word ptr [esp+0xC]
	mov dword ptr [esp+0xC],eax
	lea edx,[esi+0x18]
	fild dword ptr [esp+0xC]
	fstp qword ptr [ecx]
	movzx ecx,word ptr [edi+8]
	mov dword ptr [esp+0xC],ecx
	call _ZtlSecureTearHelper<short>::call
	movsx edx,word ptr [esp+0xC]
	mov dword ptr [esi+0x1C],eax
	mov eax,dword ptr [ebp+0x14]
	mov dword ptr [esp+0xC],edx
	mov edx,dword ptr [ebp+0x18]
	fild dword ptr [esp+0xC]
	fstp qword ptr [eax]
	mov cx,word ptr [edi+0xC]
	mov word ptr [edx],cx
	movzx eax,byte ptr [edi+0xA]
	mov ecx,dword ptr [ebp+0x1C]
	mov dword ptr [ecx],eax
	movsx edx,word ptr [edi+0x14]
	mov eax,dword ptr [ebp+0x24]
	mov dword ptr [esp+0xC],edx
	mov edx,dword ptr [ebp+0x28]
	fild dword ptr [esp+0xC]
	fstp qword ptr [eax]
	movsx ecx,word ptr [edi+0x16]
	mov eax,dword ptr [esi+0x2C]
	mov dword ptr [esp+0xC],ecx
	lea ecx,[esi+0x20]
	push eax
	fild dword ptr [esp+0x10]
	fstp qword ptr [edx]

 Block7:
	call ZList<CMovePath::ELEM>::RemoveAt
	cmp dword ptr [esi+0x28],0
	jne Block3

 Block8:
	cmp dword ptr [esi+0x28],0
	je Block14

 Block9:
	mov ecx,dword ptr [esi+0x9C]
	lea eax,[esi+0x94]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x84]
	mov edi,eax
	push edx
	lea eax,[esi+0x7C]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	sub edi,eax
	add esp,0x10
	lea edx,[esi+0x94]
	mov ecx,edi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x9C],eax
	test edi,edi
	jle Block14

 Block10:
	mov edi,dword ptr [esi+0x2C]
	cmp byte ptr [edi],3
	jne Block12

 Block11:
	movsx eax,word ptr [edi+2]
	mov ecx,dword ptr [ebp+8]
	mov dword ptr [esp+0xC],eax
	mov eax,dword ptr [ebp+0xC]
	fild dword ptr [esp+0xC]
	fstp qword ptr [ecx]
	movsx edx,word ptr [edi+4]
	mov dword ptr [esp+0xC],edx
	mov edx,dword ptr [ebp+0x10]
	fild dword ptr [esp+0xC]
	fstp qword ptr [eax]
	movsx ecx,word ptr [edi+6]
	mov dword ptr [esp+0xC],ecx
	mov ecx,dword ptr [ebp+0x14]
	fild dword ptr [esp+0xC]
	fstp qword ptr [edx]
	movsx eax,word ptr [edi+8]
	mov dword ptr [esp+0xC],eax
	mov eax,dword ptr [ebp+0x24]
	fild dword ptr [esp+0xC]
	fstp qword ptr [ecx]
	movsx edx,word ptr [edi+0x14]
	mov dword ptr [esp+0xC],edx
	fild dword ptr [esp+0xC]
	fstp qword ptr [eax]
	movsx ecx,word ptr [edi+0x16]
	mov dword ptr [esp+0xC],ecx
	fild dword ptr [esp+0xC]
	jmp Block13

 Block12:
	mov eax,dword ptr [esi+0x90]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	lea ecx,[esp+0x20]
	push ecx
	movsx ecx,word ptr [edi+0x10]
	lea edx,[esp+0x2C]
	push edx
	push ecx
	push eax
	call CalcHermiteSplineCoeff
	mov edx,dword ptr [esi+4]
	push edx
	push esi
	call _ZtlSecureFuseHelper<short>::call
	movzx ebx,ax
	mov eax,dword ptr [esi+0x14]
	push eax
	lea ecx,[esi+0x10]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movsx edx,word ptr [edi+2]
	mov dword ptr [esp+0x3C],edx
	movsx ecx,bx
	fild dword ptr [esp+0x3C]
	mov dword ptr [esp+0x3C],ecx
	mov ecx,dword ptr [esi+0xC]
	fmul qword ptr [esp+0x40]
	movzx eax,ax
	fild dword ptr [esp+0x3C]
	movsx edx,ax
	fmul qword ptr [esp+0x48]
	movsx eax,word ptr [edi+6]
	faddp st(1),st(0)
	mov dword ptr [esp+0x3C],edx
	push ecx
	lea edx,[esi+8]
	fild dword ptr [esp+0x40]
	mov dword ptr [esp+0x40],eax
	push edx
	fmul qword ptr [esp+0x58]
	faddp st(1),st(0)
	fild dword ptr [esp+0x44]
	fmul qword ptr [esp+0x60]
	faddp st(1),st(0)
	fstp qword ptr [esp+0x68]
	call _ZtlSecureFuseHelper<short>::call
	movzx ebx,ax
	mov eax,dword ptr [esi+0x1C]
	push eax
	add esi,0x18
	push esi
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,word ptr [edi+4]
	mov dword ptr [esp+0x4C],ecx
	movsx ecx,word ptr [edi+8]
	fild dword ptr [esp+0x4C]
	movsx edx,bx
	fmul qword ptr [esp+0x50]
	mov dword ptr [esp+0x4C],edx
	movzx eax,ax
	fild dword ptr [esp+0x4C]
	cwde
	fmul qword ptr [esp+0x58]
	mov dword ptr [esp+0x4C],eax
	mov eax,dword ptr [ebp+0x14]
	faddp st(1),st(0)
	add esp,0x40
	fild dword ptr [esp+0xC]
	mov dword ptr [esp+0xC],ecx
	fmul qword ptr [esp+0x20]
	faddp st(1),st(0)
	fild dword ptr [esp+0xC]
	fmul qword ptr [esp+0x28]
	faddp st(1),st(0)
	fld qword ptr [__real_4040aaaaaaaaaaab]
	mov ecx,dword ptr [ebp+0x10]
	fst qword ptr [eax]
	mov edx,dword ptr [ebp+8]
	fst qword ptr [ecx]
	fld qword ptr [esp+0x30]
	fld st(0)
	fsub qword ptr [edx]
	fmulp st(2),st
	fxch
	fstp qword ptr [ecx]
	mov ecx,dword ptr [ebp+0xC]
	fld st(1)
	fsub qword ptr [ecx]
	fmul qword ptr [eax]
	fstp qword ptr [eax]
	mov eax,dword ptr [ebp+0x24]
	fstp qword ptr [edx]
	fstp qword ptr [ecx]
	movsx edx,word ptr [edi+0x14]
	mov dword ptr [esp+0xC],edx
	fild dword ptr [esp+0xC]
	fstp qword ptr [eax]
	movsx ecx,word ptr [edi+0x16]
	mov dword ptr [esp+0xC],ecx
	fild dword ptr [esp+0xC]

 Block13:
	mov edx,dword ptr [ebp+0x28]
	mov ecx,dword ptr [ebp+0x18]
	fstp qword ptr [edx]
	mov ax,word ptr [edi+0xC]
	mov word ptr [ecx],ax
	movzx edx,byte ptr [edi+0xA]
	mov eax,dword ptr [ebp+0x1C]
	mov dword ptr [eax],edx
	mov eax,1
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0x24

 Block14:
	lea ecx,[esi+0x20]
	call ZList<CMovePath::ELEM>::RemoveAll
	mov edx,ebx
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x94]
	xor ecx,ecx
	mov dword ptr [esi+0x90],eax
	call _ZtlSecureTearHelper<long>::call
	pop edi
	mov dword ptr [esi+0x9C],eax
	pop esi
	mov eax,1
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0x24
}
}
// CMovePath::DiscardByInterrupt
__SUB_CLASS_THIS(00267F60, __thiscall, 23173,  CMovePath, void, long, CVecCtrl*, int32_t) {
__asm {

 Block0:
	sub esp,0x60
	push ebx
	mov ebx,ecx
	cmp dword ptr [ebx+0x28],0
	je Block17

 Block1:
	cmp dword ptr [esp+0x70],0
	push ebp
	push esi
	push edi
	jne Block11

 Block2:
	mov eax,dword ptr [esp+0x74]
	cmp eax,1
	je Block5

 Block3:
	cmp eax,3
	je Block5

 Block4:
	cmp eax,6
	jne Block11

 Block5:
	mov eax,dword ptr [ebx+0x2C]
	cmp word ptr [eax+0xC],0
	jg Block11

 Block6:
	mov dword ptr [esp+0x7C],eax
	test eax,eax
	je Block11

 Block7:
	cmp word ptr [eax+0xC],0
	mov dword ptr [esp+0x74],eax
	jg Block10

 Block8:
	lea eax,[esp+0x7C]
	push eax
	call ZList<CMovePath::ELEM>::GetNext
	mov eax,dword ptr [esp+0x80]
	add esp,4
	test eax,eax
	jne Block7

 Block9:
	jmp Block11

 Block10:
	lea ecx,[esp+0x7C]
	push ecx
	call ZList<CMovePath::ELEM>::GetPrev
	mov ebp,dword ptr [esp+0x80]
	add esp,4
	lea ecx,[ebx+0x20]
	push ebp
	mov esi,eax
	call ZList<CMovePath::ELEM>::InsertBefore
	mov ecx,7
	mov edi,eax
	rep movsd
	mov ecx,dword ptr [esp+0x74]
	xor edx,edx
	mov byte ptr [eax],0
	mov word ptr [eax+0x10],dx
	mov dx,word ptr [ecx+0xC]
	mov word ptr [eax+0xC],dx
	test ebp,ebp
	jne Block15

 Block11:
	mov ebp,dword ptr [esp+0x78]
	xor eax,eax
	lea esi,[ebp+0x20]
	mov ecx,0x18
	lea edi,[esp+0x10]
	rep movsd
	mov edi,dword ptr [ebp+0x1A0]
	mov dword ptr [ebx+0x5C],eax
	mov dword ptr [ebx+0x60],eax
	mov dword ptr [ebx+0x64],eax
	mov dword ptr [ebx+0x68],eax
	mov dword ptr [ebx+0x6C],eax
	mov dword ptr [ebx+0x70],eax
	mov dword ptr [ebx+0x74],eax
	mov eax,dword ptr [esp+0x20]
	push eax
	lea ecx,[esp+0x14]
	push ecx
	call _ZtlSecureFuseHelper<double>::call
	call __ftol2_sse
	mov edx,dword ptr [esp+0x40]
	mov word ptr [ebx+0x5E],ax
	push edx
	lea eax,[esp+0x34]
	push eax
	call _ZtlSecureFuseHelper<double>::call
	call __ftol2_sse
	mov ecx,dword ptr [esp+0x60]
	push ecx
	lea edx,[esp+0x54]
	push edx
	mov word ptr [ebx+0x60],ax
	call _ZtlSecureFuseHelper<double>::call
	add esp,0x18
	call __ftol2_sse
	movzx esi,ax
	lea edx,[ebx+0x10]
	mov ecx,esi
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [ebx+0x14],eax
	mov eax,dword ptr [esp+0x68]
	push eax
	lea ecx,[esp+0x5C]
	push ecx
	mov word ptr [ebx+0x62],si
	call _ZtlSecureFuseHelper<double>::call
	add esp,8
	call __ftol2_sse
	movzx esi,ax
	lea edx,[ebx+0x18]
	mov ecx,esi
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [ebx+0x1C],eax
	mov word ptr [ebx+0x64],si
	mov dl,byte ptr [ebp+0x1D8]
	mov byte ptr [ebx+0x66],dl
	test edi,edi
	je Block13

 Block12:
	mov edi,dword ptr [edi+0x58]
	jmp Block14

 Block13:
	xor edi,edi

 Block14:
	lea ecx,[ebx+0x20]
	mov word ptr [ebx+0x68],di
	call ZList<CMovePath::ELEM>::RemoveAll
	lea edx,[ebx+0x94]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[ebx+0x88]
	xor ecx,ecx
	mov dword ptr [ebx+0x9C],eax
	call _ZtlSecureTearHelper<long>::call
	pop edi
	pop esi
	pop ebp
	mov dword ptr [ebx+0x90],eax
	pop ebx
	add esp,0x60
	ret 0xC

 Block15:
	lea eax,[esp+0x7C]
	push eax
	call ZList<CMovePath::ELEM>::GetNext
	add esp,4
	mov ecx,ebx
	mov esi,eax
	call CMovePath::_ZtlSecureGet_m_tReceived
	movsx ecx,word ptr [esi+0x10]
	mov edx,eax
	sub edx,ecx
	mov ecx,ebx
	call CMovePath::_ZtlSecurePut_m_tReceived
	push ebp
	lea ecx,[ebx+0x20]
	call ZList<CMovePath::ELEM>::RemoveAt
	mov ebp,dword ptr [esp+0x7C]
	test ebp,ebp
	jne Block15

 Block16:
	mov esi,dword ptr [ebx+0x30]
	lea edi,[ebx+0x5C]
	mov ecx,7
	rep movsd
	pop edi
	pop esi
	pop ebp

 Block17:
	pop ebx
	add esp,0x60
	ret 0xC
}
}
// CMovePath::_ZtlSecureGet_m_tInterval
__SUB_CLASS0(0023A630, __fastcall, 23179,  CMovePath, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x9C]
	push eax
	add ecx,0x94
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CMovePath::OnMovePacket
__SUB_CLASS_THIS(002683F0, __thiscall, 23138,  CMovePath, void, CInPacket&, int32_t) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	mov ebx,ecx
	mov eax,dword ptr [ebx+4]
	push esi
	push edi
	mov edi,dword ptr [ebx+0x28]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [ebx+0xC]
	push ecx
	lea esi,[ebx+8]
	push esi
	movsx ebp,ax
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [esp+0x28]
	movsx edx,ax
	mov eax,dword ptr [esp+0x2C]
	add esp,0x10
	push eax
	push ecx
	mov ecx,ebx
	mov dword ptr [esp+0x18],edx
	call CMovePath::Decode
	mov edx,ebx
	mov ecx,ebp
	call _ZtlSecureTearHelper<short>::call
	mov ecx,dword ptr [esp+0x10]
	mov edx,esi
	mov dword ptr [ebx+4],eax
	call _ZtlSecureTearHelper<short>::call
	mov esi,dword ptr [ebx+0x28]
	sub esi,edi
	mov edx,dword ptr [ebx+0x30]
	mov dword ptr [ebx+0xC],eax
	mov dword ptr [esp+0x1C],edx
	je Block3

 Block1:
	lea edi,[ebx+0x94]
	lea ecx,[ecx]

 Block2:
	lea eax,[esp+0x1C]
	push eax
	call ZList<CMovePath::ELEM>::GetPrev
	mov ecx,dword ptr [ebx+0x9C]
	push ecx
	push edi
	mov ebp,eax
	call _ZtlSecureFuseHelper<long>::call
	movsx ecx,word ptr [ebp+0x10]
	add esp,0xC
	add ecx,eax
	mov edx,edi
	call _ZtlSecureTearHelper<long>::call
	sub esi,1
	mov dword ptr [ebx+0x9C],eax
	jne Block2

 Block3:
	mov edx,dword ptr [ebx+0x58]
	neg edx
	sbb edx,edx
	and edx,0xFFFFFE0C
	add edx,0x3E8
	mov dword ptr [esp+0x1C],edx
	fild dword ptr [esp+0x1C]
	fmul qword ptr [__real_3ff199999999999a]
	call __ftol2_sse
	mov ecx,dword ptr [ebx+0x9C]
	mov esi,eax
	lea eax,[ebx+0x94]
	push ecx
	push eax
	mov dword ptr [esp+0x24],esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,esi
	jge Block5

 Block4:
	fld qword ptr [__real_403e000000000000]
	jmp Block6

 Block5:
	fld qword ptr [__real_4040800000000000]

 Block6:
	lea esi,[ebx+0x7C]
	call __ftol2_sse
	mov edx,esi
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov esi,dword ptr [ebx+0x30]
	mov edx,dword ptr [ebx+0x9C]
	lea ebp,[ebx+0x5C]
	mov dword ptr [ebx+0x84],eax
	mov ecx,7
	mov edi,ebp
	rep movsd
	push edx
	lea edi,[ebx+0x94]
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esp+0x24]
	add ecx,0x1388
	add esp,8
	cmp eax,ecx
	jle Block8

 Block7:
	lea esi,[ebx+0x20]
	mov ecx,esi
	call ZList<CMovePath::ELEM>::RemoveAll
	xor edx,edx
	mov word ptr [ebx+0x6C],dx
	mov edx,edi
	xor ecx,ecx
	mov byte ptr [ebp],3
	call _ZtlSecureTearHelper<long>::call
	mov ecx,esi
	mov dword ptr [ebx+0x9C],eax
	call ZList<CMovePath::ELEM>::AddTail_
	mov ecx,7
	mov esi,ebp
	mov edi,eax
	rep movsd

 Block8:
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 8
}
}
// CMovePath::Init
__SUB_CLASS_THIS(002668E0, __thiscall, 23155,  CMovePath, void, int32_t, int32_t, long, long, long, long, long, CStaticFoothold*, CLadderOrRope*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push esi
	mov esi,ecx
	push edi
	mov edi,dword ptr [esp+0x14]
	mov edx,esi
	mov ecx,edi
	mov dword ptr [esi+0x58],eax
	mov byte ptr [esi+0x5C],0
	call _ZtlSecureTearHelper<short>::call
	mov word ptr [esi+0x5E],di
	mov edi,dword ptr [esp+0x18]
	lea edx,[esi+8]
	mov ecx,edi
	mov dword ptr [esi+4],eax
	call _ZtlSecureTearHelper<short>::call
	mov word ptr [esi+0x60],di
	mov edi,dword ptr [esp+0x1C]
	lea edx,[esi+0x10]
	mov ecx,edi
	mov dword ptr [esi+0xC],eax
	call _ZtlSecureTearHelper<short>::call
	mov word ptr [esi+0x62],di
	mov edi,dword ptr [esp+0x20]
	lea edx,[esi+0x18]
	mov ecx,edi
	mov dword ptr [esi+0x14],eax
	call _ZtlSecureTearHelper<short>::call
	mov dword ptr [esi+0x1C],eax
	mov eax,dword ptr [esp+0x28]
	mov word ptr [esi+0x64],di
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax+0x58]
	jmp Block5

 Block2:
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block4

 Block3:
	mov eax,dword ptr [eax]
	neg eax
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov cl,byte ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esi+0x68],ax
	mov byte ptr [esi+0x66],cl
	xor ecx,ecx
	mov word ptr [esi+0x6C],dx
	xor eax,eax
	lea edx,[esi+0x88]
	mov word ptr [esi+0x72],ax
	mov word ptr [esi+0x70],cx
	mov dword ptr [esi+0x78],ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x94]
	xor ecx,ecx
	mov dword ptr [esi+0x90],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x7C]
	mov ecx,0x1E
	mov dword ptr [esi+0x9C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x84],eax
	xor edx,edx
	xor eax,eax
	lea ecx,[esi+0x20]
	mov word ptr [esi+0x54],dx
	mov word ptr [esi+0x56],ax
	call ZList<CMovePath::ELEM>::RemoveAll
	pop edi
	pop esi
	ret 0x24
}
}
// CMovePath::MakeMovePath
__SUB_CLASS_THIS(00267C90, __thiscall, 23157,  CMovePath, void, long, const CStaticFoothold*, const CStaticFoothold*, const CLadderOrRope*, long, long, long, long, long, long, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+0x28]
	push ebx
	push ebp
	push esi
	mov esi,ecx
	add dword ptr [esi+0x78],eax
	mov eax,dword ptr [esp+0x14]
	xor edx,edx
	push edi
	cmp eax,edx
	je Block2

 Block1:
	movzx ecx,word ptr [eax+0x58]
	mov dword ptr [esp+0x18],ecx
	jmp Block5

 Block2:
	mov eax,dword ptr [esp+0x20]
	cmp eax,edx
	je Block4

 Block3:
	mov ax,word ptr [eax]
	neg ax
	movzx ecx,ax
	mov dword ptr [esp+0x18],ecx
	jmp Block5

 Block4:
	mov dword ptr [esp+0x18],edx

 Block5:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,edx
	je Block7

 Block6:
	movzx eax,word ptr [eax+0x58]
	mov dword ptr [esp+0x20],eax
	jmp Block8

 Block7:
	mov dword ptr [esp+0x20],edx

 Block8:
	cmp dword ptr [esi+0x28],edx
	jne Block10

 Block9:
	xor eax,eax
	jmp Block11

 Block10:
	mov eax,dword ptr [esi+0x30]

 Block11:
	mov ebx,dword ptr [esp+0x14]
	mov edi,dword ptr [esp+0x30]
	mov ebp,dword ptr [esp+0x2C]
	cmp ebx,edx
	je Block18

 Block12:
	cmp ebx,0xE
	je Block18

 Block13:
	cmp ebx,0xC
	je Block18

 Block14:
	cmp eax,edx
	je Block17

 Block15:
	cmp word ptr [eax+0x10],dx
	jne Block17

 Block16:
	cmp byte ptr [eax],dl
	je Block47

 Block17:
	lea ecx,[esi+0x20]
	call ZList<CMovePath::ELEM>::AddTail_
	xor ecx,ecx
	mov dword ptr [eax],ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	mov dword ptr [eax+0xC],ecx
	mov dword ptr [eax+0x10],ecx
	mov dword ptr [eax+0x14],ecx
	mov dword ptr [eax+0x18],ecx
	jmp Block47

 Block18:
	cmp eax,edx
	je Block45

 Block19:
	movzx ecx,byte ptr [eax]
	cmp ecx,ebx
	jne Block43

 Block20:
	mov cx,word ptr [esp+0x18]
	cmp word ptr [eax+0xC],cx
	jne Block43

 Block21:
	mov cx,word ptr [esp+0x20]
	cmp word ptr [eax+0xE],cx
	jne Block43

 Block22:
	mov cl,byte ptr [eax+0xA]
	cmp cl,byte ptr [esp+0x34]
	jne Block43

 Block23:
	movzx ecx,word ptr [eax+8]
	cmp cx,dx
	jge Block26

 Block24:
	cmp edi,edx
	jg Block43

 Block25:
	cmp cx,dx

 Block26:
	jle Block28

 Block27:
	cmp edi,edx
	jl Block43

 Block28:
	cmp cx,dx
	je Block31

 Block29:
	cmp edi,edx
	je Block43

 Block30:
	cmp cx,dx
	jne Block32

 Block31:
	cmp edi,edx
	jne Block43

 Block32:
	movzx ecx,word ptr [eax+6]
	cmp cx,dx
	jge Block35

 Block33:
	cmp ebp,edx
	jg Block43

 Block34:
	cmp cx,dx

 Block35:
	jle Block37

 Block36:
	cmp ebp,edx
	jl Block43

 Block37:
	cmp cx,dx
	je Block40

 Block38:
	cmp ebp,edx
	je Block43

 Block39:
	cmp cx,dx
	jne Block41

 Block40:
	cmp ebp,edx
	jne Block43

 Block41:
	movsx edx,word ptr [eax+0x14]
	cmp edx,dword ptr [esp+0x3C]
	jne Block43

 Block42:
	movsx ecx,word ptr [eax+0x16]
	cmp ecx,dword ptr [esp+0x40]
	je Block46

 Block43:
	cmp word ptr [eax+0x10],0
	jne Block45

 Block44:
	cmp byte ptr [eax],0
	je Block46

 Block45:
	lea ecx,[esi+0x20]
	call ZList<CMovePath::ELEM>::AddTail_
	xor ecx,ecx
	mov dword ptr [eax],ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	mov dword ptr [eax+0xC],ecx
	mov dword ptr [eax+0x10],ecx
	mov dword ptr [eax+0x14],ecx
	mov dword ptr [eax+0x18],ecx

 Block46:
	mov dx,word ptr [esp+0x38]
	add word ptr [eax+0x10],dx

 Block47:
	movzx ecx,word ptr [esp+0x18]
	movzx edx,word ptr [esp+0x20]
	mov word ptr [eax+0xC],cx
	mov cx,word ptr [esp+0x24]
	mov word ptr [eax+0xE],dx
	mov dx,word ptr [esp+0x28]
	mov word ptr [eax+2],cx
	mov cl,byte ptr [esp+0x34]
	mov word ptr [eax+4],dx
	mov dx,word ptr [esp+0x3C]
	mov byte ptr [eax+0xA],cl
	mov cx,word ptr [esp+0x40]
	mov byte ptr [eax],bl
	mov word ptr [eax+6],bp
	mov word ptr [eax+8],di
	mov word ptr [eax+0x14],dx
	mov word ptr [eax+0x16],cx
	movzx edx,word ptr [esi+0x54]
	pop edi
	mov word ptr [eax+0x18],dx
	movzx ecx,word ptr [esi+0x56]
	pop esi
	pop ebp
	mov word ptr [eax+0x1A],cx
	pop ebx
	ret 0x30
}
}
// CalcHermiteSplineCoeff
__SUB(00266400, __cdecl, 137850,  void, long, long, double&, double&, double&, double&) {
__asm {

 Block0:
	fild dword ptr [esp+4]
	mov eax,dword ptr [esp+0xC]
	fild dword ptr [esp+8]
	mov ecx,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+0x14]
	fdivr st,st(1)
	fld st(0)
	fmul st,st(1)
	fld st(0)
	fmul st,st(2)
	fld qword ptr [__real_4000000000000000]
	fmul st(1),st
	fld st(2)
	fmul qword ptr [__real_4008000000000000]
	fld st(2)
	fsub st,st(1)
	fld1
	fadd st(1),st
	fxch
	fstp qword ptr [eax]
	mov eax,dword ptr [esp+0x18]
	fxch
	fsubrp st(3),st
	fxch st(2)
	fstp qword ptr [ecx]
	fxch st(4)
	fdiv qword ptr [__real_408f400000000000]
	fst qword ptr [eax]
	fld st(3)
	fmulp st(5),st
	fld st(2)
	fsubrp st(5),st
	fxch st(4)
	faddp st(1),st(0)
	fmulp st(3),st
	fxch st(2)
	fstp qword ptr [edx]
	fsubp st(1),st(0)
	fmul qword ptr [eax]
	fstp qword ptr [eax]
	ret
}
}
// CMovePath::Encode
// 667390
static uint8_t _SUB_266E20_LOOKUP_TABLE_0[37] = {
0, 1, 1, 2, 2, 0, 2, 2, 2, 3, 2, 4, 0, 1, 0, 6, 
1, 5, 1, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 1, 
1, 1, 1, 0, 0, 
};
__SUB_CLASS_THIS(00266E20, __thiscall, 23140,  CMovePath, void, COutPacket&, int32_t*) {
__asm {

 Block0:
	sub esp,8
	push ebx
	push ebp
	mov ebx,ecx
	mov eax,dword ptr [ebx+4]
	push esi
	push edi
	push eax
	push ebx
	mov dword ptr [esp+0x1C],ebx
	call _ZtlSecureFuseHelper<short>::call
	mov esi,dword ptr [esp+0x24]
	movzx ecx,ax
	add esp,8
	push ecx
	mov ecx,esi
	call COutPacket::Encode2
	mov edx,dword ptr [ebx+0xC]
	push edx
	lea edi,[ebx+8]
	push edi
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	add esp,8
	push eax
	mov ecx,esi
	call COutPacket::Encode2
	mov ecx,dword ptr [ebx+0x14]
	push ecx
	lea edx,[ebx+0x10]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	add esp,8
	push eax
	mov ecx,esi
	call COutPacket::Encode2
	mov ecx,dword ptr [ebx+0x1C]
	push ecx
	lea edx,[ebx+0x18]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	add esp,8
	push eax
	mov ecx,esi
	call COutPacket::Encode2
	mov ecx,dword ptr [ebx+4]
	push ecx
	push ebx
	call _ZtlSecureFuseHelper<short>::call
	mov edx,dword ptr [ebx+0xC]
	cwde
	push edx
	push edi
	mov dword ptr [ebx+0x4C],eax
	mov dword ptr [ebx+0x44],eax
	call _ZtlSecureFuseHelper<short>::call
	cwde
	mov dword ptr [ebx+0x50],eax
	mov dword ptr [ebx+0x48],eax
	movzx eax,byte ptr [ebx+0x28]
	add esp,0x10
	push eax
	mov ecx,esi
	call COutPacket::Encode1
	mov eax,dword ptr [ebx+0x2C]
	mov dword ptr [esp+0x10],eax
	test eax,eax
	je Block62

 Block1:
	lea ebp,[esi+4]
	lea ecx,[ecx]

 Block2:
	lea ecx,[esp+0x10]
	push ecx
	call ZList<CMovePath::ELEM>::GetNext
	mov edi,eax
	mov eax,dword ptr [ebp]
	mov dl,byte ptr [edi]
	add esp,4
	mov byte ptr [esp+0x1C],dl
	test eax,eax
	je Block4

 Block3:
	mov eax,dword ptr [eax-4]

 Block4:
	mov ecx,dword ptr [esi+8]
	inc ecx
	cmp ecx,eax
	jbe Block9

 Block5:
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block7

 Block6:
	mov eax,dword ptr [eax-4]

 Block7:
	add eax,eax
	cmp ecx,eax
	ja Block7

 Block8:
	lea ecx,[esp+0x1C]
	push ecx
	push 0
	push eax
	mov ecx,ebp
	call ZArray<unsigned char>::_Realloc

 Block9:
	mov edx,dword ptr [esi+8]
	mov eax,dword ptr [ebp]
	mov cl,byte ptr [esp+0x1C]
	mov byte ptr [edx+eax],cl
	inc dword ptr [esi+8]
	movzx eax,byte ptr [edi]
	cmp eax,0x24
	ja Block16

 Block10:
	movzx edx,byte ptr [eax+_SUB_266E20_LOOKUP_TABLE_0]
	cmp EDX, 0
je Block11
cmp EDX, 1
je Block26
cmp EDX, 2
je Block27
cmp EDX, 3
je Block30
cmp EDX, 4
je Block28
cmp EDX, 5
je Block29
cmp EDX, 6
je Block16


 Block11:
	movzx eax,word ptr [edi+2]
	push eax
	mov ecx,esi
	call COutPacket::Encode2
	movzx ecx,word ptr [edi+4]
	push ecx
	mov ecx,esi
	call COutPacket::Encode2
	movzx edx,word ptr [edi+6]
	push edx
	mov ecx,esi
	call COutPacket::Encode2
	movzx eax,word ptr [edi+8]
	push eax
	mov ecx,esi
	call COutPacket::Encode2
	movzx ecx,word ptr [edi+0xC]
	push ecx
	mov ecx,esi
	call COutPacket::Encode2
	cmp byte ptr [edi],0xC
	jne Block13

 Block12:
	movzx edx,word ptr [edi+0xE]
	push edx
	mov ecx,esi
	call COutPacket::Encode2

 Block13:
	movzx eax,word ptr [edi+0x14]
	push eax
	mov ecx,esi
	call COutPacket::Encode2
	movzx ecx,word ptr [edi+0x16]

 Block14:
	push ecx

 Block15:
	mov ecx,esi
	call COutPacket::Encode2

 Block16:
	movsx eax,word ptr [edi+2]
	cmp eax,dword ptr [ebx+0x44]
	jge Block18

 Block17:
	mov dword ptr [ebx+0x44],eax

 Block18:
	movsx eax,word ptr [edi+4]
	cmp eax,dword ptr [ebx+0x48]
	jge Block20

 Block19:
	mov dword ptr [ebx+0x48],eax

 Block20:
	movsx eax,word ptr [edi+2]
	cmp eax,dword ptr [ebx+0x4C]
	jle Block22

 Block21:
	mov dword ptr [ebx+0x4C],eax

 Block22:
	movsx eax,word ptr [edi+4]
	cmp eax,dword ptr [ebx+0x50]
	jle Block24

 Block23:
	mov dword ptr [ebx+0x50],eax

 Block24:
	mov al,byte ptr [edi+0xA]
	mov byte ptr [esp+0x1C],al
	mov eax,dword ptr [ebp]
	test eax,eax
	jne Block31

 Block25:
	jmp Block32

 Block26:
	movzx edx,word ptr [edi+6]
	push edx
	mov ecx,esi
	call COutPacket::Encode2
	movzx eax,word ptr [edi+8]
	push eax
	jmp Block15

 Block27:
	movzx ecx,word ptr [edi+2]
	push ecx
	mov ecx,esi
	call COutPacket::Encode2
	movzx edx,word ptr [edi+4]
	push edx
	mov ecx,esi
	call COutPacket::Encode2
	movzx eax,word ptr [edi+0xC]
	push eax
	jmp Block15

 Block28:
	movzx ecx,word ptr [edi+6]
	push ecx
	mov ecx,esi
	call COutPacket::Encode2
	movzx edx,word ptr [edi+8]
	push edx
	mov ecx,esi
	call COutPacket::Encode2
	movzx eax,word ptr [edi+0xE]
	push eax
	jmp Block15

 Block29:
	movzx ecx,word ptr [edi+2]
	push ecx
	mov ecx,esi
	call COutPacket::Encode2
	movzx edx,word ptr [edi+4]
	push edx
	mov ecx,esi
	call COutPacket::Encode2
	movzx eax,word ptr [edi+6]
	push eax
	mov ecx,esi
	call COutPacket::Encode2
	movzx ecx,word ptr [edi+8]
	jmp Block14

 Block30:
	movzx edx,byte ptr [edi+0x12]
	push edx
	mov ecx,esi
	call COutPacket::Encode1
	jmp Block61

 Block31:
	mov eax,dword ptr [eax-4]

 Block32:
	mov ecx,dword ptr [esi+8]
	inc ecx
	cmp ecx,eax
	jbe Block37

 Block33:
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block35

 Block34:
	mov eax,dword ptr [eax-4]
	nop

 Block35:
	add eax,eax
	cmp ecx,eax
	ja Block35

 Block36:
	lea ecx,[esp+0x1C]
	push ecx
	push 0
	push eax
	mov ecx,ebp
	call ZArray<unsigned char>::_Realloc

 Block37:
	mov edx,dword ptr [esi+8]
	mov cl,byte ptr [esp+0x1C]
	mov eax,dword ptr [ebp]
	mov byte ptr [edx+eax],cl
	inc dword ptr [esi+8]
	movzx edx,word ptr [edi+0x10]
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [esi+8]
	mov dword ptr [esp+0x1C],edx
	test eax,eax
	je Block39

 Block38:
	mov eax,dword ptr [eax-4]

 Block39:
	add ecx,2
	cmp ecx,eax
	jbe Block45

 Block40:
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block43

 Block41:
	mov eax,dword ptr [eax-4]
	jmp Block43

 Block43:
	add eax,eax
	cmp ecx,eax
	ja Block43

 Block44:
	lea ecx,[esp+0x1C]
	push ecx
	push 0
	push eax
	mov ecx,ebp
	call ZArray<unsigned char>::_Realloc

 Block45:
	mov edx,dword ptr [esi+8]
	mov eax,dword ptr [ebp]
	mov cx,word ptr [esp+0x1C]
	mov word ptr [edx+eax],cx
	add dword ptr [esi+8],2
	mov ecx,dword ptr [TSingleton<CClientOptMan>::ms_pInstance]
	push 2
	call CClientOptMan::GetOpt
	test eax,eax
	je Block61

 Block46:
	movzx edx,word ptr [edi+0x18]
	mov eax,dword ptr [ebp]
	mov dword ptr [esp+0x1C],edx
	test eax,eax
	je Block48

 Block47:
	mov eax,dword ptr [eax-4]

 Block48:
	mov ecx,dword ptr [esi+8]
	add ecx,2
	cmp ecx,eax
	jbe Block53

 Block49:
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block51

 Block50:
	mov eax,dword ptr [eax-4]

 Block51:
	add eax,eax
	cmp ecx,eax
	ja Block51

 Block52:
	lea ecx,[esp+0x1C]
	push ecx
	push 0
	push eax
	mov ecx,ebp
	call ZArray<unsigned char>::_Realloc

 Block53:
	mov edx,dword ptr [esi+8]
	mov eax,dword ptr [ebp]
	mov cx,word ptr [esp+0x1C]
	mov word ptr [edx+eax],cx
	add dword ptr [esi+8],2
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [esi+8]
	movzx edi,word ptr [edi+0x1A]
	test eax,eax
	je Block55

 Block54:
	mov eax,dword ptr [eax-4]

 Block55:
	add ecx,2
	cmp ecx,eax
	jbe Block60

 Block56:
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block58

 Block57:
	mov eax,dword ptr [eax-4]
	lea ecx,[ecx]

 Block58:
	add eax,eax
	cmp ecx,eax
	ja Block58

 Block59:
	lea edx,[esp+0x1C]
	push edx
	push 0
	push eax
	mov ecx,ebp
	call ZArray<unsigned char>::_Realloc

 Block60:
	mov eax,dword ptr [esi+8]
	mov ecx,dword ptr [ebp]
	mov word ptr [eax+ecx],di
	add dword ptr [esi+8],2

 Block61:
	cmp dword ptr [esp+0x10],0
	jne Block2

 Block62:
	mov eax,dword ptr [ebx+0x34]
	test eax,eax
	je Block64

 Block63:
	mov eax,dword ptr [eax-4]

 Block64:
	push eax
	mov ecx,esi
	call COutPacket::Encode1
	xor ebp,ebp

 Block65:
	mov eax,dword ptr [ebx+0x34]
	test eax,eax
	je Block79

 Block66:
	cmp ebp,dword ptr [eax-4]
	jae Block79

 Block67:
	mov eax,dword ptr [esp+0x14]
	mov edx,dword ptr [eax+0x34]
	mov bl,byte ptr [edx+ebp]
	lea ecx,[edx+ebp]
	mov eax,edx
	and bl,0xF
	test eax,eax
	je Block69

 Block68:
	mov eax,dword ptr [eax-4]

 Block69:
	dec eax
	cmp ebp,eax
	je Block71

 Block70:
	mov al,byte ptr [ecx+1]
	shl al,4
	or bl,al

 Block71:
	mov eax,dword ptr [esi+4]
	lea edi,[esi+4]
	test eax,eax
	je Block73

 Block72:
	mov eax,dword ptr [eax-4]

 Block73:
	mov ecx,dword ptr [esi+8]
	inc ecx
	cmp ecx,eax
	jbe Block78

 Block74:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block76

 Block75:
	mov eax,dword ptr [eax-4]

 Block76:
	add eax,eax
	cmp ecx,eax
	ja Block76

 Block77:
	lea ecx,[esp+0x1C]
	push ecx
	push 0
	push eax
	mov ecx,edi
	call ZArray<unsigned char>::_Realloc

 Block78:
	mov edx,dword ptr [esi+8]
	mov eax,dword ptr [edi]
	mov byte ptr [edx+eax],bl
	inc dword ptr [esi+8]
	mov ebx,dword ptr [esp+0x14]
	add ebp,2
	jmp Block65

 Block79:
	mov eax,dword ptr [esi+4]
	movzx ebp,word ptr [ebx+0x44]
	lea edi,[esi+4]
	test eax,eax
	je Block81

 Block80:
	mov eax,dword ptr [eax-4]

 Block81:
	mov ecx,dword ptr [esi+8]
	add ecx,2
	cmp ecx,eax
	jbe Block86

 Block82:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block84

 Block83:
	mov eax,dword ptr [eax-4]
	nop

 Block84:
	add eax,eax
	cmp ecx,eax
	ja Block84

 Block85:
	lea ecx,[esp+0x1C]
	push ecx
	push 0
	push eax
	mov ecx,edi
	call ZArray<unsigned char>::_Realloc

 Block86:
	mov edx,dword ptr [esi+8]
	mov eax,dword ptr [edi]
	mov word ptr [edx+eax],bp
	add dword ptr [esi+8],2
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [esi+8]
	movzx ebp,word ptr [ebx+0x48]
	test eax,eax
	je Block88

 Block87:
	mov eax,dword ptr [eax-4]

 Block88:
	add ecx,2
	cmp ecx,eax
	jbe Block93

 Block89:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block91

 Block90:
	mov eax,dword ptr [eax-4]

 Block91:
	add eax,eax
	cmp ecx,eax
	ja Block91

 Block92:
	lea ecx,[esp+0x1C]
	push ecx
	push 0
	push eax
	mov ecx,edi
	call ZArray<unsigned char>::_Realloc

 Block93:
	mov edx,dword ptr [esi+8]
	mov eax,dword ptr [edi]
	mov word ptr [edx+eax],bp
	add dword ptr [esi+8],2
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [esi+8]
	movzx ebp,word ptr [ebx+0x4C]
	test eax,eax
	je Block95

 Block94:
	mov eax,dword ptr [eax-4]

 Block95:
	add ecx,2
	cmp ecx,eax
	jbe Block100

 Block96:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block98

 Block97:
	mov eax,dword ptr [eax-4]

 Block98:
	add eax,eax
	cmp ecx,eax
	ja Block98

 Block99:
	lea ecx,[esp+0x1C]
	push ecx
	push 0
	push eax
	mov ecx,edi
	call ZArray<unsigned char>::_Realloc

 Block100:
	mov edx,dword ptr [esi+8]
	mov eax,dword ptr [edi]
	mov word ptr [edx+eax],bp
	add dword ptr [esi+8],2
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [esi+8]
	movzx ebx,word ptr [ebx+0x50]
	test eax,eax
	je Block102

 Block101:
	mov eax,dword ptr [eax-4]

 Block102:
	add ecx,2
	cmp ecx,eax
	jbe Block107

 Block103:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block105

 Block104:
	mov eax,dword ptr [eax-4]

 Block105:
	add eax,eax
	cmp ecx,eax
	ja Block105

 Block106:
	lea ecx,[esp+0x1C]
	push ecx
	push 0
	push eax
	mov ecx,edi
	call ZArray<unsigned char>::_Realloc

 Block107:
	mov edx,dword ptr [esi+8]
	mov eax,dword ptr [edi]
	pop edi
	mov word ptr [edx+eax],bx
	add dword ptr [esi+8],2
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 8
}
}
// CMovePath::CMovePath
__SUB_CLASS_THIS0(00266CA0, __thiscall, 23135,  CMovePath, void) {
__asm {

 Block0:
	mov eax,ecx
	xor ecx,ecx
	int 3// TODO: 	mov dword ptr [eax+0x20],offset ZList<CMovePath::ELEM>::`vftable'
	mov dword ptr [eax+0x28],ecx
	mov dword ptr [eax+0x2C],ecx
	mov dword ptr [eax+0x30],ecx
	mov dword ptr [eax+0x34],ecx
	mov dword ptr [eax+0x38],ecx
	mov dword ptr [eax+0x3C],ecx
	xor edx,edx
	mov word ptr [eax+0x70],cx
	mov word ptr [eax+0x72],dx
	ret
}
}
// CMovePath::_ZtlSecurePut_m_tInterval
__SUB_CLASS(00266850, __fastcall, 23180,  CMovePath, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x94]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x9C],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CMovePath::~CMovePath
_SUB_EXCEPTION_HANDLER(266CD0)
__SUB_CLASS_THIS0(00266CD0, __thiscall, 23137,  CMovePath, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_266CD0
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
	lea ecx,[esi+0x38]
	mov dword ptr [esp+0x14],1
	call ZArray<unsigned char>::RemoveAll
	lea ecx,[esi+0x34]
	mov byte ptr [esp+0x14],0
	call ZArray<unsigned char>::RemoveAll
	lea ecx,[esi+0x20]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CMovePath::ELEM>::`vftable'
	call ZList<CMovePath::ELEM>::RemoveAll
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CMovePath::GetLastElement
__SUB_CLASS_THIS0(005A0890, __thiscall, 23147,  CMovePath, CMovePath::ELEM&) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x30]
	ret
}
}
// CMovePath::Flush
_SUB_EXCEPTION_HANDLER(268160)
__SUB_CLASS_THIS(00268160, __thiscall, 23164,  CMovePath, int32_t, COutPacket&, int32_t, CMovePath*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_268160
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
	xor ecx,ecx
	mov dword ptr [esp+0x18],0
	mov dword ptr [esp+0x20],ecx
	mov dword ptr [esp+0x24],ecx
	mov dword ptr [esp+0x28],ecx
	mov dword ptr [esp+0x34],ecx
	mov dword ptr [ebp+0x78],ecx
	cmp dword ptr [ebp+0x58],ecx
	jne Block6

 Block1:
	cmp dword ptr [esp+0x40],ecx
	jne Block6

 Block2:
	mov eax,dword ptr [ebp+0x30]
	mov dword ptr [esp+0x40],eax
	cmp eax,ecx
	je Block5

 Block3:
	cmp word ptr [eax+0xC],0
	jg Block27

 Block4:
	movsx eax,word ptr [eax+0x10]
	add dword ptr [ebp+0x78],eax
	lea ecx,[esp+0x40]
	push ecx
	call ZList<CMovePath::ELEM>::GetPrev
	mov eax,dword ptr [esp+0x44]
	add esp,4
	test eax,eax
	jne Block3

 Block5:
	mov dword ptr [ebp+0x78],0

 Block6:
	cmp dword ptr [ebp+0x3C],0
	mov esi,dword ptr [ebp+0x30]
	jne Block14

 Block7:
	cmp byte ptr [esi],0
	jne Block14

 Block8:
	mov cx,word ptr [esi+2]
	cmp cx,word ptr [ebp+0x5E]
	jne Block14

 Block9:
	mov dx,word ptr [esi+4]
	cmp dx,word ptr [ebp+0x60]
	jne Block14

 Block10:
	mov ax,word ptr [esi+6]
	cmp ax,word ptr [ebp+0x62]
	jne Block14

 Block11:
	mov cx,word ptr [esi+8]
	cmp cx,word ptr [ebp+0x64]
	jne Block14

 Block12:
	mov dx,word ptr [esi+0xC]
	cmp dx,word ptr [ebp+0x68]
	jne Block14

 Block13:
	mov al,byte ptr [esi+0xA]
	mov dword ptr [esp+0x40],1
	cmp al,byte ptr [ebp+0x66]
	je Block15

 Block14:
	mov dword ptr [esp+0x40],0

 Block15:
	mov ebx,dword ptr [esp+0x44]
	lea edi,[ebp+0x5C]
	mov ecx,7
	rep movsd
	test ebx,ebx
	je Block19

 Block16:
	mov eax,dword ptr [ebp+0x2C]
	mov dword ptr [esp+0x44],eax
	test eax,eax
	je Block18

 Block17:
	lea ecx,[esp+0x44]
	push ecx
	call ZList<CMovePath::ELEM>::GetNext
	mov esi,eax
	add esp,4
	lea ecx,[ebx+0x20]
	mov dword ptr [esp+0x14],esi
	call ZList<CMovePath::ELEM>::AddTail_
	mov edi,eax
	mov ecx,7
	rep movsd
	mov edx,dword ptr [ebx+0x9C]
	push edx
	lea esi,[ebx+0x94]
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esp+0x1C]
	movsx ecx,word ptr [ecx+0x10]
	add esp,8
	add ecx,eax
	mov edx,esi
	call _ZtlSecureTearHelper<long>::call
	cmp dword ptr [esp+0x44],0
	mov dword ptr [ebx+0x9C],eax
	jne Block17

 Block18:
	lea edx,[ebx+0x7C]
	mov ecx,0x1E
	call _ZtlSecureTearHelper<long>::call
	mov esi,dword ptr [ebx+0x30]
	lea edi,[ebx+0x5C]
	mov ecx,7
	mov dword ptr [ebx+0x84],eax
	rep movsd

 Block19:
	mov edx,dword ptr [esp+0x3C]
	push 0
	push edx
	mov ecx,ebp
	call CMovePath::Encode
	movzx ecx,word ptr [ebp+0x5E]
	mov edx,ebp
	call _ZtlSecureTearHelper<short>::call
	movzx ecx,word ptr [ebp+0x60]
	lea edx,[ebp+8]
	mov dword ptr [ebp+4],eax
	call _ZtlSecureTearHelper<short>::call
	movzx ecx,word ptr [ebp+0x62]
	lea edx,[ebp+0x10]
	mov dword ptr [ebp+0xC],eax
	call _ZtlSecureTearHelper<short>::call
	movzx ecx,word ptr [ebp+0x64]
	lea edx,[ebp+0x18]
	mov dword ptr [ebp+0x14],eax
	call _ZtlSecureTearHelper<short>::call
	xor edi,edi
	mov dword ptr [ebp+0x1C],eax
	cmp dword ptr [esp+0x40],edi
	je Block26

 Block20:
	mov eax,dword ptr [ebp+0x2C]
	mov dword ptr [esp+0x44],eax
	cmp eax,edi
	je Block26

 Block21:
	jmp Block23

 Block23:
	lea eax,[esp+0x44]
	push eax
	call ZList<CMovePath::ELEM>::GetNext
	add esp,4
	cmp byte ptr [eax],9
	jne Block25

 Block24:
	mov dword ptr [esp+0x40],edi

 Block25:
	cmp dword ptr [esp+0x44],edi
	jne Block23

 Block26:
	lea esi,[ebp+0x20]
	mov ecx,esi
	call ZList<CMovePath::ELEM>::RemoveAll
	push edi
	push edi
	push edi
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,esi
	call ZList<CMovePath::ELEM>::MoveAfter
	lea ecx,[ebp+0x34]
	call ZArray<unsigned char>::RemoveAll
	lea ecx,[ebp+0x38]
	call ZArray<unsigned char>::RemoveAll
	lea ecx,[esp+0x18]
	mov dword ptr [ebp+0x3C],edi
	mov dword ptr [esp+0x34],0xFFFFFFFF
	mov dword ptr [esp+0x18], 0
	call ZList<CMovePath::ELEM>::RemoveAll
	mov eax,dword ptr [esp+0x40]
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 0xC

 Block27:
	lea edx,[esp+0x40]
	push edx
	call ZList<CMovePath::ELEM>::GetNext
	mov eax,dword ptr [esp+0x44]
	add esp,4
	test eax,eax
	je Block6

 Block28:
	push 0
	push 0
	push eax
	lea eax,[ebp+0x20]
	push eax
	lea ecx,[esp+0x28]
	call ZList<CMovePath::ELEM>::MoveAfter
	jmp Block6
}
}
