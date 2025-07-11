#include "regen.hpp"
// InclusionChecker.ipp
#include "InclusionChecker.hpp"

// std___Make_heap_int__int_int_
__SUB(0016E200, __cdecl, 142134,  void, int32_t*, int32_t*, int32_t*, int32_t*) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	sub edi,ebx
	sar edi,2
	mov eax,edi
	cdq
	sub eax,edx
	mov esi,eax
	sar esi,1
	test esi,esi
	jle Block3

 Block1:
	lea ecx,[ecx]

 Block2:
	mov eax,dword ptr [ebx+esi*4-4]
	dec esi
	push eax
	push edi
	push esi
	push ebx
	call _std__Adjust_heapintintint
	add esp,0x10
	test esi,esi
	jg Block2

 Block3:
	pop edi
	pop esi
	pop ebx
	ret
}
}
// std___Make_heap_Geometry__InclusionChecker__Line__int_Geometry__InclusionChecker__Line_
__SUB(0016E350, __cdecl, 142136,  void, Geometry::InclusionChecker::Line*, Geometry::InclusionChecker::Line*, int32_t*, Geometry::InclusionChecker::Line*) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push ebp
	mov ebp,dword ptr [esp+0xC]
	sub ebx,ebp
	sar ebx,4
	mov eax,ebx
	cdq
	push esi
	sub eax,edx
	push edi
	mov edi,eax
	sar edi,1
	test edi,edi
	jle Block3

 Block1:
	mov esi,edi
	shl esi,4
	add esi,ebp

 Block2:
	mov ecx,dword ptr [esi-0x10]
	mov edx,dword ptr [esi-0xC]
	sub esi,0x10
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esi+8]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esi+0xC]
	push ebx
	dec edi
	push edi
	mov dword ptr [eax+8],ecx
	push ebp
	mov dword ptr [eax+0xC],edx
	call _std__Adjust_heapGeometryInclusionCheckerLineintGeometryInclusionCheckerLine
	add esp,0x1C
	test edi,edi
	jg Block2

 Block3:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret
}
}
// std___Sort_Geometry__InclusionChecker__Line__int_
__SUB(0016F020, __cdecl, 142144,  void, Geometry::InclusionChecker::Line*, Geometry::InclusionChecker::Line*, int32_t) {
__asm {

 Block0:
	sub esp,8
	push ebx
	mov ebx,dword ptr [esp+0x10]
	push ebp
	push esi
	push edi
	mov edi,dword ptr [esp+0x20]
	mov eax,edi
	sub eax,ebx
	sar eax,4
	cmp eax,0x20
	jle Block7

 Block1:
	mov esi,dword ptr [esp+0x24]
	nop

 Block2:
	test esi,esi
	jle Block10

 Block3:
	push edi
	lea eax,[esp+0x14]
	push ebx
	push eax
	call _std__Unguarded_partitionGeometryInclusionCheckerLine
	mov ebp,dword ptr [esp+0x20]
	mov eax,esi
	cdq
	sub eax,edx
	sar eax,1
	mov esi,eax
	cdq
	sub eax,edx
	sar eax,1
	add esi,eax
	mov eax,dword ptr [esp+0x1C]
	mov ecx,edi
	mov edx,eax
	sub ecx,ebp
	sub edx,ebx
	add esp,0xC
	and ecx,0xFFFFFFF0
	and edx,0xFFFFFFF0
	cmp edx,ecx
	push esi
	jge Block5

 Block4:
	push eax
	push ebx
	call _std__SortGeometryInclusionCheckerLineint
	mov ebx,ebp
	jmp Block6

 Block5:
	push edi
	push ebp
	call _std__SortGeometryInclusionCheckerLineint
	mov edi,dword ptr [esp+0x1C]

 Block6:
	mov eax,edi
	sub eax,ebx
	sar eax,4
	add esp,0xC
	cmp eax,0x20
	jg Block2

 Block7:
	cmp eax,1
	jle Block9

 Block8:
	push 0
	push edi
	push ebx
	call _std__Insertion_sort1GeometryInclusionCheckerLineGeometryInclusionCheckerLine
	add esp,0xC

 Block9:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret

 Block10:
	cmp eax,0x20
	jle Block7

 Block11:
	mov eax,edi
	sub eax,ebx
	and eax,0xFFFFFFF0
	cmp eax,0x10
	jle Block13

 Block12:
	push 0
	push 0
	push edi
	push ebx
	call _std__Make_heapGeometryInclusionCheckerLineintGeometryInclusionCheckerLine
	add esp,0x10

 Block13:
	push edi
	push ebx
	call _std__Sort_heapGeometryInclusionCheckerLine
	add esp,8
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret
}
}
// std___Lower_bound_intconst__int_int_
__SUB(0016E050, __cdecl, 142130,  const int32_t*, const int32_t*, const int32_t*, const int32_t&, int32_t*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+8]
	push esi
	mov esi,dword ptr [esp+8]
	sub ecx,esi
	sar ecx,2
	test ecx,ecx
	jle Block7

 Block1:
	mov eax,dword ptr [esp+0x10]
	push edi
	mov edi,dword ptr [eax]
	lea esp,[esp]

 Block2:
	mov eax,ecx
	cdq
	sub eax,edx
	sar eax,1
	cmp dword ptr [esi+eax*4],edi
	jge Block4

 Block3:
	or edx,0xFFFFFFFF
	sub edx,eax
	lea esi,[esi+eax*4+4]
	add ecx,edx
	jmp Block5

 Block4:
	mov ecx,eax

 Block5:
	test ecx,ecx
	jg Block2

 Block6:
	pop edi

 Block7:
	mov eax,esi
	pop esi
	ret
}
}
// std___Unique_int__
__SUB(0016DC70, __cdecl, 142116,  int32_t*, int32_t*, int32_t*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,dword ptr [esp+8]
	push esi
	mov edx,ecx
	cmp ecx,eax
	je Block10

 Block1:
	nop

 Block2:
	add ecx,4
	cmp ecx,eax
	je Block10

 Block3:
	mov esi,dword ptr [edx]
	cmp esi,dword ptr [ecx]
	je Block5

 Block4:
	mov edx,ecx
	jmp Block2

 Block5:
	add ecx,4
	cmp ecx,eax
	je Block9

 Block6:
	mov esi,dword ptr [ecx]
	cmp dword ptr [edx],esi
	je Block8

 Block7:
	add edx,4
	mov dword ptr [edx],esi

 Block8:
	add ecx,4
	cmp ecx,eax
	jne Block6

 Block9:
	lea eax,[edx+4]

 Block10:
	pop esi
	ret
}
}
// std___Sort_int__int_
__SUB(0016EF50, __cdecl, 142142,  void, int32_t*, int32_t*, int32_t) {
__asm {

 Block0:
	sub esp,8
	push ebx
	mov ebx,dword ptr [esp+0x10]
	push ebp
	push esi
	push edi
	mov edi,dword ptr [esp+0x20]
	mov eax,edi
	sub eax,ebx
	sar eax,2
	cmp eax,0x20
	jle Block7

 Block1:
	mov esi,dword ptr [esp+0x24]
	nop

 Block2:
	test esi,esi
	jle Block10

 Block3:
	push edi
	lea eax,[esp+0x14]
	push ebx
	push eax
	call _std__Unguarded_partitionint
	mov ebp,dword ptr [esp+0x20]
	mov eax,esi
	cdq
	sub eax,edx
	sar eax,1
	mov esi,eax
	cdq
	sub eax,edx
	sar eax,1
	add esi,eax
	mov eax,dword ptr [esp+0x1C]
	mov ecx,edi
	mov edx,eax
	sub ecx,ebp
	sub edx,ebx
	add esp,0xC
	and ecx,0xFFFFFFFC
	and edx,0xFFFFFFFC
	cmp edx,ecx
	push esi
	jge Block5

 Block4:
	push eax
	push ebx
	call _std__Sortintint
	mov ebx,ebp
	jmp Block6

 Block5:
	push edi
	push ebp
	call _std__Sortintint
	mov edi,dword ptr [esp+0x1C]

 Block6:
	mov eax,edi
	sub eax,ebx
	sar eax,2
	add esp,0xC
	cmp eax,0x20
	jg Block2

 Block7:
	cmp eax,1
	jle Block9

 Block8:
	push 0
	push edi
	push ebx
	call _std__Insertion_sort1intint
	add esp,0xC

 Block9:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret

 Block10:
	cmp eax,0x20
	jle Block7

 Block11:
	mov eax,edi
	sub eax,ebx
	and eax,0xFFFFFFFC
	cmp eax,4
	jle Block13

 Block12:
	push 0
	push 0
	push edi
	push ebx
	call _std__Make_heapintintint
	add esp,0x10

 Block13:
	push edi
	push ebx
	call _std__Sort_heapint
	add esp,8
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret
}
}
// std___Unguarded_partition_Geometry__InclusionChecker__Line__
typedef std::pair<Geometry::InclusionChecker::Line *,Geometry::InclusionChecker::Line *> line_pair_t;
__SUB(0016E600, __cdecl, 142138,  line_pair_t, Geometry::InclusionChecker::Line*, Geometry::InclusionChecker::Line*) {
__asm {

 Block0:
	sub esp,0x70
	push ebx
	mov ebx,dword ptr [esp+0x7C]
	push ebp
	mov ebp,dword ptr [esp+0x84]
	mov eax,ebp
	sub eax,ebx
	sar eax,4
	cdq
	push esi
	push edi
	sub eax,edx
	mov edi,eax
	sar edi,1
	lea eax,[ebp-0x10]
	shl edi,4
	push eax
	add edi,ebx
	push edi
	push ebx
	call _std__MedianGeometryInclusionCheckerLine
	add esp,0xC
	mov ecx,edi
	lea esi,[edi+0x10]
	cmp ebx,edi
	jae Block5

 Block1:
	lea esp,[esp]

 Block2:
	mov eax,dword ptr [ecx-0x10]
	mov edx,dword ptr [ecx]
	cmp edx,eax
	jg Block5

 Block3:
	jl Block5

 Block4:
	add ecx,0xFFFFFFF0
	cmp ebx,ecx
	jb Block2

 Block5:
	cmp esi,ebp
	jae Block10

 Block6:
	mov edx,dword ptr [ecx]

 Block7:
	mov eax,dword ptr [esi]
	cmp edx,eax
	jg Block10

 Block8:
	jl Block10

 Block9:
	add esi,0x10
	cmp esi,ebp
	jb Block7

 Block10:
	mov eax,esi
	mov edi,ecx
	jmp Block12

 Block12:
	cmp eax,dword ptr [esp+0x8C]
	jae Block19

 Block13:
	lea esp,[esp]

 Block14:
	mov edx,dword ptr [eax]
	mov ebx,dword ptr [ecx]
	cmp edx,ebx
	jg Block18

 Block15:
	jl Block19

 Block16:
	mov edx,esi
	add esi,0x10
	cmp edx,eax
	je Block18

 Block17:
	mov ebp,dword ptr [edx+4]
	mov ebx,dword ptr [edx]
	mov dword ptr [esp+0x24],ebp
	mov ebp,dword ptr [edx+8]
	mov dword ptr [esp+0x28],ebp
	mov ebp,dword ptr [edx+0xC]
	mov dword ptr [esp+0x2C],ebp
	mov ebp,dword ptr [eax]
	mov dword ptr [edx],ebp
	mov ebp,dword ptr [eax+4]
	mov dword ptr [edx+4],ebp
	mov ebp,dword ptr [eax+8]
	mov dword ptr [edx+8],ebp
	mov ebp,dword ptr [eax+0xC]
	mov dword ptr [edx+0xC],ebp
	mov edx,dword ptr [esp+0x24]
	mov dword ptr [eax],ebx
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+0xC],edx

 Block18:
	add eax,0x10
	cmp eax,dword ptr [esp+0x8C]
	jb Block14

 Block19:
	cmp edi,dword ptr [esp+0x88]
	jbe Block27

 Block20:
	lea edx,[edi-0x10]
	nop

 Block21:
	mov ebx,dword ptr [edx]
	mov ebp,dword ptr [ecx]
	cmp ebp,ebx
	jg Block25

 Block22:
	jl Block26

 Block23:
	sub ecx,0x10
	cmp ecx,edx
	je Block25

 Block24:
	mov ebp,dword ptr [ecx+4]
	mov ebx,dword ptr [ecx]
	mov dword ptr [esp+0x34],ebp
	mov ebp,dword ptr [ecx+8]
	mov dword ptr [esp+0x38],ebp
	mov ebp,dword ptr [ecx+0xC]
	mov dword ptr [esp+0x3C],ebp
	mov ebp,dword ptr [edx]
	mov dword ptr [ecx],ebp
	mov ebp,dword ptr [edx+4]
	mov dword ptr [ecx+4],ebp
	mov ebp,dword ptr [edx+8]
	mov dword ptr [ecx+8],ebp
	mov ebp,dword ptr [edx+0xC]
	mov dword ptr [ecx+0xC],ebp
	mov dword ptr [edx],ebx
	mov ebx,dword ptr [esp+0x34]
	mov dword ptr [edx+4],ebx
	mov ebx,dword ptr [esp+0x38]
	mov dword ptr [edx+8],ebx
	mov ebx,dword ptr [esp+0x3C]
	mov dword ptr [edx+0xC],ebx

 Block25:
	sub edi,0x10
	sub edx,0x10
	cmp dword ptr [esp+0x88],edi
	jb Block21

 Block26:
	cmp edi,dword ptr [esp+0x88]

 Block27:
	jne Block34

 Block28:
	cmp eax,dword ptr [esp+0x8C]
	je Block42

 Block29:
	cmp esi,eax
	je Block32

 Block30:
	cmp ecx,esi
	je Block32

 Block31:
	mov ebp,dword ptr [ecx+8]
	mov edx,dword ptr [ecx]
	mov ebx,dword ptr [ecx+4]
	mov dword ptr [esp+0x48],ebp
	mov ebp,dword ptr [ecx+0xC]
	mov dword ptr [esp+0x4C],ebp
	mov ebp,dword ptr [esi]
	mov dword ptr [ecx],ebp
	mov ebp,dword ptr [esi+4]
	mov dword ptr [ecx+4],ebp
	mov ebp,dword ptr [esi+8]
	mov dword ptr [ecx+8],ebp
	mov ebp,dword ptr [esi+0xC]
	mov dword ptr [ecx+0xC],ebp
	mov dword ptr [esi],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [esi+4],ebx
	mov dword ptr [esi+8],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [esi+0xC],edx

 Block32:
	mov edx,eax
	mov ebx,ecx
	add esi,0x10
	add ecx,0x10
	add eax,0x10
	cmp ebx,edx
	je Block12

 Block33:
	mov ebp,dword ptr [ebx]
	mov dword ptr [esp+0x10],ebp
	mov ebp,dword ptr [ebx+4]
	mov dword ptr [esp+0x14],ebp
	mov ebp,dword ptr [ebx+8]
	mov dword ptr [esp+0x18],ebp
	mov ebp,dword ptr [ebx+0xC]
	mov dword ptr [esp+0x1C],ebp
	mov ebp,dword ptr [edx]
	mov dword ptr [ebx],ebp
	mov ebp,dword ptr [edx+4]
	mov dword ptr [ebx+4],ebp
	mov ebp,dword ptr [edx+8]
	mov dword ptr [ebx+8],ebp
	mov ebp,dword ptr [edx+0xC]
	mov dword ptr [ebx+0xC],ebp
	mov ebx,dword ptr [esp+0x10]
	mov dword ptr [edx],ebx
	mov ebx,dword ptr [esp+0x14]
	mov dword ptr [edx+4],ebx
	mov ebx,dword ptr [esp+0x18]
	mov dword ptr [edx+8],ebx
	mov ebx,dword ptr [esp+0x1C]
	mov dword ptr [edx+0xC],ebx
	jmp Block12

 Block34:
	sub edi,0x10
	cmp eax,dword ptr [esp+0x8C]
	jne Block39

 Block35:
	sub ecx,0x10
	cmp edi,ecx
	je Block37

 Block36:
	mov ebp,dword ptr [edi+8]
	mov edx,dword ptr [edi]
	mov ebx,dword ptr [edi+4]
	mov dword ptr [esp+0x58],ebp
	mov ebp,dword ptr [edi+0xC]
	mov dword ptr [esp+0x5C],ebp
	mov ebp,dword ptr [ecx]
	mov dword ptr [edi],ebp
	mov ebp,dword ptr [ecx+4]
	mov dword ptr [edi+4],ebp
	mov ebp,dword ptr [ecx+8]
	mov dword ptr [edi+8],ebp
	mov ebp,dword ptr [ecx+0xC]
	mov dword ptr [edi+0xC],ebp
	mov dword ptr [ecx],edx
	mov edx,dword ptr [esp+0x58]
	mov dword ptr [ecx+4],ebx
	mov dword ptr [ecx+8],edx
	mov edx,dword ptr [esp+0x5C]
	mov dword ptr [ecx+0xC],edx

 Block37:
	sub esi,0x10
	cmp ecx,esi
	je Block12

 Block38:
	mov ebp,dword ptr [ecx+8]
	mov edx,dword ptr [ecx]
	mov ebx,dword ptr [ecx+4]
	mov dword ptr [esp+0x68],ebp
	mov ebp,dword ptr [ecx+0xC]
	mov dword ptr [esp+0x6C],ebp
	mov ebp,dword ptr [esi]
	mov dword ptr [ecx],ebp
	mov ebp,dword ptr [esi+4]
	mov dword ptr [ecx+4],ebp
	mov ebp,dword ptr [esi+8]
	mov dword ptr [ecx+8],ebp
	mov ebp,dword ptr [esi+0xC]
	mov dword ptr [ecx+0xC],ebp
	mov dword ptr [esi],edx
	mov edx,dword ptr [esp+0x68]
	mov dword ptr [esi+4],ebx
	mov dword ptr [esi+8],edx
	mov edx,dword ptr [esp+0x6C]
	mov dword ptr [esi+0xC],edx
	jmp Block12

 Block39:
	cmp eax,edi
	je Block41

 Block40:
	mov ebp,dword ptr [eax+8]
	mov edx,dword ptr [eax]
	mov ebx,dword ptr [eax+4]
	mov dword ptr [esp+0x78],ebp
	mov ebp,dword ptr [eax+0xC]
	mov dword ptr [esp+0x7C],ebp
	mov ebp,dword ptr [edi]
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [edi+4]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [edi+8]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [edi+0xC]
	mov dword ptr [eax+0xC],ebp
	mov dword ptr [edi],edx
	mov edx,dword ptr [esp+0x78]
	mov dword ptr [edi+4],ebx
	mov dword ptr [edi+8],edx
	mov edx,dword ptr [esp+0x7C]
	mov dword ptr [edi+0xC],edx

 Block41:
	add eax,0x10
	jmp Block12

 Block42:
	mov eax,dword ptr [esp+0x84]
	pop edi
	mov dword ptr [eax+4],esi
	pop esi
	pop ebp
	mov dword ptr [eax],ecx
	pop ebx
	add esp,0x70
	ret
}
}
// std___Push_heap_Geometry__InclusionChecker__Line__int_Geometry__InclusionChecker__Line_
__SUB(0016DD20, __cdecl, 142122,  void, Geometry::InclusionChecker::Line*, int32_t, int32_t, NakedParam<Geometry::InclusionChecker::Line>) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+8]
	push ebx
	mov ebx,dword ptr [esp+0x14]
	lea eax,[ecx-1]
	cdq
	push esi
	mov esi,dword ptr [esp+0xC]
	sub eax,edx
	push edi
	mov edi,dword ptr [esp+0x18]
	sar eax,1
	cmp edi,ecx
	jge Block5

 Block1:
	push ebp

 Block2:
	mov edx,eax
	shl edx,4
	add edx,esi
	cmp dword ptr [edx],ebx
	jge Block4

 Block3:
	mov ebp,dword ptr [edx]
	shl ecx,4
	add ecx,esi
	mov dword ptr [ecx],ebp
	mov ebp,dword ptr [edx+4]
	mov dword ptr [ecx+4],ebp
	mov ebp,dword ptr [edx+8]
	mov dword ptr [ecx+8],ebp
	mov edx,dword ptr [edx+0xC]
	mov dword ptr [ecx+0xC],edx
	mov ecx,eax
	dec eax
	cdq
	sub eax,edx
	sar eax,1
	cmp edi,ecx
	jl Block2

 Block4:
	pop ebp

 Block5:
	mov eax,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x24]
	shl ecx,4
	add ecx,esi
	mov dword ptr [ecx],ebx
	mov dword ptr [ecx+4],eax
	mov eax,dword ptr [esp+0x28]
	pop edi
	pop esi
	mov dword ptr [ecx+8],edx
	mov dword ptr [ecx+0xC],eax
	pop ebx
	ret
}
}
// std___Unguarded_partition_int__
typedef std::pair<int32_t *,int32_t *> intp_pair_t;
__SUB(0016E490, __cdecl, 142137,  intp_pair_t, int32_t*, int32_t*) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x14]
	push esi
	push edi
	mov edi,dword ptr [esp+0x20]
	mov eax,edi
	sub eax,ebp
	sar eax,2
	cdq
	sub eax,edx
	sar eax,1
	lea esi,[ebp+eax*4]
	lea eax,[edi-4]
	push eax
	push esi
	push ebp
	call _std__Medianint
	add esp,0xC
	mov ecx,esi
	lea ebx,[esi+4]
	cmp ebp,esi
	jae Block4

 Block1:
	mov eax,dword ptr [ecx-4]
	mov edx,dword ptr [ecx]
	cmp edx,eax
	jg Block4

 Block2:
	jl Block4

 Block3:
	add ecx,0xFFFFFFFC
	cmp ebp,ecx
	jb Block1

 Block4:
	cmp ebx,edi
	jae Block9

 Block5:
	mov edx,dword ptr [ecx]
	lea esp,[esp]

 Block6:
	mov eax,dword ptr [ebx]
	cmp edx,eax
	jg Block9

 Block7:
	jl Block9

 Block8:
	add ebx,4
	cmp ebx,edi
	jb Block6

 Block9:
	mov ebp,ecx
	mov eax,ebx
	mov dword ptr [esp+0x10],ebp

 Block10:
	cmp eax,edi
	jae Block18

 Block11:
	jmp Block13

 Block13:
	mov esi,dword ptr [eax]
	mov edx,dword ptr [ecx]
	cmp esi,edx
	jg Block17

 Block14:
	jl Block18

 Block15:
	mov edx,ebx
	add ebx,4
	cmp edx,eax
	je Block17

 Block16:
	mov edi,dword ptr [edx]
	mov dword ptr [edx],esi
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x20]

 Block17:
	add eax,4
	cmp eax,edi
	jb Block13

 Block18:
	cmp ebp,dword ptr [esp+0x1C]
	jbe Block26

 Block19:
	lea edx,[ebp-4]
	lea ecx,[ecx]

 Block20:
	mov esi,dword ptr [edx]
	mov edi,dword ptr [ecx]
	cmp edi,esi
	jg Block24

 Block21:
	jl Block25

 Block22:
	sub ecx,4
	cmp ecx,edx
	je Block24

 Block23:
	mov edi,dword ptr [edx]
	mov esi,dword ptr [ecx]
	mov dword ptr [ecx],edi
	mov dword ptr [edx],esi

 Block24:
	sub ebp,4
	sub edx,4
	cmp dword ptr [esp+0x1C],ebp
	jb Block20

 Block25:
	mov edi,dword ptr [esp+0x20]
	cmp ebp,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x10],ebp

 Block26:
	jne Block33

 Block27:
	cmp eax,edi
	je Block41

 Block28:
	cmp ebx,eax
	je Block31

 Block29:
	cmp ecx,ebx
	je Block31

 Block30:
	mov esi,dword ptr [ebx]
	mov edx,dword ptr [ecx]
	mov dword ptr [ecx],esi
	mov dword ptr [ebx],edx

 Block31:
	mov edx,eax
	mov esi,ecx
	add ebx,4
	add ecx,4
	add eax,4
	cmp esi,edx
	je Block10

 Block32:
	mov ebp,dword ptr [edx]
	mov edi,dword ptr [esi]
	mov dword ptr [esi],ebp
	mov ebp,dword ptr [esp+0x10]
	mov dword ptr [edx],edi
	mov edi,dword ptr [esp+0x20]
	jmp Block10

 Block33:
	sub ebp,4
	mov dword ptr [esp+0x10],ebp
	cmp eax,edi
	jne Block38

 Block34:
	sub ecx,4
	cmp ebp,ecx
	je Block36

 Block35:
	mov esi,dword ptr [ecx]
	mov edx,dword ptr [ebp]
	mov dword ptr [ebp],esi
	mov dword ptr [ecx],edx

 Block36:
	sub ebx,4
	cmp ecx,ebx
	je Block10

 Block37:
	mov esi,dword ptr [ebx]
	mov edx,dword ptr [ecx]
	mov dword ptr [ecx],esi
	mov dword ptr [ebx],edx
	jmp Block10

 Block38:
	cmp eax,ebp
	je Block40

 Block39:
	mov esi,dword ptr [ebp]
	mov edx,dword ptr [eax]
	mov dword ptr [eax],esi
	mov dword ptr [ebp],edx

 Block40:
	add eax,4
	jmp Block10

 Block41:
	mov eax,dword ptr [esp+0x18]
	pop edi
	pop esi
	pop ebp
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax],ecx
	pop ebx
	pop ecx
	ret
}
}
// std___Push_heap_int__int_int_
__SUB(0016DCD0, __cdecl, 142120,  void, int32_t*, int32_t, int32_t, int32_t) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+8]
	lea eax,[ecx-1]
	cdq
	sub eax,edx
	push ebx
	mov ebx,dword ptr [esp+0x10]
	sar eax,1
	cmp ebx,ecx
	jge Block5

 Block1:
	push esi
	mov esi,dword ptr [esp+0xC]
	push edi
	mov edi,dword ptr [esp+0x1C]
	nop

 Block2:
	mov edx,dword ptr [esi+eax*4]
	cmp edx,edi
	jge Block4

 Block3:
	mov dword ptr [esi+ecx*4],edx
	mov ecx,eax
	dec eax
	cdq
	sub eax,edx
	sar eax,1
	cmp ebx,ecx
	jl Block2

 Block4:
	mov dword ptr [esi+ecx*4],edi
	pop edi
	pop esi
	pop ebx
	ret

 Block5:
	mov eax,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+8]
	mov dword ptr [edx+ecx*4],eax
	pop ebx
	ret
}
}
// std___Sort_heap_int__
__SUB(0016EDF0, __cdecl, 142139,  void, int32_t*, int32_t*) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+0xC]
	push edi
	mov edi,dword ptr [esp+0xC]
	sub esi,edi
	mov eax,esi
	sar eax,2
	cmp eax,1
	jle Block2

 Block1:
	mov eax,dword ptr [edi+esi-4]
	mov ecx,dword ptr [edi]
	push eax
	lea edx,[esi-4]
	sar edx,2
	push edx
	push 0
	push edi
	mov dword ptr [edi+esi-4],ecx
	call _std__Adjust_heapintintint
	sub esi,4
	mov eax,esi
	sar eax,2
	add esp,0x10
	cmp eax,1
	jg Block1

 Block2:
	pop edi
	pop esi
	ret
}
}
// std___Median_int__
__SUB(0016E0A0, __cdecl, 142132,  void, int32_t*, int32_t*, int32_t*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	mov eax,edi
	sub eax,ecx
	sar eax,2
	cmp eax,0x28
	jle Block37

 Block1:
	inc eax
	cdq
	and edx,7
	add eax,edx
	mov edx,dword ptr [ecx]
	sar eax,3
	push ebx
	push ebp
	lea ebp,[eax*4]
	lea edi,[eax*8]
	mov eax,dword ptr [ecx+ebp]
	lea esi,[ecx+ebp]
	mov dword ptr [esp+0x14],edi
	add edi,ecx
	cmp eax,edx
	jge Block4

 Block2:
	cmp esi,ecx
	je Block4

 Block3:
	mov dword ptr [esi],edx
	mov dword ptr [ecx],eax

 Block4:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [esi]
	cmp eax,edx
	jge Block7

 Block5:
	cmp edi,esi
	je Block7

 Block6:
	mov dword ptr [edi],edx
	mov dword ptr [esi],eax

 Block7:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [ecx]
	cmp eax,edx
	jge Block10

 Block8:
	cmp esi,ecx
	je Block10

 Block9:
	mov dword ptr [esi],edx
	mov dword ptr [ecx],eax

 Block10:
	mov eax,dword ptr [esp+0x18]
	mov edx,dword ptr [eax]
	mov ecx,eax
	sub ecx,ebp
	mov edi,dword ptr [ecx]
	cmp edx,edi
	lea ebx,[eax+ebp]
	jge Block13

 Block11:
	cmp eax,ecx
	je Block13

 Block12:
	mov dword ptr [eax],edi
	mov dword ptr [ecx],edx

 Block13:
	mov edx,dword ptr [ebx]
	mov edi,dword ptr [eax]
	cmp edx,edi
	jge Block16

 Block14:
	cmp ebx,eax
	je Block16

 Block15:
	mov dword ptr [ebx],edi
	mov dword ptr [eax],edx

 Block16:
	mov edx,dword ptr [eax]
	mov edi,dword ptr [ecx]
	cmp edx,edi
	jge Block19

 Block17:
	cmp eax,ecx
	je Block19

 Block18:
	mov dword ptr [eax],edi
	mov dword ptr [ecx],edx

 Block19:
	mov edx,dword ptr [esp+0x1C]
	mov ecx,edx
	sub edx,dword ptr [esp+0x14]
	sub ecx,ebp
	mov edi,dword ptr [ecx]
	mov ebx,dword ptr [edx]
	cmp edi,ebx
	jge Block22

 Block20:
	cmp ecx,edx
	je Block22

 Block21:
	mov dword ptr [ecx],ebx
	mov dword ptr [edx],edi

 Block22:
	mov ebp,dword ptr [esp+0x1C]
	mov edi,dword ptr [ebp]
	mov ebx,dword ptr [ecx]
	cmp edi,ebx
	jge Block25

 Block23:
	cmp ebp,ecx
	je Block25

 Block24:
	mov dword ptr [ebp],ebx
	mov dword ptr [ecx],edi

 Block25:
	mov edi,dword ptr [ecx]
	mov ebx,dword ptr [edx]
	cmp edi,ebx
	jge Block28

 Block26:
	cmp ecx,edx
	je Block28

 Block27:
	mov dword ptr [ecx],ebx
	mov dword ptr [edx],edi

 Block28:
	mov edx,dword ptr [eax]
	mov edi,dword ptr [esi]
	cmp edx,edi
	pop ebp
	pop ebx
	jge Block31

 Block29:
	cmp eax,esi
	je Block31

 Block30:
	mov dword ptr [eax],edi
	mov dword ptr [esi],edx

 Block31:
	mov edx,dword ptr [ecx]
	mov edi,dword ptr [eax]
	cmp edx,edi
	jge Block34

 Block32:
	cmp ecx,eax
	je Block34

 Block33:
	mov dword ptr [ecx],edi
	mov dword ptr [eax],edx

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [esi]
	cmp ecx,edx
	jge Block46

 Block35:
	cmp eax,esi
	je Block46

 Block36:
	mov dword ptr [eax],edx
	pop edi
	mov dword ptr [esi],ecx
	pop esi
	ret

 Block37:
	mov eax,dword ptr [esp+0x10]
	mov edx,dword ptr [eax]
	mov esi,dword ptr [ecx]
	cmp edx,esi
	jge Block40

 Block38:
	cmp eax,ecx
	je Block40

 Block39:
	mov dword ptr [eax],esi
	mov dword ptr [ecx],edx

 Block40:
	mov edx,dword ptr [edi]
	mov esi,dword ptr [eax]
	cmp edx,esi
	jge Block43

 Block41:
	cmp edi,eax
	je Block43

 Block42:
	mov dword ptr [edi],esi
	mov dword ptr [eax],edx

 Block43:
	mov edx,dword ptr [eax]
	mov esi,dword ptr [ecx]
	cmp edx,esi
	jge Block46

 Block44:
	cmp eax,ecx
	je Block46

 Block45:
	mov dword ptr [eax],esi
	mov dword ptr [ecx],edx

 Block46:
	pop edi
	pop esi
	ret
}
}
// std___Sort_heap_Geometry__InclusionChecker__Line__
__SUB(0016EE40, __cdecl, 142140,  void, Geometry::InclusionChecker::Line*, Geometry::InclusionChecker::Line*) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	mov esi,dword ptr [esp+0x10]
	push edi
	mov edi,dword ptr [esp+0x18]
	sub edi,esi
	mov eax,edi
	sar eax,4
	cmp eax,1
	jle Block2

 Block1:
	mov ecx,dword ptr [esi+edi-0x10]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [esi+edi-0xC]
	mov ebx,dword ptr [esi+edi-8]
	mov ebp,dword ptr [esi+edi-4]
	mov dword ptr [esi+edi-0x10],eax
	mov eax,dword ptr [esi+4]
	mov dword ptr [esi+edi-0xC],eax
	mov eax,dword ptr [esi+8]
	mov dword ptr [esi+edi-8],eax
	mov eax,dword ptr [esi+0xC]
	sub esp,0x10
	mov dword ptr [esi+edi-4],eax
	mov eax,esp
	mov dword ptr [eax],ecx
	lea ecx,[edi-0x10]
	sar ecx,4
	push ecx
	mov dword ptr [eax+4],edx
	push 0
	mov dword ptr [eax+8],ebx
	push esi
	mov dword ptr [eax+0xC],ebp
	call _std__Adjust_heapGeometryInclusionCheckerLineintGeometryInclusionCheckerLine
	sub edi,0x10
	mov eax,edi
	sar eax,4
	add esp,0x1C
	cmp eax,1
	jg Block1

 Block2:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret
}
}
// std___Med3_Geometry__InclusionChecker__Line__
__SUB(0016DE50, __cdecl, 142126,  void, Geometry::InclusionChecker::Line*, Geometry::InclusionChecker::Line*, Geometry::InclusionChecker::Line*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [eax]
	mov ecx,dword ptr [esp+4]
	sub esp,0x10
	cmp edx,dword ptr [ecx]
	push ebx
	push ebp
	push esi
	push edi
	jge Block3

 Block1:
	cmp eax,ecx
	je Block3

 Block2:
	mov ebp,dword ptr [ecx]
	mov esi,dword ptr [eax+4]
	mov edi,dword ptr [eax+8]
	mov ebx,dword ptr [eax+0xC]
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [ecx+4]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [ecx+8]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [ecx+0xC]
	mov dword ptr [eax+0xC],ebp
	mov dword ptr [ecx],edx
	mov dword ptr [ecx+4],esi
	mov dword ptr [ecx+8],edi
	mov dword ptr [ecx+0xC],ebx

 Block3:
	mov edx,dword ptr [esp+0x2C]
	mov esi,dword ptr [edx]
	cmp esi,dword ptr [eax]
	jge Block6

 Block4:
	cmp edx,eax
	je Block6

 Block5:
	mov ebp,dword ptr [edx+0xC]
	mov edi,dword ptr [edx+4]
	mov ebx,dword ptr [edx+8]
	mov dword ptr [esp+0x1C],ebp
	mov ebp,dword ptr [eax]
	mov dword ptr [edx],ebp
	mov ebp,dword ptr [eax+4]
	mov dword ptr [edx+4],ebp
	mov ebp,dword ptr [eax+8]
	mov dword ptr [edx+8],ebp
	mov ebp,dword ptr [eax+0xC]
	mov dword ptr [edx+0xC],ebp
	mov edx,dword ptr [esp+0x1C]
	mov dword ptr [eax],esi
	mov dword ptr [eax+4],edi
	mov dword ptr [eax+8],ebx
	mov dword ptr [eax+0xC],edx

 Block6:
	mov edx,dword ptr [eax]
	cmp edx,dword ptr [ecx]
	jge Block9

 Block7:
	cmp eax,ecx
	je Block9

 Block8:
	mov ebp,dword ptr [ecx]
	mov esi,dword ptr [eax+4]
	mov edi,dword ptr [eax+8]
	mov ebx,dword ptr [eax+0xC]
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [ecx+4]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [ecx+8]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [ecx+0xC]
	mov dword ptr [eax+0xC],ebp
	mov dword ptr [ecx],edx
	mov dword ptr [ecx+4],esi
	mov dword ptr [ecx+8],edi
	mov dword ptr [ecx+0xC],ebx

 Block9:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret
}
}
// std___Copy_backward_opt_Geometry__InclusionChecker__Line__Geometry__InclusionChecker__Line__
/*__SUB(0016DFD0, __cdecl, 142128,  Geometry::InclusionChecker::Line*, Geometry::InclusionChecker::Line*, Geometry::InclusionChecker::Line*, Geometry::InclusionChecker::Line*, NakedParam<std::random_access_iterator_tag>, NakedParam<std::_Nonscalar_ptr_iterator_tag>, NakedParam<std::_Range_checked_iterator_tag>) {
_ASM_PLACEHOLDER(0016DFD0, 142128)
}*/
