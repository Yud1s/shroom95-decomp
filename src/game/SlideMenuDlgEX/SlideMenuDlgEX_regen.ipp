#include "regen.hpp"
// SlideMenuDlgEX.ipp
#include "SlideMenuDlgEX.hpp"

// Partition_CSlideMenuDlgEX__MAINBUTTONINFO_CSlideMenuDlgEX__CompButtonInfo_
_SUB_EXCEPTION_HANDLER(313DD0)
__SUB(00313DD0, __cdecl, 132781,  int32_t, ZArray<CSlideMenuDlgEX::MAINBUTTONINFO>&, int32_t, int32_t, const CSlideMenuDlgEX::MAINBUTTONINFO&, CSlideMenuDlgEX::CompButtonInfo&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_313DD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x20],eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x38]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [esp+0x50]
	mov ebx,dword ptr [esp+0x48]
	mov ebp,dword ptr [esp+0x54]
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [esp+0x1C],esi

 Block1:
	cmp edx,dword ptr [esp+0x50]
	mov dword ptr [esp+0x18],edx
	jge Block7

 Block2:
	lea edi,[edx+edx*2]
	add edi,edi
	add edi,edi
	mov dword ptr [esp+0x14],edi
	jmp Block4

 Block3:
	mov edi,dword ptr [esp+0x14]

 Block4:
	sub esp,0xC
	mov esi,esp
	mov dword ptr [esp+0x2C],esp
	push ebp
	mov ecx,esi
	mov dword ptr [esp+0x34],esi
	mov dword ptr [esi],0
	call ZXString16::op_assign
	lea eax,[ebp+4]
	lea ecx,[esi+4]
	push eax
	mov dword ptr [esp+0x50],0
	mov dword ptr [ecx],0
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+8]
	mov dword ptr [esi+8],eax
	mov esi,dword ptr [ebx]
	sub esp,0xC
	add esi,edi
	mov edi,esp
	mov dword ptr [esp+0x3C],esp
	push esi
	mov ecx,edi
	mov dword ptr [esp+0x5C],1
	mov dword ptr [esp+0x40],edi
	mov dword ptr [edi],0
	call ZXString16::op_assign
	lea edx,[esi+4]
	lea ecx,[edi+4]
	push edx
	mov byte ptr [esp+0x5C],2
	mov dword ptr [ecx],0
	call ZXString16::op_assign
	mov eax,dword ptr [esi+8]
	mov ecx,dword ptr [esp+0x70]
	mov dword ptr [edi+8],eax
	mov byte ptr [esp+0x58],1
	mov dword ptr [esp+0x58],0xFFFFFFFF
	call CSlideMenuDlgEX::CompButtonInfo::operator()
	test eax,eax
	je Block6

 Block5:
	mov eax,dword ptr [esp+0x18]
	add dword ptr [esp+0x14],0xC
	inc eax
	cmp eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x18],eax
	jl Block3

 Block6:
	mov esi,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x18]

 Block7:
	dec esi
	cmp dword ptr [esp+0x4C],esi
	mov dword ptr [esp+0x1C],esi
	jge Block14

 Block8:
	lea eax,[esi+esi*2]
	add eax,eax
	add eax,eax
	mov dword ptr [esp+0x14],eax
	jmp Block11

 Block10:
	mov eax,dword ptr [esp+0x14]

 Block11:
	mov esi,dword ptr [ebx]
	sub esp,0xC
	mov edi,esp
	add esi,eax
	mov dword ptr [esp+0x30],esp
	push esi
	mov ecx,edi
	mov dword ptr [esp+0x30],edi
	mov dword ptr [edi],0
	call ZXString16::op_assign
	lea edx,[esi+4]
	lea ecx,[edi+4]
	push edx
	mov dword ptr [esp+0x50],3
	mov dword ptr [ecx],0
	call ZXString16::op_assign
	mov eax,dword ptr [esi+8]
	mov dword ptr [edi+8],eax
	sub esp,0xC
	mov esi,esp
	mov dword ptr [esp+0x38],esp
	push ebp
	mov ecx,esi
	mov dword ptr [esp+0x5C],4
	mov dword ptr [esp+0x3C],esi
	mov dword ptr [esi],0
	call ZXString16::op_assign
	lea eax,[ebp+4]
	lea ecx,[esi+4]
	push eax
	mov byte ptr [esp+0x5C],5
	mov dword ptr [ecx],0
	call ZXString16::op_assign
	mov ecx,dword ptr [ebp+8]
	mov dword ptr [esi+8],ecx
	mov ecx,dword ptr [esp+0x70]
	mov byte ptr [esp+0x58],4
	mov dword ptr [esp+0x58],0xFFFFFFFF
	call CSlideMenuDlgEX::CompButtonInfo::operator()
	test eax,eax
	je Block13

 Block12:
	mov eax,dword ptr [esp+0x1C]
	sub dword ptr [esp+0x14],0xC
	dec eax
	cmp dword ptr [esp+0x4C],eax
	mov dword ptr [esp+0x1C],eax
	jl Block10

 Block13:
	mov esi,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x18]

 Block14:
	cmp edx,esi
	jge Block16

 Block15:
	mov ecx,dword ptr [ebx]
	lea edi,[edx+edx*2]
	lea eax,[esi+esi*2]
	lea eax,[ecx+eax*4]
	lea ecx,[ecx+edi*4]
	mov edi,dword ptr [ecx]
	mov dword ptr [esp+0x28],edi
	mov edi,dword ptr [ecx+4]
	mov dword ptr [esp+0x2C],edi
	mov edi,dword ptr [ecx+8]
	mov dword ptr [esp+0x30],edi
	mov edi,dword ptr [eax]
	mov dword ptr [ecx],edi
	mov edi,dword ptr [eax+4]
	mov dword ptr [ecx+4],edi
	mov edi,dword ptr [eax+8]
	mov dword ptr [ecx+8],edi
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr [eax+8],ecx
	inc edx
	jmp Block1

 Block16:
	mov eax,edx
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov ecx,dword ptr [esp+0x20]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x30
	ret
}
}
// CSlideMenuDlgEX::OnButtonClicked
// 7144BC
static uint8_t _SUB_314410_LOOKUP_TABLE_0[12] = {
0, 0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 
};
__SUB_CLASS_THIS(00314410, __thiscall, 52372,  CSlideMenuDlgEX, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push edi
	mov edi,ecx
	lea ecx,[eax-0xBB8]
	cmp ecx,0xB
	ja Block11

 Block1:
	movzx ecx,byte ptr [ecx+_SUB_314410_LOOKUP_TABLE_0]
	cmp ECX, 0
je Block2
cmp ECX, 1
je Block9
cmp ECX, 2
je Block10
cmp ECX, 3
je Block3


 Block2:
	push eax
	mov ecx,edi
	call CSlideMenuDlgEX::ArrowButtonClicked
	pop edi
	ret 4

 Block3:
	push ebx
	add eax,0xFFFFF444
	push esi
	mov dword ptr [edi+0x94],eax
	lea esi,[edi+0xA8]
	mov ebx,8

 Block4:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block6

 Block5:
	push 0
	call CCtrlButton::SetKeyFocus

 Block6:
	add esi,8
	sub ebx,1
	jne Block4

 Block7:
	mov edx,dword ptr [edi+0x94]
	mov ecx,dword ptr [edi+edx*8+0xA8]
	pop esi
	pop ebx
	test ecx,ecx
	je Block11

 Block8:
	pop edi
	mov dword ptr [esp+4],1
	jmp  CCtrlButton::SetKeyFocus

 Block9:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x34]
	push 1
	mov ecx,edi
	call edx
	pop edi
	ret 4

 Block10:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x34]
	push 2
	mov ecx,edi
	call edx

 Block11:
	pop edi
	ret 4
}
}
// CSlideMenuDlgEX::OnKey
// 713660
static uint8_t _SUB_313540_LOOKUP_TABLE_0[28] = {
0, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 1, 6, 
6, 6, 6, 6, 6, 6, 6, 6, 2, 3, 4, 5, 
};
__SUB_CLASS_THIS(00313540, __thiscall, 52373,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push esi
	mov esi,ecx
	test eax,eax
	js Block22

 Block1:
	mov eax,dword ptr [esp+8]
	add eax,0xFFFFFFF3
	push edi
	mov edi,dword ptr [esi+0x90]
	cmp eax,0x1B
	ja Block14

 Block2:
	movzx eax,byte ptr [eax+_SUB_313540_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block4
cmp EAX, 2
je Block5
cmp EAX, 3
je Block9
cmp EAX, 4
je Block7
cmp EAX, 5
je Block11
cmp EAX, 6
je Block14


 Block3:
	mov edx,dword ptr [esi-4]
	mov eax,dword ptr [edx+0x34]
	lea ecx,[esi-4]
	push 1
	call eax
	jmp Block14

 Block4:
	mov edx,dword ptr [esi-4]
	mov eax,dword ptr [edx+0x34]
	lea ecx,[esi-4]
	push 2
	call eax
	jmp Block14

 Block5:
	lea eax,[edi-1]
	mov dword ptr [esi+0x90],eax
	test eax,eax
	jge Block14

 Block6:
	mov dword ptr [esi+0x90],7
	jmp Block14

 Block7:
	lea eax,[edi+1]
	cmp eax,8
	mov dword ptr [esi+0x90],eax
	jl Block14

 Block8:
	mov dword ptr [esi+0x90],0
	jmp Block14

 Block9:
	lea eax,[edi-4]
	mov dword ptr [esi+0x90],eax
	test eax,eax
	jge Block14

 Block10:
	add eax,8
	jmp Block13

 Block11:
	lea eax,[edi+4]
	cmp eax,8
	mov dword ptr [esi+0x90],eax
	jl Block14

 Block12:
	add eax,0xFFFFFFF8

 Block13:
	mov dword ptr [esi+0x90],eax

 Block14:
	cmp edi,dword ptr [esi+0x90]
	je Block21

 Block15:
	push ebx
	lea edi,[esi+0xA4]
	mov ebx,8

 Block16:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	je Block18

 Block17:
	push 0
	call CCtrlButton::SetKeyFocus

 Block18:
	add edi,8
	sub ebx,1
	jne Block16

 Block19:
	mov ecx,dword ptr [esi+0x90]
	mov ecx,dword ptr [esi+ecx*8+0xA4]
	pop ebx
	test ecx,ecx
	je Block21

 Block20:
	push 1
	call CCtrlButton::SetKeyFocus

 Block21:
	pop edi
	pop esi
	ret 8

 Block22:
	mov edx,dword ptr [esp+8]
	push eax
	push edx
	call CDialog::OnKey
	pop esi
	ret 8
}
}
// CSlideMenuDlgEX::CompButtonInfo::operator()
_SUB_EXCEPTION_HANDLER(3137D0)
__SUB_CLASS_THIS(003137D0, __thiscall, 52398,  CSlideMenuDlgEX::CompButtonInfo, int32_t, const NakedParam<CSlideMenuDlgEX::MAINBUTTONINFO>, const NakedParam<CSlideMenuDlgEX::MAINBUTTONINFO>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3137D0
	mov eax,dword ptr fs:[0]
	push eax
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+4]
	mov dword ptr fs:[0],eax
	xor eax,eax
	mov dword ptr [esp+0xC],eax
	mov ecx,dword ptr [esp+0x1C]
	cmp ecx,dword ptr [esp+0x28]
	mov byte ptr [esp+0xC],al
	lea ecx,[esp+0x14]
	jge Block2

 Block1:
	call CSlideMenuDlgEX::MAINBUTTONINFO::~MAINBUTTONINFO
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0xC],0xFFFFFFFF
	call CSlideMenuDlgEX::MAINBUTTONINFO::~MAINBUTTONINFO
	mov eax,1
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 0x18

 Block2:
	call CSlideMenuDlgEX::MAINBUTTONINFO::~MAINBUTTONINFO
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0xC],0xFFFFFFFF
	call CSlideMenuDlgEX::MAINBUTTONINFO::~MAINBUTTONINFO
	xor eax,eax
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 0x18
}
}
// CSlideMenuDlgEX::Draw
_SUB_EXCEPTION_HANDLER(314220)
__SUB_CLASS_THIS(00314220, __thiscall, 52371,  CSlideMenuDlgEX, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_314220
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
	mov esi,ecx
	mov eax,dword ptr [esp+0x40]
	push eax
	call CWnd::Draw
	mov ecx,dword ptr [esi+0x98]
	mov edx,dword ptr [esi+0x94]
	lea eax,[edx+ecx*8]
	mov ecx,dword ptr [esi+0xA0]
	xor edi,edi
	cmp ecx,edi
	je Block20

 Block1:
	cmp eax,dword ptr [ecx-4]
	jae Block20

 Block2:
	lea eax,[eax+eax*2]
	lea eax,[ecx+eax*4]
	push eax
	lea ecx,[esp+0x44]
	mov dword ptr [esp+0x44],edi
	call ZXString16::op_assign
	lea edx,[esp+0x20]
	push edx
	mov dword ptr [esp+0x3C],edi
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x20]
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
	push edi
	lea ecx,[esp+0x18]
	push edi
	push ecx
	mov byte ptr [esp+0x44],1
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov ebp,dword ptr [esp+0x44]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0xFFFFFFFF
	push ebp
	mov byte ptr [esp+0x4C],2
	mov dword ptr [ecx],edi
	call ZXString<char>::AssignWideStr
	push 0x99
	lea edx,[esp+0x30]
	push edx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0x54],3
	call _xbstr_t::_ctor_1
	lea eax,[esp+0x28]
	push edi
	push eax
	mov byte ptr [esp+0x58],4
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x50],5
	cmp ecx,edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov byte ptr [esp+0x50],6
	call IWzFont::CalcTextWidth
	mov ecx,dword ptr [esi+0x24]
	sub ecx,eax
	shr ecx,1
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov byte ptr [esp+0x50],7
	call _DrawTextA
	mov eax,dword ptr [esp+0x28]
	add esp,0x18
	mov byte ptr [esp+0x38],2
	cmp eax,edi
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block8:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x38],1
	cmp eax,edi
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x38],0
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,edi
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	add esi,0xA8
	mov edi,8

 Block15:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block17

 Block16:
	call CCtrlWnd::InvalidateRect

 Block17:
	add esi,8
	sub edi,1
	jne Block15

 Block18:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test ebp,ebp
	je Block20

 Block19:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString16::_Release
	add esp,4

 Block20:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x2C
	ret 4
}
}
// Median_CSlideMenuDlgEX__MAINBUTTONINFO_CSlideMenuDlgEX__CompButtonInfo_
_SUB_EXCEPTION_HANDLER(313C50)
__SUB(00313C50, __cdecl, 132779,  const CSlideMenuDlgEX::MAINBUTTONINFO&, const CSlideMenuDlgEX::MAINBUTTONINFO&, const CSlideMenuDlgEX::MAINBUTTONINFO&, const CSlideMenuDlgEX::MAINBUTTONINFO&, CSlideMenuDlgEX::CompButtonInfo&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_313C50
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
	mov edi,dword ptr [esp+0x30]
	sub esp,0xC
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push edi
	call CSlideMenuDlgEX::MAINBUTTONINFO::_ctor_0
	mov ebx,dword ptr [esp+0x38]
	sub esp,0xC
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push ebx
	mov dword ptr [esp+0x40],0
	call CSlideMenuDlgEX::MAINBUTTONINFO::_ctor_0
	mov esi,dword ptr [esp+0x50]
	or ebp,0xFFFFFFFF
	mov ecx,esi
	mov dword ptr [esp+0x3C],ebp
	call CSlideMenuDlgEX::CompButtonInfo::operator()
	sub esp,0xC
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	test eax,eax
	je Block4

 Block1:
	mov eax,dword ptr [esp+0x40]
	push eax
	call CSlideMenuDlgEX::MAINBUTTONINFO::_ctor_0
	sub esp,0xC
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push edi
	mov dword ptr [esp+0x40],1
	call CSlideMenuDlgEX::MAINBUTTONINFO::_ctor_0
	mov ecx,esi
	mov dword ptr [esp+0x3C],ebp
	call CSlideMenuDlgEX::CompButtonInfo::operator()
	test eax,eax
	jne Block6

 Block2:
	mov edi,dword ptr [esp+0x34]
	sub esp,0xC
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push edi
	call CSlideMenuDlgEX::MAINBUTTONINFO::_ctor_0
	sub esp,0xC
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push ebx
	mov dword ptr [esp+0x40],2
	call CSlideMenuDlgEX::MAINBUTTONINFO::_ctor_0
	mov ecx,esi
	mov dword ptr [esp+0x3C],ebp
	call CSlideMenuDlgEX::CompButtonInfo::operator()
	test eax,eax
	jne Block6

 Block3:
	mov eax,ebx
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret

 Block4:
	mov edx,dword ptr [esp+0x40]
	push edx
	call CSlideMenuDlgEX::MAINBUTTONINFO::_ctor_0
	sub esp,0xC
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push ebx
	mov dword ptr [esp+0x40],3
	call CSlideMenuDlgEX::MAINBUTTONINFO::_ctor_0
	mov ecx,esi
	mov dword ptr [esp+0x3C],ebp
	call CSlideMenuDlgEX::CompButtonInfo::operator()
	test eax,eax
	jne Block3

 Block5:
	mov ebx,dword ptr [esp+0x34]
	sub esp,0xC
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push ebx
	call CSlideMenuDlgEX::MAINBUTTONINFO::_ctor_0
	sub esp,0xC
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push edi
	mov dword ptr [esp+0x40],4
	call CSlideMenuDlgEX::MAINBUTTONINFO::_ctor_0
	mov ecx,esi
	mov dword ptr [esp+0x3C],ebp
	call CSlideMenuDlgEX::CompButtonInfo::operator()
	test eax,eax
	mov eax,ebx
	jne Block7

 Block6:
	mov eax,edi

 Block7:
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
// CSlideMenuDlgEX::MAINBUTTONINFO::MAINBUTTONINFO
_SUB_EXCEPTION_HANDLER(313BE0)
__SUB_CLASS_THIS(00313BE0, __thiscall, 52404,  CSlideMenuDlgEX::MAINBUTTONINFO, void, const CSlideMenuDlgEX::MAINBUTTONINFO&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_313BE0
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
	mov edi,dword ptr [esp+0x20]
	push edi
	mov dword ptr [esi],0
	call ZXString16::op_assign
	lea eax,[edi+4]
	lea ecx,[esi+4]
	push eax
	mov dword ptr [esp+0x1C],0
	mov dword ptr [ecx],0
	call ZXString16::op_assign
	mov ecx,dword ptr [edi+8]
	mov dword ptr [esi+8],ecx
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CSlideMenuDlgEX::OnCreate
_SUB_EXCEPTION_HANDLER(314DA0)
__SUB_CLASS_THIS(00314DA0, __thiscall, 52369,  CSlideMenuDlgEX, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_314DA0
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
	mov esi,ecx
	mov dword ptr [esp+0x1C],esi
	lea eax,[esp+0x2C]
	push 0x1997
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	xor ebp,ebp
	mov dword ptr [esp+0x80],ebp
	mov dword ptr [esp+0x20],ebp
	mov ecx,dword ptr [esi+0x90]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x8C],1
	call ZXString16::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebp
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x80],3
	cmp eax,ebp
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x80],4
	cmp eax,ebp
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	lea eax,[esp+0x30]
	push 0x1996
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x24],ebp
	mov ecx,dword ptr [esi+0x90]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x8C],6
	call ZXString16::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebp
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x80],8
	cmp eax,ebp
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x80],9
	cmp eax,ebp
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block8:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x48]
	push eax
	call esi
	lea ecx,[esp+0x48]
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
	lea edx,[esp+0x38]
	push edx
	mov byte ptr [esp+0x84],0xA
	call esi
	lea eax,[esp+0x38]
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
	mov eax,dword ptr [esp+0x18]
	push ebp
	push ebp
	lea ecx,[esp+0x50]
	push ecx
	lea edx,[esp+0x44]
	push edx
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	mov bl,0xB
	push eax
	mov byte ptr [esp+0x98],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x94],0xC
	cmp dword ptr [_D_G_RM],ebp
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea ecx,[esp+0x6C]
	push ecx
	mov byte ptr [esp+0x98],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],0xD
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x2C],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block17

 Block15:
	cmp eax,0x80004002
	je Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	mov esi,8
	mov byte ptr [esp+0x80],0xF
	cmp word ptr [esp+0x58],si
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	cmp eax,ebp
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov byte ptr [esp+0x80],0x10
	cmp word ptr [esp+0x38],si
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	cmp eax,ebp
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov bl,0x11
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x48],si
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	cmp eax,ebp
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	push ebp
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push offset _S_ISANIBACKGRD
	call _xbstr_t::_ctor_1
	mov esi,dword ptr [esp+0x30]
	mov byte ptr [esp+0x88],0x12
	cmp esi,ebp
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	lea edx,[esp+0x70]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x8C],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x88],0x13
	call get_int32
	add esp,8
	cmp word ptr [esp+0x68],8
	mov edi,eax
	mov byte ptr [esp+0x80],bl
	jne Block34

 Block32:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	cmp eax,ebp
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea ecx,[esp+0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	cmp edi,ebp
	je Block42

 Block36:
	cmp edi,1
	je Block41

 Block37:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0x84],9
	call eax
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x80],4
	cmp eax,ebp
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block39:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp eax,ebp
	je Block48

 Block40:
	add eax,0xFFFFFFF4
	push eax
	jmp Block47

 Block41:
	mov edi,dword ptr [esp+0x14]
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x28]
	call CWnd::SetAnimationBackgrnd
	jmp Block43

 Block42:
	mov edi,dword ptr [esp+0x14]
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x4C],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x34]
	call CWnd::SetBackgrnd

 Block43:
	mov ecx,dword ptr [esp+0x1C]
	call CSlideMenuDlgEX::CreateSlideMenuButton
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0x84],9
	call edx
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x80],4
	cmp eax,ebp
	je Block45

 Block44:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block45:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp edi,ebp
	je Block48

 Block46:
	add edi,0xFFFFFFF4
	push edi

 Block47:
	call ZXString16::_Release
	add esp,4

 Block48:
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
// CSlideMenuDlgEX::CreateMainButton
_SUB_EXCEPTION_HANDLER(313900)
__SUB_CLASS_THIS0(00313900, __thiscall, 52368,  CSlideMenuDlgEX, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_313900
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
	mov edi,ecx
	xor esi,esi
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x20],1
	mov dword ptr [esp+0x24],esi
	mov dword ptr [esp+0x28],esi
	mov dword ptr [esp+0x38],esi
	lea ebp,[edi+0xA8]

 Block1:
	mov ecx,dword ptr [edi+0xA0]
	mov eax,dword ptr [edi+0x98]
	lea eax,[esi+eax*8]
	test ecx,ecx
	je Block13

 Block2:
	cmp eax,dword ptr [ecx-4]
	jae Block13

 Block3:
	mov edx,dword ptr [edi+0xA0]
	lea ecx,[eax+eax*2]
	lea eax,[edx+ecx*4+4]
	push eax
	lea ecx,[esp+0x30]
	call ZXString16::op_assign
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x38],1
	test eax,eax
	je Block5

 Block4:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	mov byte ptr [esp+0x38],0
	test eax,eax
	je Block16

 Block7:
	add eax,8
	je Block16

 Block8:
	lea ebx,[eax-8]
	test ebx,ebx
	je Block10

 Block9:
	lea ecx,[ebx+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block10:
	mov eax,dword ptr [ebp]
	mov dword ptr [ebp],ebx
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block12

 Block11:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [esp+0x1C],0

 Block12:
	lea eax,[esp+0x20]
	push eax
	xor eax,eax
	cmp esi,4
	setl al
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	push 0
	dec eax
	and eax,0x34
	add eax,0x35
	push eax
	mov eax,esi
	and eax,3
	imul eax,0x34
	add eax,0x28
	push eax
	lea eax,[esi+0xBBC]
	push eax
	push edi
	call edx
	inc esi
	add ebp,8
	cmp esi,8
	jl Block1

 Block13:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block15:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret

 Block16:
	xor ebx,ebx
	jmp Block10
}
}
// CSlideMenuDlgEX::SetButtonInfo
_SUB_EXCEPTION_HANDLER(3153D0)
__SUB_CLASS_THIS(003153D0, __thiscall, 52382,  CSlideMenuDlgEX, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3153D0
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
	mov dword ptr [esp+0x1C],ecx
	mov eax,dword ptr [esp+0x50]
	push 0xFFFFFFFF
	xor edi,edi
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x50],edi
	mov dword ptr [esp+0x20],edi
	call ZXString16::AssignCharStr
	push 0xFFFFFFFF
	push offset _S___12
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x50],1
	mov dword ptr [esp+0x28],edi
	call ZXString16::AssignCharStr
	mov esi,dword ptr [esp+0x20]
	mov byte ptr [esp+0x48],2
	cmp esi,edi
	je Block2

 Block1:
	mov eax,dword ptr [esi-4]
	shr eax,1
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	push eax
	push esi
	lea ecx,[esp+0x20]
	call ZXString16::_Cat
	mov byte ptr [esp+0x48],1
	cmp esi,edi
	je Block5

 Block4:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block5:
	mov ebp,dword ptr [esp+0x18]
	xor esi,esi

 Block6:
	cmp ebp,edi
	je Block8

 Block7:
	mov eax,dword ptr [ebp-4]
	shr eax,1
	jmp Block9

 Block8:
	xor eax,eax

 Block9:
	dec eax
	cmp esi,eax
	jge Block27

 Block10:
	xor ebx,ebx
	mov dword ptr [esp+0x24],ebx
	xor eax,eax
	mov dword ptr [esp+0x20],eax
	cmp word ptr [ebp+esi*2],0x23
	mov byte ptr [esp+0x48],4
	jne Block23

 Block11:
	inc esi
	cmp word ptr [ebp+esi*2],0x23
	je Block14

 Block12:
	mov cl,byte ptr [ebp+esi*2]
	push 1
	lea edx,[esp+0x18]
	mov byte ptr [esp+0x18],cl
	push edx
	lea ecx,[esp+0x2C]
	call ZXString<char>::_Cat
	inc esi
	cmp word ptr [ebp+esi*2],0x23
	jne Block12

 Block13:
	mov ebx,dword ptr [esp+0x24]

 Block14:
	mov eax,esi
	lea ecx,[ecx]

 Block15:
	inc esi
	cmp word ptr [ebp+esi*2],0x23
	jne Block15

 Block16:
	push esi
	inc eax
	push eax
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x24]
	call ZXString16::Substring
	push eax
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x4C],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x48],4
	cmp eax,edi
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block18:
	mov dword ptr [esp+0x34],edi
	mov dword ptr [esp+0x38],edi
	push ebx
	mov byte ptr [esp+0x4C],6
	call _atoi
	add esp,4
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x40],eax
	call ZXString16::op_assign
	lea edx,[esp+0x30]
	push 0x199B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x28],edi
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [esp+0x1C]
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,dword ptr [edx+0x90]
	push ecx
	push eax
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x58],8
	call ZXString16::Format
	add esp,0x10
	push eax
	lea ecx,[esp+0x3C]
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x48],7
	cmp eax,edi
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block20:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x48],6
	cmp eax,edi
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block22:
	mov ecx,dword ptr [esp+0x1C]
	push 0xFFFFFFFF
	add ecx,0xA0
	call ZArray<CSlideMenuDlgEX::MAINBUTTONINFO>::InsertBefore
	mov edi,eax
	lea eax,[esp+0x34]
	push eax
	mov ecx,edi
	call ZXString16::op_assign
	lea ecx,[esp+0x38]
	push ecx
	lea ecx,[edi+4]
	call ZXString16::op_assign
	mov edx,dword ptr [esp+0x3C]
	lea ecx,[esp+0x34]
	mov dword ptr [edi+8],edx
	mov byte ptr [esp+0x48],4
	call CSlideMenuDlgEX::MAINBUTTONINFO::~MAINBUTTONINFO
	mov eax,dword ptr [esp+0x20]
	xor edi,edi

 Block23:
	mov byte ptr [esp+0x48],3
	cmp eax,edi
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	mov byte ptr [esp+0x48],1
	cmp ebx,edi
	je Block6

 Block26:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4
	jmp Block6

 Block27:
	mov esi,dword ptr [esp+0x1C]
	mov eax,dword ptr [esi+0xA0]
	add esi,0xA0
	cmp eax,edi
	je Block37

 Block28:
	cmp dword ptr [eax-4],edi
	je Block37

 Block29:
	mov ebx,eax
	cmp eax,edi
	je Block31

 Block30:
	mov ecx,dword ptr [eax-4]
	cmp ecx,edi
	jne Block32

 Block31:
	mov dword ptr [esp+0x20],edi
	jmp Block33

 Block32:
	lea ecx,[ecx+ecx*2]
	lea edx,[eax+ecx*4-0xC]
	mov dword ptr [esp+0x20],edx

 Block33:
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	call ZArray<CSlideMenuDlgEX::MAINBUTTONINFO>::GetNext
	mov edx,dword ptr [esp+0x20]
	mov byte ptr [esp+0x30],0
	mov ecx,dword ptr [esp+0x30]
	push ecx
	push edx
	push ebx
	push esi
	call ZSortHelper<CSlideMenuDlgEX::MAINBUTTONINFO, CSlideMenuDlgEX::CompButtonInfo>::call
	mov esi,dword ptr [esi]
	add esp,0x10
	cmp esi,edi
	jne Block35

 Block34:
	xor eax,eax
	jmp Block36

 Block35:
	mov eax,dword ptr [esi-4]

 Block36:
	mov ecx,dword ptr [esp+0x1C]
	shr eax,3
	mov dword ptr [ecx+0x9C],eax

 Block37:
	mov byte ptr [esp+0x48],0
	cmp ebp,edi
	je Block39

 Block38:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString16::_Release
	add esp,4

 Block39:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp eax,edi
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block41:
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
// CSlideMenuDlgEX::Update
__SUB_CLASS_THIS0(003134F0, __thiscall, 52368,  CSlideMenuDlgEX, void) {
__asm {

 Block0:
	push 0
	call CWnd::InvalidateRect
	ret
}
}
// CSlideMenuDlgEX::CSlideMenuDlgEX
_SUB_EXCEPTION_HANDLER(315790)
__SUB_CLASS_THIS(00315790, __thiscall, 52366,  CSlideMenuDlgEX, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_315790
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
	call CDialog::_ctor_default
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CSlideMenuDlgEX::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CSlideMenuDlgEX::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CSlideMenuDlgEX::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x90],edi
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0xA0],edi
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 8
	push 8
	lea eax,[esi+0xA4]
	push eax
	mov byte ptr [esp+0x2C],1
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xE8],edi
	mov dword ptr [esi+0xF0],edi
	mov dword ptr [esi+0xF8],edi
	mov dword ptr [esi+0x100],edi
	mov ecx,dword ptr [esp+0x20]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x1C],6
	call CSlideMenuDlgEX::SetSlideMenuDlg
	push edi
	push 1
	push 0xD9
	push 0x11C
	mov ecx,esi
	call CDialog::CreateDlg_1
	mov edx,dword ptr [esi+0x94]
	mov ecx,dword ptr [esi+edx*8+0xA8]
	cmp ecx,edi
	je Block2

 Block1:
	push 1
	call CCtrlButton::SetKeyFocus

 Block2:
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CSlideMenuDlgEX::ArrowButtonClicked
__SUB_CLASS_THIS(00313A70, __thiscall, 52383,  CSlideMenuDlgEX, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0xBB8
	push ebx
	push esi
	push edi
	mov esi,ecx
	je Block10

 Block1:
	sub eax,1
	jne Block18

 Block2:
	mov eax,dword ptr [esi+0xE8]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx
	inc dword ptr [esi+0x98]
	mov eax,dword ptr [esi+0x98]
	cmp eax,dword ptr [esi+0x9C]
	jl Block4

 Block3:
	mov eax,dword ptr [esi+0xF0]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	mov eax,dword ptr [esi+0x9C]
	mov dword ptr [esi+0x98],eax

 Block4:
	lea edi,[esi+0xA8]
	mov ebx,8
	lea esp,[esp]

 Block5:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	je Block8

 Block6:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	cmp dword ptr [edi],0
	je Block8

 Block7:
	push 0
	lea ecx,[edi-4]
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi],0

 Block8:
	add edi,8
	sub ebx,1
	jne Block5

 Block9:
	mov ecx,esi
	call CSlideMenuDlgEX::CreateMainButton
	pop edi
	pop esi
	pop ebx
	ret 4

 Block10:
	mov eax,dword ptr [esi+0xF0]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 1
	call eax
	dec dword ptr [esi+0x98]
	mov eax,dword ptr [esi+0x98]
	test eax,eax
	jg Block12

 Block11:
	mov eax,dword ptr [esi+0xE8]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	mov dword ptr [esi+0x98],0

 Block12:
	lea edi,[esi+0xA8]
	mov ebx,8

 Block13:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	je Block16

 Block14:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax
	cmp dword ptr [edi],0
	je Block16

 Block15:
	push 0
	lea ecx,[edi-4]
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi],0

 Block16:
	add edi,8
	sub ebx,1
	jne Block13

 Block17:
	mov ecx,esi
	call CSlideMenuDlgEX::CreateMainButton

 Block18:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CSlideMenuDlgEX::GetRTTI
__SUB_CLASS_THIS0(00314D50, __thiscall, 52387,  CSlideMenuDlgEX, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CSlideMenuDlgEX::ms_RTTI_CSlideMenuDlgEX
	ret
}
}
// CSlideMenuDlgEX::IsKindOf
__SUB_CLASS_THIS(00314D70, __thiscall, 52388,  CSlideMenuDlgEX, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CSlideMenuDlgEX::ms_RTTI_CSlideMenuDlgEX
	lea esp,[esp]

 Block1:
	cmp eax,ecx
	je Block4

 Block2:
	mov eax,dword ptr [eax]
	test eax,eax
	jne Block1

 Block3:
	ret 4

 Block4:
	mov eax,1
	ret 4
}
}
// CSlideMenuDlgEX::~CSlideMenuDlgEX
_SUB_EXCEPTION_HANDLER(314C50)
__SUB_CLASS_THIS0(00314C50, __thiscall, 52368,  CSlideMenuDlgEX, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_314C50
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x10],esi
	int 3// TODO: 	mov dword ptr [esi],offset CSlideMenuDlgEX::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CSlideMenuDlgEX::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CSlideMenuDlgEX::`vftable'{for `ZRefCounted'}
	lea edi,[esi+0xFC]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0xF4]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0xEC]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xE4]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 8
	push 8
	lea eax,[esi+0xA4]
	push eax
	mov byte ptr [esp+0x2C],1
	call __eh_vector_dtor_iterator
	lea ecx,[esi+0xA0]
	mov byte ptr [esp+0x1C],bl
	call ZArray<CSlideMenuDlgEX::MAINBUTTONINFO>::RemoveAll
	mov ecx,esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CDialog::~CDialog
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret
}
}
// CSlideMenuDlgEX::GetSelectResult
__SUB_CLASS_THIS0(00313680, __thiscall, 52374,  CSlideMenuDlgEX, long) {
__asm {

 Block0:
	mov edx,dword ptr [ecx+0x94]
	mov eax,dword ptr [ecx+0x98]
	lea eax,[edx+eax*8]
	mov edx,dword ptr [ecx+0xA0]
	test edx,edx
	je Block2

 Block1:
	cmp eax,dword ptr [edx-4]
	jb Block3

 Block2:
	or eax,0xFFFFFFFF
	ret

 Block3:
	lea eax,[eax+eax*2]
	mov ecx,edx
	mov eax,dword ptr [ecx+eax*4+8]
	ret
}
}
// CSlideMenuDlgEX::CreateSlideMenuButton
_SUB_EXCEPTION_HANDLER(3144D0)
__SUB_CLASS_THIS0(003144D0, __thiscall, 52368,  CSlideMenuDlgEX, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3144D0
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
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x20],1
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x28],ebx
	lea eax,[esp+0x18]
	push 0x1998
	push eax
	mov dword ptr [esp+0x40],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x14],ebx
	mov ecx,dword ptr [esi+0x90]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x44],2
	call ZXString16::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x30]
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x38],1
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x38],bl
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x38],3
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x38],bl
	cmp eax,ebx
	je Block19

 Block8:
	add eax,8
	cmp eax,ebx
	je Block19

 Block9:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block11

 Block10:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block11:
	mov eax,dword ptr [esi+0xE8]
	mov dword ptr [esi+0xE8],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block13

 Block12:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block13:
	mov ecx,dword ptr [esi+0xE8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push ebx
	push 0x59
	push 7
	push 0xBB8
	push esi
	call edx
	lea eax,[esp+0x18]
	push 0x1999
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x14],ebx
	mov ecx,dword ptr [esi+0x90]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x44],5
	call ZXString16::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x30]
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x38],4
	cmp eax,ebx
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block15:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x38],bl
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block17:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x38],6
	cmp eax,ebx
	je Block20

 Block18:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block21

 Block19:
	xor edi,edi
	jmp Block11

 Block20:
	xor eax,eax

 Block21:
	mov byte ptr [esp+0x38],bl
	cmp eax,ebx
	je Block29

 Block22:
	add eax,8
	cmp eax,ebx
	je Block29

 Block23:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block25

 Block24:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block25:
	mov eax,dword ptr [esi+0xF0]
	mov dword ptr [esi+0xF0],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block27

 Block26:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block27:
	mov ecx,dword ptr [esi+0xF0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push ebx
	push 0x59
	push 0xF2
	push 0xBB9
	push esi
	call edx
	mov eax,dword ptr [esi+0xE8]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push ebx
	call edx
	mov eax,dword ptr [esi+0xF0]
	lea ecx,[eax+4]
	mov eax,dword ptr [esi+0xA0]
	cmp eax,ebx
	jne Block30

 Block28:
	xor eax,eax
	jmp Block31

 Block29:
	xor edi,edi
	jmp Block25

 Block30:
	mov eax,dword ptr [eax-4]

 Block31:
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x1C]
	mov edi,8
	cmp edi,eax
	sbb eax,eax
	neg eax
	push eax
	call edx
	lea eax,[esp+0x18]
	push 0x199C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x14],ebx
	mov ecx,dword ptr [esi+0x90]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x44],8
	call ZXString16::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x30]
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x38],7
	cmp eax,ebx
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block33:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x38],bl
	cmp eax,ebx
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block35:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x38],9
	cmp eax,ebx
	je Block37

 Block36:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block38

 Block37:
	xor eax,eax

 Block38:
	mov byte ptr [esp+0x38],bl
	cmp eax,ebx
	je Block50

 Block39:
	add eax,8
	cmp eax,ebx
	je Block50

 Block40:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block42

 Block41:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block42:
	mov eax,dword ptr [esi+0xF8]
	mov dword ptr [esi+0xF8],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block44

 Block43:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block44:
	mov ecx,dword ptr [esi+0xF8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push ebx
	push 0xB5
	push 0x58
	push 0xBBA
	push esi
	call edx
	lea eax,[esp+0x18]
	push 0x199A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x14],ebx
	mov ecx,dword ptr [esi+0x90]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x44],0xB
	call ZXString16::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x30]
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x38],0xA
	cmp eax,ebx
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block46:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x38],bl
	cmp eax,ebx
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block48:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x38],0xC
	cmp eax,ebx
	je Block51

 Block49:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block52

 Block50:
	xor edi,edi
	jmp Block42

 Block51:
	xor eax,eax

 Block52:
	mov byte ptr [esp+0x38],bl
	cmp eax,ebx
	je Block61

 Block53:
	add eax,8
	cmp eax,ebx
	je Block61

 Block54:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block56

 Block55:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block56:
	mov eax,dword ptr [esi+0x100]
	mov dword ptr [esi+0x100],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block58

 Block57:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block58:
	mov ecx,dword ptr [esi+0x100]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push ebx
	push 0xB5
	push 0x92
	push 0xBBB
	push esi
	call edx
	mov ecx,esi
	call CSlideMenuDlgEX::CreateMainButton
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,ebx
	je Block60

 Block59:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block60:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret

 Block61:
	xor edi,edi
	jmp Block56
}
}
// InsertionSort_CSlideMenuDlgEX__MAINBUTTONINFO_CSlideMenuDlgEX__CompButtonInfo_
_SUB_EXCEPTION_HANDLER(3149A0)
__SUB(003149A0, __cdecl, 132785,  void, ZArray<CSlideMenuDlgEX::MAINBUTTONINFO>&, int32_t, int32_t, CSlideMenuDlgEX::CompButtonInfo&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3149A0
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
	xor eax,eax
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x2C],eax
	mov edi,dword ptr [esp+0x48]
	cmp edi,dword ptr [esp+0x4C]
	mov dword ptr [esp+0x3C],eax
	mov dword ptr [esp+0x1C],edi
	jg Block9

 Block1:
	mov ebx,dword ptr [esp+0x44]
	lea eax,[edi+edi*2]
	add eax,eax
	add eax,eax
	mov dword ptr [esp+0x14],eax
	jmp Block3

 Block2:
	mov eax,dword ptr [esp+0x14]

 Block3:
	mov esi,dword ptr [ebx]
	add esi,eax
	mov ebp,edi
	push esi
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x1C],ebp
	call ZXString16::op_assign
	lea eax,[esi+4]
	push eax
	lea ecx,[esp+0x30]
	call ZXString16::op_assign
	cmp edi,dword ptr [esp+0x48]
	mov ecx,dword ptr [esi+8]
	mov dword ptr [esp+0x30],ecx
	jle Block8

 Block4:
	mov ebp,dword ptr [esp+0x14]

 Block5:
	mov edx,dword ptr [ebx]
	sub esp,0xC
	mov esi,esp
	lea edi,[edx+ebp-0xC]
	mov dword ptr [esp+0x2C],esp
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x34],esi
	mov dword ptr [esi],0
	call ZXString16::op_assign
	lea eax,[edi+4]
	lea ecx,[esi+4]
	push eax
	mov byte ptr [esp+0x4C],1
	mov dword ptr [ecx],0
	call ZXString16::op_assign
	mov ecx,dword ptr [edi+8]
	mov dword ptr [esi+8],ecx
	sub esp,0xC
	mov esi,esp
	mov dword ptr [esp+0x3C],esp
	lea edx,[esp+0x40]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x58],2
	mov dword ptr [esp+0x40],esi
	mov dword ptr [esi],0
	call ZXString16::op_assign
	lea eax,[esp+0x44]
	lea ecx,[esi+4]
	push eax
	mov byte ptr [esp+0x58],3
	mov dword ptr [ecx],0
	call ZXString16::op_assign
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr [esi+8],ecx
	mov ecx,dword ptr [esp+0x68]
	mov byte ptr [esp+0x54],2
	mov byte ptr [esp+0x54],0
	call CSlideMenuDlgEX::CompButtonInfo::operator()
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [ebx]
	lea esi,[edx+ebp]
	lea edi,[esi-0xC]
	push edi
	mov ecx,esi
	call ZXString16::op_assign
	lea eax,[edi+4]
	push eax
	lea ecx,[esi+4]
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [edi+8]
	dec eax
	sub ebp,0xC
	cmp eax,dword ptr [esp+0x48]
	mov dword ptr [esi+8],ecx
	mov dword ptr [esp+0x18],eax
	jg Block5

 Block7:
	mov edi,dword ptr [esp+0x1C]
	mov ebp,dword ptr [esp+0x18]

 Block8:
	mov eax,dword ptr [ebx]
	lea edx,[ebp+ebp*2]
	lea ecx,[esp+0x28]
	lea esi,[eax+edx*4]
	push ecx
	mov ecx,esi
	call ZXString16::op_assign
	lea edx,[esp+0x2C]
	push edx
	lea ecx,[esi+4]
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x30]
	add dword ptr [esp+0x14],0xC
	inc edi
	cmp edi,dword ptr [esp+0x4C]
	mov dword ptr [esi+8],eax
	mov dword ptr [esp+0x1C],edi
	jle Block2

 Block9:
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call CSlideMenuDlgEX::MAINBUTTONINFO::~MAINBUTTONINFO
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret
}
}
// CSlideMenuDlgEX::HitTest
__SUB_CLASS_THIS(003134C0, __thiscall, 52370,  CSlideMenuDlgEX, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [esp+4]
	push esi
	mov esi,dword ptr [esp+0x10]
	push esi
	push eax
	push edx
	call CWnd::HitTest
	test eax,eax
	je Block4

 Block1:
	test esi,esi
	je Block3

 Block2:
	cmp dword ptr [esi],0
	jne Block4

 Block3:
	mov eax,2

 Block4:
	pop esi
	ret 0xC
}
}
// DownHeap_CSlideMenuDlgEX__MAINBUTTONINFO_CSlideMenuDlgEX__CompButtonInfo_
_SUB_EXCEPTION_HANDLER(314040)
__SUB(00314040, __cdecl, 132783,  void, ZArray<CSlideMenuDlgEX::MAINBUTTONINFO>&, int32_t, int32_t, int32_t, CSlideMenuDlgEX::CompButtonInfo&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_314040
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
	mov esi,dword ptr [esp+0x3C]
	mov edi,dword ptr [esp+0x44]
	mov ebx,dword ptr [esp+0x38]
	mov ecx,dword ptr [ebx]
	lea eax,[esi+edi]
	lea eax,[eax+eax*2]
	lea eax,[ecx+eax*4-0xC]
	push eax
	lea ecx,[esp+0x20]
	call CSlideMenuDlgEX::MAINBUTTONINFO::_ctor_0
	mov eax,dword ptr [esp+0x40]
	cdq
	sub eax,edx
	sar eax,1
	cmp esi,eax
	mov dword ptr [esp+0x30],0
	mov dword ptr [esp+0x38],eax
	jg Block11

 Block1:
	jmp Block5

 Block4:
	mov edi,dword ptr [esp+0x44]
	mov esi,dword ptr [esp+0x3C]

 Block5:
	lea ebp,[esi+esi]
	cmp ebp,dword ptr [esp+0x40]
	jge Block8

 Block6:
	mov eax,dword ptr [ebx]
	lea esi,[edi+ebp]
	lea esi,[esi+esi*2]
	add esi,esi
	sub esp,0xC
	add esi,esi
	add eax,esi
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push eax
	call CSlideMenuDlgEX::MAINBUTTONINFO::_ctor_0
	mov edx,dword ptr [ebx]
	sub esp,0xC
	lea esi,[edx+esi-0xC]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push esi
	mov byte ptr [esp+0x4C],1
	call CSlideMenuDlgEX::MAINBUTTONINFO::_ctor_0
	mov ecx,dword ptr [esp+0x60]
	mov byte ptr [esp+0x48],0
	call CSlideMenuDlgEX::CompButtonInfo::operator()
	test eax,eax
	je Block8

 Block7:
	inc ebp

 Block8:
	mov eax,dword ptr [ebx]
	add edi,ebp
	lea edi,[edi+edi*2]
	add edi,edi
	sub esp,0xC
	add edi,edi
	lea eax,[eax+edi-0xC]
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push eax
	call CSlideMenuDlgEX::MAINBUTTONINFO::_ctor_0
	sub esp,0xC
	mov esi,esp
	mov dword ptr [esp+0x2C],esp
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x4C],2
	mov dword ptr [esp+0x30],esi
	mov dword ptr [esi],0
	call ZXString16::op_assign
	lea edx,[esp+0x38]
	lea ecx,[esi+4]
	push edx
	mov byte ptr [esp+0x4C],3
	mov dword ptr [ecx],0
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x3C]
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr [esi+8],eax
	mov byte ptr [esp+0x48],2
	mov byte ptr [esp+0x48],0
	call CSlideMenuDlgEX::CompButtonInfo::operator()
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [esp+0x44]
	mov ecx,dword ptr [esp+0x3C]
	mov eax,dword ptr [ebx]
	add ecx,edx
	lea ecx,[ecx+ecx*2]
	lea esi,[edi+eax-0xC]
	lea edi,[eax+ecx*4-0xC]
	push esi
	mov ecx,edi
	call ZXString16::op_assign
	lea edx,[esi+4]
	push edx
	lea ecx,[edi+4]
	call ZXString16::op_assign
	cmp ebp,dword ptr [esp+0x38]
	mov eax,dword ptr [esi+8]
	mov dword ptr [edi+8],eax
	mov dword ptr [esp+0x3C],ebp
	jle Block4

 Block10:
	mov edi,dword ptr [esp+0x44]
	mov esi,dword ptr [esp+0x3C]

 Block11:
	mov edx,dword ptr [ebx]
	lea eax,[esi+edi]
	lea ecx,[eax+eax*2]
	lea esi,[edx+ecx*4-0xC]
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	call ZXString16::op_assign
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esi+4]
	call ZXString16::op_assign
	mov edx,dword ptr [esp+0x24]
	lea ecx,[esp+0x1C]
	mov dword ptr [esi+8],edx
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call CSlideMenuDlgEX::MAINBUTTONINFO::~MAINBUTTONINFO
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret
}
}
// ZSort_CSlideMenuDlgEX__MAINBUTTONINFO_CSlideMenuDlgEX__CompButtonInfo_
__SUB(00315360, __cdecl, 132787,  void, ZArray<CSlideMenuDlgEX::MAINBUTTONINFO>&, __POSITION*, __POSITION*, NakedParam<CSlideMenuDlgEX::CompButtonInfo>) {
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
	call ZArray<CSlideMenuDlgEX::MAINBUTTONINFO>::IndexOf
	push edi
	mov ecx,ebx
	mov esi,eax
	call ZArray<CSlideMenuDlgEX::MAINBUTTONINFO>::IndexOf
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
	lea eax,[esp+0x1C]
	push eax
	add ecx,ecx
	push ecx
	push edi
	push esi
	push ebx
	call IntroSortLoopHelper<CSlideMenuDlgEX::MAINBUTTONINFO, int, CSlideMenuDlgEX::CompButtonInfo>::call
	lea edx,[esp+0x30]
	push edx
	push edi
	push esi
	push ebx
	call InsertionSortHelper<CSlideMenuDlgEX::MAINBUTTONINFO, CSlideMenuDlgEX::CompButtonInfo>::call
	add esp,0x24

 Block6:
	pop esi
	pop ebx

 Block7:
	pop edi

 Block8:
	ret
}
}
// CSlideMenuDlgEX::SetSlideMenuDlg
_SUB_EXCEPTION_HANDLER(3156F0)
__SUB_CLASS_THIS(003156F0, __thiscall, 52381,  CSlideMenuDlgEX, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3156F0
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
	mov edi,dword ptr [esp+0x20]
	mov ecx,edi
	call CInPacket::Decode4
	lea eax,[esp+0x20]
	push eax
	mov ecx,edi
	call CInPacket::DecodeStr
	push ecx
	mov ecx,esp
	lea edx,[esp+0x24]
	mov dword ptr [esp+0x10],esp
	push edx
	mov dword ptr [esp+0x20],0
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call CSlideMenuDlgEX::SetButtonInfo
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CSlideMenuDlgEX::MAINBUTTONINFO::~MAINBUTTONINFO
_SUB_EXCEPTION_HANDLER(313740)
__SUB_CLASS_THIS0(00313740, __thiscall, 52407,  CSlideMenuDlgEX::MAINBUTTONINFO, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_313740
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
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
