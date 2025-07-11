#include "regen.hpp"
// SoundMan.ipp
#include "SoundMan.hpp"

// CSoundMan::SECACHEITEM::SECACHEITEM
_SUB_EXCEPTION_HANDLER(3B710)
__SUB_CLASS_THIS(0003B710, __thiscall, 103771,  CSoundMan::SECACHEITEM, void, IWzSound*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3B710
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
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esi],eax
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	mov dword ptr [esp+0x14],0
	call timeGetTime
	mov dword ptr [esi+8],eax
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// CSoundMan::~CSoundMan
_SUB_EXCEPTION_HANDLER(317F60)
__SUB_CLASS_THIS0(00317F60, __thiscall, 78684,  CSoundMan, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_317F60
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
	mov eax,dword ptr [esi+4]
	xor ebx,ebx
	cmp eax,ebx
	je Block2

 Block1:
	mov dword ptr [esi+4],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xC]
	cmp eax,ebx
	je Block4

 Block3:
	mov dword ptr [esi+0xC],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	lea edi,[esi+0x10]
	lea eax,[esp+0x14]
	cmp edi,eax
	je Block8

 Block5:
	mov ecx,dword ptr [edi]
	cmp ecx,ebx
	je Block7

 Block6:
	call _xbstr_t::Data_t::Release
	mov dword ptr [edi],ebx

 Block7:
	mov dword ptr [edi],ebx

 Block8:
	lea ecx,[esi+0x1C]
	call ZMap<wchar_t const *, __POSITION *, Ztl_bstr_t>::RemoveAll
	lea ecx,[esi+0x34]
	call ZHeapBase<CSoundMan::SECACHEITEM, ZMinHeapCompare<CSoundMan::SECACHEITEM>>::RemoveAll
	lea ecx,[esi+0x4C]
	call ZMap<unsigned int, _x_com_ptr<IWzSoundState>, unsigned int>::RemoveAll
	mov dword ptr [esp+0x10],ebx
	lea ecx,[esp+0x14]
	push 0x6E7
	push ecx
	mov dword ptr [esp+0x28],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov esi,eax
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x20],1
	cmp eax,ebx
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block10:
	mov ecx,dword ptr [_D__G_APFNPCOMAPIS]
	xor eax,eax
	mov dword ptr [esp+0x10],eax
	mov edx,dword ptr [esi]
	cmp ecx,ebx
	je Block12

 Block11:
	push ebx
	lea eax,[esp+0x14]
	push eax
	push offset __GUID_1c923939_1338_4f8b_92cf_38935cee1fef
	push edx
	call ecx
	mov eax,dword ptr [esp+0x20]
	add esp,0x10

 Block12:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x20],bl
	cmp ecx,ebx
	je Block14

 Block13:
	add ecx,0xFFFFFFF4
	push ecx
	call ZXString16::_Release
	mov eax,dword ptr [esp+0x14]
	add esp,4

 Block14:
	cmp eax,ebx
	sete cl
	cmp cl,bl
	sete cl
	cmp cl,bl
	je Block18

 Block15:
	cmp eax,ebx
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x18]
	push eax
	call edx
	mov eax,dword ptr [esp+0x10]

 Block18:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	cmp eax,ebx
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret
}
}
// CSoundMan::PlaySE
_SUB_EXCEPTION_HANDLER(4F880)
__SUB_CLASS_THIS(0004F880, __thiscall, 103765,  CSoundMan, uint32_t, const wchar_t*, uint32_t, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4F880
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x48
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov ebx,ecx
	mov dword ptr [ebp-0x1C],ebx
	xor edx,edx
	mov dword ptr [ebp-4],edx
	mov dword ptr [ebp-0x18],edx
	mov esi,dword ptr [ebp+8]
	movzx eax,word ptr [esi]
	mov byte ptr [ebp-4],1
	cmp ax,0x2F
	je Block2

 Block1:
	cmp ax,0x5C
	jne Block3

 Block2:
	add esi,2
	mov dword ptr [ebp+8],esi

 Block3:
	push edx
	lea eax,[ebp+8]
	lea ecx,[ebx+0x1C]
	push eax
	call ZMap<wchar_t const *, __POSITION *, Ztl_bstr_t>::GetAt
	mov edi,eax
	test edi,edi
	je Block11

 Block4:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF0
	jne Block7

 Block6:
	xor esi,esi
	jmp Block8

 Block7:
	lea esi,[eax+0x10]

 Block8:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	mov dword ptr [ebp-0x18],eax
	call edx

 Block10:
	call timeGetTime
	mov dword ptr [esi+8],eax
	mov eax,dword ptr [edi]
	push eax
	lea ecx,[ebx+0x34]
	call ZHeapBase<CSoundMan::SECACHEITEM, ZMinHeapCompare<CSoundMan::SECACHEITEM>>::UpdateAt
	mov edi,dword ptr [ebp-0x1C]
	jmp Block49

 Block11:
	push esi
	lea ecx,[ebp+8]
	call _xbstr_t::_ctor_1
	cmp dword ptr [ebx+4],0
	mov byte ptr [ebp-4],2
	sete al
	test al,al
	je Block15

 Block12:
	mov esi,dword ptr [ebp+0x10]
	mov ecx,dword ptr [ebp+8]
	neg esi
	sbb esi,esi
	test ecx,ecx
	je Block14

 Block13:
	call _xbstr_t::Data_t::Release

 Block14:
	mov eax,esi
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0xC

 Block15:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x44]
	push ecx
	call esi
	lea edx,[ebp-0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	lea eax,[ebp-0x34]
	push eax
	mov byte ptr [ebp-4],3
	call esi
	lea ecx,[ebp-0x34]
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
	push 0
	push 0
	lea edx,[ebp-0x44]
	push edx
	lea eax,[ebp-0x34]
	push eax
	push ecx
	mov ecx,dword ptr [ebp+8]
	mov eax,esp
	mov dword ptr [ebp-0x24],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block21

 Block20:
	add ecx,8
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block21:
	mov ecx,dword ptr [ebx+4]
	mov byte ptr [ebp-4],5
	test ecx,ecx
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea edx,[ebp-0x54]
	mov bl,4
	push edx
	mov byte ptr [ebp-4],bl
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	call _x_com_ptr<IWzSound>::_QueryUnknown
	test eax,eax
	jge Block26

 Block24:
	cmp eax,0x80004002
	je Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x54],si
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [ebp-0x54],ax
	mov eax,dword ptr [ebp-0x4C]
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[ebp-0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x34],si
	jne Block33

 Block31:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x44],si
	jne Block37

 Block35:
	mov eax,dword ptr [ebp-0x3C]
	xor ecx,ecx
	mov word ptr [ebp-0x44],cx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea edx,[ebp-0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov eax,dword ptr [ebp-0x18]
	push eax
	lea ecx,[ebp-0x30]
	call CSoundMan::SECACHEITEM::_ctor_0
	mov edi,dword ptr [ebp-0x1C]
	push eax
	lea ecx,[edi+0x34]
	mov byte ptr [ebp-4],7
	call ZHeapBase<CSoundMan::SECACHEITEM, ZMinHeapCompare<CSoundMan::SECACHEITEM>>::Insert
	mov esi,eax
	mov eax,dword ptr [ebp-0x30]
	mov dword ptr [ebp-0x24],esi
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block40

 Block39:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block40:
	mov ebx,dword ptr [ebp+8]
	test ebx,ebx
	je Block42

 Block41:
	mov eax,dword ptr [ebx]
	mov dword ptr [ebp-0x20],eax
	jmp Block43

 Block42:
	mov dword ptr [ebp-0x20],0

 Block43:
	test esi,esi
	je Block45

 Block44:
	lea eax,[esi-0x10]
	test eax,eax
	jne Block46

 Block45:
	xor esi,esi
	jmp Block47

 Block46:
	lea esi,[eax+0x10]

 Block47:
	lea ecx,[ebp-0x24]
	push ecx
	lea edx,[ebp-0x20]
	push edx
	lea ecx,[edi+0x1C]
	call ZMap<wchar_t const *, __POSITION *, Ztl_bstr_t>::Insert
	mov dword ptr [esi+4],eax
	mov byte ptr [ebp-4],1
	test ebx,ebx
	je Block49

 Block48:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release

 Block49:
	push 0xFFFFFFFF
	mov ecx,edi
	call CSoundMan::FlushSECache
	lea eax,[ebp-0x54]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	mov edx,3
	mov word ptr [ebp-0x44],dx
	mov dword ptr [ebp-0x3C],0
	mov ecx,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],9
	test ecx,ecx
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	lea eax,[ebp-0x54]
	push eax
	lea edx,[ebp-0x44]
	push edx
	lea eax,[ebp-0x14]
	push eax
	call IWzSound::Play
	mov esi,8
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp-0x44],si
	jne Block56

 Block54:
	mov eax,dword ptr [ebp-0x3C]
	xor ecx,ecx
	mov word ptr [ebp-0x44],cx
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea edx,[ebp-0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block57:
	mov bl,0xC
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x54],si
	jne Block60

 Block58:
	xor eax,eax
	mov word ptr [ebp-0x54],ax
	mov eax,dword ptr [ebp-0x4C]
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea ecx,[ebp-0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov ecx,dword ptr [ebp-0x14]
	test ecx,ecx
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	mov edx,dword ptr [edi+0x14]
	imul edx,dword ptr [ebp+0xC]
	mov eax,0x51EB851F
	mul edx
	mov eax,dword ptr [ecx]
	shr edx,5
	push edx
	mov esi,ecx
	push ecx
	mov ecx,dword ptr [eax+0x2C]
	call ecx
	test eax,eax
	jge Block65

 Block64:
	push offset __GUID_d9730ba4_23f5_4c2d_95d4_0e7d3df3765d
	push esi
	push eax
	call _com_issue_errorex

 Block65:
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	jne Block67

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	mov edi,dword ptr [ebp+0x10]
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x14]
	xor ecx,ecx
	test edi,edi
	sete cl
	mov esi,eax
	lea ecx,[ecx+ecx-1]
	push ecx
	push eax
	call edx
	test eax,eax
	jge Block69

 Block68:
	push offset __GUID_d9730ba4_23f5_4c2d_95d4_0e7d3df3765d
	push esi
	push eax
	call _com_issue_errorex

 Block69:
	test edi,edi
	je Block73

 Block70:
	mov eax,dword ptr [ebp-0x1C]
	inc dword ptr [eax+0x48]
	lea ecx,[ebp-0x14]
	lea esi,[eax+0x48]
	push ecx
	push esi
	lea ecx,[eax+0x4C]
	call ZMap<unsigned int, _x_com_ptr<IWzSoundState>, unsigned int>::Insert
	mov eax,dword ptr [ebp-0x14]
	mov esi,dword ptr [esi]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block72

 Block71:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block72:
	mov eax,dword ptr [ebp-0x18]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0
	call edx
	mov eax,esi
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0xC

 Block73:
	mov eax,0xD
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-0x2C],eax
	test eax,eax
	je Block75

 Block74:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx
	mov eax,dword ptr [ebp-0x14]

 Block75:
	mov byte ptr [ebp-4],0xD
	test eax,eax
	jne Block77

 Block76:
	push 0x80004003
	call _com_issue_error

 Block77:
	mov edi,dword ptr [ebp-0x34]
	mov edx,dword ptr [eax]
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [ecx],edi
	mov edi,dword ptr [ebp-0x30]
	mov dword ptr [ecx+4],edi
	mov edi,dword ptr [ebp-0x2C]
	mov dword ptr [ecx+8],edi
	mov edi,dword ptr [ebp-0x28]
	mov esi,eax
	push eax
	mov eax,dword ptr [edx+0x1C]
	mov dword ptr [ecx+0xC],edi
	call eax
	test eax,eax
	jge Block79

 Block78:
	push offset __GUID_d9730ba4_23f5_4c2d_95d4_0e7d3df3765d
	push esi
	push eax
	call _com_issue_errorex

 Block79:
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],bl
	jne Block82

 Block80:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	test eax,eax
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea edx,[ebp-0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block83:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block85

 Block84:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block85:
	mov eax,dword ptr [ebp-0x18]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0
	call edx
	xor eax,eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0xC
}
}
// CSoundMan::CSoundMan
_SUB_EXCEPTION_HANDLER(5C8F70)
__SUB_CLASS_THIS0(005C8F70, __thiscall, 78683,  CSoundMan, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5C8F70
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
	mov esi,ecx
	mov dword ptr [esp+0x10],esi
	lea eax,[esi+4]
	xor edi,edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-4]
	mov dword ptr [TSingleton<CSoundMan>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CSoundMan>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CSoundMan::`vftable'
	mov dword ptr [esp+0x1C],edi
	mov dword ptr [eax],edi
	mov dword ptr [esi+8],0x64
	mov dword ptr [esi+0xC],edi
	mov dword ptr [esi+0x10],edi
	lea ecx,[esi+0x1C]
	mov dword ptr [esi+0x14],0x64
	mov dword ptr [esi+0x18],edi
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<wchar_t const *, __POSITION *, Ztl_bstr_t>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<wchar_t const *, __POSITION *, Ztl_bstr_t>::_CalcAutoGrow
	lea edx,[esp+0xF]
	push edx
	lea ecx,[esi+0x44]
	int 3// TODO: 	mov dword ptr [esi+0x34],offset ZHeapBase<CSoundMan::SECACHEITEM, ZMinHeapCompare<CSoundMan::SECACHEITEM>>::`vftable'
	mov dword ptr [esi+0x3C],0x10
	mov dword ptr [esi+0x40],edi
	push edi
	mov byte ptr [esp+0x24],4
	mov dword ptr [ecx],edi
	call ZArray<CSoundMan::SECACHEITEM *>::_Alloc
	int 3// TODO: 	mov dword ptr [esi+0x34],offset ZMinHeap<CSoundMan::SECACHEITEM, ZMinHeapCompare<CSoundMan::SECACHEITEM>>::`vftable'
	lea ecx,[esi+0x4C]
	mov dword ptr [esi+0x48],edi
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned int, _x_com_ptr<IWzSoundState>, unsigned int>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned int, _x_com_ptr<IWzSoundState>, unsigned int>::_CalcAutoGrow
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret
}
}
// CSoundMan::Init
_SUB_EXCEPTION_HANDLER(317720)
__SUB_CLASS_THIS(00317720, __thiscall, 103758,  CSoundMan, int32_t, HWND__*, uint32_t, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_317720
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
	mov ebp,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	lea eax,[esp+0x18]
	push 0x6E6
	push eax
	mov dword ptr [esp+0x6C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edi,eax
	mov eax,dword ptr [ebp+4]
	lea esi,[ebp+4]
	mov byte ptr [esp+0x64],1
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov dword ptr [esi],ebx
	mov eax,dword ptr [_D__G_APFNPCOMAPIS]
	mov ecx,dword ptr [edi]
	cmp eax,ebx
	jne Block4

 Block3:
	mov edi,0x800401F0
	jmp Block5

 Block4:
	push ebx
	push esi
	push offset __GUID_57dfe40b_3e20_4dbc_97e8_805a50f381bf
	push ecx
	call eax
	add esp,0x10
	mov edi,eax

 Block5:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x64],bl
	cmp eax,ebx
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block7:
	cmp edi,ebx
	jl Block18

 Block8:
	lea eax,[esp+0x18]
	push 0x6E7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edi,eax
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x64],2
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [_D__G_APFNPCOMAPIS]
	xor ecx,ecx
	mov dword ptr [esp+0x14],ecx
	mov edx,dword ptr [edi]
	cmp eax,ebx
	jne Block12

 Block11:
	mov edi,0x800401F0
	jmp Block13

 Block12:
	push ebx
	lea ecx,[esp+0x18]
	push ecx
	push offset __GUID_1c923939_1338_4f8b_92cf_38935cee1fef
	push edx
	call eax
	mov ecx,dword ptr [esp+0x24]
	add esp,0x10
	mov edi,eax

 Block13:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x64],bl
	cmp eax,ebx
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	mov ecx,dword ptr [esp+0x18]
	add esp,4

 Block15:
	cmp edi,ebx
	jl Block19

 Block16:
	mov edx,dword ptr [esp+0x70]
	mov esi,dword ptr [esp+0x74]
	mov edi,dword ptr [esp+0x78]
	mov eax,0x4010
	mov word ptr [esp+0x1C],ax
	mov eax,3
	mov dword ptr [ebp+0x18],edx
	mov edx,dword ptr [esp+0x6C]
	mov word ptr [esp+0x2C],ax
	mov word ptr [esp+0x3C],ax
	mov word ptr [esp+0x4C],ax
	cmp ecx,ebx
	jne Block24

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov ecx,dword ptr [esp+0x14]

 Block19:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block21

 Block20:
	mov dword ptr [esi],ebx
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	mov ecx,dword ptr [esp+0x14]

 Block21:
	mov dword ptr [esp+0x64],0xFFFFFFFF
	cmp ecx,ebx
	je Block23

 Block22:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax

 Block23:
	xor eax,eax
	jmp Block31

 Block24:
	mov ebx,dword ptr [esp+0x4C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x60]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x8C]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0x68]
	mov dword ptr [eax+0xC],ebx
	mov ebx,dword ptr [esp+0x4C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x60]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x68]
	mov ebp,dword ptr [ecx]
	mov dword ptr [eax+0xC],edi
	mov edi,dword ptr [esp+0x4C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x60]
	mov dword ptr [eax+4],edi
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [esp+0x68]
	mov dword ptr [eax+0xC],esi
	mov esi,dword ptr [esp+0x4C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],esi
	mov esi,dword ptr [esp+0x60]
	mov dword ptr [eax+4],esi
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x68]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x14]
	push ecx
	call eax
	test eax,eax
	jl Block28

 Block25:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x1C]
	push 0x40000
	push 0x10000
	push eax
	call edx

 Block28:
	xor ecx,ecx
	test eax,eax
	mov eax,dword ptr [esp+0x14]
	setge cl
	mov dword ptr [esp+0x64],0xFFFFFFFF
	mov esi,ecx
	test eax,eax
	je Block30

 Block29:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block30:
	mov eax,esi

 Block31:
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret 0x14
}
}
// CSoundMan::SECACHEITEM::~SECACHEITEM
__SUB_CLASS_THIS0(0003B770, __thiscall, 103774,  CSoundMan::SECACHEITEM, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	ret
}
}
// CSoundMan::SetSEVolume
__SUB_CLASS_THIS(00043250, __thiscall, 103763,  CSoundMan, void, uint32_t) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,dword ptr [esp+0xC]
	push edi
	mov edi,ecx
	cmp esi,0xFFFFFFFF
	jne Block2

 Block1:
	mov esi,dword ptr [edi+0x18]

 Block2:
	call timeGetTime
	mov ebx,eax
	sub ebx,esi
	xor esi,esi
	cmp dword ptr [edi+0x40],esi
	je Block16

 Block3:
	mov eax,dword ptr [edi+0x44]
	mov eax,dword ptr [eax]
	cmp eax,esi
	je Block5

 Block4:
	lea ecx,[eax-0x10]
	cmp ecx,esi
	jne Block6

 Block5:
	xor ecx,ecx
	jmp Block7

 Block6:
	add ecx,0x10

 Block7:
	mov ecx,dword ptr [ecx+8]
	sub ecx,ebx
	jns Block16

 Block8:
	cmp eax,esi
	je Block10

 Block9:
	add eax,0xFFFFFFF0
	cmp eax,esi
	jne Block11

 Block10:
	xor eax,eax
	jmp Block12

 Block11:
	add eax,0x10

 Block12:
	mov eax,dword ptr [eax+4]
	add eax,8
	mov eax,dword ptr [eax]
	cmp eax,esi
	je Block14

 Block13:
	mov edx,dword ptr [eax]
	mov dword ptr [esp+0x10],edx
	jmp Block15

 Block14:
	mov dword ptr [esp+0x10],esi

 Block15:
	lea eax,[esp+0x10]
	push eax
	lea ecx,[edi+0x1C]
	call ZMap<wchar_t const *, __POSITION *, Ztl_bstr_t>::RemoveKey
	lea ecx,[edi+0x34]
	call ZHeapBase<CSoundMan::SECACHEITEM, ZMinHeapCompare<CSoundMan::SECACHEITEM>>::RemoveHead
	cmp dword ptr [edi+0x40],esi
	jne Block3

 Block16:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// PcCreateObject__com_ptr_t__com_IIID_IWzSound___GUID_1c923939_1338_4f8b_92cf_38935cee1fef___
__SUB(00317690, __cdecl, 132773,  void, const wchar_t*, _x_com_ptr<IWzSound>&, IUnknown*) {
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
	push offset __GUID_1c923939_1338_4f8b_92cf_38935cee1fef
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
// CSoundMan::SetBGMVolume
__SUB_CLASS_THIS(00317380, __thiscall, 103759,  CSoundMan, void, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CRadioManager>::ms_pInstance]
	test eax,eax
	je Block3

 Block1:
	cmp dword ptr [eax+8],0
	je Block3

 Block2:
	cmp dword ptr [eax+0xC],0
	je Block9

 Block3:
	mov edx,dword ptr [esp+4]
	mov eax,edx
	sub eax,dword ptr [ecx+8]
	cmp dword ptr [ecx+0xC],0
	mov dword ptr [ecx+8],edx
	je Block9

 Block4:
	push esi
	mov esi,dword ptr [ecx+0xC]
	test esi,esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov edx,dword ptr [esp+0xC]
	mov ecx,dword ptr [esi]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x30]
	push esi
	call eax
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_d9730ba4_23f5_4c2d_95d4_0e7d3df3765d
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	pop esi

 Block9:
	ret 8
}
}
// CSoundMan::StopSE
_SUB_EXCEPTION_HANDLER(317C40)
__SUB_CLASS_THIS(00317C40, __thiscall, 103759,  CSoundMan, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_317C40
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov dword ptr [ebp-0x14],ecx
	xor ebx,ebx
	mov dword ptr [ebp-4],ebx
	cmp dword ptr [ebp+8],ebx
	je Block12

 Block1:
	mov dword ptr [ebp-0x14],ebx
	lea esi,[ecx+0x4C]
	lea eax,[ebp-0x14]
	push eax
	lea ecx,[ebp+8]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],1
	call ZMap<unsigned int, _x_com_ptr<IWzSoundState>, unsigned int>::GetAt
	cmp eax,ebx
	je Block8

 Block2:
	lea edx,[ebp+8]
	push edx
	mov ecx,esi
	call ZMap<unsigned int, _x_com_ptr<IWzSoundState>, unsigned int>::RemoveKey
	mov esi,dword ptr [ebp-0x14]
	cmp esi,ebx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x28]
	lea ecx,[ebp+8]
	push ecx
	push esi
	mov dword ptr [ebp+8],ebx
	call edx
	cmp eax,ebx
	jge Block6

 Block5:
	push offset __GUID_d9730ba4_23f5_4c2d_95d4_0e7d3df3765d
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	mov ecx,dword ptr [ebp+0xC]
	mov edx,dword ptr [ebp+8]
	mov eax,dword ptr [esi]
	mov eax,dword ptr [eax+0x30]
	push ecx
	neg edx
	push edx
	push esi
	call eax
	cmp eax,ebx
	jge Block9

 Block7:
	push offset __GUID_d9730ba4_23f5_4c2d_95d4_0e7d3df3765d
	push esi
	push eax
	call _com_issue_errorex
	jmp Block9

 Block8:
	mov esi,dword ptr [ebp-0x14]

 Block9:
	mov byte ptr [ebp-4],bl
	cmp esi,ebx
	je Block11

 Block10:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block11:
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 8

 Block12:
	mov dword ptr [ebp+8],ebx
	mov byte ptr [ebp-4],2
	call StringPool::GetInstance
	push 0x6E7
	lea ecx,[ebp+0xC]
	push ecx
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea edx,[ebp+8]
	push edx
	push eax
	mov byte ptr [ebp-4],3
	call PcCreate_IWzSound
	mov eax,dword ptr [ebp+0xC]
	add esp,0xC
	mov byte ptr [ebp-4],2
	cmp eax,ebx
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block14:
	lea eax,[ebp-0x30]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],4
	cmp ecx,ebx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea edx,[ebp-0x18]
	push edx
	call IWzSound::GetallSoundStates
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],5
	mov dword ptr [ebp-0x1C],ebx
	lea ebx,[ebx]

 Block17:
	mov eax,dword ptr [ebp-0x18]
	cmp eax,ebx
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x1C]
	push edx
	lea edx,[ebp-0x30]
	push edx
	push 1
	push eax
	mov eax,dword ptr [ecx+0xC]
	call eax
	cmp eax,ebx
	jne Block47

 Block20:
	mov cx,word ptr [ebp-0x30]
	cmp cx,9
	je Block27

 Block21:
	cmp cx,0xD
	je Block27

 Block22:
	mov edx,0x4009
	cmp cx,dx
	je Block25

 Block23:
	mov eax,0x400D
	cmp cx,ax
	je Block25

 Block24:
	xor eax,eax
	jmp Block28

 Block25:
	mov eax,dword ptr [ebp-0x28]
	cmp eax,ebx
	je Block24

 Block26:
	mov eax,dword ptr [eax]
	jmp Block28

 Block27:
	mov eax,dword ptr [ebp-0x28]

 Block28:
	xor esi,esi
	mov dword ptr [ebp+0xC],esi
	cmp eax,ebx
	je Block33

 Block29:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x20]
	push edx
	push offset __GUID_d9730ba4_23f5_4c2d_95d4_0e7d3df3765d
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x20]
	cmp eax,ebx
	mov esi,ecx
	mov dword ptr [ebp+0xC],esi
	jge Block32

 Block30:
	cmp eax,0x80004002
	je Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	mov cx,word ptr [ebp-0x30]

 Block33:
	mov edx,dword ptr [ebp-0x14]
	mov eax,dword ptr [edx+0xC]
	mov byte ptr [ebp-4],7
	cmp esi,eax
	je Block40

 Block34:
	push eax
	lea ecx,[ebp+0xC]
	call _x_com_ptr<IWzSoundState>::_CompareWzSoundState
	xor ecx,ecx
	cmp eax,ebx
	sete cl
	cmp cl,bl
	jne Block39

 Block35:
	cmp esi,ebx
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0x14]
	push ebx
	push esi
	call ecx
	cmp eax,ebx
	jge Block39

 Block38:
	push offset __GUID_d9730ba4_23f5_4c2d_95d4_0e7d3df3765d
	push esi
	push eax
	call _com_issue_errorex

 Block39:
	mov cx,word ptr [ebp-0x30]

 Block40:
	mov byte ptr [ebp-4],5
	cmp esi,ebx
	je Block42

 Block41:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax
	mov cx,word ptr [ebp-0x30]

 Block42:
	cmp cx,8
	jne Block45

 Block43:
	mov eax,dword ptr [ebp-0x28]
	xor ecx,ecx
	mov word ptr [ebp-0x30],cx
	cmp eax,ebx
	je Block17

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block45:
	lea edx,[ebp-0x30]
	push edx
	call edi
	cmp eax,ebx
	jge Block17

 Block46:
	push eax
	call _com_issue_error

 Block47:
	mov ecx,dword ptr [ebp-0x14]
	add ecx,0x4C
	call ZMap<unsigned int, _x_com_ptr<IWzSoundState>, unsigned int>::RemoveAll
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],4
	cmp eax,ebx
	je Block49

 Block48:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block49:
	cmp word ptr [ebp-0x30],8
	mov byte ptr [ebp-4],2
	jne Block52

 Block50:
	xor eax,eax
	mov word ptr [ebp-0x30],ax
	mov eax,dword ptr [ebp-0x28]
	cmp eax,ebx
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea ecx,[ebp-0x30]
	push ecx
	call edi

 Block53:
	mov eax,dword ptr [ebp+8]
	mov byte ptr [ebp-4],bl
	cmp eax,ebx
	je Block11

 Block54:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 8
}
}
// CSoundMan::PlayBGM
_SUB_EXCEPTION_HANDLER(46040)
__SUB_CLASS_THIS(00046040, __thiscall, 103762,  CSoundMan, void, const wchar_t*, int32_t, uint32_t, uint32_t, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_46040
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov ebx,ecx
	mov dword ptr [ebp-0x14],ebx
	xor edi,edi
	cmp dword ptr [ebx+4],edi
	sete al
	test al,al
	jne Block92

 Block1:
	mov esi,dword ptr [ebp+8]
	mov dword ptr [ebp-4],edi
	cmp dword ptr [ebp+0x18],edi
	jne Block3

 Block2:
	push esi
	lea ecx,[ebx+0x10]
	call Ztl_bstr_t::op_eq
	test al,al
	jne Block92

 Block3:
	push esi
	lea ecx,[ebp+8]
	call _xbstr_t::_ctor_1
	mov dword ptr [ebp+0x18],edi
	mov byte ptr [ebp-4],2
	cmp esi,edi
	je Block29

 Block4:
	cmp word ptr [esi],di
	je Block29

 Block5:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x3C]
	push eax
	call edi
	lea ecx,[ebp-0x3C]
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
	lea edx,[ebp-0x2C]
	push edx
	mov byte ptr [ebp-4],3
	call edi
	lea eax,[ebp-0x2C]
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
	push 0
	push 0
	lea ecx,[ebp-0x3C]
	push ecx
	lea edx,[ebp-0x2C]
	push edx
	push ecx
	mov ecx,dword ptr [ebp+8]
	mov eax,esp
	mov dword ptr [ebp-0x1C],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block11

 Block10:
	add ecx,8
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	mov ecx,dword ptr [ebx+4]
	mov byte ptr [ebp-4],5
	test ecx,ecx
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea eax,[ebp-0x4C]
	mov bl,4
	push eax
	mov byte ptr [ebp-4],bl
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x18]
	call _x_com_ptr<IWzSound>::_QueryUnknown
	test eax,eax
	jge Block16

 Block14:
	cmp eax,0x80004002
	je Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x4C],si
	jne Block23

 Block17:
	mov eax,dword ptr [ebp-0x44]
	xor ecx,ecx
	mov word ptr [ebp-0x4C],cx
	test eax,eax
	je Block19

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block19:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block20:
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x2C],si
	jne Block24

 Block21:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block25

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block23:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp-0x4C]
	push edx
	call ebx
	jmp Block20

 Block24:
	lea ecx,[ebp-0x2C]
	push ecx
	call ebx

 Block25:
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x3C],si
	jne Block28

 Block26:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block30

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block28:
	lea eax,[ebp-0x3C]
	push eax
	call ebx
	jmp Block30

 Block29:
	mov edi,dword ptr [ZImports::_VariantInit]
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block30:
	xor esi,esi
	mov dword ptr [ebp-0x18],esi
	cmp dword ptr [ebp+0x18],esi
	mov byte ptr [ebp-4],7
	sete al
	test al,al
	sete al
	test al,al
	je Block66

 Block31:
	lea ecx,[ebp-0x2C]
	push ecx
	call edi
	lea edx,[ebp-0x2C]
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
	mov eax,3
	mov word ptr [ebp-0x3C],ax
	mov dword ptr [ebp-0x34],0
	mov ecx,dword ptr [ebp+0x18]
	mov byte ptr [ebp-4],9
	test ecx,ecx
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	lea edx,[ebp-0x2C]
	push edx
	lea eax,[ebp-0x3C]
	push eax
	lea edx,[ebp-0x1C]
	push edx
	call IWzSound::Play
	mov eax,dword ptr [eax]
	test eax,eax
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov esi,eax
	push eax
	mov dword ptr [ebp-0x18],esi
	call edx

 Block37:
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block39:
	mov edi,8
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x3C],di
	jne Block42

 Block40:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea ecx,[ebp-0x3C]
	push ecx
	call ebx

 Block43:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x2C],di
	jne Block46

 Block44:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea eax,[ebp-0x2C]
	push eax
	call ebx

 Block47:
	test esi,esi
	jne Block49

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x2C]
	push 0
	push esi
	call edx
	test eax,eax
	jge Block51

 Block50:
	push offset __GUID_d9730ba4_23f5_4c2d_95d4_0e7d3df3765d
	push esi
	push eax
	call _com_issue_errorex

 Block51:
	mov edx,dword ptr [ebp+0x14]
	mov edi,dword ptr [ebp-0x14]
	mov eax,dword ptr [edi+8]
	mov ecx,dword ptr [esi]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x30]
	push esi
	call eax
	test eax,eax
	jge Block53

 Block52:
	push offset __GUID_d9730ba4_23f5_4c2d_95d4_0e7d3df3765d
	push esi
	push eax
	call _com_issue_errorex

 Block53:
	cmp dword ptr [edi+0xC],0
	sete al
	test al,al
	je Block56

 Block54:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x14]
	xor edx,edx
	cmp dword ptr [ebp+0xC],edx
	sete dl
	lea edx,[edx+edx-1]
	push edx
	push esi
	call eax
	test eax,eax
	jge Block66

 Block55:
	push offset __GUID_d9730ba4_23f5_4c2d_95d4_0e7d3df3765d
	push esi
	push eax
	call _com_issue_errorex
	jmp Block66

 Block56:
	mov ebx,edi
	mov edi,dword ptr [ebx+0xC]
	test edi,edi
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x24]
	xor edx,edx
	cmp dword ptr [ebp+0xC],edx
	sete dl
	lea edx,[edx+edx-1]
	push edx
	push edi
	call eax
	test eax,eax
	jge Block60

 Block59:
	push offset __GUID_d9730ba4_23f5_4c2d_95d4_0e7d3df3765d
	push edi
	push eax
	call _com_issue_errorex

 Block60:
	mov ecx,0xD
	mov word ptr [ebp-0x3C],cx
	mov dword ptr [ebp-0x34],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax
	mov ecx,dword ptr [ebx+0xC]
	mov byte ptr [ebp-4],0xA
	test ecx,ecx
	jne Block62

 Block61:
	push 0x80004003
	call _com_issue_error

 Block62:
	lea edx,[ebp-0x3C]
	push edx
	call IWzSoundState::Putchain
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],7
	jne Block65

 Block63:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block66:
	mov edx,dword ptr [ebp-0x14]
	cmp dword ptr [edx+0xC],0
	mov ebx,edx
	sete al
	test al,al
	sete al
	test al,al
	je Block75

 Block67:
	mov edi,dword ptr [ebx+0xC]
	test edi,edi
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x28]
	lea ecx,[ebp+0xC]
	push ecx
	push edi
	mov dword ptr [ebp+0xC],0
	call edx
	test eax,eax
	jge Block71

 Block70:
	push offset __GUID_d9730ba4_23f5_4c2d_95d4_0e7d3df3765d
	push edi
	push eax
	call _com_issue_errorex

 Block71:
	mov edi,dword ptr [ebx+0xC]
	test edi,edi
	jne Block73

 Block72:
	push 0x80004003
	call _com_issue_error

 Block73:
	mov ecx,dword ptr [ebp+0x10]
	mov edx,dword ptr [ebp+0xC]
	mov eax,dword ptr [edi]
	mov eax,dword ptr [eax+0x30]
	push ecx
	neg edx
	push edx
	push edi
	call eax
	test eax,eax
	jge Block75

 Block74:
	push offset __GUID_d9730ba4_23f5_4c2d_95d4_0e7d3df3765d
	push edi
	push eax
	call _com_issue_errorex

 Block75:
	mov edi,dword ptr [ebx+0xC]
	cmp edi,esi
	je Block80

 Block76:
	mov dword ptr [ebx+0xC],esi
	test esi,esi
	je Block78

 Block77:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block78:
	test edi,edi
	je Block80

 Block79:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block80:
	lea edi,[ebx+0x10]
	lea edx,[ebp+8]
	cmp edi,edx
	je Block85

 Block81:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	je Block83

 Block82:
	call _xbstr_t::Data_t::Release
	mov dword ptr [edi],0

 Block83:
	mov ebx,dword ptr [ebp+8]
	mov dword ptr [edi],ebx
	test ebx,ebx
	je Block86

 Block84:
	lea eax,[ebx+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	jmp Block86

 Block85:
	mov ebx,dword ptr [ebp+8]

 Block86:
	mov byte ptr [ebp-4],2
	test esi,esi
	je Block88

 Block87:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block88:
	mov eax,dword ptr [ebp+0x18]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block90

 Block89:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block90:
	test ebx,ebx
	je Block92

 Block91:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release

 Block92:
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0x14
}
}
