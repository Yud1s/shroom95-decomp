#include "regen.hpp"
// KeywordEffectManager.ipp
#include "KeywordEffectManager.hpp"

// CKeywordEffectManager::CKeywordEffectManager
__SUB_CLASS_THIS0(001CC470, __thiscall, 24628,  CKeywordEffectManager, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	push 0x64
	int 3// TODO: 	mov dword ptr [esi],offset ZMap<ZXString<char>, ZRef<ZMap<long, _x_com_ptr<IWzProperty>, long>>, ZXString<char>>::`vftable'
	mov dword ptr [esi+4],0
	mov dword ptr [esi+8],0x1F
	mov dword ptr [esi+0xC],0
	call ZMap<ZXString<char>, ZRef<ZMap<long, _x_com_ptr<IWzProperty>, long>>, ZXString<char>>::_CalcAutoGrow
	mov dword ptr [esi+0x18],0
	mov eax,esi
	pop esi
	ret
}
}
// CKeywordEffectManager::Show
_SUB_EXCEPTION_HANDLER(1CCFD0)
__SUB_CLASS_THIS(001CCFD0, __thiscall, 24631,  CKeywordEffectManager, void, const char*, NakedParam<_x_com_ptr<IWzVector2D>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1CCFD0
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
	mov edi,ecx
	mov edx,dword ptr [esp+0x2C]
	xor ebx,ebx
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x14],ebx
	cmp edx,ebx
	je Block4

 Block1:
	mov eax,edx
	lea esi,[eax+1]

 Block2:
	mov cl,byte ptr [eax]
	inc eax
	cmp cl,bl
	jne Block2

 Block3:
	sub eax,esi
	mov esi,eax
	push esi
	push edx
	push ebx
	push esi
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer

 Block4:
	mov ecx,edi
	mov byte ptr [esp+0x24],1
	call ZMap<ZXString<char>, ZRef<ZMap<long, _x_com_ptr<IWzProperty>, long>>, ZXString<char>>::GetHeadPosition
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block13

 Block5:
	mov ebp,dword ptr [esp+0x34]

 Block6:
	push ebx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	call ZMap<ZXString<char>, ZRef<ZMap<long, _x_com_ptr<IWzProperty>, long>>, ZXString<char>>::GetNext
	push eax
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x30],ebx
	call ZXString<char>::op_assign
	mov esi,dword ptr [esp+0x2C]
	push ebx
	push ebx
	push esi
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x30],2
	call ZXString<char>::Find__0
	cmp eax,0xFFFFFFFF
	je Block10

 Block7:
	push ebp
	push ecx
	mov ecx,dword ptr [esp+0x38]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x3C],esp
	cmp eax,ebx
	je Block9

 Block8:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block9:
	push esi
	mov ecx,edi
	call CKeywordEffectManager::ShowKeywordEffect

 Block10:
	mov byte ptr [esp+0x24],1
	cmp esi,ebx
	je Block12

 Block11:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block12:
	cmp dword ptr [esp+0x18],ebx
	jne Block6

 Block13:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp eax,ebx
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block17:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 0xC
}
}
// CKeywordEffectManager::RegisterKeyword
_SUB_EXCEPTION_HANDLER(1CD110)
__SUB_CLASS_THIS(001CD110, __thiscall, 24633,  CKeywordEffectManager, void, const char*, long, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1CD110
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x1C],ebx
	mov edi,dword ptr [esp+0x30]
	xor esi,esi
	mov byte ptr [esp+0x28],1
	mov dword ptr [esp+0x14],esi
	cmp edi,ebx
	je Block5

 Block1:
	mov eax,edi
	lea edx,[eax+1]
	jmp Block3

 Block3:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block3

 Block4:
	sub eax,edx
	mov esi,eax
	push esi
	push edi
	push ebx
	push esi
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [esp+0x14]

 Block5:
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x30],2
	call ZMap<ZXString<char>, ZRef<ZMap<long, _x_com_ptr<IWzProperty>, long>>, ZXString<char>>::GetAt
	test eax,eax
	sete bl
	mov byte ptr [esp+0x28],1
	test esi,esi
	je Block7

 Block6:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block7:
	test bl,bl
	je Block15

 Block8:
	lea ecx,[esp+0x18]
	call ZRef<ZMap<long, _x_com_ptr<IWzProperty>, long>>::_Alloc
	xor esi,esi
	mov dword ptr [esp+0x30],esi
	test edi,edi
	je Block13

 Block9:
	mov eax,edi
	lea edx,[eax+1]
	jmp Block11

 Block11:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block11

 Block12:
	sub eax,edx
	mov esi,eax
	push esi
	push edi
	push 0
	push esi
	lea ecx,[esp+0x40]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x34]
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [esp+0x30]

 Block13:
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x34]
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x30],3
	call ZMap<ZXString<char>, ZRef<ZMap<long, _x_com_ptr<IWzProperty>, long>>, ZXString<char>>::Insert
	mov byte ptr [esp+0x28],1
	test esi,esi
	je Block15

 Block14:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov esi,dword ptr [esp+0x1C]
	lea ecx,[esp+0x38]
	push ecx
	lea edx,[esp+0x38]
	push edx
	mov ecx,esi
	call ZMap<long, _x_com_ptr<IWzProperty>, long>::Insert
	mov byte ptr [esp+0x28],0
	test esi,esi
	je Block19

 Block16:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block19

 Block17:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block19

 Block18:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block19:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block21:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 0xC
}
}
// CKeywordEffectManager::GetKeywordEffectProp
_SUB_EXCEPTION_HANDLER(1CC640)
__SUB(001CC640, __cdecl, 24622,  _x_com_ptr<IWzProperty>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1CC640
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
	mov eax,dword ptr [esp+0x8C]
	push eax
	lea ecx,[esp+0x18]
	xor ebp,ebp
	push ecx
	mov dword ptr [esp+0x20],ebp
	call get_equip_data_path
	add esp,8
	mov eax,dword ptr [esp+0x14]
	mov ecx,1
	mov dword ptr [esp+0x80],ecx
	cmp eax,ebp
	je Block2

 Block1:
	cmp word ptr [eax],bp
	jne Block5

 Block2:
	mov esi,dword ptr [esp+0x88]
	mov dword ptr [esi],ebp
	mov dword ptr [esp+0x18],ecx
	mov byte ptr [esp+0x80],0
	cmp eax,ebp
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov eax,esi
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x70
	ret

 Block5:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x38]
	push edx
	call esi
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0x84],2
	call esi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov edx,dword ptr [esp+0x14]
	push ebp
	push ebp
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x34]
	push ecx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	mov bl,3
	push edx
	mov byte ptr [esp+0x98],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x94],4
	cmp dword ptr [_D_G_RM],ebp
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea eax,[esp+0x5C]
	mov byte ptr [esp+0x94],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block14

 Block12:
	cmp eax,0x80004002
	je Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	mov edi,8
	mov byte ptr [esp+0x80],7
	cmp word ptr [esp+0x48],di
	jne Block21

 Block15:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	cmp eax,ebp
	je Block17

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block17:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block18:
	mov byte ptr [esp+0x80],8
	cmp word ptr [esp+0x28],di
	jne Block22

 Block19:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block23

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block21:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x48]
	push edx
	call esi
	jmp Block18

 Block22:
	lea ecx,[esp+0x28]
	push ecx
	call esi

 Block23:
	mov byte ptr [esp+0x80],9
	cmp word ptr [esp+0x38],di
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	cmp eax,ebp
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea eax,[esp+0x38]
	push eax
	call esi

 Block27:
	mov edi,dword ptr [esp+0x1C]
	cmp edi,ebp
	sete al
	test al,al
	je Block32

 Block28:
	mov esi,dword ptr [esp+0x88]
	mov dword ptr [esi],ebp
	mov dword ptr [esp+0x18],1
	mov byte ptr [esp+0x80],1
	cmp edi,ebp
	je Block30

 Block29:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block30:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	cmp eax,ebp
	je Block4

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	mov eax,esi
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x70
	ret

 Block32:
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x3D5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x8C],0xA
	cmp edi,ebp
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	lea ecx,[esp+0x64]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x90],9
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x88],0xB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block37

 Block35:
	cmp eax,0x80004002
	je Block37

 Block36:
	push eax
	call _com_issue_error

 Block37:
	cmp word ptr [esp+0x58],8
	mov bl,0xD
	mov byte ptr [esp+0x80],bl
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	cmp eax,ebp
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea eax,[esp+0x58]
	push eax
	call esi

 Block41:
	mov esi,dword ptr [esp+0x20]
	cmp esi,ebp
	sete al
	test al,al
	je Block47

 Block42:
	mov ebx,dword ptr [esp+0x88]
	mov dword ptr [ebx],ebp
	mov dword ptr [esp+0x18],1
	mov byte ptr [esp+0x80],9
	cmp esi,ebp
	je Block44

 Block43:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block44:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [esp+0x84],1
	call ecx
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	cmp eax,ebp
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block46:
	mov eax,ebx
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x70
	ret

 Block47:
	push ebp
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	push 0x698
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x8C],0xE
	cmp esi,ebp
	jne Block49

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	lea eax,[esp+0x74]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x90],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x88],0xF
	call Ztl_variant_t::GetUnknown
	mov ebp,dword ptr [esp+0x88]
	push eax
	mov ecx,ebp
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	cmp word ptr [esp+0x68],8
	mov dword ptr [esp+0x18],1
	mov byte ptr [esp+0x80],bl
	jne Block52

 Block50:
	mov eax,dword ptr [esp+0x70]
	xor ecx,ecx
	mov word ptr [esp+0x68],cx
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea edx,[esp+0x68]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block53:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0x84],9
	call ecx
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [esp+0x84],1
	call eax
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block55:
	mov eax,ebp
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x70
	ret
}
}
// CKeywordEffectManager::Update
__SUB_CLASS_THIS0(001CBE50, __thiscall, 24634,  CKeywordEffectManager, void) {
__asm {

 Block0:
	push ecx
	push edi
	mov edi,ecx
	cmp dword ptr [edi+0x18],0
	je Block9

 Block1:
	push esi
	mov esi,dword ptr [edi+0x18]
	test esi,esi
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x114]
	lea ecx,[esp+8]
	push ecx
	push esi
	mov dword ptr [esp+0x10],0
	call edx
	test eax,eax
	jge Block5

 Block4:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block5:
	cmp dword ptr [esp+8],0
	jne Block8

 Block6:
	mov eax,dword ptr [edi+0x18]
	test eax,eax
	je Block8

 Block7:
	mov dword ptr [edi+0x18],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	pop esi

 Block9:
	pop edi
	pop ecx
	ret
}
}
// CKeywordEffectManager::ShowKeywordEffect
_SUB_EXCEPTION_HANDLER(1CCAD0)
__SUB_CLASS_THIS(001CCAD0, __thiscall, 24631,  CKeywordEffectManager, void, const char*, NakedParam<_x_com_ptr<IWzVector2D>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1CCAD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x48
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x5C]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x1C],ebx
	xor ebp,ebp
	mov dword ptr [esp+0x18],ebp
	mov dword ptr [esp+0x64],ebp
	cmp dword ptr [ebx+0x18],ebp
	je Block3

 Block1:
	mov eax,dword ptr [esp+0x70]
	mov dword ptr [esp+0x64],0xFFFFFFFF
	cmp eax,ebp
	je Block55

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block55

 Block3:
	mov dword ptr [esp+0x28],ebp
	mov edx,dword ptr [esp+0x6C]
	xor esi,esi
	mov byte ptr [esp+0x64],1
	mov dword ptr [esp+0x14],esi
	cmp edx,ebp
	je Block7

 Block4:
	mov eax,edx
	lea esi,[eax+1]
	lea esp,[esp]

 Block5:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block5

 Block6:
	sub eax,esi
	mov esi,eax
	push esi
	push edx
	push ebp
	push esi
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [esp+0x14]

 Block7:
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov edi,1
	mov ecx,ebx
	mov byte ptr [esp+0x6C],2
	mov dword ptr [esp+0x20],edi
	call ZMap<ZXString<char>, ZRef<ZMap<long, _x_com_ptr<IWzProperty>, long>>, ZXString<char>>::GetAt
	test eax,eax
	je Block10

 Block8:
	cmp dword ptr [esp+0x28],ebp
	je Block10

 Block9:
	xor bl,bl
	jmp Block11

 Block10:
	mov bl,1

 Block11:
	mov dword ptr [esp+0x64],edi
	cmp esi,ebp
	je Block13

 Block12:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block13:
	test bl,bl
	jne Block53

 Block14:
	mov ecx,dword ptr [esp+0x28]
	call ZMap<long, _x_com_ptr<IWzProperty>, long>::GetHeadPosition
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block53

 Block15:
	nop

 Block16:
	mov dword ptr [esp+0x6C],ebp
	lea ecx,[esp+0x6C]
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x6C],3
	call ZMap<long, _x_com_ptr<IWzProperty>, long>::GetNext
	mov edi,dword ptr [esp+0x6C]
	cmp edi,ebp
	je Block50

 Block17:
	push ebp
	push 0xFF
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push ebp
	mov dword ptr [eax],ebp
	push ebp
	push ecx
	mov ecx,dword ptr [esp+0x8C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x8C]
	mov dword ptr [esp+0x30],esp
	cmp eax,ebp
	je Block19

 Block18:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block19:
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x38],esp
	push edi
	call edx
	lea eax,[esp+0x44]
	push eax
	call CAnimationDisplayer::LoadLayer_0
	mov ebx,dword ptr [esp+0x44]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0x18]
	add esp,0x28
	cmp esi,eax
	je Block24

 Block20:
	mov dword ptr [ebx+0x18],eax
	cmp eax,ebp
	je Block22

 Block21:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block22:
	cmp esi,ebp
	je Block24

 Block23:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block24:
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebp
	je Block26

 Block25:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block26:
	mov esi,dword ptr [ebx+0x18]
	cmp esi,ebp
	je Block56

 Block27:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xB0]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],ebp
	call eax
	cmp eax,ebp
	jge Block29

 Block28:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block29:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x74]
	lea eax,[ecx+edx]
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xB4]
	push eax
	push esi
	call edx
	cmp eax,ebp
	jge Block31

 Block30:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block31:
	cmp dword ptr [ebx+0x18],ebp
	je Block50

 Block32:
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
	jl Block57

 Block33:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x68],4
	call esi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block57

 Block34:
	mov ecx,dword ptr [ebx+0x18]
	mov byte ptr [esp+0x64],5
	cmp ecx,ebp
	je Block56

 Block35:
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push ebp
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x64],4
	cmp word ptr [esp+0x2C],si
	jne Block38

 Block36:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block39:
	mov byte ptr [esp+0x64],3
	cmp word ptr [esp+0x3C],si
	jne Block42

 Block40:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebp
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block43:
	push 0x64
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1075
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x54]
	mov byte ptr [esp+0x6C],6
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x70],3
	call IWzProperty::Getitem
	mov byte ptr [esp+0x68],7
	cmp word ptr [eax],si
	jne Block45

 Block44:
	mov eax,dword ptr [eax+8]
	jmp Block46

 Block45:
	mov eax,offset _S___3

 Block46:
	push eax
	call play_casheffect_sound
	add esp,8
	mov byte ptr [esp+0x64],3
	cmp word ptr [esp+0x4C],si
	jne Block49

 Block47:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	cmp eax,ebp
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	mov byte ptr [esp+0x64],1
	cmp edi,ebp
	je Block52

 Block51:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block52:
	cmp dword ptr [esp+0x18],ebp
	jne Block16

 Block53:
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x64],0
	call ZRef<ZMap<long, _x_com_ptr<IWzProperty>, long>>::~ZRef<ZMap<long, _x_com_ptr<IWzProperty>, long>>
	mov eax,dword ptr [esp+0x70]
	mov dword ptr [esp+0x64],0xFFFFFFFF
	cmp eax,ebp
	je Block55

 Block54:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block55:
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret 0xC

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	push eax
	call _com_issue_error
}
}
// CKeywordEffectManager::ClearKeyword
__SUB_CLASS_THIS0(001CC0D0, __thiscall, 24634,  CKeywordEffectManager, void) {
__asm {

 Block0:
	jmp  ZMap<ZXString<char>, ZRef<ZMap<long, _x_com_ptr<IWzProperty>, long>>, ZXString<char>>::RemoveAll
}
}
