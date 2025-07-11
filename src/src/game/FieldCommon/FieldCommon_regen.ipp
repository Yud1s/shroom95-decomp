#include "regen.hpp"
// FieldCommon.ipp
#include "FieldCommon.hpp"

// Field::JobCategoryCond::Parse
_SUB_EXCEPTION_HANDLER(1666A0)
__SUB(001666A0, __cdecl, 16861,  int32_t, NakedParam<_x_com_ptr<IWzProperty>>, ZList<ZRef<Field::UserCond> >&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1666A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x34]
	xor ebx,ebx
	cmp eax,ebx
	sete cl
	mov dword ptr [esp+0x2C],ebx
	cmp cl,bl
	je Block4

 Block1:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebx
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	xor eax,eax
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x24
	ret

 Block4:
	push ebx
	push ecx
	mov dword ptr [esp+0x14],esp
	mov ecx,esp
	push offset _S_JOBCATEGORY__1
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x34],1
	cmp ecx,ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x38],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x34],2
	call get_int32
	add esp,8
	cmp word ptr [esp+0x14],8
	mov esi,eax
	mov byte ptr [esp+0x2C],bl
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	cmp esi,ebx
	je Block22

 Block11:
	jle Block13

 Block12:
	cmp esi,6
	jl Block21

 Block13:
	cmp esi,0xB
	jl Block15

 Block14:
	cmp esi,0xF
	jle Block21

 Block15:
	cmp esi,0x15
	je Block21

 Block16:
	cmp esi,0x16
	je Block21

 Block17:
	cmp esi,0x20
	je Block21

 Block18:
	cmp esi,0x21
	je Block21

 Block19:
	cmp esi,0x23
	je Block21

 Block20:
	mov eax,dword ptr [esp+0x34]
	jmp Block1

 Block21:
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x10],ebx
	call ZRef<Field::JobCategoryCond>::_Alloc
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [eax+0xC],esi
	mov dword ptr [esp+0x18],eax
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x38]
	mov byte ptr [esp+0x2C],4
	call ZList<ZRef<Field::UserCond>>::AddTail_
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,eax
	call ZRef<Field::UserCond>::op_assign_copy
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x2C],3
	call ZRef<Field::UserCond>::~ZRef<Field::UserCond>
	lea ecx,[esp+0xC]
	mov byte ptr [esp+0x2C],bl
	call ZRef<Field::JobCategoryCond>::~ZRef<Field::JobCategoryCond>

 Block22:
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebx
	je Block24

 Block23:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block24:
	mov eax,1
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x24
	ret
}
}
// Field::GenderCond::Parse
_SUB_EXCEPTION_HANDLER(166B50)
__SUB(00166B50, __cdecl, 16914,  int32_t, NakedParam<_x_com_ptr<IWzProperty>>, ZList<ZRef<Field::UserCond> >&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_166B50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x34]
	xor ebx,ebx
	cmp eax,ebx
	sete cl
	mov dword ptr [esp+0x2C],ebx
	cmp cl,bl
	je Block4

 Block1:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebx
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	xor eax,eax
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x24
	ret

 Block4:
	push 2
	push ecx
	mov dword ptr [esp+0x14],esp
	mov ecx,esp
	push offset _S_GENDER
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x34],1
	cmp ecx,ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x38],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x34],2
	call get_int32
	add esp,8
	cmp word ptr [esp+0x14],8
	mov esi,eax
	mov byte ptr [esp+0x2C],bl
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	cmp esi,2
	je Block12

 Block11:
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x10],ebx
	call ZRef<Field::GenderCond>::_Alloc
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [eax+0xC],esi
	mov dword ptr [esp+0x18],eax
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x38]
	mov byte ptr [esp+0x2C],4
	call ZList<ZRef<Field::UserCond>>::AddTail_
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,eax
	call ZRef<Field::UserCond>::op_assign_copy
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x2C],3
	call ZRef<Field::UserCond>::~ZRef<Field::UserCond>
	lea ecx,[esp+0xC]
	mov byte ptr [esp+0x2C],bl
	call ZRef<Field::GenderCond>::~ZRef<Field::GenderCond>

 Block12:
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebx
	je Block14

 Block13:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block14:
	mov eax,1
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x24
	ret
}
}
// Field::JobCond::Parse
_SUB_EXCEPTION_HANDLER(1664A0)
__SUB(001664A0, __cdecl, 16844,  int32_t, NakedParam<_x_com_ptr<IWzProperty>>, ZList<ZRef<Field::UserCond> >&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1664A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x3C]
	xor ebx,ebx
	cmp eax,ebx
	sete cl
	mov dword ptr [esp+0x34],ebx
	cmp cl,bl
	je Block4

 Block1:
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp eax,ebx
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	xor eax,eax
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x28
	ret

 Block4:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [esp+0x18],esp
	mov ecx,esp
	push offset _S_JOB__2
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x44]
	mov byte ptr [esp+0x3C],1
	cmp ecx,ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x40],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x3C],2
	call get_int32
	add esp,8
	cmp word ptr [esp+0x1C],8
	mov edi,eax
	mov byte ptr [esp+0x34],bl
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	cmp edi,0xFFFFFFFF
	je Block21

 Block11:
	push edi
	call get_job_name
	xor esi,esi
	add esp,4
	mov dword ptr [esp+0x10],esi
	cmp eax,ebx
	je Block15

 Block12:
	mov ecx,eax
	lea esi,[ecx+1]
	lea ecx,[ecx]

 Block13:
	mov dl,byte ptr [ecx]
	inc ecx
	cmp dl,bl
	jne Block13

 Block14:
	sub ecx,esi
	mov esi,ecx
	push esi
	push eax
	push ebx
	push esi
	lea ecx,[esp+0x20]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x14]
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [esp+0x10]

 Block15:
	mov byte ptr [esp+0x34],3
	cmp esi,ebx
	je Block17

 Block16:
	cmp byte ptr [esi],bl
	jne Block20

 Block17:
	mov byte ptr [esp+0x34],bl
	cmp esi,ebx
	je Block19

 Block18:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block19:
	mov eax,dword ptr [esp+0x3C]
	jmp Block1

 Block20:
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x18],ebx
	call ZRef<Field::JobCond>::_Alloc
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [eax+0xC],edi
	mov dword ptr [esp+0x20],eax
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x40]
	mov byte ptr [esp+0x34],5
	call ZList<ZRef<Field::UserCond>>::AddTail_
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,eax
	call ZRef<Field::UserCond>::op_assign_copy
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x34],4
	call ZRef<Field::UserCond>::~ZRef<Field::UserCond>
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x34],3
	call ZRef<Field::JobCond>::~ZRef<Field::JobCond>
	add esi,0xFFFFFFF4
	push esi
	mov byte ptr [esp+0x38],bl
	call ZXString<char>::_Release
	add esp,4

 Block21:
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp eax,ebx
	je Block23

 Block22:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block23:
	mov eax,1
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x28
	ret
}
}
// Field::LevelCond::Parse
_SUB_EXCEPTION_HANDLER(166270)
__SUB(00166270, __cdecl, 16827,  int32_t, NakedParam<_x_com_ptr<IWzProperty>>, ZList<ZRef<Field::UserCond> >&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_166270
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
	mov eax,dword ptr [esp+0x38]
	xor ebx,ebx
	cmp eax,ebx
	sete cl
	mov dword ptr [esp+0x30],ebx
	cmp cl,bl
	je Block4

 Block1:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	xor eax,eax
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret

 Block4:
	push ebx
	push ecx
	mov dword ptr [esp+0x18],esp
	mov ecx,esp
	push offset _S_LEVEL__2
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x40]
	mov byte ptr [esp+0x38],1
	cmp ecx,ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x3C],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x38],2
	call get_int32
	add esp,8
	cmp word ptr [esp+0x18],8
	mov edi,eax
	mov byte ptr [esp+0x30],bl
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebx
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	push ebx
	push ecx
	mov dword ptr [esp+0x18],esp
	mov ecx,esp
	push offset _S_COMPARE
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x40]
	mov byte ptr [esp+0x38],3
	cmp ecx,ebx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x3C],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x38],4
	call get_int32
	add esp,8
	cmp word ptr [esp+0x18],8
	mov esi,eax
	mov byte ptr [esp+0x30],bl
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebx
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	cmp edi,ebx
	je Block20

 Block17:
	cmp edi,0xC8
	ja Block25

 Block18:
	lea eax,[esi+1]
	cmp eax,2
	ja Block23

 Block19:
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x14],ebx
	call ZRef<Field::LevelCond>::_Alloc
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [eax+0xC],edi
	mov dword ptr [eax+0x10],esi
	mov dword ptr [esp+0x1C],eax
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [esp+0x40]
	mov byte ptr [esp+0x34],6
	call ZList<ZRef<Field::UserCond>>::Insert
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x30],5
	call ZRef<Field::UserCond>::~ZRef<Field::UserCond>
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x30],bl
	call ZRef<Field::LevelCond>::~ZRef<Field::LevelCond>

 Block20:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block22

 Block21:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block22:
	mov eax,1
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret

 Block23:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block3

 Block24:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	xor eax,eax
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret

 Block25:
	mov eax,dword ptr [esp+0x38]
	jmp Block1
}
}
// Field::UserCond::Parse
_SUB_EXCEPTION_HANDLER(166EB0)
__SUB(00166EB0, __cdecl, 16554,  int32_t, NakedParam<_x_com_ptr<IWzProperty>>, ZList<ZRef<Field::UserCond> >&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_166EB0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	sete cl
	mov dword ptr [esp+0x14],0
	test cl,cl
	je Block5

 Block1:
	mov dword ptr [esp+0x14],0xFFFFFFFF

 Block2:
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	xor eax,eax
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret

 Block5:
	mov esi,dword ptr [esp+0x20]
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [ecx],eax
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x10],esp
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block7:
	call Field::LevelCond::Parse
	add esp,8
	test eax,eax
	jne Block9

 Block8:
	mov eax,dword ptr [esp+0x1C]
	jmp Block1

 Block9:
	push esi
	push ecx
	mov ecx,dword ptr [esp+0x24]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x10],esp
	test eax,eax
	je Block11

 Block10:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block11:
	call Field::JobCond::Parse
	add esp,8
	test eax,eax
	jne Block13

 Block12:
	mov eax,dword ptr [esp+0x1C]
	jmp Block1

 Block13:
	push esi
	push ecx
	mov ecx,dword ptr [esp+0x24]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x10],esp
	test eax,eax
	je Block15

 Block14:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block15:
	call Field::JobCategoryCond::Parse
	add esp,8
	test eax,eax
	jne Block17

 Block16:
	mov eax,dword ptr [esp+0x1C]
	jmp Block1

 Block17:
	push esi
	push ecx
	mov ecx,dword ptr [esp+0x24]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x10],esp
	test eax,eax
	je Block19

 Block18:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block19:
	call Field::LevelCond::Parse
	add esp,8
	test eax,eax
	jne Block21

 Block20:
	mov eax,dword ptr [esp+0x1C]
	jmp Block1

 Block21:
	push esi
	push ecx
	lea eax,[esp+0x24]
	mov ecx,esp
	mov dword ptr [esp+0x10],esp
	push eax
	call _x_com_ptr<IWzProperty>::_ctor_copy
	call Field::JobCond::Parse
	add esp,8
	test eax,eax
	jne Block23

 Block22:
	mov eax,dword ptr [esp+0x1C]
	jmp Block1

 Block23:
	push esi
	push ecx
	lea eax,[esp+0x24]
	mov ecx,esp
	mov dword ptr [esp+0x10],esp
	push eax
	call _x_com_ptr<IWzProperty>::_ctor_copy
	call Field::JobCategoryCond::Parse
	add esp,8
	test eax,eax
	jne Block25

 Block24:
	mov eax,dword ptr [esp+0x1C]
	jmp Block1

 Block25:
	push esi
	push ecx
	lea eax,[esp+0x24]
	mov ecx,esp
	mov dword ptr [esp+0x10],esp
	push eax
	call _x_com_ptr<IWzProperty>::_ctor_copy
	call Field::BattlefieldTeamCond::Parse
	add esp,8
	test eax,eax
	jne Block27

 Block26:
	mov eax,dword ptr [esp+0x1C]
	jmp Block1

 Block27:
	push esi
	push ecx
	lea eax,[esp+0x24]
	mov ecx,esp
	mov dword ptr [esp+0x10],esp
	push eax
	call _x_com_ptr<IWzProperty>::_ctor_copy
	call Field::TargetCond::Parse
	add esp,8
	test eax,eax
	jne Block29

 Block28:
	mov eax,dword ptr [esp+0x1C]
	jmp Block1

 Block29:
	push esi
	push ecx
	lea eax,[esp+0x24]
	mov ecx,esp
	mov dword ptr [esp+0x10],esp
	push eax
	call _x_com_ptr<IWzProperty>::_ctor_copy
	call Field::GenderCond::Parse
	add esp,8
	test eax,eax
	jne Block31

 Block30:
	mov eax,dword ptr [esp+0x1C]
	jmp Block1

 Block31:
	push esi
	push ecx
	lea eax,[esp+0x24]
	mov ecx,esp
	mov dword ptr [esp+0x10],esp
	push eax
	call _x_com_ptr<IWzProperty>::_ctor_copy
	call Field::ItemCond::Parse
	add esp,8
	test eax,eax
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	je Block2

 Block32:
	test eax,eax
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	mov eax,1
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// Field::BattlefieldTeamCond::IsTrue
__SUB_CLASS_THIS(00165410, __thiscall, 16877,  Field::BattlefieldTeamCond, int32_t, CUser*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	test eax,eax
	jne Block2

 Block1:
	ret 4

 Block2:
	mov eax,dword ptr [eax+0x3A80]
	xor edx,edx
	cmp eax,dword ptr [ecx+0xC]
	sete dl
	mov eax,edx
	ret 4
}
}
// Field::ItemCond::IsTrue
__SUB_CLASS_THIS(001654A0, __thiscall, 16930,  Field::ItemCond, int32_t, CUser*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	test eax,eax
	je Block7

 Block1:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	test ecx,ecx
	je Block7

 Block2:
	mov edx,dword ptr [ecx+0x20B4]
	cmp edx,dword ptr [eax+0x19E8]
	jne Block7

 Block3:
	cmp dword ptr [esi+0x10],0
	jle Block6

 Block4:
	mov eax,dword ptr [esi+0xC]
	push eax
	call CWvsContext::GetItemCount
	cmp eax,dword ptr [esi+0x10]
	jl Block7

 Block5:
	mov eax,1
	pop esi
	ret 4

 Block6:
	mov edx,dword ptr [esi+0xC]
	push edx
	call CWvsContext::GetItemCount
	mov ecx,dword ptr [esi+0x10]
	neg ecx
	cmp eax,ecx
	jle Block5

 Block7:
	xor eax,eax
	pop esi
	ret 4
}
}
// Field::JobCategoryCond::IsTrue
__SUB_CLASS_THIS(001653D0, __thiscall, 16860,  Field::JobCategoryCond, int32_t, CUser*) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	test ecx,ecx
	jne Block2

 Block1:
	xor eax,eax
	pop esi
	ret 4

 Block2:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x40]
	call edx
	mov ecx,eax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	xor ecx,ecx
	cmp eax,dword ptr [esi+0xC]
	pop esi
	sete cl
	mov eax,ecx
	ret 4
}
}
// Field::JobCond::IsTrue
__SUB_CLASS_THIS(001653A0, __thiscall, 16843,  Field::JobCond, int32_t, CUser*) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	test ecx,ecx
	jne Block2

 Block1:
	xor eax,eax
	pop esi
	ret 4

 Block2:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x40]
	call edx
	xor ecx,ecx
	cmp eax,dword ptr [esi+0xC]
	pop esi
	sete cl
	mov eax,ecx
	ret 4
}
}
// Field::ItemCond::Parse
_SUB_EXCEPTION_HANDLER(166CC0)
__SUB(00166CC0, __cdecl, 16931,  int32_t, NakedParam<_x_com_ptr<IWzProperty>>, ZList<ZRef<Field::UserCond> >&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_166CC0
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
	mov eax,dword ptr [esp+0x38]
	xor ebx,ebx
	cmp eax,ebx
	sete cl
	mov dword ptr [esp+0x30],ebx
	cmp cl,bl
	je Block4

 Block1:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	xor eax,eax
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret

 Block4:
	push ebx
	push ecx
	mov dword ptr [esp+0x18],esp
	mov ecx,esp
	push offset _S_ITEMID__2
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x40]
	mov byte ptr [esp+0x38],1
	cmp ecx,ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x3C],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x38],2
	call get_int32
	add esp,8
	cmp word ptr [esp+0x18],8
	mov edi,eax
	mov byte ptr [esp+0x30],bl
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebx
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	cmp edi,ebx
	je Block18

 Block11:
	push ebx
	push ecx
	mov dword ptr [esp+0x18],esp
	mov ecx,esp
	push offset _S_ITEMCOUNT
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x40]
	mov byte ptr [esp+0x38],3
	cmp ecx,ebx
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x3C],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x38],4
	call get_int32
	add esp,8
	cmp word ptr [esp+0x18],8
	mov esi,eax
	mov byte ptr [esp+0x30],bl
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebx
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
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x14],ebx
	call ZRef<Field::ItemCond>::_Alloc
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [eax+0xC],edi
	mov dword ptr [eax+0x10],esi
	mov dword ptr [esp+0x1C],eax
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x30],6
	call ZList<ZRef<Field::UserCond>>::AddTail_
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,eax
	call ZRef<Field::UserCond>::op_assign_copy
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x30],5
	call ZRef<Field::UserCond>::~ZRef<Field::UserCond>
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x30],bl
	call ZRef<Field::ItemCond>::~ZRef<Field::ItemCond>

 Block18:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block20

 Block19:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block20:
	mov eax,1
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret
}
}
// Field::TargetCond::Parse
_SUB_EXCEPTION_HANDLER(1669E0)
__SUB(001669E0, __cdecl, 16897,  int32_t, NakedParam<_x_com_ptr<IWzProperty>>, ZList<ZRef<Field::UserCond> >&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1669E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x34]
	xor ebx,ebx
	cmp eax,ebx
	sete cl
	mov dword ptr [esp+0x2C],ebx
	cmp cl,bl
	je Block4

 Block1:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebx
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	xor eax,eax
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x24
	ret

 Block4:
	push ebx
	push ecx
	mov dword ptr [esp+0x14],esp
	mov ecx,esp
	push offset _S_TARGET
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x34],1
	cmp ecx,ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x38],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x34],2
	call get_int32
	add esp,8
	cmp word ptr [esp+0x14],8
	mov esi,eax
	mov byte ptr [esp+0x2C],bl
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	cmp esi,ebx
	je Block12

 Block11:
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x10],ebx
	call ZRef<Field::TargetCond>::_Alloc
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [eax+0xC],esi
	mov dword ptr [esp+0x18],eax
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x38]
	mov byte ptr [esp+0x2C],4
	call ZList<ZRef<Field::UserCond>>::AddTail_
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,eax
	call ZRef<Field::UserCond>::op_assign_copy
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x2C],3
	call ZRef<Field::UserCond>::~ZRef<Field::UserCond>
	lea ecx,[esp+0xC]
	mov byte ptr [esp+0x2C],bl
	call ZRef<Field::TargetCond>::~ZRef<Field::TargetCond>

 Block12:
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebx
	je Block14

 Block13:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block14:
	mov eax,1
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x24
	ret
}
}
// Field::GenderCond::IsTrue
__SUB_CLASS_THIS(00165430, __thiscall, 16913,  Field::GenderCond, int32_t, CUser*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	test eax,eax
	jne Block2

 Block1:
	ret 4

 Block2:
	movzx eax,byte ptr [eax+0x98]
	xor edx,edx
	cmp eax,dword ptr [ecx+0xC]
	sete dl
	mov eax,edx
	ret 4
}
}
// Field::BattlefieldTeamCond::Parse
_SUB_EXCEPTION_HANDLER(166840)
__SUB(00166840, __cdecl, 16878,  int32_t, NakedParam<_x_com_ptr<IWzProperty>>, ZList<ZRef<Field::UserCond> >&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_166840
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x34]
	xor ebx,ebx
	cmp eax,ebx
	sete cl
	mov dword ptr [esp+0x2C],ebx
	cmp cl,bl
	je Block4

 Block1:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebx
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	xor eax,eax
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x24
	ret

 Block4:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [esp+0x14],esp
	mov ecx,esp
	push offset _S_BATTLEFIELDTEAM
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x34],1
	cmp ecx,ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x38],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x34],2
	call get_int32
	add esp,8
	cmp word ptr [esp+0x14],8
	mov esi,eax
	mov byte ptr [esp+0x2C],bl
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebx
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	cmp esi,0xFFFFFFFF
	je Block13

 Block11:
	cmp esi,2
	ja Block16

 Block12:
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x10],ebx
	call ZRef<Field::BattlefieldTeamCond>::_Alloc
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [eax+0xC],esi
	mov dword ptr [esp+0x18],eax
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x38]
	mov byte ptr [esp+0x2C],4
	call ZList<ZRef<Field::UserCond>>::AddTail_
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,eax
	call ZRef<Field::UserCond>::op_assign_copy
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x2C],3
	call ZRef<Field::UserCond>::~ZRef<Field::UserCond>
	lea ecx,[esp+0xC]
	mov byte ptr [esp+0x2C],bl
	call ZRef<Field::BattlefieldTeamCond>::~ZRef<Field::BattlefieldTeamCond>

 Block13:
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebx
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block15:
	mov eax,1
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x24
	ret

 Block16:
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebx
	je Block18

 Block17:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block18:
	xor eax,eax
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x24
	ret
}
}
// Field::TargetCond::IsTrue
__SUB_CLASS_THIS(00165450, __thiscall, 16896,  Field::TargetCond, int32_t, CUser*) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	test edx,edx
	je Block8

 Block1:
	mov ecx,dword ptr [ecx+0xC]
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test cl,1
	je Block5

 Block2:
	test eax,eax
	je Block8

 Block3:
	push esi
	mov esi,dword ptr [eax+0x19E8]
	cmp esi,dword ptr [edx+0x19E8]
	pop esi
	jne Block5

 Block4:
	mov eax,1
	ret 4

 Block5:
	test cl,2
	je Block8

 Block6:
	test eax,eax
	je Block8

 Block7:
	mov eax,dword ptr [eax+0x19E8]
	cmp eax,dword ptr [edx+0x19E8]
	jne Block4

 Block8:
	xor eax,eax
	ret 4
}
}
// Field::LevelCond::IsTrue
__SUB_CLASS_THIS(00165390, __thiscall, 16826,  Field::LevelCond, int32_t, CUser*) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
