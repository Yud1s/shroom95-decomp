#include "regen.hpp"
// CtrlTab.ipp
#include "CtrlTab.hpp"

// CCtrlTab::~CCtrlTab
_SUB_EXCEPTION_HANDLER(EE110)
__SUB_CLASS_THIS0(000EE110, __thiscall, 38098,  CCtrlTab, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_EE110
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
	int 3// TODO: 	mov dword ptr [esi],offset CCtrlTab::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCtrlTab::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCtrlTab::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0x5C]
	mov dword ptr [esp+0x14],3
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [esi+0x5C],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x60]
	test eax,eax
	je Block4

 Block3:
	mov dword ptr [esi+0x60],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0x60]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0x5C]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	lea ecx,[esi+0x48]
	mov byte ptr [esp+0x14],0
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CCtrlTab::TABINFO>::`vftable'
	call ZList<CCtrlTab::TABINFO>::RemoveAll
	mov ecx,esi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CCtrlWnd::~CCtrlWnd
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CCtrlTab::OnMouseButton
_SUB_EXCEPTION_HANDLER(EE3B0)
__SUB_CLASS_THIS(000EE3B0, __thiscall, 38100,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_EE3B0
	mov eax,dword ptr fs:[0]
	push eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	cmp dword ptr [esp+0x24],0x201
	jne Block12

 Block1:
	cmp dword ptr [esp+0x30],4
	jl Block12

 Block2:
	mov eax,dword ptr [ebp+0x50]
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block12

 Block3:
	mov esi,dword ptr [esp+0x2C]
	lea ebx,[ebp+0x44]

 Block4:
	push eax
	mov ecx,ebx
	call ZList<CCtrlTab::TABINFO>::IndexOf
	mov edi,eax
	lea eax,[esp+0x24]
	push eax
	call ZList<CCtrlTab::TABINFO>::GetNext
	mov ecx,dword ptr [eax+4]
	sub ecx,2
	add esp,4
	cmp ecx,esi
	jg Block7

 Block5:
	mov edx,dword ptr [eax+8]
	add edx,2
	cmp esi,edx
	jg Block7

 Block6:
	cmp dword ptr [eax+0x1C],0
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	jne Block4

 Block8:
	jmp Block12

 Block9:
	lea eax,[esp+0x24]
	push 0x4F7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x20],0
	call play_ui_sound
	mov eax,dword ptr [esp+0x28]
	add esp,4
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block11:
	push edi
	lea ecx,[ebp-4]
	call CCtrlTab::SetTab

 Block12:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 0x10
}
}
// CCtrlTab::RemoveAllItems
__SUB_CLASS_THIS0(000EE090, __thiscall, 38098,  CCtrlTab, void) {
__asm {

 Block0:
	xor eax,eax
	mov dword ptr [ecx+0x44],eax
	mov dword ptr [ecx+0x64],eax
	add ecx,0x48
	jmp  ZList<CCtrlTab::TABINFO>::RemoveAll
}
}
// CCtrlTab::GetTabCanvas
_SUB_EXCEPTION_HANDLER(EED50)
__SUB_CLASS_THIS(000EED50, __thiscall, 38109,  CCtrlTab, _x_com_ptr<IWzCanvas>*, _x_com_ptr<IWzCanvas>*, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_EED50
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
	mov dword ptr [esp+0x18],0
	mov dword ptr [esp+0x10],0
	mov ecx,dword ptr [ecx+0x68]
	lea eax,[esp+0x10]
	push eax
	mov edi,1
	push ecx
	mov dword ptr [esp+0x68],edi
	call CCtrlTab::GetTabBaseUOL
	add esp,8
	mov dword ptr [esp+0x14],0
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x60],2
	cmp eax,3
	ja Block40

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block5
cmp EAX, 2
je Block8
cmp EAX, 3
je Block11


 Block2:
	lea edx,[esp+0x6C]
	push 0xA86
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x70]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x6C],3
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0xC
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax-4]
	shr ecx,1
	push ecx
	push eax
	lea ecx,[esp+0x18]
	call ZXString16::_Cat
	mov eax,dword ptr [esp+0x6C]
	jmp Block15

 Block4:
	xor ecx,ecx
	push ecx
	push eax
	lea ecx,[esp+0x18]
	call ZXString16::_Cat
	mov eax,dword ptr [esp+0x6C]
	jmp Block15

 Block5:
	lea eax,[esp+0x1C]
	push 0xA87
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x70]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x6C],4
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0xC
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [eax-4]
	shr ecx,1
	push ecx
	push eax
	lea ecx,[esp+0x18]
	call ZXString16::_Cat
	mov eax,dword ptr [esp+0x1C]
	jmp Block15

 Block7:
	xor ecx,ecx
	push ecx
	push eax
	lea ecx,[esp+0x18]
	call ZXString16::_Cat
	mov eax,dword ptr [esp+0x1C]
	jmp Block15

 Block8:
	lea eax,[esp+0x20]
	push 0xA88
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x70]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x6C],5
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0xC
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax-4]
	shr ecx,1
	push ecx
	push eax
	lea ecx,[esp+0x18]
	call ZXString16::_Cat
	mov eax,dword ptr [esp+0x20]
	jmp Block15

 Block10:
	xor ecx,ecx
	push ecx
	push eax
	lea ecx,[esp+0x18]
	call ZXString16::_Cat
	mov eax,dword ptr [esp+0x20]
	jmp Block15

 Block11:
	lea eax,[esp+0x24]
	push 0xA89
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x70]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x6C],6
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0xC
	test eax,eax
	je Block13

 Block12:
	mov ecx,dword ptr [eax-4]
	shr ecx,1
	jmp Block14

 Block13:
	xor ecx,ecx

 Block14:
	push ecx
	push eax
	lea ecx,[esp+0x18]
	call ZXString16::_Cat
	mov eax,dword ptr [esp+0x24]

 Block15:
	mov byte ptr [esp+0x60],2
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block17:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
	push eax
	call esi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x64],7
	call esi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block21

 Block20:
	push eax
	call _com_issue_error

 Block21:
	mov eax,dword ptr [esp+0x10]
	push 0
	push 0
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x34]
	push edx
	push ecx
	mov dword ptr [esp+0x84],esp
	mov ecx,esp
	mov ebx,8
	push eax
	mov byte ptr [esp+0x78],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x74],9
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0x78],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x68],0xA
	call Ztl_variant_t::GetUnknown
	mov esi,dword ptr [esp+0x68]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block26

 Block24:
	cmp eax,0x80004002
	je Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	mov dword ptr [esp+0x18],edi
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x48],bx
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea eax,[esp+0x48]
	push eax
	call edi

 Block30:
	mov byte ptr [esp+0x60],7
	cmp word ptr [esp+0x28],bx
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[esp+0x28]
	push edx
	call edi

 Block34:
	mov byte ptr [esp+0x60],2
	cmp word ptr [esp+0x38],bx
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[esp+0x38]
	push ecx
	call edi

 Block38:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x60],1
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block41

 Block40:
	mov esi,dword ptr [esp+0x68]
	mov dword ptr [esi],0
	mov dword ptr [esp+0x18],edi

 Block41:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x60],0
	test eax,eax
	je Block43

 Block42:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block43:
	mov eax,esi
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x54
	ret 0xC
}
}
// CCtrlTab::GetRTTI
__SUB_CLASS_THIS0(000EE1F0, __thiscall, 38114,  CCtrlTab, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CCtrlTab::ms_RTTI_CCtrlTab
	ret
}
}
// CCtrlTab::RelocateTabPos
_SUB_EXCEPTION_HANDLER(EE7F0)
__SUB_CLASS_THIS0(000EE7F0, __thiscall, 38098,  CCtrlTab, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_EE7F0
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
	mov esi,ecx
	xor edi,edi
	mov dword ptr [esp+0x1C],edi
	mov ebx,dword ptr [esi+0x50]
	cmp ebx,edi
	je Block61

 Block1:
	mov eax,dword ptr [esi+0x44]
	push eax
	lea ecx,[esi+0x48]
	call ZList<CCtrlTab::TABINFO>::FindIndex
	mov ebp,eax
	mov eax,dword ptr [esi+0x68]
	mov ecx,8
	mov dword ptr [esp+0x2C],ebp
	cmp eax,ecx
	ja Block11

 Block2:
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block4
cmp EAX, 2
je Block5
cmp EAX, 3
je Block6
cmp EAX, 4
je Block5
cmp EAX, 5
je Block7
cmp EAX, 6
je Block8
cmp EAX, 7
je Block9
cmp EAX, 8
je Block10


 Block3:
	mov dword ptr [esp+0x18],0xD
	mov dword ptr [esp+0x14],6
	mov ecx,0xC
	jmp Block12

 Block4:
	mov dword ptr [esp+0x18],ecx
	mov ecx,4
	mov dword ptr [esp+0x14],ecx
	jmp Block12

 Block5:
	mov ecx,6
	mov dword ptr [esp+0x18],0xC
	mov dword ptr [esp+0x14],ecx
	jmp Block12

 Block6:
	mov dword ptr [esp+0x18],0xC
	mov dword ptr [esp+0x14],0xA
	mov ecx,6
	jmp Block12

 Block7:
	mov dword ptr [esp+0x18],ecx
	mov dword ptr [esp+0x14],3
	mov ecx,4
	jmp Block12

 Block8:
	mov ecx,4
	mov dword ptr [esp+0x18],9
	mov dword ptr [esp+0x14],ecx
	jmp Block12

 Block9:
	mov ecx,3
	mov dword ptr [esp+0x18],6
	mov dword ptr [esp+0x14],ecx
	jmp Block12

 Block10:
	mov ecx,dword ptr [esi+0x40]
	mov dword ptr [esp+0x18],ecx
	mov dword ptr [esp+0x14],edi
	xor ecx,ecx
	jmp Block12

 Block11:
	mov ecx,dword ptr [esp+0x2C]

 Block12:
	cmp dword ptr [esi+0x34],edi
	je Block27

 Block13:
	mov eax,dword ptr [esi+0x38]
	cmp eax,edi
	je Block16

 Block14:
	imul eax,ebx
	cmp eax,dword ptr [esi+0x1C]
	jbe Block16

 Block15:
	mov dword ptr [esi+0x38],edi

 Block16:
	mov edi,dword ptr [esi+0x38]
	test edi,edi
	je Block18

 Block17:
	lea ebp,[edi-8]
	jmp Block19

 Block18:
	mov eax,dword ptr [esi+0x1C]
	lea edx,[ebx-1]
	imul edx,dword ptr [esp+0x18]
	sub eax,edx
	sub eax,ecx
	sub eax,dword ptr [esp+0x14]
	xor edx,edx
	div ebx
	mov ebp,eax

 Block19:
	test edi,edi
	je Block21

 Block20:
	xor edi,edi
	jmp Block22

 Block21:
	mov edi,dword ptr [esi+0x1C]
	lea eax,[ecx+ebp]
	add eax,dword ptr [esp+0x14]
	imul eax,ebx
	sub edi,eax

 Block22:
	mov ebx,dword ptr [esp+0x18]
	mov eax,ebx
	cdq
	sub eax,edx
	sar eax,1
	mov dword ptr [esi+0x64],eax
	mov eax,dword ptr [esi+0x54]
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block61

 Block23:
	cmp eax,dword ptr [esi+0x54]
	jne Block25

 Block24:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [esi+0x64],ecx

 Block25:
	mov edx,dword ptr [esi+0x64]
	xor ecx,ecx
	test edi,edi
	setg cl
	mov dword ptr [eax+4],edx
	lea edx,[esp+0x1C]
	push edx
	add ecx,ebp
	add dword ptr [esi+0x64],ecx
	mov ecx,dword ptr [esi+0x64]
	mov dword ptr [eax+8],ecx
	add dword ptr [esi+0x64],ebx
	call ZList<CCtrlTab::TABINFO>::GetNext
	mov eax,dword ptr [esp+0x20]
	add esp,4
	dec edi
	test eax,eax
	jne Block23

 Block26:
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret

 Block27:
	cmp dword ptr [ebp],edi
	je Block31

 Block28:
	mov ecx,dword ptr [ebp+0x18]
	cmp ecx,edi
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	call IWzCanvas::Getwidth
	mov ebx,dword ptr [esp+0x1C]
	jmp Block36

 Block31:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	mov eax,dword ptr [ebp+0x10]
	lea edx,[esp+0x34]
	push edx
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	mov ebx,1
	push eax
	mov dword ptr [esp+0x68],edi
	mov dword ptr [esp+0x28],ebx
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x60]
	mov dword ptr [esp+0x64],ebx
	cmp ecx,edi
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	mov byte ptr [esp+0x64],0
	call IWzFont::CalcTextWidth

 Block36:
	mov ecx,dword ptr [esi+0x68]
	sub ecx,8
	neg ecx
	sbb ecx,ecx
	and ecx,4
	sub eax,ecx
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	test bl,1
	je Block41

 Block37:
	and ebx,0xFFFFFFFE
	cmp word ptr [esp+0x34],8
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	cmp eax,edi
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov eax,dword ptr [esp+0x18]
	mov edi,dword ptr [esi+0x54]
	cdq
	sub eax,edx
	sar eax,1
	mov dword ptr [esi+0x64],eax
	mov dword ptr [esp+0x24],edi
	test edi,edi
	je Block61

 Block42:
	cmp edi,dword ptr [esi+0x54]
	jne Block44

 Block43:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [esi+0x64],ecx

 Block44:
	mov edx,dword ptr [esi+0x64]
	mov dword ptr [edi+4],edx
	cmp edi,ebp
	jne Block46

 Block45:
	mov eax,dword ptr [esp+0x28]
	add dword ptr [esi+0x64],eax
	jmp Block60

 Block46:
	cmp dword ptr [edi],0
	je Block51

 Block47:
	mov ebp,dword ptr [edi+0x14]
	test ebp,ebp
	je Block29

 Block48:
	mov ecx,dword ptr [ebp]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x20]
	push edx
	push ebp
	mov dword ptr [esp+0x28],0
	call eax
	test eax,eax
	jge Block50

 Block49:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block50:
	mov eax,dword ptr [esp+0x20]
	jmp Block54

 Block51:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block32

 Block52:
	lea eax,[esp+0x44]
	push eax
	mov eax,dword ptr [edi+0xC]
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	or ebx,2
	push eax
	mov dword ptr [esp+0x68],2
	mov dword ptr [esp+0x28],ebx
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x5C]
	mov dword ptr [esp+0x64],3
	test ecx,ecx
	je Block29

 Block53:
	mov byte ptr [esp+0x64],2
	call IWzFont::CalcTextWidth

 Block54:
	mov ecx,dword ptr [esi+0x68]
	sub ecx,8
	neg ecx
	sbb ecx,ecx
	and ecx,4
	sub eax,ecx
	mov ebp,eax
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	test bl,2
	je Block59

 Block55:
	and ebx,0xFFFFFFFD
	cmp word ptr [esp+0x44],8
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block59:
	add dword ptr [esi+0x64],ebp
	mov ebp,dword ptr [esp+0x2C]

 Block60:
	mov eax,dword ptr [esi+0x64]
	mov ecx,dword ptr [esp+0x18]
	lea edx,[esp+0x24]
	mov dword ptr [edi+8],eax
	add dword ptr [esi+0x64],ecx
	push edx
	call ZList<CCtrlTab::TABINFO>::GetNext
	mov edi,dword ptr [esp+0x28]
	add esp,4
	test edi,edi
	jne Block42

 Block61:
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret
}
}
// CCtrlTab::GetTabBaseUOL
_SUB_EXCEPTION_HANDLER(EEC30)
__SUB(000EEC30, __cdecl, 38111,  void, long, ZXString16&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_EEC30
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	lea eax,[esp+8]
	push 0xA85
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov esi,dword ptr [esp+0x20]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x18],0
	call ZXString16::op_assign
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+0x1C]
	dec eax
	cmp eax,6
	ja Block12

 Block3:
	cmp EAX, 0
je Block4
cmp EAX, 1
je Block5
cmp EAX, 2
je Block6
cmp EAX, 3
je Block7
cmp EAX, 4
je Block8
cmp EAX, 5
je Block9
cmp EAX, 6
je Block10


 Block4:
	push offset _S_2
	jmp Block11

 Block5:
	push offset _S_3__1
	jmp Block11

 Block6:
	push offset _S_4__1
	jmp Block11

 Block7:
	push offset _S_5__1
	jmp Block11

 Block8:
	push offset _S_6__1
	jmp Block11

 Block9:
	push offset _S_7__1
	jmp Block11

 Block10:
	push offset _S_8__1

 Block11:
	mov ecx,esi
	call ZXString16::op_add_assign_t_0

 Block12:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CCtrlTab::OnSetFocus
__SUB_CLASS_THIS(000EE1E0, __thiscall, 38101,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CCtrlTab::TABINFO::~TABINFO
_SUB_EXCEPTION_HANDLER(EE300)
__SUB_CLASS_THIS0(000EE300, __thiscall, 38133,  CCtrlTab::TABINFO, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_EE300
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
	mov eax,dword ptr [esi+0x10]
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	mov esi,dword ptr [esi+0xC]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block8

 Block7:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
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
// CCtrlTab::CCtrlTab
_SUB_EXCEPTION_HANDLER(EE590)
__SUB_CLASS_THIS0(000EE590, __thiscall, 38096,  CCtrlTab, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_EE590
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
	mov esi,ecx
	mov dword ptr [esp+0x18],esi
	call CCtrlWnd::_ctor_default
	xor ebp,ebp
	int 3// TODO: 	mov dword ptr [esi],offset CCtrlTab::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCtrlTab::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCtrlTab::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x34],ebp
	mov dword ptr [esi+0x3C],1
	mov dword ptr [esi+0x40],ebp
	mov dword ptr [esp+0x34],ebp
	int 3// TODO: 	mov dword ptr [esi+0x48],offset ZList<CCtrlTab::TABINFO>::`vftable'
	mov dword ptr [esi+0x50],ebp
	mov dword ptr [esi+0x54],ebp
	mov dword ptr [esi+0x58],ebp
	lea edi,[esi+0x5C]
	mov dword ptr [edi],ebp
	lea ebx,[esi+0x60]
	mov dword ptr [ebx],ebp
	lea eax,[esp+0x14]
	push 0x5AF
	push eax
	mov byte ptr [esp+0x3C],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	push edi
	push eax
	mov byte ptr [esp+0x40],4
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x34],3
	cmp eax,ebp
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	lea ecx,[esp+0x14]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	push ebx
	push eax
	mov byte ptr [esp+0x40],5
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x34],3
	cmp eax,ebp
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x1C]
	push ecx
	push 0xFF677B91
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1A25
	push edx
	mov byte ptr [esp+0x4C],6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x44],7
	cmp ecx,ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov byte ptr [esp+0x44],6
	call IWzFont::Create
	mov edi,8
	mov byte ptr [esp+0x34],3
	cmp word ptr [esp+0x1C],di
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	lea ecx,[esp+0x1C]
	push ecx
	push 0xFF000000
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1A25
	push edx
	mov byte ptr [esp+0x4C],8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,dword ptr [ebx]
	mov byte ptr [esp+0x44],9
	cmp ebx,ebp
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	mov ecx,ebx
	mov byte ptr [esp+0x44],8
	call IWzFont::Create
	mov byte ptr [esp+0x34],3
	cmp word ptr [esp+0x1C],di
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov eax,esi
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
// CCtrlTab::CreateCtrl
__SUB_CLASS_THIS(000EE240, __thiscall, 38099,  CCtrlTab, void, CWnd*, uint32_t, long, long, long, long, long, void*) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CCtrlTab::RemoveAllItems
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esi+0x68],eax
	cmp eax,8
	ja Block9

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block4
cmp EAX, 3
je Block5
cmp EAX, 4
je Block4
cmp EAX, 5
je Block4
cmp EAX, 6
je Block6
cmp EAX, 7
je Block7
cmp EAX, 8
je Block8


 Block2:
	mov dword ptr [esi+0x6C],0x18
	jmp Block9

 Block3:
	mov dword ptr [esi+0x6C],0x13
	jmp Block9

 Block4:
	mov dword ptr [esi+0x6C],0x15
	jmp Block9

 Block5:
	mov dword ptr [esi+0x6C],0x1C
	jmp Block9

 Block6:
	mov dword ptr [esi+0x6C],0x14
	jmp Block9

 Block7:
	mov dword ptr [esi+0x6C],0x11
	jmp Block9

 Block8:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esi+0x6C],eax

 Block9:
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov dword ptr [esi+0x3C],ecx
	mov edx,dword ptr [eax+4]
	mov dword ptr [esi+0x40],edx

 Block11:
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x18]
	push eax
	mov eax,dword ptr [esi+0x6C]
	push eax
	mov eax,dword ptr [esp+0x1C]
	push ecx
	mov ecx,dword ptr [esp+0x18]
	push edx
	mov edx,dword ptr [esp+0x18]
	push eax
	push ecx
	push edx
	mov ecx,esi
	call CCtrlWnd::CreateCtrl
	pop esi
	ret 0x20
}
}
// CCtrlTab::Draw
_SUB_EXCEPTION_HANDLER(EF160)
__SUB_CLASS_THIS(000EF160, __thiscall, 38102,  CCtrlTab, void, long, long, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_EF160
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xCC
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xE0]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x2C],esi
	xor edi,edi
	push edi
	lea eax,[esp+0x4C]
	push eax
	mov dword ptr [esp+0x20],edi
	call CCtrlWnd::GetCanvas
	mov ecx,esi
	mov dword ptr [esp+0xE8],edi
	call CCtrlTab::RelocateTabPos
	cmp dword ptr [esi+0x50],edi
	jne Block3

 Block1:
	mov eax,dword ptr [esp+0x48]
	mov dword ptr [esp+0xE8],0xFFFFFFFF
	cmp eax,edi
	je Block134

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block134

 Block3:
	mov ebp,dword ptr [esp+0x48]
	cmp dword ptr [esi+0x3C],edi
	je Block12

 Block4:
	mov eax,3
	mov word ptr [esp+0x30],ax
	mov dword ptr [esp+0x38],0xFF
	xor ecx,ecx
	cmp dword ptr [esi+0x44],edi
	lea edx,[esp+0x24]
	sete cl
	mov byte ptr [esp+0xE8],1
	push ecx
	push edi
	push edx
	mov ecx,esi
	call CCtrlTab::GetTabCanvas
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xE8],2
	cmp ebp,edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov edx,dword ptr [esp+0xF4]
	lea ecx,[esp+0x30]
	push ecx
	push eax
	mov eax,dword ptr [esp+0xF8]
	push edx
	push eax
	mov ecx,ebp
	call IWzCanvas::Copy
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xE8],1
	cmp eax,edi
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0xE8],0
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,edi
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov esi,dword ptr [esi+0x54]
	mov dword ptr [esp+0x28],esi
	cmp esi,edi
	je Block132

 Block13:
	mov edx,dword ptr [esp+0x28]
	mov ebx,dword ptr [esp+0x2C]
	push edx
	lea ecx,[ebx+0x48]
	call ZList<CCtrlTab::TABINFO>::IndexOf
	mov esi,eax
	lea eax,[esp+0x28]
	push eax
	mov dword ptr [esp+0x20],esi
	call ZList<CCtrlTab::TABINFO>::GetNext
	add esp,4
	cmp dword ptr [ebx+0x3C],0
	mov edi,eax
	mov dword ptr [esp+0x20],edi
	je Block45

 Block14:
	cmp dword ptr [esp+0x28],0
	je Block25

 Block15:
	mov ecx,dword ptr [ebx+0x44]
	xor eax,eax
	cmp esi,ecx
	jne Block17

 Block16:
	mov eax,1

 Block17:
	inc esi
	cmp esi,ecx
	jne Block19

 Block18:
	mov eax,2

 Block19:
	mov ecx,3
	mov word ptr [esp+0x80],cx
	mov dword ptr [esp+0x88],0xFF
	push eax
	push 1
	lea edx,[esp+0x78]
	mov byte ptr [esp+0xF0],cl
	push edx
	mov ecx,ebx
	call CCtrlTab::GetTabCanvas
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xE8],4
	test ebp,ebp
	je Block5

 Block20:
	mov edx,dword ptr [esp+0xF4]
	lea ecx,[esp+0x80]
	push ecx
	push eax
	mov eax,dword ptr [edi+8]
	add eax,dword ptr [esp+0xF8]
	push edx
	push eax
	mov ecx,ebp
	call IWzCanvas::Copy
	mov eax,dword ptr [esp+0x70]
	mov byte ptr [esp+0xE8],3
	test eax,eax
	je Block22

 Block21:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block22:
	cmp word ptr [esp+0x80],8
	mov byte ptr [esp+0xE8],0
	jne Block24

 Block23:
	xor eax,eax
	mov word ptr [esp+0x80],ax
	mov eax,dword ptr [esp+0x88]
	jmp Block30

 Block24:
	lea ecx,[esp+0x80]
	push ecx
	jmp Block33

 Block25:
	mov edx,3
	mov word ptr [esp+0xA0],dx
	mov dword ptr [esp+0xA8],0xFF
	xor eax,eax
	cmp esi,dword ptr [ebx+0x44]
	lea ecx,[esp+0x78]
	sete al
	mov byte ptr [esp+0xE8],5
	push eax
	push 2
	push ecx
	mov ecx,ebx
	call CCtrlTab::GetTabCanvas
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xE8],6
	test ebp,ebp
	je Block5

 Block26:
	mov ecx,dword ptr [edi+8]
	add ecx,dword ptr [esp+0xF0]
	lea edx,[esp+0xA0]
	push edx
	push eax
	mov eax,dword ptr [esp+0xFC]
	push eax
	push ecx
	mov ecx,ebp
	call IWzCanvas::Copy
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0xE8],5
	test eax,eax
	je Block28

 Block27:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block28:
	cmp word ptr [esp+0xA0],8
	mov byte ptr [esp+0xE8],0
	jne Block32

 Block29:
	mov eax,dword ptr [esp+0xA8]
	xor ecx,ecx
	mov word ptr [esp+0xA0],cx

 Block30:
	test eax,eax
	je Block34

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block32:
	lea edx,[esp+0xA0]
	push edx

 Block33:
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov ecx,dword ptr [esp+0x1C]
	xor eax,eax
	cmp ecx,dword ptr [ebx+0x44]
	lea edx,[esp+0x24]
	sete al
	mov ecx,ebx
	push eax
	push 3
	push edx
	call CCtrlTab::GetTabCanvas
	mov esi,dword ptr [edi+4]
	cmp esi,dword ptr [edi+8]
	jge Block42

 Block35:
	mov eax,3
	mov ecx,0xFF
	mov word ptr [esp+0x30],ax
	mov dword ptr [esp+0x38],ecx
	mov edi,dword ptr [esp+0x30]
	mov edx,dword ptr [ebp]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x44]
	mov dword ptr [eax+4],edi
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [esp+0x104]
	push eax
	mov eax,dword ptr [esp+0x104]
	push ecx
	lea ecx,[esi+eax]
	push ecx
	push ebp
	mov byte ptr [esp+0x108],8
	call edx
	test eax,eax
	jge Block37

 Block36:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block37:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0xE8],7
	jne Block40

 Block38:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov edi,dword ptr [esp+0x20]
	inc esi
	cmp esi,dword ptr [edi+8]
	jl Block35

 Block42:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xE8],0
	test eax,eax
	je Block44

 Block43:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block44:
	mov esi,dword ptr [esp+0x1C]

 Block45:
	mov eax,dword ptr [edi+8]
	sub eax,dword ptr [edi+4]
	cmp dword ptr [edi],0
	mov dword ptr [esp+0x40],eax
	je Block79

 Block46:
	lea eax,[edi+0x18]
	cmp esi,dword ptr [ebx+0x44]
	je Block48

 Block47:
	lea eax,[edi+0x14]

 Block48:
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x7C],esi
	test esi,esi
	je Block50

 Block49:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block50:
	mov eax,dword ptr [ebx+0x68]
	cmp eax,8
	jne Block60

 Block51:
	mov eax,3
	mov word ptr [esp+0x4C],ax
	mov dword ptr [esp+0x54],0xFF
	mov byte ptr [esp+0xE8],0xA
	test esi,esi
	je Block5

 Block52:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x20]
	push edx
	push esi
	mov dword ptr [esp+0x28],0
	call eax
	test eax,eax
	jge Block54

 Block53:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block54:
	test ebp,ebp
	je Block5

 Block55:
	mov eax,dword ptr [ebx+0x6C]
	mov ebx,dword ptr [esp+0x4C]
	sub eax,dword ptr [esp+0x20]
	mov edx,dword ptr [edi+4]
	add eax,dword ptr [esp+0xF4]
	add edx,dword ptr [esp+0xF0]
	mov edi,dword ptr [ebp]
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [ecx],ebx
	mov ebx,dword ptr [esp+0x60]
	mov dword ptr [ecx+4],ebx
	mov ebx,dword ptr [esp+0x64]
	push esi
	mov dword ptr [ecx+8],ebx
	mov ebx,dword ptr [esp+0x6C]
	push eax
	push edx
	mov dword ptr [ecx+0xC],ebx
	mov ecx,dword ptr [edi+0x80]
	push ebp
	call ecx
	test eax,eax
	jge Block57

 Block56:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block57:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0xE8],9
	jne Block59

 Block58:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	jmp Block74

 Block59:
	lea eax,[esp+0x4C]
	push eax
	jmp Block77

 Block60:
	mov ecx,3
	mov word ptr [esp+0x5C],cx
	mov dword ptr [esp+0x64],0xFF
	mov byte ptr [esp+0xE8],0xB
	test eax,eax
	je Block63

 Block61:
	cmp eax,ecx
	je Block63

 Block62:
	sub eax,5
	neg eax
	sbb eax,eax
	and eax,ecx
	dec eax
	mov ebx,eax
	jmp Block64

 Block63:
	xor ebx,ebx

 Block64:
	test esi,esi
	je Block5

 Block65:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x1C]
	push eax
	push esi
	mov dword ptr [esp+0x24],0
	call ecx
	test eax,eax
	jge Block67

 Block66:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block67:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x40]
	mov edi,dword ptr [esp+0x1C]
	lea eax,[esp+0x14]
	push eax
	push esi
	mov dword ptr [esp+0x1C],0
	call ecx
	test eax,eax
	jge Block69

 Block68:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block69:
	test ebp,ebp
	je Block5

 Block70:
	mov edx,dword ptr [esp+0x2C]
	mov eax,dword ptr [edx+0x6C]
	cdq
	sub eax,edx
	mov ecx,eax
	mov eax,dword ptr [esp+0x40]
	cdq
	sub eax,edx
	mov edx,dword ptr [esp+0x20]
	shr edi,1
	sar ecx,1
	sub ecx,edi
	mov edi,dword ptr [esp+0x14]
	sar eax,1
	sub esp,0x10
	add ecx,ebx
	mov ebx,dword ptr [esp+0x6C]
	add ecx,dword ptr [esp+0x104]
	shr edi,1
	sub eax,edi
	add eax,dword ptr [edx+4]
	mov edi,dword ptr [ebp]
	add eax,dword ptr [esp+0x100]
	mov edx,esp
	mov dword ptr [edx],ebx
	mov ebx,dword ptr [esp+0x70]
	mov dword ptr [edx+4],ebx
	mov ebx,dword ptr [esp+0x74]
	push esi
	push ecx
	mov dword ptr [edx+8],ebx
	mov ebx,dword ptr [esp+0x80]
	push eax
	mov eax,dword ptr [edi+0x80]
	push ebp
	mov dword ptr [edx+0xC],ebx
	call eax
	test eax,eax
	jge Block72

 Block71:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block72:
	cmp word ptr [esp+0x5C],8
	mov byte ptr [esp+0xE8],9
	jne Block76

 Block73:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx

 Block74:
	test eax,eax
	je Block78

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0xEC],0
	call ecx
	jmp Block131

 Block76:
	lea edx,[esp+0x5C]
	push edx

 Block77:
	call dword ptr [ZImports::_VariantClear]

 Block78:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0xEC],0
	call ecx
	jmp Block131

 Block79:
	lea eax,[edi+0x10]
	cmp esi,dword ptr [ebx+0x44]
	je Block81

 Block80:
	lea eax,[edi+0xC]

 Block81:
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],0
	call ZXString16::op_assign
	mov byte ptr [esp+0xE8],0xC
	lea eax,[ebx+0x60]
	cmp esi,dword ptr [ebx+0x44]
	je Block83

 Block82:
	lea eax,[ebx+0x5C]

 Block83:
	mov ebx,dword ptr [eax]
	mov dword ptr [esp+0x7C],ebx
	test ebx,ebx
	je Block85

 Block84:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+4]
	push ebx
	call eax

 Block85:
	lea ecx,[esp+0xC0]
	push ecx
	mov byte ptr [esp+0xEC],0xD
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0xC0]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block135

 Block86:
	mov ecx,dword ptr [esp+0x40]
	mov edi,dword ptr [esp+0x14]
	lea eax,[esp+0xC0]
	push eax
	add ecx,4
	push ecx
	push ecx
	mov dword ptr [esp+0x50],esp
	mov ecx,esp
	push edi
	mov byte ptr [esp+0xF8],0xE
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xF4],0xF
	test ebx,ebx
	je Block5

 Block87:
	mov ecx,ebx
	mov byte ptr [esp+0xF4],0xE
	call IWzFont::CalcLongestText
	cmp word ptr [esp+0xC0],8
	mov esi,eax
	mov byte ptr [esp+0xE8],0xD
	jne Block90

 Block88:
	mov eax,dword ptr [esp+0xC8]
	xor edx,edx
	mov word ptr [esp+0xC0],dx
	test eax,eax
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea eax,[esp+0xC0]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block91:
	lea ecx,[esp+0x90]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x90]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block135

 Block92:
	mov byte ptr [esp+0xE8],0x10
	test edi,edi
	je Block94

 Block93:
	mov eax,dword ptr [edi-4]
	shr eax,1
	jmp Block95

 Block94:
	xor eax,eax

 Block95:
	cmp esi,eax
	jge Block97

 Block96:
	push esi
	lea eax,[esp+0x70]
	push eax
	lea ecx,[esp+0x1C]
	call ZXString16::Left
	or dword ptr [esp+0x18],1
	mov byte ptr [esp+0xE8],0x11
	jmp Block98

 Block97:
	lea eax,[esp+0x14]

 Block98:
	mov eax,dword ptr [eax]
	lea ecx,[esp+0x90]
	push ecx
	push ecx
	mov dword ptr [esp+0x4C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov dword ptr [esp+0xF0],0x12
	mov ecx,ebx
	mov byte ptr [esp+0xF0],0x11
	call IWzFont::CalcTextWidth
	test byte ptr [esp+0x18],1
	mov edi,eax
	mov dword ptr [esp+0xE8],0x10
	je Block101

 Block99:
	mov eax,dword ptr [esp+0x6C]
	and dword ptr [esp+0x18],0xFFFFFFFE
	test eax,eax
	je Block101

 Block100:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block101:
	cmp word ptr [esp+0x90],8
	mov byte ptr [esp+0xE8],0xD
	jne Block104

 Block102:
	mov eax,dword ptr [esp+0x98]
	xor edx,edx
	mov word ptr [esp+0x90],dx
	test eax,eax
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea eax,[esp+0x90]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block105:
	test esi,esi
	je Block129

 Block106:
	lea ecx,[esp+0xD0]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0xD0]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block135

 Block107:
	lea eax,[esp+0xB0]
	push eax
	mov byte ptr [esp+0xEC],0x13
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0xB0]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block135

 Block108:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xE8],0x14
	test eax,eax
	je Block110

 Block109:
	mov eax,dword ptr [eax-4]
	shr eax,1
	jmp Block111

 Block110:
	xor eax,eax

 Block111:
	cmp esi,eax
	jge Block113

 Block112:
	push esi
	lea edx,[esp+0x78]
	push edx
	lea ecx,[esp+0x1C]
	call ZXString16::Left
	or dword ptr [esp+0x18],2
	mov byte ptr [esp+0xE8],0x15
	jmp Block114

 Block113:
	lea eax,[esp+0x14]

 Block114:
	mov ecx,dword ptr [esp+0x2C]
	mov edx,dword ptr [esp+0x1C]
	mov esi,dword ptr [ecx+0x6C]
	cmp edx,dword ptr [ecx+0x44]
	jne Block116

 Block115:
	sub esi,0x10
	jmp Block117

 Block116:
	sub esi,0xF

 Block117:
	mov eax,dword ptr [eax]
	lea ecx,[esp+0xD0]
	push ecx
	lea edx,[esp+0xB4]
	push edx
	push ebx
	push ecx
	mov dword ptr [esp+0x54],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov dword ptr [esp+0xF8],0x16
	test ebp,ebp
	je Block5

 Block118:
	mov eax,dword ptr [esp+0x104]
	add esi,eax
	mov eax,edi
	cdq
	sub eax,edx
	mov ecx,eax
	mov eax,dword ptr [esp+0x50]
	cdq
	sub eax,edx
	mov edx,dword ptr [esp+0x30]
	sar eax,1
	sar ecx,1
	sub eax,ecx
	add eax,dword ptr [edx+4]
	push esi
	add eax,dword ptr [esp+0x104]
	mov ecx,ebp
	push eax
	mov byte ptr [esp+0x100],0x15
	call IWzCanvas::DrawTextA
	test byte ptr [esp+0x18],2
	mov dword ptr [esp+0xE8],0x14
	je Block121

 Block119:
	mov eax,dword ptr [esp+0x74]
	and dword ptr [esp+0x18],0xFFFFFFFD
	test eax,eax
	je Block121

 Block120:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block121:
	mov esi,8
	mov byte ptr [esp+0xE8],0x13
	cmp word ptr [esp+0xB0],si
	jne Block124

 Block122:
	xor eax,eax
	mov word ptr [esp+0xB0],ax
	mov eax,dword ptr [esp+0xB8]
	test eax,eax
	je Block125

 Block123:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block125

 Block124:
	lea ecx,[esp+0xB0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block125:
	mov byte ptr [esp+0xE8],0xD
	cmp word ptr [esp+0xD0],si
	jne Block128

 Block126:
	mov eax,dword ptr [esp+0xD8]
	xor edx,edx
	mov word ptr [esp+0xD0],dx
	test eax,eax
	je Block129

 Block127:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block129

 Block128:
	lea eax,[esp+0xD0]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block129:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov byte ptr [esp+0xEC],0xC
	call edx
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xE8],0
	test eax,eax
	je Block131

 Block130:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block131:
	cmp dword ptr [esp+0x28],0
	jne Block13

 Block132:
	mov dword ptr [esp+0xE8],0xFFFFFFFF
	test ebp,ebp
	je Block134

 Block133:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block134:
	mov ecx,dword ptr [esp+0xE0]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xD8
	ret 0xC

 Block135:
	push eax
	call _com_issue_error
}
}
// CCtrlTab::AddItem_Canvas
_SUB_EXCEPTION_HANDLER(EFC40)
__SUB_CLASS_THIS(000EFC40, __thiscall, 38105,  CCtrlTab, void, NakedParam<_x_com_ptr<IWzCanvas>>, NakedParam<_x_com_ptr<IWzCanvas>>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_EFC40
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	add ecx,0x48
	mov dword ptr [esp+0x14],1
	call ZList<CCtrlTab::TABINFO>::AddTail_
	mov esi,eax
	mov dword ptr [esi],1
	mov edi,dword ptr [esi+0x14]
	mov eax,dword ptr [esp+0x1C]
	cmp edi,eax
	je Block5

 Block1:
	mov dword ptr [esi+0x14],eax
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
	cmp dword ptr [esp+0x20],0
	lea eax,[esp+0x20]
	jne Block7

 Block6:
	lea eax,[esp+0x1C]

 Block7:
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x18]
	cmp edi,eax
	je Block12

 Block8:
	mov dword ptr [esi+0x18],eax
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block10:
	test edi,edi
	je Block12

 Block11:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block12:
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esi+4],0
	mov dword ptr [esi+8],0
	mov dword ptr [esi+0x1C],eax
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 0xC
}
}
// CCtrlTab::IsKindOf
__SUB_CLASS_THIS(000EE210, __thiscall, 38115,  CCtrlTab, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CCtrlTab::ms_RTTI_CCtrlTab
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
// CCtrlTab::SetTab
__SUB_CLASS_THIS(000EDE60, __thiscall, 38107,  CCtrlTab, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	test eax,eax
	jl Block3

 Block1:
	cmp eax,dword ptr [esi+0x50]
	jge Block3

 Block2:
	mov dword ptr [esi+0x44],eax
	call CCtrlWnd::InvalidateRect
	mov edx,dword ptr [esi+0x44]
	mov ecx,dword ptr [esi+0x24]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x1C]
	push edx
	mov edx,dword ptr [esi+0x14]
	push 0x1F4
	push edx
	call eax

 Block3:
	pop esi
	ret 4
}
}
