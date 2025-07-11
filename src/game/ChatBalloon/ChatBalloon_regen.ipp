#include "regen.hpp"
// ChatBalloon.ipp
#include "ChatBalloon.hpp"

// CChatBalloon::~CChatBalloon
_SUB_EXCEPTION_HANDLER(A2BF0)
__SUB_CLASS_THIS0(000A2BF0, __thiscall, 23464,  CChatBalloon, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_A2BF0
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
	int 3// TODO: 	mov dword ptr [esi],offset CChatBalloon::`vftable'
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 4
	push 4
	lea eax,[esi+0x1C]
	push eax
	mov dword ptr [esp+0x24],5
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0x18]
	mov byte ptr [esp+0x14],4
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x14]
	mov byte ptr [esp+0x14],3
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0x10]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0xC]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+8]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov esi,dword ptr [esi+4]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block12

 Block11:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block12:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CChatBalloon::MakeADBoardBalloon
_SUB_EXCEPTION_HANDLER(A99B0)
__SUB_CLASS_THIS(000A99B0, __thiscall, 23477,  CChatBalloon, void, NakedParam<Ztl_bstr_t>, NakedParam<_x_com_ptr<IWzGr2DLayer>>, NakedParam<_x_com_ptr<IWzVector2D>>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_A99B0
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
	push 0
	push 0
	push 0
	push 0
	push 0x3EB
	push 0
	push ecx
	mov ecx,dword ptr [esp+0x40]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x30],2
	mov dword ptr [esp+0x24],esp
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	push ecx
	mov ecx,dword ptr [esp+0x40]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x28],esp
	test eax,eax
	je Block4

 Block3:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block4:
	push ecx
	mov ecx,dword ptr [esp+0x40]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x2C],esp
	test eax,eax
	je Block6

 Block5:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	mov ecx,esi
	call CChatBalloon::MakeBalloon
	cmp dword ptr [esp+0x28],0
	je Block8

 Block7:
	xor ecx,ecx
	push ecx
	xor eax,eax
	push eax
	mov ecx,esi
	call CChatBalloon::ADBoardMouseMove

 Block8:
	mov ecx,dword ptr [esp+0x1C]
	test ecx,ecx
	je Block10

 Block9:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x1C],0

 Block10:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block12

 Block11:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block12:
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 0x10
}
}
// CChatBalloon::SetFadeDelay
__SUB_CLASS_THIS(000A1200, __thiscall, 23480,  CChatBalloon, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	xor edx,edx
	test eax,eax
	setl dl
	dec edx
	and edx,eax
	mov dword ptr [ecx+0x64],edx
	ret 4
}
}
// CChatBalloon::ADBoardMouseDown
_SUB_EXCEPTION_HANDLER(A1F00)
__SUB_CLASS_THIS(000A1F00, __thiscall, 23478,  CChatBalloon, void, NakedParam<tagPOINT>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_A1F00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor edi,edi
	cmp dword ptr [esi+8],edi
	sete al
	test al,al
	jne Block15

 Block1:
	mov eax,dword ptr [esp+0x44]
	mov ecx,dword ptr [esp+0x40]
	push eax
	push ecx
	mov ecx,esi
	call CChatBalloon::MousePointCheck
	test eax,eax
	je Block15

 Block2:
	mov edx,3
	mov dword ptr [esi+0x3C],1
	mov word ptr [esp+0x10],dx
	mov dword ptr [esp+0x18],edi
	mov ecx,dword ptr [esi+8]
	mov dword ptr [esp+0x38],edi
	cmp ecx,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea eax,[esp+0x10]
	push eax
	lea edx,[esp+0x10]
	push edx
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x10],8
	mov byte ptr [esp+0x38],2
	jne Block7

 Block5:
	xor eax,eax
	mov word ptr [esp+0x10],ax
	mov eax,dword ptr [esp+0x18]
	cmp eax,edi
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea ecx,[esp+0x10]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block8:
	mov edx,3
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],0xFD
	mov edi,dword ptr [esp+0xC]
	mov eax,dword ptr [esi+0x20]
	mov byte ptr [esp+0x38],dl
	test edi,edi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov edx,dword ptr [esi+0x38]
	lea ecx,[esp+0x20]
	push ecx
	push eax
	mov eax,dword ptr [esi+0x34]
	push edx
	push eax
	mov ecx,edi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x38],2
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call ecx

 Block15:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x30
	ret 8
}
}
// CChatBalloon::ADBoardMouseUp
__SUB_CLASS_THIS(000A1850, __thiscall, 23479,  CChatBalloon, int32_t, NakedParam<tagPOINT>) {
__asm {

 Block0:
	cmp dword ptr [ecx+8],0
	je Block3

 Block1:
	cmp dword ptr [ecx+0x3C],0
	je Block3

 Block2:
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [esp+4]
	push eax
	push edx
	mov dword ptr [ecx+0x3C],0
	call CChatBalloon::MousePointCheck
	ret 8

 Block3:
	xor eax,eax
	ret 8
}
}
// CChatBalloon::CreateCanvas
_SUB_EXCEPTION_HANDLER(A59D0)
__SUB_CLASS_THIS(000A59D0, __thiscall, 23483,  CChatBalloon, _x_com_ptr<IWzCanvas>*, _x_com_ptr<IWzCanvas>*, NakedParam<Ztl_bstr_t>, uint32_t, NakedParam<_x_com_ptr<IWzProperty>>, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_A59D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x184
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x198]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x84],ecx
	xor ebp,ebp
	mov dword ptr [esp+0xE4],ebp
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x5A0
	push eax
	mov dword ptr [esp+0x1B4],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C0]
	mov byte ptr [esp+0x1AC],3
	cmp ecx,ebp
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x124]
	push edx
	mov byte ptr [esp+0x1B0],2
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x1A8],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x84]
	mov dword ptr [esp+0x84],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov bl,6
	mov byte ptr [esp+0x1A0],bl
	cmp word ptr [esp+0x118],si
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [esp+0x118],ax
	mov eax,dword ptr [esp+0x120]
	cmp eax,ebp
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[esp+0x118]
	push ecx
	call edi

 Block9:
	push ebp
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x5A1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C0]
	mov byte ptr [esp+0x1AC],7
	cmp ecx,ebp
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea eax,[esp+0x194]
	push eax
	mov byte ptr [esp+0x1B0],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x1A8],8
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x9C]
	mov dword ptr [esp+0x9C],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block14

 Block12:
	cmp eax,0x80004002
	je Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	mov bl,0xA
	mov byte ptr [esp+0x1A0],bl
	cmp word ptr [esp+0x188],si
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x190]
	xor ecx,ecx
	mov word ptr [esp+0x188],cx
	cmp eax,ebp
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea edx,[esp+0x188]
	push edx
	call edi

 Block18:
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x5A2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C0]
	mov byte ptr [esp+0x1AC],0xB
	cmp ecx,ebp
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea edx,[esp+0x184]
	push edx
	mov byte ptr [esp+0x1B0],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x1A8],0xC
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0xB4]
	mov dword ptr [esp+0xB4],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block23

 Block21:
	cmp eax,0x80004002
	je Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	mov byte ptr [esp+0x1A0],0xE
	cmp word ptr [esp+0x178],si
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [esp+0x178],ax
	mov eax,dword ptr [esp+0x180]
	cmp eax,ebp
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea ecx,[esp+0x178]
	push ecx
	call edi

 Block27:
	push ebp
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x5A4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C0]
	mov byte ptr [esp+0x1AC],0xF
	cmp ecx,ebp
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	lea eax,[esp+0xF4]
	push eax
	mov byte ptr [esp+0x1B0],0xE
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x1A8],0x10
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0xA4]
	mov dword ptr [esp+0xA4],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block32

 Block30:
	cmp eax,0x80004002
	je Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	mov bl,0x12
	mov byte ptr [esp+0x1A0],bl
	cmp word ptr [esp+0xE8],si
	jne Block35

 Block33:
	mov eax,dword ptr [esp+0xF0]
	xor ecx,ecx
	mov word ptr [esp+0xE8],cx
	cmp eax,ebp
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea edx,[esp+0xE8]
	push edx
	call edi

 Block36:
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x5A5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C0]
	mov byte ptr [esp+0x1AC],0x13
	cmp ecx,ebp
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea edx,[esp+0x164]
	push edx
	mov byte ptr [esp+0x1B0],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x1A8],0x14
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0xD0]
	mov dword ptr [esp+0xD0],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block41

 Block39:
	cmp eax,0x80004002
	je Block41

 Block40:
	push eax
	call _com_issue_error

 Block41:
	mov bl,0x16
	mov byte ptr [esp+0x1A0],bl
	cmp word ptr [esp+0x158],si
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [esp+0x158],ax
	mov eax,dword ptr [esp+0x160]
	cmp eax,ebp
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[esp+0x158]
	push ecx
	call edi

 Block45:
	push ebp
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x5A3
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C0]
	mov byte ptr [esp+0x1AC],0x17
	cmp ecx,ebp
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	lea eax,[esp+0x144]
	push eax
	mov byte ptr [esp+0x1B0],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x1A8],0x18
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0xB8]
	mov dword ptr [esp+0xB8],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block50

 Block48:
	cmp eax,0x80004002
	je Block50

 Block49:
	push eax
	call _com_issue_error

 Block50:
	mov bl,0x1A
	mov byte ptr [esp+0x1A0],bl
	cmp word ptr [esp+0x138],si
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x140]
	xor ecx,ecx
	mov word ptr [esp+0x138],cx
	cmp eax,ebp
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[esp+0x138]
	push edx
	call edi

 Block54:
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x5A6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C0]
	mov byte ptr [esp+0x1AC],0x1B
	cmp ecx,ebp
	jne Block56

 Block55:
	push 0x80004003
	call _com_issue_error

 Block56:
	lea edx,[esp+0x104]
	push edx
	mov byte ptr [esp+0x1B0],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x1A8],0x1C
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x64]
	mov dword ptr [esp+0x64],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block59

 Block57:
	cmp eax,0x80004002
	je Block59

 Block58:
	push eax
	call _com_issue_error

 Block59:
	mov bl,0x1E
	mov byte ptr [esp+0x1A0],bl
	cmp word ptr [esp+0xF8],si
	jne Block62

 Block60:
	xor eax,eax
	mov word ptr [esp+0xF8],ax
	mov eax,dword ptr [esp+0x100]
	cmp eax,ebp
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea ecx,[esp+0xF8]
	push ecx
	call edi

 Block63:
	push ebp
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x5A7
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C0]
	mov byte ptr [esp+0x1AC],0x1F
	cmp ecx,ebp
	jne Block65

 Block64:
	push 0x80004003
	call _com_issue_error

 Block65:
	lea eax,[esp+0x114]
	push eax
	mov byte ptr [esp+0x1B0],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x1A8],0x20
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0xBC]
	mov dword ptr [esp+0xBC],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block68

 Block66:
	cmp eax,0x80004002
	je Block68

 Block67:
	push eax
	call _com_issue_error

 Block68:
	mov bl,0x22
	mov byte ptr [esp+0x1A0],bl
	cmp word ptr [esp+0x108],si
	jne Block71

 Block69:
	mov eax,dword ptr [esp+0x110]
	xor ecx,ecx
	mov word ptr [esp+0x108],cx
	cmp eax,ebp
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea edx,[esp+0x108]
	push edx
	call edi

 Block72:
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x1AD4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C0]
	mov byte ptr [esp+0x1AC],0x23
	cmp ecx,ebp
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	lea edx,[esp+0x134]
	push edx
	mov byte ptr [esp+0x1B0],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x1A8],0x24
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0xAC]
	mov dword ptr [esp+0xAC],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block77

 Block75:
	cmp eax,0x80004002
	je Block77

 Block76:
	push eax
	call _com_issue_error

 Block77:
	mov bl,0x26
	mov byte ptr [esp+0x1A0],bl
	cmp word ptr [esp+0x128],si
	jne Block80

 Block78:
	xor eax,eax
	mov word ptr [esp+0x128],ax
	mov eax,dword ptr [esp+0x130]
	cmp eax,ebp
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea ecx,[esp+0x128]
	push ecx
	call edi

 Block81:
	push ebp
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x5A8
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C0]
	mov byte ptr [esp+0x1AC],0x27
	cmp ecx,ebp
	jne Block83

 Block82:
	push 0x80004003
	call _com_issue_error

 Block83:
	lea eax,[esp+0x154]
	push eax
	mov byte ptr [esp+0x1B0],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x1A8],0x28
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0xB0]
	mov dword ptr [esp+0xB0],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block86

 Block84:
	cmp eax,0x80004002
	je Block86

 Block85:
	push eax
	call _com_issue_error

 Block86:
	mov bl,0x2A
	mov byte ptr [esp+0x1A0],bl
	cmp word ptr [esp+0x148],si
	jne Block89

 Block87:
	mov eax,dword ptr [esp+0x150]
	xor ecx,ecx
	mov word ptr [esp+0x148],cx
	cmp eax,ebp
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea edx,[esp+0x148]
	push edx
	call edi

 Block90:
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x1AB4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C0]
	mov byte ptr [esp+0x1AC],0x2B
	cmp ecx,ebp
	jne Block92

 Block91:
	push 0x80004003
	call _com_issue_error

 Block92:
	lea edx,[esp+0x174]
	push edx
	mov byte ptr [esp+0x1B0],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x1A8],0x2C
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0xA8]
	mov dword ptr [esp+0xA8],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block95

 Block93:
	cmp eax,0x80004002
	je Block95

 Block94:
	push eax
	call _com_issue_error

 Block95:
	mov byte ptr [esp+0x1A0],0x2E
	cmp word ptr [esp+0x168],si
	jne Block98

 Block96:
	xor eax,eax
	mov word ptr [esp+0x168],ax
	mov eax,dword ptr [esp+0x170]
	cmp eax,ebp
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea ecx,[esp+0x168]
	push ecx
	call edi

 Block99:
	mov esi,dword ptr [esp+0x60]
	cmp esi,ebp
	jne Block101

 Block100:
	push 0x80004003
	call _com_issue_error

 Block101:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x6C]
	lea eax,[esp+0x3C]
	push eax
	push esi
	mov dword ptr [esp+0x44],ebp
	call ecx
	cmp eax,ebp
	jge Block103

 Block102:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block103:
	mov edi,dword ptr [esp+0x80]
	mov esi,dword ptr [esp+0x3C]
	cmp edi,ebp
	jne Block105

 Block104:
	push 0x80004003
	call _com_issue_error

 Block105:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x6C]
	lea eax,[esp+0x24]
	push eax
	push edi
	mov dword ptr [esp+0x2C],ebp
	call ecx
	cmp eax,ebp
	jge Block107

 Block106:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block107:
	mov eax,dword ptr [esp+0x24]
	cmp esi,eax
	jge Block109

 Block108:
	mov esi,eax

 Block109:
	mov edi,dword ptr [esp+0xA0]
	cmp edi,ebp
	jne Block111

 Block110:
	push 0x80004003
	call _com_issue_error

 Block111:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x6C]
	lea eax,[esp+0x78]
	push eax
	push edi
	mov dword ptr [esp+0x80],ebp
	call ecx
	cmp eax,ebp
	jge Block113

 Block112:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block113:
	mov eax,dword ptr [esp+0x78]
	cmp esi,eax
	mov dword ptr [esp+0x54],eax
	jl Block115

 Block114:
	mov dword ptr [esp+0x54],esi

 Block115:
	mov esi,dword ptr [esp+0x98]
	cmp esi,ebp
	jne Block117

 Block116:
	push 0x80004003
	call _com_issue_error

 Block117:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x78]
	push eax
	push esi
	mov dword ptr [esp+0x80],ebp
	call ecx
	cmp eax,ebp
	jge Block119

 Block118:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block119:
	mov esi,dword ptr [esp+0xA8]
	cmp esi,ebp
	jne Block121

 Block120:
	push 0x80004003
	call _com_issue_error

 Block121:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x3C]
	push eax
	push esi
	mov dword ptr [esp+0x44],ebp
	call ecx
	cmp eax,ebp
	jge Block123

 Block122:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block123:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x6C]
	mov edi,dword ptr [esp+0x3C]
	lea eax,[esp+0x24]
	push eax
	push esi
	mov dword ptr [esp+0x2C],ebp
	call ecx
	cmp eax,ebp
	jge Block125

 Block124:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block125:
	mov ebp,dword ptr [esp+0xB0]
	mov ebx,dword ptr [esp+0x24]
	test ebp,ebp
	jne Block127

 Block126:
	push 0x80004003
	call _com_issue_error

 Block127:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x44]
	push eax
	push ebp
	mov dword ptr [esp+0x4C],0
	call ecx
	test eax,eax
	jge Block129

 Block128:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block129:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x6C]
	mov esi,dword ptr [esp+0x44]
	lea eax,[esp+0x48]
	push eax
	push ebp
	mov dword ptr [esp+0x50],0
	call ecx
	test eax,eax
	jge Block131

 Block130:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block131:
	sub esi,dword ptr [esp+0x48]
	sub edi,ebx
	mov eax,edi
	mov ebx,esi
	cmp eax,esi
	jb Block133

 Block132:
	mov ebx,eax

 Block133:
	mov esi,dword ptr [esp+0xB4]
	test esi,esi
	jne Block135

 Block134:
	push 0x80004003
	call _com_issue_error

 Block135:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x5C]
	push eax
	push esi
	mov dword ptr [esp+0x64],0
	call ecx
	test eax,eax
	jge Block137

 Block136:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block137:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x6C]
	mov edi,dword ptr [esp+0x5C]
	lea eax,[esp+0x58]
	push eax
	push esi
	mov dword ptr [esp+0x60],0
	call ecx
	test eax,eax
	jge Block139

 Block138:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block139:
	sub edi,dword ptr [esp+0x58]
	mov dword ptr [esp+0x58],edi
	cmp ebx,edi
	jb Block141

 Block140:
	mov dword ptr [esp+0x58],ebx

 Block141:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x74]
	lea eax,[esp+0x3C]
	push eax
	push ebp
	mov dword ptr [esp+0x44],0
	call ecx
	test eax,eax
	jge Block143

 Block142:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block143:
	mov edi,dword ptr [esp+0x80]
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x74]
	mov esi,dword ptr [esp+0x3C]
	lea eax,[esp+0x24]
	push eax
	xor ebp,ebp
	push edi
	mov dword ptr [esp+0x2C],ebp
	call ecx
	cmp eax,ebp
	jge Block145

 Block144:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block145:
	mov eax,dword ptr [esp+0x24]
	cmp esi,eax
	jge Block147

 Block146:
	mov esi,eax

 Block147:
	mov edi,dword ptr [esp+0x98]
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x74]
	lea eax,[esp+0x44]
	push eax
	push edi
	mov dword ptr [esp+0x4C],ebp
	call ecx
	cmp eax,ebp
	jge Block149

 Block148:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block149:
	mov eax,dword ptr [esp+0x44]
	cmp esi,eax
	mov dword ptr [esp+0x64],eax
	jl Block151

 Block150:
	mov dword ptr [esp+0x64],esi

 Block151:
	mov esi,dword ptr [esp+0xA0]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x5C]
	push eax
	push esi
	mov dword ptr [esp+0x64],ebp
	call ecx
	cmp eax,ebp
	jge Block153

 Block152:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block153:
	mov edi,dword ptr [esp+0xAC]
	cmp edi,ebp
	je Block159

 Block154:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x3C]
	push eax
	push edi
	mov dword ptr [esp+0x44],ebp
	call ecx
	cmp eax,ebp
	jge Block156

 Block155:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block156:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x74]
	mov esi,dword ptr [esp+0x3C]
	lea eax,[esp+0x24]
	push eax
	push edi
	mov dword ptr [esp+0x2C],ebp
	call ecx
	cmp eax,ebp
	jge Block158

 Block157:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block158:
	sub esi,dword ptr [esp+0x24]
	mov ebx,esi
	jmp Block160

 Block159:
	xor ebx,ebx

 Block160:
	mov esi,dword ptr [esp+0xB8]
	cmp esi,ebp
	jne Block162

 Block161:
	push 0x80004003
	call _com_issue_error

 Block162:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x3C]
	push eax
	push esi
	mov dword ptr [esp+0x44],ebp
	call ecx
	cmp eax,ebp
	jge Block164

 Block163:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block164:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x74]
	mov edi,dword ptr [esp+0x3C]
	lea eax,[esp+0x24]
	push eax
	push esi
	mov dword ptr [esp+0x2C],ebp
	call ecx
	cmp eax,ebp
	jge Block166

 Block165:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block166:
	sub edi,dword ptr [esp+0x24]
	mov ebp,edi
	cmp ebx,edi
	jb Block168

 Block167:
	mov ebp,ebx

 Block168:
	mov ebx,dword ptr [esp+0xA8]
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x44]
	push eax
	xor esi,esi
	push ebx
	mov dword ptr [esp+0x4C],esi
	call ecx
	cmp eax,esi
	jge Block170

 Block169:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block170:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x74]
	mov edi,dword ptr [esp+0x44]
	lea eax,[esp+0x48]
	push eax
	push ebx
	mov dword ptr [esp+0x50],esi
	call ecx
	cmp eax,esi
	jge Block172

 Block171:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block172:
	mov ebx,dword ptr [esp+0x48]
	mov dword ptr [esp+0x50],esi
	mov esi,dword ptr [esp+0x60]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x50]
	push eax
	push esi
	call ecx
	test eax,eax
	jge Block174

 Block173:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block174:
	mov eax,dword ptr [esp+0x60]
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x74]
	mov esi,dword ptr [esp+0x50]
	lea ecx,[esp+0x28]
	push ecx
	push eax
	mov dword ptr [esp+0x30],0
	call edx
	test eax,eax
	jge Block176

 Block175:
	mov ecx,dword ptr [esp+0x60]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block176:
	sub esi,dword ptr [esp+0x28]
	sub edi,ebx
	mov eax,edi
	cmp eax,esi
	jae Block178

 Block177:
	mov eax,esi

 Block178:
	mov dword ptr [esp+0x44],eax
	cmp ebp,eax
	jb Block180

 Block179:
	mov dword ptr [esp+0x44],ebp

 Block180:
	mov esi,dword ptr [esp+0xB0]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x28]
	push eax
	xor edi,edi
	push esi
	mov dword ptr [esp+0x30],edi
	call ecx
	cmp eax,edi
	jge Block182

 Block181:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block182:
	mov edx,dword ptr [esp+0x28]
	mov eax,dword ptr [esi]
	lea ecx,[esp+0x3C]
	push ecx
	mov dword ptr [esp+0x20],edx
	mov edx,dword ptr [eax+0x74]
	push esi
	mov dword ptr [esp+0x44],edi
	call edx
	cmp eax,edi
	jge Block184

 Block183:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block184:
	mov esi,dword ptr [esp+0xA8]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x74]
	mov ebp,dword ptr [esp+0x3C]
	lea ecx,[esp+0x24]
	push ecx
	xor ebx,ebx
	push esi
	mov dword ptr [esp+0x2C],ebx
	call edx
	cmp eax,ebx
	jge Block186

 Block185:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block186:
	mov edi,dword ptr [esp+0x80]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	mov esi,dword ptr [esp+0x24]
	lea ecx,[esp+0x48]
	push ecx
	push edi
	mov dword ptr [esp+0x50],ebx
	call edx
	cmp eax,ebx
	jge Block188

 Block187:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block188:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x74]
	mov ebx,dword ptr [esp+0x48]
	lea ecx,[esp+0x50]
	push ecx
	push edi
	mov dword ptr [esp+0x58],0
	call edx
	test eax,eax
	jge Block190

 Block189:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block190:
	mov eax,dword ptr [esp+0x60]
	mov ecx,dword ptr [eax]
	mov edi,dword ptr [esp+0x50]
	lea edx,[esp+0x20]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x74]
	mov dword ptr [esp+0x28],0
	call eax
	test eax,eax
	jge Block192

 Block191:
	mov ecx,dword ptr [esp+0x60]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block192:
	mov eax,dword ptr [esp+0x20]
	sub esi,ebp
	add esi,dword ptr [esp+0x1C]
	sub eax,edi
	add eax,ebx
	mov dword ptr [esp+0x24],eax
	cmp esi,eax
	jb Block194

 Block193:
	mov dword ptr [esp+0x24],esi

 Block194:
	mov ebx,dword ptr [esp+0x1B8]
	mov ebp,dword ptr [esp+0x5C]
	mov eax,dword ptr [esp+0x1BC]
	mov esi,dword ptr [esp+0x78]
	mov ecx,ebx
	sub ecx,0x3ED
	add ebp,0xFFFFFFFE
	neg ecx
	sbb ecx,ecx
	and ecx,0xFFFFFFF9
	add ecx,0xE
	mov dword ptr [esp+0x50],ecx
	test eax,eax
	je Block198

 Block195:
	lea eax,[esi+eax-1]
	cdq
	idiv esi
	cmp eax,7
	mov ecx,eax
	jg Block197

 Block196:
	mov ecx,7

 Block197:
	mov dword ptr [esp+0x50],ecx

 Block198:
	mov eax,esi
	mov esi,dword ptr [esp+0xAC]
	imul eax,ecx
	xor edi,edi
	mov dword ptr [esp+0x3C],eax
	cmp esi,edi
	je Block201

 Block199:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x1C]
	push eax
	push esi
	mov dword ptr [esp+0x24],edi
	call ecx
	cmp eax,edi
	jge Block201

 Block200:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block201:
	mov dword ptr [esp+0xD0], 0
	mov dword ptr [esp+0xD8],edi
	mov dword ptr [esp+0xDC],edi
	mov dword ptr [esp+0xE0],edi
	mov dword ptr [esp+0x7C],edi
	lea edx,[esp+0x1C]
	push 0x5AF
	push edx
	mov byte ptr [esp+0x1A8],0x30
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea ecx,[esp+0x80]
	push ecx
	push eax
	mov byte ptr [esp+0x1AC],0x31
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x1A0],0x30
	cmp eax,edi
	je Block203

 Block202:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block203:
	cmp ebx,0x3ED
	je Block212

 Block204:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block206

 Block205:
	push eax
	call _com_issue_error

 Block206:
	mov edx,dword ptr [esp+0x1B0]
	lea ecx,[esp+0x2C]
	push ecx
	push edx
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1A25
	mov bl,0x32
	push eax
	mov byte ptr [esp+0x1B8],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x8C]
	mov byte ptr [esp+0x1B0],0x33
	cmp ecx,edi
	jne Block208

 Block207:
	push 0x80004003
	call _com_issue_error

 Block208:
	mov byte ptr [esp+0x1B0],bl
	call IWzFont::Create
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x1A0],0x30
	jne Block211

 Block209:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,edi
	je Block226

 Block210:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block226

 Block211:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]
	jmp Block226

 Block212:
	lea eax,[esp+0x1C]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x1A0],0x34
	cmp eax,edi
	je Block214

 Block213:
	mov esi,dword ptr [eax]
	jmp Block215

 Block214:
	xor esi,esi

 Block215:
	mov ecx,8
	push esi
	mov word ptr [esp+0x30],cx
	call ZComAPI::ZComSysAllocString
	add esp,4
	mov dword ptr [esp+0x34],eax
	cmp eax,edi
	jne Block218

 Block216:
	cmp esi,edi
	je Block218

 Block217:
	push 0x8007000E
	call _com_issue_error

 Block218:
	mov eax,dword ptr [esp+0x1B0]
	lea edx,[esp+0x2C]
	push edx
	push eax
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x50],esp
	push 0x1A25
	mov bl,0x35
	push ecx
	mov byte ptr [esp+0x1B8],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x8C]
	mov byte ptr [esp+0x1B0],0x36
	cmp ecx,edi
	jne Block220

 Block219:
	push 0x80004003
	call _com_issue_error

 Block220:
	mov byte ptr [esp+0x1B0],bl
	call IWzFont::Create
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x1A0],0x34
	jne Block223

 Block221:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,edi
	je Block224

 Block222:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block224

 Block223:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block224:
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x1A0],0x30
	cmp ecx,edi
	je Block226

 Block225:
	call _xbstr_t::Data_t::Release

 Block226:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block314

 Block227:
	mov ebp,dword ptr [esp+0x84]
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [esp+0x1AC]
	lea eax,[esp+0x2C]
	push eax
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x1B8]
	mov dword ptr [esp+0x28],esp
	test eax,eax
	je Block229

 Block228:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block229:
	mov ecx,dword ptr [esp+0x88]
	mov byte ptr [esp+0x1AC],0x38
	test ecx,ecx
	je Block1

 Block230:
	mov byte ptr [esp+0x1AC],0x37
	call IWzFont::CalcLongestTextForGlobal
	mov edi,eax
	mov eax,dword ptr [esp+0x1AC]
	mov dword ptr [esp+0x1C],edi
	test eax,eax
	je Block234

 Block231:
	cmp dword ptr [eax],0
	je Block234

 Block232:
	mov ecx,dword ptr [eax]
	test ecx,ecx
	je Block234

 Block233:
	mov ecx,dword ptr [ecx-4]
	shr ecx,1
	jmp Block235

 Block234:
	xor ecx,ecx

 Block235:
	cmp edi,ecx
	setb bl
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x1A0],0x30
	jne Block238

 Block236:
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	mov ecx,dword ptr [esp+0x34]
	test ecx,ecx
	je Block240

 Block237:
	lea eax,[ecx-4]
	push eax
	call CoTaskMemFree
	jmp Block239

 Block238:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block239:
	mov eax,dword ptr [esp+0x1AC]

 Block240:
	test bl,bl
	je Block315

 Block241:
	test eax,eax
	je Block243

 Block242:
	mov esi,dword ptr [eax]
	jmp Block244

 Block243:
	xor esi,esi

 Block244:
	lea esi,[esi+edi*2-2]

 Block245:
	test eax,eax
	je Block247

 Block246:
	cmp esi,dword ptr [eax]
	jb Block249

 Block247:
	movzx eax,word ptr [esi]
	push eax
	push offset _S___15
	call _wcschr
	add esp,8
	test eax,eax
	mov eax,dword ptr [esp+0x1AC]
	je Block249

 Block248:
	sub esi,2
	jmp Block245

 Block249:
	test eax,eax
	je Block251

 Block250:
	mov eax,dword ptr [eax]
	mov ebp,eax
	jmp Block252

 Block251:
	xor eax,eax
	xor ebp,ebp

 Block252:
	sub esi,eax
	sar esi,1
	inc esi
	lea eax,[esi+esi+6]
	push eax
	call CoTaskMemAlloc
	mov edi,eax
	xor ebx,ebx
	cmp edi,ebx
	jne Block254

 Block253:
	mov dword ptr [esp+0x20],ebx
	jmp Block257

 Block254:
	add esi,esi
	mov dword ptr [edi],esi
	add edi,4
	cmp ebp,ebx
	je Block256

 Block255:
	push esi
	push ebp
	push edi
	call _memcpy
	add esp,0xC

 Block256:
	xor ecx,ecx
	mov word ptr [esi+edi],cx
	mov dword ptr [esp+0x20],edi

 Block257:
	mov edx,dword ptr [esp+0x1AC]
	cmp edx,ebx
	je Block259

 Block258:
	mov ebp,dword ptr [edx]
	jmp Block260

 Block259:
	xor ebp,ebp

 Block260:
	mov eax,dword ptr [esp+0x1C]
	lea ebp,[ebp+eax*2]
	movzx eax,word ptr [ebp]
	cmp ax,bx
	je Block265

 Block261:
	mov edi,edi

 Block262:
	movzx eax,ax
	push eax
	push offset _S___15
	call _wcschr
	add esp,8
	test eax,eax
	je Block264

 Block263:
	movzx eax,word ptr [ebp+2]
	add ebp,2
	cmp ax,bx
	jne Block262

 Block264:
	mov edx,dword ptr [esp+0x1AC]

 Block265:
	cmp edx,ebx
	je Block268

 Block266:
	mov ecx,dword ptr [edx]
	cmp ecx,ebx
	je Block269

 Block267:
	mov eax,dword ptr [ecx-4]
	shr eax,1
	jmp Block270

 Block268:
	xor ecx,ecx

 Block269:
	xor eax,eax

 Block270:
	lea edi,[eax+eax]
	sub edi,ebp
	add edi,ecx
	sar edi,1
	lea ecx,[edi+edi+6]
	push ecx
	call CoTaskMemAlloc
	mov esi,eax
	cmp esi,ebx
	jne Block272

 Block271:
	mov dword ptr [esp+0x28],ebx
	jmp Block273

 Block272:
	add edi,edi
	push edi
	mov dword ptr [esi],edi
	add esi,4
	push ebp
	push esi
	call _memcpy
	add esp,0xC
	xor edx,edx
	mov word ptr [edi+esi],dx
	mov dword ptr [esp+0x28],esi

 Block273:
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,ebx
	je Block275

 Block274:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],1
	mov dword ptr [eax],ecx
	mov ebp,eax
	jmp Block276

 Block275:
	xor ebp,ebp

 Block276:
	mov byte ptr [esp+0x1A0],0x30
	mov dword ptr [esp+0x1C],ebp
	cmp ebp,ebx
	je Block217

 Block277:
	lea ecx,[esp+0xD0]
	mov byte ptr [esp+0x1A0],0x3A
	call ZList<Ztl_bstr_t>::AddTail_
	mov esi,eax
	lea edx,[esp+0x1C]
	cmp esi,edx
	je Block288

 Block278:
	mov edi,dword ptr [esi]
	cmp edi,ebx
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	je Block287

 Block279:
	lea eax,[edi+8]
	push eax
	call ebx
	test eax,eax
	jne Block286

 Block280:
	test edi,edi
	je Block286

 Block281:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block283

 Block282:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block283:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block285

 Block284:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block285:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block286:
	mov dword ptr [esi],0

 Block287:
	lea ecx,[ebp+8]
	push ecx
	mov dword ptr [esi],ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	jmp Block289

 Block288:
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]

 Block289:
	lea edx,[ebp+8]
	push edx
	mov byte ptr [esp+0x1A4],0x30
	call ebx
	test eax,eax
	jne Block295

 Block290:
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block292

 Block291:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block292:
	mov eax,dword ptr [ebp+4]
	test eax,eax
	je Block294

 Block293:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block294:
	push ebp
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block295:
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	test eax,eax
	je Block297

 Block296:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],0
	mov dword ptr [eax+8],1
	mov dword ptr [eax],ecx
	mov esi,eax
	jmp Block298

 Block297:
	xor esi,esi

 Block298:
	mov byte ptr [esp+0x1A0],0x30
	test esi,esi
	je Block217

 Block299:
	mov edi,dword ptr [esp+0x1AC]
	test edi,edi
	je Block307

 Block300:
	lea edx,[edi+8]
	push edx
	call ebx
	test eax,eax
	jne Block307

 Block301:
	test edi,edi
	je Block307

 Block302:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block304

 Block303:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block304:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block306

 Block305:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block306:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block307:
	lea edi,[esi+8]
	push edi
	mov dword ptr [esp+0x1B0],esi
	call dword ptr [ZImports::_InterlockedIncrement]
	push edi
	call ebx
	test eax,eax
	jne Block313

 Block308:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block310

 Block309:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block310:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block312

 Block311:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block312:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block313:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block227

 Block314:
	push eax
	call _com_issue_error

 Block315:
	lea ecx,[esp+0xD0]
	call ZList<Ztl_bstr_t>::AddTail_
	mov edi,eax
	lea edx,[esp+0x1AC]
	cmp edi,edx
	je Block327

 Block316:
	mov esi,dword ptr [edi]
	test esi,esi
	je Block325

 Block317:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block324

 Block318:
	test esi,esi
	je Block324

 Block319:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block321

 Block320:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block321:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block323

 Block322:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block323:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block324:
	mov dword ptr [edi],0

 Block325:
	mov ecx,dword ptr [esp+0x1AC]
	mov dword ptr [edi],ecx
	mov eax,dword ptr [esp+0x1AC]
	test eax,eax
	je Block327

 Block326:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block327:
	mov esi,dword ptr [esp+0xD8]
	mov edx,esi
	imul edx,dword ptr [esp+0x5C]
	cmp edx,dword ptr [esp+0x24]
	jge Block342

 Block328:
	mov dword ptr [esp+0x1C],0
	mov bl,0x3C
	jmp Block330

 Block330:
	lea ecx,[esp+0xD0]
	mov byte ptr [esp+0x1A0],bl
	call ZList<Ztl_bstr_t>::AddTail_
	mov edi,eax
	lea eax,[esp+0x1C]
	cmp edi,eax
	je Block341

 Block331:
	mov esi,dword ptr [edi]
	test esi,esi
	je Block340

 Block332:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block339

 Block333:
	test esi,esi
	je Block339

 Block334:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block336

 Block335:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block336:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block338

 Block337:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block338:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block339:
	mov dword ptr [edi],0

 Block340:
	mov dword ptr [edi],0

 Block341:
	mov esi,dword ptr [esp+0xD8]
	mov edx,esi
	imul edx,dword ptr [esp+0x5C]
	cmp edx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x1A0],0x30
	jl Block330

 Block342:
	cmp esi,1
	jne Block354

 Block343:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block345

 Block344:
	push eax
	call _com_issue_error

 Block345:
	lea edx,[esp+0x2C]
	push edx
	push ecx
	mov ecx,dword ptr [esp+0x1B4]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x1B4]
	mov dword ptr [esp+0x24],esp
	test eax,eax
	je Block347

 Block346:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block347:
	mov ecx,dword ptr [esp+0x84]
	mov byte ptr [esp+0x1A8],0x3E
	test ecx,ecx
	jne Block349

 Block348:
	push 0x80004003
	call _com_issue_error

 Block349:
	mov byte ptr [esp+0x1A8],0x3D
	call IWzFont::CalcTextWidth
	mov ebx,dword ptr [esp+0x78]
	xor edx,edx
	lea eax,[ebx+eax-1]
	div ebx
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x1A0],0x30
	mov edi,eax
	jne Block352

 Block350:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block353

 Block351:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block353

 Block352:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block353:
	or edi,1
	mov eax,ebx
	imul eax,edi
	mov dword ptr [esp+0x50],edi
	mov dword ptr [esp+0x3C],eax

 Block354:
	imul esi,dword ptr [esp+0x5C]
	mov edx,dword ptr [esp+0x58]
	mov ecx,dword ptr [esp+0x3C]
	mov eax,dword ptr [esp+0x54]
	add esi,dword ptr [esp+0x44]
	add ecx,edx
	add eax,ecx
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr [ebp+0x5C],eax
	sub eax,edx
	add ecx,esi
	mov esi,dword ptr [esp+0x54]
	sub eax,esi
	cdq
	sub eax,edx
	sar eax,1
	mov edx,3
	sub edx,eax
	mov dword ptr [ebp+0x60],ecx
	sub edx,esi
	neg ecx
	cmp dword ptr [esp+0x1B8],0x3EB
	jne Block356

 Block355:
	mov dword ptr [ebp+0x2C],edx
	mov dword ptr [ebp+0x30],ecx
	jmp Block357

 Block356:
	mov dword ptr [ebp+0x48],edx
	mov dword ptr [ebp+0x4C],ecx

 Block357:
	mov dword ptr [esp+0x4C],0
	lea eax,[esp+0x1C]
	push 0x3D0
	mov bl,0x3F
	push eax
	mov byte ptr [esp+0x1A8],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[esp+0x50]
	push ecx
	push eax
	mov byte ptr [esp+0x1AC],0x40
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x1A0],bl
	test eax,eax
	je Block359

 Block358:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block359:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x68]
	push edx
	call esi
	lea eax,[esp+0x68]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block361

 Block360:
	push eax
	call _com_issue_error

 Block361:
	lea ecx,[esp+0xBC]
	push ecx
	mov byte ptr [esp+0x1A4],0x41
	call esi
	lea edx,[esp+0xBC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block363

 Block362:
	push eax
	call _com_issue_error

 Block363:
	mov ecx,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x1A0],0x42
	test ecx,ecx
	jne Block365

 Block364:
	push 0x80004003
	call _com_issue_error

 Block365:
	mov edx,dword ptr [ebp+0x60]
	mov esi,dword ptr [ebp+0x5C]
	mov ebp,dword ptr [esp+0x68]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x7C]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x80]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x84]
	mov dword ptr [eax+0xC],ebp
	mov ebp,dword ptr [esp+0xCC]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0xE0]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0xE4]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0xE8]
	push edx
	push esi
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [ebx+0x2C]
	push ecx
	mov edi,ecx
	call eax
	test eax,eax
	jge Block367

 Block366:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block367:
	mov esi,8
	mov byte ptr [esp+0x1A0],0x41
	cmp word ptr [esp+0xBC],si
	jne Block370

 Block368:
	mov eax,dword ptr [esp+0xC4]
	xor ecx,ecx
	mov word ptr [esp+0xBC],cx
	test eax,eax
	je Block371

 Block369:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block371

 Block370:
	lea edx,[esp+0xBC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block371:
	mov byte ptr [esp+0x1A0],0x3F
	cmp word ptr [esp+0x68],si
	jne Block374

 Block372:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	test eax,eax
	je Block375

 Block373:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block375

 Block374:
	lea ecx,[esp+0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block375:
	mov edi,dword ptr [esp+0x50]
	xor ecx,ecx
	mov dword ptr [esp+0x48],ecx
	test edi,edi
	jle Block431

 Block376:
	cmp dword ptr [esp+0xA4],ecx
	sete al
	test al,al
	sete byte ptr [esp+0x9F]
	xor ebx,ebx
	jmp Block378

 Block378:
	cmp byte ptr [esp+0x9F],0
	mov esi,dword ptr [esp+0x98]
	mov ebp,dword ptr [esp+0xA4]
	je Block391

 Block379:
	mov eax,edi
	cdq
	sub eax,edx
	sar eax,1
	cmp ecx,eax
	jne Block391

 Block380:
	mov edx,3
	mov word ptr [esp+0x68],dx
	mov dword ptr [esp+0x70],0xFF
	xor esi,esi
	mov byte ptr [esp+0x1A0],0x43
	cmp ebp,esi
	je Block1

 Block381:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[esp+0x20]
	push ecx
	push ebp
	mov dword ptr [esp+0x28],esi
	call edx
	cmp eax,esi
	jge Block383

 Block382:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block383:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x6C]
	mov edi,dword ptr [esp+0x20]
	lea ecx,[esp+0x28]
	push ecx
	push ebp
	mov dword ptr [esp+0x30],esi
	call edx
	cmp eax,esi
	jge Block385

 Block384:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block385:
	mov ecx,dword ptr [esp+0x4C]
	cmp ecx,esi
	je Block1

 Block386:
	mov ebp,dword ptr [esp+0x68]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x7C]
	mov edx,dword ptr [ecx]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x80]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x84]
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [esp+0xB4]
	push eax
	mov eax,dword ptr [esp+0x78]
	sub eax,edi
	push eax
	mov eax,dword ptr [esp+0x6C]
	sub eax,dword ptr [esp+0x40]
	mov esi,ecx
	add eax,ebx
	push eax
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	xor ebp,ebp
	cmp eax,ebp
	jge Block388

 Block387:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block388:
	cmp word ptr [esp+0x68],8
	mov byte ptr [esp+0x1A0],0x3F
	jne Block390

 Block389:
	mov eax,dword ptr [esp+0x70]
	xor edx,edx
	mov word ptr [esp+0x68],dx
	jmp Block400

 Block390:
	lea eax,[esp+0x68]
	jmp Block403

 Block391:
	mov ecx,3
	mov word ptr [esp+0xBC],cx
	mov dword ptr [esp+0xC4],0xFF
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x74]
	lea eax,[esp+0x20]
	push eax
	xor ebp,ebp
	push esi
	mov byte ptr [esp+0x1A8],0x44
	mov dword ptr [esp+0x28],ebp
	call ecx
	cmp eax,ebp
	jge Block393

 Block392:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block393:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x6C]
	mov edi,dword ptr [esp+0x20]
	lea eax,[esp+0x28]
	push eax
	push esi
	mov dword ptr [esp+0x30],ebp
	call ecx
	cmp eax,ebp
	jge Block395

 Block394:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block395:
	mov ecx,dword ptr [esp+0x4C]
	cmp ecx,ebp
	je Block1

 Block396:
	mov ebp,dword ptr [esp+0xBC]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0xD0]
	mov edx,dword ptr [ecx]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0xD4]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0xD8]
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [esp+0xA8]
	push eax
	mov eax,dword ptr [esp+0x78]
	sub eax,edi
	push eax
	mov eax,dword ptr [esp+0x6C]
	sub eax,dword ptr [esp+0x40]
	mov esi,ecx
	add eax,ebx
	push eax
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	xor ebp,ebp
	cmp eax,ebp
	jge Block398

 Block397:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block398:
	cmp word ptr [esp+0xBC],8
	mov byte ptr [esp+0x1A0],0x3F
	jne Block402

 Block399:
	mov eax,dword ptr [esp+0xC4]
	xor edx,edx
	mov word ptr [esp+0xBC],dx

 Block400:
	cmp eax,ebp
	je Block404

 Block401:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block404

 Block402:
	lea eax,[esp+0xBC]

 Block403:
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block404:
	mov esi,dword ptr [esp+0xAC]
	cmp esi,ebp
	sete al
	test al,al
	sete al
	test al,al
	je Block417

 Block405:
	mov eax,dword ptr [esp+0x50]
	cdq
	sub eax,edx
	sar eax,1
	cmp dword ptr [esp+0x48],eax
	jne Block417

 Block406:
	mov ecx,3
	mov word ptr [esp+0x88],cx
	mov dword ptr [esp+0x90],0xFF
	mov byte ptr [esp+0x1A0],0x45
	cmp esi,ebp
	je Block1

 Block407:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x74]
	lea eax,[esp+0x20]
	push eax
	push esi
	mov dword ptr [esp+0x28],ebp
	call ecx
	cmp eax,ebp
	jge Block409

 Block408:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block409:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x6C]
	mov edi,dword ptr [esp+0x20]
	lea eax,[esp+0x28]
	push eax
	push esi
	mov dword ptr [esp+0x30],ebp
	call ecx
	cmp eax,ebp
	jge Block411

 Block410:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block411:
	mov edx,dword ptr [esp+0x4C]
	cmp edx,ebp
	je Block1

 Block412:
	mov ebp,dword ptr [esp+0x88]
	mov eax,dword ptr [esp+0x84]
	mov eax,dword ptr [eax+0x60]
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [ecx],ebp
	mov ebp,dword ptr [esp+0x9C]
	mov dword ptr [ecx+4],ebp
	mov ebp,dword ptr [esp+0xA0]
	mov dword ptr [ecx+8],ebp
	mov ebp,dword ptr [esp+0xA4]
	sub eax,edi
	sub eax,dword ptr [esp+0x54]
	mov edi,dword ptr [edx]
	mov dword ptr [ecx+0xC],ebp
	mov ecx,dword ptr [esp+0xBC]
	push ecx
	mov ecx,dword ptr [edi+0x80]
	push eax
	mov eax,dword ptr [esp+0x6C]
	sub eax,dword ptr [esp+0x40]
	mov esi,edx
	add eax,ebx
	push eax
	push edx
	call ecx
	test eax,eax
	jge Block414

 Block413:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block414:
	cmp word ptr [esp+0x88],8
	mov byte ptr [esp+0x1A0],0x3F
	jne Block416

 Block415:
	mov eax,dword ptr [esp+0x90]
	xor edx,edx
	mov word ptr [esp+0x88],dx
	jmp Block426

 Block416:
	lea eax,[esp+0x88]
	jmp Block429

 Block417:
	mov ecx,3
	mov word ptr [esp+0x2C],cx
	mov dword ptr [esp+0x34],0xFF
	mov esi,dword ptr [esp+0xB8]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x74]
	lea eax,[esp+0x20]
	push eax
	push esi
	mov byte ptr [esp+0x1A8],0x46
	mov dword ptr [esp+0x28],ebp
	call ecx
	cmp eax,ebp
	jge Block419

 Block418:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block419:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x6C]
	mov edi,dword ptr [esp+0x20]
	lea eax,[esp+0x28]
	push eax
	push esi
	mov dword ptr [esp+0x30],ebp
	call ecx
	cmp eax,ebp
	jge Block421

 Block420:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block421:
	mov edx,dword ptr [esp+0x4C]
	cmp edx,ebp
	je Block1

 Block422:
	mov ebp,dword ptr [esp+0x2C]
	mov eax,dword ptr [esp+0x84]
	mov eax,dword ptr [eax+0x60]
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [ecx],ebp
	mov ebp,dword ptr [esp+0x40]
	mov dword ptr [ecx+4],ebp
	mov ebp,dword ptr [esp+0x44]
	mov dword ptr [ecx+8],ebp
	mov ebp,dword ptr [esp+0x48]
	sub eax,edi
	sub eax,dword ptr [esp+0x54]
	mov edi,dword ptr [edx]
	mov dword ptr [ecx+0xC],ebp
	mov ecx,dword ptr [esp+0xC8]
	push ecx
	mov ecx,dword ptr [edi+0x80]
	push eax
	mov eax,dword ptr [esp+0x6C]
	sub eax,dword ptr [esp+0x40]
	mov esi,edx
	add eax,ebx
	push eax
	push edx
	call ecx
	test eax,eax
	jge Block424

 Block423:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block424:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x1A0],0x3F
	jne Block428

 Block425:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx

 Block426:
	test eax,eax
	je Block430

 Block427:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block430

 Block428:
	lea eax,[esp+0x2C]

 Block429:
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block430:
	mov ecx,dword ptr [esp+0x48]
	mov edi,dword ptr [esp+0x50]
	add ebx,dword ptr [esp+0x78]
	inc ecx
	cmp ecx,edi
	mov dword ptr [esp+0x48],ecx
	jl Block378

 Block431:
	mov ebp,dword ptr [esp+0x84]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],ebx
	cmp dword ptr [esp+0xD8],ebx
	jbe Block472

 Block432:
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr [esp+0x24],ecx

 Block433:
	mov ebp,dword ptr [esp+0xA0]
	mov edx,3
	mov word ptr [esp+0x2C],dx
	mov dword ptr [esp+0x34],0xFF
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[esp+0x20]
	push ecx
	xor esi,esi
	push ebp
	mov byte ptr [esp+0x1A8],0x47
	mov dword ptr [esp+0x28],esi
	call edx
	cmp eax,esi
	jge Block435

 Block434:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block435:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x6C]
	mov edi,dword ptr [esp+0x20]
	lea ecx,[esp+0x28]
	push ecx
	push ebp
	mov dword ptr [esp+0x30],esi
	call edx
	cmp eax,esi
	jge Block437

 Block436:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block437:
	mov ecx,dword ptr [esp+0x4C]
	cmp ecx,esi
	je Block1

 Block438:
	mov ebx,dword ptr [esp+0x2C]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x40]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x44]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0x48]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [esp+0x34]
	push ebp
	sub eax,edi
	push eax
	mov eax,dword ptr [esp+0x6C]
	sub eax,dword ptr [esp+0x40]
	mov esi,ecx
	push eax
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	xor ebx,ebx
	cmp eax,ebx
	jge Block440

 Block439:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block440:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x1A0],0x3F
	jne Block443

 Block441:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,ebx
	je Block444

 Block442:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block444

 Block443:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block444:
	cmp dword ptr [esp+0x50],ebx
	mov dword ptr [esp+0x48],ebx
	jle Block459

 Block445:
	mov ebp,dword ptr [esp+0xCC]
	mov dword ptr [esp+0x40],ebx

 Block446:
	mov ecx,3
	mov word ptr [esp+0x88],cx
	mov dword ptr [esp+0x90],0xFF
	mov byte ptr [esp+0x1A0],0x48
	cmp ebp,ebx
	je Block1

 Block447:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x74]
	lea eax,[esp+0x20]
	push eax
	push ebp
	mov dword ptr [esp+0x28],ebx
	call ecx
	cmp eax,ebx
	jge Block449

 Block448:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block449:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x6C]
	mov edi,dword ptr [esp+0x20]
	lea eax,[esp+0x28]
	push eax
	push ebp
	mov dword ptr [esp+0x30],ebx
	call ecx
	cmp eax,ebx
	jge Block451

 Block450:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block451:
	mov ecx,dword ptr [esp+0x4C]
	cmp ecx,ebx
	je Block1

 Block452:
	mov ebx,dword ptr [esp+0x88]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x9C]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0xA0]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0xA4]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [esp+0x34]
	sub eax,edi
	mov edi,dword ptr [esp+0x50]
	push ebp
	push eax
	mov eax,dword ptr [esp+0x6C]
	sub eax,dword ptr [esp+0x40]
	mov esi,ecx
	add eax,edi
	push eax
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	xor ebx,ebx
	cmp eax,ebx
	jge Block454

 Block453:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block454:
	cmp word ptr [esp+0x88],8
	mov byte ptr [esp+0x1A0],0x3F
	jne Block457

 Block455:
	mov eax,dword ptr [esp+0x90]
	xor edx,edx
	mov word ptr [esp+0x88],dx
	cmp eax,ebx
	je Block458

 Block456:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block458

 Block457:
	lea eax,[esp+0x88]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block458:
	mov eax,dword ptr [esp+0x48]
	add edi,dword ptr [esp+0x78]
	inc eax
	cmp eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x48],eax
	mov dword ptr [esp+0x40],edi
	jl Block446

 Block459:
	mov ecx,3
	mov word ptr [esp+0x68],cx
	mov dword ptr [esp+0x70],0xFF
	mov esi,dword ptr [esp+0xB4]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x74]
	lea eax,[esp+0x40]
	push eax
	push esi
	mov byte ptr [esp+0x1A8],0x49
	mov dword ptr [esp+0x48],ebx
	call ecx
	cmp eax,ebx
	jge Block461

 Block460:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block461:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x6C]
	mov edi,dword ptr [esp+0x40]
	lea eax,[esp+0x20]
	push eax
	push esi
	mov dword ptr [esp+0x28],ebx
	call ecx
	cmp eax,ebx
	jge Block463

 Block462:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block463:
	mov edx,dword ptr [esp+0x4C]
	cmp edx,ebx
	je Block1

 Block464:
	mov ebp,dword ptr [esp+0x68]
	mov eax,dword ptr [esp+0x84]
	mov eax,dword ptr [eax+0x5C]
	sub eax,dword ptr [esp+0x20]
	mov ebx,dword ptr [edx]
	sub eax,dword ptr [esp+0x58]
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [ecx],ebp
	mov ebp,dword ptr [esp+0x7C]
	mov dword ptr [ecx+4],ebp
	mov ebp,dword ptr [esp+0x80]
	mov dword ptr [ecx+8],ebp
	mov ebp,dword ptr [esp+0x84]
	mov dword ptr [ecx+0xC],ebp
	mov ecx,dword ptr [esp+0xC4]
	push ecx
	mov ecx,dword ptr [esp+0x38]
	sub ecx,edi
	push ecx
	push eax
	mov esi,edx
	push edx
	mov edx,dword ptr [ebx+0x80]
	call edx
	test eax,eax
	jge Block466

 Block465:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block466:
	cmp word ptr [esp+0x68],8
	mov byte ptr [esp+0x1A0],0x3F
	jne Block469

 Block467:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	test eax,eax
	je Block470

 Block468:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block470

 Block469:
	lea ecx,[esp+0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block470:
	mov eax,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x5C]
	add dword ptr [esp+0x24],edx
	inc eax
	mov dword ptr [esp+0x1C],eax
	cmp eax,dword ptr [esp+0xD8]
	jb Block433

 Block471:
	mov ebp,dword ptr [esp+0x84]
	xor ebx,ebx

 Block472:
	mov esi,dword ptr [esp+0x80]
	mov eax,3
	mov word ptr [esp+0x2C],ax
	mov dword ptr [esp+0x34],0xFF
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x74]
	lea edx,[esp+0x1C]
	push edx
	push esi
	mov byte ptr [esp+0x1A8],0x4A
	mov dword ptr [esp+0x24],ebx
	call eax
	cmp eax,ebx
	jge Block474

 Block473:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block474:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x6C]
	mov edi,dword ptr [esp+0x1C]
	lea edx,[esp+0x40]
	push edx
	push esi
	mov dword ptr [esp+0x48],ebx
	call eax
	cmp eax,ebx
	jge Block476

 Block475:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block476:
	mov ecx,dword ptr [esp+0x4C]
	cmp ecx,ebx
	jne Block478

 Block477:
	push 0x80004003
	call _com_issue_error

 Block478:
	mov ebx,dword ptr [esp+0x2C]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x40]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x44]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0x48]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [esp+0x90]
	push eax
	mov eax,dword ptr [esp+0x78]
	sub eax,edi
	push eax
	mov eax,dword ptr [esp+0x6C]
	sub eax,dword ptr [esp+0x58]
	mov esi,ecx
	push eax
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	test eax,eax
	jge Block480

 Block479:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block480:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x1A0],0x3F
	jne Block483

 Block481:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block484

 Block482:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block484

 Block483:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block484:
	mov ecx,3
	mov word ptr [esp+0x2C],cx
	mov dword ptr [esp+0x34],0xFF
	mov ebx,dword ptr [esp+0xB0]
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x74]
	lea eax,[esp+0x1C]
	push eax
	xor edi,edi
	push ebx
	mov byte ptr [esp+0x1A8],0x4B
	mov dword ptr [esp+0x24],edi
	call ecx
	cmp eax,edi
	jge Block486

 Block485:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block486:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x6C]
	mov esi,dword ptr [esp+0x1C]
	lea eax,[esp+0x40]
	push eax
	push ebx
	mov dword ptr [esp+0x48],edi
	call ecx
	cmp eax,edi
	jge Block488

 Block487:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block488:
	mov ecx,dword ptr [esp+0x4C]
	cmp ecx,edi
	jne Block490

 Block489:
	push 0x80004003
	call _com_issue_error

 Block490:
	mov eax,dword ptr [esp+0x64]
	lea edx,[esp+0x2C]
	push edx
	mov edx,dword ptr [ebp+0x5C]
	sub edx,dword ptr [esp+0x5C]
	push ebx
	sub edx,dword ptr [esp+0x48]
	sub eax,esi
	push eax
	push edx
	call IWzCanvas::Copy
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x1A0],0x3F
	jne Block493

 Block491:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,edi
	je Block494

 Block492:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block494

 Block493:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block494:
	mov edx,3
	mov word ptr [esp+0x2C],dx
	mov dword ptr [esp+0x34],0xFF
	mov edi,dword ptr [esp+0x60]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[esp+0x1C]
	push ecx
	push edi
	mov byte ptr [esp+0x1A8],0x4C
	mov dword ptr [esp+0x24],0
	call edx
	test eax,eax
	jge Block496

 Block495:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block496:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x6C]
	mov esi,dword ptr [esp+0x1C]
	lea ecx,[esp+0x40]
	push ecx
	push edi
	mov dword ptr [esp+0x48],0
	call edx
	test eax,eax
	jge Block498

 Block497:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block498:
	mov ecx,dword ptr [esp+0x4C]
	test ecx,ecx
	jne Block500

 Block499:
	push 0x80004003
	call _com_issue_error

 Block500:
	mov edx,dword ptr [ebp+0x60]
	sub edx,dword ptr [esp+0x44]
	lea eax,[esp+0x2C]
	push eax
	mov eax,dword ptr [esp+0x58]
	sub eax,dword ptr [esp+0x44]
	push edi
	sub edx,esi
	push edx
	push eax
	call IWzCanvas::Copy
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x1A0],0x3F
	jne Block503

 Block501:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block504

 Block502:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block504

 Block503:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block504:
	mov eax,3
	mov word ptr [esp+0x2C],ax
	mov dword ptr [esp+0x34],0xFF
	mov edi,dword ptr [esp+0xA8]
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x74]
	lea edx,[esp+0x1C]
	push edx
	push edi
	mov byte ptr [esp+0x1A8],0x4D
	mov dword ptr [esp+0x24],0
	call eax
	test eax,eax
	jge Block506

 Block505:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block506:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x6C]
	mov esi,dword ptr [esp+0x1C]
	lea edx,[esp+0x40]
	push edx
	push edi
	mov dword ptr [esp+0x48],0
	call eax
	test eax,eax
	jge Block508

 Block507:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block508:
	mov ecx,dword ptr [esp+0x4C]
	test ecx,ecx
	jne Block510

 Block509:
	push 0x80004003
	call _com_issue_error

 Block510:
	mov eax,dword ptr [ebp+0x60]
	sub eax,dword ptr [esp+0x44]
	lea edx,[esp+0x2C]
	push edx
	mov edx,dword ptr [ebp+0x5C]
	sub edx,dword ptr [esp+0x44]
	push edi
	sub edx,dword ptr [esp+0x60]
	sub eax,esi
	push eax
	push edx
	call IWzCanvas::Copy
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x1A0],0x3F
	jne Block513

 Block511:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block514

 Block512:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block514

 Block513:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block514:
	cmp dword ptr [esp+0x1B8],0x3EB
	jne Block520

 Block515:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x6C]
	lea eax,[esp+0x1C]
	push eax
	xor esi,esi
	push ebx
	mov dword ptr [esp+0x24],esi
	call ecx
	cmp eax,esi
	jge Block517

 Block516:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block517:
	mov edx,dword ptr [ebp+0x5C]
	sub edx,dword ptr [esp+0x1C]
	lea ecx,[esp+0x1C]
	sub edx,dword ptr [esp+0x58]
	push ecx
	add edx,2
	mov dword ptr [ebp+0x34],edx
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x74]
	push ebx
	mov dword ptr [esp+0x24],esi
	call edx
	cmp eax,esi
	jge Block519

 Block518:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block519:
	mov eax,dword ptr [esp+0x64]
	sub eax,dword ptr [esp+0x1C]
	add eax,4
	mov dword ptr [ebp+0x38],eax

 Block520:
	mov esi,dword ptr [esp+0x1A8]
	mov dword ptr [esi],0
	lea ecx,[esp+0x1C]
	push 0x3D0
	push ecx
	mov dword ptr [esp+0xEC],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov byte ptr [esp+0x1AC],0x4E
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x1A0],0x3F
	test eax,eax
	je Block522

 Block521:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block522:
	lea edx,[esp+0x88]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x88]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block524

 Block523:
	push eax
	call _com_issue_error

 Block524:
	lea ecx,[esp+0x2C]
	mov bl,0x4F
	push ecx
	mov byte ptr [esp+0x1A4],bl
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block526

 Block525:
	push eax
	call _com_issue_error

 Block526:
	mov edi,dword ptr [esp+0x1A8]
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x1A0],0x50
	test ecx,ecx
	jne Block528

 Block527:
	push 0x80004003
	call _com_issue_error

 Block528:
	lea eax,[esp+0x88]
	push eax
	mov eax,dword ptr [ebp+0x60]
	lea edx,[esp+0x30]
	push edx
	mov edx,dword ptr [ebp+0x5C]
	push eax
	push edx
	call IWzCanvas::Create
	mov esi,8
	mov byte ptr [esp+0x1A0],bl
	cmp word ptr [esp+0x2C],si
	jne Block531

 Block529:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block532

 Block530:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block532

 Block531:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block532:
	mov byte ptr [esp+0x1A0],0x3F
	cmp word ptr [esp+0x88],si
	jne Block535

 Block533:
	mov eax,dword ptr [esp+0x90]
	xor edx,edx
	mov word ptr [esp+0x88],dx
	test eax,eax
	je Block536

 Block534:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block536

 Block535:
	lea eax,[esp+0x88]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block536:
	mov ecx,3
	mov word ptr [esp+0x2C],cx
	mov dword ptr [esp+0x34],0xFD
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x1A0],0x51
	test ecx,ecx
	jne Block538

 Block537:
	push 0x80004003
	call _com_issue_error

 Block538:
	mov eax,dword ptr [esp+0x4C]
	lea edx,[esp+0x2C]
	push edx
	push eax
	push 0
	push 0
	call IWzCanvas::Copy
	mov byte ptr [esp+0x1A0],0x3F
	cmp word ptr [esp+0x2C],si
	jne Block541

 Block539:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block542

 Block540:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block542

 Block541:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block542:
	mov eax,dword ptr [esp+0xDC]
	mov dword ptr [esp+0x40],eax
	test eax,eax
	je Block567

 Block543:
	mov eax,dword ptr [esp+0x64]
	dec eax
	mov dword ptr [esp+0x1C],eax

 Block544:
	lea ecx,[esp+0x40]
	push ecx
	call ZList<Ztl_bstr_t>::GetNext
	add esp,4
	lea edx,[esp+0x2C]
	push edx
	mov edi,eax
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block4

 Block545:
	mov eax,dword ptr [edi]
	lea ecx,[esp+0x2C]
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block547

 Block546:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block547:
	mov ecx,dword ptr [esp+0x84]
	mov byte ptr [esp+0x1A8],0x53
	test ecx,ecx
	je Block1

 Block548:
	mov byte ptr [esp+0x1A8],0x52
	call IWzFont::CalcTextWidth
	mov ebx,8
	mov esi,eax
	mov byte ptr [esp+0x1A0],0x3F
	cmp word ptr [esp+0x2C],bx
	jne Block551

 Block549:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block552

 Block550:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block552

 Block551:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block552:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x68]
	push ecx
	call ebp
	lea edx,[esp+0x68]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block4

 Block553:
	lea eax,[esp+0x88]
	push eax
	mov byte ptr [esp+0x1A4],0x54
	call ebp
	lea ecx,[esp+0x88]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block4

 Block554:
	mov ecx,dword ptr [esp+0x7C]
	lea edx,[esp+0x68]
	push edx
	lea eax,[esp+0x8C]
	push eax
	mov eax,dword ptr [edi]
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block556

 Block555:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block556:
	mov edx,dword ptr [esp+0x1B8]
	mov ecx,dword ptr [edx]
	mov byte ptr [esp+0x1B0],0x56
	test ecx,ecx
	je Block1

 Block557:
	mov eax,dword ptr [esp+0x4C]
	mov edi,dword ptr [esp+0x2C]
	sub eax,esi
	cdq
	sub eax,edx
	sar eax,1
	add eax,dword ptr [esp+0x64]
	push edi
	push eax
	mov byte ptr [esp+0x1B8],0x55
	call IWzCanvas::DrawTextA
	mov byte ptr [esp+0x1A0],0x54
	cmp word ptr [esp+0x88],bx
	jne Block560

 Block558:
	xor eax,eax
	mov word ptr [esp+0x88],ax
	mov eax,dword ptr [esp+0x90]
	test eax,eax
	je Block561

 Block559:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block561

 Block560:
	lea ecx,[esp+0x88]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block561:
	mov byte ptr [esp+0x1A0],0x3F
	cmp word ptr [esp+0x68],bx
	jne Block564

 Block562:
	mov eax,dword ptr [esp+0x70]
	xor edx,edx
	mov word ptr [esp+0x68],dx
	test eax,eax
	je Block565

 Block563:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block565

 Block564:
	lea eax,[esp+0x68]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block565:
	add edi,dword ptr [esp+0x5C]
	cmp dword ptr [esp+0x40],0
	mov dword ptr [esp+0x1C],edi
	jne Block544

 Block566:
	mov edi,dword ptr [esp+0x1A8]

 Block567:
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x1A0],0x30
	test eax,eax
	je Block569

 Block568:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block569:
	mov eax,dword ptr [esp+0x7C]
	mov byte ptr [esp+0x1A0],0x2F
	test eax,eax
	je Block571

 Block570:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block571:
	lea ecx,[esp+0xD0]
	mov byte ptr [esp+0x1A0],0x2E
	mov dword ptr [esp+0xD0], 0
	call ZList<Ztl_bstr_t>::RemoveAll
	mov eax,dword ptr [esp+0xA4]
	mov byte ptr [esp+0x1A0],0x2A
	test eax,eax
	je Block573

 Block572:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block573:
	mov eax,dword ptr [esp+0xAC]
	mov byte ptr [esp+0x1A0],0x26
	test eax,eax
	je Block575

 Block574:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block575:
	mov eax,dword ptr [esp+0xA8]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x1A4],0x22
	call edx
	mov eax,dword ptr [esp+0xB8]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x1A4],0x1E
	call edx
	mov eax,dword ptr [esp+0x60]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x1A4],0x1A
	call edx
	mov eax,dword ptr [esp+0xB4]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x1A4],0x16
	call edx
	mov eax,dword ptr [esp+0xCC]
	mov byte ptr [esp+0x1A0],0x12
	test eax,eax
	je Block577

 Block576:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block577:
	mov eax,dword ptr [esp+0xA0]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x1A4],0xE
	call edx
	mov eax,dword ptr [esp+0xB0]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x1A4],0xA
	call edx
	mov eax,dword ptr [esp+0x98]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x1A4],6
	call edx
	mov eax,dword ptr [esp+0x80]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x1A4],2
	call edx
	mov ecx,dword ptr [esp+0x1AC]
	test ecx,ecx
	je Block579

 Block578:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x1AC],0

 Block579:
	mov eax,dword ptr [esp+0x1B4]
	mov byte ptr [esp+0x1A0],0
	test eax,eax
	je Block581

 Block580:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block581:
	mov eax,edi
	mov ecx,dword ptr [esp+0x198]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x190
	ret 0x18
}
}
// CChatBalloon::MakeMobBalloon
_SUB_EXCEPTION_HANDLER(A9AC0)
__SUB_CLASS_THIS(000A9AC0, __thiscall, 23470,  CChatBalloon, void, NakedParam<Ztl_bstr_t>, NakedParam<_x_com_ptr<IWzGr2DLayer>>, NakedParam<_x_com_ptr<IWzVector2D>>, long, long, long, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_A9AC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x5C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x20],ecx
	mov edx,dword ptr [ebp+0xC]
	mov esi,dword ptr [ebp+0x10]
	xor edi,edi
	cmp edx,edi
	sete al
	mov dword ptr [ebp-4],2
	test al,al
	jne Block70

 Block1:
	cmp esi,edi
	sete al
	test al,al
	jne Block70

 Block2:
	lea eax,[ebp-0x1C]
	push 0x59A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	lea eax,[edi+0x20]
	mov byte ptr [ebp-4],3
	call __chkstk
	mov esi,esp
	push 0xFFFFFFFF
	push offset _S___10
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-0x18],edi
	call ZXString16::AssignCharStr
	lea ecx,[ebp-0x14]
	push 0x666
	push ecx
	mov byte ptr [ebp-4],4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	lea edx,[ebp-0x18]
	push edx
	lea ecx,[ebp-0x24]
	push ecx
	mov ecx,eax
	mov byte ptr [ebp-4],5
	call ZXString16::op_add_1
	mov edi,eax
	mov edx,dword ptr [ebp+0x18]
	push 0xA
	push esi
	mov bl,6
	push edx
	mov byte ptr [ebp-4],bl
	call __itow
	add esp,0xC
	push eax
	lea eax,[ebp-0x28]
	push eax
	mov ecx,edi
	call ZXString16::op_add_0
	mov eax,dword ptr [eax]
	xor edi,edi
	mov byte ptr [ebp-4],7
	cmp eax,edi
	je Block4

 Block3:
	mov ecx,dword ptr [eax-4]
	shr ecx,1
	jmp Block5

 Block4:
	xor ecx,ecx

 Block5:
	push ecx
	push eax
	lea ecx,[ebp-0x1C]
	call ZXString16::_Cat
	mov eax,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],bl
	cmp eax,edi
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block7:
	mov eax,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],5
	cmp eax,edi
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block9:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],4
	cmp eax,edi
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block11:
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],3
	cmp eax,edi
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block13:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x38]
	push ecx
	call esi
	lea edx,[ebp-0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	lea eax,[ebp-0x48]
	push eax
	mov byte ptr [ebp-4],8
	call esi
	lea ecx,[ebp-0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	push edi
	push edi
	lea edx,[ebp-0x38]
	push edx
	mov edx,dword ptr [ebp-0x1C]
	lea eax,[ebp-0x48]
	push eax
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	mov bl,9
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0xA
	cmp dword ptr [_D_G_RM],edi
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	lea eax,[ebp-0x58]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-0x18],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block22

 Block20:
	cmp eax,0x80004002
	je Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	mov esi,8
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp-0x58],si
	jne Block25

 Block23:
	mov eax,dword ptr [ebp-0x50]
	xor ecx,ecx
	mov word ptr [ebp-0x58],cx
	cmp eax,edi
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea edx,[ebp-0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0x48],si
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [ebp-0x48],ax
	mov eax,dword ptr [ebp-0x40]
	cmp eax,edi
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[ebp-0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov bl,0xF
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x38],si
	jne Block33

 Block31:
	mov eax,dword ptr [ebp-0x30]
	xor edx,edx
	mov word ptr [ebp-0x38],dx
	cmp eax,edi
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea eax,[ebp-0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov esi,dword ptr [ebp-0x18]
	cmp esi,edi
	sete al
	test al,al
	je Block45

 Block35:
	mov byte ptr [ebp-4],3
	cmp esi,edi
	je Block37

 Block36:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block37:
	mov eax,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],2
	cmp eax,edi
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block39:
	mov ecx,dword ptr [ebp+8]
	cmp ecx,edi
	je Block41

 Block40:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+8],edi

 Block41:
	mov eax,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],0
	cmp eax,edi
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block43:
	mov eax,dword ptr [ebp+0x10]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,edi
	je Block76

 Block44:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block76

 Block45:
	push edi
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push offset _S_SCREENCHAT
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x10
	cmp esi,edi
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	lea eax,[ebp-0x68]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x11
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x68],8
	mov edi,eax
	mov byte ptr [ebp-4],bl
	jne Block50

 Block48:
	mov eax,dword ptr [ebp-0x60]
	xor ecx,ecx
	mov word ptr [ebp-0x68],cx
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea edx,[ebp-0x68]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov edx,dword ptr [ebp+0x18]
	test edi,edi
	je Block55

 Block52:
	mov eax,dword ptr [ebp+0x20]
	mov ecx,dword ptr [ebp+0x14]
	push eax
	push ecx
	push edx
	push ecx
	mov ecx,dword ptr [ebp+8]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-0x14],esp
	test eax,eax
	je Block54

 Block53:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block54:
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [ebp-0x14],esp
	push esi
	call eax
	mov ecx,dword ptr [ebp-0x20]
	call CChatBalloon::MakeScreenBalloon
	jmp Block62

 Block55:
	mov ecx,dword ptr [ebp+0x20]
	mov eax,dword ptr [ebp+0x14]
	push ecx
	push 0
	push 0
	push edx
	push 0x3EC
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x10]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x10]
	mov dword ptr [ebp-0x14],esp
	test eax,eax
	je Block57

 Block56:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block57:
	push ecx
	mov ecx,dword ptr [ebp+0xC]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [ebp-0x14],esp
	test eax,eax
	je Block59

 Block58:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block59:
	push ecx
	mov ecx,dword ptr [ebp+8]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-0x14],esp
	test eax,eax
	je Block61

 Block60:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block61:
	mov ecx,dword ptr [ebp-0x20]
	call CChatBalloon::MakeBalloon

 Block62:
	mov edx,dword ptr [ebp+0x1C]
	mov ecx,dword ptr [ebp-0x20]
	push edx
	call CChatBalloon::SetFadeDelay
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],3
	call ecx
	mov eax,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block64

 Block63:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block64:
	mov ecx,dword ptr [ebp+8]
	test ecx,ecx
	je Block66

 Block65:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+8],0

 Block66:
	mov eax,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block68

 Block67:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block68:
	mov eax,dword ptr [ebp+0x10]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block76

 Block69:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block76

 Block70:
	mov ecx,dword ptr [ebp+8]
	cmp ecx,edi
	je Block72

 Block71:
	call _xbstr_t::Data_t::Release
	mov esi,dword ptr [ebp+0x10]
	mov edx,dword ptr [ebp+0xC]
	mov dword ptr [ebp+8],edi

 Block72:
	mov byte ptr [ebp-4],0
	cmp edx,edi
	je Block74

 Block73:
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [eax+8]
	push edx
	call ecx
	mov esi,dword ptr [ebp+0x10]

 Block74:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp esi,edi
	je Block76

 Block75:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block76:
	lea esp,[ebp-0x78]
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
	ret 0x1C
}
}
// CChatBalloon::CChatBalloon
_SUB_EXCEPTION_HANDLER(A2620)
__SUB_CLASS_THIS0(000A2620, __thiscall, 23462,  CChatBalloon, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_A2620
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
	mov esi,ecx
	mov dword ptr [esp+0x20],esi
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CChatBalloon::`vftable'
	mov dword ptr [esi+4],edi
	mov dword ptr [esp+0x60],edi
	mov dword ptr [esi+8],edi
	mov dword ptr [esi+0xC],edi
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esi+0x14],edi
	mov dword ptr [esi+0x18],edi
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 4
	push 4
	lea ebp,[esi+0x1C]
	push ebp
	mov byte ptr [esp+0x74],5
	call __eh_vector_ctor_iterator
	lea eax,[esp+0x14]
	push 0x1A71
	push eax
	mov byte ptr [esp+0x68],6
	mov dword ptr [esi+0x54],edi
	mov dword ptr [esi+0x5C],edi
	mov dword ptr [esi+0x60],edi
	mov dword ptr [esi+0x64],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0x64],7
	call ebx
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea eax,[esp+0x28]
	push eax
	mov byte ptr [esp+0x64],8
	call ebx
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push edi
	push edi
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x2C]
	push 0x5C7
	push ecx
	mov byte ptr [esp+0x78],9
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea edx,[esp+0x2C]
	push edx
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x78],0xA
	call Ztl_bstr_t::op_add_0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block6

 Block5:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	mov byte ptr [esp+0x74],0xC
	cmp dword ptr [_D_G_RM],edi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[esp+0x5C]
	mov bl,0xB
	mov byte ptr [esp+0x74],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x68],0xD
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,ebp
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
	mov byte ptr [esp+0x60],bl
	mov ebx,8
	cmp word ptr [esp+0x48],bx
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	cmp eax,edi
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,edi
	je Block17

 Block16:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x18],edi

 Block17:
	mov ecx,dword ptr [esp+0x1C]
	cmp ecx,edi
	je Block19

 Block18:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x1C],edi

 Block19:
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x28],bx
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,edi
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov byte ptr [esp+0x60],7
	cmp word ptr [esp+0x38],bx
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	cmp eax,edi
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block27:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
	push ecx
	call ebp
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x64],0xE
	call ebp
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block31

 Block30:
	push eax
	call _com_issue_error

 Block31:
	push edi
	push edi
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x44]
	push eax
	lea ecx,[esp+0x28]
	push 0x5C9
	push ecx
	mov byte ptr [esp+0x78],0xF
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea edx,[esp+0x30]
	push edx
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x78],0x10
	call Ztl_bstr_t::op_add_0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block33

 Block32:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block33:
	mov byte ptr [esp+0x74],0x12
	cmp dword ptr [_D_G_RM],edi
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	lea eax,[esp+0x5C]
	mov bl,0x11
	mov byte ptr [esp+0x74],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x68],0x13
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x20]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block38

 Block36:
	cmp eax,0x80004002
	je Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	mov byte ptr [esp+0x60],bl
	mov ebx,8
	cmp word ptr [esp+0x48],bx
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	cmp eax,edi
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov ecx,dword ptr [esp+0x1C]
	cmp ecx,edi
	je Block44

 Block43:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x1C],edi

 Block44:
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,edi
	je Block46

 Block45:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x18],edi

 Block46:
	mov byte ptr [esp+0x60],0xE
	cmp word ptr [esp+0x38],bx
	jne Block49

 Block47:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,edi
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	mov byte ptr [esp+0x60],7
	cmp word ptr [esp+0x28],bx
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,edi
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block54:
	lea ecx,[esp+0x28]
	push ecx
	call ebp
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x64],0x14
	call ebp
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block58

 Block57:
	push eax
	call _com_issue_error

 Block58:
	push edi
	push edi
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x44]
	push eax
	lea ecx,[esp+0x28]
	push 0x5CD
	push ecx
	mov byte ptr [esp+0x78],0x15
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea edx,[esp+0x30]
	push edx
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x78],0x16
	call Ztl_bstr_t::op_add_0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block60

 Block59:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block60:
	mov byte ptr [esp+0x74],0x18
	cmp dword ptr [_D_G_RM],edi
	jne Block62

 Block61:
	push 0x80004003
	call _com_issue_error

 Block62:
	lea eax,[esp+0x5C]
	mov bl,0x17
	mov byte ptr [esp+0x74],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x68],0x19
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x28]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block65

 Block63:
	cmp eax,0x80004002
	je Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	mov byte ptr [esp+0x60],bl
	mov ebx,8
	cmp word ptr [esp+0x48],bx
	jne Block68

 Block66:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	cmp eax,edi
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	mov ecx,dword ptr [esp+0x1C]
	cmp ecx,edi
	je Block71

 Block70:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x1C],edi

 Block71:
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,edi
	je Block73

 Block72:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x18],edi

 Block73:
	mov byte ptr [esp+0x60],0x14
	cmp word ptr [esp+0x38],bx
	jne Block76

 Block74:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,edi
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block77:
	mov byte ptr [esp+0x60],7
	cmp word ptr [esp+0x28],bx
	jne Block80

 Block78:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,edi
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block81:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [esi+0x3C],edi
	cmp ecx,edi
	je Block83

 Block82:
	call _xbstr_t::Data_t::Release

 Block83:
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
// CChatBalloon::DestroyMiniRoomBalloon
__SUB_CLASS_THIS0(000A1A00, __thiscall, 23464,  CChatBalloon, void) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+4]
	xor ebx,ebx
	push edi
	cmp eax,ebx
	je Block2

 Block1:
	mov dword ptr [esi+4],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x18]
	cmp eax,ebx
	je Block4

 Block3:
	mov dword ptr [esi+0x18],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0x18]
	mov edi,dword ptr [esi+0x14]
	cmp edi,eax
	je Block9

 Block5:
	mov dword ptr [esi+0x14],eax
	cmp eax,ebx
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block7:
	cmp edi,ebx
	je Block9

 Block8:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block9:
	mov eax,dword ptr [esi+0x14]
	mov edi,dword ptr [esi+0x10]
	cmp edi,eax
	je Block14

 Block10:
	mov dword ptr [esi+0x10],eax
	cmp eax,ebx
	je Block12

 Block11:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block12:
	cmp edi,ebx
	je Block14

 Block13:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block14:
	pop edi
	mov dword ptr [esi+0x54],ebx
	pop esi
	pop ebx
	ret
}
}
// CChatBalloon::ADBoardMouseMove
_SUB_EXCEPTION_HANDLER(A1CE0)
__SUB_CLASS_THIS(000A1CE0, __thiscall, 23478,  CChatBalloon, void, NakedParam<tagPOINT>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_A1CE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor edi,edi
	cmp dword ptr [esi+8],edi
	sete al
	test al,al
	jne Block28

 Block1:
	mov eax,dword ptr [esp+0x44]
	mov ecx,dword ptr [esp+0x40]
	push eax
	push ecx
	mov ecx,esi
	call CChatBalloon::MousePointCheck
	lea edx,[edi+3]
	test eax,eax
	je Block13

 Block2:
	mov word ptr [esp+0x10],dx
	mov dword ptr [esp+0x18],edi
	mov ecx,dword ptr [esi+8]
	mov dword ptr [esp+0x38],edi
	cmp ecx,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea eax,[esp+0x10]
	push eax
	lea edx,[esp+0x10]
	push edx
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x10],8
	mov byte ptr [esp+0x38],2
	jne Block7

 Block5:
	xor eax,eax
	mov word ptr [esp+0x10],ax
	mov eax,dword ptr [esp+0x18]
	cmp eax,edi
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea ecx,[esp+0x10]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block8:
	mov edx,3
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],0xFD
	mov edi,dword ptr [esp+0xC]
	mov eax,dword ptr [esi+0x28]
	mov byte ptr [esp+0x38],dl
	test edi,edi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov edx,dword ptr [esi+0x38]
	lea ecx,[esp+0x20]
	push ecx
	push eax
	mov eax,dword ptr [esi+0x34]
	push edx
	push eax
	mov ecx,edi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x38],2
	jne Block12

 Block11:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	jmp Block23

 Block12:
	lea edx,[esp+0x20]
	jmp Block26

 Block13:
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],edi
	mov ecx,dword ptr [esi+8]
	mov dword ptr [esp+0x38],4
	cmp ecx,edi
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea eax,[esp+0x20]
	push eax
	lea edx,[esp+0x10]
	push edx
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x38],6
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,edi
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov edx,3
	mov word ptr [esp+0x10],dx
	mov dword ptr [esp+0x18],0xFD
	mov edi,dword ptr [esp+0xC]
	mov eax,dword ptr [esi+0x1C]
	mov byte ptr [esp+0x38],7
	test edi,edi
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	mov edx,dword ptr [esi+0x38]
	lea ecx,[esp+0x10]
	push ecx
	push eax
	mov eax,dword ptr [esi+0x34]
	push edx
	push eax
	mov ecx,edi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x10],8
	mov byte ptr [esp+0x38],6
	jne Block25

 Block22:
	mov eax,dword ptr [esp+0x18]
	xor ecx,ecx
	mov word ptr [esp+0x10],cx

 Block23:
	test eax,eax
	je Block27

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block25:
	lea edx,[esp+0x10]

 Block26:
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block27:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call ecx

 Block28:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x30
	ret 8
}
}
// CChatBalloon::MousePointCheck
__SUB_CLASS_THIS(000A1220, __thiscall, 23479,  CChatBalloon, int32_t, NakedParam<tagPOINT>) {
__asm {

 Block0:
	sub esp,0x18
	push edi
	mov edi,ecx
	cmp dword ptr [edi+8],0
	jne Block2

 Block1:
	xor eax,eax
	pop edi
	add esp,0x18
	ret 8

 Block2:
	push esi
	push 0xC
	push 0xC
	push 0
	push 0
	lea eax,[esp+0x20]
	push eax
	call SetRect
	mov esi,dword ptr [edi+8]
	test esi,esi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x28]
	lea edx,[esp+8]
	push edx
	push esi
	mov dword ptr [esp+0x10],0
	call eax
	test eax,eax
	jge Block6

 Block5:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	mov esi,dword ptr [edi+8]
	push ebx
	mov ebx,dword ptr [esp+0xC]
	test esi,esi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[esp+0x10]
	push edx
	push esi
	mov dword ptr [esp+0x18],0
	call eax
	test eax,eax
	jge Block10

 Block9:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	mov ecx,dword ptr [edi+0x38]
	mov edx,dword ptr [edi+0x34]
	add edx,dword ptr [esp+0x10]
	add ecx,ebx
	push ecx
	push edx
	lea eax,[esp+0x1C]
	push eax
	call OffsetRect
	mov ecx,dword ptr [esp+0x2C]
	mov edx,dword ptr [esp+0x28]
	push ecx
	push edx
	lea eax,[esp+0x1C]
	push eax
	call PtInRect
	pop ebx
	pop esi
	pop edi
	add esp,0x18
	ret 8
}
}
// CChatBalloon::AdjustCoordY
_SUB_EXCEPTION_HANDLER(A1300)
__SUB_CLASS_THIS(000A1300, __thiscall, 23480,  CChatBalloon, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_A1300
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
	cmp dword ptr [esi+4],0
	mov ebp,dword ptr [esp+0x64]
	mov edi,dword ptr [ZImports::_VariantInit]
	mov dword ptr [esi+0x50],ebp
	je Block15

 Block1:
	lea eax,[esp+0x24]
	push eax
	call edi
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block3

 Block2:
	push eax
	call _com_issue_error

 Block3:
	lea edx,[esp+0x14]
	push edx
	mov dword ptr [esp+0x60],0
	call edi
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov ecx,dword ptr [esi+4]
	mov byte ptr [esp+0x5C],1
	test ecx,ecx
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea edx,[esp+0x24]
	push edx
	mov edx,dword ptr [esi+0x4C]
	lea eax,[esp+0x18]
	push eax
	mov eax,dword ptr [esi+0x48]
	sub edx,ebp
	sub edx,5
	push edx
	push eax
	call IWzVector2D::RelMove
	mov ebx,8
	mov byte ptr [esp+0x5C],0
	cmp word ptr [esp+0x14],bx
	jne Block10

 Block8:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block11

 Block9:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block11

 Block10:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block11:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp word ptr [esp+0x24],bx
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	cmp dword ptr [esi+8],0
	je Block30

 Block16:
	lea edx,[esp+0x14]
	push edx
	call edi
	lea eax,[esp+0x14]
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
	lea ecx,[esp+0x24]
	mov ebx,2
	push ecx
	mov dword ptr [esp+0x60],ebx
	call edi
	lea edx,[esp+0x24]
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
	mov ecx,dword ptr [esi+8]
	mov byte ptr [esp+0x5C],3
	test ecx,ecx
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea eax,[esp+0x14]
	push eax
	mov eax,dword ptr [esi+0x30]
	lea edx,[esp+0x28]
	push edx
	mov edx,dword ptr [esi+0x2C]
	sub eax,ebp
	sub eax,5
	push eax
	push edx
	call IWzVector2D::RelMove
	mov byte ptr [esp+0x5C],bl
	mov ebx,8
	cmp word ptr [esp+0x24],bx
	jne Block25

 Block23:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp word ptr [esp+0x14],bx
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block30:
	cmp dword ptr [esi+0x10],0
	je Block45

 Block31:
	lea ecx,[esp+0x14]
	push ecx
	call edi
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	lea eax,[esp+0x24]
	mov ebx,4
	push eax
	mov dword ptr [esp+0x60],ebx
	call edi
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	mov ecx,dword ptr [esi+0x10]
	mov byte ptr [esp+0x5C],5
	test ecx,ecx
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	lea edx,[esp+0x14]
	push edx
	mov edx,dword ptr [esi+0x4C]
	lea eax,[esp+0x28]
	push eax
	mov eax,dword ptr [esi+0x48]
	sub edx,ebp
	sub edx,5
	push edx
	push eax
	call IWzVector2D::RelMove
	mov byte ptr [esp+0x5C],bl
	mov ebx,8
	cmp word ptr [esp+0x24],bx
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp word ptr [esp+0x14],bx
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	cmp dword ptr [esi+0x14],0
	je Block60

 Block46:
	lea edx,[esp+0x14]
	push edx
	call edi
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	lea ecx,[esp+0x24]
	mov ebx,6
	push ecx
	mov dword ptr [esp+0x60],ebx
	call edi
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block50

 Block49:
	push eax
	call _com_issue_error

 Block50:
	mov ecx,dword ptr [esi+0x14]
	mov byte ptr [esp+0x5C],7
	test ecx,ecx
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	lea eax,[esp+0x14]
	push eax
	mov eax,dword ptr [esi+0x4C]
	lea edx,[esp+0x28]
	push edx
	mov edx,dword ptr [esi+0x48]
	sub eax,ebp
	sub eax,5
	push eax
	push edx
	call IWzVector2D::RelMove
	mov byte ptr [esp+0x5C],bl
	mov ebx,8
	cmp word ptr [esp+0x24],bx
	jne Block55

 Block53:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp word ptr [esp+0x14],bx
	jne Block59

 Block57:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block60:
	cmp dword ptr [esi+0x18],0
	je Block75

 Block61:
	lea ecx,[esp+0x44]
	push ecx
	call edi
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block63

 Block62:
	push eax
	call _com_issue_error

 Block63:
	lea eax,[esp+0x34]
	mov ebx,8
	push eax
	mov dword ptr [esp+0x60],ebx
	call edi
	lea ecx,[esp+0x34]
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
	mov ecx,dword ptr [esi+0x18]
	mov byte ptr [esp+0x5C],9
	test ecx,ecx
	jne Block67

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	lea edx,[esp+0x44]
	push edx
	mov edx,dword ptr [esi+0x4C]
	lea eax,[esp+0x38]
	push eax
	mov eax,dword ptr [esi+0x48]
	sub edx,ebp
	sub edx,5
	push edx
	push eax
	call IWzVector2D::RelMove
	mov byte ptr [esp+0x5C],8
	cmp word ptr [esp+0x34],bx
	jne Block70

 Block68:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block71:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp word ptr [esp+0x44],bx
	jne Block74

 Block72:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret 4
}
}
// CChatBalloon::CheckTimeOut
_SUB_EXCEPTION_HANDLER(A2060)
__SUB_CLASS_THIS(000A2060, __thiscall, 23481,  CChatBalloon, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_A2060
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+4],0
	lea edi,[esi+4]
	je Block11

 Block1:
	cmp dword ptr [esi+0x54],0
	jne Block11

 Block2:
	call get_update_time
	sub eax,dword ptr [esi+0x44]
	sub eax,dword ptr [esi+0x40]
	mov esi,dword ptr [esi+0x64]
	mov ecx,esi
	sub ecx,eax
	test eax,eax
	jle Block8

 Block3:
	test esi,esi
	je Block9

 Block4:
	test ecx,ecx
	jle Block9

 Block5:
	mov eax,ecx
	imul eax,0xFF
	cdq
	idiv esi
	push offset _D_VTMISSING
	lea ecx,[esp+0x20]
	mov esi,eax
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x38],0
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x3C]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x38],1
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getalpha
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x10]
	push edx
	push 0
	push esi
	mov ecx,eax
	mov byte ptr [esp+0x44],2
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x34],1
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	lea ecx,[esp+0xC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x1C]
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x2C
	ret 4

 Block8:
	cmp dword ptr [esp+0x3C],0
	je Block11

 Block9:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block11

 Block10:
	mov dword ptr [edi],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x2C
	ret 4
}
}
// CChatBalloon::MakeScreenBalloon
_SUB_EXCEPTION_HANDLER(A94F0)
__SUB_CLASS_THIS(000A94F0, __thiscall, 23472,  CChatBalloon, void, NakedParam<_x_com_ptr<IWzProperty>>, NakedParam<Ztl_bstr_t>, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_A94F0
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
	mov ebp,ecx
	mov dword ptr [esp+0x14],ebp
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x5AE
	push eax
	mov dword ptr [esp+0x58],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x58]
	mov byte ptr [esp+0x50],2
	test ecx,ecx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x38]
	push edx
	mov byte ptr [esp+0x54],1
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x50],3
	call get_int32
	add esp,8
	cmp word ptr [esp+0x30],8
	mov esi,eax
	mov byte ptr [esp+0x48],1
	jne Block5

 Block3:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block6

 Block4:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block6

 Block5:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block6:
	mov edx,dword ptr [esp+0x60]
	push edx
	push 0x3ED
	push ecx
	mov ecx,dword ptr [esp+0x5C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [esp+0x6C],esp
	test eax,eax
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block8:
	push esi
	push ecx
	mov ecx,dword ptr [esp+0x68]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x74],esp
	test eax,eax
	je Block10

 Block9:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block10:
	lea edx,[esp+0x2C]
	push edx
	mov ecx,ebp
	call CChatBalloon::CreateCanvas
	xor esi,esi
	mov dword ptr [esp+0x60],esi
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push eax
	mov byte ptr [esp+0x4C],5
	call edi
	lea ecx,[esp+0x30]
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
	lea edx,[esp+0x20]
	mov bl,6
	push edx
	mov byte ptr [esp+0x4C],bl
	call edi
	lea eax,[esp+0x20]
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
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x48],7
	test ecx,ecx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	mov eax,dword ptr [ebp+0x60]
	mov edi,dword ptr [ebp+0x5C]
	lea edx,[esp+0x30]
	push edx
	lea edx,[esp+0x24]
	push edx
	push 0xC00616FC
	push eax
	cdq
	sub eax,edx
	sar eax,1
	mov edx,0x64
	sub edx,eax
	push edi
	push edx
	mov eax,0x320
	sub eax,edi
	cdq
	sub eax,edx
	sar eax,1
	push eax
	lea eax,[esp+0x38]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov esi,eax
	push eax
	mov dword ptr [esp+0x64],esi
	call edx

 Block18:
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	mov ebp,8
	mov byte ptr [esp+0x48],bl
	cmp word ptr [esp+0x20],bp
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
	mov edi,dword ptr [ZImports::_VariantClear]

 Block24:
	mov byte ptr [esp+0x48],5
	cmp word ptr [esp+0x30],bp
	jne Block28

 Block25:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block29

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block27:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x20]
	push ecx
	call edi
	jmp Block24

 Block28:
	lea eax,[esp+0x30]
	push eax
	call edi

 Block29:
	push 0
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov edx,0xD
	mov byte ptr [esp+0x48],8
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],eax
	test eax,eax
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block31:
	mov byte ptr [esp+0x48],9
	test esi,esi
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
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
	jge Block35

 Block34:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block35:
	mov byte ptr [esp+0x48],8
	cmp word ptr [esp+0x20],bp
	jne Block38

 Block36:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea edx,[esp+0x20]
	push edx
	call edi

 Block39:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x48],5
	test eax,eax
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block41:
	mov eax,3
	mov word ptr [esp+0x30],ax
	mov dword ptr [esp+0x38],0
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x20]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x50],0xA
	call IWzGr2DLayer::Getcanvas
	mov bl,0xC
	mov byte ptr [esp+0x48],bl
	cmp word ptr [esp+0x30],bp
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[esp+0x30]
	push ecx
	call edi

 Block45:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],ecx
	mov edi,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x48],0xD
	test edi,edi
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	mov ebp,dword ptr [esp+0x20]
	mov edx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x34]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [edx+0x80]
	push eax
	push 0
	push 0
	push edi
	call ecx
	test eax,eax
	jge Block49

 Block48:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block49:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x48],bl
	jne Block52

 Block50:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block53:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push esi
	call edx
	test eax,eax
	jge Block55

 Block54:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block55:
	mov eax,dword ptr [esp+0x14]
	mov ebp,dword ptr [eax+4]
	mov ebx,eax
	cmp ebp,esi
	je Block58

 Block56:
	mov dword ptr [ebx+4],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx
	test ebp,ebp
	je Block58

 Block57:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block58:
	call get_update_time
	mov edx,dword ptr [esp+0x5C]
	mov dword ptr [ebx+0x40],eax
	mov dword ptr [ebx+0x44],edx
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [esp+0x4C],5
	call ecx
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0x4C],4
	call eax
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x48],1
	test eax,eax
	je Block60

 Block59:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block60:
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block62

 Block61:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block62:
	mov ecx,dword ptr [esp+0x54]
	test ecx,ecx
	je Block64

 Block63:
	call _xbstr_t::Data_t::Release

 Block64:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x38
	ret 0x14
}
}
// CChatBalloon::GetMiniRoomBalloonRect
_SUB_EXCEPTION_HANDLER(A1A80)
__SUB_CLASS_THIS(000A1A80, __thiscall, 23475,  CChatBalloon, void, tagRECT&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_A1A80
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
	mov edi,ecx
	mov dword ptr [esp+0x24],edi
	xor ebx,ebx
	cmp dword ptr [edi+4],ebx
	sete al
	cmp al,bl
	je Block2

 Block1:
	mov eax,dword ptr [esp+0x58]
	push eax
	call SetRectEmpty
	jmp Block35

 Block2:
	mov ecx,3
	mov word ptr [esp+0x38],cx
	mov dword ptr [esp+0x40],ebx
	mov edx,ecx
	mov dword ptr [esp+0x50],ebx
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],ebx
	mov ecx,dword ptr [edi+4]
	mov byte ptr [esp+0x50],1
	cmp ecx,ebx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea eax,[esp+0x38]
	push eax
	lea edx,[esp+0x24]
	push edx
	call IWzGr2DLayer::Getcanvas
	mov esi,eax
	mov ecx,dword ptr [edi+4]
	mov byte ptr [esp+0x50],2
	cmp ecx,ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x28]
	push eax
	lea edx,[esp+0x20]
	push edx
	call IWzGr2DLayer::Getcanvas
	mov edi,eax
	mov esi,dword ptr [esi]
	mov byte ptr [esp+0x50],3
	cmp esi,ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x14]
	push ecx
	push esi
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
	mov esi,dword ptr [edi]
	mov ebp,dword ptr [esp+0x14]
	cmp esi,ebx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x18]
	push ecx
	push esi
	mov dword ptr [esp+0x20],ebx
	call edx
	cmp eax,ebx
	jge Block14

 Block13:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block14:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x58]
	push ebp
	push eax
	push ebx
	push ebx
	push ecx
	call SetRect
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x50],2
	cmp eax,ebx
	je Block16

 Block15:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block16:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x50],1
	cmp eax,ebx
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [esp+0x50],bl
	cmp word ptr [esp+0x28],di
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebx
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[esp+0x28]
	push ecx
	call esi

 Block22:
	mov dword ptr [esp+0x50],0xFFFFFFFF
	cmp word ptr [esp+0x38],di
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	cmp eax,ebx
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[esp+0x38]
	push eax
	call esi

 Block26:
	mov edi,dword ptr [esp+0x24]
	mov esi,dword ptr [edi+4]
	cmp esi,ebx
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x28]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],ebx
	call eax
	cmp eax,ebx
	jge Block30

 Block29:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block30:
	mov esi,dword ptr [edi+4]
	mov ebp,dword ptr [esp+0x18]
	cmp esi,ebx
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],ebx
	call eax
	cmp eax,ebx
	jge Block34

 Block33:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block34:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x58]
	push ebp
	push ecx
	push edx
	call OffsetRect

 Block35:
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret 4
}
}
// CChatBalloon::MakeBalloon
_SUB_EXCEPTION_HANDLER(A84F0)
__SUB_CLASS_THIS(000A84F0, __thiscall, 23468,  CChatBalloon, void, NakedParam<Ztl_bstr_t>, NakedParam<_x_com_ptr<IWzGr2DLayer>>, NakedParam<_x_com_ptr<IWzVector2D>>, long, long, long, int32_t, long, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x48]
	sub esp,0x48
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_A84F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x94
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x44],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [ebp+0x18],edi
	xor esi,esi
	mov dword ptr [ebp-4],esi
	mov eax,3
	mov word ptr [ebp-0x54],ax
	mov dword ptr [ebp-0x4C],esi
	mov ecx,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],al
	cmp ecx,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x54]
	push edx
	lea eax,[ebp+0x38]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp dword ptr [eax],esi
	mov eax,dword ptr [ebp+0x38]
	sete bl
	mov byte ptr [ebp-4],3
	cmp eax,esi
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	cmp word ptr [ebp-0x54],8
	mov byte ptr [ebp-4],2
	jne Block7

 Block5:
	xor eax,eax
	mov word ptr [ebp-0x54],ax
	mov eax,dword ptr [ebp-0x4C]
	cmp eax,esi
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea ecx,[ebp-0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block8:
	test bl,bl
	je Block14

 Block9:
	mov ecx,dword ptr [ebp+0x50]
	cmp ecx,esi
	je Block11

 Block10:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x50],esi

 Block11:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0
	cmp eax,esi
	je Block13

 Block12:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block13:
	mov eax,dword ptr [ebp+0x58]
	cmp eax,esi
	jmp Block240

 Block14:
	mov dword ptr [ebp+0x20],esi
	mov byte ptr [ebp-4],5
	cmp dword ptr [edi+0x54],esi
	je Block20

 Block15:
	mov ecx,dword ptr [ebp+0x50]
	cmp ecx,esi
	je Block17

 Block16:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x50],esi

 Block17:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0
	cmp eax,esi
	je Block19

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block19:
	mov eax,dword ptr [ebp+0x58]
	cmp eax,esi
	jmp Block240

 Block20:
	lea eax,[ebp+0x34]
	push 0x59A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [ebp-4],6
	cmp dword ptr [ebp+0x68],esi
	je Block24

 Block21:
	lea ecx,[ebp+0x38]
	push 0x1AA8
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],7
	cmp ecx,esi
	je Block23

 Block22:
	mov eax,dword ptr [ecx-4]
	shr eax,1
	push eax
	push ecx
	lea ecx,[ebp+0x34]
	call ZXString16::_Cat
	mov eax,dword ptr [ebp+0x38]
	cmp eax,esi
	jmp Block47

 Block23:
	xor eax,eax
	push eax
	push ecx
	lea ecx,[ebp+0x34]
	call ZXString16::_Cat
	mov eax,dword ptr [ebp+0x38]
	cmp eax,esi
	jmp Block47

 Block24:
	mov eax,dword ptr [ebp+0x60]
	add eax,0xFFFFFC18
	cmp eax,4
	ja Block49

 Block25:
	cmp EAX, 0
je Block26
cmp EAX, 1
je Block27
cmp EAX, 2
je Block28
cmp EAX, 3
je Block33
cmp EAX, 4
je Block38


 Block26:
	mov eax,0x20
	call __chkstk
	mov edx,dword ptr [ebp+0x64]
	mov eax,esp
	push eax
	push edx
	call _Int2StrW
	add esp,8
	push eax
	lea ecx,[ebp+0x34]
	call ZXString16::op_add_assign_t_0
	jmp Block49

 Block27:
	lea eax,[ebp+0x38]
	push 0x59B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x34]
	mov byte ptr [ebp-4],8
	call ZXString16::op_add_assign_other_1
	mov eax,dword ptr [ebp+0x38]
	jmp Block46

 Block28:
	mov eax,0x20
	call __chkstk
	mov esi,esp
	push 0xFFFFFFFF
	push offset _S___10
	lea ecx,[ebp+0x3C]
	call ZXString16::CreateFromCharStr
	lea ecx,[ebp-0x68]
	push 0x1AC6
	push ecx
	mov byte ptr [ebp-4],9
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	lea edx,[ebp+0x3C]
	push edx
	lea ecx,[ebp+0x1C]
	push ecx
	mov ecx,eax
	mov byte ptr [ebp-4],0xA
	call ZXString16::op_add_1
	mov edi,eax
	mov edx,dword ptr [ebp+0x64]
	push esi
	mov bl,0xB
	push edx
	mov byte ptr [ebp-4],bl
	call _Int2StrW
	add esp,8
	push eax
	lea eax,[ebp-0x30]
	push eax
	mov ecx,edi
	call ZXString16::op_add_0
	push eax
	lea ecx,[ebp+0x34]
	mov byte ptr [ebp-4],0xC
	call ZXString16::op_add_assign_other_1
	mov eax,dword ptr [ebp-0x30]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block30:
	mov eax,dword ptr [ebp+0x1C]
	mov byte ptr [ebp-4],0xA
	test eax,eax
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block32:
	mov eax,dword ptr [ebp-0x68]
	mov byte ptr [ebp-4],9
	jmp Block43

 Block33:
	mov eax,0x20
	call __chkstk
	mov esi,esp
	push 0xFFFFFFFF
	push offset _S___10
	lea ecx,[ebp+0x3C]
	call ZXString16::CreateFromCharStr
	lea ecx,[ebp+4]
	push 0x59C
	push ecx
	mov byte ptr [ebp-4],0xD
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	lea edx,[ebp+0x3C]
	push edx
	lea ecx,[ebp-0x6C]
	push ecx
	mov ecx,eax
	mov byte ptr [ebp-4],0xE
	call ZXString16::op_add_1
	mov edi,eax
	mov edx,dword ptr [ebp+0x64]
	push esi
	mov bl,0xF
	push edx
	mov byte ptr [ebp-4],bl
	call _Int2StrW
	add esp,8
	push eax
	lea eax,[ebp-0x70]
	push eax
	mov ecx,edi
	call ZXString16::op_add_0
	push eax
	lea ecx,[ebp+0x34]
	mov byte ptr [ebp-4],0x10
	call ZXString16::op_add_assign_other_1
	mov eax,dword ptr [ebp-0x70]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block35:
	mov eax,dword ptr [ebp-0x6C]
	mov byte ptr [ebp-4],0xE
	test eax,eax
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block37:
	mov eax,dword ptr [ebp+4]
	mov byte ptr [ebp-4],0xD
	jmp Block43

 Block38:
	mov eax,0x20
	call __chkstk
	mov esi,esp
	push 0xFFFFFFFF
	push offset _S___10
	lea ecx,[ebp+0x3C]
	call ZXString16::CreateFromCharStr
	lea ecx,[ebp+0x40]
	push 0x666
	push ecx
	mov byte ptr [ebp-4],0x11
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	lea edx,[ebp+0x3C]
	push edx
	lea ecx,[ebp]
	push ecx
	mov ecx,eax
	mov byte ptr [ebp-4],0x12
	call ZXString16::op_add_1
	mov edi,eax
	mov edx,dword ptr [ebp+0x64]
	push esi
	mov bl,0x13
	push edx
	mov byte ptr [ebp-4],bl
	call _Int2StrW
	add esp,8
	push eax
	lea eax,[ebp-0x34]
	push eax
	mov ecx,edi
	call ZXString16::op_add_0
	push eax
	lea ecx,[ebp+0x34]
	mov byte ptr [ebp-4],0x14
	call ZXString16::op_add_assign_other_1
	mov eax,dword ptr [ebp-0x34]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block40

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block40:
	mov eax,dword ptr [ebp]
	mov byte ptr [ebp-4],0x12
	test eax,eax
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block42:
	mov eax,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0x11

 Block43:
	test eax,eax
	je Block45

 Block44:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block45:
	mov eax,dword ptr [ebp+0x3C]

 Block46:
	test eax,eax

 Block47:
	mov byte ptr [ebp-4],6
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block49:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x80]
	push ecx
	call edi
	lea edx,[ebp-0x80]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	lea eax,[ebp-0x54]
	push eax
	mov byte ptr [ebp-4],0x15
	call edi
	lea ecx,[ebp-0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block53

 Block52:
	push eax
	call _com_issue_error

 Block53:
	push 0
	push 0
	lea edx,[ebp-0x80]
	push edx
	mov edx,dword ptr [ebp+0x34]
	lea eax,[ebp-0x54]
	push eax
	push ecx
	mov dword ptr [ebp+0x40],esp
	mov ecx,esp
	mov bl,0x16
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x17
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	lea eax,[ebp-0x90]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x18
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x3C]
	mov dword ptr [ebp+0x3C],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block58

 Block56:
	cmp eax,0x80004002
	je Block58

 Block57:
	push eax
	call _com_issue_error

 Block58:
	mov esi,8
	mov byte ptr [ebp-4],0x1A
	cmp word ptr [ebp-0x90],si
	jne Block61

 Block59:
	mov eax,dword ptr [ebp-0x88]
	xor ecx,ecx
	mov word ptr [ebp-0x90],cx
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea edx,[ebp-0x90]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block62:
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [ebp-0x54],si
	jne Block65

 Block63:
	xor eax,eax
	mov word ptr [ebp-0x54],ax
	mov eax,dword ptr [ebp-0x4C]
	test eax,eax
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea ecx,[ebp-0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block66:
	mov byte ptr [ebp-4],0x1C
	cmp word ptr [ebp-0x80],si
	jne Block69

 Block67:
	mov eax,dword ptr [ebp-0x78]
	xor edx,edx
	mov word ptr [ebp-0x80],dx
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea eax,[ebp-0x80]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov esi,dword ptr [ebp+0x3C]
	xor ebx,ebx
	cmp esi,ebx
	sete al
	test al,al
	je Block80

 Block71:
	mov byte ptr [ebp-4],6
	cmp esi,ebx
	je Block73

 Block72:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block73:
	mov eax,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],5
	cmp eax,ebx
	je Block75

 Block74:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block75:
	mov ecx,dword ptr [ebp+0x50]
	cmp ecx,ebx
	je Block77

 Block76:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x50],ebx

 Block77:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0
	cmp eax,ebx
	je Block79

 Block78:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block79:
	mov eax,dword ptr [ebp+0x58]
	cmp eax,ebx
	jmp Block240

 Block80:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x40],esp
	push 0x5AE
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x1D
	cmp esi,ebx
	jne Block82

 Block81:
	push 0x80004003
	call _com_issue_error

 Block82:
	lea ecx,[ebp+0x24]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0x1C
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1E
	call get_int32
	add esp,8
	cmp word ptr [ebp+0x24],8
	mov dword ptr [ebp+0x38],eax
	mov byte ptr [ebp-4],0x1C
	jne Block85

 Block83:
	mov eax,dword ptr [ebp+0x2C]
	xor edx,edx
	mov word ptr [ebp+0x24],dx
	cmp eax,ebx
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea eax,[ebp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block86:
	lea ecx,[ebp+8]
	push ecx
	call edi
	lea edx,[ebp+8]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block88

 Block87:
	push eax
	call _com_issue_error

 Block88:
	mov eax,3
	mov word ptr [ebp-0x1C],ax
	mov dword ptr [ebp-0x14],ebx
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0x20
	cmp ecx,ebx
	jne Block90

 Block89:
	push 0x80004003
	call _com_issue_error

 Block90:
	lea edx,[ebp+8]
	push edx
	lea eax,[ebp-0x1C]
	push eax
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	lea edx,[ebp+0x40]
	push edx
	call IWzGr2D::CreateLayer
	push eax
	lea ecx,[ebp+0x20]
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [ebp+0x40]
	cmp eax,ebx
	je Block92

 Block91:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block92:
	mov edi,8
	mov byte ptr [ebp-4],0x1F
	cmp word ptr [ebp-0x1C],di
	jne Block95

 Block93:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	cmp eax,ebx
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	mov byte ptr [ebp-4],0x1C
	cmp word ptr [ebp+8],di
	jne Block99

 Block97:
	mov eax,dword ptr [ebp+0x10]
	xor edx,edx
	mov word ptr [ebp+8],dx
	cmp eax,ebx
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea eax,[ebp+8]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block100:
	cmp dword ptr [ebp+0x60],0x3EB
	jne Block102

 Block101:
	lea ecx,[ebp+0x20]
	push ecx
	mov ecx,dword ptr [ebp+0x18]
	add ecx,edi
	jmp Block103

 Block102:
	mov ecx,dword ptr [ebp+0x18]
	lea edx,[ebp+0x20]
	push edx
	add ecx,4

 Block103:
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,0xD
	mov word ptr [ebp+8],ax
	mov eax,dword ptr [ebp+0x58]
	mov dword ptr [ebp+0x10],eax
	cmp eax,ebx
	je Block105

 Block104:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block105:
	mov ebx,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x21
	test ebx,ebx
	jne Block107

 Block106:
	push 0x80004003
	call _com_issue_error

 Block107:
	lea eax,[ebp+8]
	push eax
	mov ecx,ebx
	call IWzVector2D::Putorigin
	mov edi,8
	mov byte ptr [ebp-4],0x1C
	cmp word ptr [ebp+8],di
	jne Block110

 Block108:
	mov eax,dword ptr [ebp+0x10]
	xor ecx,ecx
	mov word ptr [ebp+8],cx
	test eax,eax
	je Block111

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block111

 Block110:
	lea edx,[ebp+8]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block111:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+0xB4]
	push 0xC00613DC
	push ebx
	call ecx
	test eax,eax
	jge Block113

 Block112:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebx
	push eax
	call _com_issue_errorex

 Block113:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push ebx
	call eax
	test eax,eax
	jge Block115

 Block114:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebx
	push eax
	call _com_issue_errorex

 Block115:
	xor ebx,ebx
	mov dword ptr [ebp-0x30],ebx
	push 0x78
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push 0x1AA9
	push ecx
	mov byte ptr [ebp-4],0x22
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x24]
	mov byte ptr [ebp-4],0x23
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x22
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x24
	call get_int32
	add esp,8
	mov dword ptr [ebp],eax
	mov byte ptr [ebp-4],0x22
	cmp word ptr [ebp+0x24],di
	jne Block118

 Block116:
	xor eax,eax
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp+0x2C]
	cmp eax,ebx
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea ecx,[ebp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block119:
	mov dword ptr [ebp+0x1C],ebx

 Block120:
	mov eax,0x20
	call __chkstk
	mov edx,dword ptr [ebp+0x1C]
	mov eax,esp
	push 0xA
	push eax
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp+4],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0xA0]
	mov byte ptr [ebp-4],0x25
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x22
	call IWzProperty::Getitem
	push eax
	lea ecx,[ebp+0x40]
	push ecx
	mov byte ptr [ebp-4],0x26
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x27
	mov dword ptr [ebp+4],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block122

 Block121:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block122:
	lea ecx,[ebp-0x30]
	call _x_com_ptr<IWzProperty>::_QueryUnknownComPtr
	test eax,eax
	jge Block124

 Block123:
	cmp eax,0x80004002
	jne Block50

 Block124:
	mov edi,dword ptr [ebp-0x30]
	mov eax,dword ptr [ebp+0x40]
	test edi,edi
	setne bl
	mov byte ptr [ebp-4],0x26
	test eax,eax
	je Block126

 Block125:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block126:
	cmp word ptr [ebp-0xA0],8
	mov byte ptr [ebp-4],0x22
	jne Block129

 Block127:
	xor eax,eax
	mov word ptr [ebp-0xA0],ax
	mov eax,dword ptr [ebp-0x98]
	test eax,eax
	je Block130

 Block128:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block130

 Block129:
	lea ecx,[ebp-0xA0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block130:
	test bl,bl
	je Block167

 Block131:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x24]
	push edx
	call ebx
	lea eax,[ebp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block50

 Block132:
	lea ecx,[ebp-0x2C]
	push ecx
	mov byte ptr [ebp-4],0x28
	call ebx
	lea edx,[ebp-0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block50

 Block133:
	lea eax,[ebp-0x44]
	push eax
	mov byte ptr [ebp-4],0x29
	call ebx
	lea ecx,[ebp-0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block50

 Block134:
	lea edx,[ebp-0x1C]
	push edx
	mov byte ptr [ebp-4],0x2A
	call ebx
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block50

 Block135:
	mov edx,dword ptr [ebp]
	mov ecx,3
	mov word ptr [ebp+8],cx
	mov dword ptr [ebp+0x10],edx
	lea eax,[ebp+0x24]
	push eax
	lea ecx,[ebp-0x2C]
	push ecx
	lea edx,[ebp-0x44]
	push edx
	mov edx,dword ptr [ebp+0x70]
	lea eax,[ebp-0x1C]
	push eax
	mov eax,dword ptr [ebp+0x60]
	lea ecx,[ebp+8]
	push ecx
	push edx
	push eax
	push ecx
	mov eax,esp
	mov byte ptr [ebp-4],0x2C
	mov dword ptr [ebp+4],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block137

 Block136:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx

 Block137:
	mov eax,dword ptr [ebp+0x38]
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x50]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x50]
	mov dword ptr [ebp+4],esp
	test eax,eax
	je Block139

 Block138:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block139:
	mov ecx,dword ptr [ebp+0x18]
	lea edx,[ebp-0x34]
	push edx
	call CChatBalloon::CreateCanvas
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [ebp+0x20]
	push eax
	lea eax,[ebp-0x64]
	push eax
	mov byte ptr [ebp-4],0x2D
	call IWzGr2DLayer::InsertCanvas
	mov ebx,8
	cmp word ptr [ebp-0x64],bx
	jne Block148

 Block140:
	mov eax,dword ptr [ebp-0x5C]
	xor ecx,ecx
	mov word ptr [ebp-0x64],cx
	test eax,eax
	je Block142

 Block141:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block142:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block143:
	mov eax,dword ptr [ebp-0x34]
	mov byte ptr [ebp-4],0x2C
	test eax,eax
	je Block145

 Block144:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block145:
	mov byte ptr [ebp-4],0x2B
	cmp word ptr [ebp+8],bx
	jne Block149

 Block146:
	xor eax,eax
	mov word ptr [ebp+8],ax
	mov eax,dword ptr [ebp+0x10]
	test eax,eax
	je Block150

 Block147:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block150

 Block148:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp-0x64]
	push edx
	call edi
	jmp Block143

 Block149:
	lea ecx,[ebp+8]
	push ecx
	call edi

 Block150:
	mov byte ptr [ebp-4],0x2A
	cmp word ptr [ebp-0x1C],bx
	jne Block153

 Block151:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block154

 Block152:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block154

 Block153:
	lea eax,[ebp-0x1C]
	push eax
	call edi

 Block154:
	mov byte ptr [ebp-4],0x29
	cmp word ptr [ebp-0x44],bx
	jne Block157

 Block155:
	mov eax,dword ptr [ebp-0x3C]
	xor ecx,ecx
	mov word ptr [ebp-0x44],cx
	test eax,eax
	je Block158

 Block156:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block158

 Block157:
	lea edx,[ebp-0x44]
	push edx
	call edi

 Block158:
	mov byte ptr [ebp-4],0x28
	cmp word ptr [ebp-0x2C],bx
	jne Block161

 Block159:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block162

 Block160:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block162

 Block161:
	lea ecx,[ebp-0x2C]
	push ecx
	call edi

 Block162:
	mov byte ptr [ebp-4],0x22
	cmp word ptr [ebp+0x24],bx
	jne Block165

 Block163:
	mov eax,dword ptr [ebp+0x2C]
	xor edx,edx
	mov word ptr [ebp+0x24],dx
	test eax,eax
	je Block166

 Block164:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc dword ptr [ebp+0x1C]
	jmp Block120

 Block165:
	lea eax,[ebp+0x24]
	push eax
	call edi

 Block166:
	inc dword ptr [ebp+0x1C]
	jmp Block120

 Block167:
	cmp dword ptr [ebp+0x1C],0
	je Block179

 Block168:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x2C]
	push ecx
	call esi
	lea edx,[ebp-0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block170

 Block169:
	push eax
	call _com_issue_error

 Block170:
	lea eax,[ebp+0x24]
	mov bl,0x2E
	push eax
	mov byte ptr [ebp-4],bl
	call esi
	lea ecx,[ebp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block172

 Block171:
	push eax
	call _com_issue_error

 Block172:
	mov ecx,dword ptr [ebp+0x20]
	lea edx,[ebp-0x2C]
	push edx
	lea eax,[ebp+0x24]
	push eax
	push 0x20
	mov byte ptr [ebp-4],0x2F
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x24],si
	jne Block175

 Block173:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	test eax,eax
	je Block176

 Block174:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block176

 Block175:
	lea edx,[ebp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block176:
	mov byte ptr [ebp-4],0x22
	cmp word ptr [ebp-0x2C],si
	jne Block178

 Block177:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	jmp Block216

 Block178:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block219

 Block179:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x1C]
	push edx
	call ebx
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block181

 Block180:
	push eax
	call _com_issue_error

 Block181:
	lea ecx,[ebp+8]
	push ecx
	mov byte ptr [ebp-4],0x30
	call ebx
	lea edx,[ebp+8]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block183

 Block182:
	push eax
	call _com_issue_error

 Block183:
	lea eax,[ebp-0x44]
	push eax
	mov byte ptr [ebp-4],0x31
	call ebx
	lea ecx,[ebp-0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block185

 Block184:
	push eax
	call _com_issue_error

 Block185:
	lea edx,[ebp-0x2C]
	push edx
	mov byte ptr [ebp-4],0x32
	call ebx
	lea eax,[ebp-0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block187

 Block186:
	push eax
	call _com_issue_error

 Block187:
	lea ecx,[ebp+0x24]
	push ecx
	mov byte ptr [ebp-4],0x33
	call ebx
	lea edx,[ebp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block189

 Block188:
	push eax
	call _com_issue_error

 Block189:
	lea eax,[ebp-0x1C]
	push eax
	lea ecx,[ebp+8]
	push ecx
	lea edx,[ebp-0x44]
	push edx
	mov edx,dword ptr [ebp+0x70]
	lea eax,[ebp-0x2C]
	push eax
	mov eax,dword ptr [ebp+0x60]
	lea ecx,[ebp+0x24]
	push ecx
	push edx
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [ebp],esp
	mov bl,0x34
	push esi
	mov byte ptr [ebp-4],bl
	call edx
	mov eax,dword ptr [ebp+0x38]
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x50]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x50]
	mov dword ptr [ebp],esp
	test eax,eax
	je Block191

 Block190:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block191:
	mov ecx,dword ptr [ebp+0x18]
	lea edx,[ebp+0x40]
	push edx
	call CChatBalloon::CreateCanvas
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [ebp+0x20]
	push eax
	lea eax,[ebp-0x64]
	push eax
	mov byte ptr [ebp-4],0x35
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x64],8
	jne Block200

 Block192:
	mov eax,dword ptr [ebp-0x5C]
	xor ecx,ecx
	mov word ptr [ebp-0x64],cx
	test eax,eax
	je Block194

 Block193:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block194:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block195:
	mov eax,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block197

 Block196:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block197:
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],0x33
	jne Block201

 Block198:
	xor eax,eax
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp+0x2C]
	test eax,eax
	je Block202

 Block199:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block202

 Block200:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp-0x64]
	push edx
	call esi
	jmp Block195

 Block201:
	lea ecx,[ebp+0x24]
	push ecx
	call esi

 Block202:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0x32
	jne Block205

 Block203:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block206

 Block204:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block206

 Block205:
	lea eax,[ebp-0x2C]
	push eax
	call esi

 Block206:
	cmp word ptr [ebp-0x44],8
	mov byte ptr [ebp-4],0x31
	jne Block209

 Block207:
	mov eax,dword ptr [ebp-0x3C]
	xor ecx,ecx
	mov word ptr [ebp-0x44],cx
	test eax,eax
	je Block210

 Block208:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block210

 Block209:
	lea edx,[ebp-0x44]
	push edx
	call esi

 Block210:
	cmp word ptr [ebp+8],8
	mov byte ptr [ebp-4],0x30
	jne Block213

 Block211:
	xor eax,eax
	mov word ptr [ebp+8],ax
	mov eax,dword ptr [ebp+0x10]
	test eax,eax
	je Block214

 Block212:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block214

 Block213:
	lea ecx,[ebp+8]
	push ecx
	call esi

 Block214:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0x22
	jne Block218

 Block215:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx

 Block216:
	test eax,eax
	je Block219

 Block217:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block219

 Block218:
	lea eax,[ebp-0x1C]
	push eax
	call esi

 Block219:
	call get_update_time
	mov ecx,dword ptr [ebp+0x18]
	mov edx,dword ptr [ebp+0x5C]
	mov dword ptr [ecx+0x40],eax
	mov eax,3
	mov dword ptr [ecx+0x44],edx
	mov word ptr [ebp+0x24],ax
	mov dword ptr [ebp+0x2C],0
	mov ecx,dword ptr [ebp+0x54]
	mov bl,0x36
	mov byte ptr [ebp-4],bl
	test ecx,ecx
	jne Block221

 Block220:
	push 0x80004003
	call _com_issue_error

 Block221:
	lea edx,[ebp+0x24]
	push edx
	lea eax,[ebp+0x40]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],0x37
	test esi,esi
	jne Block223

 Block222:
	push 0x80004003
	call _com_issue_error

 Block223:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x74]
	lea edx,[ebp+0x38]
	push edx
	push esi
	mov dword ptr [ebp+0x38],0
	call eax
	test eax,eax
	jge Block225

 Block224:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block225:
	mov ecx,dword ptr [ebp+0x6C]
	mov edx,dword ptr [ebp+0x38]
	add edx,ecx
	mov ecx,dword ptr [ebp+0x18]
	push edx
	call CChatBalloon::AdjustCoordY
	mov eax,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block227

 Block226:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block227:
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],0x22
	jne Block230

 Block228:
	xor eax,eax
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp+0x2C]
	test eax,eax
	je Block231

 Block229:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block231

 Block230:
	lea ecx,[ebp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block231:
	mov byte ptr [ebp-4],0x1C
	test edi,edi
	je Block233

 Block232:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block233:
	mov eax,dword ptr [ebp+0x3C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],6
	call edx
	mov eax,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],5
	test eax,eax
	je Block235

 Block234:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block235:
	mov eax,dword ptr [ebp+0x20]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],2
	call edx
	mov ecx,dword ptr [ebp+0x50]
	test ecx,ecx
	je Block237

 Block236:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x50],0

 Block237:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block239

 Block238:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block239:
	mov eax,dword ptr [ebp+0x58]
	test eax,eax

 Block240:
	mov dword ptr [ebp-4],0xFFFFFFFF
	je Block242

 Block241:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block242:
	lea esp,[ebp-0xB0]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x44]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x48
	mov esp,ebp
	pop ebp
	ret 0x24
}
}
// CChatBalloon::MakeMiniRoomBalloon
_SUB_EXCEPTION_HANDLER(A2D90)
__SUB_CLASS_THIS(000A2D90, __thiscall, 23474,  CChatBalloon, void, long, NakedParam<Ztl_bstr_t>, long, NakedParam<_x_com_ptr<IWzVector2D>>, int32_t, long, long, long, int32_t) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x48]
	sub esp,0x48
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_A2D90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x100
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x44],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x30],ecx
	xor esi,esi
	mov dword ptr [ebp+0x24],esi
	mov dword ptr [ebp-4],esi
	mov dword ptr [ebp-0x5C],esi
	mov dword ptr [ebp-0xB0],esi
	mov dword ptr [ebp-0x78],esi
	mov dword ptr [ebp-0x80],esi
	mov dword ptr [ebp+0x10],esi
	mov dword ptr [ebp-0x48],esi
	mov dword ptr [ebp-0x8C],esi
	mov dword ptr [ebp-0xBC],esi
	mov dword ptr [ebp-0x60],esi
	mov dword ptr [ebp-0xB4],esi
	mov dword ptr [ebp-0x84],esi
	mov dword ptr [ebp-0x38],esi
	mov dword ptr [ebp-0x7C],esi
	mov dword ptr [ebp-0x88],esi
	lea eax,[ebp-0x44]
	push 0x1A15
	push eax
	mov byte ptr [ebp-4],0xF
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x6C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp-0x7C]
	push edx
	mov byte ptr [ebp-4],0x10
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x44]
	add esp,0xC
	mov byte ptr [ebp-4],0xF
	cmp eax,esi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea eax,[ebp-0x44]
	push 0x1A15
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x68]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp-0x88]
	push edx
	mov byte ptr [ebp-4],0x11
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x44]
	add esp,0xC
	mov byte ptr [ebp-4],0xF
	cmp eax,esi
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x28]
	push eax
	call edi
	lea ecx,[ebp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea edx,[ebp-0x1C]
	push edx
	mov byte ptr [ebp-4],0x12
	call edi
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	push esi
	push esi
	lea ecx,[ebp+0x28]
	push ecx
	lea edx,[ebp-0x1C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x38],esp
	push 0x5B3
	mov bl,0x13
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x14
	cmp dword ptr [_D_G_RM],esi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea ecx,[ebp-0xAC]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x15
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x5C]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block13

 Block11:
	cmp eax,0x80004002
	je Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],bl
	mov ebx,8
	cmp word ptr [ebp-0xAC],bx
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0xA4]
	xor edx,edx
	mov word ptr [ebp-0xAC],dx
	cmp eax,esi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea eax,[ebp-0xAC]
	push eax
	call edi

 Block17:
	mov byte ptr [ebp-4],0x12
	cmp word ptr [ebp-0x1C],bx
	jne Block20

 Block18:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	cmp eax,esi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[ebp-0x1C]
	push edx
	call edi

 Block21:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp+0x28],bx
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [ebp+0x28],ax
	mov eax,dword ptr [ebp+0x30]
	cmp eax,esi
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[ebp+0x28]
	push ecx
	call edi

 Block25:
	mov eax,dword ptr [ebp+0x50]
	dec eax
	cmp eax,4
	ja Block640

 Block26:
	mov edi,dword ptr [ebp-0x5C]
	mov ebx,dword ptr [ebp+0x64]
	cmp EAX, 0
je Block88
cmp EAX, 1
je Block101
cmp EAX, 2
je Block640
cmp EAX, 3
je Block27
cmp EAX, 4
je Block36


 Block27:
	lea edx,[ebp-0x44]
	push 0x987
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebx
	push eax
	lea eax,[ebp-0x38]
	push eax
	mov byte ptr [ebp-4],0x16
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x44]
	add esp,0xC
	mov byte ptr [ebp-4],0xF
	cmp eax,esi
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	mov ebx,dword ptr [ebp-0x38]
	push 0
	push 0
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x40],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x17
	test edi,edi
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	lea ecx,[ebp-0xAC]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0xF
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x18
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x3C]
	call _x_com_ptr<IWzCanvas>::CreateFromUnknown
	push eax
	lea ecx,[ebp-0x48]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov eax,dword ptr [ebp+0x3C]
	test eax,eax
	je Block33

 Block32:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block33:
	cmp word ptr [ebp-0xAC],8
	mov byte ptr [ebp-4],0xF
	jne Block35

 Block34:
	mov eax,dword ptr [ebp-0xA4]
	xor ecx,ecx
	mov word ptr [ebp-0xAC],cx
	jmp Block116

 Block35:
	lea edx,[ebp-0xAC]
	push edx
	call dword ptr [ZImports::_VariantClear]
	jmp Block85

 Block36:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x1C]
	push eax
	call edi
	lea ecx,[ebp-0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	lea edx,[ebp+0x28]
	push edx
	mov byte ptr [ebp-4],0x19
	call edi
	lea eax,[ebp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	push esi
	push esi
	lea ecx,[ebp-0x1C]
	push ecx
	lea edx,[ebp+0x28]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x40],esp
	push 0xD9E
	mov bl,0x1A
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x1B
	cmp dword ptr [_D_G_RM],esi
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	lea ecx,[ebp-0x74]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x1C
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0xB0]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block45

 Block43:
	cmp eax,0x80004002
	je Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x74],di
	jne Block48

 Block46:
	mov eax,dword ptr [ebp-0x6C]
	xor edx,edx
	mov word ptr [ebp-0x74],dx
	cmp eax,esi
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea eax,[ebp-0x74]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block49:
	mov byte ptr [ebp-4],0x19
	cmp word ptr [ebp+0x28],di
	jne Block52

 Block50:
	mov eax,dword ptr [ebp+0x30]
	xor ecx,ecx
	mov word ptr [ebp+0x28],cx
	cmp eax,esi
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea edx,[ebp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block53:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x1C],di
	jne Block56

 Block54:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	cmp eax,esi
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block57:
	lea edx,[ebp-0x40]
	push 0xDA2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x64]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp-0x38]
	push edx
	mov byte ptr [ebp-4],0x1D
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x40]
	add esp,0xC
	mov byte ptr [ebp-4],0xF
	cmp eax,esi
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block59:
	mov edi,dword ptr [ebp-0x38]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x40],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov ebx,dword ptr [ebp-0xB0]
	mov byte ptr [ebp-4],0x1E
	test ebx,ebx
	jne Block61

 Block60:
	push 0x80004003
	call _com_issue_error

 Block61:
	lea eax,[ebp-0xF0]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0xF
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x78]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block64

 Block62:
	cmp eax,0x80004002
	je Block64

 Block63:
	push eax
	call _com_issue_error

 Block64:
	mov esi,8
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0xF0],si
	jne Block67

 Block65:
	mov eax,dword ptr [ebp-0xE8]
	xor ecx,ecx
	mov word ptr [ebp-0xF0],cx
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea edx,[ebp-0xF0]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block68:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x40],esp
	push 0xDA4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp-0x78]
	mov byte ptr [ebp-4],0x20
	test ecx,ecx
	jne Block70

 Block69:
	push 0x80004003
	call _com_issue_error

 Block70:
	lea edx,[ebp-0xE0]
	push edx
	mov byte ptr [ebp-4],0xF
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x21
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x3C]
	call _x_com_ptr<IWzCanvas>::CreateFromUnknown
	push eax
	lea ecx,[ebp-0x48]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov eax,dword ptr [ebp-0x3C]
	test eax,eax
	je Block72

 Block71:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block72:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0xE0],si
	jne Block75

 Block73:
	xor eax,eax
	mov word ptr [ebp-0xE0],ax
	mov eax,dword ptr [ebp-0xD8]
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea ecx,[ebp-0xE0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block76:
	lea edx,[ebp-0x10C]
	push 0xDA3
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x64]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp-0x38]
	push edx
	mov byte ptr [ebp-4],0x22
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x10C]
	add esp,0xC
	mov byte ptr [ebp-4],0xF
	test eax,eax
	je Block78

 Block77:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block78:
	mov edi,dword ptr [ebp-0x38]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x40],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x100]
	mov byte ptr [ebp-4],0x23
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0xF
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x24
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x80]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block81

 Block79:
	cmp eax,0x80004002
	je Block81

 Block80:
	push eax
	call _com_issue_error

 Block81:
	cmp word ptr [ebp-0x100],8
	mov byte ptr [ebp-4],0xF
	jne Block87

 Block82:
	mov eax,dword ptr [ebp-0xF8]
	xor ecx,ecx
	mov word ptr [ebp-0x100],cx
	test eax,eax
	je Block84

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block84:
	mov edi,dword ptr [ebp-0x5C]

 Block85:
	mov esi,dword ptr [ebp-0x48]
	xor ebx,ebx
	cmp esi,ebx
	jne Block120

 Block86:
	push 0x80004003
	call _com_issue_error

 Block87:
	lea edx,[ebp-0x100]
	push edx
	call dword ptr [ZImports::_VariantClear]
	jmp Block84

 Block88:
	push esi
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x40],esp
	push 0x5B5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x25
	cmp edi,esi
	jne Block90

 Block89:
	push 0x80004003
	call _com_issue_error

 Block90:
	lea ecx,[ebp-0x9C]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0xF
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x26
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x104]
	call _x_com_ptr<IWzCanvas>::CreateFromUnknown
	push eax
	lea ecx,[ebp-0x8C]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov eax,dword ptr [ebp-0x104]
	cmp eax,esi
	je Block92

 Block91:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block92:
	mov ebx,8
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x9C],bx
	jne Block95

 Block93:
	mov eax,dword ptr [ebp-0x94]
	xor ecx,ecx
	mov word ptr [ebp-0x9C],cx
	cmp eax,esi
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea edx,[ebp-0x9C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	push esi
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x40],esp
	push 0x1AA0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x58]
	push ecx
	mov byte ptr [ebp-4],0x27
	mov ecx,edi
	mov byte ptr [ebp-4],0xF
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x28
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x108]
	call _x_com_ptr<IWzCanvas>::CreateFromUnknown
	push eax
	lea ecx,[ebp-0x48]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov eax,dword ptr [ebp-0x108]
	cmp eax,esi
	je Block98

 Block97:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block98:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x58],bx
	jne Block100

 Block99:
	mov eax,dword ptr [ebp-0x50]
	xor ecx,ecx
	mov word ptr [ebp-0x58],cx
	cmp eax,esi
	jmp Block117

 Block100:
	lea edx,[ebp-0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]
	jmp Block85

 Block101:
	push esi
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x40],esp
	push 0x1AA0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x29
	cmp edi,esi
	jne Block103

 Block102:
	push 0x80004003
	call _com_issue_error

 Block103:
	lea ecx,[ebp-0xD0]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0xF
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x2A
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0xB8]
	call _x_com_ptr<IWzCanvas>::CreateFromUnknown
	push eax
	lea ecx,[ebp-0x48]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov eax,dword ptr [ebp-0xB8]
	cmp eax,esi
	je Block105

 Block104:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block105:
	cmp word ptr [ebp-0xD0],8
	mov byte ptr [ebp-4],0xF
	jne Block108

 Block106:
	mov eax,dword ptr [ebp-0xC8]
	xor ecx,ecx
	mov word ptr [ebp-0xD0],cx
	cmp eax,esi
	je Block109

 Block107:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block109

 Block108:
	lea edx,[ebp-0xD0]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block109:
	lea eax,[ebp+0x38]
	push 0x5B7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebx
	push eax
	lea ecx,[ebp-0x38]
	push ecx
	mov byte ptr [ebp-4],0x2B
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x38]
	add esp,0xC
	mov byte ptr [ebp-4],0xF
	cmp eax,esi
	je Block111

 Block110:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block111:
	mov ebx,dword ptr [ebp-0x38]
	push 0
	push 0
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x40],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	lea edx,[ebp]
	mov byte ptr [ebp-4],0x2C
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0xF
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x2D
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x8C]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block114

 Block112:
	cmp eax,0x80004002
	je Block114

 Block113:
	push eax
	call _com_issue_error

 Block114:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0xF
	jne Block119

 Block115:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]

 Block116:
	test eax,eax

 Block117:
	je Block85

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block119:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block85

 Block120:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x6C]
	lea eax,[ebp-0x3C]
	push eax
	push esi
	mov dword ptr [ebp-0x3C],ebx
	call ecx
	cmp eax,ebx
	jge Block122

 Block121:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block122:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x74]
	lea eax,[ebp-0x40]
	push eax
	push esi
	mov dword ptr [ebp-0x40],ebx
	call ecx
	cmp eax,ebx
	jge Block124

 Block123:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block124:
	cmp dword ptr [ebp+0x60],ebx
	je Block126

 Block125:
	lea edx,[ebp+0x38]
	push 0x5B8
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [ebp+0x24],1
	jmp Block127

 Block126:
	lea eax,[ebp+0x3C]
	push 0x5B9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [ebp+0x24],2

 Block127:
	mov eax,dword ptr [eax]
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block129

 Block128:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block129:
	mov dword ptr [ebp-4],0x30
	cmp edi,ebx
	jne Block131

 Block130:
	push 0x80004003
	call _com_issue_error

 Block131:
	lea ecx,[ebp]
	push ecx
	mov bl,0x2F
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [ebp-4],0x31
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0xBC]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	xor esi,esi
	cmp eax,esi
	jge Block134

 Block132:
	cmp eax,0x80004002
	je Block134

 Block133:
	push eax
	call _com_issue_error

 Block134:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],bl
	jne Block137

 Block135:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	cmp eax,esi
	je Block138

 Block136:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block138

 Block137:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block138:
	mov ebx,dword ptr [ebp+0x24]
	test bl,2
	je Block141

 Block139:
	mov ecx,dword ptr [ebp+0x3C]
	and ebx,0xFFFFFFFD
	mov dword ptr [ebp+0x24],ebx
	cmp ecx,esi
	je Block141

 Block140:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x3C],esi

 Block141:
	mov dword ptr [ebp-4],0xF
	test bl,1
	je Block144

 Block142:
	mov ecx,dword ptr [ebp+0x38]
	and ebx,0xFFFFFFFE
	mov dword ptr [ebp+0x24],ebx
	cmp ecx,esi
	je Block144

 Block143:
	call _xbstr_t::Data_t::Release

 Block144:
	push esi
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push 0x5BA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp]
	mov byte ptr [ebp-4],0x32
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0xF
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x33
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0xB4]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block147

 Block145:
	cmp eax,0x80004002
	je Block147

 Block146:
	push eax
	call _com_issue_error

 Block147:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0xF
	jne Block150

 Block148:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	cmp eax,esi
	je Block151

 Block149:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block151

 Block150:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block151:
	push esi
	push esi
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x40],esp
	push 0x5BB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp]
	mov byte ptr [ebp-4],0x34
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0xF
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x35
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x84]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block154

 Block152:
	cmp eax,0x80004002
	je Block154

 Block153:
	push eax
	call _com_issue_error

 Block154:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0xF
	jne Block157

 Block155:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	cmp eax,esi
	je Block158

 Block156:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block158

 Block157:
	lea edx,[ebp]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block158:
	mov eax,dword ptr [ebp+0x50]
	cmp eax,4
	jne Block175

 Block159:
	mov eax,dword ptr [ebp+0x68]
	cmp dword ptr [ebp+0x6C],eax
	jge Block161

 Block160:
	lea ecx,[ebp+0x38]
	push 0x5BC
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	or ebx,4
	jmp Block162

 Block161:
	lea edx,[ebp+0x3C]
	push 0x5BD
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	or ebx,8

 Block162:
	mov eax,dword ptr [eax]
	push esi
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x24],ebx
	mov dword ptr [ebp+0x40],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block164

 Block163:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block164:
	lea eax,[ebp]
	mov dword ptr [ebp-4],0x38
	mov bl,0x37
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [ebp-4],0x39
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x60]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block167

 Block165:
	cmp eax,0x80004002
	je Block167

 Block166:
	push eax
	call _com_issue_error

 Block167:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],bl
	jne Block170

 Block168:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	cmp eax,esi
	je Block171

 Block169:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block171

 Block170:
	lea edx,[ebp]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block171:
	mov ebx,dword ptr [ebp+0x24]
	test bl,8
	je Block174

 Block172:
	mov ecx,dword ptr [ebp+0x3C]
	and ebx,0xFFFFFFF7
	cmp ecx,esi
	je Block174

 Block173:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x3C],esi

 Block174:
	test bl,4
	jmp Block192

 Block175:
	cmp eax,5
	jne Block195

 Block176:
	mov eax,dword ptr [ebp+0x68]
	dec eax
	cmp dword ptr [ebp+0x6C],eax
	jge Block178

 Block177:
	lea ecx,[ebp+0x38]
	push 0x5BC
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	or ebx,0x10
	jmp Block179

 Block178:
	lea edx,[ebp+0x3C]
	push 0x5BD
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	or ebx,0x20

 Block179:
	mov eax,dword ptr [eax]
	push esi
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x24],ebx
	mov dword ptr [ebp+0x40],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block181

 Block180:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block181:
	lea eax,[ebp]
	mov dword ptr [ebp-4],0x3C
	mov bl,0x3B
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [ebp-4],0x3D
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x60]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block184

 Block182:
	cmp eax,0x80004002
	je Block184

 Block183:
	push eax
	call _com_issue_error

 Block184:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],bl
	jne Block187

 Block185:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	cmp eax,esi
	je Block188

 Block186:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block188

 Block187:
	lea edx,[ebp]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block188:
	mov ebx,dword ptr [ebp+0x24]
	test bl,0x20
	je Block191

 Block189:
	mov ecx,dword ptr [ebp+0x3C]
	and ebx,0xFFFFFFDF
	cmp ecx,esi
	je Block191

 Block190:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x3C],esi

 Block191:
	test bl,0x10

 Block192:
	mov dword ptr [ebp-4],0xF
	je Block202

 Block193:
	mov ecx,dword ptr [ebp+0x38]
	cmp ecx,esi
	je Block202

 Block194:
	call _xbstr_t::Data_t::Release
	jmp Block202

 Block195:
	push esi
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x40],esp
	push 0x5BE
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp]
	push ecx
	mov byte ptr [ebp-4],0x3E
	mov ecx,edi
	mov byte ptr [ebp-4],0xF
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x3F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x60]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block198

 Block196:
	cmp eax,0x80004002
	je Block198

 Block197:
	push eax
	call _com_issue_error

 Block198:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0xF
	jne Block201

 Block199:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	cmp eax,esi
	je Block202

 Block200:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block202

 Block201:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block202:
	lea ecx,[ebp+0x38]
	push 0x3D0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push esi
	lea edx,[ebp+0x10]
	push edx
	push eax
	mov byte ptr [ebp-4],0x40
	call PcCreate_IWzCanvas
	mov eax,dword ptr [ebp+0x38]
	add esp,0xC
	mov byte ptr [ebp-4],0xF
	cmp eax,esi
	je Block204

 Block203:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block204:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x1C]
	push eax
	call edi
	lea ecx,[ebp-0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block206

 Block205:
	push eax
	call _com_issue_error

 Block206:
	lea edx,[ebp+0x28]
	mov bl,0x41
	push edx
	mov byte ptr [ebp-4],bl
	call edi
	lea eax,[ebp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block208

 Block207:
	push eax
	call _com_issue_error

 Block208:
	mov edi,dword ptr [ebp-0x48]
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[ebp+0x3C]
	push edx
	push edi
	mov byte ptr [ebp-4],0x42
	mov dword ptr [ebp+0x3C],esi
	call eax
	cmp eax,esi
	jge Block210

 Block209:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block210:
	mov edi,dword ptr [ebp-0x48]
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x40]
	mov esi,dword ptr [ebp+0x3C]
	lea edx,[ebp+0x24]
	push edx
	push edi
	mov dword ptr [ebp+0x24],0
	call eax
	test eax,eax
	jge Block212

 Block211:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block212:
	mov ecx,dword ptr [ebp+0x10]
	test ecx,ecx
	jne Block214

 Block213:
	push 0x80004003
	call _com_issue_error

 Block214:
	lea edx,[ebp-0x1C]
	push edx
	mov edx,dword ptr [ebp+0x24]
	lea eax,[ebp+0x28]
	push eax
	push esi
	push edx
	call IWzCanvas::Create
	cmp word ptr [ebp+0x28],8
	mov byte ptr [ebp-4],bl
	jne Block217

 Block215:
	xor eax,eax
	mov word ptr [ebp+0x28],ax
	mov eax,dword ptr [ebp+0x30]
	test eax,eax
	je Block218

 Block216:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block218

 Block217:
	lea ecx,[ebp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block218:
	mov esi,8
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x1C],si
	jne Block221

 Block219:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block222

 Block220:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block222

 Block221:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block222:
	lea ecx,[ebp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block224

 Block223:
	push eax
	call _com_issue_error

 Block224:
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0x43
	test ecx,ecx
	jne Block226

 Block225:
	push 0x80004003
	call _com_issue_error

 Block226:
	lea eax,[ebp+0x28]
	push eax
	push edi
	push 0
	push 0
	call IWzCanvas::Copy
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp+0x28],si
	jne Block229

 Block227:
	mov eax,dword ptr [ebp+0x30]
	xor ecx,ecx
	mov word ptr [ebp+0x28],cx
	test eax,eax
	je Block230

 Block228:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block230

 Block229:
	lea edx,[ebp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block230:
	mov eax,dword ptr [ebp+0x50]
	mov edi,dword ptr [ebp-0x3C]
	mov esi,dword ptr [ebp-0x40]
	mov ebx,0xFF
	cmp eax,1
	je Block237

 Block231:
	cmp eax,2
	je Block237

 Block232:
	cmp eax,4
	je Block234

 Block233:
	cmp eax,5
	jne Block295

 Block234:
	mov eax,3
	mov word ptr [ebp],ax
	mov dword ptr [ebp+8],ebx
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0x4F
	test ecx,ecx
	jne Block236

 Block235:
	push 0x80004003
	call _com_issue_error

 Block236:
	mov eax,dword ptr [ebp-0x60]
	lea edx,[ebp]
	push edx
	push eax
	add esi,0x27
	push esi
	add edi,0x3C
	push edi
	call IWzCanvas::Copy
	lea ecx,[ebp]
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::~Ztl_variant_t
	jmp Block295

 Block237:
	mov ecx,3
	mov word ptr [ebp+0x28],cx
	mov dword ptr [ebp+0x30],ebx
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0x44
	test ecx,ecx
	jne Block239

 Block238:
	push 0x80004003
	call _com_issue_error

 Block239:
	mov eax,dword ptr [ebp-0x8C]
	lea edx,[ebp+0x28]
	push edx
	push eax
	lea edx,[esi+0x28]
	push edx
	lea eax,[edi+7]
	push eax
	call IWzCanvas::Copy
	cmp word ptr [ebp+0x28],8
	mov byte ptr [ebp-4],0xF
	jne Block242

 Block240:
	mov eax,dword ptr [ebp+0x30]
	xor ecx,ecx
	mov word ptr [ebp+0x28],cx
	test eax,eax
	je Block243

 Block241:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block243

 Block242:
	lea edx,[ebp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block243:
	mov eax,3
	mov word ptr [ebp+0x28],ax
	mov dword ptr [ebp+0x30],ebx
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0x45
	test ecx,ecx
	jne Block245

 Block244:
	push 0x80004003
	call _com_issue_error

 Block245:
	mov eax,dword ptr [ebp-0xBC]
	lea edx,[ebp+0x28]
	push edx
	push eax
	add esi,0x27
	push esi
	lea edx,[edi+0x1E]
	push edx
	call IWzCanvas::Copy
	cmp word ptr [ebp+0x28],8
	mov byte ptr [ebp-4],0xF
	jne Block248

 Block246:
	xor eax,eax
	mov word ptr [ebp+0x28],ax
	mov eax,dword ptr [ebp+0x30]
	test eax,eax
	je Block249

 Block247:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block249

 Block248:
	lea ecx,[ebp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block249:
	cmp dword ptr [ebp+0x70],0
	je Block255

 Block250:
	mov edx,3
	mov word ptr [ebp+0x28],dx
	mov dword ptr [ebp+0x30],ebx
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0x46
	test ecx,ecx
	jne Block252

 Block251:
	push 0x80004003
	call _com_issue_error

 Block252:
	mov edx,dword ptr [ebp-0x60]
	lea eax,[ebp+0x28]
	push eax
	push edx
	push esi
	add edi,0x3C
	push edi
	call IWzCanvas::Copy
	cmp word ptr [ebp+0x28],8
	mov byte ptr [ebp-4],0xF
	jne Block254

 Block253:
	xor eax,eax
	mov word ptr [ebp+0x28],ax
	jmp Block291

 Block254:
	lea ecx,[ebp+0x28]
	push ecx
	jmp Block294

 Block255:
	lea edx,[ebp+0x28]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block257

 Block256:
	push eax
	call _com_issue_error

 Block257:
	mov edi,dword ptr [ebp-0x7C]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	mov byte ptr [ebp-4],0x47
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	lea ecx,[ebp+0x28]
	push ecx
	push 0
	push 0
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x40],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0xB4]
	mov byte ptr [ebp-4],0x48
	test ecx,ecx
	jne Block259

 Block258:
	push 0x80004003
	call _com_issue_error

 Block259:
	lea edx,[ebp]
	push edx
	mov byte ptr [ebp-4],0x47
	call IWzProperty::Getitem
	mov bl,0x49
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x3C]
	mov dword ptr [ebp+0x3C],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block262

 Block260:
	cmp eax,0x80004002
	je Block262

 Block261:
	push eax
	call _com_issue_error

 Block262:
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0x4A
	test ecx,ecx
	jne Block264

 Block263:
	push 0x80004003
	call _com_issue_error

 Block264:
	mov edi,dword ptr [ebp-0x40]
	mov esi,dword ptr [ebp+0x3C]
	mov eax,dword ptr [ebp-0x3C]
	push esi
	add edi,0x2A
	push edi
	add eax,0x46
	push eax
	call IWzCanvas::Copy
	mov byte ptr [ebp-4],bl
	test esi,esi
	je Block266

 Block265:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block266:
	mov esi,8
	mov byte ptr [ebp-4],0x47
	cmp word ptr [ebp],si
	jne Block269

 Block267:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	test eax,eax
	je Block270

 Block268:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block270

 Block269:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block270:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp+0x28],si
	jne Block273

 Block271:
	mov eax,dword ptr [ebp+0x30]
	xor edx,edx
	mov word ptr [ebp+0x28],dx
	test eax,eax
	je Block274

 Block272:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block274

 Block273:
	lea eax,[ebp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block274:
	lea ecx,[ebp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block276

 Block275:
	push eax
	call _com_issue_error

 Block276:
	mov ebx,dword ptr [ebp-0x88]
	push 0
	push 0
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	mov byte ptr [ebp-4],0x4B
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	lea eax,[ebp+0x28]
	push eax
	push 0
	push 0
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x40],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [ebp-0x84],0
	mov byte ptr [ebp-4],0x4C
	jne Block278

 Block277:
	push 0x80004003
	call _com_issue_error

 Block278:
	lea ecx,[ebp]
	push ecx
	mov ecx,dword ptr [ebp-0x84]
	mov byte ptr [ebp-4],0x4B
	call IWzProperty::Getitem
	mov bl,0x4D
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x3C]
	mov dword ptr [ebp+0x3C],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block281

 Block279:
	cmp eax,0x80004002
	je Block281

 Block280:
	push eax
	call _com_issue_error

 Block281:
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0x4E
	test ecx,ecx
	jne Block283

 Block282:
	push 0x80004003
	call _com_issue_error

 Block283:
	mov esi,dword ptr [ebp+0x3C]
	mov edx,dword ptr [ebp-0x3C]
	push esi
	push edi
	add edx,0x5A
	push edx
	call IWzCanvas::Copy
	mov byte ptr [ebp-4],bl
	test esi,esi
	je Block285

 Block284:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block285:
	mov esi,8
	mov byte ptr [ebp-4],0x4B
	cmp word ptr [ebp],si
	jne Block288

 Block286:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block289

 Block287:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block289

 Block288:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block289:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp+0x28],si
	jne Block293

 Block290:
	xor ecx,ecx
	mov word ptr [ebp+0x28],cx

 Block291:
	mov eax,dword ptr [ebp+0x30]
	test eax,eax
	je Block295

 Block292:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block295

 Block293:
	lea edx,[ebp+0x28]
	push edx

 Block294:
	call dword ptr [ZImports::_VariantClear]

 Block295:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor edi,edi
	add esp,8
	cmp eax,edi
	jge Block297

 Block296:
	push eax
	call _com_issue_error

 Block297:
	mov edx,3
	mov word ptr [ebp+0x28],dx
	mov dword ptr [ebp+0x30],edi
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0x51
	cmp ecx,edi
	jne Block299

 Block298:
	push 0x80004003
	call _com_issue_error

 Block299:
	lea eax,[ebp-0x1C]
	push eax
	lea edx,[ebp+0x28]
	push edx
	push 0xC0061440
	push edi
	push edi
	push edi
	push edi
	lea eax,[ebp+0x38]
	push eax
	call IWzGr2D::CreateLayer
	mov ebx,dword ptr [ebp-0x30]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+4]
	cmp esi,eax
	je Block304

 Block300:
	mov dword ptr [ebx+4],eax
	cmp eax,edi
	je Block302

 Block301:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block302:
	cmp esi,edi
	je Block304

 Block303:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block304:
	mov eax,dword ptr [ebp+0x38]
	cmp eax,edi
	je Block306

 Block305:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block306:
	cmp word ptr [ebp+0x28],8
	mov byte ptr [ebp-4],0x50
	jne Block309

 Block307:
	mov eax,dword ptr [ebp+0x30]
	xor ecx,ecx
	mov word ptr [ebp+0x28],cx
	cmp eax,edi
	je Block310

 Block308:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block310

 Block309:
	lea edx,[ebp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block310:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0xF
	jne Block313

 Block311:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	cmp eax,edi
	je Block314

 Block312:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block314

 Block313:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block314:
	mov eax,dword ptr [ebp+0x5C]
	mov edx,0xD
	mov word ptr [ebp-0x1C],dx
	mov dword ptr [ebp-0x14],eax
	cmp eax,edi
	je Block316

 Block315:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block316:
	mov esi,dword ptr [ebx+4]
	mov byte ptr [ebp-4],0x52
	cmp esi,edi
	jne Block318

 Block317:
	push 0x80004003
	call _com_issue_error

 Block318:
	mov edx,dword ptr [ebp-0x1C]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x18]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x14]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x10]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,edi
	jge Block320

 Block319:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block320:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0xF
	jne Block323

 Block321:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	cmp eax,edi
	je Block324

 Block322:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block324

 Block323:
	lea edx,[ebp-0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block324:
	mov esi,dword ptr [ebx+4]
	cmp esi,edi
	jne Block326

 Block325:
	push 0x80004003
	call _com_issue_error

 Block326:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	cmp eax,edi
	jge Block328

 Block327:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block328:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x14]
	push edx
	call esi
	lea eax,[ebp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block330

 Block329:
	push eax
	call _com_issue_error

 Block330:
	lea ecx,[ebp-0x2C]
	push ecx
	mov byte ptr [ebp-4],0x53
	call esi
	lea edx,[ebp-0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block332

 Block331:
	push eax
	call _com_issue_error

 Block332:
	lea eax,[ebp-0x74]
	push eax
	mov byte ptr [ebp-4],0x54
	call esi
	lea ecx,[ebp-0x74]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block334

 Block333:
	push eax
	call _com_issue_error

 Block334:
	lea edx,[ebp-0x1C]
	push edx
	mov byte ptr [ebp-4],0x55
	call esi
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block336

 Block335:
	push eax
	call _com_issue_error

 Block336:
	lea ecx,[ebp+0x28]
	mov bl,0x56
	push ecx
	mov byte ptr [ebp-4],bl
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block338

 Block337:
	push eax
	call _com_issue_error

 Block338:
	mov eax,dword ptr [ebp-0x30]
	mov ecx,dword ptr [eax+4]
	mov byte ptr [ebp-4],0x57
	cmp ecx,edi
	jne Block340

 Block339:
	push 0x80004003
	call _com_issue_error

 Block340:
	lea edx,[ebp+0x14]
	push edx
	lea eax,[ebp-0x2C]
	push eax
	lea edx,[ebp-0x74]
	push edx
	lea eax,[ebp-0x1C]
	push eax
	mov eax,dword ptr [ebp+0x10]
	lea edx,[ebp+0x28]
	push edx
	push eax
	lea edx,[ebp]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp],8
	jne Block347

 Block341:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	cmp eax,edi
	je Block343

 Block342:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block343:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block344:
	cmp word ptr [ebp+0x28],8
	mov byte ptr [ebp-4],bl
	jne Block348

 Block345:
	mov eax,dword ptr [ebp+0x30]
	xor edx,edx
	mov word ptr [ebp+0x28],dx
	cmp eax,edi
	je Block349

 Block346:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block349

 Block347:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp]
	push ecx
	call esi
	jmp Block344

 Block348:
	lea eax,[ebp+0x28]
	push eax
	call esi

 Block349:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0x55
	jne Block352

 Block350:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	cmp eax,edi
	je Block353

 Block351:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block353

 Block352:
	lea edx,[ebp-0x1C]
	push edx
	call esi

 Block353:
	cmp word ptr [ebp-0x74],8
	mov byte ptr [ebp-4],0x54
	jne Block356

 Block354:
	xor eax,eax
	mov word ptr [ebp-0x74],ax
	mov eax,dword ptr [ebp-0x6C]
	cmp eax,edi
	je Block357

 Block355:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block357

 Block356:
	lea ecx,[ebp-0x74]
	push ecx
	call esi

 Block357:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0x53
	jne Block360

 Block358:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	cmp eax,edi
	je Block361

 Block359:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block361

 Block360:
	lea eax,[ebp-0x2C]
	push eax
	call esi

 Block361:
	cmp word ptr [ebp+0x14],8
	mov byte ptr [ebp-4],0xF
	jne Block364

 Block362:
	mov eax,dword ptr [ebp+0x1C]
	xor ecx,ecx
	mov word ptr [ebp+0x14],cx
	cmp eax,edi
	je Block365

 Block363:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block365

 Block364:
	lea edx,[ebp+0x14]
	push edx
	call esi

 Block365:
	cmp dword ptr [ebp+0x50],5
	jne Block558

 Block366:
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x40],esp
	push 0x6B6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp-0x78]
	mov byte ptr [ebp-4],0x58
	cmp esi,edi
	jne Block368

 Block367:
	push 0x80004003
	call _com_issue_error

 Block368:
	lea ecx,[ebp]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0xF
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x59
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x3C]
	mov dword ptr [ebp+0x3C],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block371

 Block369:
	cmp eax,0x80004002
	je Block371

 Block370:
	push eax
	call _com_issue_error

 Block371:
	mov ebx,8
	mov byte ptr [ebp-4],0x5B
	cmp word ptr [ebp],bx
	jne Block374

 Block372:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	cmp eax,edi
	je Block375

 Block373:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block375

 Block374:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block375:
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push 0x1AA0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0xD0]
	mov byte ptr [ebp-4],0x5C
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x5B
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x5D
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x24]
	mov dword ptr [ebp+0x24],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block378

 Block376:
	cmp eax,0x80004002
	je Block378

 Block377:
	push eax
	call _com_issue_error

 Block378:
	mov byte ptr [ebp-4],0x5F
	cmp word ptr [ebp-0xD0],bx
	jne Block381

 Block379:
	xor eax,eax
	mov word ptr [ebp-0xD0],ax
	mov eax,dword ptr [ebp-0xC8]
	cmp eax,edi
	je Block382

 Block380:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block382

 Block381:
	lea ecx,[ebp-0xD0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block382:
	lea edx,[ebp-0x2C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block384

 Block383:
	push eax
	call _com_issue_error

 Block384:
	mov ecx,3
	mov word ptr [ebp+0x14],cx
	mov dword ptr [ebp+0x1C],edi
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0x61
	cmp ecx,edi
	jne Block386

 Block385:
	push 0x80004003
	call _com_issue_error

 Block386:
	lea edx,[ebp-0x2C]
	push edx
	lea eax,[ebp+0x14]
	push eax
	push edi
	push edi
	push edi
	push edi
	push edi
	lea edx,[ebp+0x38]
	push edx
	call IWzGr2D::CreateLayer
	mov ebx,dword ptr [ebp-0x30]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0x10]
	cmp esi,eax
	je Block391

 Block387:
	mov dword ptr [ebx+0x10],eax
	cmp eax,edi
	je Block389

 Block388:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block389:
	cmp esi,edi
	je Block391

 Block390:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block391:
	mov eax,dword ptr [ebp+0x38]
	cmp eax,edi
	je Block393

 Block392:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block393:
	cmp word ptr [ebp+0x14],8
	mov byte ptr [ebp-4],0x60
	jne Block396

 Block394:
	mov eax,dword ptr [ebp+0x1C]
	xor ecx,ecx
	mov word ptr [ebp+0x14],cx
	cmp eax,edi
	je Block397

 Block395:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block397

 Block396:
	lea edx,[ebp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block397:
	mov esi,8
	mov byte ptr [ebp-4],0x5F
	cmp word ptr [ebp-0x2C],si
	jne Block400

 Block398:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	cmp eax,edi
	je Block401

 Block399:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block401

 Block400:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block401:
	mov eax,dword ptr [ebp+0x5C]
	mov edx,0xD
	mov word ptr [ebp+0x14],dx
	mov dword ptr [ebp+0x1C],eax
	cmp eax,edi
	je Block403

 Block402:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block403:
	mov ecx,dword ptr [ebx+0x10]
	mov byte ptr [ebp-4],0x62
	cmp ecx,edi
	jne Block405

 Block404:
	push 0x80004003
	call _com_issue_error

 Block405:
	lea eax,[ebp+0x14]
	push eax
	call IWzVector2D::Putorigin
	mov byte ptr [ebp-4],0x5F
	cmp word ptr [ebp+0x14],si
	jne Block408

 Block406:
	mov eax,dword ptr [ebp+0x1C]
	xor ecx,ecx
	mov word ptr [ebp+0x14],cx
	cmp eax,edi
	je Block409

 Block407:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block409

 Block408:
	lea edx,[ebp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block409:
	mov esi,dword ptr [ebx+0x10]
	cmp esi,edi
	jne Block411

 Block410:
	push 0x80004003
	call _com_issue_error

 Block411:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	cmp eax,edi
	jge Block413

 Block412:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block413:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x1C]
	push edx
	call esi
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block415

 Block414:
	push eax
	call _com_issue_error

 Block415:
	lea ecx,[ebp+0x28]
	push ecx
	mov byte ptr [ebp-4],0x63
	call esi
	lea edx,[ebp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block417

 Block416:
	push eax
	call _com_issue_error

 Block417:
	lea eax,[ebp-0x74]
	push eax
	mov byte ptr [ebp-4],0x64
	call esi
	lea ecx,[ebp-0x74]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block419

 Block418:
	push eax
	call _com_issue_error

 Block419:
	lea edx,[ebp-0x2C]
	push edx
	mov byte ptr [ebp-4],0x65
	call esi
	lea eax,[ebp-0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block421

 Block420:
	push eax
	call _com_issue_error

 Block421:
	lea ecx,[ebp+0x14]
	mov bl,0x66
	push ecx
	mov byte ptr [ebp-4],bl
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block423

 Block422:
	push eax
	call _com_issue_error

 Block423:
	mov eax,dword ptr [ebp-0x30]
	mov ecx,dword ptr [eax+0x10]
	mov byte ptr [ebp-4],0x67
	cmp ecx,edi
	jne Block425

 Block424:
	push 0x80004003
	call _com_issue_error

 Block425:
	lea edx,[ebp-0x1C]
	push edx
	lea eax,[ebp+0x28]
	push eax
	lea edx,[ebp-0x74]
	push edx
	lea eax,[ebp-0x2C]
	push eax
	mov eax,dword ptr [ebp+0x3C]
	lea edx,[ebp+0x14]
	push edx
	push eax
	lea edx,[ebp-0x58]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x58],8
	jne Block432

 Block426:
	xor eax,eax
	mov word ptr [ebp-0x58],ax
	mov eax,dword ptr [ebp-0x50]
	cmp eax,edi
	je Block428

 Block427:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block428:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block429:
	cmp word ptr [ebp+0x14],8
	mov byte ptr [ebp-4],bl
	jne Block433

 Block430:
	mov eax,dword ptr [ebp+0x1C]
	xor edx,edx
	mov word ptr [ebp+0x14],dx
	cmp eax,edi
	je Block434

 Block431:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block434

 Block432:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x58]
	push ecx
	call esi
	jmp Block429

 Block433:
	lea eax,[ebp+0x14]
	push eax
	call esi

 Block434:
	mov ebx,8
	mov byte ptr [ebp-4],0x65
	cmp word ptr [ebp-0x2C],bx
	jne Block437

 Block435:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	cmp eax,edi
	je Block438

 Block436:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block438

 Block437:
	lea edx,[ebp-0x2C]
	push edx
	call esi

 Block438:
	mov byte ptr [ebp-4],0x64
	cmp word ptr [ebp-0x74],bx
	jne Block441

 Block439:
	xor eax,eax
	mov word ptr [ebp-0x74],ax
	mov eax,dword ptr [ebp-0x6C]
	cmp eax,edi
	je Block442

 Block440:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block442

 Block441:
	lea ecx,[ebp-0x74]
	push ecx
	call esi

 Block442:
	mov byte ptr [ebp-4],0x63
	cmp word ptr [ebp+0x28],bx
	jne Block445

 Block443:
	mov eax,dword ptr [ebp+0x30]
	xor edx,edx
	mov word ptr [ebp+0x28],dx
	cmp eax,edi
	je Block446

 Block444:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block446

 Block445:
	lea eax,[ebp+0x28]
	push eax
	call esi

 Block446:
	mov byte ptr [ebp-4],0x5F
	cmp word ptr [ebp-0x1C],bx
	jne Block449

 Block447:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	cmp eax,edi
	je Block450

 Block448:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block450

 Block449:
	lea edx,[ebp-0x1C]
	push edx
	call esi

 Block450:
	lea eax,[ebp-0x9C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x9C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block452

 Block451:
	push eax
	call _com_issue_error

 Block452:
	mov edx,3
	mov word ptr [ebp-0x58],dx
	mov dword ptr [ebp-0x50],edi
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0x69
	cmp ecx,edi
	jne Block454

 Block453:
	push 0x80004003
	call _com_issue_error

 Block454:
	lea eax,[ebp-0x9C]
	push eax
	lea edx,[ebp-0x58]
	push edx
	push edi
	push edi
	push edi
	push edi
	push edi
	lea eax,[ebp+0x38]
	push eax
	call IWzGr2D::CreateLayer
	mov ebx,dword ptr [ebp-0x30]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0x14]
	cmp esi,eax
	je Block459

 Block455:
	mov dword ptr [ebx+0x14],eax
	cmp eax,edi
	je Block457

 Block456:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block457:
	cmp esi,edi
	je Block459

 Block458:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block459:
	mov eax,dword ptr [ebp+0x38]
	cmp eax,edi
	je Block461

 Block460:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block461:
	lea ecx,[ebp-0x58]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x9C]
	mov byte ptr [ebp-4],0x5F
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,0xD
	mov word ptr [ebp-0x58],cx
	mov dword ptr [ebp-0x50],eax
	cmp eax,edi
	je Block463

 Block462:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block463:
	mov ecx,dword ptr [ebx+0x14]
	mov byte ptr [ebp-4],0x6A
	cmp ecx,edi
	jne Block465

 Block464:
	push 0x80004003
	call _com_issue_error

 Block465:
	lea edx,[ebp-0x58]
	push edx
	call IWzVector2D::Putorigin
	lea ecx,[ebp-0x58]
	mov byte ptr [ebp-4],0x5F
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [ebx+0x14]
	cmp ecx,edi
	jne Block467

 Block466:
	push 0x80004003
	call _com_issue_error

 Block467:
	push 0xFFFFFFFF
	call IWzGr2DLayer::Putcolor
	push offset _D_VTMISSING
	lea ecx,[ebp-0xF0]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0xE0]
	mov byte ptr [ebp-4],0x6B
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x100]
	mov byte ptr [ebp-4],0x6C
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x9C]
	mov byte ptr [ebp-4],0x6D
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x58]
	mov byte ptr [ebp-4],0x6E
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [ebx+0x14]
	mov byte ptr [ebp-4],0x6F
	cmp ecx,edi
	jne Block469

 Block468:
	push 0x80004003
	call _com_issue_error

 Block469:
	lea eax,[ebp-0xF0]
	push eax
	lea edx,[ebp-0xE0]
	push edx
	lea eax,[ebp-0x100]
	push eax
	lea edx,[ebp-0x9C]
	push edx
	mov edx,dword ptr [ebp+0x24]
	lea eax,[ebp-0x58]
	push eax
	push edx
	lea eax,[ebp-0xAC]
	push eax
	call IWzGr2DLayer::InsertCanvas
	lea ecx,[ebp-0xAC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x58]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x9C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x100]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0xE0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0xF0]
	mov byte ptr [ebp-4],0x5F
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [ebp+0x5C]
	cmp eax,edi
	je Block471

 Block470:
	lea esi,[eax-0xC]
	jmp Block472

 Block471:
	xor esi,esi

 Block472:
	mov ecx,dword ptr [ebx+0x10]
	mov edx,dword ptr [esi+0x1C4]
	mov eax,dword ptr [esi+0x1C0]
	cmp ecx,edi
	jne Block474

 Block473:
	push 0x80004003
	call _com_issue_error

 Block474:
	imul eax,0xBB8
	sub eax,edx
	lea edx,[eax+eax*4]
	lea eax,[edx+edx-0x3FFF8AD4]
	push eax
	call IWzGr2DLayer::Putz
	mov ecx,dword ptr [ebx+0x14]
	mov edx,dword ptr [esi+0x1C4]
	mov eax,dword ptr [esi+0x1C0]
	cmp ecx,edi
	jne Block476

 Block475:
	push 0x80004003
	call _com_issue_error

 Block476:
	imul eax,0xBB8
	sub eax,edx
	sub eax,0x6665AAF
	lea edx,[eax+eax*4]
	add edx,edx
	push edx
	call IWzGr2DLayer::Putz
	cmp dword ptr [ebp-0x80],edi
	je Block554

 Block477:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x9C]
	call Ztl_variant_t::_ctor_1
	mov eax,3
	mov word ptr [ebp-0x58],ax
	mov dword ptr [ebp-0x50],edi
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0x71
	cmp ecx,edi
	jne Block479

 Block478:
	push 0x80004003
	call _com_issue_error

 Block479:
	lea edx,[ebp-0x9C]
	push edx
	lea eax,[ebp-0x58]
	push eax
	push edi
	push edi
	push edi
	push edi
	push edi
	lea edx,[ebp+0x38]
	push edx
	call IWzGr2D::CreateLayer
	lea esi,[ebx+0x18]
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [ebp+0x38]
	cmp eax,edi
	je Block481

 Block480:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block481:
	lea ecx,[ebp-0x58]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x9C]
	mov byte ptr [ebp-4],0x5F
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,0xD
	mov word ptr [ebp-0x58],ax
	mov eax,dword ptr [ebp+0x5C]
	mov dword ptr [ebp-0x50],eax
	cmp eax,edi
	je Block483

 Block482:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block483:
	mov ecx,dword ptr [esi]
	mov byte ptr [ebp-4],0x72
	cmp ecx,edi
	jne Block485

 Block484:
	push 0x80004003
	call _com_issue_error

 Block485:
	lea eax,[ebp-0x58]
	push eax
	call IWzVector2D::Putorigin
	lea ecx,[ebp-0x58]
	mov byte ptr [ebp-4],0x5F
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [esi]
	cmp ecx,edi
	jne Block487

 Block486:
	push 0x80004003
	call _com_issue_error

 Block487:
	push 0xFFFFFFFF
	call IWzGr2DLayer::Putcolor
	mov ecx,dword ptr [ebx+0x10]
	cmp ecx,edi
	jne Block489

 Block488:
	push 0x80004003
	call _com_issue_error

 Block489:
	mov esi,dword ptr [esi]
	cmp esi,edi
	jne Block491

 Block490:
	push 0x80004003
	call _com_issue_error

 Block491:
	call IWzGr2DLayer::Getz
	push eax
	mov ecx,esi
	call IWzGr2DLayer::Putz
	xor edi,edi
	mov dword ptr [ebp-0x44],edi
	mov byte ptr [ebp-4],0x73
	xor ebx,ebx

 Block492:
	mov esi,dword ptr [ebp-0x80]
	mov ecx,esi
	call IWzProperty::Getcount
	cmp ebx,eax
	jae Block538

 Block493:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x40],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0xAC]
	push ecx
	mov byte ptr [ebp-4],0x74
	mov ecx,esi
	mov byte ptr [ebp-4],0x73
	call IWzProperty::Getitem
	lea edx,[ebp-0xAC]
	push edx
	lea eax,[ebp+0x38]
	push eax
	mov byte ptr [ebp-4],0x75
	call get_unknown
	add esp,8
	push eax
	lea ecx,[ebp-0x44]
	mov byte ptr [ebp-4],0x76
	call _x_com_ptr<IWzCanvas>::op_assign_unknown_com_ptr
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x75
	test eax,eax
	je Block495

 Block494:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block495:
	push 0x78
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x40],esp
	push 0x1AA9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp-0x44]
	mov byte ptr [ebp-4],0x77
	test edi,edi
	je Block9

 Block496:
	lea ecx,[ebp-0xB8]
	push ecx
	mov ecx,edi
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x78
	test ecx,ecx
	je Block9

 Block497:
	lea edx,[ebp-0x58]
	push edx
	mov byte ptr [ebp-4],0x79
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x7A
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x58],8
	mov esi,eax
	mov byte ptr [ebp-4],0x79
	jne Block500

 Block498:
	xor eax,eax
	mov word ptr [ebp-0x58],ax
	mov eax,dword ptr [ebp-0x50]
	test eax,eax
	je Block501

 Block499:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block501

 Block500:
	lea ecx,[ebp-0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block501:
	mov eax,dword ptr [ebp-0xB8]
	mov byte ptr [ebp-4],0x75
	test eax,eax
	je Block503

 Block502:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block503:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block504:
	lea eax,[ebp+0x28]
	push eax
	mov byte ptr [ebp-4],0x7B
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block505:
	lea edx,[ebp-0x74]
	push edx
	mov byte ptr [ebp-4],0x7C
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x74]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block506:
	lea ecx,[ebp-0x2C]
	push ecx
	mov byte ptr [ebp-4],0x7D
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block507:
	mov eax,3
	mov word ptr [ebp+0x14],ax
	mov dword ptr [ebp+0x1C],esi
	mov eax,dword ptr [ebp-0x30]
	mov ecx,dword ptr [eax+0x18]
	add eax,0x18
	mov byte ptr [ebp-4],0x7F
	test ecx,ecx
	je Block9

 Block508:
	lea edx,[ebp-0x1C]
	push edx
	lea eax,[ebp+0x28]
	push eax
	lea edx,[ebp-0x74]
	push edx
	lea eax,[ebp-0x2C]
	push eax
	lea edx,[ebp+0x14]
	push edx
	push edi
	lea eax,[ebp-0x9C]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x9C],8
	jne Block515

 Block509:
	mov eax,dword ptr [ebp-0x94]
	xor ecx,ecx
	mov word ptr [ebp-0x9C],cx
	test eax,eax
	je Block511

 Block510:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block511:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block512:
	cmp word ptr [ebp+0x14],8
	mov byte ptr [ebp-4],0x7E
	jne Block516

 Block513:
	xor eax,eax
	mov word ptr [ebp+0x14],ax
	mov eax,dword ptr [ebp+0x1C]
	test eax,eax
	je Block517

 Block514:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block517

 Block515:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp-0x9C]
	push edx
	call esi
	jmp Block512

 Block516:
	lea ecx,[ebp+0x14]
	push ecx
	call esi

 Block517:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0x7D
	jne Block520

 Block518:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block521

 Block519:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block521

 Block520:
	lea eax,[ebp-0x2C]
	push eax
	call esi

 Block521:
	cmp word ptr [ebp-0x74],8
	mov byte ptr [ebp-4],0x7C
	jne Block524

 Block522:
	mov eax,dword ptr [ebp-0x6C]
	xor ecx,ecx
	mov word ptr [ebp-0x74],cx
	test eax,eax
	je Block525

 Block523:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block525

 Block524:
	lea edx,[ebp-0x74]
	push edx
	call esi

 Block525:
	cmp word ptr [ebp+0x28],8
	mov byte ptr [ebp-4],0x7B
	jne Block528

 Block526:
	xor eax,eax
	mov word ptr [ebp+0x28],ax
	mov eax,dword ptr [ebp+0x30]
	test eax,eax
	je Block529

 Block527:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block529

 Block528:
	lea ecx,[ebp+0x28]
	push ecx
	call esi

 Block529:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0x75
	jne Block532

 Block530:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block533

 Block531:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block533

 Block532:
	lea eax,[ebp-0x1C]
	push eax
	call esi

 Block533:
	cmp word ptr [ebp-0xAC],8
	mov byte ptr [ebp-4],0x73
	jne Block536

 Block534:
	mov eax,dword ptr [ebp-0xA4]
	xor ecx,ecx
	mov word ptr [ebp-0xAC],cx
	test eax,eax
	je Block537

 Block535:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc ebx
	jmp Block492

 Block536:
	lea edx,[ebp-0xAC]
	push edx
	call esi

 Block537:
	inc ebx
	jmp Block492

 Block538:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x2C]
	push eax
	call esi
	lea ecx,[ebp-0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block540

 Block539:
	push eax
	call _com_issue_error

 Block540:
	lea edx,[ebp+0x14]
	mov bl,0x80
	push edx
	mov byte ptr [ebp-4],bl
	call esi
	lea eax,[ebp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block542

 Block541:
	push eax
	call _com_issue_error

 Block542:
	mov eax,dword ptr [ebp-0x30]
	mov ecx,dword ptr [eax+0x18]
	add eax,0x18
	mov byte ptr [ebp-4],0x81
	test ecx,ecx
	jne Block544

 Block543:
	push 0x80004003
	call _com_issue_error

 Block544:
	lea edx,[ebp-0x2C]
	push edx
	lea eax,[ebp+0x14]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x14],si
	jne Block547

 Block545:
	mov eax,dword ptr [ebp+0x1C]
	xor ecx,ecx
	mov word ptr [ebp+0x14],cx
	test eax,eax
	je Block548

 Block546:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block548

 Block547:
	lea edx,[ebp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block548:
	mov byte ptr [ebp-4],0x73
	cmp word ptr [ebp-0x2C],si
	jne Block551

 Block549:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block552

 Block550:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block552

 Block551:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block552:
	mov byte ptr [ebp-4],0x5F
	test edi,edi
	je Block554

 Block553:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block554:
	mov eax,dword ptr [ebp+0x24]
	xor edi,edi
	mov byte ptr [ebp-4],0x5B
	cmp eax,edi
	je Block556

 Block555:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block556:
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0xF
	cmp eax,edi
	je Block558

 Block557:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block558:
	lea eax,[ebp-0x64]
	push 1
	push eax
	call get_basic_font
	add esp,8
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x82
	cmp eax,edi
	je Block560

 Block559:
	mov eax,dword ptr [eax]
	jmp Block561

 Block560:
	xor eax,eax

 Block561:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp-0x34]
	mov dword ptr [ebp-0x34],edi
	call ZXString16::Assign
	mov ecx,dword ptr [ebp-0x30]
	lea edx,[ebp+0x14]
	push edx
	mov byte ptr [ebp-4],0x83
	mov dword ptr [ecx+0x58],edi
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block563

 Block562:
	push eax
	call _com_issue_error

 Block563:
	mov edx,dword ptr [ebp-0x34]
	lea ecx,[ebp+0x14]
	push ecx
	push 0x64
	push ecx
	mov dword ptr [ebp+0x40],esp
	mov ecx,esp
	mov bl,0x84
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x64]
	mov byte ptr [ebp-4],0x85
	test ecx,ecx
	jne Block565

 Block564:
	push 0x80004003
	call _com_issue_error

 Block565:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcLongestText
	cmp word ptr [ebp+0x14],8
	mov esi,eax
	mov byte ptr [ebp-4],0x83
	jne Block568

 Block566:
	xor eax,eax
	mov word ptr [ebp+0x14],ax
	mov eax,dword ptr [ebp+0x1C]
	test eax,eax
	je Block569

 Block567:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block569

 Block568:
	lea ecx,[ebp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block569:
	push esi
	lea edx,[ebp-0xC0]
	push edx
	lea ecx,[ebp-0x34]
	call ZXString16::Left
	lea eax,[ebp-0x2C]
	push eax
	mov byte ptr [ebp-4],0x86
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block571

 Block570:
	push eax
	call _com_issue_error

 Block571:
	mov edx,3
	mov word ptr [ebp+0x14],dx
	mov dword ptr [ebp+0x1C],0xFF
	mov edx,dword ptr [ebp-0x64]
	lea eax,[ebp-0x2C]
	push eax
	mov eax,dword ptr [ebp-0xC0]
	lea ecx,[ebp+0x14]
	push ecx
	push edx
	push ecx
	mov dword ptr [ebp+0x40],esp
	mov ecx,esp
	mov bl,0x88
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0x89
	test ecx,ecx
	jne Block573

 Block572:
	push 0x80004003
	call _com_issue_error

 Block573:
	mov edx,dword ptr [ebp-0x40]
	mov edi,dword ptr [ebp-0x3C]
	add edx,8
	push edx
	add edi,8
	push edi
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x14],8
	mov byte ptr [ebp-4],0x87
	jne Block576

 Block574:
	xor eax,eax
	mov word ptr [ebp+0x14],ax
	mov eax,dword ptr [ebp+0x1C]
	test eax,eax
	je Block577

 Block575:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block577

 Block576:
	lea ecx,[ebp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block577:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0x86
	jne Block580

 Block578:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block581

 Block579:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block581

 Block580:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block581:
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block583

 Block582:
	mov eax,dword ptr [eax-4]
	shr eax,1
	jmp Block584

 Block583:
	xor eax,eax

 Block584:
	cmp eax,esi
	jle Block601

 Block585:
	push 0xFFFFFFFF
	push esi
	lea ecx,[ebp+0x38]
	push ecx
	lea ecx,[ebp-0x34]
	call ZXString16::Mid
	push eax
	lea ecx,[ebp-0x34]
	mov byte ptr [ebp-4],0x8A
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x86
	test eax,eax
	je Block587

 Block586:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block587:
	mov edx,dword ptr [ebp-0x64]
	push 0x64
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp-0x64]
	mov dword ptr [ebp+0x40],esp
	test eax,eax
	je Block589

 Block588:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block589:
	lea eax,[ebp-0x34]
	push eax
	call format_string_0
	mov esi,dword ptr [ebp-0x30]
	add esp,0xC
	lea ecx,[ebp-0x2C]
	push ecx
	mov dword ptr [esi+0x58],eax
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block591

 Block590:
	push eax
	call _com_issue_error

 Block591:
	mov eax,3
	mov word ptr [ebp+0x14],ax
	mov dword ptr [ebp+0x1C],0xFF
	mov eax,dword ptr [ebp-0x64]
	lea ecx,[ebp-0x2C]
	push ecx
	lea edx,[ebp+0x14]
	push edx
	mov edx,dword ptr [ebp-0x34]
	push eax
	push ecx
	mov dword ptr [ebp+0x40],esp
	mov ecx,esp
	mov bl,0x8C
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0x8D
	test ecx,ecx
	jne Block593

 Block592:
	push 0x80004003
	call _com_issue_error

 Block593:
	mov eax,dword ptr [ebp-0x40]
	add eax,0x16
	push eax
	push edi
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x14],8
	mov byte ptr [ebp-4],0x8B
	jne Block596

 Block594:
	mov eax,dword ptr [ebp+0x1C]
	xor ecx,ecx
	mov word ptr [ebp+0x14],cx
	test eax,eax
	je Block597

 Block595:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block597

 Block596:
	lea edx,[ebp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block597:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0x86
	jne Block600

 Block598:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block602

 Block599:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block602

 Block600:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block602

 Block601:
	mov esi,dword ptr [ebp-0x30]

 Block602:
	mov ebx,dword ptr [ebp-0x48]
	mov ecx,ebx
	call IWzCanvas::Getwidth
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	mov ecx,ebx
	mov dword ptr [esi+0x48],eax
	call IWzCanvas::Getheight
	mov edx,dword ptr [ebp+0x50]
	mov ecx,dword ptr [ebp+0x58]
	neg eax
	mov dword ptr [esi+0x4C],eax
	cmp edx,4
	jne Block605

 Block603:
	cmp dword ptr [ebp+0x64],0
	jg Block606

 Block604:
	jmp Block607

 Block605:
	cmp edx,5
	jne Block607

 Block606:
	lea edx,[eax+ecx+7]
	mov dword ptr [esi+0x4C],edx

 Block607:
	push ecx
	mov ecx,esi
	call CChatBalloon::AdjustCoordY
	mov eax,dword ptr [ebp-0xC0]
	mov dword ptr [esi+0x54],1
	mov byte ptr [ebp-4],0x83
	test eax,eax
	je Block609

 Block608:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block609:
	mov eax,dword ptr [ebp-0x34]
	mov byte ptr [ebp-4],0x82
	test eax,eax
	je Block611

 Block610:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block611:
	mov eax,dword ptr [ebp-0x64]
	mov byte ptr [ebp-4],0xF
	test eax,eax
	je Block613

 Block612:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block613:
	mov eax,dword ptr [ebp-0x88]
	mov byte ptr [ebp-4],0xE
	test eax,eax
	je Block615

 Block614:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block615:
	mov eax,dword ptr [ebp-0x7C]
	mov byte ptr [ebp-4],0xD
	test eax,eax
	je Block617

 Block616:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block617:
	mov eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],0xC
	test eax,eax
	je Block619

 Block618:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block619:
	mov eax,dword ptr [ebp-0x84]
	mov byte ptr [ebp-4],0xB
	test eax,eax
	je Block621

 Block620:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block621:
	mov eax,dword ptr [ebp-0xB4]
	mov byte ptr [ebp-4],0xA
	test eax,eax
	je Block623

 Block622:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block623:
	mov eax,dword ptr [ebp-0x60]
	mov byte ptr [ebp-4],9
	test eax,eax
	je Block625

 Block624:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block625:
	mov eax,dword ptr [ebp-0xBC]
	mov byte ptr [ebp-4],8
	test eax,eax
	je Block627

 Block626:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block627:
	mov eax,dword ptr [ebp-0x8C]
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block629

 Block628:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block629:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [ebp-4],6
	call ecx
	mov eax,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],5
	test eax,eax
	je Block631

 Block630:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block631:
	mov eax,dword ptr [ebp-0x80]
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block633

 Block632:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block633:
	mov eax,dword ptr [ebp-0x78]
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block635

 Block634:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block635:
	mov eax,dword ptr [ebp-0xB0]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block637

 Block636:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block637:
	mov eax,dword ptr [ebp-0x5C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],1
	call edx
	mov ecx,dword ptr [ebp+0x54]
	test ecx,ecx
	je Block639

 Block638:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x54],0

 Block639:
	mov eax,dword ptr [ebp+0x5C]
	test eax,eax
	jmp Block651

 Block640:
	mov eax,dword ptr [ebp-0x88]
	mov byte ptr [ebp-4],0xE
	cmp eax,esi
	je Block642

 Block641:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block642:
	mov eax,dword ptr [ebp-0x7C]
	mov byte ptr [ebp-4],0xD
	cmp eax,esi
	je Block644

 Block643:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block644:
	mov eax,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],5
	cmp eax,esi
	je Block646

 Block645:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block646:
	mov eax,dword ptr [ebp-0x5C]
	mov byte ptr [ebp-4],1
	cmp eax,esi
	je Block648

 Block647:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block648:
	mov ecx,dword ptr [ebp+0x54]
	cmp ecx,esi
	je Block650

 Block649:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x54],esi

 Block650:
	mov eax,dword ptr [ebp+0x5C]
	cmp eax,esi

 Block651:
	mov dword ptr [ebp-4],0xFFFFFFFF
	je Block653

 Block652:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block653:
	lea esp,[ebp-0x11C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x44]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x48
	mov esp,ebp
	pop ebp
	ret 0x24
}
}
