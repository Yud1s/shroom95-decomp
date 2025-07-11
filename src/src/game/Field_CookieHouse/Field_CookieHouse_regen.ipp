#include "regen.hpp"
// Field_CookieHouse.ipp
#include "Field_CookieHouse.hpp"

// CField_CookieHouse::~CField_CookieHouse
_SUB_EXCEPTION_HANDLER(14DD70)
__SUB_CLASS_THIS0(0014DD70, __thiscall, 143799,  CField_CookieHouse, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_14DD70
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
	int 3// TODO: 	mov dword ptr [esi],offset CField_CookieHouse::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_CookieHouse::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_CookieHouse::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_CookieHouse::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xDD0]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xDCC]
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	push offset ZRef<CBitmapNumber>::~ZRef<CBitmapNumber>
	push 5
	push 8
	lea eax,[esi+0xDA0]
	push eax
	call __eh_vector_dtor_iterator
	mov ecx,esi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CField::~CField
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CBitmapNumber::Draw
_SUB_EXCEPTION_HANDLER(14D750)
__SUB_CLASS_THIS(0014D750, __thiscall, 37759,  CBitmapNumber, void, NakedParam<_x_com_ptr<IWzCanvas>>, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_14D750
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
	mov ebx,ecx
	mov dword ptr [esp+0x18],ebx
	cmp dword ptr [ebx+0x44],0
	mov dword ptr [esp+0x4C],0
	je Block42

 Block1:
	mov edi,dword ptr [esp+0x60]
	lea eax,[ebx+0x34]
	test edi,edi
	jge Block3

 Block2:
	lea eax,[ebx+0x38]

 Block3:
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x24],esi
	test esi,esi
	je Block5

 Block4:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block5:
	mov ebp,dword ptr [ebx+0x3C]
	mov byte ptr [esp+0x4C],1
	mov dword ptr [esp+0x14],ebp
	test ebp,ebp
	jle Block27

 Block6:
	dec ebp
	mov dword ptr [esp+0x60],ebp
	jmp Block8

 Block8:
	mov eax,0x66666667
	imul edi
	sar edx,2
	mov ebp,edx
	shr ebp,0x1F
	add ebp,edx
	lea edx,[ebp+ebp*4]
	add edx,edx
	sub edi,edx
	mov esi,dword ptr [ebx+edi*4+0xC]
	mov dword ptr [esp+0x30],esi
	test esi,esi
	je Block10

 Block9:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block10:
	mov edx,3
	mov word ptr [esp+0x34],dx
	mov dword ptr [esp+0x3C],0xFF
	mov byte ptr [esp+0x4C],dl
	test esi,esi
	je Block33

 Block11:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[esp+0x1C]
	push ecx
	push esi
	mov dword ptr [esp+0x24],0
	call edx
	test eax,eax
	jge Block13

 Block12:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block13:
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esi]
	lea edx,[esp+0x20]
	push edx
	mov dword ptr [esp+0x2C],eax
	mov eax,dword ptr [ecx+0x6C]
	push esi
	mov dword ptr [esp+0x28],0
	call eax
	test eax,eax
	jge Block15

 Block14:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block15:
	mov edx,dword ptr [esp+0x54]
	test edx,edx
	je Block33

 Block16:
	mov eax,dword ptr [ebx+0x40]
	mov ebx,dword ptr [esp+0x34]
	imul eax,dword ptr [esp+0x60]
	sub eax,dword ptr [esp+0x20]
	mov edi,dword ptr [edx]
	add eax,dword ptr [esp+0x58]
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [ecx],ebx
	mov ebx,dword ptr [esp+0x48]
	mov dword ptr [ecx+4],ebx
	mov ebx,dword ptr [esp+0x4C]
	mov dword ptr [ecx+8],ebx
	mov ebx,dword ptr [esp+0x50]
	mov dword ptr [ecx+0xC],ebx
	mov ecx,dword ptr [esp+0x6C]
	sub ecx,dword ptr [esp+0x38]
	push esi
	push ecx
	push eax
	mov dword ptr [esp+0x48],edx
	push edx
	mov edx,dword ptr [edi+0x80]
	call edx
	test eax,eax
	jge Block18

 Block17:
	mov ecx,dword ptr [esp+0x2C]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block18:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x4C],2
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov edi,ebp
	mov byte ptr [esp+0x4C],1
	push esi
	test edi,edi
	je Block25

 Block23:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	call edx
	mov ebp,dword ptr [esp+0x14]
	dec dword ptr [esp+0x60]
	mov ebx,dword ptr [esp+0x18]
	dec ebp
	mov dword ptr [esp+0x14],ebp
	test ebp,ebp
	jg Block8

 Block24:
	jmp Block26

 Block25:
	mov eax,dword ptr [esi]
	mov ebp,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax+8]
	dec ebp
	call ecx
	mov ebx,dword ptr [esp+0x18]

 Block26:
	mov esi,dword ptr [esp+0x24]

 Block27:
	test esi,esi
	je Block40

 Block28:
	mov edx,3
	mov word ptr [esp+0x34],dx
	mov dword ptr [esp+0x3C],0xFF
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[esp+0x60]
	push ecx
	push esi
	mov byte ptr [esp+0x54],4
	mov dword ptr [esp+0x68],0
	call edx
	test eax,eax
	jge Block30

 Block29:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block30:
	mov eax,dword ptr [esp+0x60]
	mov ecx,dword ptr [esi]
	lea edx,[esp+0x20]
	push edx
	mov dword ptr [esp+0x30],eax
	mov eax,dword ptr [ecx+0x6C]
	push esi
	mov dword ptr [esp+0x28],0
	call eax
	test eax,eax
	jge Block32

 Block31:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block32:
	mov edx,dword ptr [esp+0x54]
	test edx,edx
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	sub esp,0x10
	mov ecx,esp
	lea eax,[ebp-1]
	mov ebp,dword ptr [esp+0x44]
	imul eax,dword ptr [ebx+0x40]
	sub eax,dword ptr [esp+0x30]
	mov ebx,dword ptr [edx]
	add eax,dword ptr [esp+0x68]
	mov dword ptr [ecx],ebp
	mov ebp,dword ptr [esp+0x48]
	mov dword ptr [ecx+4],ebp
	mov ebp,dword ptr [esp+0x4C]
	mov dword ptr [ecx+8],ebp
	mov ebp,dword ptr [esp+0x50]
	mov dword ptr [ecx+0xC],ebp
	mov ecx,dword ptr [esp+0x6C]
	sub ecx,dword ptr [esp+0x3C]
	push esi
	push ecx
	mov ecx,dword ptr [ebx+0x80]
	push eax
	push edx
	mov edi,edx
	call ecx
	test eax,eax
	jge Block36

 Block35:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block36:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x4C],1
	jne Block39

 Block37:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov byte ptr [esp+0x4C],0
	test esi,esi
	je Block42

 Block41:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block42:
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test eax,eax
	je Block44

 Block43:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block44:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 0x10
}
}
// CField_CookieHouse::Update
__SUB_CLASS_THIS0(0014DC50, __thiscall, 143799,  CField_CookieHouse, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CField::Update
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	test eax,eax
	je Block3

 Block1:
	mov eax,dword ptr [eax+0x4148]
	cmp dword ptr [esi+0xDC8],eax
	je Block3

 Block2:
	mov dword ptr [esi+0xDC8],eax
	mov ecx,esi
	pop esi
	jmp  CField_CookieHouse::_UpdatePoint

 Block3:
	pop esi
	ret
}
}
// CField_CookieHouse::Init
_SUB_EXCEPTION_HANDLER(14E250)
__SUB_CLASS_THIS(0014E250, __thiscall, 143800,  CField_CookieHouse, void, void*) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_14E250
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
	mov edi,ecx
	mov dword ptr [ebp-0x44],edi
	mov eax,dword ptr [ebp+8]
	xor ebx,ebx
	push eax
	mov dword ptr [ebp-0x18],ebx
	call CField::Init
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x60]
	push ecx
	call esi
	lea edx,[ebp-0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea eax,[ebp-0x70]
	push eax
	mov dword ptr [ebp-4],ebx
	call esi
	lea ecx,[ebp-0x70]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push ebx
	push ebx
	lea edx,[ebp-0x60]
	push edx
	lea eax,[ebp-0x70]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x13FC
	push ecx
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[ebp-0x80]
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x3C]
	mov dword ptr [ebp-0x3C],ebx
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
	cmp word ptr [ebp-0x80],8
	mov esi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],5
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [ebp-0x80],ax
	mov eax,dword ptr [ebp-0x78]
	cmp eax,ebx
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[ebp-0x80]
	push ecx
	call esi

 Block13:
	cmp word ptr [ebp-0x70],8
	mov byte ptr [ebp-4],6
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x68]
	xor edx,edx
	mov word ptr [ebp-0x70],dx
	cmp eax,ebx
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea eax,[ebp-0x70]
	push eax
	call esi

 Block17:
	cmp word ptr [ebp-0x60],8
	mov byte ptr [ebp-4],7
	jne Block20

 Block18:
	mov eax,dword ptr [ebp-0x58]
	xor ecx,ecx
	mov word ptr [ebp-0x60],cx
	cmp eax,ebx
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[ebp-0x60]
	push edx
	call esi

 Block21:
	add edi,0xDA4
	mov dword ptr [ebp-0x4C],ebx
	mov dword ptr [ebp-0x40],edi

 Block22:
	push 0x48
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp-0x14],eax
	mov byte ptr [ebp-4],8
	test eax,eax
	je Block30

 Block23:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0x1B
	push 3
	push 0
	push 0
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x48],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x3C]
	mov byte ptr [ebp-4],9
	test ecx,ecx
	je Block5

 Block24:
	lea eax,[ebp-0x38]
	push eax
	mov byte ptr [ebp-4],8
	call IWzProperty::Getitem
	or dword ptr [ebp-0x18],1
	mov ecx,eax
	mov byte ptr [ebp-4],0xA
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp-0x48],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block29

 Block25:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x50]
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
	and ebx,dword ptr [ebp-0x50]
	test eax,eax
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block27:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block29

 Block28:
	cmp edi,0x80004002
	jne Block44

 Block29:
	mov ecx,dword ptr [ebp-0x14]
	call CBitmapNumber::_ctor_0
	mov ebx,dword ptr [ebp-0x4C]
	mov edi,eax
	jmp Block31

 Block30:
	xor edi,edi

 Block31:
	mov dword ptr [ebp-4],0xB
	test edi,edi
	je Block33

 Block32:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block33:
	mov eax,dword ptr [ebp-0x40]
	mov esi,dword ptr [eax]
	mov dword ptr [eax],edi
	test esi,esi
	je Block36

 Block34:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block36

 Block35:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block36:
	test byte ptr [ebp-0x18],1
	mov dword ptr [ebp-4],7
	je Block41

 Block37:
	and dword ptr [ebp-0x18],0xFFFFFFFE
	cmp word ptr [ebp-0x38],8
	jne Block40

 Block38:
	mov eax,dword ptr [ebp-0x30]
	xor ecx,ecx
	mov word ptr [ebp-0x38],cx
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea edx,[ebp-0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	add dword ptr [ebp-0x40],8
	inc ebx
	cmp ebx,5
	mov dword ptr [ebp-0x4C],ebx
	jl Block22

 Block42:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x38]
	push eax
	call esi
	lea ecx,[ebp-0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block45

 Block43:
	push eax
	call _com_issue_error

 Block44:
	push edi
	call _com_issue_error

 Block45:
	lea edx,[ebp-0x28]
	push edx
	mov byte ptr [ebp-4],0xC
	call esi
	lea eax,[ebp-0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block47

 Block46:
	push eax
	call _com_issue_error

 Block47:
	push 0
	push 0
	lea ecx,[ebp-0x38]
	push ecx
	lea edx,[ebp-0x28]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x48],esp
	push 0x13FB
	push eax
	mov byte ptr [ebp-4],0xD
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xE
	jne Block49

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	lea ecx,[ebp-0x90]
	push ecx
	mov byte ptr [ebp-4],0xD
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block55

 Block50:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0x14]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	mov ebx,dword ptr [ebp-0x44]
	mov esi,eax
	xor eax,eax
	test esi,esi
	setl al
	dec eax
	and eax,dword ptr [ebp-0x14]
	mov edi,eax
	mov eax,dword ptr [ebx+0xDCC]
	test eax,eax
	je Block52

 Block51:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block52:
	mov dword ptr [ebx+0xDCC],edi
	test esi,esi
	jge Block57

 Block53:
	cmp esi,0x80004002
	je Block57

 Block54:
	push esi
	call _com_issue_error

 Block55:
	mov ebx,dword ptr [ebp-0x44]
	mov eax,dword ptr [ebx+0xDCC]
	test eax,eax
	je Block57

 Block56:
	mov dword ptr [ebx+0xDCC],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block57:
	mov esi,8
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp-0x90],si
	jne Block64

 Block58:
	xor eax,eax
	mov word ptr [ebp-0x90],ax
	mov eax,dword ptr [ebp-0x88]
	test eax,eax
	je Block60

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block60:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block61:
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp-0x28],si
	jne Block65

 Block62:
	mov eax,dword ptr [ebp-0x20]
	xor edx,edx
	mov word ptr [ebp-0x28],dx
	test eax,eax
	je Block66

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block64:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x90]
	push ecx
	call edi
	jmp Block61

 Block65:
	lea eax,[ebp-0x28]
	push eax
	call edi

 Block66:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x38],si
	jne Block69

 Block67:
	mov eax,dword ptr [ebp-0x30]
	xor ecx,ecx
	mov word ptr [ebp-0x38],cx
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea edx,[ebp-0x38]
	push edx
	call edi

 Block70:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x28]
	push eax
	call esi
	lea ecx,[ebp-0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block72

 Block71:
	push eax
	call _com_issue_error

 Block72:
	lea edx,[ebp-0x38]
	push edx
	mov byte ptr [ebp-4],0x10
	call esi
	lea eax,[ebp-0x38]
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
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0x11
	test ecx,ecx
	jne Block76

 Block75:
	push 0x80004003
	call _com_issue_error

 Block76:
	lea edx,[ebp-0x28]
	push edx
	lea eax,[ebp-0x38]
	push eax
	push 0xC00614A4
	push 0x2D
	push 0xBB
	push 0x5C
	push 0xFFFFFFA3
	lea edx,[ebp-0x14]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0xDD0]
	cmp esi,eax
	je Block81

 Block77:
	mov dword ptr [ebx+0xDD0],eax
	test eax,eax
	je Block79

 Block78:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block79:
	test esi,esi
	je Block81

 Block80:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block81:
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block83

 Block82:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block83:
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],0x10
	jne Block86

 Block84:
	mov eax,dword ptr [ebp-0x30]
	xor ecx,ecx
	mov word ptr [ebp-0x38],cx
	test eax,eax
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea edx,[ebp-0x38]
	push edx
	call edi

 Block87:
	cmp word ptr [ebp-0x28],8
	mov byte ptr [ebp-4],7
	jne Block90

 Block88:
	xor eax,eax
	mov word ptr [ebp-0x28],ax
	mov eax,dword ptr [ebp-0x20]
	test eax,eax
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea ecx,[ebp-0x28]
	push ecx
	call edi

 Block91:
	cmp dword ptr [ebx+0xDD0],0
	je Block109

 Block92:
	mov esi,dword ptr [ebx+0xDD0]
	test esi,esi
	jne Block94

 Block93:
	push 0x80004003
	call _com_issue_error

 Block94:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block96

 Block95:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block96:
	push 1
	lea ecx,[ebp-0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov bl,0x12
	mov edx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp-0x28],dx
	mov dword ptr [ebp-0x20],eax
	test eax,eax
	je Block98

 Block97:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block98:
	mov edi,dword ptr [ebp-0x44]
	mov esi,dword ptr [edi+0xDD0]
	mov byte ptr [ebp-4],0x13
	test esi,esi
	jne Block100

 Block99:
	push 0x80004003
	call _com_issue_error

 Block100:
	mov edx,dword ptr [ebp-0x28]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x24]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x20]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x1C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block102

 Block101:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block102:
	cmp word ptr [ebp-0x28],8
	mov byte ptr [ebp-4],bl
	jne Block105

 Block103:
	mov eax,dword ptr [ebp-0x20]
	xor ecx,ecx
	mov word ptr [ebp-0x28],cx
	test eax,eax
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea edx,[ebp-0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block106:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block108

 Block107:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block108:
	mov ecx,edi
	call CField_CookieHouse::_UpdatePoint

 Block109:
	mov eax,dword ptr [ebp-0x3C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block111

 Block110:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block111:
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
	ret 4
}
}
// CField_CookieHouse::GetFieldType
__SUB_CLASS_THIS0(0014DD50, __thiscall, 143801,  CField_CookieHouse, long) {
__asm {

 Block0:
	mov eax,0x11
	ret
}
}
// CBitmapNumber::~CBitmapNumber
_SUB_EXCEPTION_HANDLER(14E1B0)
__SUB_CLASS_THIS0(0014E1B0, __thiscall, 37760,  CBitmapNumber, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_14E1B0
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
	mov eax,dword ptr [esi+0x38]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

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
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 0xA
	push 4
	lea eax,[esi+0xC]
	push eax
	call __eh_vector_dtor_iterator
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CField_CookieHouse::CField_CookieHouse
_SUB_EXCEPTION_HANDLER(14DCC0)
__SUB_CLASS_THIS0(0014DCC0, __thiscall, 143797,  CField_CookieHouse, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_14DCC0
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
	call CField::_ctor_default
	push offset ZRef<CBitmapNumber>::~ZRef<CBitmapNumber>
	push offset ZRef<CBitmapNumber>::_ctor_default
	push 5
	push 8
	lea eax,[esi+0xDA0]
	xor edi,edi
	push eax
	mov dword ptr [esp+0x2C],edi
	int 3// TODO: 	mov dword ptr [esi],offset CField_CookieHouse::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_CookieHouse::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_CookieHouse::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_CookieHouse::`vftable'{for `ZRefCounted'}
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xDC8],edi
	mov dword ptr [esi+0xDCC],edi
	mov dword ptr [esi+0xDD0],edi
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
// CField_CookieHouse::_UpdatePoint
_SUB_EXCEPTION_HANDLER(14DAA0)
__SUB_CLASS_THIS0(0014DAA0, __thiscall, 143799,  CField_CookieHouse, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_14DAA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	xor ebp,ebp
	cmp dword ptr [edi+0xDD0],ebp
	sete al
	test al,al
	jne Block22

 Block1:
	mov eax,3
	mov word ptr [esp+0x1C],ax
	mov dword ptr [esp+0x24],ebp
	mov ecx,dword ptr [edi+0xDD0]
	mov dword ptr [esp+0x44],ebp
	cmp ecx,ebp
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov ebx,8
	mov byte ptr [esp+0x44],2
	cmp word ptr [esp+0x1C],bx
	jne Block6

 Block4:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block7

 Block5:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block7

 Block6:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block7:
	mov esi,dword ptr [esp+0x14]
	cmp esi,ebp
	sete al
	test al,al
	je Block10

 Block8:
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp esi,ebp
	je Block22

 Block9:
	jmp Block21

 Block10:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
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
	mov eax,dword ptr [edi+0xDCC]
	mov byte ptr [esp+0x44],3
	cmp esi,ebp
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea ecx,[esp+0x2C]
	push ecx
	push eax
	push ebp
	push ebp
	mov ecx,esi
	call IWzCanvas::Copy
	mov byte ptr [esp+0x44],2
	cmp word ptr [esp+0x2C],bx
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,ebp
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block18:
	mov ebp,dword ptr [edi+0xDC8]
	push ebp
	call _anon_FindGrade_
	mov ebx,eax
	add esp,4
	cmp dword ptr [edi+ebx*8+0xDA4],0
	je Block20

 Block19:
	push ebp
	push 9
	push 0x5C
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x28],esp
	push esi
	call edx
	mov ecx,dword ptr [edi+ebx*8+0xDA4]
	call CBitmapNumber::Draw

 Block20:
	mov dword ptr [esp+0x44],0xFFFFFFFF

 Block21:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block22:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret
}
}
// CBitmapNumber::CBitmapNumber
_SUB_EXCEPTION_HANDLER(14DE90)
__SUB_CLASS_THIS(0014DE90, __thiscall, 37756,  CBitmapNumber, void, NakedParam<_x_com_ptr<IWzProperty>>, long, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_14DE90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
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
	mov dword ptr [ebp-0x2C],esi
	xor eax,eax
	xor ebx,ebx
	mov dword ptr [esi+4],eax
	mov dword ptr [ebp-4],ebx
	mov dword ptr [esi+8],eax
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 0xA
	push 4
	lea edi,[esi+0xC]
	push edi
	mov byte ptr [ebp-4],1
	int 3// TODO: 	mov dword ptr [esi],offset CBitmapNumber::`vftable'
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x34],ebx
	mov dword ptr [esi+0x38],ebx
	mov eax,dword ptr [ebp+0xC]
	cmp dword ptr [ebp+8],ebx
	mov ecx,dword ptr [ebp+0x10]
	mov dword ptr [esi+0x3C],eax
	sete al
	test al,al
	sete al
	movzx eax,al
	mov byte ptr [ebp-4],4
	mov dword ptr [esi+0x40],ecx
	mov dword ptr [esi+0x44],eax
	cmp eax,ebx
	je Block40

 Block1:
	lea ecx,[ecx]

 Block2:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],5
	test ecx,ecx
	je Block15

 Block3:
	lea edx,[ebp-0x28]
	push edx
	mov byte ptr [ebp-4],4
	call IWzProperty::Getitem
	push eax
	lea eax,[ebp-0x14]
	push eax
	mov byte ptr [ebp-4],6
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],7
	mov dword ptr [ebp-0x18],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block5

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block5:
	mov ecx,edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	test eax,eax
	jge Block7

 Block6:
	cmp eax,0x80004002
	jne Block20

 Block7:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	cmp word ptr [ebp-0x28],8
	mov byte ptr [ebp-4],4
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [ebp-0x28],ax
	mov eax,dword ptr [ebp-0x20]
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[ebp-0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	inc ebx
	add edi,4
	cmp ebx,0xA
	jl Block2

 Block14:
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x18],esp
	push 0x14FA
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],8
	test ecx,ecx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea eax,[ebp-0x28]
	push eax
	mov byte ptr [ebp-4],4
	call IWzProperty::Getitem
	push eax
	lea ecx,[ebp-0x14]
	mov bl,9
	push ecx
	mov byte ptr [ebp-4],bl
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0xA
	mov dword ptr [ebp-0x18],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block18

 Block17:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block18:
	lea ecx,[esi+0x34]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	test eax,eax
	jge Block21

 Block19:
	cmp eax,0x80004002
	je Block21

 Block20:
	push eax
	call _com_issue_error

 Block21:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block23:
	mov edi,8
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x28],di
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [ebp-0x28],ax
	mov eax,dword ptr [ebp-0x20]
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea ecx,[ebp-0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block27:
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x18],esp
	push 0x14F7
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],0xB
	test ecx,ecx
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	lea eax,[ebp-0x28]
	push eax
	mov byte ptr [ebp-4],4
	call IWzProperty::Getitem
	push eax
	lea ecx,[ebp-0x14]
	mov bl,0xC
	push ecx
	mov byte ptr [ebp-4],bl
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0xD
	mov dword ptr [ebp-0x18],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block31

 Block30:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block31:
	lea ecx,[esi+0x38]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	test eax,eax
	jge Block34

 Block32:
	cmp eax,0x80004002
	je Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block36:
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x28],di
	jne Block39

 Block37:
	xor eax,eax
	mov word ptr [ebp-0x28],ax
	mov eax,dword ptr [ebp-0x20]
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea ecx,[ebp-0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block42

 Block41:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block42:
	mov eax,esi
	lea esp,[ebp-0x3C]
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
