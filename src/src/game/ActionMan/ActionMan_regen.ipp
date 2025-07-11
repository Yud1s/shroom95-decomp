#include "regen.hpp"
// ActionMan.ipp
#include "ActionMan.hpp"



static void* CHARACTERIMGENTRY_VTABLE = get_vtable<CActionMan::CHARACTERIMGENTRY>();
static void* CHARACTERACTIONFRAME_VTABLE = get_vtable<CActionMan::CHARACTERACTIONFRAMEENTRY>();



// CActionMan::GetNpcImgEntry
_SUB_EXCEPTION_HANDLER(1A840)
__SUB_CLASS_THIS(0001A840, __thiscall, 33407,  CActionMan, ZRef<CActionMan::NPCIMGENTRY>*, ZRef<CActionMan::NPCIMGENTRY>*, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1A840
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC4
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xD8]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x3C],edi
	xor ebp,ebp
	mov dword ptr [esp+0x38],ebp
	mov dword ptr [esp+0x20],ebp
	lea eax,[esp+0x14]
	push 0x3CF
	push eax
	mov dword ptr [esp+0xE8],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xE0],2
	cmp eax,ebp
	je Block2

 Block1:
	mov eax,dword ptr [eax]
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov esi,dword ptr [esp+0xEC]
	push esi
	push eax
	lea ecx,[esp+0x28]
	push ecx
	call ZXString16::Format
	mov ecx,dword ptr [esp+0x20]
	add esp,0xC
	cmp ecx,ebp
	je Block5

 Block4:
	call _xbstr_t::Data_t::Release

 Block5:
	mov dword ptr [esp+0x30],ebp
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x18]
	lea ecx,[edi+0x150]
	push eax
	mov byte ptr [esp+0xE8],3
	mov dword ptr [esp+0x1C],esi
	mov dword ptr [esp+0x5C],ecx
	call ZMap<long, ZRef<CActionMan::NPCIMGENTRY>, long>::GetAt
	test eax,eax
	jne Block102

 Block6:
	push 0x18
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	cmp eax,ebp
	je Block13

 Block7:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	mov dword ptr [eax], 0 //TODO
	mov dword ptr [eax+0xC],ebp
	mov edi,eax
	mov dword ptr [esp+0x14],eax
	add eax,4
	push eax
	call ebx

 Block8:
	mov esi,dword ptr [esp+0x30]
	mov dword ptr [esp+0x30],edi
	cmp esi,ebp
	je Block11

 Block9:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block11

 Block10:
	push edi
	call ebx
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block11:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x68]
	push ecx
	call esi
	lea edx,[esp+0x68]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block14

 Block12:
	push eax
	call _com_issue_error

 Block13:
	xor edi,edi
	mov dword ptr [esp+0x14],edi
	jmp Block8

 Block14:
	lea eax,[esp+0xA8]
	push eax
	mov byte ptr [esp+0xE4],4
	call esi
	lea ecx,[esp+0xA8]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	push ebp
	push ebp
	lea edx,[esp+0x70]
	push edx
	mov edx,dword ptr [esp+0x2C]
	lea eax,[esp+0xB4]
	push eax
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,5
	push edx
	mov byte ptr [esp+0xF8],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xF4],6
	cmp dword ptr [_D_G_RM],ebp
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	lea eax,[esp+0xCC]
	mov byte ptr [esp+0xF4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xE8],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block21

 Block19:
	cmp eax,0x80004002
	je Block21

 Block20:
	push eax
	call _com_issue_error

 Block21:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [esp+0xE0],9
	cmp word ptr [esp+0xB8],di
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0xC0]
	xor ecx,ecx
	mov word ptr [esp+0xB8],cx
	cmp eax,ebp
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea edx,[esp+0xB8]
	push edx
	call esi

 Block25:
	mov byte ptr [esp+0xE0],0xA
	cmp word ptr [esp+0xA8],di
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [esp+0xA8],ax
	mov eax,dword ptr [esp+0xB0]
	cmp eax,ebp
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[esp+0xA8]
	push ecx
	call esi

 Block29:
	mov byte ptr [esp+0xE0],0xB
	cmp word ptr [esp+0x68],di
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0x70]
	xor edx,edx
	mov word ptr [esp+0x68],dx
	cmp eax,ebp
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea eax,[esp+0x68]
	push eax
	call esi

 Block33:
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x3D5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x28]
	mov byte ptr [esp+0xEC],0xC
	cmp ecx,ebp
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	lea edx,[esp+0xD4]
	push edx
	mov byte ptr [esp+0xF0],0xB
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xE8],0xD
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x28],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block38

 Block36:
	cmp eax,0x80004002
	je Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	mov byte ptr [esp+0xE0],0xF
	cmp word ptr [esp+0xC8],di
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [esp+0xC8],ax
	mov eax,dword ptr [esp+0xD0]
	cmp eax,ebp
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[esp+0xC8]
	push ecx
	call esi

 Block42:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x3D6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x28]
	mov byte ptr [esp+0xE4],0x10
	cmp ecx,ebp
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	lea eax,[esp+0x8C]
	push eax
	mov byte ptr [esp+0xE8],0xF
	call IWzProperty::Getitem
	mov byte ptr [esp+0xE0],0x11
	cmp word ptr [esp+0x88],di
	jne Block90

 Block45:
	mov ecx,dword ptr [esp+0x90]
	push ecx
	call __wtoi
	mov ecx,dword ptr [esp+0x40]
	add esp,4
	push eax
	lea edx,[esp+0x5C]
	push edx
	call CActionMan::GetNpcImgEntry
	lea eax,[esp+0x78]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov ecx,dword ptr [esp+0x5C]
	mov ecx,dword ptr [ecx+0xC]
	mov byte ptr [esp+0xE0],0x13
	cmp ecx,ebp
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	lea edx,[esp+0x60]
	push edx
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0xE4],0x14
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0xE0],0x16
	cmp eax,ebp
	je Block49

 Block48:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block49:
	mov esi,dword ptr [esp+0x34]
	mov dword ptr [esp+0x18],ebp
	cmp esi,ebp
	je Block17

 Block50:
	mov eax,dword ptr [esi]
	mov eax,dword ptr [eax+0xC]
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x7C]
	push edx
	push 1
	push esi
	call eax
	test eax,eax
	jne Block85

 Block51:
	lea ecx,[esp+0x78]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	call DetachBSTR
	mov edi,dword ptr [esp+0x30]
	add esp,4
	mov eax,esp
	mov dword ptr [esp+0x68],esp
	mov dword ptr [eax],edi
	cmp edi,ebp
	je Block53

 Block52:
	lea eax,[edi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block53:
	mov ecx,dword ptr [esp+0x60]
	mov ecx,dword ptr [ecx+0xC]
	mov byte ptr [esp+0xE4],0x18
	cmp ecx,ebp
	je Block17

 Block54:
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0xE8],0x17
	call IWzProperty::Getitem
	lea eax,[esp+0x40]
	push 0x3D5
	push eax
	mov byte ptr [esp+0xE8],0x19
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	cmp eax,ebp
	je Block56

 Block55:
	mov eax,dword ptr [eax]
	jmp Block57

 Block56:
	xor eax,eax

 Block57:
	cmp edi,ebp
	je Block59

 Block58:
	mov ecx,dword ptr [edi]
	jmp Block60

 Block59:
	xor ecx,ecx

 Block60:
	push eax
	push ecx
	call __wcsicmp
	add esp,8
	test eax,eax
	mov eax,dword ptr [esp+0x40]
	sete bl
	cmp eax,ebp
	je Block69

 Block61:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebp
	jne Block68

 Block62:
	cmp esi,ebp
	je Block68

 Block63:
	mov eax,dword ptr [esi]
	cmp eax,ebp
	je Block65

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block65:
	mov eax,dword ptr [esi+4]
	cmp eax,ebp
	je Block67

 Block66:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block67:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block68:
	mov esi,dword ptr [esp+0x34]
	mov dword ptr [esp+0x40],ebp

 Block69:
	test bl,bl
	je Block71

 Block70:
	cmp word ptr [esp+0x44],8
	jmp Block79

 Block71:
	lea eax,[esp+0x98]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x98]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block12

 Block72:
	lea edx,[esp+0x98]
	push edx
	lea eax,[esp+0x48]
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x70],esp
	mov dword ptr [eax],edi
	cmp edi,ebp
	je Block74

 Block73:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block74:
	mov ecx,dword ptr [esp+0x28]
	mov byte ptr [esp+0xEC],0x1B
	mov byte ptr [esp+0xEC],0x1A
	call IWzProperty::Add
	mov ebx,8
	mov byte ptr [esp+0xE0],0x19
	cmp word ptr [esp+0x98],bx
	jne Block77

 Block75:
	mov eax,dword ptr [esp+0xA0]
	xor edx,edx
	mov word ptr [esp+0x98],dx
	cmp eax,ebp
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea eax,[esp+0x98]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block78:
	cmp word ptr [esp+0x44],bx

 Block79:
	mov byte ptr [esp+0xE0],0x17
	jne Block82

 Block80:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	cmp eax,ebp
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block83:
	mov byte ptr [esp+0xE0],0x16
	cmp edi,ebp
	je Block50

 Block84:
	mov ecx,edi
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x28],ebp
	jmp Block50

 Block85:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0xE4],0x13
	call ecx
	cmp word ptr [esp+0x78],8
	mov byte ptr [esp+0xE0],0x12
	jne Block88

 Block86:
	mov eax,dword ptr [esp+0x80]
	xor edx,edx
	mov word ptr [esp+0x78],dx
	cmp eax,ebp
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea eax,[esp+0x78]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block89:
	lea ecx,[esp+0x58]
	mov byte ptr [esp+0xE0],0x11
	call ZRef<CActionMan::NPCIMGENTRY>::~ZRef<CActionMan::NPCIMGENTRY>

 Block90:
	mov ebx,dword ptr [esp+0x14]
	mov esi,dword ptr [ebx+0xC]
	mov eax,dword ptr [esp+0x1C]
	cmp esi,eax
	je Block93

 Block91:
	mov dword ptr [ebx+0xC],eax
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx
	cmp esi,ebp
	je Block93

 Block92:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block93:
	mov ecx,dword ptr [esp+0x3C]
	add ecx,0x13C
	call ZList<ZRef<CActionMan::NPCIMGENTRY>>::AddTail_
	lea edx,[esp+0x2C]
	push edx
	mov ecx,eax
	call ZRef<CActionMan::NPCIMGENTRY>::op_assign_copy
	mov eax,dword ptr [esp+0xEC]
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [esp+0x58]
	lea edx,[esp+0x1C]
	push edx
	mov dword ptr [esp+0x20],eax
	call ZMap<long, ZRef<CActionMan::NPCIMGENTRY>, long>::Insert
	mov dword ptr [ebx+0x14],eax
	call timeGetTime
	mov edi,dword ptr [esp+0xE8]
	lea esi,[ebx+4]
	mov dword ptr [ebx+0x10],eax
	push esi
	mov dword ptr [edi+4],ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp word ptr [esp+0x88],8
	mov dword ptr [esp+0x38],1
	mov byte ptr [esp+0xE0],0xF
	jne Block96

 Block94:
	xor eax,eax
	mov word ptr [esp+0x88],ax
	mov eax,dword ptr [esp+0x90]
	cmp eax,ebp
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea ecx,[esp+0x88]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block97:
	mov eax,dword ptr [esp+0x24]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0xE4],0xB
	call eax
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0xE4],3
	call edx
	push esi
	mov byte ptr [esp+0xE4],1
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block99

 Block98:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block99:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0xE0],0
	cmp eax,ebp
	je Block101

 Block100:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block101:
	mov eax,edi
	jmp Block107

 Block102:
	call timeGetTime
	mov esi,dword ptr [esp+0x30]
	mov ebx,dword ptr [esp+0xE8]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	lea edi,[esi+4]
	mov dword ptr [esi+0x10],eax
	push edi
	mov dword ptr [ebx+4],esi
	call ebp
	push edi
	mov dword ptr [esp+0x3C],1
	mov byte ptr [esp+0xE4],1
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block104

 Block103:
	push edi
	call ebp
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block104:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0xE0],0
	test eax,eax
	je Block106

 Block105:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block106:
	mov eax,ebx

 Block107:
	mov ecx,dword ptr [esp+0xD8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xD0
	ret 8
}
}
// SECRECT::_ZtlSecureGet_left
__SUB_CLASS0(000077F0, __fastcall, 113546,  SECRECT, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+8]
	push eax
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CActionMan::SUMMONEDACTIONENTRY::~SUMMONEDACTIONENTRY
_SUB_EXCEPTION_HANDLER(13830)
__SUB_CLASS_THIS0(00013830, __thiscall, 34400,  CActionMan::SUMMONEDACTIONENTRY, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_13830
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
	lea ecx,[esi+0x1C]
	mov dword ptr [esp+0x14],0
	int 3 // TODO: 		mov dword ptr [ecx],offset ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>::RemoveAll
	int 3 // TODO: 		mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CActionMan::LoadTamingMobAction
_SUB_EXCEPTION_HANDLER(27A10)
// 427C90
static uint8_t _SUB_27A10_LOOKUP_TABLE_0[100] = {
0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 3, 
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 3, 3, 3, 3, 3, 
3, 3, 3, 3, 3, 3, 3, 1, 1, 3, 3, 3, 3, 3, 3, 3, 
3, 3, 3, 2, 
};
__SUB_CLASS_THIS(00027A10, __thiscall, 33393,  CActionMan, void, long, long, long*, int32_t, ZArray<ZRef<CActionMan::TAMINGMOBACTIONFRAMEENTRY> >&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_27A10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x108
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x118]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x18],ecx
	mov edi,dword ptr [ebp+8]
	push edi
	call is_vehicle
	add esp,4
	test eax,eax
	je Block56

 Block1:
	mov ebx,dword ptr [ebp+0xC]
	cmp ebx,0x2F
	jne Block3

 Block2:
	push 0xF0
	lea eax,[esp+0x20]
	push 0
	push eax
	call _memset
	add esp,0xC
	jmp Block4

 Block3:
	mov esi,dword ptr [ebp+0x10]
	mov ecx,0x3C
	lea edi,[esp+0x1C]
	rep movsd
	mov edi,dword ptr [ebp+8]

 Block4:
	xor ecx,ecx
	mov dword ptr [esp+0x14],ecx
	mov dword ptr [esp+0x120],ecx
	cmp ebx,4
	jne Block6

 Block5:
	lea ebx,[ecx+2]
	jmp Block20

 Block6:
	cmp ebx,0x10E
	jne Block8

 Block7:
	mov ebx,0x2B
	jmp Block20

 Block8:
	cmp ebx,0x10F
	je Block10

 Block9:
	cmp ebx,0x110
	jne Block11

 Block10:
	mov ebx,2
	jmp Block20

 Block11:
	cmp ebx,ecx
	je Block20

 Block12:
	cmp ebx,1
	je Block20

 Block13:
	cmp ebx,2
	je Block20

 Block14:
	cmp ebx,3
	je Block20

 Block15:
	cmp ebx,0x37
	je Block20

 Block16:
	cmp ebx,0x2C
	je Block20

 Block17:
	cmp ebx,0x2A
	je Block20

 Block18:
	cmp ebx,0x2B
	je Block20

 Block19:
	cmp ebx,0xD2
	jne Block21

 Block20:
	mov ecx,1

 Block21:
	mov eax,0x68DB8BAD
	imul edi
	sar edx,0xC
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	cmp esi,0xBE
	jne Block26

 Block22:
	test ecx,ecx
	jne Block42

 Block23:
	cmp ebx,0x2D
	je Block42

 Block24:
	cmp ebx,0x2E
	jne Block39

 Block25:
	jmp Block42

 Block26:
	cmp esi,0xC1
	jne Block36

 Block27:
	test ecx,ecx
	jne Block42

 Block28:
	lea eax,[ebx-0x2D]
	cmp eax,0x63
	ja Block39

 Block29:
	movzx ecx,byte ptr [eax+_SUB_27A10_LOOKUP_TABLE_0]
	cmp ECX, 0
je Block32
cmp ECX, 1
je Block42
cmp ECX, 2
je Block30
cmp ECX, 3
je Block39


 Block30:
	push edi
	call is_event_vehicle_type1
	add esp,4
	test eax,eax
	je Block39

 Block31:
	jmp Block42

 Block32:
	push edi
	call is_event_vehicle_type2
	add esp,4
	test eax,eax
	jne Block42

 Block33:
	push edi
	call is_wildhunter_jaguar_vehicle
	add esp,4
	test eax,eax
	jne Block42

 Block34:
	cmp edi,0x1D7AF0
	jne Block39

 Block35:
	jmp Block42

 Block36:
	mov eax,0x10624DD3
	imul edi
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x7BF
	jne Block38

 Block37:
	mov ebx,0x30
	jmp Block42

 Block38:
	test ecx,ecx
	jne Block42

 Block39:
	push edi
	push ebx
	call IsAbleTamingMobOneTimeAction
	add esp,8
	test eax,eax
	jne Block42

 Block40:
	push edi
	push ebx
	call IsAbleTamingMobAction
	add esp,8
	test eax,eax
	jne Block42

 Block41:
	lea ebx,[eax+2]

 Block42:
	cmp dword ptr [ebp+0x14],0
	je Block46

 Block43:
	cmp ebx,2
	je Block45

 Block44:
	cmp ebx,3
	jne Block46

 Block45:
	mov ebx,0x37

 Block46:
	cmp esi,0xBE
	jne Block52

 Block47:
	mov esi,dword ptr [esp+0x64]
	test esi,esi
	je Block55

 Block48:
	lea ecx,[esp+0x14]
	push ecx
	push esi
	push esi
	push ebx
	call load_tamingmob_action
	mov eax,dword ptr [esp+0x78]
	add esp,0x10
	test eax,eax
	je Block50

 Block49:
	lea edx,[esp+0x14]
	push edx
	push eax
	push esi
	push ebx
	call load_tamingmob_action
	add esp,0x10

 Block50:
	mov eax,dword ptr [esp+0x6C]
	test eax,eax
	je Block55

 Block51:
	lea ecx,[esp+0x14]
	push ecx
	push eax
	push esi
	jmp Block54

 Block52:
	test edi,edi
	je Block55

 Block53:
	lea edx,[esp+0x14]
	push edx
	push edi
	push edi

 Block54:
	push ebx
	call load_tamingmob_action
	add esp,0x10

 Block55:
	mov eax,dword ptr [ebp+0x18]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [esp+0x20]
	call CActionMan::MergeTamingMobSprite
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x120],0xFFFFFFFF
	call ZArray<CActionFrame>::RemoveAll

 Block56:
	mov ecx,dword ptr [esp+0x118]
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
// CActionMan::MergeCharacterSprite
_SUB_EXCEPTION_HANDLER(172F0)
__SUB_CLASS_THIS(000172F0, __thiscall, 33434,  CActionMan, void, const AHECODES& b, ZArray<CActionFrame>&, ZArray<ZRef<CActionMan::CHARACTERACTIONFRAMEENTRY> >&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_172F0
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
	mov eax,dword ptr [esp+0x3C]
	mov eax,dword ptr [eax+0xF0]
	mov edx,dword ptr [esp+0x40]
	lea ecx,[eax+eax*2]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [ecx*8+ActionData::m_saCharacterActions+4]
	xor edi,edi
	cmp eax,edi
	jne Block2

 Block1:
	xor esi,esi
	mov dword ptr [esp+0x3C],esi
	jmp Block3

 Block2:
	mov eax,dword ptr [eax-4]
	mov dword ptr [esp+0x3C],eax
	mov esi,eax

 Block3:
	cmp ecx,edi
	je Block5

 Block4:
	lea ebp,[esi+esi-2]
	mov dword ptr [esp+0x14],ebp
	jmp Block6

 Block5:
	mov dword ptr [esp+0x14],esi
	mov ebp,esi

 Block6:
	lea ecx,[esp+0x44]
	push ecx
	mov ecx,dword ptr [esp+0x48]
	push 1
	push ebp
	call ZArray<ZRef<CActionMan::CHARACTERACTIONFRAMEENTRY>>::_Realloc
	xor ebx,ebx
	cmp esi,edi
	jle Block28

 Block7:
	mov dword ptr [esp+0x18],edi
	jmp Block10

 Block9:
	xor edi,edi

 Block10:
	push 0x2C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,edi
	je Block12

 Block11:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	push edi
	mov edi, dword ptr [CHARACTERACTIONFRAME_VTABLE]
	mov dword ptr [eax], edi
	pop edi
	mov dword ptr [eax+0xC],edi
	mov dword ptr [eax+0x10],edi
	mov esi,eax
	jmp Block13

 Block12:
	xor esi,esi

 Block13:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x20],esi
	cmp esi,edi
	je Block15

 Block14:
	lea edx,[esi+4]
	push edx
	call ebp

 Block15:
	push edi
	lea eax,[esi+0x24]
	push eax
	lea ecx,[esi+0x14]
	push ecx
	lea edx,[esp+0x30]
	push edx
	lea eax,[esi+0x1C]
	push eax
	mov eax,dword ptr [esp+0x54]
	lea ecx,[esi+0x10]
	push ecx
	mov ecx,dword ptr [eax]
	add ecx,dword ptr [esp+0x30]
	lea edx,[esi+0xC]
	push edx
	mov dword ptr [esp+0x50],edi
	call CActionFrame::Draw
	mov ecx,dword ptr [esp+0x44]
	mov edx,dword ptr [ecx]
	lea edi,[edx+ebx*8]
	test esi,esi
	je Block17

 Block16:
	lea eax,[esi+4]
	push eax
	call ebp

 Block17:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block22

 Block18:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block21

 Block19:
	mov eax,dword ptr [edi+4]
	add eax,4
	push eax
	call ebp
	mov ecx,dword ptr [edi+4]
	test ecx,ecx
	je Block21

 Block20:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block21:
	mov dword ptr [edi+4],0

 Block22:
	mov dword ptr [edi+4],esi
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test esi,esi
	je Block26

 Block23:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block25

 Block24:
	push edi
	call ebp
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block25:
	mov dword ptr [esp+0x20],0

 Block26:
	add dword ptr [esp+0x18],0x64
	inc ebx
	cmp ebx,dword ptr [esp+0x3C]
	jl Block9

 Block27:
	mov ebp,dword ptr [esp+0x14]
	mov esi,dword ptr [esp+0x3C]

 Block28:
	cmp esi,ebp
	mov ebx,esi
	jge Block38

 Block29:
	sub ebp,esi
	add ebp,ebp
	add ebp,ebp
	add ebp,ebp

 Block30:
	mov ecx,dword ptr [esp+0x44]
	mov esi,dword ptr [ecx]
	mov eax,dword ptr [esi+ebp+4]
	lea edi,[esi+ebp+4]
	test eax,eax
	je Block32

 Block31:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block32:
	mov eax,dword ptr [esi+ebx*8+4]
	lea esi,[esi+ebx*8+4]
	test eax,eax
	je Block37

 Block33:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block36

 Block34:
	mov edx,dword ptr [esi]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block36

 Block35:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block36:
	mov dword ptr [esi],0

 Block37:
	mov eax,dword ptr [edi]
	inc ebx
	sub ebp,8
	cmp ebx,dword ptr [esp+0x14]
	mov dword ptr [esi],eax
	jl Block30

 Block38:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 0xC
}
}
// ZException::Error
__SUB_CLASS_THIS0(00006220, __thiscall, 124553,  ZException, HRESULT) {
__asm {

 Block0:
	mov eax,dword ptr [ecx]
	ret
}
}
// CActionMan::GetPetImgEntry
_SUB_EXCEPTION_HANDLER(1B0D0)
__SUB_CLASS_THIS(0001B0D0, __thiscall, 33412,  CActionMan, ZRef<CActionMan::PETIMGENTRY>*, ZRef<CActionMan::PETIMGENTRY>*, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1B0D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x60]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x20],edi
	xor ebx,ebx
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x14],ebx
	mov esi,dword ptr [esp+0x74]
	mov dword ptr [esp+0x68],1
	cmp esi,ebx
	je Block3

 Block1:
	lea eax,[esp+0x18]
	push 0x1A49
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x74],2
	call ZXString16::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x68],1
	cmp eax,ebx
	je Block4

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block4

 Block3:
	lea edx,[esp+0x14]
	push offset _S_EFFECTPETEFFIMGB
	push edx
	call ZXString16::Format
	add esp,8

 Block4:
	mov dword ptr [esp+0x2C],ebx
	lea eax,[esp+0x28]
	push eax
	lea edx,[esp+0x1C]
	lea ecx,[edi+0x1A8]
	push edx
	mov byte ptr [esp+0x70],3
	mov dword ptr [esp+0x20],esi
	mov dword ptr [esp+0x2C],ecx
	call ZMap<long, ZRef<CActionMan::PETIMGENTRY>, long>::GetAt
	test eax,eax
	jne Block41

 Block5:
	push 0x18
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,ebx
	je Block12

 Block6:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3 // TODO: 		mov dword ptr [eax],offset CActionMan::PETIMGENTRY::`vftable'
	mov dword ptr [eax+0xC],ebx
	mov esi,eax
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov edi,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x2C],esi
	cmp edi,ebx
	je Block10

 Block8:
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block10

 Block9:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block10:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x40]
	push eax
	call edi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block13

 Block11:
	push eax
	call _com_issue_error

 Block12:
	xor esi,esi
	jmp Block7

 Block13:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x6C],4
	call edi
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	mov eax,dword ptr [esp+0x14]
	push 0
	push 0
	lea ecx,[esp+0x48]
	push ecx
	lea edx,[esp+0x3C]
	push edx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,5
	push eax
	mov byte ptr [esp+0x80],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x7C],6
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	lea ecx,[esp+0x64]
	push ecx
	mov byte ptr [esp+0x80],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x70],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block20

 Block18:
	cmp eax,0x80004002
	je Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x68],9
	cmp word ptr [esp+0x50],bx
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea eax,[esp+0x50]
	push eax
	call edi

 Block24:
	mov byte ptr [esp+0x68],0xA
	cmp word ptr [esp+0x30],bx
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea edx,[esp+0x30]
	push edx
	call edi

 Block28:
	mov byte ptr [esp+0x68],0xB
	cmp word ptr [esp+0x40],bx
	jne Block31

 Block29:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea ecx,[esp+0x40]
	push ecx
	call edi

 Block32:
	mov edi,dword ptr [esi+0xC]
	mov ebp,dword ptr [esp+0x18]
	cmp edi,ebp
	je Block37

 Block33:
	mov dword ptr [esi+0xC],ebp
	test ebp,ebp
	je Block35

 Block34:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+4]
	push ebp
	call eax

 Block35:
	test edi,edi
	je Block37

 Block36:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block37:
	mov ecx,dword ptr [esp+0x20]
	add ecx,0x194
	call ZList<ZRef<CActionMan::PETIMGENTRY>>::AddTail_
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,eax
	call ZRef<CActionMan::PETIMGENTRY>::op_assign_copy
	mov edx,dword ptr [esp+0x74]
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x78]
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x7C],edx
	call ZMap<long, ZRef<CActionMan::PETIMGENTRY>, long>::Insert
	mov dword ptr [esi+0x14],eax
	call timeGetTime
	mov ebx,dword ptr [esp+0x70]
	lea edi,[esi+4]
	mov dword ptr [esi+0x10],eax
	push edi
	mov dword ptr [ebx+4],esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x1C],1
	mov byte ptr [esp+0x68],3
	test ebp,ebp
	je Block39

 Block38:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	call eax

 Block39:
	push edi
	mov byte ptr [esp+0x6C],1
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block44

 Block40:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	jmp Block43

 Block41:
	call timeGetTime
	mov esi,dword ptr [esp+0x2C]
	mov ebx,dword ptr [esp+0x70]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	lea edi,[esi+4]
	mov dword ptr [esi+0x10],eax
	push edi
	mov dword ptr [ebx+4],esi
	call ebp
	push edi
	mov dword ptr [esp+0x20],1
	mov byte ptr [esp+0x6C],1
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block44

 Block42:
	push edi
	call ebp

 Block43:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block44:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x68],0
	test eax,eax
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block46:
	mov eax,ebx
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret 8
}
}
// CActionMan::CHARACTERIMGENTRY::~CHARACTERIMGENTRY
__SUB_CLASS_THIS0(00017230, __thiscall, 33683,  CActionMan::CHARACTERIMGENTRY, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x40]
	push edi
	xor edi,edi
	cmp eax,edi
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov ecx,dword ptr [esi+0x38]
	cmp ecx,edi
	je Block4

 Block3:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x38],edi

 Block4:
	mov ecx,dword ptr [esi+0x1C]
	cmp ecx,edi
	je Block6

 Block5:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x1C],edi

 Block6:
	mov ecx,dword ptr [esi+0x14]
	cmp ecx,edi
	je Block8

 Block7:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x14],edi

 Block8:
	mov ecx,dword ptr [esi+0x10]
	cmp ecx,edi
	je Block10

 Block9:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x10],edi

 Block10:
	mov eax,dword ptr [esi+0xC]
	cmp eax,edi
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	pop edi
	int 3 // TODO: 		mov dword ptr [esi],offset ZRefCounted::`vftable'
	pop esi
	ret
}
}
// ZException::ZException
__SUB_CLASS_THIS(00006210, __thiscall, 124551,  ZException, void, HRESULT) {
__asm {

 Block0:
	mov eax,ecx
	mov ecx,dword ptr [esp+4]
	mov dword ptr [eax],ecx
	ret 4
}
}
// _Int2StrW
__SUB(00006810, __cdecl, 146396,  const wchar_t*, int32_t, wchar_t*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov ecx,dword ptr [esp+4]
	push 0xA
	push eax
	push ecx
	call __itow
	add esp,0xC
	ret
}
}
// operatordelete_146388
__SUB(00006200, __cdecl, 146388,  void, void*, void*) {
__asm {

 Block0:
	ret
}
}
// CActionMan::PETACTIONENTRY::~PETACTIONENTRY
_SUB_EXCEPTION_HANDLER(13770)
__SUB_CLASS_THIS0(00013770, __thiscall, 34229,  CActionMan::PETACTIONENTRY, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_13770
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
	lea ecx,[esi+0x18]
	mov dword ptr [esp+0x14],0
	int 3 // TODO: 		mov dword ptr [ecx],offset ZList<ZRef<CActionMan::PETACTIONFRAMEENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::PETACTIONFRAMEENTRY>>::RemoveAll
	int 3 // TODO: 		mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// SetRect
__SUB(0000D540, __cdecl, 146424,  int32_t, SECRECT*, long, long, long, long) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+8]
	push esi
	mov esi,dword ptr [esp+8]
	mov edx,esi
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [esp+0x10]
	lea edx,[esi+0xC]
	mov dword ptr [esi+8],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [esp+0x14]
	lea edx,[esi+0x18]
	mov dword ptr [esi+0x14],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [esp+0x18]
	lea edx,[esi+0x24]
	mov dword ptr [esi+0x20],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2C],eax
	mov eax,1
	pop esi
	ret
}
}
// CActionMan::FACELOOKENTRY::FACELOOKENTRY
__SUB_CLASS_THIS0(000135B0, __thiscall, 33738,  CActionMan::FACELOOKENTRY, void) {
__asm {

 Block0:
	mov eax,ecx
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3 // TODO: 		mov dword ptr [eax],offset CActionMan::FACELOOKENTRY::`vftable'
	int 3 // TODO: 		mov dword ptr [eax+0xC],offset ZList<_x_com_ptr<IWzCanvas>>::`vftable'
	mov dword ptr [eax+0x14],ecx
	mov dword ptr [eax+0x18],ecx
	mov dword ptr [eax+0x1C],ecx
	ret
}
}
// CActionMan::SHADOWPARTNERACTIONENTRY::~SHADOWPARTNERACTIONENTRY
_SUB_EXCEPTION_HANDLER(13890)
__SUB_CLASS_THIS0(00013890, __thiscall, 34457,  CActionMan::SHADOWPARTNERACTIONENTRY, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_13890
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
	lea ecx,[esi+0x18]
	mov dword ptr [esp+0x14],0
	int 3 // TODO: 		mov dword ptr [ecx],offset ZList<ZRef<CActionMan::SHADOWPARTNERACTIONFRAMEENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::SHADOWPARTNERACTIONFRAMEENTRY>>::RemoveAll
	int 3 // TODO: 		mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CActionMan::NPCACTIONENTRY::~NPCACTIONENTRY
_SUB_EXCEPTION_HANDLER(13710)
__SUB_CLASS_THIS0(00013710, __thiscall, 34115,  CActionMan::NPCACTIONENTRY, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_13710
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
	lea ecx,[esi+0x14]
	mov dword ptr [esp+0x14],0
	int 3 // TODO: 		mov dword ptr [ecx],offset ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::RemoveAll
	int 3 // TODO: 		mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// _ZtlSecureFuse_long_
__SUB(00007520, __cdecl, 146401,  long, const long*, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [eax+4]
	mov ecx,dword ptr [eax]
	mov eax,edx
	rol eax,5
	xor eax,ecx
	xor ecx,0xBAADF00D
	ror ecx,5
	add ecx,edx
	cmp ecx,dword ptr [esp+8]
	je Block2

 Block1:
	push offset ZException::THROW_INFO
	lea eax,[esp+8]
	push eax
	mov dword ptr [esp+0xC],5
	call _CxxThrowException

 Block2:
	ret
}
}
// CActionMan::EMPLOYEEACTIONENTRY::~EMPLOYEEACTIONENTRY
_SUB_EXCEPTION_HANDLER(137D0)
__SUB_CLASS_THIS0(000137D0, __thiscall, 34343,  CActionMan::EMPLOYEEACTIONENTRY, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_137D0
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
	lea ecx,[esi+0x18]
	mov dword ptr [esp+0x14],0
	int 3 // TODO: 		mov dword ptr [ecx],offset ZList<ZRef<CActionMan::EMPLOYEEACTIONFRAMEENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::EMPLOYEEACTIONFRAMEENTRY>>::RemoveAll
	int 3 // TODO: 		mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CActionMan::LoadPetAction
_SUB_EXCEPTION_HANDLER(213F0)
__SUB_CLASS_THIS(000213F0, __thiscall, 33411,  CActionMan, void, CPetTemplate*, long, long, ZList<ZRef<CActionMan::PETACTIONFRAMEENTRY> >&) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_213F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x60
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x2C],ecx
	mov ecx,dword ptr [ebp+0x70]
	xor edi,edi
	mov dword ptr [ebp+0x44],edi
	cmp ecx,edi
	je Block2

 Block1:
	mov esi,dword ptr [ecx]
	jmp Block3

 Block2:
	xor esi,esi

 Block3:
	mov ebx,dword ptr [ebp+0x74]
	cmp ebx,9
	mov dword ptr [ebp+0x30],esi
	jge Block5

 Block4:
	lea eax,[ebx*4+ActionData::m_sPetAction]
	jmp Block6

 Block5:
	lea eax,[ebx-9]
	push eax
	lea edx,[ebp-0x4C]
	push edx
	call CPetTemplate::GetActionName
	mov dword ptr [ebp+0x44],1

 Block6:
	mov eax,dword ptr [eax]
	mov dword ptr [ebp+0x10],eax
	cmp eax,edi
	je Block8

 Block7:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	test byte ptr [ebp+0x44],1
	mov dword ptr [ebp-4],edi
	je Block11

 Block9:
	mov ecx,dword ptr [ebp-0x4C]
	cmp ecx,edi
	je Block11

 Block10:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp-0x4C],edi

 Block11:
	shl esi,8
	or esi,ebx
	mov dword ptr [ebp+0x5C],esi
	mov dword ptr [ebp+0x28],edi
	mov ecx,dword ptr [ebp+0x2C]
	lea eax,[ebp+0x24]
	push eax
	lea edx,[ebp+0x5C]
	add ecx,0x1D4
	push edx
	mov byte ptr [ebp-4],1
	mov dword ptr [ebp-0x10],ecx
	call ZMap<unsigned long, ZRef<CActionMan::PETACTIONENTRY>, unsigned long>::GetAt
	test eax,eax
	je Block13

 Block12:
	call timeGetTime
	mov ecx,dword ptr [ebp+0x28]
	mov dword ptr [ecx+0x2C],eax
	jmp Block124

 Block13:
	push 0x38
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,edi
	je Block21

 Block14:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3 // TODO: 		mov dword ptr [eax],offset CActionMan::PETACTIONENTRY::`vftable'
	mov dword ptr [eax+0x20],edi
	mov dword ptr [eax+0x24],edi
	mov dword ptr [eax+0x28],edi
	int 3 // TODO: 		mov dword ptr [eax+0x18],offset ZList<ZRef<CActionMan::PETACTIONFRAMEENTRY>>::`vftable'
	mov edi,eax
	mov dword ptr [ebp+0x50],eax
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block15:
	mov esi,dword ptr [ebp+0x28]
	mov dword ptr [ebp+0x28],edi
	test esi,esi
	je Block18

 Block16:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block18

 Block17:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block18:
	mov eax,dword ptr [ebp+0x30]
	push eax
	lea ecx,[ebp-0x20]
	push ecx
	mov ecx,dword ptr [ebp+0x2C]
	mov dword ptr [edi+0xC],eax
	mov dword ptr [edi+0x10],ebx
	call CActionMan::GetPetImgEntry
	xor ebx,ebx
	cmp dword ptr [ebp-0x1C],ebx
	jne Block22

 Block19:
	lea ecx,[ebp-0x20]
	mov byte ptr [ebp-4],1
	call ZRef<CActionMan::PETIMGENTRY>::~ZRef<CActionMan::PETIMGENTRY>
	lea ecx,[ebp+0x24]
	mov byte ptr [ebp-4],bl
	call ZRef<CActionMan::PETACTIONENTRY>::~ZRef<CActionMan::PETACTIONENTRY>
	mov ecx,dword ptr [ebp+0x10]
	cmp ecx,ebx
	je Block321

 Block20:
	call _xbstr_t::Data_t::Release
	jmp Block321

 Block21:
	mov dword ptr [ebp+0x50],edi
	jmp Block15

 Block22:
	mov edi,dword ptr [ebp+0x10]
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x54],esp
	mov dword ptr [eax],edi
	cmp edi,ebx
	je Block24

 Block23:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block24:
	mov eax,dword ptr [ebp-0x1C]
	mov ecx,dword ptr [eax+0xC]
	mov byte ptr [ebp-4],3
	cmp ecx,ebx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea edx,[ebp-0x40]
	push edx
	mov byte ptr [ebp-4],2
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x60],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block29

 Block27:
	cmp eax,0x80004002
	je Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	cmp word ptr [ebp-0x40],8
	mov byte ptr [ebp-4],6
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [ebp-0x40],ax
	mov eax,dword ptr [ebp-0x38]
	cmp eax,ebx
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[ebp-0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov esi,dword ptr [ebp+0x60]
	cmp esi,ebx
	sete al
	test al,al
	je Block38

 Block34:
	mov byte ptr [ebp-4],2
	cmp esi,ebx
	je Block36

 Block35:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block36:
	lea ecx,[ebp-0x20]
	mov byte ptr [ebp-4],1
	call ZRef<CActionMan::PETIMGENTRY>::~ZRef<CActionMan::PETIMGENTRY>
	lea ecx,[ebp+0x24]
	mov byte ptr [ebp-4],0
	call ZRef<CActionMan::PETACTIONENTRY>::~ZRef<CActionMan::PETACTIONENTRY>
	cmp edi,ebx
	je Block321

 Block37:
	mov ecx,edi
	call _xbstr_t::Data_t::Release
	jmp Block321

 Block38:
	lea ecx,[ebp-0x30]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [ebp-4],7
	cmp esi,ebx
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	lea edx,[ebp-0x18]
	push edx
	mov ecx,esi
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[ebp+0x44]
	mov byte ptr [ebp-4],8
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0xA
	cmp eax,ebx
	je Block42

 Block41:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block42:
	mov dword ptr [ebp+0x48],ebx
	cmp dword ptr [ebp+0x44],ebx
	je Block25

 Block43:
	mov eax,dword ptr [ebp+0x44]
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x48]
	push edx
	lea edx,[ebp-0x30]
	push edx
	push 1
	push eax
	mov eax,dword ptr [ecx+0xC]
	call eax
	test eax,eax
	jne Block105

 Block44:
	lea ecx,[ebp-0x30]
	push ecx
	lea edx,[ebp+0x4C]
	push edx
	call DetachBSTR
	mov ebx,dword ptr [ebp+0x4C]
	add esp,4
	xor esi,esi
	mov eax,esp
	mov dword ptr [ebp+0x54],esp
	mov dword ptr [eax],ebx
	cmp ebx,esi
	je Block46

 Block45:
	lea eax,[ebx+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block46:
	lea ecx,[ebp+0x14]
	push ecx
	mov ecx,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0xC
	mov byte ptr [ebp-4],0xB
	call IWzProperty::Getitem
	lea edx,[ebp+0x14]
	push edx
	lea eax,[ebp-0x14]
	push eax
	mov byte ptr [ebp-4],0xD
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0xE
	mov dword ptr [ebp+0x40],esi
	mov dword ptr [ebp+0x54],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block48

 Block47:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block48:
	lea ecx,[ebp+0x40]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	cmp eax,esi
	jge Block50

 Block49:
	cmp eax,0x80004002
	jne Block28

 Block50:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0x10
	cmp eax,esi
	je Block52

 Block51:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block52:
	mov edi,dword ptr [ebp+0x40]
	cmp edi,esi
	sete al
	test al,al
	je Block61

 Block53:
	mov byte ptr [ebp-4],0xD
	cmp edi,esi
	je Block55

 Block54:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block55:
	cmp word ptr [ebp+0x14],8
	mov byte ptr [ebp-4],0xB
	jne Block58

 Block56:
	mov eax,dword ptr [ebp+0x1C]
	xor edx,edx
	mov word ptr [ebp+0x14],dx
	cmp eax,esi
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea eax,[ebp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov byte ptr [ebp-4],0xA
	cmp ebx,esi
	je Block43

 Block60:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x4C],esi
	jmp Block43

 Block61:
	cmp edi,esi
	je Block25

 Block62:
	lea ecx,[ebp+0x58]
	push ecx
	mov ecx,edi
	call IWzCanvas::Getproperty
	push esi
	push esi
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x54],esp
	push 0x1ABE
	push edx
	mov byte ptr [ebp-4],0x11
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x12
	cmp ebx,esi
	je Block25

 Block63:
	lea eax,[ebp]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x11
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x13
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x34]
	mov dword ptr [ebp+0x34],esi
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,esi
	jge Block65

 Block64:
	cmp eax,0x80004002
	jne Block28

 Block65:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x15
	jne Block68

 Block66:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	cmp eax,esi
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea edx,[ebp]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	push esi
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x54],esp
	push 0x1ACB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x5C]
	push ecx
	mov byte ptr [ebp-4],0x16
	mov ecx,ebx
	mov byte ptr [ebp-4],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x17
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x38]
	mov dword ptr [ebp+0x38],esi
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,esi
	jge Block71

 Block70:
	cmp eax,0x80004002
	jne Block28

 Block71:
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],0x19
	jne Block74

 Block72:
	mov eax,dword ptr [ebp-0x54]
	xor edx,edx
	mov word ptr [ebp-0x5C],dx
	cmp eax,esi
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea eax,[ebp-0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block75:
	push 0x44
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,esi
	je Block77

 Block76:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3 // TODO: 		mov dword ptr [eax],offset CActionMan::PETACTIONFRAMEENTRY::`vftable'
	mov dword ptr [eax+0xC],esi
	mov esi,eax

 Block77:
	mov ebx,dword ptr [esi+0xC]
	cmp ebx,edi
	je Block80

 Block78:
	mov dword ptr [esi+0xC],edi
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx
	test ebx,ebx
	je Block80

 Block79:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block80:
	push 0xB4
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x54],esp
	push 0x1AA9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x3C]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x1A
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x1B
	test ecx,ecx
	je Block25

 Block81:
	lea edx,[ebp-0x6C]
	push edx
	mov byte ptr [ebp-4],0x1C
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1D
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x6C],8
	mov dword ptr [esi+0x40],eax
	mov byte ptr [ebp-4],0x1C
	jne Block84

 Block82:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	test eax,eax
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea ecx,[ebp-0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block85:
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x19
	test eax,eax
	je Block87

 Block86:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block87:
	mov ebx,dword ptr [ebp+0x34]
	mov edi,dword ptr [ebp+0x38]
	test ebx,ebx
	sete al
	test al,al
	sete al
	test al,al
	je Block92

 Block88:
	test edi,edi
	sete al
	test al,al
	sete al
	test al,al
	je Block92

 Block89:
	test edi,edi
	je Block25

 Block90:
	test ebx,ebx
	je Block25

 Block91:
	mov ecx,edi
	call IWzShape2D::Gety
	push eax
	mov ecx,edi
	call IWzShape2D::Getx
	push eax
	mov ecx,ebx
	call IWzShape2D::Gety
	push eax
	mov ecx,ebx
	call IWzShape2D::Getx
	push eax
	lea ecx,[esi+0x10]
	push ecx
	call SECRECT::SetRect
	add esp,0x14
	jmp Block93

 Block92:
	lea ebx,[esi+0x10]
	mov edx,ebx
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[ebx+0xC]
	xor ecx,ecx
	mov dword ptr [ebx+8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[ebx+0x18]
	xor ecx,ecx
	mov dword ptr [ebx+0x14],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[ebx+0x24]
	xor ecx,ecx
	mov dword ptr [ebx+0x20],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [ebx+0x2C],eax

 Block93:
	lea ebx,[esi+4]
	push ebx
	mov dword ptr [ebp-0x44],esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp+0x50]
	add ecx,0x18
	mov byte ptr [ebp-4],0x1E
	call ZList<ZRef<CActionMan::PETACTIONFRAMEENTRY>>::AddTail_
	lea edx,[ebp-0x48]
	push edx
	mov ecx,eax
	call ZRef<CActionMan::PETACTIONFRAMEENTRY>::op_assign_copy
	push ebx
	mov byte ptr [ebp-4],0x19
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block95

 Block94:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block95:
	mov dword ptr [ebp-0x44],0
	mov byte ptr [ebp-4],0x15
	test edi,edi
	je Block97

 Block96:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block97:
	mov eax,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],0x11
	test eax,eax
	je Block99

 Block98:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block99:
	mov eax,dword ptr [ebp+0x58]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x10
	call edx
	mov eax,dword ptr [ebp+0x40]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0xD
	call edx
	cmp word ptr [ebp+0x14],8
	mov byte ptr [ebp-4],0xB
	jne Block102

 Block100:
	xor eax,eax
	mov word ptr [ebp+0x14],ax
	mov eax,dword ptr [ebp+0x1C]
	test eax,eax
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea ecx,[ebp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block103:
	cmp dword ptr [ebp+0x4C],0
	mov byte ptr [ebp-4],0xA
	je Block43

 Block104:
	mov ecx,dword ptr [ebp+0x4C]
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x4C],0
	jmp Block43

 Block105:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x54],esp
	push 0x49F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x60]
	lea eax,[ebp]
	mov byte ptr [ebp-4],0x1F
	push eax
	mov byte ptr [ebp-4],0xA
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x20
	call get_int32
	add esp,8
	mov esi,eax
	neg esi
	sbb esi,esi
	neg esi
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0xA
	jne Block108

 Block106:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	test eax,eax
	je Block109

 Block107:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block109

 Block108:
	lea edx,[ebp]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block109:
	mov edi,dword ptr [ebp+0x50]
	test esi,esi
	je Block116

 Block110:
	mov ebx,dword ptr [edi+0x28]
	mov dword ptr [ebp+0x58],ebx
	test ebx,ebx
	je Block116

 Block111:
	nop

 Block112:
	cmp ebx,dword ptr [edi+0x24]
	je Block115

 Block113:
	cmp ebx,dword ptr [edi+0x28]
	je Block115

 Block114:
	lea ecx,[edi+0x18]
	call ZList<ZRef<CActionMan::PETACTIONFRAMEENTRY>>::AddTail_
	push ebx
	mov ecx,eax
	call ZRef<CActionMan::PETACTIONFRAMEENTRY>::op_assign_copy

 Block115:
	lea eax,[ebp+0x58]
	push eax
	call ZList<ZRef<CActionMan::PETACTIONFRAMEENTRY>>::GetPrev
	mov ebx,dword ptr [ebp+0x58]
	add esp,4
	test ebx,ebx
	jne Block112

 Block116:
	mov ecx,dword ptr [ebp+0x2C]
	add ecx,0x1C0
	mov dword ptr [edi+0x14],esi
	call ZList<ZRef<CActionMan::PETACTIONENTRY>>::AddTail_
	lea ecx,[ebp+0x24]
	mov esi,eax
	push ecx
	mov ecx,esi
	call ZRef<CActionMan::PETACTIONENTRY>::op_assign_copy
	mov ecx,dword ptr [ebp-0x10]
	lea edx,[ebp+0x24]
	push edx
	lea eax,[ebp+0x5C]
	push eax
	mov dword ptr [edi+0x34],esi
	call ZMap<unsigned long, ZRef<CActionMan::PETACTIONENTRY>, unsigned long>::Insert
	mov dword ptr [edi+0x30],eax
	call timeGetTime
	mov dword ptr [edi+0x2C],eax
	mov eax,dword ptr [ebp+0x44]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],7
	call edx
	cmp word ptr [ebp-0x30],8
	mov byte ptr [ebp-4],6
	jne Block119

 Block117:
	xor eax,eax
	mov word ptr [ebp-0x30],ax
	mov eax,dword ptr [ebp-0x28]
	test eax,eax
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea ecx,[ebp-0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block120:
	mov eax,dword ptr [ebp+0x60]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],2
	call eax
	mov eax,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block124

 Block121:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block124

 Block122:
	mov ecx,dword ptr [ebp-0x1C]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp-0x1C]
	test ecx,ecx
	je Block124

 Block123:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block124:
	xor edi,edi
	mov dword ptr [ebp+0x4C],edi
	mov eax,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0x21
	test eax,eax
	je Block193

 Block125:
	push eax
	lea ecx,[ebp+0x60]
	push ecx
	call get_equip_data_path
	add esp,8
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x22
	test eax,eax
	je Block127

 Block126:
	cmp word ptr [eax],di
	jne Block129

 Block127:
	mov byte ptr [ebp-4],0x21
	test eax,eax
	je Block193

 Block128:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block193

 Block129:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x30]
	push edx
	call esi
	lea eax,[ebp-0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block131

 Block130:
	push eax
	call _com_issue_error

 Block131:
	lea ecx,[ebp+0x14]
	push ecx
	mov byte ptr [ebp-4],0x23
	call esi
	lea edx,[ebp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block133

 Block132:
	push eax
	call _com_issue_error

 Block133:
	mov edx,dword ptr [ebp+0x60]
	lea eax,[ebp-0x30]
	push eax
	lea ecx,[ebp+0x14]
	push ecx
	push ecx
	mov dword ptr [ebp+0x54],esp
	mov ecx,esp
	mov bl,0x24
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x25
	jne Block135

 Block134:
	push 0x80004003
	call _com_issue_error

 Block135:
	lea eax,[ebp-0x40]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	push eax
	lea ecx,[ebp-0x10]
	push ecx
	mov byte ptr [ebp-4],0x26
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x27
	mov dword ptr [ebp+0x50],0
	mov dword ptr [ebp+0x54],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block137

 Block136:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block137:
	lea ecx,[ebp+0x50]
	call _x_com_ptr<IWzProperty>::_QueryUnknownComPtr
	test eax,eax
	jge Block140

 Block138:
	cmp eax,0x80004002
	je Block140

 Block139:
	push eax
	call _com_issue_error

 Block140:
	mov eax,dword ptr [ebp-0x10]
	mov byte ptr [ebp-4],0x29
	test eax,eax
	je Block142

 Block141:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block142:
	mov esi,8
	mov byte ptr [ebp-4],0x2A
	cmp word ptr [ebp-0x40],si
	jne Block145

 Block143:
	xor eax,eax
	mov word ptr [ebp-0x40],ax
	mov eax,dword ptr [ebp-0x38]
	test eax,eax
	je Block146

 Block144:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block146

 Block145:
	lea ecx,[ebp-0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block146:
	mov byte ptr [ebp-4],0x2B
	cmp word ptr [ebp+0x14],si
	jne Block149

 Block147:
	mov eax,dword ptr [ebp+0x1C]
	xor edx,edx
	mov word ptr [ebp+0x14],dx
	test eax,eax
	je Block150

 Block148:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block150

 Block149:
	lea eax,[ebp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block150:
	mov byte ptr [ebp-4],0x2C
	cmp word ptr [ebp-0x30],si
	jne Block153

 Block151:
	mov eax,dword ptr [ebp-0x28]
	xor ecx,ecx
	mov word ptr [ebp-0x30],cx
	test eax,eax
	je Block154

 Block152:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block154

 Block153:
	lea edx,[ebp-0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block154:
	mov esi,dword ptr [ebp+0x50]
	test esi,esi
	sete al
	test al,al
	je Block159

 Block155:
	mov byte ptr [ebp-4],0x22
	test esi,esi
	je Block157

 Block156:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block157:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x21
	test eax,eax
	je Block193

 Block158:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block193

 Block159:
	mov eax,0x20
	call __chkstk
	mov edx,dword ptr [ebp+0x30]
	mov eax,esp
	push 0xA
	push eax
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x54],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x2D
	test esi,esi
	jne Block161

 Block160:
	push 0x80004003
	call _com_issue_error

 Block161:
	lea eax,[ebp]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x2C
	call IWzProperty::Getitem
	push eax
	lea ecx,[ebp+0x3C]
	mov bl,0x2E
	push ecx
	mov byte ptr [ebp-4],bl
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x2F
	mov dword ptr [ebp+0x54],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block163

 Block162:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block163:
	lea ecx,[ebp+0x50]
	call _x_com_ptr<IWzProperty>::_QueryUnknownComPtr
	test eax,eax
	jge Block166

 Block164:
	cmp eax,0x80004002
	je Block166

 Block165:
	push eax
	call _com_issue_error

 Block166:
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block168

 Block167:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block168:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x2C
	jne Block171

 Block169:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	test eax,eax
	je Block172

 Block170:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block172

 Block171:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block172:
	mov esi,dword ptr [ebp+0x50]
	test esi,esi
	sete al
	test al,al
	je Block175

 Block173:
	mov byte ptr [ebp-4],0x22
	test esi,esi
	je Block157

 Block174:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax
	jmp Block157

 Block175:
	push ecx
	mov ecx,dword ptr [ebp+0x10]
	mov eax,esp
	mov dword ptr [ebp+0x54],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block177

 Block176:
	add ecx,8
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block177:
	mov byte ptr [ebp-4],0x30
	test esi,esi
	jne Block179

 Block178:
	push 0x80004003
	call _com_issue_error

 Block179:
	lea ecx,[ebp]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0x2C
	call IWzProperty::Getitem
	push eax
	lea edx,[ebp+0x3C]
	mov bl,0x31
	push edx
	mov byte ptr [ebp-4],bl
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x32
	mov dword ptr [ebp+0x54],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block181

 Block180:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block181:
	lea ecx,[ebp+0x4C]
	call _x_com_ptr<IWzProperty>::_QueryUnknownComPtr
	test eax,eax
	jge Block184

 Block182:
	cmp eax,0x80004002
	je Block184

 Block183:
	push eax
	call _com_issue_error

 Block184:
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block186

 Block185:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block186:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x2C
	jne Block189

 Block187:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	test eax,eax
	je Block190

 Block188:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block190

 Block189:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block190:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],0x22
	call eax
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x21
	test eax,eax
	je Block192

 Block191:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block192:
	mov edi,dword ptr [ebp+0x4C]

 Block193:
	test edi,edi
	sete al
	test al,al
	je Block200

 Block194:
	mov esi,dword ptr [ebp+0x7C]
	mov ecx,esi
	call ZList<ZRef<CActionMan::PETACTIONFRAMEENTRY>>::RemoveAll
	mov ebx,dword ptr [ebp+0x28]
	lea ecx,[ebx+0x18]
	push ecx
	mov ecx,esi
	call ZList<ZRef<CActionMan::PETACTIONFRAMEENTRY>>::AddTail_List
	mov byte ptr [ebp-4],1
	test edi,edi
	je Block196

 Block195:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block196:
	lea esi,[ebx+4]
	push esi
	mov byte ptr [ebp-4],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block198

 Block197:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block198:
	mov ecx,dword ptr [ebp+0x10]
	test ecx,ecx
	je Block321

 Block199:
	call _xbstr_t::Data_t::Release
	jmp Block321

 Block200:
	mov ebx,dword ptr [ebp+0x28]
	mov eax,dword ptr [ebx+0x24]
	mov dword ptr [ebp+0x44],0
	mov dword ptr [ebp-0x18],1
	mov dword ptr [ebp+0x2C],eax
	test eax,eax
	je Block309

 Block201:
	jmp Block203

 Block203:
	lea ecx,[ebp+0x2C]
	push ecx
	call ZList<ZRef<CActionMan::PETACTIONFRAMEENTRY>>::GetNext
	mov eax,dword ptr [eax+4]
	mov esi,dword ptr [eax+0xC]
	add esp,4
	mov dword ptr [ebp-0x1C],eax
	mov dword ptr [ebp+0x54],esi
	test esi,esi
	je Block205

 Block204:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block205:
	mov eax,0x20
	mov byte ptr [ebp-4],0x33
	call __chkstk
	mov edi,dword ptr [ebp+0x44]
	mov eax,esp
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp-0x44],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0x34
	test ecx,ecx
	je Block25

 Block206:
	lea edx,[ebp+0x14]
	push edx
	mov byte ptr [ebp-4],0x33
	call IWzProperty::Getitem
	cmp word ptr [ebp+0x14],0
	mov byte ptr [ebp-4],0x35
	je Block322

 Block207:
	lea eax,[ebp+0x14]
	push eax
	lea ecx,[ebp-0x10]
	push ecx
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x36
	mov dword ptr [ebp+0x30],0
	mov dword ptr [ebp-0x44],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block209

 Block208:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block209:
	lea ecx,[ebp+0x30]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	test eax,eax
	jge Block211

 Block210:
	cmp eax,0x80004002
	jne Block28

 Block211:
	mov eax,dword ptr [ebp-0x10]
	mov byte ptr [ebp-4],0x38
	test eax,eax
	je Block213

 Block212:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block213:
	mov ebx,dword ptr [ebp+0x30]
	test ebx,ebx
	sete al
	test al,al
	jne Block327

 Block214:
	mov eax,dword ptr [ebp+0x28]
	cmp dword ptr [eax+0x14],0
	je Block217

 Block215:
	mov eax,dword ptr [eax+0x20]
	shr eax,1
	cmp edi,eax
	jne Block217

 Block216:
	mov dword ptr [ebp-0x18],0xFFFFFFFF

 Block217:
	test ebx,ebx
	je Block25

 Block218:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x6C]
	lea ecx,[ebp+0x5C]
	push ecx
	push ebx
	mov dword ptr [ebp+0x5C],0
	call edx
	test eax,eax
	jge Block220

 Block219:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block220:
	mov edi,dword ptr [ebp+0x5C]
	test esi,esi
	je Block25

 Block221:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x6C]
	lea ecx,[ebp+0x58]
	push ecx
	push esi
	mov dword ptr [ebp+0x58],0
	call edx
	test eax,eax
	jge Block223

 Block222:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block223:
	mov eax,dword ptr [ebp+0x58]
	neg eax
	neg edi
	cmp eax,edi
	mov dword ptr [ebp+0x34],eax
	jl Block225

 Block224:
	mov dword ptr [ebp+0x34],edi

 Block225:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x6C]
	lea ecx,[ebp+0x5C]
	push ecx
	push ebx
	mov dword ptr [ebp+0x5C],0
	call edx
	test eax,eax
	jge Block227

 Block226:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block227:
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [ebx]
	lea edx,[ebp+0x58]
	push edx
	mov dword ptr [ebp+0x3C],eax
	mov eax,dword ptr [ecx+0x40]
	push ebx
	mov dword ptr [ebp+0x58],0
	call eax
	test eax,eax
	jge Block229

 Block228:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block229:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x6C]
	mov edi,dword ptr [ebp+0x58]
	lea edx,[ebp+0x38]
	push edx
	push esi
	mov dword ptr [ebp+0x38],0
	call eax
	test eax,eax
	jge Block231

 Block230:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block231:
	mov ecx,dword ptr [ebp+0x38]
	mov edx,dword ptr [esi]
	lea eax,[ebp+0x40]
	push eax
	mov dword ptr [ebp+0x48],ecx
	mov ecx,dword ptr [edx+0x40]
	push esi
	mov dword ptr [ebp+0x40],0
	call ecx
	test eax,eax
	jge Block233

 Block232:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block233:
	mov eax,dword ptr [ebp+0x40]
	sub eax,dword ptr [ebp+0x48]
	sub edi,dword ptr [ebp+0x3C]
	mov dword ptr [ebp+0x48],eax
	cmp edi,eax
	jl Block235

 Block234:
	mov dword ptr [ebp+0x48],edi

 Block235:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x74]
	lea eax,[ebp+0x5C]
	push eax
	push ebx
	mov dword ptr [ebp+0x5C],0
	call ecx
	test eax,eax
	jge Block237

 Block236:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block237:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x74]
	mov edi,dword ptr [ebp+0x5C]
	lea eax,[ebp+0x58]
	push eax
	push esi
	mov dword ptr [ebp+0x58],0
	call ecx
	test eax,eax
	jge Block239

 Block238:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block239:
	mov eax,dword ptr [ebp+0x58]
	neg eax
	neg edi
	cmp eax,edi
	mov dword ptr [ebp+0x50],eax
	jl Block241

 Block240:
	mov dword ptr [ebp+0x50],edi

 Block241:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x74]
	lea eax,[ebp+0x5C]
	push eax
	push ebx
	mov dword ptr [ebp+0x5C],0
	call ecx
	test eax,eax
	jge Block243

 Block242:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block243:
	mov edx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [ebx]
	lea ecx,[ebp+0x58]
	push ecx
	mov dword ptr [ebp+0x3C],edx
	mov edx,dword ptr [eax+0x48]
	push ebx
	mov dword ptr [ebp+0x58],0
	call edx
	test eax,eax
	jge Block245

 Block244:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block245:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x74]
	mov edi,dword ptr [ebp+0x58]
	lea ecx,[ebp+0x38]
	push ecx
	push esi
	mov dword ptr [ebp+0x38],0
	call edx
	test eax,eax
	jge Block247

 Block246:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block247:
	mov eax,dword ptr [ebp+0x38]
	mov ecx,dword ptr [esi]
	lea edx,[ebp+0x40]
	push edx
	mov dword ptr [ebp-0x44],eax
	mov eax,dword ptr [ecx+0x48]
	push esi
	mov dword ptr [ebp+0x40],0
	call eax
	test eax,eax
	jge Block249

 Block248:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block249:
	mov eax,dword ptr [ebp+0x40]
	sub edi,dword ptr [ebp+0x3C]
	sub eax,dword ptr [ebp-0x44]
	cmp edi,eax
	jge Block251

 Block250:
	mov edi,eax

 Block251:
	mov dword ptr [ebp+0x60],0
	lea ecx,[ebp-0x14]
	push 0x3D0
	push ecx
	mov byte ptr [ebp-4],0x39
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x3A
	test eax,eax
	je Block253

 Block252:
	mov eax,dword ptr [eax]
	jmp Block254

 Block253:
	xor eax,eax

 Block254:
	push 0
	lea edx,[ebp+0x60]
	push edx
	push eax
	call PcCreate_IWzCanvas
	mov ecx,dword ptr [ebp-0x14]
	add esp,0xC
	mov byte ptr [ebp-4],0x39
	test ecx,ecx
	je Block256

 Block255:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp-0x14],0

 Block256:
	lea eax,[ebp-0x5C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x5C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block28

 Block257:
	lea edx,[ebp-0x6C]
	push edx
	mov byte ptr [ebp-4],0x3B
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x6C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block28

 Block258:
	mov ecx,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x3C
	test ecx,ecx
	je Block25

 Block259:
	sub edi,dword ptr [ebp+0x50]
	lea edx,[ebp-0x5C]
	push edx
	lea eax,[ebp-0x6C]
	push eax
	mov eax,dword ptr [ebp+0x48]
	sub eax,dword ptr [ebp+0x34]
	push edi
	push eax
	call IWzCanvas::Create
	cmp word ptr [ebp-0x6C],8
	mov byte ptr [ebp-4],0x3B
	jne Block262

 Block260:
	mov eax,dword ptr [ebp-0x64]
	xor ecx,ecx
	mov word ptr [ebp-0x6C],cx
	test eax,eax
	je Block263

 Block261:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block263

 Block262:
	lea edx,[ebp-0x6C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block263:
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],0x39
	jne Block266

 Block264:
	xor eax,eax
	mov word ptr [ebp-0x5C],ax
	mov eax,dword ptr [ebp-0x54]
	test eax,eax
	je Block267

 Block265:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block267

 Block266:
	lea ecx,[ebp-0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block267:
	mov edx,3
	mov word ptr [ebp],dx
	mov dword ptr [ebp+8],0xFF
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[ebp+0x48]
	push ecx
	push esi
	mov byte ptr [ebp-4],0x3D
	mov dword ptr [ebp+0x48],0
	call edx
	test eax,eax
	jge Block269

 Block268:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block269:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x6C]
	mov edi,dword ptr [ebp+0x48]
	lea ecx,[ebp+0x5C]
	push ecx
	push esi
	mov dword ptr [ebp+0x5C],0
	call edx
	test eax,eax
	jge Block271

 Block270:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block271:
	mov ecx,dword ptr [ebp+0x60]
	test ecx,ecx
	je Block25

 Block272:
	mov edx,dword ptr [ebp+0x50]
	add edx,edi
	lea eax,[ebp]
	push eax
	mov eax,dword ptr [ebp+0x5C]
	neg edx
	push esi
	push edx
	mov edx,dword ptr [ebp+0x34]
	add edx,eax
	neg edx
	push edx
	call IWzCanvas::Copy
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x39
	jne Block275

 Block273:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	test eax,eax
	je Block276

 Block274:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block276

 Block275:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block276:
	mov edx,3
	mov word ptr [ebp-0x40],dx
	mov dword ptr [ebp-0x38],0xFF
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[ebp+0x48]
	push ecx
	xor edi,edi
	push ebx
	mov byte ptr [ebp-4],0x3E
	mov dword ptr [ebp+0x48],edi
	call edx
	cmp eax,edi
	jge Block278

 Block277:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block278:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x6C]
	mov esi,dword ptr [ebp+0x48]
	lea ecx,[ebp+0x5C]
	push ecx
	push ebx
	mov dword ptr [ebp+0x5C],edi
	call edx
	cmp eax,edi
	jge Block280

 Block279:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block280:
	mov ecx,dword ptr [ebp+0x60]
	cmp ecx,edi
	je Block25

 Block281:
	lea eax,[ebp-0x40]
	push eax
	mov eax,dword ptr [ebp+0x5C]
	push ebx
	mov ebx,dword ptr [ebp+0x50]
	lea edx,[ebx+esi]
	mov esi,dword ptr [ebp+0x34]
	neg edx
	push edx
	lea edx,[esi+eax]
	neg edx
	push edx
	call IWzCanvas::Copy
	cmp word ptr [ebp-0x40],8
	mov byte ptr [ebp-4],0x39
	jne Block284

 Block282:
	xor eax,eax
	mov word ptr [ebp-0x40],ax
	mov eax,dword ptr [ebp-0x38]
	cmp eax,edi
	je Block285

 Block283:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block285

 Block284:
	lea ecx,[ebp-0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block285:
	mov eax,dword ptr [ebp+0x60]
	cmp eax,edi
	je Block25

 Block286:
	mov edx,dword ptr [eax]
	neg esi
	push esi
	mov edi,eax
	push eax
	mov eax,dword ptr [edx+0x70]
	call eax
	test eax,eax
	jge Block288

 Block287:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block288:
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block25

 Block289:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x78]
	neg ebx
	push ebx
	push eax
	mov esi,eax
	call edx
	test eax,eax
	jge Block291

 Block290:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block291:
	push 0x44
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	test eax,eax
	je Block293

 Block292:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3 // TODO: 		mov dword ptr [eax],offset CActionMan::PETACTIONFRAMEENTRY::`vftable'
	mov dword ptr [eax+0xC],ecx
	mov ebx,eax
	jmp Block294

 Block293:
	xor ebx,ebx

 Block294:
	mov esi,dword ptr [ebx+0xC]
	mov eax,dword ptr [ebp+0x60]
	cmp esi,eax
	je Block299

 Block295:
	mov dword ptr [ebx+0xC],eax
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block297

 Block296:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block297:
	test esi,esi
	je Block299

 Block298:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block299:
	mov eax,dword ptr [ebp-0x1C]
	lea esi,[eax+0x10]
	lea edi,[ebx+0x10]
	mov ecx,0xC
	rep movsd
	mov edx,dword ptr [eax+0x40]
	lea esi,[ebx+4]
	push esi
	mov dword ptr [ebx+0x40],edx
	mov dword ptr [ebp-0x24],ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],0x3F
	call ZList<ZRef<CActionMan::PETACTIONFRAMEENTRY>>::AddTail_
	lea ecx,[ebp-0x28]
	push ecx
	mov ecx,eax
	call ZRef<CActionMan::PETACTIONFRAMEENTRY>::op_assign_copy
	push esi
	mov byte ptr [ebp-4],0x39
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block301

 Block300:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block301:
	mov eax,dword ptr [ebp+0x60]
	mov dword ptr [ebp-0x24],0
	mov byte ptr [ebp-4],0x38
	test eax,eax
	je Block303

 Block302:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block303:
	mov eax,dword ptr [ebp+0x30]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x35
	call edx
	cmp word ptr [ebp+0x14],8
	mov byte ptr [ebp-4],0x33
	jne Block306

 Block304:
	xor eax,eax
	mov word ptr [ebp+0x14],ax
	mov eax,dword ptr [ebp+0x1C]
	test eax,eax
	je Block307

 Block305:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block307

 Block306:
	lea ecx,[ebp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block307:
	mov eax,dword ptr [ebp+0x54]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],0x21
	call eax
	mov ecx,dword ptr [ebp-0x18]
	add dword ptr [ebp+0x44],ecx
	cmp dword ptr [ebp+0x2C],0
	jne Block203

 Block308:
	mov ebx,dword ptr [ebp+0x28]
	mov edi,dword ptr [ebp+0x4C]

 Block309:
	mov byte ptr [ebp-4],1
	test edi,edi
	je Block312

 Block310:
	mov ecx,dword ptr [edi]
	push edi

 Block311:
	mov edx,dword ptr [ecx+8]
	call edx

 Block312:
	mov edi,dword ptr [ZImports::_InterlockedDecrement]
	lea esi,[ebx+4]
	push esi
	mov byte ptr [ebp-4],0
	call edi
	test eax,eax
	jne Block314

 Block313:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block314:
	mov esi,dword ptr [ebp+0x10]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test esi,esi
	je Block321

 Block315:
	lea eax,[esi+8]
	push eax
	call edi
	test eax,eax
	jne Block321

 Block316:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block318

 Block317:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block318:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block320

 Block319:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block320:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block321:
	lea esp,[ebp-0x7C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x64]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x68
	mov esp,ebp
	pop ebp
	ret 0x10

 Block322:
	lea edx,[ebp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block323:
	mov byte ptr [ebp-4],0x21
	test esi,esi
	je Block325

 Block324:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block325:
	cmp dword ptr [ebp+0x2C],0
	je Block308

 Block326:
	mov esi,dword ptr [ebp+0x7C]
	mov ecx,esi
	call ZList<ZRef<CActionMan::PETACTIONFRAMEENTRY>>::RemoveAll
	mov ebx,dword ptr [ebp+0x28]
	lea edx,[ebx+0x18]
	push edx
	mov ecx,esi
	call ZList<ZRef<CActionMan::PETACTIONFRAMEENTRY>>::AddTail_List
	mov eax,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],1
	push eax
	jmp Block311

 Block327:
	mov byte ptr [ebp-4],0x35
	test ebx,ebx
	je Block329

 Block328:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block329:
	cmp word ptr [ebp+0x14],8
	mov byte ptr [ebp-4],0x33
	jne Block322

 Block330:
	mov eax,dword ptr [ebp+0x1C]
	xor ecx,ecx
	mov word ptr [ebp+0x14],cx
	test eax,eax
	je Block323

 Block331:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block323
}
}
// CActionMan::LoadFaceLook
_SUB_EXCEPTION_HANDLER(1CAB0)
__SUB_CLASS_THIS(0001CAB0, __thiscall, 33395,  CActionMan, long, long, long, long, long, ZList<_x_com_ptr<IWzCanvas> >&) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x64]
	sub esp,0x64
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1CAB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x218
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x60],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [ebp-0x1DC],esi
	mov eax,dword ptr [ebp+0x74]
	mov ebx,dword ptr [ebp+0x70]
	mov edi,dword ptr [ebp+0x78]
	mov dword ptr [ebp+0x4C],0
	push 0
	lea edx,[ebp-0x1FC]
	lea ecx,[esi+0x44]
	push edx
	mov dword ptr [ebp-0x1FC],ebx
	mov dword ptr [ebp-0x1F8],eax
	mov dword ptr [ebp-0x1F4],edi
	mov dword ptr [ebp-0x108],ecx
	call ZMap<FACELOOKCODES, ZRef<CActionMan::FACELOOKENTRY>, FACELOOKCODES>::GetAt
	test eax,eax
	je Block6

 Block1:
	mov esi,dword ptr [eax+4]
	mov dword ptr [ebp-0x200],esi
	test esi,esi
	je Block3

 Block2:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block3:
	mov dword ptr [ebp-4],0
	call timeGetTime
	mov edi,dword ptr [ebp+0x7C]
	mov ecx,edi
	mov dword ptr [esi+0x24],eax
	call ZList<_x_com_ptr<IWzCanvas>>::RemoveAll
	lea ecx,[esi+0xC]
	push ecx
	mov ecx,edi
	call ZList<_x_com_ptr<IWzCanvas>>::AddTail_List
	mov ebx,dword ptr [esi+0x20]
	lea edi,[esi+4]
	push edi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block5

 Block4:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block5:
	mov eax,ebx
	jmp Block526

 Block6:
	push ebx
	lea ecx,[ebp-0x110]
	push ecx
	mov ecx,esi
	call CActionMan::GetCharacterImgEntry
	mov ebx,1
	mov dword ptr [ebp-4],ebx
	test edi,edi
	je Block8

 Block7:
	push edi
	lea edx,[ebp-0x204]
	push edx
	mov ecx,esi
	call CActionMan::GetCharacterImgEntry
	mov dword ptr [ebp+0x4C],ebx
	jmp Block9

 Block8:
	mov dword ptr [ebp+0x4C],2
	mov ebx,dword ptr [ebp+0x4C]
	mov dword ptr [ebp-0x68],0
	lea eax,[ebp-0x6C]

 Block9:
	mov eax,dword ptr [eax+4]
	mov dword ptr [ebp-0x1B4],eax
	test eax,eax
	je Block11

 Block10:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	mov dword ptr [ebp-4],3
	test bl,2
	je Block13

 Block12:
	and ebx,0xFFFFFFFD
	lea ecx,[ebp-0x6C]
	mov dword ptr [ebp+0x4C],ebx
	call ZRef<CActionMan::CHARACTERIMGENTRY>::~ZRef<CActionMan::CHARACTERIMGENTRY>

 Block13:
	mov byte ptr [ebp-4],4
	test bl,1
	je Block15

 Block14:
	and ebx,0xFFFFFFFE
	lea ecx,[ebp-0x204]
	mov dword ptr [ebp+0x4C],ebx
	call ZRef<CActionMan::CHARACTERIMGENTRY>::~ZRef<CActionMan::CHARACTERIMGENTRY>

 Block15:
	mov edi,dword ptr [ebp+0x74]
	test edi,edi
	jl Block17

 Block16:
	cmp edi,0x18
	jl Block18

 Block17:
	mov dword ptr [ebp+0x74],0
	mov edi,dword ptr [ebp+0x74]

 Block18:
	xor esi,esi
	mov dword ptr [ebp-0x10],esi
	mov dword ptr [ebp-0x48],esi
	mov eax,dword ptr [edi*4+ActionData::m_saEmotionName]
	push esi
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x68],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block20

 Block19:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block20:
	mov eax,dword ptr [ebp-0x10C]
	mov ecx,dword ptr [eax+0x40]
	mov byte ptr [ebp-4],7
	cmp ecx,esi
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea edx,[ebp-0x5C]
	push edx
	mov byte ptr [ebp-4],6
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],8
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x10]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block25

 Block23:
	cmp eax,0x80004002
	je Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],6
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [ebp-0x5C],ax
	mov eax,dword ptr [ebp-0x54]
	cmp eax,esi
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[ebp-0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov ecx,dword ptr [ebp-0x10]
	cmp ecx,esi
	sete al
	test al,al
	je Block34

 Block30:
	mov byte ptr [ebp-4],4
	cmp ecx,esi
	je Block33

 Block31:
	mov edx,dword ptr [ecx]
	push ecx

 Block32:
	mov eax,dword ptr [edx+8]
	call eax

 Block33:
	lea ecx,[ebp-0x1B8]
	mov byte ptr [ebp-4],1
	call ZRef<CActionMan::CHARACTERIMGENTRY>::~ZRef<CActionMan::CHARACTERIMGENTRY>
	lea ecx,[ebp-0x110]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZRef<CActionMan::CHARACTERIMGENTRY>::~ZRef<CActionMan::CHARACTERIMGENTRY>
	xor eax,eax
	jmp Block526

 Block34:
	mov ebx,dword ptr [ebp-0x1B4]
	test ebx,ebx
	je Block51

 Block35:
	mov edx,edi
	sub edx,0x17
	neg edx
	push 0
	sbb edx,edx
	push 0
	and edx,edi
	mov eax,dword ptr [edx*4+ActionData::m_saEmotionName]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x68],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block37

 Block36:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block37:
	mov ecx,dword ptr [ebx+0x40]
	mov byte ptr [ebp-4],9
	test ecx,ecx
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	lea eax,[ebp-0x5C]
	push eax
	mov byte ptr [ebp-4],6
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xA
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x48]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block42

 Block40:
	cmp eax,0x80004002
	je Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],6
	jne Block45

 Block43:
	mov eax,dword ptr [ebp-0x54]
	xor ecx,ecx
	mov word ptr [ebp-0x5C],cx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea edx,[ebp-0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block46:
	mov esi,dword ptr [ebp-0x48]
	test esi,esi
	sete al
	test al,al
	je Block51

 Block47:
	mov byte ptr [ebp-4],5
	test esi,esi
	je Block49

 Block48:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block49:
	mov eax,dword ptr [ebp-0x10]
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block33

 Block50:
	mov edx,dword ptr [eax]
	push eax
	jmp Block32

 Block51:
	lea ecx,[ebp-0x214]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	mov edi,dword ptr [ebp-0x10]
	xor ebx,ebx
	mov byte ptr [ebp-4],0xB
	cmp edi,ebx
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	lea edx,[ebp-0x1E0]
	push edx
	mov ecx,edi
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[ebp-0x24]
	mov byte ptr [ebp-4],0xC
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp-0x1E0]
	mov byte ptr [ebp-4],0xE
	cmp eax,ebx
	je Block55

 Block54:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block55:
	cmp esi,ebx
	sete al
	test al,al
	sete al
	mov dword ptr [ebp-0x74],0x1388
	test al,al
	je Block284

 Block56:
	cmp esi,ebx
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	mov ecx,esi
	call IWzProperty::Getcount
	mov ecx,edi
	mov dword ptr [ebp+0x28],eax
	call IWzProperty::Getcount
	mov ecx,dword ptr [ebp+0x28]
	cmp ecx,eax
	jbe Block284

 Block59:
	lea eax,[ebp+0x28]
	push eax
	mov ecx,esi
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[ebp-0x24]
	mov byte ptr [ebp-4],0xF
	call _x_com_ptr<IEnumVARIANT>::op_assign_unknown_com_ptr
	mov eax,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0xE
	cmp eax,ebx
	je Block61

 Block60:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block61:
	mov dword ptr [ebp-0x9C],ebx
	cmp dword ptr [ebp-0x24],ebx
	je Block21

 Block62:
	mov eax,dword ptr [ebp-0x24]
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x9C]
	push edx
	lea edx,[ebp-0x214]
	push edx
	push 1
	push eax
	mov eax,dword ptr [ecx+0xC]
	call eax
	test eax,eax
	jne Block518

 Block63:
	lea ecx,[ebp-0x214]
	push ecx
	lea edx,[ebp+0x3C]
	push edx
	call DetachBSTR
	add esp,8
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block65

 Block64:
	mov edx,dword ptr [eax]
	jmp Block66

 Block65:
	xor edx,edx

 Block66:
	mov dword ptr [ebp+0x34],0
	test edx,edx
	je Block70

 Block67:
	mov eax,edx
	lea esi,[eax+2]
	lea esp,[esp]

 Block68:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block68

 Block69:
	sub eax,esi
	sar eax,1
	mov esi,eax
	lea eax,[esi+esi]
	push eax
	push edx
	push 0
	push esi
	lea ecx,[ebp+0x34]
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[ebp+0x34]
	call ZXString16::ReleaseBuffer

 Block70:
	mov edi,dword ptr [ebp+0x34]
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	mov byte ptr [ebp-4],0x11
	call WideCharToMultiByte
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
	call WideCharToMultiByte
	push esi
	call _atoi
	mov esi,eax
	add esp,4
	mov eax,0x20
	call __chkstk
	mov ebx,dword ptr [ebp-0x10]
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x20]
	mov edi,esp
	lea edx,[ebp-0x34]
	push edx
	push ebx
	mov dword ptr [ebp-0x34],0
	call eax
	test eax,eax
	jge Block72

 Block71:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block72:
	xor edx,edx
	mov eax,esi
	div dword ptr [ebp-0x34]
	push 0xA
	push edi
	push edx
	call __itow
	add esp,0xC
	push eax
	lea ecx,[ebp-0x60]
	call _xbstr_t::_ctor_1
	mov esi,dword ptr [ebp-0x60]
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x28],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block74

 Block73:
	lea ecx,[esi+8]
	push ecx
	call edi

 Block74:
	lea edx,[ebp-0x94]
	mov byte ptr [ebp-4],0x13
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x12
	call IWzProperty::Getitem
	cmp word ptr [ebp-0x94],3
	jne Block81

 Block75:
	mov eax,dword ptr [ebp-0x8C]
	lea ecx,[ebp-0x94]
	push ecx
	mov dword ptr [ebp-0x74],eax
	call dword ptr [ZImports::_VariantClear]
	xor edi,edi
	cmp esi,edi
	je Block77

 Block76:
	mov ecx,esi
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp-0x60],edi

 Block77:
	mov eax,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],0x10
	cmp eax,edi
	je Block79

 Block78:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block79:
	mov ecx,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0xE
	cmp ecx,edi
	je Block62

 Block80:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x3C],edi
	jmp Block62

 Block81:
	xor ecx,ecx
	mov dword ptr [ebp+0x44],ecx
	mov dword ptr [ebp+0x2C],ecx
	mov dword ptr [ebp+0x54],ecx
	mov dword ptr [ebp+0x5C],ecx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x28],ecx
	mov dword ptr [ebp-0x28],esp
	mov dword ptr [eax],esi
	cmp esi,ecx
	je Block83

 Block82:
	add esi,8
	push esi
	call edi

 Block83:
	lea edx,[ebp-0x160]
	mov byte ptr [ebp-4],0x19
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x18
	call IWzProperty::Getitem
	push eax
	lea eax,[ebp-0x70]
	push eax
	mov byte ptr [ebp-4],0x1A
	call get_unknown
	add esp,8
	push eax
	lea ecx,[ebp+0x44]
	mov byte ptr [ebp-4],0x1B
	call _x_com_ptr<IWzProperty>::op_assign_unknown_com_ptr
	mov eax,dword ptr [ebp-0x70]
	mov byte ptr [ebp-4],0x1A
	test eax,eax
	je Block85

 Block84:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block85:
	mov esi,8
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp-0x160],si
	jne Block88

 Block86:
	xor eax,eax
	mov word ptr [ebp-0x160],ax
	mov eax,dword ptr [ebp-0x158]
	test eax,eax
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea ecx,[ebp-0x160]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block89:
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x28],esp
	push 0x45A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x1C
	test ecx,ecx
	je Block21

 Block90:
	lea eax,[ebp-0x1A0]
	push eax
	mov byte ptr [ebp-4],0x18
	call IWzProperty::Getitem
	push eax
	lea ecx,[ebp-0x80]
	push ecx
	mov byte ptr [ebp-4],0x1D
	call get_unknown
	add esp,8
	push eax
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x1E
	call _x_com_ptr<IWzCanvas>::op_assign_unknown_com_ptr
	mov eax,dword ptr [ebp-0x80]
	mov byte ptr [ebp-4],0x1D
	test eax,eax
	je Block92

 Block91:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block92:
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp-0x1A0],si
	jne Block95

 Block93:
	mov eax,dword ptr [ebp-0x198]
	xor ecx,ecx
	mov word ptr [ebp-0x1A0],cx
	test eax,eax
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea edx,[ebp-0x1A0]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	push 0x3C
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x28],esp
	push 0x1AA9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x1F
	test ecx,ecx
	je Block21

 Block97:
	lea edx,[ebp-0x180]
	push edx
	mov byte ptr [ebp-4],0x18
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x20
	call get_int32
	add esp,8
	mov dword ptr [ebp-0x28],eax
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp-0x180],si
	jne Block100

 Block98:
	xor eax,eax
	mov word ptr [ebp-0x180],ax
	mov eax,dword ptr [ebp-0x178]
	test eax,eax
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea ecx,[ebp-0x180]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block101:
	mov ecx,dword ptr [ebp+0x2C]
	push 0
	push 0
	test ecx,ecx
	je Block21

 Block102:
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x64],esp
	push edx
	call IWzCanvas::Getproperty
	call CSpriteSource::QueryZ
	mov ecx,dword ptr [ebp+0x3C]
	add esp,8
	mov dword ptr [ebp-0x64],eax
	mov eax,esp
	mov dword ptr [ebp+0x40],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block104

 Block103:
	add ecx,8
	push ecx
	call edi

 Block104:
	mov ecx,dword ptr [ebp-0x48]
	lea eax,[ebp-0x120]
	mov byte ptr [ebp-4],0x21
	push eax
	mov byte ptr [ebp-4],0x18
	call IWzProperty::Getitem
	mov ebx,dword ptr [ebp+0x4C]
	push eax
	lea ecx,[ebp-0xA0]
	or ebx,4
	push ecx
	mov byte ptr [ebp-4],0x22
	mov dword ptr [ebp+0x4C],ebx
	call get_unknown
	add esp,8
	mov esi,0x23
	or ebx,8
	push eax
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp-4],esi
	mov dword ptr [ebp+0x4C],ebx
	call _x_com_ptr<IWzProperty>::op_assign_unknown_com_ptr
	xor edi,edi
	mov dword ptr [ebp-4],esi
	test bl,0x10
	je Block107

 Block105:
	mov eax,dword ptr [ebp-0x108]
	and ebx,0xFFFFFFEF
	mov dword ptr [ebp+0x4C],ebx
	cmp eax,edi
	je Block107

 Block106:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block107:
	mov dword ptr [ebp-4],0x22
	test bl,8
	je Block110

 Block108:
	mov eax,dword ptr [ebp-0xA0]
	and ebx,0xFFFFFFF7
	mov dword ptr [ebp+0x4C],ebx
	cmp eax,edi
	je Block110

 Block109:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block110:
	mov dword ptr [ebp-4],0x18
	test bl,4
	je Block115

 Block111:
	and ebx,0xFFFFFFFB
	mov dword ptr [ebp+0x4C],ebx
	mov ebx,8
	cmp word ptr [ebp-0x120],bx
	jne Block114

 Block112:
	xor eax,eax
	mov word ptr [ebp-0x120],ax
	mov eax,dword ptr [ebp-0x118]
	cmp eax,edi
	je Block116

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block114:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x120]
	push ecx
	call esi
	jmp Block117

 Block115:
	mov ebx,8

 Block116:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block117:
	cmp dword ptr [ebp+0x44],edi
	sete al
	test al,al
	sete al
	test al,al
	je Block132

 Block118:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x40],esp
	push 0x3D4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x25
	cmp ecx,edi
	je Block21

 Block119:
	lea eax,[ebp-0x150]
	push eax
	mov byte ptr [ebp-4],0x18
	call IWzProperty::Getitem
	push eax
	lea ecx,[ebp-0x98]
	push ecx
	mov byte ptr [ebp-4],0x26
	call get_unknown
	add esp,8
	push eax
	lea ecx,[ebp+0x54]
	mov byte ptr [ebp-4],0x27
	call _x_com_ptr<IWzCanvas>::op_assign_unknown_com_ptr
	mov eax,dword ptr [ebp-0x98]
	mov byte ptr [ebp-4],0x26
	cmp eax,edi
	je Block121

 Block120:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block121:
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp-0x150],bx
	jne Block124

 Block122:
	mov eax,dword ptr [ebp-0x148]
	xor ecx,ecx
	mov word ptr [ebp-0x150],cx
	cmp eax,edi
	je Block125

 Block123:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block125

 Block124:
	lea edx,[ebp-0x150]
	push edx
	call esi

 Block125:
	mov ecx,dword ptr [ebp+0x54]
	cmp ecx,edi
	sete al
	test al,al
	je Block130

 Block126:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x6C]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x40],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x28
	cmp ecx,edi
	je Block21

 Block127:
	lea edx,[ebp-0x224]
	push edx
	mov byte ptr [ebp-4],0x18
	call IWzProperty::Getitem
	push eax
	lea eax,[ebp-0x40]
	push eax
	mov byte ptr [ebp-4],0x29
	call get_unknown
	add esp,8
	push eax
	lea ecx,[ebp+0x54]
	mov byte ptr [ebp-4],0x2A
	call _x_com_ptr<IWzCanvas>::op_assign_unknown_com_ptr
	mov eax,dword ptr [ebp-0x40]
	mov byte ptr [ebp-4],0x29
	cmp eax,edi
	je Block129

 Block128:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block129:
	lea ecx,[ebp-0x224]
	mov byte ptr [ebp-4],0x18
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [ebp+0x54]

 Block130:
	push edi
	push edi
	cmp ecx,edi
	je Block21

 Block131:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x40],esp
	push eax
	call IWzCanvas::Getproperty
	call CSpriteSource::QueryZ
	add esp,0xC
	mov dword ptr [ebp+0x28],eax

 Block132:
	mov dword ptr [ebp+0x30],edi
	mov dword ptr [ebp+0x38],edi
	mov dword ptr [ebp+0x50],edi
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push 0x3D3
	push ecx
	mov byte ptr [ebp-4],0x2D
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],0x2E
	cmp ecx,edi
	je Block21

 Block133:
	lea edx,[ebp-0x38]
	push edx
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x2F
	cmp ecx,edi
	je Block21

 Block134:
	lea eax,[ebp-0x170]
	push eax
	mov byte ptr [ebp-4],0x30
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x31
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x38]
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,edi
	jge Block136

 Block135:
	cmp eax,0x80004002
	jne Block24

 Block136:
	mov byte ptr [ebp-4],0x30
	cmp word ptr [ebp-0x170],bx
	jne Block139

 Block137:
	mov eax,dword ptr [ebp-0x168]
	xor ecx,ecx
	mov word ptr [ebp-0x170],cx
	cmp eax,edi
	je Block140

 Block138:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block140

 Block139:
	lea edx,[ebp-0x170]
	push edx
	call esi

 Block140:
	mov eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],0x2D
	cmp eax,edi
	je Block142

 Block141:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block142:
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x40],esp
	push 0x3CA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],0x32
	cmp ecx,edi
	je Block21

 Block143:
	lea edx,[ebp-0x3C]
	push edx
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x33
	cmp ecx,edi
	je Block21

 Block144:
	lea eax,[ebp-0x190]
	push eax
	mov byte ptr [ebp-4],0x34
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x35
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x30]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block146

 Block145:
	cmp eax,0x80004002
	jne Block24

 Block146:
	mov byte ptr [ebp-4],0x34
	cmp word ptr [ebp-0x190],bx
	jne Block149

 Block147:
	mov eax,dword ptr [ebp-0x188]
	xor ecx,ecx
	mov word ptr [ebp-0x190],cx
	cmp eax,edi
	je Block150

 Block148:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block150

 Block149:
	lea edx,[ebp-0x190]
	push edx
	call esi

 Block150:
	mov eax,dword ptr [ebp-0x3C]
	mov byte ptr [ebp-4],0x2D
	cmp eax,edi
	je Block152

 Block151:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block152:
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x40],esp
	push 0x458
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x36
	cmp ecx,edi
	je Block21

 Block153:
	lea edx,[ebp-0x1B0]
	push edx
	mov byte ptr [ebp-4],0x2D
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x37
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x50]
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,edi
	jge Block155

 Block154:
	cmp eax,0x80004002
	jne Block24

 Block155:
	mov byte ptr [ebp-4],0x2D
	cmp word ptr [ebp-0x1B0],bx
	jne Block158

 Block156:
	xor eax,eax
	mov word ptr [ebp-0x1B0],ax
	mov eax,dword ptr [ebp-0x1A8]
	cmp eax,edi
	je Block159

 Block157:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block159

 Block158:
	lea ecx,[ebp-0x1B0]
	push ecx
	call esi

 Block159:
	mov ebx,dword ptr [ebp+0x38]
	cmp ebx,edi
	je Block21

 Block160:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x28]
	lea eax,[ebp-0x4C]
	push eax
	push ebx
	mov dword ptr [ebp-0x4C],edi
	call ecx
	cmp eax,edi
	jge Block162

 Block161:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block162:
	mov esi,dword ptr [ebp+0x50]
	mov edx,dword ptr [ebp-0x4C]
	mov dword ptr [ebp-0x30],edx
	cmp esi,edi
	je Block21

 Block163:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x28]
	lea ecx,[ebp+0x24]
	push ecx
	push esi
	mov dword ptr [ebp+0x24],edi
	call edx
	cmp eax,edi
	jge Block165

 Block164:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block165:
	mov eax,dword ptr [ebp+0x24]
	mov dword ptr [ebp-0x44],eax
	mov eax,dword ptr [ebp+0x2C]
	cmp eax,edi
	je Block21

 Block166:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0xC]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x48]
	mov dword ptr [ebp+0xC],edi
	call eax
	cmp eax,edi
	jge Block168

 Block167:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block168:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x20]
	mov edi,dword ptr [ebp+0xC]
	lea edx,[ebp+0x1C]
	push edx
	push ebx
	mov dword ptr [ebp+0x1C],0
	call eax
	test eax,eax
	jge Block170

 Block169:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block170:
	mov ecx,dword ptr [ebp+0x1C]
	mov esi,dword ptr [ebp+0x50]
	mov edx,dword ptr [esi]
	lea eax,[ebp+0x10]
	push eax
	mov dword ptr [ebp-0x78],ecx
	mov ecx,dword ptr [edx+0x20]
	push esi
	mov dword ptr [ebp+0x10],0
	call ecx
	test eax,eax
	jge Block172

 Block171:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block172:
	mov eax,dword ptr [ebp+0x2C]
	mov edx,dword ptr [ebp+0x10]
	mov dword ptr [ebp+0x58],edx
	test eax,eax
	je Block21

 Block173:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x14]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [ebp+0x14],0
	call eax
	test eax,eax
	jge Block175

 Block174:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block175:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x28]
	mov esi,dword ptr [ebp+0x14]
	lea edx,[ebp+8]
	push edx
	push ebx
	mov dword ptr [ebp+8],0
	call eax
	test eax,eax
	jge Block177

 Block176:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block177:
	mov ecx,dword ptr [ebp+8]
	mov eax,dword ptr [ebp+0x50]
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x28]
	mov dword ptr [ebp+0x40],ecx
	lea ecx,[ebp]
	push ecx
	push eax
	mov dword ptr [ebp],0
	call edx
	test eax,eax
	jge Block179

 Block178:
	mov ecx,dword ptr [ebp+0x50]
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ecx
	push eax
	call _com_issue_errorex

 Block179:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [ebx]
	lea ecx,[ebp+4]
	push ecx
	mov dword ptr [ebp-0x7C],edx
	mov edx,dword ptr [eax+0x20]
	push ebx
	mov dword ptr [ebp+4],0
	call edx
	test eax,eax
	jge Block181

 Block180:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block181:
	mov eax,dword ptr [ebp+0x50]
	mov ecx,dword ptr [eax]
	mov ebx,dword ptr [ebp+4]
	lea edx,[ebp+0x20]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x20]
	mov dword ptr [ebp+0x20],0
	call eax
	test eax,eax
	jge Block183

 Block182:
	mov ecx,dword ptr [ebp+0x50]
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ecx
	push eax
	call _com_issue_errorex

 Block183:
	sub edi,dword ptr [ebp-0x44]
	sub esi,dword ptr [ebp+0x58]
	sub edi,dword ptr [ebp-0x30]
	mov eax,dword ptr [ebp+0x40]
	mov edx,dword ptr [ebp-0x7C]
	sub esi,dword ptr [ebp-0x78]
	mov ecx,dword ptr [ebp+0x20]
	push edi
	add edx,eax
	push esi
	neg edx
	push edx
	add ecx,ebx
	neg ecx
	push ecx
	lea edx,[ebp-0x5C]
	push edx
	call SetRect
	cmp dword ptr [ebp+0x54],0
	sete al
	test al,al
	mov byte ptr [ebp+0x4B],al
	sete al
	test al,al
	je Block213

 Block184:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x40],esp
	push 0x3D3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x38
	test esi,esi
	je Block21

 Block185:
	lea ecx,[ebp-0x84]
	push ecx
	mov ecx,esi
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x39
	test ecx,ecx
	je Block21

 Block186:
	lea edx,[ebp-0x1C8]
	push edx
	mov byte ptr [ebp-4],0x3A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x3B
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x38]
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	test eax,eax
	jge Block188

 Block187:
	cmp eax,0x80004002
	jne Block24

 Block188:
	mov edi,8
	mov byte ptr [ebp-4],0x3A
	cmp word ptr [ebp-0x1C8],di
	jne Block191

 Block189:
	xor eax,eax
	mov word ptr [ebp-0x1C8],ax
	mov eax,dword ptr [ebp-0x1C0]
	test eax,eax
	je Block192

 Block190:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block192

 Block191:
	lea ecx,[ebp-0x1C8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block192:
	mov eax,dword ptr [ebp-0x84]
	mov byte ptr [ebp-4],0x2D
	test eax,eax
	je Block194

 Block193:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block194:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push 0x3CA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0xA4]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x3C
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x3D
	test ecx,ecx
	je Block21

 Block195:
	lea eax,[ebp-0x140]
	push eax
	mov byte ptr [ebp-4],0x3E
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x3F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x30]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block197

 Block196:
	cmp eax,0x80004002
	jne Block24

 Block197:
	mov byte ptr [ebp-4],0x3E
	cmp word ptr [ebp-0x140],di
	jne Block200

 Block198:
	mov eax,dword ptr [ebp-0x138]
	xor ecx,ecx
	mov word ptr [ebp-0x140],cx
	test eax,eax
	je Block201

 Block199:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block201

 Block200:
	lea edx,[ebp-0x140]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block201:
	mov eax,dword ptr [ebp-0xA4]
	mov byte ptr [ebp-4],0x2D
	test eax,eax
	je Block203

 Block202:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block203:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x40],esp
	push 0x458
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x40
	test ecx,ecx
	je Block21

 Block204:
	lea edx,[ebp-0x130]
	push edx
	mov byte ptr [ebp-4],0x2D
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x41
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x50]
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	test eax,eax
	jge Block206

 Block205:
	cmp eax,0x80004002
	jne Block24

 Block206:
	mov byte ptr [ebp-4],0x2D
	cmp word ptr [ebp-0x130],di
	jne Block209

 Block207:
	xor eax,eax
	mov word ptr [ebp-0x130],ax
	mov eax,dword ptr [ebp-0x128]
	test eax,eax
	je Block210

 Block208:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block210

 Block209:
	lea ecx,[ebp-0x130]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block210:
	cmp dword ptr [ebp+0x38],0
	je Block21

 Block211:
	mov ebx,dword ptr [ebp+0x50]
	test ebx,ebx
	je Block21

 Block212:
	mov edi,dword ptr [ebp+0x38]
	mov ecx,edi
	call IWzShape2D::Gety
	mov ecx,dword ptr [ebp+0x54]
	mov dword ptr [ebp+0x40],eax
	call IWzCanvas::Getheight
	mov esi,eax
	mov eax,dword ptr [ebp+0x40]
	mov ecx,edi
	sub esi,eax
	call IWzShape2D::Getx
	mov ecx,dword ptr [ebp+0x54]
	mov dword ptr [ebp+0x40],eax
	call IWzCanvas::Getwidth
	mov edi,eax
	mov eax,dword ptr [ebp+0x40]
	mov ecx,ebx
	sub edi,eax
	call IWzShape2D::Gety
	sub esi,eax
	push esi
	mov ecx,ebx
	call IWzShape2D::Getx
	sub edi,eax
	push edi
	mov ecx,ebx
	call IWzShape2D::Gety
	mov esi,dword ptr [ebp+0x38]
	mov ecx,esi
	mov edi,eax
	call IWzShape2D::Gety
	add edi,eax
	neg edi
	push edi
	mov ecx,ebx
	call IWzShape2D::Getx
	mov ecx,esi
	mov edi,eax
	call IWzShape2D::Getx
	add edi,eax
	neg edi
	push edi
	lea edx,[ebp-0x104]
	push edx
	call SetRect
	jmp Block214

 Block213:
	lea eax,[ebp-0x104]
	push eax
	call SetRectEmpty
	mov ebx,dword ptr [ebp+0x50]

 Block214:
	mov edi,dword ptr [ebp+0x54]
	lea ecx,[ebp-0x104]
	push ecx
	lea edx,[ebp-0x5C]
	push edx
	lea eax,[ebp-0x20]
	push eax
	call UnionRect
	lea ecx,[ebp+0x18]
	push 0x3D0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x42
	test eax,eax
	je Block216

 Block215:
	mov eax,dword ptr [eax]
	jmp Block217

 Block216:
	xor eax,eax

 Block217:
	push 0
	lea edx,[ebp+0x5C]
	push edx
	push eax
	call PcCreate_IWzCanvas
	mov ecx,dword ptr [ebp+0x18]
	add esp,0xC
	mov byte ptr [ebp-4],0x2D
	test ecx,ecx
	je Block219

 Block218:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x18],0

 Block219:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0xF4]
	push eax
	call esi
	lea ecx,[ebp-0xF4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block24

 Block220:
	lea edx,[ebp-0xB4]
	push edx
	mov byte ptr [ebp-4],0x43
	call esi
	lea eax,[ebp-0xB4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block24

 Block221:
	mov ecx,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x44
	test ecx,ecx
	je Block21

 Block222:
	lea edx,[ebp-0xF4]
	push edx
	mov edx,dword ptr [ebp-0x14]
	sub edx,dword ptr [ebp-0x1C]
	lea eax,[ebp-0xB4]
	push eax
	mov eax,dword ptr [ebp-0x18]
	sub eax,dword ptr [ebp-0x20]
	push edx
	push eax
	call IWzCanvas::Create
	mov esi,8
	mov byte ptr [ebp-4],0x43
	cmp word ptr [ebp-0xB4],si
	jne Block225

 Block223:
	mov eax,dword ptr [ebp-0xAC]
	xor ecx,ecx
	mov word ptr [ebp-0xB4],cx
	test eax,eax
	je Block226

 Block224:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block226

 Block225:
	lea edx,[ebp-0xB4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block226:
	mov byte ptr [ebp-4],0x2D
	cmp word ptr [ebp-0xF4],si
	jne Block229

 Block227:
	xor eax,eax
	mov word ptr [ebp-0xF4],ax
	mov eax,dword ptr [ebp-0xEC]
	test eax,eax
	je Block230

 Block228:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block230

 Block229:
	lea ecx,[ebp-0xF4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block230:
	mov edx,dword ptr [ebp+0x28]
	cmp dword ptr [ebp-0x64],edx
	jl Block239

 Block231:
	cmp byte ptr [ebp+0x4B],0
	sete al
	test al,al
	je Block234

 Block232:
	mov eax,3
	mov word ptr [ebp-0x1D8],ax
	mov dword ptr [ebp-0x1D0],0xFF
	mov ecx,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x45
	test ecx,ecx
	je Block21

 Block233:
	mov eax,dword ptr [ebp-0x100]
	sub eax,dword ptr [ebp-0x1C]
	lea edx,[ebp-0x1D8]
	push edx
	mov edx,dword ptr [ebp-0x104]
	sub edx,dword ptr [ebp-0x20]
	push edi
	push eax
	push edx
	call IWzCanvas::Copy
	lea ecx,[ebp-0x1D8]
	call Ztl_variant_t::~Ztl_variant_t

 Block234:
	mov eax,3
	mov word ptr [ebp-0xC4],ax
	mov dword ptr [ebp-0xBC],0xFF
	mov ecx,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x46
	test ecx,ecx
	je Block21

 Block235:
	mov eax,dword ptr [ebp+0x2C]
	lea edx,[ebp-0xC4]
	push edx
	mov edx,dword ptr [ebp-0x58]
	sub edx,dword ptr [ebp-0x1C]
	push eax
	mov eax,dword ptr [ebp-0x5C]
	sub eax,dword ptr [ebp-0x20]
	push edx
	push eax
	call IWzCanvas::Copy
	mov byte ptr [ebp-4],0x2D
	cmp word ptr [ebp-0xC4],si
	jne Block238

 Block236:
	mov eax,dword ptr [ebp-0xBC]
	xor ecx,ecx
	mov word ptr [ebp-0xC4],cx
	test eax,eax
	je Block247

 Block237:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block247

 Block238:
	lea edx,[ebp-0xC4]
	push edx
	call dword ptr [ZImports::_VariantClear]
	jmp Block247

 Block239:
	mov eax,3
	mov esi,0xFF
	mov word ptr [ebp-0xE4],ax
	mov dword ptr [ebp-0xDC],esi
	mov ecx,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x47
	test ecx,ecx
	je Block21

 Block240:
	mov eax,dword ptr [ebp+0x2C]
	lea edx,[ebp-0xE4]
	push edx
	mov edx,dword ptr [ebp-0x58]
	sub edx,dword ptr [ebp-0x1C]
	push eax
	mov eax,dword ptr [ebp-0x5C]
	sub eax,dword ptr [ebp-0x20]
	push edx
	push eax
	call IWzCanvas::Copy
	cmp word ptr [ebp-0xE4],8
	mov byte ptr [ebp-4],0x2D
	jne Block243

 Block241:
	mov eax,dword ptr [ebp-0xDC]
	xor ecx,ecx
	mov word ptr [ebp-0xE4],cx
	test eax,eax
	je Block244

 Block242:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block244

 Block243:
	lea edx,[ebp-0xE4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block244:
	cmp byte ptr [ebp+0x4B],0
	sete al
	test al,al
	je Block247

 Block245:
	mov eax,3
	mov word ptr [ebp-0x1F0],ax
	mov dword ptr [ebp-0x1E8],esi
	mov ecx,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x48
	test ecx,ecx
	je Block21

 Block246:
	mov eax,dword ptr [ebp-0x100]
	sub eax,dword ptr [ebp-0x1C]
	lea edx,[ebp-0x1F0]
	push edx
	mov edx,dword ptr [ebp-0x104]
	sub edx,dword ptr [ebp-0x20]
	push edi
	push eax
	push edx
	call IWzCanvas::Copy
	lea ecx,[ebp-0x1F0]
	call Ztl_variant_t::~Ztl_variant_t

 Block247:
	mov ecx,dword ptr [ebp-0x28]
	mov eax,3
	mov word ptr [ebp-0xD4],ax
	mov dword ptr [ebp-0xCC],ecx
	lea edx,[ebp-0xD4]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x28],esp
	push 0x1AA9
	push eax
	mov byte ptr [ebp-4],0x49
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x4A
	test ecx,ecx
	je Block21

 Block248:
	lea edx,[ebp-0x68]
	push edx
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x4B
	test ecx,ecx
	je Block21

 Block249:
	mov byte ptr [ebp-4],0x4C
	call IWzProperty::Putitem
	mov eax,dword ptr [ebp-0x68]
	mov byte ptr [ebp-4],0x49
	test eax,eax
	je Block251

 Block250:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block251:
	cmp word ptr [ebp-0xD4],8
	mov byte ptr [ebp-4],0x2D
	jne Block254

 Block252:
	xor eax,eax
	mov word ptr [ebp-0xD4],ax
	mov eax,dword ptr [ebp-0xCC]
	test eax,eax
	je Block255

 Block253:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block255

 Block254:
	lea ecx,[ebp-0xD4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block255:
	mov ecx,dword ptr [ebp+0x5C]
	test ecx,ecx
	je Block21

 Block256:
	mov eax,dword ptr [ebp-0x20]
	mov edx,dword ptr [ecx]
	neg eax
	push eax
	mov eax,dword ptr [edx+0x70]
	push ecx
	mov esi,ecx
	call eax
	test eax,eax
	jge Block258

 Block257:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block258:
	mov ecx,dword ptr [ebp+0x5C]
	test ecx,ecx
	je Block21

 Block259:
	mov eax,dword ptr [ebp-0x1C]
	mov edx,dword ptr [ecx]
	neg eax
	push eax
	mov eax,dword ptr [edx+0x78]
	push ecx
	mov esi,ecx
	call eax
	test eax,eax
	jge Block261

 Block260:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block261:
	mov ecx,dword ptr [ebp+0x7C]
	call ZList<_x_com_ptr<IWzCanvas>>::AddTail_
	mov esi,dword ptr [eax]
	mov ecx,dword ptr [ebp+0x5C]
	cmp esi,ecx
	je Block266

 Block262:
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x5C]
	test eax,eax
	je Block264

 Block263:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block264:
	test esi,esi
	je Block266

 Block265:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block266:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	mov byte ptr [ebp-4],0x2C
	call eax
	mov eax,dword ptr [ebp+0x38]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x2B
	call edx
	mov eax,dword ptr [ebp+0x30]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x18
	call edx
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x17
	test eax,eax
	je Block268

 Block267:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block268:
	mov byte ptr [ebp-4],0x16
	test edi,edi
	je Block270

 Block269:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block270:
	mov eax,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],0x15
	test eax,eax
	je Block272

 Block271:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block272:
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x14
	test eax,eax
	je Block274

 Block273:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block274:
	cmp word ptr [ebp-0x94],8
	mov byte ptr [ebp-4],0x12
	jne Block277

 Block275:
	xor eax,eax
	mov word ptr [ebp-0x94],ax
	mov eax,dword ptr [ebp-0x8C]
	test eax,eax
	je Block278

 Block276:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block278

 Block277:
	lea ecx,[ebp-0x94]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block278:
	mov ecx,dword ptr [ebp-0x60]
	test ecx,ecx
	je Block280

 Block279:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp-0x60],0

 Block280:
	mov eax,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block282

 Block281:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block282:
	cmp dword ptr [ebp+0x3C],0
	mov byte ptr [ebp-4],0xE
	je Block62

 Block283:
	mov ecx,dword ptr [ebp+0x3C]
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x3C],0
	jmp Block62

 Block284:
	mov dword ptr [ebp-0x68],ebx
	cmp dword ptr [ebp-0x24],ebx
	je Block21

 Block285:
	mov eax,dword ptr [ebp-0x24]
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0xC]
	lea ecx,[ebp-0x68]
	push ecx
	lea ecx,[ebp-0x214]
	push ecx
	push 1
	push eax
	call edx
	test eax,eax
	jne Block518

 Block286:
	lea eax,[ebp-0x214]
	push eax
	lea ecx,[ebp+0x38]
	push ecx
	call DetachBSTR
	mov ebx,dword ptr [ebp+0x38]
	mov esi,dword ptr [ZImports::_InterlockedIncrement]
	add esp,4
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block288

 Block287:
	lea edx,[ebx+8]
	push edx
	call esi

 Block288:
	mov edi,dword ptr [ebp-0x10]
	lea eax,[ebp-0x94]
	mov byte ptr [ebp-4],0x4E
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x4D
	call IWzProperty::Getitem
	cmp word ptr [ebp-0x94],3
	jne Block291

 Block289:
	mov ecx,dword ptr [ebp-0x8C]
	lea edx,[ebp-0x94]
	push edx
	mov dword ptr [ebp-0x74],ecx
	call dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],0xE
	test ebx,ebx
	je Block285

 Block290:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x38],0
	jmp Block285

 Block291:
	xor ecx,ecx
	mov dword ptr [ebp+0x3C],ecx
	mov dword ptr [ebp+0x44],ecx
	mov dword ptr [ebp+0x54],ecx
	mov dword ptr [ebp+0x50],ecx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x34],ecx
	mov dword ptr [ebp+0x58],esp
	mov dword ptr [eax],ebx
	cmp ebx,ecx
	je Block293

 Block292:
	lea eax,[ebx+8]
	push eax
	call esi

 Block293:
	lea ecx,[ebp-0x130]
	push ecx
	mov byte ptr [ebp-4],0x54
	mov ecx,edi
	mov byte ptr [ebp-4],0x53
	call IWzProperty::Getitem
	push eax
	lea edx,[ebp-0x28]
	push edx
	mov byte ptr [ebp-4],0x55
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x56
	mov dword ptr [ebp+0x58],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block295

 Block294:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block295:
	lea ecx,[ebp+0x3C]
	call _x_com_ptr<IWzProperty>::_QueryUnknownComPtr
	test eax,eax
	jge Block297

 Block296:
	cmp eax,0x80004002
	jne Block24

 Block297:
	mov eax,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],0x55
	test eax,eax
	je Block299

 Block298:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block299:
	cmp word ptr [ebp-0x130],8
	mov byte ptr [ebp-4],0x53
	jne Block302

 Block300:
	xor eax,eax
	mov word ptr [ebp-0x130],ax
	mov eax,dword ptr [ebp-0x128]
	test eax,eax
	je Block303

 Block301:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block303

 Block302:
	lea ecx,[ebp-0x130]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block303:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x45A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x57
	test edi,edi
	je Block21

 Block304:
	lea eax,[ebp-0x140]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x53
	call IWzProperty::Getitem
	push eax
	lea ecx,[ebp-0x64]
	push ecx
	mov byte ptr [ebp-4],0x58
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x59
	mov dword ptr [ebp+0x58],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block306

 Block305:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block306:
	lea ecx,[ebp+0x44]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	test eax,eax
	jge Block308

 Block307:
	cmp eax,0x80004002
	jne Block24

 Block308:
	mov eax,dword ptr [ebp-0x64]
	mov byte ptr [ebp-4],0x58
	test eax,eax
	je Block310

 Block309:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block310:
	cmp word ptr [ebp-0x140],8
	mov byte ptr [ebp-4],0x53
	jne Block313

 Block311:
	xor eax,eax
	mov word ptr [ebp-0x140],ax
	mov eax,dword ptr [ebp-0x138]
	test eax,eax
	je Block314

 Block312:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block314

 Block313:
	lea ecx,[ebp-0x140]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block314:
	push 0x3C
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x1AA9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x1C8]
	mov byte ptr [ebp-4],0x5A
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x53
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x5B
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x1C8],8
	mov dword ptr [ebp-0x70],eax
	mov byte ptr [ebp-4],0x53
	jne Block317

 Block315:
	mov eax,dword ptr [ebp-0x1C0]
	xor ecx,ecx
	mov word ptr [ebp-0x1C8],cx
	test eax,eax
	je Block318

 Block316:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block318

 Block317:
	lea edx,[ebp-0x1C8]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block318:
	cmp dword ptr [ebp+0x44],0
	push 0
	push 0
	je Block21

 Block319:
	push ecx
	mov ecx,dword ptr [ebp+0x44]
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	push eax
	call IWzCanvas::Getproperty
	call CSpriteSource::QueryZ
	mov edi,dword ptr [ebp-0x48]
	add esp,0xC
	mov dword ptr [ebp-0x80],eax
	test edi,edi
	je Block323

 Block320:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block322

 Block321:
	add ebx,8
	push ebx
	call esi

 Block322:
	lea ecx,[ebp-0x1B0]
	push ecx
	mov byte ptr [ebp-4],0x5C
	mov ecx,edi
	mov byte ptr [ebp-4],0x53
	call IWzProperty::Getitem
	mov ebx,dword ptr [ebp+0x4C]
	push eax
	lea edx,[ebp-0xA4]
	or ebx,0x20
	push edx
	mov byte ptr [ebp-4],0x5D
	mov dword ptr [ebp+0x4C],ebx
	call get_unknown
	add esp,8
	mov edi,dword ptr [ebp+0x28]
	or ebx,0x40
	mov dword ptr [ebp-4],0x5E
	mov dword ptr [ebp+0x4C],ebx
	jmp Block324

 Block323:
	xor edi,edi
	mov dword ptr [ebp+0x28],edi
	or dword ptr [ebp+0x4C],0x80
	mov ebx,dword ptr [ebp+0x4C]
	lea eax,[ebp+0x28]
	mov dword ptr [ebp-4],0x5F

 Block324:
	mov eax,dword ptr [eax]
	push ecx
	xor esi,esi
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block326

 Block325:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block326:
	lea ecx,[ebp+0x3C]
	call _x_com_ptr<IWzProperty>::_QueryUnknownComPtr
	cmp eax,esi
	jge Block328

 Block327:
	cmp eax,0x80004002
	jne Block24

 Block328:
	mov dword ptr [ebp-4],0x5E
	test bl,bl
	jns Block331

 Block329:
	and ebx,0xFFFFFF7F
	mov dword ptr [ebp+0x4C],ebx
	cmp edi,esi
	je Block331

 Block330:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block331:
	mov dword ptr [ebp-4],0x5D
	test bl,0x40
	je Block334

 Block332:
	mov eax,dword ptr [ebp-0xA4]
	and ebx,0xFFFFFFBF
	mov dword ptr [ebp+0x4C],ebx
	cmp eax,esi
	je Block334

 Block333:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block334:
	mov dword ptr [ebp-4],0x53
	test bl,0x20
	je Block338

 Block335:
	and ebx,0xFFFFFFDF
	cmp word ptr [ebp-0x1B0],8
	mov dword ptr [ebp+0x4C],ebx
	jne Block350

 Block336:
	mov eax,dword ptr [ebp-0x1A8]
	xor ecx,ecx
	mov word ptr [ebp-0x1B0],cx
	cmp eax,esi
	je Block338

 Block337:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block338:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block339:
	mov edi,dword ptr [ebp+0x3C]
	cmp edi,esi
	sete al
	test al,al
	sete al
	test al,al
	je Block361

 Block340:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	push 0x3D4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x60
	cmp edi,esi
	je Block21

 Block341:
	lea ecx,[ebp-0x190]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0x53
	call IWzProperty::Getitem
	push eax
	lea edx,[ebp-0x84]
	push edx
	mov byte ptr [ebp-4],0x61
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x62
	mov dword ptr [ebp+0x58],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block343

 Block342:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block343:
	lea ecx,[ebp+0x54]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	cmp eax,esi
	jge Block345

 Block344:
	cmp eax,0x80004002
	jne Block24

 Block345:
	mov eax,dword ptr [ebp-0x84]
	mov byte ptr [ebp-4],0x61
	cmp eax,esi
	je Block347

 Block346:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block347:
	cmp word ptr [ebp-0x190],8
	mov byte ptr [ebp-4],0x53
	jne Block351

 Block348:
	xor eax,eax
	mov word ptr [ebp-0x190],ax
	mov eax,dword ptr [ebp-0x188]
	cmp eax,esi
	je Block352

 Block349:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block352

 Block350:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp-0x1B0]
	push edx
	call ebx
	jmp Block339

 Block351:
	lea ecx,[ebp-0x190]
	push ecx
	call ebx

 Block352:
	cmp dword ptr [ebp+0x54],esi
	sete al
	test al,al
	je Block359

 Block353:
	mov eax,0x20
	call __chkstk
	mov edx,dword ptr [ebp+0x6C]
	mov eax,esp
	push 0xA
	push eax
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x170]
	mov byte ptr [ebp-4],0x63
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x53
	call IWzProperty::Getitem
	push eax
	lea ecx,[ebp+0x40]
	push ecx
	mov byte ptr [ebp-4],0x64
	call get_unknown
	add esp,8
	push eax
	lea ecx,[ebp+0x54]
	mov byte ptr [ebp-4],0x65
	call _x_com_ptr<IWzCanvas>::op_assign_unknown_com_ptr
	mov eax,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0x64
	cmp eax,esi
	je Block355

 Block354:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block355:
	cmp word ptr [ebp-0x170],8
	mov byte ptr [ebp-4],0x53
	jne Block358

 Block356:
	mov eax,dword ptr [ebp-0x168]
	xor ecx,ecx
	mov word ptr [ebp-0x170],cx
	cmp eax,esi
	je Block359

 Block357:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block359

 Block358:
	lea edx,[ebp-0x170]
	push edx
	call ebx

 Block359:
	mov ecx,dword ptr [ebp+0x54]
	push esi
	push esi
	cmp ecx,esi
	je Block21

 Block360:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	push eax
	call IWzCanvas::Getproperty
	call CSpriteSource::QueryZ
	add esp,0xC
	mov dword ptr [ebp-0x34],eax

 Block361:
	mov dword ptr [ebp+0x30],esi
	mov dword ptr [ebp+0x34],esi
	mov dword ptr [ebp+0x5C],esi
	push esi
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x3D3
	push ecx
	mov byte ptr [ebp-4],0x68
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp+0x44]
	lea edx,[ebp-0x7C]
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x69
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x6A
	cmp ecx,esi
	je Block21

 Block362:
	lea eax,[ebp-0x150]
	push eax
	mov byte ptr [ebp-4],0x6B
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x6C
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x34]
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,esi
	jge Block364

 Block363:
	cmp eax,0x80004002
	jne Block24

 Block364:
	cmp word ptr [ebp-0x150],8
	mov byte ptr [ebp-4],0x6B
	jne Block367

 Block365:
	mov eax,dword ptr [ebp-0x148]
	xor ecx,ecx
	mov word ptr [ebp-0x150],cx
	cmp eax,esi
	je Block368

 Block366:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block368

 Block367:
	lea edx,[ebp-0x150]
	push edx
	call ebx

 Block368:
	mov eax,dword ptr [ebp-0x7C]
	mov byte ptr [ebp-4],0x68
	cmp eax,esi
	je Block370

 Block369:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block370:
	push esi
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	push 0x3CA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x78]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0x6D
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x6E
	cmp ecx,esi
	je Block21

 Block371:
	lea edx,[ebp-0x120]
	push edx
	mov byte ptr [ebp-4],0x6F
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x70
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x30]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block373

 Block372:
	cmp eax,0x80004002
	jne Block24

 Block373:
	mov edi,8
	mov byte ptr [ebp-4],0x6F
	cmp word ptr [ebp-0x120],di
	jne Block376

 Block374:
	xor eax,eax
	mov word ptr [ebp-0x120],ax
	mov eax,dword ptr [ebp-0x118]
	cmp eax,esi
	je Block377

 Block375:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block377

 Block376:
	lea ecx,[ebp-0x120]
	push ecx
	call ebx

 Block377:
	mov eax,dword ptr [ebp-0x78]
	mov byte ptr [ebp-4],0x68
	cmp eax,esi
	je Block379

 Block378:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block379:
	push esi
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x458
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x71
	cmp ecx,esi
	je Block21

 Block380:
	lea edx,[ebp-0x180]
	push edx
	mov byte ptr [ebp-4],0x68
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x72
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x5C]
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,esi
	jge Block382

 Block381:
	cmp eax,0x80004002
	jne Block24

 Block382:
	mov byte ptr [ebp-4],0x68
	cmp word ptr [ebp-0x180],di
	jne Block385

 Block383:
	xor eax,eax
	mov word ptr [ebp-0x180],ax
	mov eax,dword ptr [ebp-0x178]
	cmp eax,esi
	je Block386

 Block384:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block386

 Block385:
	lea ecx,[ebp-0x180]
	push ecx
	call ebx

 Block386:
	mov ebx,dword ptr [ebp+0x34]
	cmp ebx,esi
	je Block21

 Block387:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x28]
	lea eax,[ebp+0x18]
	push eax
	push ebx
	mov dword ptr [ebp+0x18],esi
	call ecx
	cmp eax,esi
	jge Block389

 Block388:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block389:
	mov esi,dword ptr [ebp+0x5C]
	mov edx,dword ptr [ebp+0x18]
	xor edi,edi
	mov dword ptr [ebp-0x30],edx
	cmp esi,edi
	je Block21

 Block390:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x28]
	lea ecx,[ebp+0x20]
	push ecx
	push esi
	mov dword ptr [ebp+0x20],edi
	call edx
	cmp eax,edi
	jge Block392

 Block391:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block392:
	mov eax,dword ptr [ebp+0x20]
	mov dword ptr [ebp+4],edi
	mov edi,dword ptr [ebp+0x44]
	mov ecx,dword ptr [edi]
	lea edx,[ebp+4]
	push edx
	mov dword ptr [ebp+0x58],eax
	mov eax,dword ptr [ecx+0x48]
	push edi
	call eax
	test eax,eax
	jge Block394

 Block393:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block394:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x20]
	mov edi,dword ptr [ebp+4]
	lea edx,[ebp]
	push edx
	push ebx
	mov dword ptr [ebp],0
	call eax
	test eax,eax
	jge Block396

 Block395:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block396:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [esi]
	lea eax,[ebp+8]
	push eax
	mov dword ptr [ebp-0x3C],ecx
	mov ecx,dword ptr [edx+0x20]
	push esi
	mov dword ptr [ebp+8],0
	call ecx
	test eax,eax
	jge Block398

 Block397:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block398:
	mov edx,dword ptr [ebp+8]
	mov esi,dword ptr [ebp+0x44]
	mov eax,dword ptr [esi]
	lea ecx,[ebp+0x14]
	push ecx
	mov dword ptr [ebp-0x44],edx
	mov edx,dword ptr [eax+0x40]
	push esi
	mov dword ptr [ebp+0x14],0
	call edx
	test eax,eax
	jge Block400

 Block399:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block400:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x28]
	mov esi,dword ptr [ebp+0x14]
	lea ecx,[ebp+0x10]
	push ecx
	push ebx
	mov dword ptr [ebp+0x10],0
	call edx
	test eax,eax
	jge Block402

 Block401:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block402:
	mov eax,dword ptr [ebp+0x10]
	mov dword ptr [ebp-0x40],eax
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x1C]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x28]
	mov dword ptr [ebp+0x1C],0
	call eax
	test eax,eax
	jge Block404

 Block403:
	mov ecx,dword ptr [ebp+0x5C]
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ecx
	push eax
	call _com_issue_errorex

 Block404:
	mov edx,dword ptr [ebp+0x1C]
	mov eax,dword ptr [ebx]
	lea ecx,[ebp+0xC]
	push ecx
	mov dword ptr [ebp-0x38],edx
	mov edx,dword ptr [eax+0x20]
	push ebx
	mov dword ptr [ebp+0xC],0
	call edx
	test eax,eax
	jge Block406

 Block405:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block406:
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [eax]
	mov ebx,dword ptr [ebp+0xC]
	lea edx,[ebp+0x24]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x20]
	mov dword ptr [ebp+0x24],0
	call eax
	test eax,eax
	jge Block408

 Block407:
	mov ecx,dword ptr [ebp+0x5C]
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ecx
	push eax
	call _com_issue_errorex

 Block408:
	sub edi,dword ptr [ebp+0x58]
	sub esi,dword ptr [ebp-0x44]
	sub edi,dword ptr [ebp-0x30]
	mov eax,dword ptr [ebp-0x40]
	mov edx,dword ptr [ebp-0x38]
	sub esi,dword ptr [ebp-0x3C]
	mov ecx,dword ptr [ebp+0x24]
	push edi
	add edx,eax
	push esi
	neg edx
	push edx
	add ecx,ebx
	neg ecx
	push ecx
	lea edx,[ebp-0x5C]
	push edx
	call SetRect
	cmp dword ptr [ebp+0x54],0
	sete bl
	test bl,bl
	sete al
	mov byte ptr [ebp+0x4B],bl
	test al,al
	je Block458

 Block409:
	xor edi,edi
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	push 0x3D3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x73
	cmp esi,edi
	je Block21

 Block410:
	lea ecx,[ebp-0x98]
	push ecx
	mov ecx,esi
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x74
	cmp ecx,edi
	je Block21

 Block411:
	lea edx,[ebp-0x1A0]
	push edx
	mov byte ptr [ebp-4],0x75
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x76
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x34]
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,edi
	jge Block413

 Block412:
	cmp eax,0x80004002
	jne Block24

 Block413:
	mov ebx,8
	mov byte ptr [ebp-4],0x75
	cmp word ptr [ebp-0x1A0],bx
	jne Block416

 Block414:
	xor eax,eax
	mov word ptr [ebp-0x1A0],ax
	mov eax,dword ptr [ebp-0x198]
	cmp eax,edi
	je Block417

 Block415:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block417

 Block416:
	lea ecx,[ebp-0x1A0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block417:
	mov eax,dword ptr [ebp-0x98]
	mov byte ptr [ebp-4],0x68
	cmp eax,edi
	je Block419

 Block418:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block419:
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x3CA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0xA0]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x77
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x78
	cmp ecx,edi
	je Block21

 Block420:
	lea eax,[ebp-0x160]
	push eax
	mov byte ptr [ebp-4],0x79
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x7A
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x30]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block422

 Block421:
	cmp eax,0x80004002
	jne Block24

 Block422:
	mov byte ptr [ebp-4],0x79
	cmp word ptr [ebp-0x160],bx
	jne Block425

 Block423:
	mov eax,dword ptr [ebp-0x158]
	xor ecx,ecx
	mov word ptr [ebp-0x160],cx
	cmp eax,edi
	je Block426

 Block424:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block426

 Block425:
	lea edx,[ebp-0x160]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block426:
	mov eax,dword ptr [ebp-0xA0]
	mov byte ptr [ebp-4],0x68
	cmp eax,edi
	je Block428

 Block427:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block428:
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	push 0x458
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x7B
	cmp ecx,edi
	je Block21

 Block429:
	lea edx,[ebp-0x1D8]
	push edx
	mov byte ptr [ebp-4],0x68
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x7C
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x5C]
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,edi
	jge Block431

 Block430:
	cmp eax,0x80004002
	jne Block24

 Block431:
	mov byte ptr [ebp-4],0x68
	cmp word ptr [ebp-0x1D8],bx
	jne Block434

 Block432:
	xor eax,eax
	mov word ptr [ebp-0x1D8],ax
	mov eax,dword ptr [ebp-0x1D0]
	cmp eax,edi
	je Block435

 Block433:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block435

 Block434:
	lea ecx,[ebp-0x1D8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block435:
	mov ebx,dword ptr [ebp+0x34]
	cmp ebx,edi
	je Block21

 Block436:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x28]
	lea eax,[ebp+0x18]
	push eax
	push ebx
	mov dword ptr [ebp+0x18],edi
	call ecx
	cmp eax,edi
	jge Block438

 Block437:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block438:
	mov esi,dword ptr [ebp+0x5C]
	mov edx,dword ptr [ebp+0x18]
	mov dword ptr [ebp-0x30],edx
	cmp esi,edi
	je Block21

 Block439:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x28]
	lea ecx,[ebp+0x20]
	push ecx
	push esi
	mov dword ptr [ebp+0x20],edi
	call edx
	cmp eax,edi
	jge Block441

 Block440:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block441:
	mov eax,dword ptr [ebp+0x20]
	mov dword ptr [ebp+0x58],eax
	mov eax,dword ptr [ebp+0x54]
	mov ecx,dword ptr [eax]
	lea edx,[ebp+4]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x48]
	mov dword ptr [ebp+4],edi
	call eax
	cmp eax,edi
	jge Block443

 Block442:
	mov ecx,dword ptr [ebp+0x54]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block443:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x20]
	mov edi,dword ptr [ebp+4]
	lea eax,[ebp]
	push eax
	push ebx
	mov dword ptr [ebp],0
	call ecx
	test eax,eax
	jge Block445

 Block444:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block445:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [esi]
	lea ecx,[ebp+8]
	push ecx
	mov dword ptr [ebp-0x3C],edx
	mov edx,dword ptr [eax+0x20]
	push esi
	mov dword ptr [ebp+8],0
	call edx
	test eax,eax
	jge Block447

 Block446:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block447:
	mov eax,dword ptr [ebp+8]
	mov esi,dword ptr [ebp+0x54]
	mov ecx,dword ptr [esi]
	lea edx,[ebp+0x14]
	push edx
	mov dword ptr [ebp-0x44],eax
	mov eax,dword ptr [ecx+0x40]
	push esi
	mov dword ptr [ebp+0x14],0
	call eax
	test eax,eax
	jge Block449

 Block448:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block449:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x28]
	mov esi,dword ptr [ebp+0x14]
	lea edx,[ebp+0x10]
	push edx
	push ebx
	mov dword ptr [ebp+0x10],0
	call eax
	test eax,eax
	jge Block451

 Block450:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block451:
	mov ecx,dword ptr [ebp+0x10]
	mov eax,dword ptr [ebp+0x5C]
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x28]
	mov dword ptr [ebp-0x40],ecx
	lea ecx,[ebp+0x1C]
	push ecx
	push eax
	mov dword ptr [ebp+0x1C],0
	call edx
	test eax,eax
	jge Block453

 Block452:
	mov ecx,dword ptr [ebp+0x5C]
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ecx
	push eax
	call _com_issue_errorex

 Block453:
	mov edx,dword ptr [ebp+0x1C]
	mov eax,dword ptr [ebx]
	lea ecx,[ebp+0xC]
	push ecx
	mov dword ptr [ebp-0x38],edx
	mov edx,dword ptr [eax+0x20]
	push ebx
	mov dword ptr [ebp+0xC],0
	call edx
	test eax,eax
	jge Block455

 Block454:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block455:
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [eax]
	mov ebx,dword ptr [ebp+0xC]
	lea edx,[ebp+0x24]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x20]
	mov dword ptr [ebp+0x24],0
	call eax
	test eax,eax
	jge Block457

 Block456:
	mov ecx,dword ptr [ebp+0x5C]
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ecx
	push eax
	call _com_issue_errorex

 Block457:
	sub edi,dword ptr [ebp+0x58]
	sub esi,dword ptr [ebp-0x44]
	sub edi,dword ptr [ebp-0x30]
	mov eax,dword ptr [ebp-0x40]
	sub esi,dword ptr [ebp-0x3C]
	mov edx,dword ptr [ebp-0x38]
	mov ecx,dword ptr [ebp+0x24]
	push edi
	add edx,eax
	push esi
	neg edx
	push edx
	add ecx,ebx
	neg ecx
	push ecx
	lea edx,[ebp-0xF4]
	push edx
	call SetRect
	mov bl,byte ptr [ebp+0x4B]
	jmp Block459

 Block458:
	lea eax,[ebp-0xF4]
	push eax
	call SetRectEmpty

 Block459:
	lea ecx,[ebp-0xF4]
	push ecx
	lea edx,[ebp-0x5C]
	push edx
	lea eax,[ebp-0x20]
	push eax
	call UnionRect
	lea ecx,[ebp-0x4C]
	push 0x3D0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x7D
	test eax,eax
	je Block461

 Block460:
	mov eax,dword ptr [eax]
	jmp Block462

 Block461:
	xor eax,eax

 Block462:
	push 0
	lea edx,[ebp+0x50]
	push edx
	push eax
	call PcCreate_IWzCanvas
	mov ecx,dword ptr [ebp-0x4C]
	add esp,0xC
	mov byte ptr [ebp-4],0x68
	test ecx,ecx
	je Block464

 Block463:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp-0x4C],0

 Block464:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x104]
	push eax
	call esi
	lea ecx,[ebp-0x104]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block24

 Block465:
	lea edx,[ebp-0xD4]
	push edx
	mov byte ptr [ebp-4],0x7E
	call esi
	lea eax,[ebp-0xD4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block24

 Block466:
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x7F
	test ecx,ecx
	je Block21

 Block467:
	lea edx,[ebp-0x104]
	push edx
	mov edx,dword ptr [ebp-0x14]
	sub edx,dword ptr [ebp-0x1C]
	lea eax,[ebp-0xD4]
	push eax
	mov eax,dword ptr [ebp-0x18]
	sub eax,dword ptr [ebp-0x20]
	push edx
	push eax
	call IWzCanvas::Create
	mov esi,8
	mov byte ptr [ebp-4],0x7E
	cmp word ptr [ebp-0xD4],si
	jne Block470

 Block468:
	mov eax,dword ptr [ebp-0xCC]
	xor ecx,ecx
	mov word ptr [ebp-0xD4],cx
	test eax,eax
	je Block471

 Block469:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block471

 Block470:
	lea edx,[ebp-0xD4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block471:
	mov byte ptr [ebp-4],0x68
	cmp word ptr [ebp-0x104],si
	jne Block474

 Block472:
	xor eax,eax
	mov word ptr [ebp-0x104],ax
	mov eax,dword ptr [ebp-0xFC]
	test eax,eax
	je Block475

 Block473:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block475

 Block474:
	lea ecx,[ebp-0x104]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block475:
	mov edx,dword ptr [ebp-0x34]
	cmp dword ptr [ebp-0x80],edx
	jl Block484

 Block476:
	test bl,bl
	sete al
	test al,al
	je Block479

 Block477:
	mov eax,3
	mov word ptr [ebp-0x1F0],ax
	mov dword ptr [ebp-0x1E8],0xFF
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x80
	test ecx,ecx
	je Block21

 Block478:
	mov eax,dword ptr [ebp+0x54]
	lea edx,[ebp-0x1F0]
	push edx
	mov edx,dword ptr [ebp-0xF0]
	sub edx,dword ptr [ebp-0x1C]
	push eax
	mov eax,dword ptr [ebp-0xF4]
	sub eax,dword ptr [ebp-0x20]
	push edx
	push eax
	call IWzCanvas::Copy
	lea ecx,[ebp-0x1F0]
	call Ztl_variant_t::~Ztl_variant_t

 Block479:
	mov ecx,3
	mov word ptr [ebp-0xE4],cx
	mov dword ptr [ebp-0xDC],0xFF
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x81
	test ecx,ecx
	je Block21

 Block480:
	mov eax,dword ptr [ebp-0x58]
	mov edi,dword ptr [ebp+0x44]
	sub eax,dword ptr [ebp-0x1C]
	lea edx,[ebp-0xE4]
	push edx
	mov edx,dword ptr [ebp-0x5C]
	sub edx,dword ptr [ebp-0x20]
	push edi
	push eax
	push edx
	call IWzCanvas::Copy
	cmp word ptr [ebp-0xE4],8
	mov byte ptr [ebp-4],0x68
	jne Block483

 Block481:
	xor eax,eax
	mov word ptr [ebp-0xE4],ax
	mov eax,dword ptr [ebp-0xDC]
	test eax,eax
	je Block492

 Block482:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block492

 Block483:
	lea ecx,[ebp-0xE4]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block492

 Block484:
	mov edx,3
	mov esi,0xFF
	mov word ptr [ebp-0xC4],dx
	mov dword ptr [ebp-0xBC],esi
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x82
	test ecx,ecx
	je Block21

 Block485:
	mov edx,dword ptr [ebp-0x58]
	mov edi,dword ptr [ebp+0x44]
	sub edx,dword ptr [ebp-0x1C]
	lea eax,[ebp-0xC4]
	push eax
	mov eax,dword ptr [ebp-0x5C]
	sub eax,dword ptr [ebp-0x20]
	push edi
	push edx
	push eax
	call IWzCanvas::Copy
	cmp word ptr [ebp-0xC4],8
	mov byte ptr [ebp-4],0x68
	jne Block488

 Block486:
	mov eax,dword ptr [ebp-0xBC]
	xor ecx,ecx
	mov word ptr [ebp-0xC4],cx
	test eax,eax
	je Block489

 Block487:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block489

 Block488:
	lea edx,[ebp-0xC4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block489:
	test bl,bl
	sete al
	test al,al
	je Block492

 Block490:
	mov eax,3
	mov word ptr [ebp-0x224],ax
	mov dword ptr [ebp-0x21C],esi
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x83
	test ecx,ecx
	je Block21

 Block491:
	mov eax,dword ptr [ebp+0x54]
	lea edx,[ebp-0x224]
	push edx
	mov edx,dword ptr [ebp-0xF0]
	sub edx,dword ptr [ebp-0x1C]
	push eax
	mov eax,dword ptr [ebp-0xF4]
	sub eax,dword ptr [ebp-0x20]
	push edx
	push eax
	call IWzCanvas::Copy
	lea ecx,[ebp-0x224]
	call Ztl_variant_t::~Ztl_variant_t

 Block492:
	mov edx,dword ptr [ebp-0x70]
	mov ecx,3
	mov word ptr [ebp-0xB4],cx
	mov dword ptr [ebp-0xAC],edx
	lea eax,[ebp-0xB4]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x1AA9
	push ecx
	mov byte ptr [ebp-4],0x84
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x85
	test ecx,ecx
	je Block21

 Block493:
	lea edx,[ebp-0x9C]
	push edx
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x86
	test ecx,ecx
	je Block21

 Block494:
	mov byte ptr [ebp-4],0x87
	call IWzProperty::Putitem
	mov eax,dword ptr [ebp-0x9C]
	mov byte ptr [ebp-4],0x84
	test eax,eax
	je Block496

 Block495:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block496:
	mov ebx,8
	mov byte ptr [ebp-4],0x68
	cmp word ptr [ebp-0xB4],bx
	jne Block499

 Block497:
	xor eax,eax
	mov word ptr [ebp-0xB4],ax
	mov eax,dword ptr [ebp-0xAC]
	test eax,eax
	je Block500

 Block498:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block500

 Block499:
	lea ecx,[ebp-0xB4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block500:
	mov ecx,dword ptr [ebp+0x50]
	test ecx,ecx
	je Block21

 Block501:
	mov eax,dword ptr [ebp-0x20]
	mov edx,dword ptr [ecx]
	neg eax
	push eax
	mov eax,dword ptr [edx+0x70]
	push ecx
	mov esi,ecx
	call eax
	test eax,eax
	jge Block503

 Block502:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block503:
	mov ecx,dword ptr [ebp+0x50]
	test ecx,ecx
	je Block21

 Block504:
	mov eax,dword ptr [ebp-0x1C]
	mov edx,dword ptr [ecx]
	neg eax
	push eax
	mov eax,dword ptr [edx+0x78]
	push ecx
	mov esi,ecx
	call eax
	test eax,eax
	jge Block506

 Block505:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block506:
	lea ecx,[ebp+0x50]
	push ecx
	mov ecx,dword ptr [ebp+0x7C]
	call ZList<_x_com_ptr<IWzCanvas>>::AddTail_Position
	mov eax,dword ptr [ebp+0x5C]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],0x67
	call eax
	mov eax,dword ptr [ebp+0x34]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x66
	call edx
	mov eax,dword ptr [ebp+0x30]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x53
	call edx
	mov eax,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x52
	test eax,eax
	je Block508

 Block507:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block508:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x51
	test eax,eax
	je Block510

 Block509:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block510:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [ebp-4],0x50
	call ecx
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x4F
	test eax,eax
	je Block512

 Block511:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block512:
	mov byte ptr [ebp-4],0x4D
	cmp word ptr [ebp-0x94],bx
	jne Block515

 Block513:
	mov eax,dword ptr [ebp-0x8C]
	xor ecx,ecx
	mov word ptr [ebp-0x94],cx
	test eax,eax
	je Block516

 Block514:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block516

 Block515:
	lea edx,[ebp-0x94]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block516:
	cmp dword ptr [ebp+0x38],0
	mov byte ptr [ebp-4],0xE
	je Block285

 Block517:
	mov ecx,dword ptr [ebp+0x38]
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x38],0
	jmp Block285

 Block518:
	push 0x30
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	test eax,eax
	je Block520

 Block519:
	mov ecx,eax
	call CActionMan::FACELOOKENTRY::_ctor_default
	mov esi,eax
	jmp Block521

 Block520:
	xor esi,esi

 Block521:
	mov dword ptr [ebp-0x28],esi
	test esi,esi
	je Block523

 Block522:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block523:
	lea edi,[esi+0xC]
	mov ecx,edi
	mov byte ptr [ebp-4],0x88
	call ZList<_x_com_ptr<IWzCanvas>>::RemoveAll
	mov ecx,dword ptr [ebp+0x7C]
	push ecx
	mov ecx,edi
	call ZList<_x_com_ptr<IWzCanvas>>::AddTail_List
	mov ecx,dword ptr [ebp-0x1DC]
	add ecx,0x30
	call ZList<ZRef<CActionMan::FACELOOKENTRY>>::AddTail_
	mov edi,eax
	lea edx,[ebp-0x2C]
	push edx
	mov ecx,edi
	call ZRef<CActionMan::FACELOOKENTRY>::op_assign_copy
	lea eax,[ebp-0x2C]
	push eax
	lea ecx,[ebp-0x1FC]
	push ecx
	mov ecx,dword ptr [ebp-0x108]
	mov dword ptr [esi+0x2C],edi
	call ZMap<FACELOOKCODES, ZRef<CActionMan::FACELOOKENTRY>, FACELOOKCODES>::Insert
	mov dword ptr [esi+0x28],eax
	call timeGetTime
	mov edi,dword ptr [ebp-0x74]
	mov dword ptr [esi+0x24],eax
	lea ecx,[ebp-0x2C]
	mov dword ptr [esi+0x20],edi
	mov byte ptr [ebp-4],0xE
	call ZRef<CActionMan::FACELOOKENTRY>::~ZRef<CActionMan::FACELOOKENTRY>
	mov eax,dword ptr [ebp-0x24]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],0xB
	call eax
	lea ecx,[ebp-0x214]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [ebp-0x48]
	mov byte ptr [ebp-4],5
	test eax,eax
	je Block525

 Block524:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block525:
	mov eax,dword ptr [ebp-0x10]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],4
	call edx
	lea ecx,[ebp-0x1B8]
	mov byte ptr [ebp-4],1
	call ZRef<CActionMan::CHARACTERIMGENTRY>::~ZRef<CActionMan::CHARACTERIMGENTRY>
	lea ecx,[ebp-0x110]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZRef<CActionMan::CHARACTERIMGENTRY>::~ZRef<CActionMan::CHARACTERIMGENTRY>
	mov eax,edi

 Block526:
	lea esp,[ebp-0x234]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x60]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x64
	mov esp,ebp
	pop ebp
	ret 0x14
}
}
// CActionMan::LoadDragonAction
_SUB_EXCEPTION_HANDLER(247C0)
__SUB_CLASS_THIS(000247C0, __thiscall, 33425,  CActionMan, void, long, long, ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY> >&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_247C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x11C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x130]
	mov dword ptr fs:[0],eax
	xor edi,edi
	lea esi,[ecx+0x29C]
	push edi
	lea eax,[esp+0x144]
	push eax
	mov ecx,esi
	call ZMap<long, ZMap<long, ZRef<CActionMan::DRAGONACTIONENTRY>, long>, long>::GetAt
	test eax,eax
	je Block4

 Block1:
	push edi
	lea ecx,[esp+0x144]
	push ecx
	mov ecx,esi
	call ZMap<long, ZMap<long, ZRef<CActionMan::DRAGONACTIONENTRY>, long>, long>::Insert
	lea ecx,[eax+0xC]
	mov dword ptr [esp+0x18],edi
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x148]
	push eax
	mov dword ptr [esp+0x140],edi
	call ZMap<long, ZRef<CActionMan::DRAGONACTIONENTRY>, long>::GetAt
	test eax,eax
	je Block3

 Block2:
	call timeGetTime
	mov edi,dword ptr [esp+0x148]
	mov esi,dword ptr [esp+0x18]
	mov ecx,edi
	mov dword ptr [esi+0x28],eax
	call ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>::RemoveAll
	add esi,0x14
	push esi
	mov ecx,edi
	call ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>::AddTail_List
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x138],0xFFFFFFFF
	call ZRef<CActionMan::DRAGONACTIONENTRY>::~ZRef<CActionMan::DRAGONACTIONENTRY>
	jmp Block162

 Block3:
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x138],0xFFFFFFFF
	call ZRef<CActionMan::DRAGONACTIONENTRY>::~ZRef<CActionMan::DRAGONACTIONENTRY>

 Block4:
	push 0x2C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,edi
	je Block6

 Block5:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3 // TODO: 		mov dword ptr [eax],offset CActionMan::DRAGONACTIONENTRY::`vftable'
	int 3 // TODO: 		mov dword ptr [eax+0x14],offset ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>::`vftable'
	mov dword ptr [eax+0x1C],edi
	mov dword ptr [eax+0x20],edi
	mov dword ptr [eax+0x24],edi
	mov ebp,eax
	mov dword ptr [esp+0x44],eax
	jmp Block7

 Block6:
	xor ebp,ebp
	mov dword ptr [esp+0x44],ebp

 Block7:
	mov dword ptr [esp+0x12C],ebp
	cmp ebp,edi
	je Block9

 Block8:
	lea ecx,[ebp+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov esi,dword ptr [esp+0x144]
	mov dword ptr [esp+0x138],1
	mov dword ptr [ebp+0xC],esi
	mov dword ptr [esp+0x20],edi
	lea edx,[esp+0x1C]
	push 0x1330
	push edx
	mov byte ptr [esp+0x140],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x140]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x144],3
	call ZXString16::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x138],2
	cmp eax,edi
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block11:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x90]
	push eax
	call ebx
	lea ecx,[esp+0x90]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	lea edx,[esp+0xB0]
	push edx
	mov byte ptr [esp+0x13C],4
	call ebx
	lea eax,[esp+0xB0]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	mov eax,dword ptr [esp+0x20]
	push edi
	push edi
	lea ecx,[esp+0x98]
	push ecx
	lea edx,[esp+0xBC]
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,5
	push eax
	mov byte ptr [esp+0x150],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x14C],6
	cmp dword ptr [_D_G_RM],edi
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	lea ecx,[esp+0x12C]
	push ecx
	mov byte ptr [esp+0x150],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x140],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x34]
	mov dword ptr [esp+0x34],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block20

 Block18:
	cmp eax,0x80004002
	je Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	cmp word ptr [esp+0x118],8
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x138],9
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x120]
	xor edx,edx
	mov word ptr [esp+0x118],dx
	cmp eax,edi
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea eax,[esp+0x118]
	push eax
	call ebx

 Block24:
	cmp word ptr [esp+0xB0],8
	mov byte ptr [esp+0x138],0xA
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0xB8]
	xor ecx,ecx
	mov word ptr [esp+0xB0],cx
	cmp eax,edi
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea edx,[esp+0xB0]
	push edx
	call ebx

 Block28:
	cmp word ptr [esp+0x90],8
	mov byte ptr [esp+0x138],0xB
	jne Block31

 Block29:
	xor eax,eax
	mov word ptr [esp+0x90],ax
	mov eax,dword ptr [esp+0x98]
	cmp eax,edi
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea ecx,[esp+0x90]
	push ecx
	call ebx

 Block32:
	mov edi,dword ptr [esp+0x30]
	xor ebx,ebx
	cmp edi,ebx
	sete al
	test al,al
	je Block39

 Block33:
	mov byte ptr [esp+0x138],2
	cmp edi,ebx
	je Block35

 Block34:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block35:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x138],1
	cmp eax,ebx
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block37:
	lea esi,[ebp+4]
	push esi
	mov dword ptr [esp+0x13C],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block162

 Block38:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebp
	call eax
	jmp Block162

 Block39:
	mov eax,dword ptr [esi*4+_D_S_SDRAGONACTION]
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block41

 Block40:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block41:
	mov byte ptr [esp+0x144],0xC
	cmp edi,ebx
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	lea ecx,[esp+0xD4]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x148],0xB
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x140],0xD
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x30],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block46

 Block44:
	cmp eax,0x80004002
	je Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	cmp word ptr [esp+0xC8],8
	mov byte ptr [esp+0x138],0xF
	jne Block49

 Block47:
	mov eax,dword ptr [esp+0xD0]
	xor edx,edx
	mov word ptr [esp+0xC8],dx
	cmp eax,ebx
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea eax,[esp+0xC8]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block50:
	mov esi,dword ptr [esp+0x2C]
	cmp esi,ebx
	sete al
	test al,al
	je Block56

 Block51:
	mov byte ptr [esp+0x138],0xB
	cmp esi,ebx
	je Block53

 Block52:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block53:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [esp+0x13C],2
	call ecx
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x138],1
	cmp eax,ebx
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block55:
	lea ecx,[esp+0x128]
	mov dword ptr [esp+0x138],0xFFFFFFFF
	call ZRef<CActionMan::DRAGONACTIONENTRY>::~ZRef<CActionMan::DRAGONACTIONENTRY>
	jmp Block162

 Block56:
	lea edx,[esp+0xA0]
	push edx
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [esp+0x138],0x10
	cmp esi,ebx
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	lea eax,[esp+0x84]
	push eax
	mov ecx,esi
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x13C],0x11
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [esp+0x84]
	mov byte ptr [esp+0x138],0x13
	cmp eax,ebx
	je Block60

 Block59:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block60:
	mov dword ptr [esp+0x7C],ebx
	cmp dword ptr [esp+0x3C],ebx
	je Block16

 Block61:
	lea ecx,[ecx]

 Block62:
	mov ebp,dword ptr [esp+0x3C]
	mov eax,dword ptr [ebp]
	mov eax,dword ptr [eax+0xC]
	lea ecx,[esp+0x7C]
	push ecx
	lea edx,[esp+0xA4]
	push edx
	push 1
	push ebp
	call eax
	test eax,eax
	jne Block144

 Block63:
	lea ecx,[esp+0xA0]
	push ecx
	lea edx,[esp+0x28]
	push edx
	call DetachBSTR
	mov esi,dword ptr [esp+0x2C]
	add esp,4
	xor ebp,ebp
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [eax],esi
	cmp esi,ebp
	je Block65

 Block64:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block65:
	lea ecx,[esp+0x6C]
	push ecx
	mov ecx,dword ptr [esp+0x34]
	mov byte ptr [esp+0x140],0x15
	mov byte ptr [esp+0x140],0x14
	call IWzProperty::Getitem
	lea edx,[esp+0x68]
	push edx
	lea eax,[esp+0x7C]
	push eax
	mov byte ptr [esp+0x140],0x16
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [esp+0x13C],0x17
	mov dword ptr [esp+0x38],ebp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block67

 Block66:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block67:
	lea ecx,[esp+0x38]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	cmp eax,ebp
	jge Block69

 Block68:
	cmp eax,0x80004002
	jne Block12

 Block69:
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0x138],0x19
	cmp eax,ebp
	je Block71

 Block70:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block71:
	mov edi,dword ptr [esp+0x34]
	cmp edi,ebp
	sete al
	test al,al
	je Block80

 Block72:
	mov byte ptr [esp+0x138],0x16
	cmp edi,ebp
	je Block74

 Block73:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block74:
	cmp word ptr [esp+0x68],8
	mov byte ptr [esp+0x138],0x14
	jne Block77

 Block75:
	mov eax,dword ptr [esp+0x70]
	xor edx,edx
	mov word ptr [esp+0x68],dx
	cmp eax,ebp
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea eax,[esp+0x68]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block78:
	mov byte ptr [esp+0x138],0x13
	cmp esi,ebp
	je Block62

 Block79:
	mov ecx,esi
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x24],ebp
	jmp Block62

 Block80:
	push 0x4C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,ebp
	je Block82

 Block81:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3 // TODO: 		mov dword ptr [eax],offset CActionMan::SUMMONEDACTIONFRAMEENTRY::`vftable'
	mov dword ptr [eax+0xC],ebp
	mov ebx,eax
	mov dword ptr [esp+0x28],eax
	jmp Block83

 Block82:
	xor ebx,ebx
	mov dword ptr [esp+0x28],ebx

 Block83:
	cmp edi,ebp
	je Block16

 Block84:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,edi
	call IWzCanvas::Getproperty
	mov esi,dword ptr [ebx+0xC]
	mov byte ptr [esp+0x138],0x1A
	cmp esi,edi
	je Block87

 Block85:
	mov dword ptr [ebx+0xC],edi
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax
	cmp esi,ebp
	je Block87

 Block86:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block87:
	push 0x78
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1AA9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [esp+0x24]
	mov byte ptr [esp+0x140],0x1B
	cmp esi,ebp
	je Block16

 Block88:
	lea ecx,[esp+0x100]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x144],0x1A
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x140],0x1C
	call get_int32
	add esp,8
	cmp word ptr [esp+0xF8],8
	mov dword ptr [ebx+0x40],eax
	mov byte ptr [esp+0x138],0x1A
	jne Block91

 Block89:
	mov eax,dword ptr [esp+0x100]
	xor edx,edx
	mov word ptr [esp+0xF8],dx
	cmp eax,ebp
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea eax,[esp+0xF8]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block92:
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A98
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x88]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x144],0x1D
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x140],0x1E
	cmp ecx,ebp
	je Block16

 Block93:
	lea eax,[esp+0xE0]
	push eax
	mov byte ptr [esp+0x144],0x1F
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x140],0x20
	call get_int32
	add esp,8
	cmp word ptr [esp+0xD8],8
	mov dword ptr [ebx+0x44],eax
	mov byte ptr [esp+0x138],0x1F
	jne Block96

 Block94:
	mov eax,dword ptr [esp+0xE0]
	xor ecx,ecx
	mov word ptr [esp+0xD8],cx
	cmp eax,ebp
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea edx,[esp+0xD8]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block97:
	mov eax,dword ptr [esp+0x80]
	mov byte ptr [esp+0x138],0x1A
	cmp eax,ebp
	je Block99

 Block98:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block99:
	push 0xFFFFFFFF
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A99
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x94]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x144],0x21
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x140],0x22
	cmp ecx,ebp
	je Block16

 Block100:
	lea edx,[esp+0xF0]
	push edx
	mov byte ptr [esp+0x144],0x23
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x140],0x24
	call get_int32
	mov edi,8
	add esp,8
	mov dword ptr [ebx+0x48],eax
	mov byte ptr [esp+0x138],0x23
	cmp word ptr [esp+0xE8],di
	jne Block103

 Block101:
	xor eax,eax
	mov word ptr [esp+0xE8],ax
	mov eax,dword ptr [esp+0xF0]
	cmp eax,ebp
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea ecx,[esp+0xE8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block104:
	mov eax,dword ptr [esp+0x8C]
	mov byte ptr [esp+0x138],0x1A
	cmp eax,ebp
	je Block106

 Block105:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block106:
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1ABE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x114]
	mov byte ptr [esp+0x144],0x25
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x148],0x1A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x140],0x26
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x50]
	mov dword ptr [esp+0x50],ebp
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,ebp
	jge Block108

 Block107:
	cmp eax,0x80004002
	jne Block12

 Block108:
	mov byte ptr [esp+0x138],0x28
	cmp word ptr [esp+0x108],di
	jne Block111

 Block109:
	xor eax,eax
	mov word ptr [esp+0x108],ax
	mov eax,dword ptr [esp+0x110]
	cmp eax,ebp
	je Block112

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block111:
	lea ecx,[esp+0x108]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block112:
	push ebp
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1ACB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x64]
	mov byte ptr [esp+0x144],0x29
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x148],0x28
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x140],0x2A
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x3C]
	mov dword ptr [esp+0x3C],ebp
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,ebp
	jge Block114

 Block113:
	cmp eax,0x80004002
	jne Block12

 Block114:
	mov byte ptr [esp+0x138],0x2C
	cmp word ptr [esp+0x58],di
	jne Block117

 Block115:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	cmp eax,ebp
	je Block118

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block118

 Block117:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block118:
	mov ebp,dword ptr [esp+0x4C]
	mov edi,dword ptr [esp+0x38]
	xor ebx,ebx
	cmp ebp,ebx
	sete al
	test al,al
	sete al
	test al,al
	je Block131

 Block119:
	cmp edi,ebx
	sete al
	test al,al
	sete al
	test al,al
	je Block131

 Block120:
	cmp edi,ebx
	je Block16

 Block121:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x28]
	lea ecx,[esp+0x40]
	push ecx
	push edi
	mov dword ptr [esp+0x48],ebx
	call edx
	cmp eax,ebx
	jge Block123

 Block122:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block123:
	mov eax,dword ptr [esp+0x40]
	mov ecx,dword ptr [edi]
	lea edx,[esp+0x50]
	push edx
	mov dword ptr [esp+0x8C],eax
	mov eax,dword ptr [ecx+0x20]
	push edi
	mov dword ptr [esp+0x58],ebx
	call eax
	cmp eax,ebx
	jge Block125

 Block124:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block125:
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr [esp+0x14],ecx
	cmp ebp,ebx
	je Block16

 Block126:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x28]
	lea eax,[esp+0x48]
	push eax
	push ebp
	mov dword ptr [esp+0x50],ebx
	call ecx
	cmp eax,ebx
	jge Block128

 Block127:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebp
	push eax
	call _com_issue_errorex

 Block128:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x20]
	mov esi,dword ptr [esp+0x48]
	lea eax,[esp+0x54]
	push eax
	push ebp
	mov dword ptr [esp+0x5C],ebx
	call ecx
	cmp eax,ebx
	jge Block130

 Block129:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebp
	push eax
	call _com_issue_errorex

 Block130:
	mov edx,dword ptr [esp+0x88]
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x54]
	push edx
	mov edx,dword ptr [esp+0x2C]
	push eax
	push esi
	push ecx
	add edx,0x10
	push edx
	call SECRECT::SetRect
	add esp,0x14
	jmp Block132

 Block131:
	mov esi,dword ptr [esp+0x28]
	add esi,0x10
	mov edx,esi
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xC]
	xor ecx,ecx
	mov dword ptr [esi+8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x18]
	xor ecx,ecx
	mov dword ptr [esi+0x14],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x24]
	xor ecx,ecx
	mov dword ptr [esi+0x20],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2C],eax

 Block132:
	mov esi,dword ptr [esp+0x28]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0xC4],esi
	add esi,4
	push esi
	call ebx
	mov ecx,dword ptr [esp+0x148]
	mov byte ptr [esp+0x138],0x2D
	call ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>::AddTail_
	lea ecx,[esp+0xC0]
	push ecx
	mov ecx,eax
	call ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>::op_assign_copy
	push esi
	mov byte ptr [esp+0x13C],0x2C
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block134

 Block133:
	push esi
	call ebx
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block134:
	mov dword ptr [esp+0xC4],0
	mov byte ptr [esp+0x138],0x28
	test edi,edi
	je Block136

 Block135:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block136:
	mov byte ptr [esp+0x138],0x1A
	test ebp,ebp
	je Block138

 Block137:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block138:
	mov eax,dword ptr [esp+0x1C]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0x13C],0x19
	call eax
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x13C],0x16
	call edx
	cmp word ptr [esp+0x68],8
	mov byte ptr [esp+0x138],0x14
	jne Block141

 Block139:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	test eax,eax
	je Block142

 Block140:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block142

 Block141:
	lea ecx,[esp+0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block142:
	cmp dword ptr [esp+0x24],0
	mov byte ptr [esp+0x138],0x13
	je Block62

 Block143:
	mov ecx,dword ptr [esp+0x24]
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x24],0
	jmp Block62

 Block144:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x49F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x34]
	lea eax,[esp+0x60]
	mov byte ptr [esp+0x140],0x2E
	push eax
	mov byte ptr [esp+0x144],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x140],0x2F
	call get_int32
	add esp,8
	mov esi,eax
	neg esi
	sbb esi,esi
	neg esi
	cmp word ptr [esp+0x58],8
	mov byte ptr [esp+0x138],0x13
	jne Block147

 Block145:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	test eax,eax
	je Block148

 Block146:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block148

 Block147:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block148:
	mov edi,dword ptr [esp+0x148]
	test esi,esi
	je Block154

 Block149:
	mov esi,dword ptr [edi+0x10]
	mov dword ptr [esp+0x1C],esi
	test esi,esi
	je Block154

 Block150:
	cmp esi,dword ptr [edi+0xC]
	je Block153

 Block151:
	cmp esi,dword ptr [edi+0x10]
	je Block153

 Block152:
	mov ecx,edi
	call ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>::AddTail_
	push esi
	mov ecx,eax
	call ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>::op_assign_copy

 Block153:
	lea eax,[esp+0x1C]
	push eax
	call ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>::GetPrev
	mov esi,dword ptr [esp+0x20]
	add esp,4
	test esi,esi
	jne Block150

 Block154:
	mov ebx,dword ptr [esp+0x44]
	lea esi,[ebx+0x14]
	mov ecx,esi
	call ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>::RemoveAll
	push edi
	mov ecx,esi
	call ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>::AddTail_List
	call timeGetTime
	mov dword ptr [ebx+0x28],eax
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov byte ptr [esp+0x13C],0x10
	call edx
	cmp word ptr [esp+0xA0],8
	mov byte ptr [esp+0x138],0xF
	jne Block157

 Block155:
	xor eax,eax
	mov word ptr [esp+0xA0],ax
	mov eax,dword ptr [esp+0xA8]
	test eax,eax
	je Block158

 Block156:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block158

 Block157:
	lea ecx,[esp+0xA0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block158:
	mov eax,dword ptr [esp+0x2C]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0x13C],0xB
	call eax
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x13C],2
	call edx
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x138],1
	test eax,eax
	je Block160

 Block159:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block160:
	lea esi,[ebx+4]
	push esi
	mov dword ptr [esp+0x13C],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block162

 Block161:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block162:
	mov ecx,dword ptr [esp+0x130]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x128
	ret 0xC
}
}
// CActionMan::MORPHACTIONENTRY::~MORPHACTIONENTRY
_SUB_EXCEPTION_HANDLER(172A0)
__SUB_CLASS_THIS0(000172A0, __thiscall, 33854,  CActionMan::MORPHACTIONENTRY, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_172A0
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
	lea ecx,[esi+0x14]
	mov dword ptr [esp+0x14],0
	call ZArray<ZRef<CActionMan::MORPHACTIONFRAMEENTRY>>::RemoveAll
	int 3 // TODO: 		mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CActionMan::GetSummonedProp
_SUB_EXCEPTION_HANDLER(1B830)
__SUB_CLASS_THIS(0001B830, __thiscall, 33420,  CActionMan, _x_com_ptr<IWzProperty>*, _x_com_ptr<IWzProperty>*, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1B830
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x48]
	mov dword ptr fs:[0],eax
	xor edi,edi
	mov dword ptr [esp+0x14],edi
	mov eax,dword ptr [esp+0x5C]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push eax
	call CSkillInfo::GetSkill
	cmp eax,edi
	jne Block2

 Block1:
	mov eax,dword ptr [esp+0x58]
	mov dword ptr [eax],edi
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x44
	ret 0xC

 Block2:
	lea ecx,[esp+0x5C]
	push ecx
	mov ecx,eax
	call SKILLENTRY::GetSummonedUOL
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push edx
	mov dword ptr [esp+0x54],edi
	call esi
	lea eax,[esp+0x28]
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
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0x54],1
	call esi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	push ecx
	mov ecx,dword ptr [esp+0x68]
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],ecx
	cmp ecx,edi
	je Block8

 Block7:
	add ecx,8
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	mov byte ptr [esp+0x5C],3
	cmp dword ptr [_D_G_RM],edi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea edx,[esp+0x44]
	mov byte ptr [esp+0x5C],2
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	push eax
	lea eax,[esp+0x14]
	push eax
	mov byte ptr [esp+0x58],4
	call get_unknown
	mov ebp,dword ptr [esp+0x60]
	add esp,4
	mov dword ptr [ebp],edi
	mov eax,dword ptr [eax]
	mov ecx,esp
	mov byte ptr [esp+0x54],5
	mov dword ptr [esp+0x5C],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block12:
	mov ecx,ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block15

 Block13:
	cmp eax,0x80004002
	je Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x50],4
	cmp eax,edi
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block17:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x50],2
	cmp word ptr [esp+0x38],si
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x38]
	push ecx
	call edi

 Block21:
	mov byte ptr [esp+0x50],1
	cmp word ptr [esp+0x18],si
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea eax,[esp+0x18]
	push eax
	call edi

 Block25:
	mov byte ptr [esp+0x50],0
	cmp word ptr [esp+0x28],si
	jne Block28

 Block26:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea edx,[esp+0x28]
	push edx
	call edi

 Block29:
	mov ecx,dword ptr [esp+0x5C]
	test ecx,ecx
	je Block31

 Block30:
	call _xbstr_t::Data_t::Release

 Block31:
	mov eax,ebp
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x44
	ret 0xC
}
}
// ZStrUtil___Conv
__SUB(00006250, __cdecl, 146391,  char*, const wchar_t*, char*, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+0xC]
	mov ecx,dword ptr [esp+4]
	push esi
	mov esi,dword ptr [esp+0xC]
	push 0
	push 0
	push 0x3FFFFFFF
	push esi
	push eax
	push ecx
	push 0
	push 0
	call WideCharToMultiByte
	mov eax,esi
	pop esi
	ret
}
}
// CActionMan::DRAGONACTIONENTRY::~DRAGONACTIONENTRY
_SUB_EXCEPTION_HANDLER(138F0)
__SUB_CLASS_THIS0(000138F0, __thiscall, 37133,  CActionMan::DRAGONACTIONENTRY, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_138F0
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
	lea ecx,[esi+0x14]
	mov dword ptr [esp+0x14],0
	int 3 // TODO: 		mov dword ptr [ecx],offset ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>::RemoveAll
	int 3 // TODO: 		mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CActionMan::MOBACTIONFRAMEENTRY::~MOBACTIONFRAMEENTRY
_SUB_EXCEPTION_HANDLER(136A0)
__SUB_CLASS_THIS0(000136A0, __thiscall, 33539,  CActionMan::MOBACTIONFRAMEENTRY, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_136A0
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
	lea ecx,[esi+0x44]
	mov dword ptr [esp+0x14],2
	call ZArray<SECRECT>::RemoveAll
	lea ecx,[esi+0x40]
	mov byte ptr [esp+0x14],1
	call ZArray<SECRECT>::RemoveAll
	mov eax,dword ptr [esi+0xC]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	int 3 // TODO: 		mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CActionMan::GetShadowPartnerProp
_SUB_EXCEPTION_HANDLER(1BA60)
__SUB_CLASS_THIS(0001BA60, __thiscall, 33423,  CActionMan, _x_com_ptr<IWzProperty>*, _x_com_ptr<IWzProperty>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1BA60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x48]
	mov dword ptr fs:[0],eax
	xor edi,edi
	mov dword ptr [esp+0x14],edi
	mov eax,dword ptr [esp+0x5C]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push eax
	call CSkillInfo::GetSkill
	cmp eax,edi
	jne Block2

 Block1:
	mov eax,dword ptr [esp+0x58]
	mov dword ptr [eax],edi
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x44
	ret 8

 Block2:
	push edi
	lea ecx,[esp+0x60]
	push ecx
	mov ecx,eax
	call SKILLENTRY::GetSpecialUOL
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push edx
	mov dword ptr [esp+0x54],edi
	call esi
	lea eax,[esp+0x28]
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
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0x54],1
	call esi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	push ecx
	mov ecx,dword ptr [esp+0x68]
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],ecx
	cmp ecx,edi
	je Block8

 Block7:
	add ecx,8
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	mov byte ptr [esp+0x5C],3
	cmp dword ptr [_D_G_RM],edi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea edx,[esp+0x44]
	mov byte ptr [esp+0x5C],2
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	push eax
	lea eax,[esp+0x14]
	push eax
	mov byte ptr [esp+0x58],4
	call get_unknown
	mov ebp,dword ptr [esp+0x60]
	add esp,4
	mov dword ptr [ebp],edi
	mov eax,dword ptr [eax]
	mov ecx,esp
	mov byte ptr [esp+0x54],5
	mov dword ptr [esp+0x5C],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block12:
	mov ecx,ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block15

 Block13:
	cmp eax,0x80004002
	je Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x50],4
	cmp eax,edi
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block17:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x50],2
	cmp word ptr [esp+0x38],si
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x38]
	push ecx
	call edi

 Block21:
	mov byte ptr [esp+0x50],1
	cmp word ptr [esp+0x18],si
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea eax,[esp+0x18]
	push eax
	call edi

 Block25:
	mov byte ptr [esp+0x50],0
	cmp word ptr [esp+0x28],si
	jne Block28

 Block26:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea edx,[esp+0x28]
	push edx
	call edi

 Block29:
	mov ecx,dword ptr [esp+0x5C]
	test ecx,ecx
	je Block31

 Block30:
	call _xbstr_t::Data_t::Release

 Block31:
	mov eax,ebp
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x44
	ret 8
}
}
// CActionMan::LoadNpcAction
_SUB_EXCEPTION_HANDLER(20AE0)
__SUB_CLASS_THIS(00020AE0, __thiscall, 33406,  CActionMan, void, CNpcTemplate*, long, ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY> >&, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_20AE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xA0
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xB4]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x24],ecx
	mov ebp,dword ptr [esp+0xD0]
	mov ecx,dword ptr [esp+0xC4]
	mov esi,dword ptr [ecx]
	cmp ebp,0xFFFFFFFE
	jne Block2

 Block1:
	push 0
	call CNpcTemplate::CalcClientActionSetIdx
	mov ebp,eax

 Block2:
	mov edi,dword ptr [esp+0xC8]
	lea eax,[ebp+1]
	cdq
	mov ebx,eax
	xor eax,eax
	or ebx,eax
	mov edx,esi
	xor ecx,ecx
	shl edx,8
	or ecx,edx
	mov eax,edi
	cdq
	or ebx,edx
	mov dword ptr [esp+0x74],ebx
	or ecx,eax
	xor ebx,ebx
	mov dword ptr [esp+0x70],ecx
	mov dword ptr [esp+0x3C],ebx
	mov ecx,dword ptr [esp+0x24]
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x74]
	add ecx,0x17C
	push eax
	mov dword ptr [esp+0xC4],ebx
	mov dword ptr [esp+0x90],ecx
	call ZMap<__int64, ZRef<CActionMan::NPCACTIONENTRY>, __int64>::GetAt
	test eax,eax
	je Block4

 Block3:
	call timeGetTime
	mov edi,dword ptr [esp+0xCC]
	mov esi,dword ptr [esp+0x3C]
	mov ecx,edi
	mov dword ptr [esi+0x28],eax
	call ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::RemoveAll
	lea ecx,[esi+0x14]
	push ecx
	mov ecx,edi
	call ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::AddTail_List
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0xC0],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	jmp Block112

 Block4:
	push 0x34
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,ebx
	je Block6

 Block5:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	mov dword ptr [eax],0
	mov dword ptr [eax+0x14],0
	mov dword ptr [eax+0x1C],ebx
	mov dword ptr [eax+0x20],ebx
	mov dword ptr [eax+0x24],ebx
	mov dword ptr [esp+0x18],eax
	jmp Block7

 Block6:
	mov dword ptr [esp+0x18],ebx
	mov eax,ebx

 Block7:
	mov dword ptr [esp+0x48],eax
	cmp eax,ebx
	je Block9

 Block8:
	mov ecx,dword ptr [esp+0x18]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x24]
	push esi
	lea edx,[esp+0x2C]
	mov dword ptr [eax+0xC],esi
	push edx
	mov byte ptr [esp+0xC4],1
	mov dword ptr [eax+0x10],edi
	call CActionMan::GetNpcImgEntry
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xBC],2
	cmp eax,ebx
	je Block37

 Block10:
	cmp ebp,ebx
	jge Block12

 Block11:
	add eax,0xC
	jmp Block13

 Block12:
	mov ecx,dword ptr [esp+0xC4]
	push ebp
	sub ecx,0xFFFFFF80
	call ZList<CNpcTemplate::CLIENT_ACTION_SET>::FindIndex

 Block13:
	mov ebp,dword ptr [eax]
	mov dword ptr [esp+0x84],ebp
	cmp ebp,ebx
	je Block15

 Block14:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+4]
	push ebp
	call ecx

 Block15:
	cmp edi,2
	jge Block17

 Block16:
	lea eax,[edi*4+ActionData::m_sNpcAction]
	jmp Block18

 Block17:
	mov eax,dword ptr [esp+0xC4]
	mov ecx,dword ptr [eax+0x78]
	lea edx,[edi+edi*8-0x12]
	lea eax,[ecx+edx*4]

 Block18:
	mov edi,dword ptr [eax]
	mov dword ptr [esp+0x6C],edi
	cmp edi,ebx
	je Block20

 Block19:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block20:
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],edi
	cmp edi,ebx
	je Block22

 Block21:
	lea eax,[edi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block22:
	mov byte ptr [esp+0xC8],5
	cmp ebp,ebx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea ecx,[esp+0xB0]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0xCC],4
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block27

 Block25:
	cmp eax,0x80004002
	je Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	cmp word ptr [esp+0xA4],8
	mov byte ptr [esp+0xBC],8
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0xAC]
	xor edx,edx
	mov word ptr [esp+0xA4],dx
	cmp eax,ebx
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea eax,[esp+0xA4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov esi,dword ptr [esp+0x1C]
	cmp esi,ebx
	sete al
	cmp al,bl
	je Block38

 Block32:
	mov byte ptr [esp+0xBC],4
	cmp esi,ebx
	je Block34

 Block33:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block34:
	cmp edi,ebx
	je Block36

 Block35:
	mov ecx,edi
	call _xbstr_t::Data_t::Release

 Block36:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0xC0],2
	call ecx

 Block37:
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0xBC],1
	call ZRef<CActionMan::NPCIMGENTRY>::~ZRef<CActionMan::NPCIMGENTRY>
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0xBC],bl
	call ZRef<CActionMan::NPCACTIONENTRY>::~ZRef<CActionMan::NPCACTIONENTRY>
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0xBC],0xFFFFFFFF
	call ZRef<CActionMan::NPCACTIONENTRY>::~ZRef<CActionMan::NPCACTIONENTRY>
	jmp Block114

 Block38:
	mov ecx,dword ptr [esp+0xCC]
	call ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::RemoveAll
	lea edx,[esp+0x8C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [esp+0xBC],9
	cmp esi,ebx
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	lea eax,[esp+0x7C]
	push eax
	mov ecx,esi
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0xC0],0xA
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [esp+0x7C]
	mov byte ptr [esp+0xBC],0xC
	cmp eax,ebx
	je Block42

 Block41:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block42:
	mov dword ptr [esp+0x80],ebx
	cmp dword ptr [esp+0x30],ebx
	je Block23

 Block43:
	jmp Block45

 Block45:
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x80]
	push edx
	lea edx,[esp+0x90]
	push edx
	push 1
	push eax
	mov eax,dword ptr [ecx+0xC]
	call eax
	test eax,eax
	jne Block87

 Block46:
	lea ecx,[esp+0x8C]
	push ecx
	lea edx,[esp+0x24]
	push edx
	call DetachBSTR
	mov esi,dword ptr [esp+0x28]
	add esp,4
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [eax],esi
	cmp esi,ebx
	je Block48

 Block47:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block48:
	lea ecx,[esp+0x60]
	push ecx
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0xC4],0xE
	mov byte ptr [esp+0xC4],0xD
	call IWzProperty::Getitem
	lea edx,[esp+0x5C]
	push edx
	lea eax,[esp+0x7C]
	push eax
	mov byte ptr [esp+0xC4],0xF
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [esp+0xC0],0x10
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x44],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block50

 Block49:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block50:
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block52

 Block51:
	cmp eax,0x80004002
	jne Block26

 Block52:
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0xBC],0x12
	cmp eax,ebx
	je Block54

 Block53:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block54:
	mov ebp,dword ptr [esp+0x14]
	cmp ebp,ebx
	sete al
	cmp al,bl
	je Block63

 Block55:
	mov byte ptr [esp+0xBC],0xF
	cmp ebp,ebx
	je Block57

 Block56:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block57:
	cmp word ptr [esp+0x5C],8
	mov byte ptr [esp+0xBC],0xD
	jne Block60

 Block58:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	cmp eax,ebx
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea eax,[esp+0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov byte ptr [esp+0xBC],0xC
	cmp esi,ebx
	je Block45

 Block62:
	mov ecx,esi
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x20],ebx
	jmp Block45

 Block63:
	push 0x14
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,ebx
	je Block65

 Block64:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3 // TODO: 		mov dword ptr [eax],offset CActionMan::NPCACTIONFRAMEENTRY::`vftable'
	mov dword ptr [eax+0xC],ebx
	mov esi,eax
	jmp Block66

 Block65:
	xor esi,esi

 Block66:
	mov edi,dword ptr [esi+0xC]
	cmp edi,ebp
	je Block71

 Block67:
	mov dword ptr [esi+0xC],ebp
	cmp ebp,ebx
	je Block69

 Block68:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+4]
	push ebp
	call edx

 Block69:
	cmp edi,ebx
	je Block71

 Block70:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block71:
	push 0xB4
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x48],esp
	push 0x1AA9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xC4],0x13
	cmp ebp,ebx
	je Block23

 Block72:
	lea eax,[esp+0x3C]
	push eax
	mov ecx,ebp
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xC4],0x14
	cmp ecx,ebx
	je Block23

 Block73:
	lea edx,[esp+0x54]
	push edx
	mov byte ptr [esp+0xC8],0x15
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xC4],0x16
	call get_int32
	add esp,8
	cmp word ptr [esp+0x4C],8
	mov dword ptr [esi+0x10],eax
	mov byte ptr [esp+0xBC],0x15
	jne Block76

 Block74:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebx
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block77:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0xBC],0x12
	cmp eax,ebx
	je Block79

 Block78:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block79:
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0xA4],esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0xCC]
	mov byte ptr [esp+0xBC],0x17
	call ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::AddTail_
	lea ecx,[esp+0x9C]
	push ecx
	mov ecx,eax
	call ZRef<CActionMan::NPCACTIONFRAMEENTRY>::op_assign_copy
	push edi
	mov byte ptr [esp+0xC0],0x12
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block81

 Block80:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block81:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov dword ptr [esp+0xA4],ebx
	mov byte ptr [esp+0xC0],0xF
	call edx
	cmp word ptr [esp+0x5C],8
	mov byte ptr [esp+0xBC],0xD
	jne Block84

 Block82:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	cmp eax,ebx
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea ecx,[esp+0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block85:
	mov byte ptr [esp+0xBC],0xC
	cmp dword ptr [esp+0x20],ebx
	je Block45

 Block86:
	mov ecx,dword ptr [esp+0x20]
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x20],ebx
	jmp Block45

 Block87:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x48],esp
	push 0x49F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x24]
	lea eax,[esp+0x54]
	mov byte ptr [esp+0xC4],0x18
	push eax
	mov byte ptr [esp+0xC8],0xC
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xC4],0x19
	call get_int32
	add esp,8
	mov esi,eax
	neg esi
	sbb esi,esi
	neg esi
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0xBC],0xC
	jne Block90

 Block88:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	cmp eax,ebx
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block91:
	mov ebp,dword ptr [esp+0xCC]
	cmp esi,ebx
	je Block97

 Block92:
	mov esi,dword ptr [ebp+0x10]
	mov dword ptr [esp+0x14],esi
	cmp esi,ebx
	je Block97

 Block93:
	cmp esi,dword ptr [ebp+0xC]
	je Block96

 Block94:
	cmp esi,dword ptr [ebp+0x10]
	je Block96

 Block95:
	mov ecx,ebp
	call ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::AddTail_
	push esi
	mov ecx,eax
	call ZRef<CActionMan::NPCACTIONFRAMEENTRY>::op_assign_copy

 Block96:
	lea eax,[esp+0x14]
	push eax
	call ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::GetPrev
	mov esi,dword ptr [esp+0x18]
	add esp,4
	cmp esi,ebx
	jne Block93

 Block97:
	mov edi,dword ptr [esp+0x18]
	lea esi,[edi+0x14]
	mov ecx,esi
	call ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::RemoveAll
	push ebp
	mov ecx,esi
	call ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::AddTail_List
	mov ecx,dword ptr [esp+0x24]
	add ecx,0x168
	call ZList<ZRef<CActionMan::NPCACTIONENTRY>>::AddTail_
	lea ecx,[esp+0x44]
	mov esi,eax
	push ecx
	mov ecx,esi
	call ZRef<CActionMan::NPCACTIONENTRY>::op_assign_copy
	mov ecx,dword ptr [esp+0x88]
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x74]
	push eax
	mov dword ptr [edi+0x30],esi
	call ZMap<__int64, ZRef<CActionMan::NPCACTIONENTRY>, __int64>::Insert
	mov dword ptr [edi+0x2C],eax
	call timeGetTime
	mov dword ptr [edi+0x28],eax
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0xC0],9
	call edx
	cmp word ptr [esp+0x8C],8
	mov byte ptr [esp+0xBC],8
	jne Block100

 Block98:
	xor eax,eax
	mov word ptr [esp+0x8C],ax
	mov eax,dword ptr [esp+0x94]
	cmp eax,ebx
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea ecx,[esp+0x8C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block101:
	mov eax,dword ptr [esp+0x1C]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0xC0],4
	call eax
	mov ecx,dword ptr [esp+0x6C]
	cmp ecx,ebx
	je Block103

 Block102:
	call _xbstr_t::Data_t::Release

 Block103:
	mov eax,dword ptr [esp+0x84]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0xC0],2
	call edx
	mov eax,dword ptr [esp+0x2C]
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	mov byte ptr [esp+0xBC],1
	cmp eax,ebx
	je Block108

 Block104:
	add eax,4
	push eax
	call ebp
	test eax,eax
	jne Block107

 Block105:
	mov eax,dword ptr [esp+0x2C]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x2C]
	cmp ecx,ebx
	je Block107

 Block106:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block107:
	mov dword ptr [esp+0x2C],ebx

 Block108:
	lea esi,[edi+4]
	push esi
	mov byte ptr [esp+0xC0],bl
	call ebp
	test eax,eax
	jne Block110

 Block109:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block110:
	mov esi,dword ptr [esp+0x3C]
	mov dword ptr [esp+0xBC],0xFFFFFFFF
	cmp esi,ebx
	je Block114

 Block111:
	lea edi,[esi+4]
	push edi
	call ebp

 Block112:
	test eax,eax
	jne Block114

 Block113:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block114:
	mov ecx,dword ptr [esp+0xB4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xAC
	ret 0x10
}
}
// action_mapping_for_ghost
__SUB(00006500, __cdecl, 146394,  void, long&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [eax]
	add ecx,0xFFFFFF84
	cmp ecx,7
	ja Block10

 Block1:
	cmp ECX, 0
je Block2
cmp ECX, 1
je Block3
cmp ECX, 2
je Block4
cmp ECX, 3
je Block5
cmp ECX, 4
je Block6
cmp ECX, 5
je Block7
cmp ECX, 6
je Block8
cmp ECX, 7
je Block9


 Block2:
	mov dword ptr [eax],0
	ret

 Block3:
	mov dword ptr [eax],2
	ret

 Block4:
	mov dword ptr [eax],0x2C
	ret

 Block5:
	mov dword ptr [eax],0x29
	ret

 Block6:
	mov dword ptr [eax],0x2B
	ret

 Block7:
	mov dword ptr [eax],0x2D
	ret

 Block8:
	mov dword ptr [eax],0x2E
	ret

 Block9:
	mov dword ptr [eax],0x30

 Block10:
	ret
}
}
// _ZtlSecureTear_long_
__SUB(0000B5C0, __fastcall, 146415,  uint32_t, long, long*) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,ecx
	mov ecx,offset _D_G_RAND
	mov esi,edx
	call CRand32::Random
	mov ecx,eax
	mov dword ptr [esi],eax
	xor ecx,edi
	ror ecx,5
	xor eax,0xBAADF00D
	ror eax,5
	pop edi
	mov dword ptr [esi+4],ecx
	add eax,ecx
	pop esi
	ret
}
}
// CActionMan::MELEEATTACKAFTERIMAGE::~MELEEATTACKAFTERIMAGE
_SUB_EXCEPTION_HANDLER(256C0)
__SUB_CLASS_THIS0(000256C0, __thiscall, 33463,  CActionMan::MELEEATTACKAFTERIMAGE, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_256C0
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
	lea ecx,[esi+0x10]
	mov dword ptr [esp+0x14],1
	call ZArray<SECRECT>::RemoveAll
	lea ecx,[esi+0xC]
	mov byte ptr [esp+0x14],0
	call ZArray<ZArray<_x_com_ptr<IWzCanvas>>>::RemoveAll
	int 3 // TODO: 		mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CActionMan::MOBACTIONENTRY::~MOBACTIONENTRY
_SUB_EXCEPTION_HANDLER(13640)
__SUB_CLASS_THIS0(00013640, __thiscall, 33968,  CActionMan::MOBACTIONENTRY, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_13640
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
	lea ecx,[esi+0x14]
	mov dword ptr [esp+0x14],0
	int 3 // TODO: 		mov dword ptr [ecx],offset ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>::RemoveAll
	int 3 // TODO: 		mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CActionMan::LoadCharacterAction
_SUB_EXCEPTION_HANDLER(27D00)
__SUB_CLASS_THIS(00027D00, __thiscall, 33387,  CActionMan, void, long, long, long, long*, ZArray<ZRef<CActionMan::CHARACTERACTIONFRAMEENTRY> >&, long, long, int32_t, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_27D00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x108
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x118]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x18],ecx
	mov edi,dword ptr [ebp+8]
	mov dword ptr [esp+0x10C],edi
	cmp edi,0x2F
	jne Block2

 Block1:
	push 0xF0
	xor esi,esi
	lea eax,[esp+0x20]
	push esi
	push eax
	call _memset
	mov eax,dword ptr [ebp+0x14]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [eax+4]
	mov dword ptr [esp+0x28],ecx
	mov ecx,dword ptr [eax+0xC]
	mov dword ptr [esp+0x2C],edx
	mov edx,dword ptr [eax+0x10]
	add esp,0xC
	mov dword ptr [esp+0x28],ecx
	mov dword ptr [esp+0x2C],edx
	jmp Block15

 Block2:
	mov esi,dword ptr [ebp+0x14]
	mov eax,dword ptr [_D_G_ANRINGBODYPART]
	mov edx,dword ptr [_D_G_ANRINGBODYPART+4]
	mov ecx,0x3C
	lea edi,[esp+0x1C]
	rep movsd
	xor ecx,ecx
	mov edi,dword ptr [ebp+0xC]
	mov dword ptr [esp+0x54],ecx
	mov dword ptr [esp+0x24],ecx
	mov dword ptr [esp+eax*4+0x1C],ecx
	mov eax,dword ptr [_D_G_ANRINGBODYPART+8]
	mov dword ptr [esp+edx*4+0x1C],ecx
	mov edx,dword ptr [_D_G_ANRINGBODYPART+12]
	mov dword ptr [esp+eax*4+0x1C],ecx
	mov dword ptr [esp+edx*4+0x1C],ecx
	mov esi,dword ptr [esp+0x30]
	mov ebx,dword ptr [esp+0x34]
	mov eax,0x68DB8BAD
	imul esi
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x69
	jne Block7

 Block3:
	cmp ebx,ecx
	je Block7

 Block4:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push esi
	call CItemInfo::IsCashItem_1
	test eax,eax
	jne Block6

 Block5:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push ebx
	call CItemInfo::IsCashItem_1
	test eax,eax
	jne Block9

 Block6:
	xor ebx,ebx
	xor ecx,ecx
	mov dword ptr [esp+0x34],ebx

 Block7:
	cmp esi,ecx
	jne Block11

 Block8:
	jmp Block10

 Block9:
	xor ecx,ecx

 Block10:
	mov esi,edi
	neg esi
	sbb esi,esi
	and esi,0x3F2
	add esi,0xFDEA4
	mov dword ptr [esp+0x30],esi

 Block11:
	cmp ebx,ecx
	jne Block14

 Block12:
	mov eax,0x68DB8BAD
	imul esi
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x69
	je Block14

 Block13:
	neg edi
	sbb edi,edi
	and edi,0x3F5
	add edi,0x102CBA
	mov dword ptr [esp+0x34],edi

 Block14:
	mov edi,dword ptr [ebp+8]
	xor esi,esi

 Block15:
	cmp dword ptr [esp+0x20],0xF4ACA
	jne Block17

 Block16:
	mov dword ptr [esp+0x20],esi

 Block17:
	cmp dword ptr [esp+0x2C],0xFBF58
	jne Block19

 Block18:
	mov dword ptr [esp+0x2C],esi

 Block19:
	cmp dword ptr [esp+0x28],0xF987F
	jne Block21

 Block20:
	mov dword ptr [esp+0x28],esi

 Block21:
	cmp dword ptr [esp+0x38],0x105C19
	jne Block23

 Block22:
	mov dword ptr [esp+0x38],esi

 Block23:
	cmp dword ptr [esp+0x3C],0x1082F6
	jne Block25

 Block24:
	mov dword ptr [esp+0x3C],esi

 Block25:
	cmp dword ptr [esp+0x40],0x10D0D7
	jne Block27

 Block26:
	mov dword ptr [esp+0x40],esi

 Block27:
	cmp dword ptr [esp+0x44],0x10A9E3
	jne Block29

 Block28:
	mov dword ptr [esp+0x44],esi

 Block29:
	mov ebx,dword ptr [ebp+0x1C]
	cmp ebx,0x19F8D3
	je Block31

 Block30:
	cmp ebx,0x19F92E
	jne Block32

 Block31:
	mov dword ptr [esp+0x48],esi
	xor ebx,ebx

 Block32:
	mov ecx,dword ptr [ebp+0x20]
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xBE
	je Block38

 Block33:
	cmp eax,0xC1
	je Block38

 Block34:
	cmp ecx,0x1D05D8
	je Block38

 Block35:
	cmp ecx,0x1D05D9
	je Block38

 Block36:
	cmp ecx,0x1D05DA
	je Block38

 Block37:
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x7BF
	jne Block45

 Block38:
	mov dword ptr [esp+0x44],esi
	mov dword ptr [esp+0x48],esi
	cmp edi,0x101
	je Block45

 Block39:
	cmp edi,0x102
	je Block45

 Block40:
	cmp edi,0x40
	je Block45

 Block41:
	cmp edi,0x41
	je Block45

 Block42:
	cmp edi,0x2D
	je Block44

 Block43:
	mov dword ptr [esp+0x10C],0x30
	cmp edi,0x2E
	jne Block45

 Block44:
	mov dword ptr [esp+0x10C],0x2E

 Block45:
	cmp edi,0x64
	jne Block47

 Block46:
	mov dword ptr [esp+0x44],esi
	mov dword ptr [esp+0x48],esi

 Block47:
	mov ecx,dword ptr [ebp+0x28]
	cmp ecx,esi
	je Block55

 Block48:
	xor eax,eax
	mov edi,edi

 Block49:
	cmp eax,esi
	je Block54

 Block50:
	cmp eax,1
	je Block54

 Block51:
	cmp eax,3
	je Block54

 Block52:
	cmp eax,4
	je Block54

 Block53:
	mov dword ptr [esp+eax*4+0x1C],esi

 Block54:
	inc eax
	cmp eax,0x3B
	jle Block49

 Block55:
	cmp ebx,esi
	je Block59

 Block56:
	cmp edi,0x50
	je Block58

 Block57:
	cmp edi,0x51
	jne Block59

 Block58:
	xor ebx,ebx

 Block59:
	mov dword ptr [esp+0x14],esi
	mov eax,dword ptr [ebp+0x10]
	push ecx
	push ebx
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [esp+0x118]
	lea edx,[esp+0x28]
	push edx
	mov dword ptr [esp+0x130],esi
	mov esi,dword ptr [esp+0x28]
	push eax
	push ecx
	mov ecx,esi
	call CActionMan::load_character_action
	mov edx,dword ptr [ebp+0x18]
	push edx
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,esi
	call CActionMan::MergeCharacterSprite
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x120],0xFFFFFFFF
	call ZArray<CActionFrame>::RemoveAll
	mov ecx,dword ptr [esp+0x118]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0x24
}
}
// CActionMan::GetInfoImgEntry
_SUB_EXCEPTION_HANDLER(17FD0)
__SUB_CLASS_THIS(00017FD0, __thiscall, 33396,  CActionMan, ZRef<CActionMan::CHARACTERIMGENTRY>*, ZRef<CActionMan::CHARACTERIMGENTRY>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_17FD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x94
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xA8]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x1C],ecx
	xor ebp,ebp
	mov dword ptr [esp+0x38],ebp
	mov ebx,dword ptr [esp+0xBC]
	cmp ebx,ebp
	jg Block2

 Block1:
	mov eax,dword ptr [esp+0xB8]
	mov dword ptr [eax+4],ebp
	jmp Block101

 Block2:
	push ebp
	lea eax,[esp+0xC0]
	add ecx,0x18
	push eax
	mov dword ptr [esp+0x5C],ecx
	call ZMap<long, ZRef<CActionMan::CHARACTERIMGENTRY>, long>::GetAt
	mov esi,eax
	cmp esi,ebp
	jne Block88

 Block3:
	push 0x44
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,ebp
	je Block5

 Block4:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	mov dword ptr [eax], offset CHARACTERIMGENTRY_VTABLE
	mov dword ptr [eax+0xC],ebp
	mov dword ptr [eax+0x10],ebp
	mov dword ptr [eax+0x14],ebp
	mov dword ptr [eax+0x1C],ebp
	mov dword ptr [eax+0x38],ebp
	mov dword ptr [eax+0x40],ebp
	mov esi,eax
	jmp Block6

 Block5:
	xor esi,esi

 Block6:
	mov dword ptr [esp+0x50],esi
	cmp esi,ebp
	je Block8

 Block7:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	lea edx,[esp+0x30]
	push ebx
	push edx
	mov dword ptr [esp+0xB8],ebp
	call get_equip_data_path
	add esp,8
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0xB0],1
	cmp eax,ebp
	je Block10

 Block9:
	cmp word ptr [eax],bp
	jne Block13

 Block10:
	mov esi,dword ptr [esp+0xB8]
	mov dword ptr [esi+4],ebp
	mov byte ptr [esp+0xB0],0
	cmp eax,ebp
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block12:
	lea ecx,[esp+0x4C]
	mov dword ptr [esp+0xB0],0xFFFFFFFF
	call ZRef<CActionMan::CHARACTERIMGENTRY>::~ZRef<CActionMan::CHARACTERIMGENTRY>
	mov eax,esi
	jmp Block101

 Block13:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x58]
	push eax
	call edi
	lea ecx,[esp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	lea edx,[esp+0x68]
	push edx
	mov byte ptr [esp+0xB4],2
	call edi
	lea eax,[esp+0x68]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	mov eax,dword ptr [esp+0x30]
	push ebp
	push ebp
	lea ecx,[esp+0x60]
	push ecx
	lea edx,[esp+0x74]
	push edx
	push ecx
	mov dword ptr [esp+0x4C],esp
	mov ecx,esp
	mov bl,3
	push eax
	mov byte ptr [esp+0xC8],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xC4],4
	cmp dword ptr [_D_G_RM],ebp
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	lea ecx,[esp+0x9C]
	push ecx
	mov byte ptr [esp+0xC8],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xB8],5
	call Ztl_variant_t::GetUnknown
	lea edi,[esi+0xC]
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block22

 Block20:
	cmp eax,0x80004002
	je Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	mov edi,dword ptr [edi]
	mov dword ptr [esp+0x38],edi
	cmp edi,ebp
	je Block24

 Block23:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax

 Block24:
	mov ebx,8
	mov byte ptr [esp+0xB0],7
	cmp word ptr [esp+0x88],bx
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x90]
	xor ecx,ecx
	mov word ptr [esp+0x88],cx
	cmp eax,ebp
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea edx,[esp+0x88]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov byte ptr [esp+0xB0],8
	cmp word ptr [esp+0x68],bx
	jne Block31

 Block29:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	cmp eax,ebp
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea ecx,[esp+0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov byte ptr [esp+0xB0],9
	cmp word ptr [esp+0x58],bx
	jne Block35

 Block33:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	cmp eax,ebp
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea eax,[esp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block36:
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0x3D5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xBC],0xA
	cmp edi,ebp
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea edx,[esp+0x84]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xC0],9
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xB8],0xB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x38],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block41

 Block39:
	cmp eax,0x80004002
	je Block41

 Block40:
	push eax
	call _com_issue_error

 Block41:
	mov byte ptr [esp+0xB0],0xD
	cmp word ptr [esp+0x78],bx
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [esp+0x78],ax
	mov eax,dword ptr [esp+0x80]
	cmp eax,ebp
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[esp+0x78]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x499
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [esp+0x38]
	mov byte ptr [esp+0xB4],0xE
	cmp edi,ebp
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	lea eax,[esp+0x24]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xB8],0xD
	call IWzProperty::Getitem
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0xB8],0xF
	call DetachBSTR
	add esp,8
	push eax
	lea ecx,[esi+0x10]
	call Ztl_bstr_t::op_assign
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebp
	je Block49

 Block48:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x14],ebp

 Block49:
	mov ebx,8
	mov byte ptr [esp+0xB0],0xD
	cmp word ptr [esp+0x20],bx
	jne Block52

 Block50:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	cmp eax,ebp
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
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x49A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x24]
	mov byte ptr [esp+0xB4],0x10
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xB8],0xD
	call IWzProperty::Getitem
	push eax
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0xB8],0x11
	call DetachBSTR
	add esp,8
	push eax
	lea ecx,[esi+0x14]
	call Ztl_bstr_t::op_assign
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebp
	je Block55

 Block54:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x14],ebp

 Block55:
	mov byte ptr [esp+0xB0],0xD
	cmp word ptr [esp+0x20],bx
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x49B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x24]
	push ecx
	mov byte ptr [esp+0xB8],0x12
	mov ecx,edi
	mov byte ptr [esp+0xB8],0xD
	call IWzProperty::Getitem
	push eax
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0xB8],0x13
	call DetachBSTR
	add esp,8
	push eax
	lea ecx,[esi+0x38]
	call Ztl_bstr_t::op_assign
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebp
	je Block61

 Block60:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x14],ebp

 Block61:
	mov byte ptr [esp+0xB0],0xD
	cmp word ptr [esp+0x20],bx
	jne Block64

 Block62:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block65:
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x4A2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x28]
	mov byte ptr [esp+0xB8],0x14
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xBC],0xD
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xB8],0x15
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [esi+0x3C],eax
	mov byte ptr [esp+0xB0],0xD
	cmp word ptr [esp+0x20],bx
	jne Block68

 Block66:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	mov eax,dword ptr [esp+0xBC]
	push eax
	call GetWeaponType
	add esp,4
	mov dword ptr [esi+0x18],eax
	cmp eax,ebp
	je Block73

 Block70:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x49C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x24]
	mov byte ptr [esp+0xB4],0x16
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xB8],0xD
	call IWzProperty::Getitem
	cmp word ptr [esp+0x20],8
	mov bl,0x17
	mov byte ptr [esp+0xB0],bl
	jne Block72

 Block71:
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x18]
	call _xbstr_t::_ctor_3
	lea ecx,[esp+0x14]
	push ecx
	lea ecx,[esi+0x1C]
	call Ztl_bstr_t::op_assign
	lea ecx,[esp+0x14]
	call Ztl_bstr_t::~Ztl_bstr_t

 Block72:
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x49D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x44]
	mov byte ptr [esp+0xB8],0x18
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xBC],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xB8],0x19
	call get_int32
	add esp,8
	lea ecx,[esp+0x3C]
	mov dword ptr [esi+0x24],eax
	mov byte ptr [esp+0xB0],bl
	call Ztl_variant_t::~Ztl_variant_t
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x42B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x44]
	mov byte ptr [esp+0xB8],0x1A
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xBC],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xB8],0x1B
	call get_int32
	add esp,8
	lea ecx,[esp+0x3C]
	mov dword ptr [esi+0x28],eax
	mov byte ptr [esp+0xB0],bl
	call Ztl_variant_t::~Ztl_variant_t
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x1A9E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x44]
	push ecx
	mov byte ptr [esp+0xBC],0x1C
	mov ecx,edi
	mov byte ptr [esp+0xBC],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xB8],0x1D
	call get_int32
	add esp,8
	lea ecx,[esp+0x3C]
	mov dword ptr [esi+0x2C],eax
	mov byte ptr [esp+0xB0],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 6
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x49E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x44]
	mov byte ptr [esp+0xB8],0x1E
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xBC],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xB8],0x1F
	call get_int32
	add esp,8
	lea ecx,[esp+0x3C]
	mov dword ptr [esi+0x20],eax
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0xB0],0xD
	call Ztl_variant_t::~Ztl_variant_t

 Block73:
	mov ecx,dword ptr [esp+0x1C]
	add ecx,4
	call ZList<ZRef<CActionMan::CHARACTERIMGENTRY>>::AddTail_
	lea ecx,[esp+0x4C]
	push ecx
	mov ecx,eax
	call ZRef<CActionMan::CHARACTERIMGENTRY>::op_assign_copy
	mov ecx,dword ptr [esp+0x54]
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0xC0]
	push eax
	call ZMap<long, ZRef<CActionMan::CHARACTERIMGENTRY>, long>::Insert
	mov dword ptr [esi+0x34],eax
	call timeGetTime
	mov dword ptr [esi+0x30],eax
	cmp dword ptr [esi+0x3C],ebp
	je Block83

 Block74:
	call TSimpleSingleton<CDayOfWeek>::GetInstance
	mov ecx,eax
	call CDayOfWeek::GetCurrentDay
	mov edx,dword ptr [esp+0xBC]
	movzx ecx,ax
	push ecx
	push edx
	lea eax,[esp+0x1C]
	push eax
	call get_weekly_data_path
	add esp,0xC
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xB0],0x20
	cmp eax,ebp
	je Block81

 Block75:
	cmp word ptr [eax],bp
	je Block81

 Block76:
	push offset _D_VTMISSING
	lea ecx,[esp+0x40]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0xB4],0x21
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [esp+0x14]
	push ebp
	push ebp
	lea ecx,[esp+0x44]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov bl,0x22
	push eax
	mov byte ptr [esp+0xC8],bl
	call Ztl_bstr_t::_ctor_2
	mov byte ptr [esp+0xC4],0x23
	cmp dword ptr [_D_G_RM],ebp
	jne Block78

 Block77:
	push 0x80004003
	call _com_issue_error

 Block78:
	lea ecx,[esp+0xAC]
	push ecx
	mov byte ptr [esp+0xC8],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xB8],0x24
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x20]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[esp+0x98]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x20]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0xB0],0x20
	call Ztl_variant_t::~Ztl_variant_t
	mov ebx,dword ptr [esp+0x1C]
	cmp ebx,ebp
	je Block80

 Block79:
	lea edx,[esp+0x1C]
	push edx
	lea ecx,[esi+0x40]
	call _x_com_ptr<IWzProperty>::op_assign_copy
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block80:
	mov eax,dword ptr [esp+0x14]

 Block81:
	mov byte ptr [esp+0xB0],0xD
	cmp eax,ebp
	je Block83

 Block82:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block83:
	cmp dword ptr [esi+0x40],ebp
	lea ecx,[esi+0x40]
	sete al
	test al,al
	je Block85

 Block84:
	lea eax,[esi+0xC]
	push eax
	call _x_com_ptr<IWzProperty>::op_assign_copy

 Block85:
	mov ebx,dword ptr [esp+0xB8]
	mov dword ptr [ebx+4],esi
	add esi,4
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [esp+0xB4],9
	call eax
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0xB4],1
	call edx
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0xB0],0
	cmp eax,ebp
	je Block87

 Block86:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block87:
	lea ecx,[esp+0x4C]
	mov dword ptr [esp+0xB0],0xFFFFFFFF
	call ZRef<CActionMan::CHARACTERIMGENTRY>::~ZRef<CActionMan::CHARACTERIMGENTRY>
	mov eax,ebx
	jmp Block101

 Block88:
	mov edi,dword ptr [esi+4]
	call timeGetTime
	mov dword ptr [edi+0x30],eax
	mov eax,dword ptr [esi+4]
	cmp dword ptr [eax+0x3C],ebp
	je Block98

 Block89:
	call TSimpleSingleton<CDayOfWeek>::GetInstance
	mov ecx,eax
	call CDayOfWeek::GetCurrentDay
	movzx eax,ax
	push eax
	lea ecx,[esp+0x18]
	push ebx
	push ecx
	call get_weekly_data_path
	add esp,0xC
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0xB0],0x25
	cmp eax,ebp
	je Block96

 Block90:
	cmp word ptr [eax],bp
	je Block96

 Block91:
	push offset _D_VTMISSING
	lea ecx,[esp+0x24]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0xB4],0x26
	call Ztl_variant_t::_ctor_1
	push ebp
	push ebp
	lea edx,[esp+0x28]
	push edx
	mov edx,dword ptr [esp+0x20]
	lea eax,[esp+0x48]
	push eax
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,0x27
	push edx
	mov byte ptr [esp+0xC8],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xC4],0x28
	cmp dword ptr [_D_G_RM],ebp
	jne Block93

 Block92:
	push 0x80004003
	call _com_issue_error

 Block93:
	lea eax,[esp+0xAC]
	mov byte ptr [esp+0xC4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xB8],0x29
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x20]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[esp+0x98]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x3C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0xB0],0x25
	call Ztl_variant_t::~Ztl_variant_t
	mov edi,dword ptr [esp+0x1C]
	cmp edi,ebp
	je Block95

 Block94:
	mov eax,dword ptr [esi+4]
	lea ecx,[esp+0x1C]
	push ecx
	lea ecx,[eax+0x40]
	call _x_com_ptr<IWzProperty>::op_assign_copy
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block95:
	mov eax,dword ptr [esp+0x14]

 Block96:
	mov dword ptr [esp+0xB0],0xFFFFFFFF
	cmp eax,ebp
	je Block98

 Block97:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block98:
	mov esi,dword ptr [esi+4]
	mov edi,dword ptr [esp+0xB8]
	mov dword ptr [edi+4],esi
	cmp esi,ebp
	je Block100

 Block99:
	add esi,4
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block100:
	mov eax,edi

 Block101:
	mov ecx,dword ptr [esp+0xA8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA0
	ret 8
}
}
// CActionMan::GetWeaponAfterImage
_SUB_EXCEPTION_HANDLER(28080)
__SUB_CLASS_THIS(00028080, __thiscall, 33437,  CActionMan, CActionMan::MELEEATTACKAFTERIMAGE*, NakedParam<Ztl_bstr_t>) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_28080
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x84
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	xor edi,edi
	mov dword ptr [ebp-4],edi
	mov dword ptr [ebp+0x44],edi
	mov eax,dword ptr [ebp+0x70]
	mov byte ptr [ebp-4],1
	cmp eax,edi
	je Block2

 Block1:
	mov eax,dword ptr [eax]
	mov dword ptr [ebp+0x58],eax
	jmp Block3

 Block2:
	mov dword ptr [ebp+0x58],edi

 Block3:
	lea edx,[ebp+0x40]
	push edx
	lea eax,[ebp+0x58]
	add ecx,0x124
	push eax
	mov dword ptr [ebp+0x10],ecx
	call ZMap<wchar_t const *, ZRef<CActionMan::MELEEATTACKAFTERIMAGE>, ZXString16>::GetAt
	test eax,eax
	jne Block138

 Block4:
	lea ecx,[ebp+0x40]
	call ZRef<CActionMan::MELEEATTACKAFTERIMAGE>::_Alloc
	mov esi,dword ptr [ebp+0x44]
	lea edx,[ebp+0x63]
	push edx
	lea ecx,[esi+0xC]
	push 0x111
	call ZArray<ZArray<_x_com_ptr<IWzCanvas>>>::_Alloc
	lea eax,[ebp+0x63]
	push eax
	add esi,0x10
	push 0x111
	mov ecx,esi
	call ZArray<SECRECT>::_Alloc
	mov esi,dword ptr [esi]
	push 0x1110
	push edi
	push esi
	call _memset
	mov esi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea ecx,[ebp-0x2C]
	push ecx
	call esi
	lea edx,[ebp-0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea eax,[ebp-0x1C]
	push eax
	mov byte ptr [ebp-4],2
	call esi
	lea ecx,[ebp-0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	push edi
	push edi
	lea edx,[ebp-0x2C]
	lea eax,[ebp-0x1C]
	push edx
	push eax
	mov eax,dword ptr [ebp+0x70]
	mov bl,3
	mov byte ptr [ebp-4],bl
	cmp eax,edi
	je Block10

 Block9:
	mov eax,dword ptr [eax]
	jmp Block11

 Block10:
	xor eax,eax

 Block11:
	push ecx
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],4
	cmp dword ptr [_D_G_RM],edi
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea ecx,[ebp-0x6C]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x30]
	mov dword ptr [ebp+0x30],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block16

 Block14:
	cmp eax,0x80004002
	je Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x6C],bx
	jne Block19

 Block17:
	mov eax,dword ptr [ebp-0x64]
	xor edx,edx
	mov word ptr [ebp-0x6C],dx
	cmp eax,edi
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea eax,[ebp-0x6C]
	push eax
	call esi

 Block20:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x1C],bx
	jne Block23

 Block21:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	cmp eax,edi
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea edx,[ebp-0x1C]
	push edx
	call esi

 Block24:
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x2C],bx
	jne Block27

 Block25:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	cmp eax,edi
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea ecx,[ebp-0x2C]
	push ecx
	call esi

 Block28:
	mov edi,dword ptr [ebp+0x30]
	test edi,edi
	sete al
	test al,al
	sete al
	test al,al
	je Block132

 Block29:
	xor ebx,ebx
	mov dword ptr [ebp+0x58],ebx

 Block30:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x5C],esp
	push ebx
	push edx
	call get_action_name_from_code
	add esp,8
	mov byte ptr [ebp-4],0xA
	test edi,edi
	je Block12

 Block31:
	lea eax,[ebp-0x3C]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	lea ecx,[ebp]
	push ecx
	mov byte ptr [ebp-4],0xB
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0xC
	mov dword ptr [ebp+0x50],0
	mov dword ptr [ebp+0x5C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block33

 Block32:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block33:
	lea ecx,[ebp+0x50]
	call _x_com_ptr<IWzProperty>::_QueryUnknownComPtr
	test eax,eax
	jge Block35

 Block34:
	cmp eax,0x80004002
	jne Block5

 Block35:
	mov eax,dword ptr [ebp]
	mov byte ptr [ebp-4],0xE
	test eax,eax
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block37:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0xF
	jne Block40

 Block38:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov esi,dword ptr [ebp+0x50]
	test esi,esi
	sete al
	test al,al
	je Block44

 Block42:
	mov byte ptr [ebp-4],9
	test esi,esi
	je Block131

 Block43:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax
	jmp Block131

 Block44:
	xor edi,edi
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1ABE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x10
	cmp esi,edi
	je Block12

 Block45:
	lea edx,[ebp-0x4C]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0xF
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x11
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x3C]
	mov dword ptr [ebp+0x3C],edi
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,edi
	jge Block47

 Block46:
	cmp eax,0x80004002
	jne Block5

 Block47:
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],0x13
	jne Block50

 Block48:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	cmp eax,edi
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea ecx,[ebp-0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	push edi
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x5C],esp
	push 0x1ACB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x5C]
	mov byte ptr [ebp-4],0x14
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x15
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x38]
	mov dword ptr [ebp+0x38],edi
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,edi
	jge Block53

 Block52:
	cmp eax,0x80004002
	jne Block5

 Block53:
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],0x17
	jne Block56

 Block54:
	mov eax,dword ptr [ebp-0x54]
	xor ecx,ecx
	mov word ptr [ebp-0x5C],cx
	cmp eax,edi
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea edx,[ebp-0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block57:
	mov edi,dword ptr [ebp+0x3C]
	mov esi,dword ptr [ebp+0x38]
	test edi,edi
	sete al
	test al,al
	sete al
	test al,al
	je Block62

 Block58:
	test esi,esi
	sete al
	test al,al
	sete al
	test al,al
	je Block62

 Block59:
	test esi,esi
	je Block12

 Block60:
	test edi,edi
	je Block12

 Block61:
	mov eax,dword ptr [ebp+0x44]
	lea ebx,[ebx+ebx*2]
	add eax,0x10
	shl ebx,4
	add ebx,dword ptr [eax]
	mov ecx,esi
	call IWzShape2D::Gety
	push eax
	mov ecx,esi
	call IWzShape2D::Getx
	push eax
	mov ecx,edi
	call IWzShape2D::Gety
	push eax
	mov ecx,edi
	call IWzShape2D::Getx
	push eax
	push ebx
	call SECRECT::SetRect
	add esp,0x14
	jmp Block63

 Block62:
	mov eax,dword ptr [ebp+0x44]
	lea ebx,[ebx+ebx*2]
	add eax,0x10
	shl ebx,4
	add ebx,dword ptr [eax]
	xor ecx,ecx
	mov edx,ebx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[ebx+0xC]
	xor ecx,ecx
	mov dword ptr [ebx+8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[ebx+0x18]
	xor ecx,ecx
	mov dword ptr [ebx+0x14],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[ebx+0x24]
	xor ecx,ecx
	mov dword ptr [ebx+0x20],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [ebx+0x2C],eax

 Block63:
	xor esi,esi
	mov dword ptr [ebp-0x90],esi
	mov ecx,dword ptr [ebp+0x50]
	lea eax,[ebp+0x14]
	push eax
	mov byte ptr [ebp-4],0x18
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],0x19
	mov dword ptr [ebp+0x34],esi
	mov dword ptr [ebp+0x5C],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block65

 Block64:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block65:
	lea ecx,[ebp+0x34]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,esi
	jge Block67

 Block66:
	cmp eax,0x80004002
	jne Block5

 Block67:
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],0x1B
	cmp eax,esi
	je Block69

 Block68:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block69:
	lea eax,[ebp+0x20]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [ebp-4],0x1C
	mov dword ptr [ebp+8],esi

 Block70:
	mov eax,dword ptr [ebp+0x34]
	test eax,eax
	je Block12

 Block71:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+8]
	push edx
	lea edx,[ebp+0x20]
	push edx
	push 1
	push eax
	mov eax,dword ptr [ecx+0xC]
	call eax
	test eax,eax
	jne Block122

 Block72:
	lea ecx,[ebp+0x20]
	push ecx
	lea edx,[ebp+0x4C]
	push edx
	call DetachBSTR
	add esp,8
	mov esi,dword ptr [ebp+0x4C]
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x5C],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block74

 Block73:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block74:
	lea ecx,[ebp-0x8C]
	push ecx
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x1E
	mov byte ptr [ebp-4],0x1D
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1F
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [ebp+0x1C],ebx
	test eax,eax
	je Block77

 Block75:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x18]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	test eax,eax
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x18]
	mov dword ptr [ebp+0x1C],ebx
	test eax,eax
	jge Block77

 Block76:
	cmp eax,0x80004002
	jne Block5

 Block77:
	mov edi,8
	mov byte ptr [ebp-4],0x21
	cmp word ptr [ebp-0x8C],di
	jne Block80

 Block78:
	xor eax,eax
	mov word ptr [ebp-0x8C],ax
	mov eax,dword ptr [ebp-0x84]
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea ecx,[ebp-0x8C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block81:
	test ebx,ebx
	sete al
	test al,al
	je Block97

 Block82:
	mov byte ptr [ebp-4],0x1D
	test ebx,ebx
	je Block84

 Block83:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block84:
	mov byte ptr [ebp-4],0x1C
	test esi,esi
	je Block92

 Block85:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block91

 Block86:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block88

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block88:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block90

 Block89:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block90:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block91:
	mov dword ptr [ebp+0x4C],0

 Block92:
	cmp word ptr [ebp+0x20],di
	jne Block95

 Block93:
	mov eax,dword ptr [ebp+0x28]
	xor edx,edx
	mov word ptr [ebp+0x20],dx
	test eax,eax
	je Block70

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block95:
	lea eax,[ebp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block70

 Block96:
	jmp Block5

 Block97:
	test ebx,ebx
	je Block12

 Block98:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp+0x48]
	push edx
	push ebx
	mov dword ptr [ebp+0x48],0
	call eax
	test eax,eax
	jge Block100

 Block99:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block100:
	mov eax,dword ptr [ebp+0x44]
	mov ecx,dword ptr [eax+0xC]
	mov edx,dword ptr [ebp+0x58]
	add eax,0xC
	lea ecx,[ecx+edx*4]
	mov edx,dword ptr [ebp+0x48]
	lea eax,[ebp+0x63]
	push eax
	push edx
	mov dword ptr [ebp+4],ecx
	call ZArray<_x_com_ptr<IWzCanvas>>::_Alloc
	xor edi,edi
	cmp dword ptr [ebp+0x48],edi
	jle Block114

 Block101:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x7C]
	mov byte ptr [ebp-4],0x22
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x21
	call IWzProperty::Getitem
	mov ecx,dword ptr [ebp+4]
	mov edx,dword ptr [ecx]
	mov ecx,eax
	mov byte ptr [ebp-4],0x23
	lea esi,[edx+edi*4]
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block109

 Block102:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0xC]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	mov dword ptr [ebp+0x54],eax
	mov eax,dword ptr [esi]
	dec ecx
	and ecx,dword ptr [ebp+0xC]
	mov dword ptr [ebp+0x5C],ecx
	test eax,eax
	je Block104

 Block103:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block104:
	mov eax,dword ptr [ebp+0x54]
	mov ecx,dword ptr [ebp+0x5C]
	mov dword ptr [esi],ecx
	test eax,eax
	jge Block106

 Block105:
	cmp eax,0x80004002
	jne Block134

 Block106:
	cmp word ptr [ebp-0x7C],8
	mov byte ptr [ebp-4],0x21
	jne Block111

 Block107:
	mov eax,dword ptr [ebp-0x74]
	xor ecx,ecx
	mov word ptr [ebp-0x7C],cx
	test eax,eax
	je Block112

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block109:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block106

 Block110:
	mov dword ptr [esi],0
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block106

 Block111:
	lea edx,[ebp-0x7C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block112:
	inc edi
	cmp edi,dword ptr [ebp+0x48]
	jl Block101

 Block113:
	mov esi,dword ptr [ebp+0x4C]

 Block114:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [ebp-4],0x1D
	call ecx
	mov byte ptr [ebp-4],0x1C
	test esi,esi
	je Block122

 Block115:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block121

 Block116:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block118

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block118:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block120

 Block119:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block120:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block121:
	mov dword ptr [ebp+0x4C],0

 Block122:
	cmp word ptr [ebp+0x20],8
	mov byte ptr [ebp-4],0x1B
	jne Block125

 Block123:
	xor eax,eax
	mov word ptr [ebp+0x20],ax
	mov eax,dword ptr [ebp+0x28]
	test eax,eax
	je Block126

 Block124:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block126

 Block125:
	lea ecx,[ebp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block126:
	mov eax,dword ptr [ebp+0x34]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],0x18
	call eax
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x13
	test eax,eax
	je Block128

 Block127:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block128:
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0xF
	test eax,eax
	je Block130

 Block129:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block130:
	mov eax,dword ptr [ebp+0x50]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],9
	call edx
	mov edi,dword ptr [ebp+0x30]
	mov ebx,dword ptr [ebp+0x58]

 Block131:
	inc ebx
	cmp ebx,0x111
	mov dword ptr [ebp+0x58],ebx
	jl Block30

 Block132:
	mov eax,dword ptr [ebp+0x70]
	test eax,eax
	je Block135

 Block133:
	mov ecx,dword ptr [eax]
	mov dword ptr [ebp+0x54],ecx
	jmp Block136

 Block134:
	mov eax,dword ptr [ebp+0x54]
	push eax
	call _com_issue_error

 Block135:
	mov dword ptr [ebp+0x54],0

 Block136:
	mov ecx,dword ptr [ebp+0x10]
	lea edx,[ebp+0x40]
	push edx
	lea eax,[ebp+0x54]
	push eax
	call ZMap<wchar_t const *, ZRef<CActionMan::MELEEATTACKAFTERIMAGE>, ZXString16>::Insert
	mov byte ptr [ebp-4],1
	test edi,edi
	je Block138

 Block137:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block138:
	mov edi,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0
	test edi,edi
	je Block141

 Block139:
	lea esi,[edi+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block141

 Block140:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block141:
	mov esi,dword ptr [ebp+0x70]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test esi,esi
	je Block149

 Block142:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block149

 Block143:
	test esi,esi
	je Block149

 Block144:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block146

 Block145:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block146:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block148

 Block147:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block148:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block149:
	mov eax,edi
	lea esp,[ebp-0xA0]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x64]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x68
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CActionMan::GetEmployeeImgEntry
_SUB_EXCEPTION_HANDLER(1B490)
__SUB_CLASS_THIS(0001B490, __thiscall, 33417,  CActionMan, ZRef<CActionMan::EMPLOYEEIMGENTRY>*, ZRef<CActionMan::EMPLOYEEIMGENTRY>*, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1B490
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x60]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x20],esi
	xor ebx,ebx
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x14],ebx
	lea eax,[esp+0x18]
	push 0xDA0
	push eax
	mov dword ptr [esp+0x70],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edi,dword ptr [esp+0x74]
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x74],2
	call ZXString16::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x68],1
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov dword ptr [esp+0x2C],ebx
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x1C]
	lea ecx,[esi+0x200]
	push eax
	mov byte ptr [esp+0x70],3
	mov dword ptr [esp+0x20],edi
	mov dword ptr [esp+0x2C],ecx
	call ZMap<long, ZRef<CActionMan::EMPLOYEEIMGENTRY>, long>::GetAt
	test eax,eax
	jne Block39

 Block3:
	push 0x18
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,ebx
	je Block10

 Block4:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3 // TODO: 		mov dword ptr [eax],offset CActionMan::EMPLOYEEIMGENTRY::`vftable'
	mov dword ptr [eax+0xC],ebx
	mov esi,eax
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov edi,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x2C],esi
	cmp edi,ebx
	je Block8

 Block6:
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block7:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block8:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x40]
	push ecx
	call edi
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block11

 Block9:
	push eax
	call _com_issue_error

 Block10:
	xor esi,esi
	jmp Block5

 Block11:
	lea eax,[esp+0x30]
	push eax
	mov byte ptr [esp+0x6C],4
	call edi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	push 0
	push 0
	lea edx,[esp+0x48]
	push edx
	mov edx,dword ptr [esp+0x20]
	lea eax,[esp+0x3C]
	push eax
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,5
	push edx
	mov byte ptr [esp+0x80],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x7C],6
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea eax,[esp+0x64]
	mov byte ptr [esp+0x7C],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x70],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block18

 Block16:
	cmp eax,0x80004002
	je Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x68],9
	cmp word ptr [esp+0x50],bx
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[esp+0x50]
	push edx
	call edi

 Block22:
	mov byte ptr [esp+0x68],0xA
	cmp word ptr [esp+0x30],bx
	jne Block25

 Block23:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea ecx,[esp+0x30]
	push ecx
	call edi

 Block26:
	mov byte ptr [esp+0x68],0xB
	cmp word ptr [esp+0x40],bx
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea eax,[esp+0x40]
	push eax
	call edi

 Block30:
	mov edi,dword ptr [esi+0xC]
	mov ebp,dword ptr [esp+0x18]
	cmp edi,ebp
	je Block35

 Block31:
	mov dword ptr [esi+0xC],ebp
	test ebp,ebp
	je Block33

 Block32:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+4]
	push ebp
	call edx

 Block33:
	test edi,edi
	je Block35

 Block34:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block35:
	mov ecx,dword ptr [esp+0x20]
	add ecx,0x1EC
	call ZList<ZRef<CActionMan::EMPLOYEEIMGENTRY>>::AddTail_
	lea edx,[esp+0x28]
	push edx
	mov ecx,eax
	call ZRef<CActionMan::EMPLOYEEIMGENTRY>::op_assign_copy
	mov eax,dword ptr [esp+0x74]
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [esp+0x28]
	lea edx,[esp+0x78]
	push edx
	mov dword ptr [esp+0x7C],eax
	call ZMap<long, ZRef<CActionMan::EMPLOYEEIMGENTRY>, long>::Insert
	mov dword ptr [esi+0x14],eax
	call timeGetTime
	mov ebx,dword ptr [esp+0x70]
	lea edi,[esi+4]
	mov dword ptr [esi+0x10],eax
	push edi
	mov dword ptr [ebx+4],esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x1C],1
	mov byte ptr [esp+0x68],3
	test ebp,ebp
	je Block37

 Block36:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block37:
	push edi
	mov byte ptr [esp+0x6C],1
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block42

 Block38:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	jmp Block41

 Block39:
	call timeGetTime
	mov esi,dword ptr [esp+0x2C]
	mov ebx,dword ptr [esp+0x70]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	lea edi,[esi+4]
	mov dword ptr [esi+0x10],eax
	push edi
	mov dword ptr [ebx+4],esi
	call ebp
	push edi
	mov dword ptr [esp+0x20],1
	mov byte ptr [esp+0x6C],1
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block42

 Block40:
	push edi
	call ebp

 Block41:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block42:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x68],0
	test eax,eax
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block44:
	mov eax,ebx
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret 8
}
}
// CActionMan::LoadSummonedAction
_SUB_EXCEPTION_HANDLER(23100)
__SUB_CLASS_THIS(00023100, __thiscall, 33419,  CActionMan, void, long, long, long, ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY> >&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_23100
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xE4
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xF8]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x7C],ebp
	mov esi,dword ptr [esp+0x108]
	mov edi,dword ptr [esp+0x10C]
	mov eax,dword ptr [esp+0x110]
	xor ebx,ebx
	mov dword ptr [esp+0x94],esi
	mov dword ptr [esp+0x98],edi
	mov dword ptr [esp+0x9C],eax
	mov dword ptr [esp+0x30],ebx
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x98]
	lea ecx,[ebp+0x258]
	push eax
	mov dword ptr [esp+0x108],ebx
	mov dword ptr [esp+0x88],ecx
	call ZMap<ActionKey, ZRef<CActionMan::SUMMONEDACTIONENTRY>, ActionKey>::GetAt
	test eax,eax
	je Block3

 Block1:
	call timeGetTime
	mov edi,dword ptr [esp+0x114]
	mov esi,dword ptr [esp+0x30]
	mov ecx,edi
	mov dword ptr [esi+0x30],eax
	call ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>::RemoveAll
	lea ecx,[esi+0x1C]
	push ecx
	mov ecx,edi
	call ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>::AddTail_List
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x104],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block127

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax
	jmp Block127

 Block3:
	push 0x3C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,ebx
	je Block5

 Block4:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3 // TODO: 		mov dword ptr [eax],offset CActionMan::SUMMONEDACTIONENTRY::`vftable'
	int 3 // TODO: 		mov dword ptr [eax+0x1C],offset ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>::`vftable'
	mov dword ptr [eax+0x24],ecx
	mov dword ptr [eax+0x28],ecx
	mov dword ptr [eax+0x2C],ecx
	mov ebx,eax
	jmp Block6

 Block5:
	xor ebx,ebx
	xor ecx,ecx

 Block6:
	mov dword ptr [esp+0x3C],ebx
	mov dword ptr [esp+0x48],ebx
	cmp ebx,ecx
	je Block8

 Block7:
	lea ecx,[ebx+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	mov edx,dword ptr [esp+0x110]
	push edi
	mov dword ptr [ebx+0xC],esi
	push esi
	lea eax,[esp+0x3C]
	mov dword ptr [ebx+0x10],edi
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x10C],1
	mov dword ptr [ebx+0x14],edx
	call CActionMan::GetSummonedProp
	mov edi,dword ptr [esp+0x34]
	test edi,edi
	sete al
	test al,al
	je Block12

 Block9:
	mov byte ptr [esp+0x100],1
	test edi,edi
	je Block11

 Block10:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block11:
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0x100],0
	call ZRef<CActionMan::SUMMONEDACTIONENTRY>::~ZRef<CActionMan::SUMMONEDACTIONENTRY>
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x100],0xFFFFFFFF
	call ZRef<CActionMan::SUMMONEDACTIONENTRY>::~ZRef<CActionMan::SUMMONEDACTIONENTRY>
	jmp Block127

 Block12:
	mov eax,dword ptr [esp+0x110]
	mov eax,dword ptr [eax*4+_D_S_SSUMMONEDACTIO]
	xor ebx,ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block14

 Block13:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	mov byte ptr [esp+0x10C],3
	cmp edi,ebx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea ecx,[esp+0xE4]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x110],2
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x108],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block19

 Block17:
	cmp eax,0x80004002
	je Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	cmp word ptr [esp+0xD8],8
	mov byte ptr [esp+0x100],6
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0xE0]
	xor edx,edx
	mov word ptr [esp+0xD8],dx
	cmp eax,ebx
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea eax,[esp+0xD8]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov esi,dword ptr [esp+0x18]
	cmp esi,ebx
	sete al
	test al,al
	je Block27

 Block24:
	mov byte ptr [esp+0x100],2
	cmp esi,ebx
	je Block26

 Block25:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block26:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [esp+0x104],1
	call ecx
	jmp Block11

 Block27:
	lea edx,[esp+0x84]
	push edx
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [esp+0x100],7
	cmp esi,ebx
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	lea eax,[esp+0x78]
	push eax
	mov ecx,esi
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0x104],8
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0x100],0xA
	cmp eax,ebx
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block31:
	mov dword ptr [esp+0x6C],ebx
	cmp dword ptr [esp+0x40],ebx
	je Block15

 Block32:
	jmp Block34

 Block34:
	mov ebp,dword ptr [esp+0x40]
	mov eax,dword ptr [ebp]
	mov eax,dword ptr [eax+0xC]
	lea ecx,[esp+0x6C]
	push ecx
	lea edx,[esp+0x88]
	push edx
	push 1
	push ebp
	call eax
	test eax,eax
	jne Block108

 Block35:
	lea ecx,[esp+0x84]
	push ecx
	lea edx,[esp+0x20]
	push edx
	call DetachBSTR
	mov esi,dword ptr [esp+0x24]
	add esp,4
	xor ebp,ebp
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [eax],esi
	cmp esi,ebp
	je Block37

 Block36:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block37:
	lea ecx,[esp+0x50]
	push ecx
	mov ecx,dword ptr [esp+0x20]
	mov byte ptr [esp+0x108],0xC
	mov byte ptr [esp+0x108],0xB
	call IWzProperty::Getitem
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x74]
	push eax
	mov byte ptr [esp+0x108],0xD
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [esp+0x104],0xE
	mov dword ptr [esp+0x2C],ebp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block39:
	lea ecx,[esp+0x2C]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	cmp eax,ebp
	jge Block41

 Block40:
	cmp eax,0x80004002
	jne Block18

 Block41:
	mov eax,dword ptr [esp+0x70]
	mov byte ptr [esp+0x100],0x10
	cmp eax,ebp
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block43:
	mov ebx,dword ptr [esp+0x28]
	cmp ebx,ebp
	sete al
	test al,al
	je Block52

 Block44:
	mov byte ptr [esp+0x100],0xD
	cmp ebx,ebp
	je Block46

 Block45:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block46:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x100],0xB
	jne Block49

 Block47:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	cmp eax,ebp
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block50:
	mov byte ptr [esp+0x100],0xA
	cmp esi,ebp
	je Block34

 Block51:
	mov ecx,esi
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x1C],ebp
	jmp Block34

 Block52:
	push 0x4C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,ebp
	je Block54

 Block53:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3 // TODO: 		mov dword ptr [eax],offset CActionMan::SUMMONEDACTIONFRAMEENTRY::`vftable'
	mov dword ptr [eax+0xC],ebp
	mov edi,eax
	jmp Block55

 Block54:
	xor edi,edi

 Block55:
	cmp ebx,ebp
	je Block15

 Block56:
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,ebx
	call IWzCanvas::Getproperty
	mov esi,dword ptr [edi+0xC]
	mov byte ptr [esp+0x100],0x11
	cmp esi,ebx
	je Block59

 Block57:
	mov dword ptr [edi+0xC],ebx
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+4]
	push ebx
	call eax
	cmp esi,ebp
	je Block59

 Block58:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block59:
	push 0x78
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1AA9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [esp+0x28]
	mov byte ptr [esp+0x108],0x12
	cmp esi,ebp
	je Block15

 Block60:
	lea ecx,[esp+0xF0]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x10C],0x11
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x108],0x13
	call get_int32
	add esp,8
	cmp word ptr [esp+0xE8],8
	mov dword ptr [edi+0x40],eax
	mov byte ptr [esp+0x100],0x11
	jne Block63

 Block61:
	mov eax,dword ptr [esp+0xF0]
	xor edx,edx
	mov word ptr [esp+0xE8],dx
	cmp eax,ebp
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea eax,[esp+0xE8]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block64:
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A98
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x7C]
	push edx
	mov ecx,ebx
	mov byte ptr [esp+0x10C],0x14
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x108],0x15
	cmp ecx,ebp
	je Block15

 Block65:
	lea eax,[esp+0xB0]
	push eax
	mov byte ptr [esp+0x10C],0x16
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x108],0x17
	call get_int32
	add esp,8
	cmp word ptr [esp+0xA8],8
	mov dword ptr [edi+0x44],eax
	mov byte ptr [esp+0x100],0x16
	jne Block68

 Block66:
	mov eax,dword ptr [esp+0xB0]
	xor ecx,ecx
	mov word ptr [esp+0xA8],cx
	cmp eax,ebp
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea edx,[esp+0xA8]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	mov eax,dword ptr [esp+0x74]
	mov byte ptr [esp+0x100],0x11
	cmp eax,ebp
	je Block71

 Block70:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block71:
	push 0xFFFFFFFF
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A99
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,ebx
	mov byte ptr [esp+0x10C],0x18
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x108],0x19
	cmp ecx,ebp
	je Block15

 Block72:
	lea edx,[esp+0xC0]
	push edx
	mov byte ptr [esp+0x10C],0x1A
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x108],0x1B
	call get_int32
	mov ebx,8
	add esp,8
	mov dword ptr [edi+0x48],eax
	mov byte ptr [esp+0x100],0x1A
	cmp word ptr [esp+0xB8],bx
	jne Block75

 Block73:
	xor eax,eax
	mov word ptr [esp+0xB8],ax
	mov eax,dword ptr [esp+0xC0]
	cmp eax,ebp
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea ecx,[esp+0xB8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block76:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x100],0x11
	cmp eax,ebp
	je Block78

 Block77:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block78:
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1ABE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0xD4]
	mov byte ptr [esp+0x10C],0x1C
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x110],0x11
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x108],0x1D
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x3C]
	mov dword ptr [esp+0x3C],ebp
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,ebp
	jge Block80

 Block79:
	cmp eax,0x80004002
	jne Block18

 Block80:
	mov byte ptr [esp+0x100],0x1F
	cmp word ptr [esp+0xC8],bx
	jne Block83

 Block81:
	xor eax,eax
	mov word ptr [esp+0xC8],ax
	mov eax,dword ptr [esp+0xD0]
	cmp eax,ebp
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea ecx,[esp+0xC8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	push ebp
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1ACB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x68]
	mov byte ptr [esp+0x10C],0x20
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x110],0x1F
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x108],0x21
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebp
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,ebp
	jge Block86

 Block85:
	cmp eax,0x80004002
	jne Block18

 Block86:
	mov byte ptr [esp+0x100],0x23
	cmp word ptr [esp+0x5C],bx
	jne Block89

 Block87:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	cmp eax,ebp
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea edx,[esp+0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block90:
	mov ebx,dword ptr [esp+0x38]
	mov ebp,dword ptr [esp+0x14]
	test ebx,ebx
	sete al
	test al,al
	sete al
	test al,al
	je Block95

 Block91:
	test ebp,ebp
	sete al
	test al,al
	sete al
	test al,al
	je Block95

 Block92:
	test ebp,ebp
	je Block15

 Block93:
	test ebx,ebx
	je Block15

 Block94:
	mov ecx,ebp
	call IWzShape2D::Gety
	push eax
	mov ecx,ebp
	call IWzShape2D::Getx
	push eax
	mov ecx,ebx
	call IWzShape2D::Gety
	push eax
	mov ecx,ebx
	call IWzShape2D::Getx
	push eax
	lea eax,[edi+0x10]
	push eax
	call SECRECT::SetRect
	add esp,0x14
	jmp Block96

 Block95:
	lea esi,[edi+0x10]
	mov edx,esi
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xC]
	xor ecx,ecx
	mov dword ptr [esi+8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x18]
	xor ecx,ecx
	mov dword ptr [esi+0x14],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x24]
	xor ecx,ecx
	mov dword ptr [esi+0x20],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2C],eax

 Block96:
	lea esi,[edi+4]
	push esi
	mov dword ptr [esp+0xA8],edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x114]
	mov byte ptr [esp+0x100],0x24
	call ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>::AddTail_
	lea ecx,[esp+0xA0]
	push ecx
	mov ecx,eax
	call ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>::op_assign_copy
	push esi
	mov byte ptr [esp+0x104],0x23
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block98

 Block97:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block98:
	mov dword ptr [esp+0xA4],0
	mov byte ptr [esp+0x100],0x1F
	test ebp,ebp
	je Block100

 Block99:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx

 Block100:
	mov byte ptr [esp+0x100],0x11
	test ebx,ebx
	je Block102

 Block101:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block102:
	mov eax,dword ptr [esp+0x20]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0x104],0x10
	call eax
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x104],0xD
	call edx
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x100],0xB
	jne Block105

 Block103:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block106:
	cmp dword ptr [esp+0x1C],0
	mov byte ptr [esp+0x100],0xA
	je Block34

 Block107:
	mov ecx,dword ptr [esp+0x1C]
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x1C],0
	jmp Block34

 Block108:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x49F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x20]
	lea eax,[esp+0x64]
	mov byte ptr [esp+0x108],0x25
	push eax
	mov byte ptr [esp+0x10C],0xA
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x108],0x26
	call get_int32
	add esp,8
	mov esi,eax
	neg esi
	sbb esi,esi
	neg esi
	cmp word ptr [esp+0x5C],8
	mov byte ptr [esp+0x100],0xA
	jne Block111

 Block109:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	test eax,eax
	je Block112

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block111:
	lea edx,[esp+0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block112:
	mov ebx,dword ptr [esp+0x114]
	test esi,esi
	je Block118

 Block113:
	mov esi,dword ptr [ebx+0x10]
	mov dword ptr [esp+0x20],esi
	test esi,esi
	je Block118

 Block114:
	cmp esi,dword ptr [ebx+0xC]
	je Block117

 Block115:
	cmp esi,dword ptr [ebx+0x10]
	je Block117

 Block116:
	mov ecx,ebx
	call ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>::AddTail_
	push esi
	mov ecx,eax
	call ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>::op_assign_copy

 Block117:
	lea eax,[esp+0x20]
	push eax
	call ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>::GetPrev
	mov esi,dword ptr [esp+0x24]
	add esp,4
	test esi,esi
	jne Block114

 Block118:
	mov edi,dword ptr [esp+0x3C]
	lea esi,[edi+0x1C]
	mov ecx,esi
	call ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>::RemoveAll
	push ebx
	mov ecx,esi
	call ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>::AddTail_List
	mov ecx,dword ptr [esp+0x7C]
	add ecx,0x244
	call ZList<ZRef<CActionMan::SUMMONEDACTIONENTRY>>::AddTail_
	lea ecx,[esp+0x44]
	mov esi,eax
	push ecx
	mov ecx,esi
	call ZRef<CActionMan::SUMMONEDACTIONENTRY>::op_assign_copy
	mov ecx,dword ptr [esp+0x80]
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x98]
	push eax
	mov dword ptr [edi+0x38],esi
	call ZMap<ActionKey, ZRef<CActionMan::SUMMONEDACTIONENTRY>, ActionKey>::Insert
	mov dword ptr [edi+0x34],eax
	call timeGetTime
	mov dword ptr [edi+0x30],eax
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov byte ptr [esp+0x104],7
	call edx
	cmp word ptr [esp+0x84],8
	mov byte ptr [esp+0x100],6
	jne Block121

 Block119:
	xor eax,eax
	mov word ptr [esp+0x84],ax
	mov eax,dword ptr [esp+0x8C]
	test eax,eax
	je Block122

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block122

 Block121:
	lea ecx,[esp+0x84]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block122:
	mov eax,dword ptr [esp+0x18]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0x104],2
	call eax
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x104],1
	call edx
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	lea esi,[edi+4]
	push esi
	mov byte ptr [esp+0x104],0
	call ebx
	test eax,eax
	jne Block124

 Block123:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block124:
	mov esi,dword ptr [esp+0x30]
	mov dword ptr [esp+0x100],0xFFFFFFFF
	test esi,esi
	je Block127

 Block125:
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block127

 Block126:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block127:
	mov ecx,dword ptr [esp+0xF8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xF0
	ret 0x10
}
}
// SECRECT::_ZtlSecureGet_right
__SUB_CLASS0(00007800, __fastcall, 113546,  SECRECT, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x20]
	push eax
	add ecx,0x18
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CActionMan::load_character_action
_SUB_EXCEPTION_HANDLER(26CE0)
__SUB_CLASS_THIS(00026CE0, __thiscall, 33391,  CActionMan, int32_t, long, long, long*, ZArray<CActionFrame>&, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_26CE0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [esp+0x30]
	xor eax,eax
	cmp dword ptr [ecx+4],eax
	mov ecx,dword ptr [esp+0x38]
	setne al
	mov ebx,dword ptr [esp+0x2C]
	mov edi,eax
	mov eax,0x14F8B589
	imul ecx
	sar edx,0xD
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov edx,dword ptr [esp+0x34]
	mov esi,eax
	sub esi,0x11
	neg esi
	sbb esi,esi
	push edi
	not esi
	and esi,ecx
	mov ecx,dword ptr [esp+0x40]
	push ecx
	mov ecx,dword ptr [esp+0x30]
	push 0
	push edx
	lea eax,[ebx+0x7D0]
	push eax
	push ebx
	push ecx
	mov dword ptr [esp+0x30],edi
	call load_item_action
	lea edx,[esp+0x44]
	push edx
	call action_mapping_for_ghost
	mov ebp,dword ptr [esp+0x48]
	add esp,0x20
	mov eax,ebp
	cmp ebp,0x2F
	jne Block2

 Block1:
	mov eax,0x2C

 Block2:
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [esp+0x34]
	push edi
	push ecx
	push 0
	push edx
	lea ecx,[ebx+0x2EE0]
	push ecx
	push ebx
	push eax
	call load_item_action
	add esp,0x1C
	xor edi,edi
	lea esp,[esp]

 Block3:
	cmp edi,0xB
	jne Block12

 Block4:
	cmp ebp,0x58
	je Block19

 Block5:
	cmp ebp,0x60
	je Block19

 Block6:
	cmp ebp,0x70
	je Block19

 Block7:
	cmp ebp,0x8A
	je Block19

 Block8:
	cmp ebp,0x57
	je Block19

 Block9:
	cmp ebp,0x1B
	je Block19

 Block10:
	cmp ebp,0x1C
	jne Block15

 Block11:
	jmp Block19

 Block12:
	cmp edi,0x12
	je Block19

 Block13:
	cmp edi,0x13
	je Block19

 Block14:
	cmp edi,0x14
	je Block19

 Block15:
	mov edx,dword ptr [esp+0x30]
	mov eax,dword ptr [edx+edi*4]
	test eax,eax
	je Block19

 Block16:
	mov ecx,ebp
	cmp ebp,0x2F
	jne Block18

 Block17:
	mov ecx,0x2C

 Block18:
	mov edx,dword ptr [esp+0x14]
	push edx
	mov edx,dword ptr [esp+0x40]
	push edx
	xor edx,edx
	cmp edi,0xB
	setne dl
	dec edx
	and edx,esi
	push edx
	mov edx,dword ptr [esp+0x40]
	push edx
	push eax
	push ebx
	push ecx
	call load_item_action
	add esp,0x1C

 Block19:
	inc edi
	cmp edi,0x3B
	jle Block3

 Block20:
	mov eax,dword ptr [esp+0x30]
	xor ebp,ebp
	cmp dword ptr [eax+4],ebp
	jne Block51

 Block21:
	test byte ptr [_D__S3__13],1
	jne Block23

 Block22:
	or dword ptr [_D__S3__13],1
	push 0x4A1
	push offset _D_S_BSCAPHAIRVSLOT
	mov dword ptr [esp+0x28],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	int 3 // TODO: 		push offset `dynamic atexit destructor for '`TSimpleSingleton<CDayOfWeek>::GetInstance'::`2'::singleton''+112
	call _atexit
	add esp,4
	mov dword ptr [esp+0x20],0xFFFFFFFF

 Block23:
	mov ecx,dword ptr [esp+0x34]
	mov eax,dword ptr [ecx]
	cmp eax,ebp
	jne Block25

 Block24:
	xor eax,eax
	jmp Block26

 Block25:
	mov eax,dword ptr [eax-4]

 Block26:
	cmp eax,ebp
	jle Block51

 Block27:
	mov dword ptr [esp+0x28],eax

 Block28:
	mov edi,dword ptr [_D_S_BSCAPHAIRVSLOT]
	test edi,edi
	je Block30

 Block29:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block30:
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [eax]
	lea ebx,[ecx+ebp+0x38]
	lea edx,[esp+0x3C]
	cmp ebx,edx
	je Block42

 Block31:
	mov esi,dword ptr [ebx]
	test esi,esi
	je Block40

 Block32:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block39

 Block33:
	test esi,esi
	je Block39

 Block34:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block36

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block36:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block38

 Block37:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block38:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block39:
	mov dword ptr [ebx],0

 Block40:
	mov dword ptr [ebx],edi
	test edi,edi
	je Block49

 Block41:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block42:
	test edi,edi
	je Block49

 Block43:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block49

 Block44:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block46

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block46:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block48

 Block47:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block48:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block49:
	mov eax,1
	add ebp,0x64
	sub dword ptr [esp+0x28],eax
	jne Block28

 Block50:
	jmp Block52

 Block51:
	mov eax,1

 Block52:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 0x18
}
}
// CActionMan::Init
_SUB_EXCEPTION_HANDLER(1BEB0)
__SUB_CLASS_THIS0(0001BEB0, __thiscall, 33384,  CActionMan, void) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x70]
	sub esp,0x70
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1BEB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xD0
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x6C],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	call CActionFrame::LoadMappers
	push 0x7D0
	lea eax,[ebp+0x38]
	push eax
	mov ecx,esi
	call CActionMan::GetCharacterImgEntry
	mov ecx,dword ptr [eax+4]
	mov eax,dword ptr [ebp+0x3C]
	xor ebx,ebx
	mov dword ptr [ebp+0x30],ecx
	cmp eax,ebx
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov edx,dword ptr [ebp+0x3C]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp+0x3C]
	cmp ecx,ebx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	mov dword ptr [ebp+0x3C],ebx

 Block5:
	xor edi,edi
	mov dword ptr [ebp+0x40],edi

 Block6:
	cmp edi,0x37
	je Block143

 Block7:
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push edi
	push eax
	call get_action_name_from_code
	add esp,8
	mov ecx,dword ptr [ebp+0x30]
	mov ecx,dword ptr [ecx+0xC]
	mov dword ptr [ebp-4],ebx
	cmp ecx,ebx
	je Block145

 Block8:
	lea edx,[ebp-0x4C]
	push edx
	mov dword ptr [ebp-4],0xFFFFFFFF
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [ebp-4],1
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x50],esi
	cmp eax,ebx
	je Block11

 Block9:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x28]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x28]
	cmp eax,ebx
	mov esi,ecx
	mov dword ptr [ebp+0x50],esi
	jge Block11

 Block10:
	cmp eax,0x80004002
	jne Block146

 Block11:
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],3
	jne Block14

 Block12:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	cmp eax,ebx
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea eax,[ebp-0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block15:
	lea ecx,[edi-0x7C]
	cmp ecx,7
	ja Block24

 Block16:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push ebx
	push ebx
	push 0xA
	push eax
	push 1
	call __itow
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],4
	cmp esi,ebx
	je Block145

 Block17:
	lea edx,[ebp-0xAC]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x50]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block19

 Block18:
	cmp eax,0x80004002
	jne Block146

 Block19:
	cmp word ptr [ebp-0xAC],8
	mov byte ptr [ebp-4],3
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [ebp-0xAC],ax
	mov eax,dword ptr [ebp-0xA4]
	cmp eax,ebx
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[ebp-0xAC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov esi,dword ptr [ebp+0x50]

 Block24:
	lea edi,[edi+edi*2]
	lea edi,[edi*8+ActionData::m_saCharacterActions]
	mov dword ptr [ebp+0x5C],edi
	mov dword ptr [edi+0xC],ebx
	cmp dword ptr [edi+8],ebx
	je Block81

 Block25:
	cmp esi,ebx
	je Block145

 Block26:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp+0x4C]
	push eax
	push esi
	mov dword ptr [ebp+0x4C],ebx
	call ecx
	cmp eax,ebx
	jge Block28

 Block27:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block28:
	mov esi,dword ptr [ebp+0x4C]
	lea edx,[ebp+0x4B]
	push edx
	lea ecx,[edi+0x14]
	push esi
	call ZArray<ACTIONDATA::PIECE>::_Alloc
	cmp esi,ebx
	mov dword ptr [edi+4],ebx
	mov dword ptr [edi+0x10],ebx
	mov dword ptr [ebp+0x58],ebx
	jle Block142

 Block29:
	mov dword ptr [ebp+0x60],0

 Block30:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x58]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x2C]
	push ecx
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],6
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp+0x68],edi
	test eax,eax
	je Block33

 Block31:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x20]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x20]
	mov edi,ecx
	mov dword ptr [ebp+0x68],edi
	test eax,eax
	jge Block33

 Block32:
	cmp eax,0x80004002
	jne Block146

 Block33:
	mov ebx,8
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x2C],bx
	jne Block36

 Block34:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov eax,dword ptr [ebp+0x5C]
	mov esi,dword ptr [eax+0x14]
	add esi,dword ptr [ebp+0x60]
	push ecx
	mov ecx,esp
	add eax,0x14
	mov dword ptr [ebp+0x64],esp
	push 0x1A9A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0xA
	test edi,edi
	je Block145

 Block38:
	lea edx,[ebp-0x8C]
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0xB
	call _xbstr_t::_ctor_3
	call get_action_code_from_name
	add esp,4
	mov dword ptr [esi],eax
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x8C],bx
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [ebp-0x8C],ax
	mov eax,dword ptr [ebp-0x84]
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[ebp-0x8C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x45D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x10]
	mov byte ptr [ebp-4],0xC
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xD
	call get_int32
	add esp,8
	mov dword ptr [esi+4],eax
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp+0x10],bx
	jne Block45

 Block43:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea edx,[ebp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block46:
	push 0x96
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1AA9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0xCC]
	push ecx
	mov byte ptr [ebp-4],0xE
	mov ecx,edi
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xF
	call get_int32
	add esp,8
	mov dword ptr [esi+8],eax
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0xCC],bx
	jne Block49

 Block47:
	mov eax,dword ptr [ebp-0xC4]
	xor edx,edx
	mov word ptr [ebp-0xCC],dx
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea eax,[ebp-0xCC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block50:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x105F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x6C]
	mov byte ptr [ebp-4],0x10
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x11
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [esi+0x10],eax
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x6C],bx
	jne Block53

 Block51:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea ecx,[ebp-0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1060
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp]
	mov byte ptr [ebp-4],0x12
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x13
	call get_int32
	add esp,8
	mov dword ptr [esi+0x14],eax
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp],bx
	jne Block57

 Block55:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea edx,[ebp]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1AC2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x1C]
	push ecx
	mov byte ptr [ebp-4],0x14
	mov ecx,edi
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	lea edx,[ebp+0x2C]
	push edx
	mov byte ptr [ebp-4],0x15
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x16
	mov dword ptr [ebp+0x44],0
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block60

 Block59:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block60:
	lea ecx,[ebp+0x44]
	call _x_com_ptr<IWzVector2D>::_QueryUnknownComPtr
	test eax,eax
	jge Block62

 Block61:
	cmp eax,0x80004002
	jne Block146

 Block62:
	mov eax,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],0x18
	test eax,eax
	je Block64

 Block63:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block64:
	mov byte ptr [ebp-4],0x19
	cmp word ptr [ebp-0x1C],bx
	jne Block67

 Block65:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block68:
	mov ebx,dword ptr [ebp+0x44]
	xor eax,eax
	cmp ebx,eax
	je Block74

 Block69:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x20]
	mov dword ptr [ebp+0x54],eax
	lea eax,[ebp+0x54]
	push eax
	push ebx
	call ecx
	test eax,eax
	jge Block71

 Block70:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block71:
	mov edx,dword ptr [ebp+0x54]
	mov dword ptr [esi+0x18],edx
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x28]
	lea ecx,[ebp+0x54]
	push ecx
	push ebx
	mov dword ptr [ebp+0x54],0
	call edx
	test eax,eax
	jge Block73

 Block72:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block73:
	mov eax,dword ptr [ebp+0x54]
	jmp Block75

 Block74:
	mov dword ptr [esi+0x18],eax

 Block75:
	mov edx,dword ptr [esi+4]
	mov dword ptr [esi+0x1C],eax
	mov eax,dword ptr [esi]
	lea ecx,[eax+eax*2]
	mov eax,dword ptr [ecx*8+ActionData::m_saCharacterActions+20]
	shl edx,5
	mov ecx,dword ptr [eax+edx+0xC]
	mov eax,dword ptr [esi+8]
	mov dword ptr [esi+0xC],ecx
	mov ecx,dword ptr [ebp+0x5C]
	test eax,eax
	jge Block77

 Block76:
	neg eax
	mov dword ptr [esi+8],eax
	add dword ptr [ecx+0x10],eax

 Block77:
	mov edx,dword ptr [esi+8]
	add dword ptr [ecx+0xC],edx
	mov byte ptr [ebp-4],9
	test ebx,ebx
	je Block79

 Block78:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block79:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [ebp-4],3
	call eax
	mov eax,dword ptr [ebp+0x58]
	add dword ptr [ebp+0x60],0x20
	inc eax
	cmp eax,dword ptr [ebp+0x4C]
	mov dword ptr [ebp+0x58],eax
	jl Block30

 Block80:
	jmp Block142

 Block81:
	cmp esi,ebx
	je Block145

 Block82:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp+0x60]
	push edx
	push esi
	mov dword ptr [ebp+0x60],ebx
	call eax
	cmp eax,ebx
	jge Block84

 Block83:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block84:
	cmp dword ptr [edi+4],ebx
	mov edi,dword ptr [ebp+0x60]
	je Block86

 Block85:
	lea ebx,[edi+edi-2]
	mov dword ptr [ebp+0x58],ebx
	jmp Block87

 Block86:
	mov ebx,edi
	mov dword ptr [ebp+0x58],edi

 Block87:
	mov ecx,dword ptr [ebp+0x5C]
	lea edx,[ebp+0x4B]
	push edx
	add ecx,0x14
	push ebx
	call ZArray<ACTIONDATA::PIECE>::_Alloc
	mov dword ptr [ebp+0x4C],0
	test edi,edi
	jle Block135

 Block88:
	mov dword ptr [ebp+0x44],0
	jmp Block90

 Block89:
	mov esi,dword ptr [ebp+0x50]

 Block90:
	xor ebx,ebx
	lea eax,[ebx+0x20]
	call __chkstk
	mov eax,esp
	push ebx
	push ebx
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x4C]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x3C]
	push ecx
	mov byte ptr [ebp-4],0x1A
	mov ecx,esi
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1B
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x64],esi
	cmp eax,ebx
	je Block93

 Block91:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x24]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x24]
	cmp eax,ebx
	mov esi,ecx
	mov dword ptr [ebp+0x64],esi
	jge Block93

 Block92:
	cmp eax,0x80004002
	jne Block146

 Block93:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0x1D
	jne Block96

 Block94:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	cmp eax,ebx
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block97:
	mov eax,dword ptr [ebp+0x5C]
	mov edi,dword ptr [eax+0x14]
	add edi,dword ptr [ebp+0x44]
	push 0x96
	push ecx
	add eax,0x14
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	push 0x1AA9
	push ecx
	mov dword ptr [edi+4],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x1E
	cmp esi,ebx
	je Block145

 Block98:
	lea edx,[ebp-0x5C]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x1D
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1F
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x5C],8
	mov dword ptr [edi+8],eax
	mov byte ptr [ebp-4],0x1D
	jne Block101

 Block99:
	xor eax,eax
	mov word ptr [ebp-0x5C],ax
	mov eax,dword ptr [ebp-0x54]
	cmp eax,ebx
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea ecx,[ebp-0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block102:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x68],esp
	push 0x105F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x7C]
	mov byte ptr [ebp-4],0x20
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x1D
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x21
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	cmp word ptr [ebp-0x7C],8
	mov dword ptr [edi+0x10],eax
	mov byte ptr [ebp-4],0x1D
	jne Block105

 Block103:
	mov eax,dword ptr [ebp-0x74]
	xor ecx,ecx
	mov word ptr [ebp-0x7C],cx
	cmp eax,ebx
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea edx,[ebp-0x7C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block106:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x68],esp
	push 0x1060
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x9C]
	push ecx
	mov byte ptr [ebp-4],0x22
	mov ecx,esi
	mov byte ptr [ebp-4],0x1D
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x23
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x9C],8
	mov dword ptr [edi+0x14],eax
	mov byte ptr [ebp-4],0x1D
	jne Block109

 Block107:
	mov eax,dword ptr [ebp-0x94]
	xor edx,edx
	mov word ptr [ebp-0x9C],dx
	cmp eax,ebx
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea eax,[ebp-0x9C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block110:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	push 0x1AC2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0xBC]
	mov byte ptr [ebp-4],0x24
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x1D
	call IWzProperty::Getitem
	push eax
	lea eax,[ebp+0x34]
	push eax
	mov byte ptr [ebp-4],0x25
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x26
	mov dword ptr [ebp+0x54],ebx
	mov dword ptr [ebp+0x68],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block112

 Block111:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block112:
	lea ecx,[ebp+0x54]
	call _x_com_ptr<IWzVector2D>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block114

 Block113:
	cmp eax,0x80004002
	jne Block146

 Block114:
	mov eax,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],0x28
	cmp eax,ebx
	je Block116

 Block115:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block116:
	cmp word ptr [ebp-0xBC],8
	mov byte ptr [ebp-4],0x29
	jne Block119

 Block117:
	xor eax,eax
	mov word ptr [ebp-0xBC],ax
	mov eax,dword ptr [ebp-0xB4]
	cmp eax,ebx
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea ecx,[ebp-0xBC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block120:
	mov ebx,dword ptr [ebp+0x54]
	xor eax,eax
	cmp ebx,eax
	je Block126

 Block121:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x20]
	mov dword ptr [ebp+0x68],eax
	lea eax,[ebp+0x68]
	push eax
	push ebx
	call ecx
	test eax,eax
	jge Block123

 Block122:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block123:
	mov edx,dword ptr [ebp+0x68]
	mov dword ptr [edi+0x18],edx
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x28]
	lea ecx,[ebp+0x68]
	push ecx
	push ebx
	mov dword ptr [ebp+0x68],0
	call edx
	test eax,eax
	jge Block125

 Block124:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block125:
	mov eax,dword ptr [ebp+0x68]
	jmp Block127

 Block126:
	mov dword ptr [edi+0x18],eax

 Block127:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	push 0x45A
	push ecx
	mov dword ptr [edi+0x1C],eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0xDC]
	mov byte ptr [ebp-4],0x2A
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x29
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x2B
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	cmp word ptr [ebp-0xDC],8
	mov dword ptr [edi+0xC],eax
	mov byte ptr [ebp-4],0x29
	jne Block130

 Block128:
	xor eax,eax
	mov word ptr [ebp-0xDC],ax
	mov eax,dword ptr [ebp-0xD4]
	test eax,eax
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea ecx,[ebp-0xDC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block131:
	mov edx,dword ptr [edi+8]
	mov eax,dword ptr [ebp+0x5C]
	add dword ptr [eax+0xC],edx
	mov byte ptr [ebp-4],0x1D
	test ebx,ebx
	je Block133

 Block132:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block133:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],3
	call eax
	mov eax,dword ptr [ebp+0x4C]
	add dword ptr [ebp+0x44],0x20
	inc eax
	cmp eax,dword ptr [ebp+0x60]
	mov dword ptr [ebp+0x4C],eax
	jl Block89

 Block134:
	mov ebx,dword ptr [ebp+0x58]
	mov edi,dword ptr [ebp+0x60]

 Block135:
	cmp edi,ebx
	jge Block138

 Block136:
	mov ecx,dword ptr [ebp+0x60]
	mov eax,dword ptr [ebp+0x58]
	sub eax,ecx
	mov edx,ecx
	mov ebx,eax
	shl edx,5
	shl ebx,5
	mov dword ptr [ebp+0x68],eax

 Block137:
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [eax+0x14]
	add eax,0x14
	lea eax,[ecx+edx]
	lea esi,[ecx+ebx]
	mov edi,eax
	mov ecx,8
	rep movsd
	mov ecx,dword ptr [eax+8]
	mov dword ptr [eax+4],0
	mov eax,dword ptr [ebp+0x5C]
	add dword ptr [eax+0xC],ecx
	add edx,0x20
	sub ebx,0x20
	sub dword ptr [ebp+0x68],1
	jne Block137

 Block138:
	mov eax,dword ptr [ebp+0x5C]
	cmp dword ptr [eax+4],0
	je Block140

 Block139:
	xor ecx,ecx
	jmp Block141

 Block140:
	mov edx,dword ptr [ebp+0x58]
	mov esi,dword ptr [eax+0x14]
	mov ecx,dword ptr [eax+0xC]
	shl edx,5
	sub ecx,dword ptr [edx+esi-0x18]

 Block141:
	mov dword ptr [eax+0x10],ecx

 Block142:
	mov eax,dword ptr [ebp+0x50]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call eax
	mov edi,dword ptr [ebp+0x40]
	xor ebx,ebx

 Block143:
	inc edi
	cmp edi,0x111
	mov dword ptr [ebp+0x40],edi
	jl Block6

 Block144:
	lea esp,[ebp-0xEC]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x6C]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x70
	mov esp,ebp
	pop ebp
	ret

 Block145:
	push 0x80004003
	call _com_issue_error

 Block146:
	push eax
	call _com_issue_error
}
}
// load_item_action
_SUB_EXCEPTION_HANDLER(25770)
__SUB(00025770, __cdecl, 146466,  void, long, long, long, ZArray<CActionFrame>&, long, long, int32_t) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x5C]
	sub esp,0x5C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_25770
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xA4
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x58],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	xor esi,esi
	mov dword ptr [ebp+0x2C],esi
	mov dword ptr [ebp+0x50],esi
	mov dword ptr [ebp-4],esi
	mov dword ptr [ebp+0x28],esi
	mov eax,dword ptr [ebp+0x64]
	mov edx,dword ptr [ebp+0x6C]
	lea eax,[eax+eax*2]
	lea ecx,[eax*8+ActionData::m_saCharacterActions]
	push edx
	lea eax,[ebp+0xC]
	mov dword ptr [ebp+0x30],ecx
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	push eax
	mov byte ptr [ebp-4],1
	call CActionMan::GetCharacterImgEntry
	push eax
	lea ecx,[ebp+0x24]
	mov byte ptr [ebp-4],2
	call ZRef<CActionMan::CHARACTERIMGENTRY>::op_assign_copy
	mov eax,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],1
	cmp eax,esi
	je Block4

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov ecx,dword ptr [ebp+0x10]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp+0x10]
	cmp ecx,esi
	je Block4

 Block3:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block4:
	mov eax,dword ptr [ebp+0x28]
	cmp eax,esi
	jne Block6

 Block5:
	mov eax,dword ptr [ebp+0x50]
	cmp eax,esi
	jmp Block349

 Block6:
	mov eax,dword ptr [eax+0x40]
	mov dword ptr [ebp+0x34],eax
	cmp eax,esi
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block8:
	mov byte ptr [ebp-4],3
	cmp dword ptr [ebp+0x74],esi
	je Block58

 Block9:
	mov eax,0x14F8B589
	imul dword ptr [ebp+0x74]
	sar edx,0xD
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x11
	jne Block58

 Block10:
	mov ecx,dword ptr [ebp+0x74]
	push ecx
	lea edx,[ebp+0x54]
	push edx
	call get_equip_data_path
	add esp,8
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block12

 Block11:
	cmp word ptr [eax],0
	jne Block18

 Block12:
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block14:
	mov eax,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block17

 Block15:
	mov ecx,dword ptr [eax]
	push eax

 Block16:
	mov edx,dword ptr [ecx+8]
	call edx

 Block17:
	lea ecx,[ebp+0x24]
	mov byte ptr [ebp-4],0
	call ZRef<CActionMan::CHARACTERIMGENTRY>::~ZRef<CActionMan::CHARACTERIMGENTRY>
	jmp Block348

 Block18:
	push offset _D_VTMISSING
	lea ecx,[ebp-0xA0]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x60]
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::_ctor_1
	mov edx,dword ptr [ebp+0x54]
	push 0
	push 0
	lea eax,[ebp-0xA0]
	push eax
	lea ecx,[ebp-0x60]
	push ecx
	push ecx
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	mov bl,6
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],7
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea eax,[ebp+0x14]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],8
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x4C]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[ebp+0x14]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x60]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0xA0]
	mov byte ptr [ebp-4],0xC
	call Ztl_variant_t::~Ztl_variant_t
	mov esi,dword ptr [ebp+0x4C]
	test esi,esi
	sete al
	test al,al
	je Block28

 Block21:
	mov byte ptr [ebp-4],4
	test esi,esi
	je Block23

 Block22:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block23:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block27:
	lea ecx,[ebp+0x24]
	mov byte ptr [ebp-4],0
	call ZRef<CActionMan::CHARACTERIMGENTRY>::~ZRef<CActionMan::CHARACTERIMGENTRY>
	jmp Block348

 Block28:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x48],esp
	push 0x3D5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0xD
	test esi,esi
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	lea ecx,[ebp-0x38]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0xC
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xE
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x38]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[ebp-0x38]
	mov byte ptr [ebp-4],0x10
	call Ztl_variant_t::~Ztl_variant_t
	mov ebx,dword ptr [ebp+0x38]
	test ebx,ebx
	sete al
	test al,al
	je Block38

 Block31:
	mov byte ptr [ebp-4],0xC
	test ebx,ebx
	je Block33

 Block32:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block33:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],4
	call edx
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block35:
	mov eax,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block37:
	lea ecx,[ebp+0x24]
	mov byte ptr [ebp-4],0
	call ZRef<CActionMan::CHARACTERIMGENTRY>::~ZRef<CActionMan::CHARACTERIMGENTRY>
	jmp Block348

 Block38:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x48],esp
	push 0x4A2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x11
	test ebx,ebx
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	lea ecx,[ebp-0x4C]
	push ecx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x12
	call get_int32
	mov edi,eax
	add esp,8
	neg edi
	sbb edi,edi
	lea ecx,[ebp-0x4C]
	neg edi
	mov byte ptr [ebp-4],0x10
	call Ztl_variant_t::~Ztl_variant_t
	test edi,edi
	je Block47

 Block41:
	call TSimpleSingleton<CDayOfWeek>::GetInstance
	mov ecx,eax
	call CDayOfWeek::GetCurrentDay
	movzx edx,ax
	mov eax,dword ptr [ebp+0x74]
	push edx
	push eax
	lea ecx,[ebp+0x40]
	push ecx
	call get_weekly_data_path
	add esp,0xC
	push offset _D_VTMISSING
	lea ecx,[ebp-0x80]
	mov byte ptr [ebp-4],0x13
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x4C]
	mov byte ptr [ebp-4],0x14
	call Ztl_variant_t::_ctor_1
	push 0
	push 0
	lea edx,[ebp-0x80]
	push edx
	mov edx,dword ptr [ebp+0x40]
	lea eax,[ebp-0x4C]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x48],esp
	push edx
	mov byte ptr [ebp-4],0x15
	call Ztl_bstr_t::_ctor_2
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x16
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	lea eax,[ebp-0x20]
	mov byte ptr [ebp-4],0x15
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x17
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x3C]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[ebp-0x20]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x4C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x80]
	mov byte ptr [ebp-4],0x13
	call Ztl_variant_t::~Ztl_variant_t
	mov edi,dword ptr [ebp+0x3C]
	test edi,edi
	je Block45

 Block44:
	lea ecx,[ebp+0x3C]
	push ecx
	lea ecx,[ebp+0x4C]
	call _x_com_ptr<IWzProperty>::op_assign_copy
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax
	mov esi,dword ptr [ebp+0x4C]

 Block45:
	mov eax,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block47:
	mov eax,0x20
	call __chkstk
	mov ecx,dword ptr [ebp+0x6C]
	mov eax,esp
	push eax
	push ecx
	call get_weapon_type
	add esp,4
	push eax
	call _Int2StrW
	add esp,4
	mov ecx,esp
	mov dword ptr [ebp+0x48],esp
	push eax
	call Ztl_bstr_t::_ctor_2
	mov byte ptr [ebp-4],0x18
	test esi,esi
	jne Block49

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	lea edx,[ebp-0x4C]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	push eax
	lea eax,[ebp+0x44]
	push eax
	mov byte ptr [ebp-4],0x19
	call get_unknown
	add esp,8
	push eax
	lea ecx,[ebp+0x34]
	mov byte ptr [ebp-4],0x1A
	call _x_com_ptr<IWzProperty>::op_assign_unknown_com_ptr
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x19
	test eax,eax
	je Block51

 Block50:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block51:
	lea ecx,[ebp-0x4C]
	call Ztl_variant_t::~Ztl_variant_t
	mov edi,dword ptr [ebp+0x34]
	test edi,edi
	sete al
	test al,al
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	mov byte ptr [ebp-4],0xC
	push ebx
	je Block56

 Block52:
	call ecx
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],4
	call eax
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block54

 Block53:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block54:
	mov byte ptr [ebp-4],1
	test edi,edi
	je Block17

 Block55:
	mov ecx,dword ptr [edi]
	push edi
	jmp Block16

 Block56:
	call ecx
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],4
	call eax
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block58

 Block57:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block58:
	mov esi,dword ptr [ebp+0x30]
	xor ebx,ebx
	cmp dword ptr [esi+8],ebx
	je Block128

 Block59:
	lea ecx,[ebp+0x38]
	push 0x3D1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x1B
	cmp eax,ebx
	je Block61

 Block60:
	mov eax,dword ptr [eax]
	jmp Block62

 Block61:
	xor eax,eax

 Block62:
	push ebx
	lea edx,[ebp+0x50]
	push edx
	push eax
	call PcCreate_IWzProperty
	mov ecx,dword ptr [ebp+0x38]
	add esp,0xC
	mov byte ptr [ebp-4],3
	cmp ecx,ebx
	je Block64

 Block63:
	call _xbstr_t::Data_t::Release

 Block64:
	mov dword ptr [ebp+0x54],ebx
	mov dword ptr [ebp+0x40],ebx

 Block65:
	mov eax,dword ptr [esi+0x14]
	mov edi,dword ptr [ebp+0x34]
	cmp eax,ebx
	je Block120

 Block66:
	mov ecx,dword ptr [ebp+0x54]
	cmp ecx,dword ptr [eax-4]
	jae Block120

 Block67:
	mov eax,dword ptr [esi]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x48],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block69

 Block68:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block69:
	mov byte ptr [ebp-4],0x1C
	cmp edi,ebx
	je Block19

 Block70:
	lea edx,[ebp-0x20]
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	push eax
	lea eax,[ebp+0x38]
	push eax
	mov byte ptr [ebp-4],0x1D
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x1E
	mov dword ptr [ebp+0x3C],ebx
	mov dword ptr [ebp+0x48],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block72

 Block71:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block72:
	lea ecx,[ebp+0x3C]
	call _x_com_ptr<IWzProperty>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block74

 Block73:
	cmp eax,0x80004002
	jne Block161

 Block74:
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x20
	cmp eax,ebx
	je Block76

 Block75:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block76:
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],0x21
	jne Block79

 Block77:
	xor eax,eax
	mov word ptr [ebp-0x20],ax
	mov eax,dword ptr [ebp-0x18]
	cmp eax,ebx
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea ecx,[ebp-0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block80:
	mov edx,dword ptr [ebp+0x6C]
	mov esi,dword ptr [ebp+0x54]
	add edx,0xFFFFF830
	cmp edx,0x3E7
	jbe Block83

 Block81:
	mov edi,dword ptr [ebp+0x3C]
	cmp edi,ebx
	sete al
	test al,al
	je Block97

 Block82:
	mov edi,dword ptr [ebp+0x34]

 Block83:
	mov eax,dword ptr [ebp+0x30]
	mov eax,dword ptr [eax+0x14]
	add eax,dword ptr [ebp+0x40]
	push ecx
	mov edx,dword ptr [eax]
	mov ecx,esp
	mov dword ptr [ebp+0x48],esp
	push edx
	push ecx
	call get_action_name_from_code
	add esp,8
	lea eax,[ebp-0x38]
	mov byte ptr [ebp-4],0x22
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x21
	call IWzProperty::Getitem
	push eax
	lea ecx,[ebp+0x44]
	push ecx
	mov byte ptr [ebp-4],0x23
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x24
	mov dword ptr [ebp+0x48],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block85

 Block84:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block85:
	lea ecx,[ebp+0x3C]
	call _x_com_ptr<IWzProperty>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block87

 Block86:
	cmp eax,0x80004002
	jne Block161

 Block87:
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x23
	cmp eax,ebx
	je Block89

 Block88:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block89:
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],0x21
	jne Block92

 Block90:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	cmp eax,ebx
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea ecx,[ebp-0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block93:
	mov edi,dword ptr [ebp+0x3C]
	cmp edi,ebx
	sete al
	test al,al
	je Block96

 Block94:
	mov byte ptr [ebp-4],3
	cmp edi,ebx
	je Block119

 Block95:
	jmp Block118

 Block96:
	mov ecx,dword ptr [ebp+0x30]
	mov edx,dword ptr [ecx+0x14]
	mov eax,dword ptr [ebp+0x40]
	mov esi,dword ptr [eax+edx+4]

 Block97:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push ebx
	push ebx
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x25
	cmp edi,ebx
	je Block19

 Block98:
	lea ecx,[ebp+0x14]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0x21
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x26
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x4C]
	mov dword ptr [ebp+0x4C],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block100

 Block99:
	cmp eax,0x80004002
	jne Block161

 Block100:
	cmp word ptr [ebp+0x14],8
	mov byte ptr [ebp-4],0x28
	jne Block103

 Block101:
	mov eax,dword ptr [ebp+0x1C]
	xor edx,edx
	mov word ptr [ebp+0x14],dx
	cmp eax,ebx
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea eax,[ebp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block104:
	mov esi,dword ptr [ebp+0x4C]
	cmp esi,ebx
	sete al
	test al,al
	je Block108

 Block105:
	mov byte ptr [ebp-4],0x21
	cmp esi,ebx
	je Block107

 Block106:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block107:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [ebp-4],3
	call ecx
	inc dword ptr [ebp+0x54]
	add dword ptr [ebp+0x40],0x20
	mov esi,dword ptr [ebp+0x30]
	jmp Block65

 Block108:
	mov edx,0xD
	mov word ptr [ebp+4],dx
	mov dword ptr [ebp+0xC],esi
	cmp esi,ebx
	je Block110

 Block109:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block110:
	mov eax,0x20
	mov byte ptr [ebp-4],0x29
	call __chkstk
	mov eax,esp
	lea edx,[ebp+4]
	push edx
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x54]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x2A
	cmp ecx,ebx
	je Block19

 Block111:
	mov byte ptr [ebp-4],0x29
	call IWzProperty::Putitem
	cmp word ptr [ebp+4],8
	mov byte ptr [ebp-4],0x28
	jne Block114

 Block112:
	mov eax,dword ptr [ebp+0xC]
	xor ecx,ecx
	mov word ptr [ebp+4],cx
	cmp eax,ebx
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea edx,[ebp+4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block115:
	mov byte ptr [ebp-4],0x21
	cmp esi,ebx
	je Block117

 Block116:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block117:
	mov byte ptr [ebp-4],3

 Block118:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block119:
	inc dword ptr [ebp+0x54]
	add dword ptr [ebp+0x40],0x20
	mov esi,dword ptr [ebp+0x30]
	jmp Block65

 Block120:
	mov eax,dword ptr [ebp+0x50]
	cmp eax,ebx
	jne Block122

 Block121:
	push 0x80004003
	call _com_issue_error

 Block122:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x4C]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x20]
	mov dword ptr [ebp+0x4C],ebx
	call eax
	cmp eax,ebx
	jge Block124

 Block123:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block124:
	mov eax,dword ptr [ebp+0x50]
	cmp dword ptr [ebp+0x4C],ebx
	jne Block144

 Block125:
	cmp eax,ebx
	je Block144

 Block126:
	mov ecx,eax
	xor eax,eax
	mov dword ptr [ebp+0x50],eax
	test ecx,ecx
	je Block144

 Block127:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax
	jmp Block143

 Block128:
	mov esi,dword ptr [ebp+0x64]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x48],esp
	push esi
	push ecx
	call get_action_name_from_code
	add esp,8
	mov byte ptr [ebp-4],0x2B
	cmp dword ptr [ebp+0x34],ebx
	jne Block130

 Block129:
	push 0x80004003
	call _com_issue_error

 Block130:
	mov ecx,dword ptr [ebp+0x34]
	lea edx,[ebp+0x14]
	push edx
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	push eax
	lea eax,[ebp+0x38]
	mov bl,0x2C
	push eax
	mov byte ptr [ebp-4],bl
	call get_unknown
	add esp,8
	push eax
	lea ecx,[ebp+0x50]
	mov byte ptr [ebp-4],0x2D
	call _x_com_ptr<IWzProperty>::op_assign_unknown_com_ptr
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block132

 Block131:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block132:
	cmp word ptr [ebp+0x14],8
	mov byte ptr [ebp-4],3
	jne Block135

 Block133:
	xor eax,eax
	mov word ptr [ebp+0x14],ax
	mov eax,dword ptr [ebp+0x1C]
	test eax,eax
	je Block136

 Block134:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block136

 Block135:
	lea ecx,[ebp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block136:
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	sete cl
	test cl,cl
	sete cl
	test cl,cl
	je Block144

 Block137:
	add esi,0xFFFFFF84
	cmp esi,7
	ja Block144

 Block138:
	mov eax,0x20
	call __chkstk
	mov edx,dword ptr [ebp+0x78]
	mov eax,esp
	push 0xA
	push eax
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x2E
	test ecx,ecx
	jne Block140

 Block139:
	push 0x80004003
	call _com_issue_error

 Block140:
	lea eax,[ebp-0x60]
	push eax
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	push eax
	lea ecx,[ebp+0x38]
	mov bl,0x2F
	push ecx
	mov byte ptr [ebp-4],bl
	call get_unknown
	add esp,8
	push eax
	lea ecx,[ebp+0x50]
	mov byte ptr [ebp-4],0x30
	call _x_com_ptr<IWzProperty>::op_assign_unknown_com_ptr
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block142

 Block141:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block142:
	lea ecx,[ebp-0x60]
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::~Ztl_variant_t

 Block143:
	mov eax,dword ptr [ebp+0x50]

 Block144:
	xor edi,edi
	cmp eax,edi
	sete cl
	test cl,cl
	je Block149

 Block145:
	mov eax,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],1
	cmp eax,edi
	je Block147

 Block146:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block147:
	mov edi,dword ptr [ebp+0x28]
	lea esi,[edi+4]
	push esi
	mov byte ptr [ebp-4],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block348

 Block148:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx
	jmp Block348

 Block149:
	mov ecx,dword ptr [ebp+0x6C]
	add ecx,0xFFFFF830
	cmp ecx,0x3E7
	ja Block155

 Block150:
	cmp eax,edi
	jne Block152

 Block151:
	push 0x80004003
	call _com_issue_error

 Block152:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x20]
	lea ecx,[ebp+0x4C]
	push ecx
	push eax
	mov esi,eax
	mov dword ptr [ebp+0x4C],edi
	call edx
	cmp eax,edi
	jge Block154

 Block153:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block154:
	mov ecx,dword ptr [ebp+0x4C]
	lea eax,[ebp-0xD]
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x70]
	call ZArray<CActionFrame>::_Alloc

 Block155:
	lea edx,[ebp-0xB0]
	push edx
	call dword ptr [ZImports::_VariantInit]
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x31
	cmp ecx,edi
	jne Block157

 Block156:
	push 0x80004003
	call _com_issue_error

 Block157:
	lea eax,[ebp-0x88]
	push eax
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],0x32
	mov dword ptr [ebp+0x4C],edi
	mov dword ptr [ebp+0x48],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block159

 Block158:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block159:
	lea ecx,[ebp+0x4C]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block162

 Block160:
	cmp eax,0x80004002
	je Block162

 Block161:
	push eax
	call _com_issue_error

 Block162:
	mov eax,dword ptr [ebp-0x88]
	mov byte ptr [ebp-4],0x34
	cmp eax,edi
	je Block164

 Block163:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block164:
	mov dword ptr [ebp-0x84],edi
	cmp dword ptr [ebp+0x4C],edi
	je Block19

 Block165:
	mov eax,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x84]
	push edx
	lea edx,[ebp-0xB0]
	push edx
	push 1
	push eax
	mov eax,dword ptr [ecx+0xC]
	call eax
	test eax,eax
	jne Block340

 Block166:
	lea ecx,[ebp-0xB0]
	push ecx
	lea edx,[ebp+0x30]
	push edx
	call DetachBSTR
	mov esi,dword ptr [ebp+0x30]
	add esp,4
	mov eax,esp
	mov dword ptr [ebp+0x48],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block168

 Block167:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block168:
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x36
	test ecx,ecx
	je Block19

 Block169:
	lea edx,[ebp+0x14]
	push edx
	mov byte ptr [ebp-4],0x35
	call IWzProperty::Getitem
	push eax
	lea eax,[ebp+0x38]
	push eax
	mov byte ptr [ebp-4],0x37
	call get_unknown
	add esp,8
	cmp word ptr [ebp+0x14],8
	mov byte ptr [ebp-4],0x39
	jne Block172

 Block170:
	mov eax,dword ptr [ebp+0x1C]
	xor ecx,ecx
	mov word ptr [ebp+0x14],cx
	test eax,eax
	je Block173

 Block171:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block173

 Block172:
	lea edx,[ebp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block173:
	mov ebx,dword ptr [ebp+0x38]
	test ebx,ebx
	sete al
	test al,al
	je Block184

 Block174:
	mov byte ptr [ebp-4],0x35
	test ebx,ebx
	je Block176

 Block175:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block176:
	mov byte ptr [ebp-4],0x34
	test esi,esi
	je Block165

 Block177:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block183

 Block178:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block180

 Block179:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block180:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block182

 Block181:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block182:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block183:
	mov dword ptr [ebp+0x30],0
	jmp Block165

 Block184:
	test esi,esi
	je Block186

 Block185:
	mov eax,dword ptr [esi]
	jmp Block187

 Block186:
	xor eax,eax

 Block187:
	push eax
	call __wtoi
	mov ecx,dword ptr [ebp+0x70]
	mov edi,eax
	add esp,4
	mov dword ptr [ebp+0x48],edi
	call ZArray<CActionFrame>::GetCount
	cmp edi,eax
	jae Block336

 Block188:
	push ecx
	xor edi,edi
	mov eax,esp
	mov dword ptr [ebp+0x3C],edi
	mov dword ptr [ebp],esp
	mov dword ptr [eax],ebx
	cmp ebx,edi
	je Block190

 Block189:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+4]
	push ebx
	call ecx

 Block190:
	lea ecx,[ebp+0x3C]
	call _x_com_ptr<IWzProperty>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block192

 Block191:
	cmp eax,0x80004002
	jne Block161

 Block192:
	lea edx,[ebp-0x20]
	push edx
	call dword ptr [ZImports::_VariantInit]
	mov ecx,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x3B
	cmp ecx,edi
	je Block19

 Block193:
	lea eax,[ebp-0x64]
	push eax
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],0x3C
	mov dword ptr [ebp-0x50],edi
	mov dword ptr [ebp],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block195

 Block194:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block195:
	lea ecx,[ebp-0x50]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block197

 Block196:
	cmp eax,0x80004002
	jne Block161

 Block197:
	mov eax,dword ptr [ebp-0x64]
	mov byte ptr [ebp-4],0x3E
	cmp eax,edi
	je Block199

 Block198:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block199:
	mov dword ptr [ebp],edi

 Block200:
	mov esi,dword ptr [ebp-0x50]
	cmp esi,edi
	je Block19

 Block201:
	mov eax,dword ptr [esi]
	mov eax,dword ptr [eax+0xC]
	lea ecx,[ebp]
	push ecx
	lea edx,[ebp-0x20]
	push edx
	push 1
	push esi
	call eax
	test eax,eax
	jne Block322

 Block202:
	lea ecx,[ebp-0x20]
	push ecx
	lea edx,[ebp+0x54]
	push edx
	call DetachBSTR
	add esp,8
	mov dword ptr [ebp+0x40],edi
	lea eax,[ebp-0x3C]
	push 0x4A0
	push eax
	mov byte ptr [ebp-4],0x40
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [ebp+0x54]
	cmp ecx,eax
	jne Block204

 Block203:
	xor eax,eax
	jmp Block217

 Block204:
	cmp ecx,edi
	jne Block210

 Block205:
	cmp eax,edi
	je Block208

 Block206:
	mov eax,dword ptr [eax]
	cmp eax,edi
	je Block208

 Block207:
	mov eax,dword ptr [eax-4]
	shr eax,1
	cmp eax,edi
	jne Block209

 Block208:
	xor eax,eax
	jmp Block217

 Block209:
	or eax,0xFFFFFFFF
	jmp Block217

 Block210:
	cmp eax,edi
	jne Block216

 Block211:
	cmp dword ptr [ecx],edi
	je Block214

 Block212:
	mov eax,dword ptr [ecx]
	cmp eax,edi
	je Block214

 Block213:
	mov eax,dword ptr [eax-4]
	shr eax,1
	cmp eax,edi
	jne Block215

 Block214:
	xor eax,eax
	jmp Block217

 Block215:
	mov eax,1
	jmp Block217

 Block216:
	push eax
	call _xbstr_t::Data_t::Compare

 Block217:
	cmp eax,edi
	mov eax,dword ptr [ebp-0x3C]
	setne bl
	cmp eax,edi
	je Block226

 Block218:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,edi
	jne Block225

 Block219:
	cmp esi,edi
	je Block225

 Block220:
	mov eax,dword ptr [esi]
	cmp eax,edi
	je Block222

 Block221:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block222:
	mov eax,dword ptr [esi+4]
	cmp eax,edi
	je Block224

 Block223:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block224:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block225:
	mov dword ptr [ebp-0x3C],edi

 Block226:
	test bl,bl
	je Block254

 Block227:
	cmp dword ptr [ebp+0x7C],edi
	jne Block230

 Block228:
	lea ecx,[ebp-0x24]
	push 0x13DF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	or dword ptr [ebp+0x2C],1
	push eax
	lea ecx,[ebp+0x54]
	call _xbstr_t::operator!=
	test al,al
	jne Block230

 Block229:
	xor bl,bl
	jmp Block231

 Block230:
	mov bl,1

 Block231:
	test byte ptr [ebp+0x2C],1
	je Block241

 Block232:
	mov esi,dword ptr [ebp-0x24]
	and dword ptr [ebp+0x2C],0xFFFFFFFE
	cmp esi,edi
	je Block241

 Block233:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,edi
	jne Block240

 Block234:
	cmp esi,edi
	je Block240

 Block235:
	mov eax,dword ptr [esi]
	cmp eax,edi
	je Block237

 Block236:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block237:
	mov eax,dword ptr [esi+4]
	cmp eax,edi
	je Block239

 Block238:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block239:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block240:
	mov dword ptr [ebp-0x24],edi

 Block241:
	mov esi,dword ptr [ebp+0x54]
	test bl,bl
	je Block304

 Block242:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x44],esp
	mov dword ptr [eax],esi
	cmp esi,edi
	je Block244

 Block243:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block244:
	lea ecx,[ebp-0x38]
	push ecx
	mov ecx,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x41
	mov byte ptr [ebp-4],0x40
	call IWzProperty::Getitem
	push eax
	lea edx,[ebp-0x70]
	push edx
	mov byte ptr [ebp-4],0x42
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x43
	mov dword ptr [ebp+0x44],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block246

 Block245:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block246:
	lea ecx,[ebp+0x40]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block248

 Block247:
	cmp eax,0x80004002
	jne Block161

 Block248:
	mov eax,dword ptr [ebp-0x70]
	mov byte ptr [ebp-4],0x42
	cmp eax,edi
	je Block250

 Block249:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block250:
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],0x40
	jne Block253

 Block251:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	cmp eax,edi
	je Block304

 Block252:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block304

 Block253:
	lea ecx,[ebp-0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block304

 Block254:
	push ecx
	mov ecx,dword ptr [ebp+0x54]
	mov eax,esp
	mov dword ptr [ebp+0x44],esp
	mov dword ptr [eax],ecx
	cmp ecx,edi
	je Block256

 Block255:
	add ecx,8
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block256:
	mov ecx,dword ptr [ebp+0x3C]
	lea edx,[ebp-0x80]
	mov byte ptr [ebp-4],0x44
	push edx
	mov byte ptr [ebp-4],0x40
	call IWzProperty::Getitem
	push eax
	lea eax,[ebp-0x90]
	push eax
	mov byte ptr [ebp-4],0x45
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x46
	mov dword ptr [ebp-0x28],edi
	mov dword ptr [ebp+0x44],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block258

 Block257:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block258:
	lea ecx,[ebp-0x28]
	call _x_com_ptr<IWzProperty>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block260

 Block259:
	cmp eax,0x80004002
	jne Block161

 Block260:
	mov eax,dword ptr [ebp-0x90]
	mov byte ptr [ebp-4],0x48
	cmp eax,edi
	je Block262

 Block261:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block262:
	mov edi,8
	mov byte ptr [ebp-4],0x49
	cmp word ptr [ebp-0x80],di
	jne Block265

 Block263:
	xor eax,eax
	mov word ptr [ebp-0x80],ax
	mov eax,dword ptr [ebp-0x78]
	test eax,eax
	je Block266

 Block264:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block266

 Block265:
	lea ecx,[ebp-0x80]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block266:
	mov esi,dword ptr [ebp-0x28]
	test esi,esi
	je Block19

 Block267:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp+0x44]
	push eax
	push esi
	mov dword ptr [ebp+0x44],0
	call ecx
	test eax,eax
	jge Block269

 Block268:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block269:
	mov ebx,dword ptr [ebp+0x68]
	mov eax,0x20
	call __chkstk
	cmp ebx,dword ptr [ebp+0x44]
	jb Block281

 Block270:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	mov edi,esp
	lea eax,[ebp+0x44]
	push eax
	push esi
	mov dword ptr [ebp+0x44],0
	call ecx
	test eax,eax
	jge Block272

 Block271:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block272:
	mov edx,dword ptr [ebp+0x44]
	push 0xA
	dec edx
	push edi
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x10],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x4C]
	mov byte ptr [ebp-4],0x4A
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x49
	call IWzProperty::Getitem
	push eax
	lea ecx,[ebp-0x68]
	push ecx
	mov byte ptr [ebp-4],0x4B
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x4C
	mov dword ptr [ebp+0x10],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block274

 Block273:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block274:
	lea ecx,[ebp+0x40]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	test eax,eax
	jge Block276

 Block275:
	cmp eax,0x80004002
	jne Block161

 Block276:
	mov eax,dword ptr [ebp-0x68]
	mov byte ptr [ebp-4],0x4B
	test eax,eax
	je Block278

 Block277:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block278:
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],0x49
	jne Block280

 Block279:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	jmp Block289

 Block280:
	lea ecx,[ebp-0x4C]
	jmp Block292

 Block281:
	mov eax,esp
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x10],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0xA0]
	mov byte ptr [ebp-4],0x4D
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x49
	call IWzProperty::Getitem
	push eax
	lea eax,[ebp-0x6C]
	push eax
	mov byte ptr [ebp-4],0x4E
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x4F
	mov dword ptr [ebp+0x10],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block283

 Block282:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block283:
	lea ecx,[ebp+0x40]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	test eax,eax
	jge Block285

 Block284:
	cmp eax,0x80004002
	jne Block161

 Block285:
	mov eax,dword ptr [ebp-0x6C]
	mov byte ptr [ebp-4],0x4E
	test eax,eax
	je Block287

 Block286:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block287:
	mov byte ptr [ebp-4],0x49
	cmp word ptr [ebp-0xA0],di
	jne Block291

 Block288:
	xor eax,eax
	mov word ptr [ebp-0xA0],ax
	mov eax,dword ptr [ebp-0x98]

 Block289:
	test eax,eax
	je Block293

 Block290:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block293

 Block291:
	lea ecx,[ebp-0xA0]

 Block292:
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block293:
	mov eax,0x20
	call __chkstk
	mov edx,dword ptr [ebp+0x68]
	mov eax,esp
	push 0xA
	push eax
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x10],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x60]
	mov byte ptr [ebp-4],0x50
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x49
	call IWzProperty::Getitem
	push eax
	lea ecx,[ebp-0x8C]
	push ecx
	mov byte ptr [ebp-4],0x51
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x52
	mov dword ptr [ebp+0x10],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block295

 Block294:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block295:
	lea ecx,[ebp+0x40]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	test eax,eax
	jge Block297

 Block296:
	cmp eax,0x80004002
	jne Block161

 Block297:
	mov eax,dword ptr [ebp-0x8C]
	mov byte ptr [ebp-4],0x51
	test eax,eax
	je Block299

 Block298:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block299:
	cmp word ptr [ebp-0x60],8
	mov byte ptr [ebp-4],0x49
	jne Block302

 Block300:
	xor eax,eax
	mov word ptr [ebp-0x60],ax
	mov eax,dword ptr [ebp-0x58]
	test eax,eax
	je Block303

 Block301:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block303

 Block302:
	lea ecx,[ebp-0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block303:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],0x40
	call eax
	mov esi,dword ptr [ebp+0x54]
	xor edi,edi

 Block304:
	mov ebx,dword ptr [ebp+0x40]
	cmp ebx,edi
	sete al
	test al,al
	sete al
	test al,al
	je Block312

 Block305:
	mov edx,dword ptr [ebp+0x28]
	mov eax,dword ptr [edx+0x14]
	cmp eax,edi
	je Block307

 Block306:
	mov ecx,dword ptr [eax]
	jmp Block308

 Block307:
	xor ecx,ecx

 Block308:
	mov eax,dword ptr [edx+0x10]
	cmp eax,edi
	je Block310

 Block309:
	mov eax,dword ptr [eax]
	jmp Block311

 Block310:
	xor eax,eax

 Block311:
	mov edx,dword ptr [ebp+0x70]
	push ebx
	push ecx
	mov ecx,dword ptr [ebp+0x48]
	imul ecx,0x64
	add ecx,dword ptr [edx]
	push eax
	call CActionFrame::Merge

 Block312:
	mov byte ptr [ebp-4],0x3F
	cmp ebx,edi
	je Block314

 Block313:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block314:
	mov byte ptr [ebp-4],0x3E
	cmp esi,edi
	je Block200

 Block315:
	mov esi,dword ptr [ebp+0x54]
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block321

 Block316:
	mov eax,dword ptr [esi]
	cmp eax,edi
	je Block318

 Block317:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block318:
	mov eax,dword ptr [esi+4]
	cmp eax,edi
	je Block320

 Block319:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block320:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block321:
	mov dword ptr [ebp+0x54],edi
	jmp Block200

 Block322:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],0x3B
	call ecx
	cmp word ptr [ebp-0x20],8
	mov byte ptr [ebp-4],0x3A
	jne Block325

 Block323:
	mov eax,dword ptr [ebp-0x18]
	xor edx,edx
	mov word ptr [ebp-0x20],dx
	cmp eax,edi
	je Block326

 Block324:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block326

 Block325:
	lea eax,[ebp-0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block326:
	mov eax,dword ptr [ebp+0x3C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x39
	call edx
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x35
	cmp eax,edi
	je Block328

 Block327:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block328:
	mov esi,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x34
	cmp esi,edi
	je Block165

 Block329:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block335

 Block330:
	mov eax,dword ptr [esi]
	cmp eax,edi
	je Block332

 Block331:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block332:
	mov eax,dword ptr [esi+4]
	cmp eax,edi
	je Block334

 Block333:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block334:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block335:
	mov dword ptr [ebp+0x30],edi
	jmp Block165

 Block336:
	mov byte ptr [ebp-4],0x35
	test ebx,ebx
	je Block338

 Block337:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block338:
	test esi,esi
	je Block340

 Block339:
	mov ecx,esi
	call _xbstr_t::Data_t::Release

 Block340:
	mov eax,dword ptr [ebp+0x4C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x31
	call edx
	cmp word ptr [ebp-0xB0],8
	mov byte ptr [ebp-4],3
	jne Block343

 Block341:
	xor eax,eax
	mov word ptr [ebp-0xB0],ax
	mov eax,dword ptr [ebp-0xA8]
	test eax,eax
	je Block344

 Block342:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block344

 Block343:
	lea ecx,[ebp-0xB0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block344:
	mov eax,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block346

 Block345:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block346:
	mov edi,dword ptr [ebp+0x28]
	lea esi,[edi+4]
	push esi
	mov byte ptr [ebp-4],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block348

 Block347:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block348:
	mov eax,dword ptr [ebp+0x50]
	test eax,eax

 Block349:
	mov dword ptr [ebp-4],0xFFFFFFFF
	je Block351

 Block350:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block351:
	lea esp,[ebp-0xC0]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x58]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x5C
	mov esp,ebp
	pop ebp
	ret
}
}
// CActionMan::GetMobImgEntry
_SUB_EXCEPTION_HANDLER(19F20)
__SUB_CLASS_THIS(00019F20, __thiscall, 33402,  CActionMan, ZRef<CActionMan::MOBIMGENTRY>*, ZRef<CActionMan::MOBIMGENTRY>*, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_19F20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xD4
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xE8]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x50],edi
	xor ebp,ebp
	mov dword ptr [esp+0x54],ebp
	mov dword ptr [esp+0x20],ebp
	lea eax,[esp+0x14]
	push 0x3CE
	push eax
	mov dword ptr [esp+0xF8],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xF0],2
	cmp eax,ebp
	je Block2

 Block1:
	mov eax,dword ptr [eax]
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov esi,dword ptr [esp+0xFC]
	push esi
	push eax
	lea ecx,[esp+0x28]
	push ecx
	call ZXString16::Format
	mov ecx,dword ptr [esp+0x20]
	add esp,0xC
	cmp ecx,ebp
	je Block5

 Block4:
	call _xbstr_t::Data_t::Release

 Block5:
	mov dword ptr [esp+0x40],ebp
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x18]
	lea ecx,[edi+0xE0]
	push eax
	mov byte ptr [esp+0xF8],3
	mov dword ptr [esp+0x1C],esi
	mov dword ptr [esp+0x60],ecx
	call ZMap<long, ZRef<CActionMan::MOBIMGENTRY>, long>::GetAt
	test eax,eax
	jne Block111

 Block6:
	push 0x18
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	cmp eax,ebp
	je Block13

 Block7:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	mov dword ptr [eax], 0
	mov dword ptr [eax+0xC],ebp
	mov edi,eax
	mov dword ptr [esp+0x14],eax
	add eax,4
	push eax
	call ebx

 Block8:
	mov esi,dword ptr [esp+0x40]
	mov dword ptr [esp+0x40],edi
	cmp esi,ebp
	je Block11

 Block9:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block11

 Block10:
	push edi
	call ebx
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block11:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x88]
	push ecx
	call esi
	lea edx,[esp+0x88]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block14

 Block12:
	push eax
	call _com_issue_error

 Block13:
	xor edi,edi
	mov dword ptr [esp+0x14],edi
	jmp Block8

 Block14:
	lea eax,[esp+0xA8]
	push eax
	mov byte ptr [esp+0xF4],4
	call esi
	lea ecx,[esp+0xA8]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	push ebp
	push ebp
	lea edx,[esp+0x90]
	push edx
	mov edx,dword ptr [esp+0x2C]
	lea eax,[esp+0xB4]
	push eax
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	mov bl,5
	push edx
	mov byte ptr [esp+0x108],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x104],6
	cmp dword ptr [_D_G_RM],ebp
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	lea eax,[esp+0xCC]
	mov byte ptr [esp+0x104],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xF8],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block21

 Block19:
	cmp eax,0x80004002
	je Block21

 Block20:
	push eax
	call _com_issue_error

 Block21:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [esp+0xF0],9
	cmp word ptr [esp+0xB8],di
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0xC0]
	xor ecx,ecx
	mov word ptr [esp+0xB8],cx
	cmp eax,ebp
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea edx,[esp+0xB8]
	push edx
	call esi

 Block25:
	mov byte ptr [esp+0xF0],0xA
	cmp word ptr [esp+0xA8],di
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [esp+0xA8],ax
	mov eax,dword ptr [esp+0xB0]
	cmp eax,ebp
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[esp+0xA8]
	push ecx
	call esi

 Block29:
	mov byte ptr [esp+0xF0],0xB
	cmp word ptr [esp+0x88],di
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0x90]
	xor edx,edx
	mov word ptr [esp+0x88],dx
	cmp eax,ebp
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea eax,[esp+0x88]
	push eax
	call esi

 Block33:
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x3D5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0xFC],0xC
	cmp ecx,ebp
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	lea edx,[esp+0xD4]
	push edx
	mov byte ptr [esp+0x100],0xB
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xF8],0xD
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x2C],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block38

 Block36:
	cmp eax,0x80004002
	je Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	mov byte ptr [esp+0xF0],0xF
	cmp word ptr [esp+0xC8],di
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [esp+0xC8],ax
	mov eax,dword ptr [esp+0xD0]
	cmp eax,ebp
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[esp+0xC8]
	push ecx
	call esi

 Block42:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x3D6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xF4],0x10
	cmp ecx,ebp
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	lea eax,[esp+0x7C]
	push eax
	mov byte ptr [esp+0xF8],0xF
	call IWzProperty::Getitem
	mov byte ptr [esp+0xF0],0x11
	cmp word ptr [esp+0x78],di
	jne Block99

 Block45:
	mov ecx,dword ptr [esp+0x80]
	push ecx
	call __wtoi
	mov ecx,dword ptr [esp+0x54]
	add esp,4
	push eax
	lea edx,[esp+0x60]
	push edx
	call CActionMan::GetMobImgEntry
	lea eax,[esp+0x98]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov ecx,dword ptr [esp+0x60]
	mov ecx,dword ptr [ecx+0xC]
	mov byte ptr [esp+0xF0],0x13
	cmp ecx,ebp
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	lea edx,[esp+0x64]
	push edx
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0xF4],0x14
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0xF0],0x16
	cmp eax,ebp
	je Block49

 Block48:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block49:
	mov dword ptr [esp+0x1C],ebp
	cmp dword ptr [esp+0x48],ebp
	je Block17

 Block50:
	mov esi,dword ptr [ZImports::_InterlockedIncrement]

 Block51:
	mov edi,dword ptr [esp+0x48]
	mov eax,dword ptr [edi]
	mov eax,dword ptr [eax+0xC]
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x9C]
	push edx
	push 1
	push edi
	call eax
	test eax,eax
	jne Block94

 Block52:
	lea ecx,[esp+0x98]
	push ecx
	lea edx,[esp+0x28]
	push edx
	call DetachBSTR
	mov edi,dword ptr [esp+0x2C]
	add esp,4
	mov eax,esp
	mov dword ptr [esp+0x50],esp
	mov dword ptr [eax],edi
	cmp edi,ebp
	je Block54

 Block53:
	lea eax,[edi+8]
	push eax
	call esi

 Block54:
	mov ecx,dword ptr [esp+0x64]
	mov ecx,dword ptr [ecx+0xC]
	mov byte ptr [esp+0xF4],0x18
	cmp ecx,ebp
	je Block17

 Block55:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0xF8],0x17
	call IWzProperty::Getitem
	lea eax,[esp+0x44]
	push 0x3D5
	push eax
	mov byte ptr [esp+0xF8],0x19
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	cmp eax,ebp
	je Block57

 Block56:
	mov eax,dword ptr [eax]
	jmp Block58

 Block57:
	xor eax,eax

 Block58:
	cmp edi,ebp
	je Block60

 Block59:
	mov ecx,dword ptr [edi]
	jmp Block61

 Block60:
	xor ecx,ecx

 Block61:
	push eax
	push ecx
	call __wcsicmp
	add esp,8
	test eax,eax
	mov eax,dword ptr [esp+0x44]
	sete bl
	cmp eax,ebp
	je Block70

 Block62:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebp
	jne Block69

 Block63:
	cmp esi,ebp
	je Block69

 Block64:
	mov eax,dword ptr [esi]
	cmp eax,ebp
	je Block66

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block66:
	mov eax,dword ptr [esi+4]
	cmp eax,ebp
	je Block68

 Block67:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block68:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block69:
	mov esi,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x44],ebp

 Block70:
	test bl,bl
	je Block72

 Block71:
	cmp word ptr [esp+0x2C],8
	jmp Block88

 Block72:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x50],esp
	mov dword ptr [eax],edi
	cmp edi,ebp
	je Block74

 Block73:
	lea eax,[edi+8]
	push eax
	call esi

 Block74:
	lea ecx,[esp+0xDC]
	push ecx
	mov ecx,dword ptr [esp+0x20]
	mov byte ptr [esp+0xF8],0x1A
	mov byte ptr [esp+0xF8],0x19
	call IWzProperty::Getitem
	cmp word ptr [eax],bp
	setne bl
	cmp word ptr [esp+0xD8],8
	jne Block77

 Block75:
	mov eax,dword ptr [esp+0xE0]
	xor edx,edx
	mov word ptr [esp+0xD8],dx
	cmp eax,ebp
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea eax,[esp+0xD8]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block78:
	test bl,bl
	je Block80

 Block79:
	cmp word ptr [esp+0x2C],8
	jmp Block88

 Block80:
	lea eax,[esp+0x68]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x68]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block12

 Block81:
	lea edx,[esp+0x68]
	push edx
	lea eax,[esp+0x30]
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x58],esp
	mov dword ptr [eax],edi
	cmp edi,ebp
	je Block83

 Block82:
	lea ecx,[edi+8]
	push ecx
	call esi

 Block83:
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0xFC],0x1C
	mov byte ptr [esp+0xFC],0x1B
	call IWzProperty::Add
	mov ebx,8
	mov byte ptr [esp+0xF0],0x19
	cmp word ptr [esp+0x68],bx
	jne Block86

 Block84:
	mov eax,dword ptr [esp+0x70]
	xor edx,edx
	mov word ptr [esp+0x68],dx
	cmp eax,ebp
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea eax,[esp+0x68]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block87:
	cmp word ptr [esp+0x2C],bx

 Block88:
	mov byte ptr [esp+0xF0],0x17
	jne Block91

 Block89:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block92:
	mov byte ptr [esp+0xF0],0x16
	cmp edi,ebp
	je Block51

 Block93:
	mov ecx,edi
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x24],ebp
	jmp Block51

 Block94:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [esp+0xF4],0x13
	call ecx
	cmp word ptr [esp+0x98],8
	mov byte ptr [esp+0xF0],0x12
	jne Block97

 Block95:
	mov eax,dword ptr [esp+0xA0]
	xor edx,edx
	mov word ptr [esp+0x98],dx
	cmp eax,ebp
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea eax,[esp+0x98]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block98:
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0xF0],0x11
	call ZRef<CActionMan::MOBIMGENTRY>::~ZRef<CActionMan::MOBIMGENTRY>

 Block99:
	mov ebx,dword ptr [esp+0x14]
	mov esi,dword ptr [ebx+0xC]
	mov eax,dword ptr [esp+0x18]
	cmp esi,eax
	je Block102

 Block100:
	mov dword ptr [ebx+0xC],eax
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx
	cmp esi,ebp
	je Block102

 Block101:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block102:
	mov ecx,dword ptr [esp+0x50]
	add ecx,0xCC
	call ZList<ZRef<CActionMan::MOBIMGENTRY>>::AddTail_
	lea edx,[esp+0x3C]
	push edx
	mov ecx,eax
	call ZRef<CActionMan::MOBIMGENTRY>::op_assign_copy
	mov eax,dword ptr [esp+0xFC]
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,dword ptr [esp+0x5C]
	lea edx,[esp+0x20]
	push edx
	mov dword ptr [esp+0x24],eax
	call ZMap<long, ZRef<CActionMan::MOBIMGENTRY>, long>::Insert
	mov dword ptr [ebx+0x14],eax
	call timeGetTime
	mov edi,dword ptr [esp+0xF8]
	lea esi,[ebx+4]
	mov dword ptr [ebx+0x10],eax
	push esi
	mov dword ptr [edi+4],ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp word ptr [esp+0x78],8
	mov dword ptr [esp+0x54],1
	mov byte ptr [esp+0xF0],0xF
	jne Block105

 Block103:
	xor eax,eax
	mov word ptr [esp+0x78],ax
	mov eax,dword ptr [esp+0x80]
	cmp eax,ebp
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea ecx,[esp+0x78]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block106:
	mov eax,dword ptr [esp+0x28]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0xF4],0xB
	call eax
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0xF4],3
	call edx
	push esi
	mov byte ptr [esp+0xF4],1
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block108

 Block107:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block108:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0xF0],0
	cmp eax,ebp
	je Block110

 Block109:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block110:
	mov eax,edi
	jmp Block116

 Block111:
	call timeGetTime
	mov esi,dword ptr [esp+0x40]
	mov ebp,dword ptr [esp+0xF8]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	lea edi,[esi+4]
	mov dword ptr [esi+0x10],eax
	push edi
	mov dword ptr [ebp+4],esi
	call ebx
	push edi
	mov dword ptr [esp+0x58],1
	mov byte ptr [esp+0xF4],1
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block113

 Block112:
	push edi
	call ebx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block113:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0xF0],0
	test eax,eax
	je Block115

 Block114:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block115:
	mov eax,ebp

 Block116:
	mov ecx,dword ptr [esp+0xE8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xE0
	ret 8
}
}
// CActionMan::CActionMan
_SUB_EXCEPTION_HANDLER(12ED0)
__SUB_CLASS_THIS0(00012ED0, __thiscall, 33382,  CActionMan, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_12ED0
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
	lea eax,[esi+4]
	xor edi,edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-4]
	mov dword ptr [TSingleton<CActionMan>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CActionMan>::ms_pInstance],edi

 Block3:
	int 3 // TODO: 		mov dword ptr [esi],offset CActionMan::`vftable'
	mov dword ptr [esp+0x1C],edi
	int 3 // TODO: 		mov dword ptr [eax],offset ZList<ZRef<CActionMan::CHARACTERIMGENTRY>>::`vftable'
	mov dword ptr [eax+8],edi
	mov dword ptr [eax+0xC],edi
	mov dword ptr [eax+0x10],edi
	lea ecx,[esi+0x18]
	mov ebx,0x1F
	push 0x64
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<long, ZRef<CActionMan::CHARACTERIMGENTRY>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<CActionMan::CHARACTERIMGENTRY>, long>::_CalcAutoGrow
	int 3 // TODO: 		mov dword ptr [esi+0x30],offset ZList<ZRef<CActionMan::FACELOOKENTRY>>::`vftable'
	mov dword ptr [esi+0x38],edi
	mov dword ptr [esi+0x3C],edi
	mov dword ptr [esi+0x40],edi
	lea ecx,[esi+0x44]
	push 0x64
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<FACELOOKCODES, ZRef<CActionMan::FACELOOKENTRY>, FACELOOKCODES>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<FACELOOKCODES, ZRef<CActionMan::FACELOOKENTRY>, FACELOOKCODES>::_CalcAutoGrow
	lea ecx,[esi+0x5C]
	push 0x64
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<long, ZXString<char>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZXString<char>, long>::_CalcAutoGrow
	int 3 // TODO: 		mov dword ptr [esi+0x74],offset ZList<ZRef<CActionMan::MORPHIMGENTRY>>::`vftable'
	mov dword ptr [esi+0x7C],edi
	mov dword ptr [esi+0x80],edi
	mov dword ptr [esi+0x84],edi
	lea ecx,[esi+0x88]
	push 0x64
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<long, ZRef<CActionMan::MORPHIMGENTRY>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<CActionMan::MORPHIMGENTRY>, long>::_CalcAutoGrow
	int 3 // TODO: 		mov dword ptr [esi+0xA0],offset ZList<ZRef<CActionMan::MORPHACTIONENTRY>>::`vftable'
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esi+0xB0],edi
	lea ecx,[esi+0xB4]
	push 0x64
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<unsigned long, ZRef<CActionMan::MORPHACTIONENTRY>, unsigned long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned long, ZRef<CActionMan::MORPHACTIONENTRY>, unsigned long>::_CalcAutoGrow
	int 3 // TODO: 		mov dword ptr [esi+0xCC],offset ZList<ZRef<CActionMan::MOBIMGENTRY>>::`vftable'
	mov dword ptr [esi+0xD4],edi
	mov dword ptr [esi+0xD8],edi
	mov dword ptr [esi+0xDC],edi
	lea ecx,[esi+0xE0]
	push 0x64
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<long, ZRef<CActionMan::MOBIMGENTRY>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<CActionMan::MOBIMGENTRY>, long>::_CalcAutoGrow
	int 3 // TODO: 		mov dword ptr [esi+0xF8],offset ZList<ZRef<CActionMan::MOBACTIONENTRY>>::`vftable'
	mov dword ptr [esi+0x100],edi
	mov dword ptr [esi+0x104],edi
	mov dword ptr [esi+0x108],edi
	lea ecx,[esi+0x10C]
	push 0x64
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<unsigned long, ZRef<CActionMan::MOBACTIONENTRY>, unsigned long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned long, ZRef<CActionMan::MOBACTIONENTRY>, unsigned long>::_CalcAutoGrow
	lea ecx,[esi+0x124]
	push 0x64
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<wchar_t const *, ZRef<CActionMan::MELEEATTACKAFTERIMAGE>, ZXString16>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<wchar_t const *, ZRef<CActionMan::MELEEATTACKAFTERIMAGE>, ZXString16>::_CalcAutoGrow
	int 3 // TODO: 		mov dword ptr [esi+0x13C],offset ZList<ZRef<CActionMan::NPCIMGENTRY>>::`vftable'
	mov dword ptr [esi+0x144],edi
	mov dword ptr [esi+0x148],edi
	mov dword ptr [esi+0x14C],edi
	lea ecx,[esi+0x150]
	push 0x64
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<long, ZRef<CActionMan::NPCIMGENTRY>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<CActionMan::NPCIMGENTRY>, long>::_CalcAutoGrow
	int 3 // TODO: 		mov dword ptr [esi+0x168],offset ZList<ZRef<CActionMan::NPCACTIONENTRY>>::`vftable'
	mov dword ptr [esi+0x170],edi
	mov dword ptr [esi+0x174],edi
	mov dword ptr [esi+0x178],edi
	lea ecx,[esi+0x17C]
	push 0x64
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<__int64, ZRef<CActionMan::NPCACTIONENTRY>, __int64>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<__int64, ZRef<CActionMan::NPCACTIONENTRY>, __int64>::_CalcAutoGrow
	int 3 // TODO: 		mov dword ptr [esi+0x194],offset ZList<ZRef<CActionMan::PETIMGENTRY>>::`vftable'
	mov dword ptr [esi+0x19C],edi
	mov dword ptr [esi+0x1A0],edi
	mov dword ptr [esi+0x1A4],edi
	lea ecx,[esi+0x1A8]
	push 0x64
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<long, ZRef<CActionMan::PETIMGENTRY>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<CActionMan::PETIMGENTRY>, long>::_CalcAutoGrow
	int 3 // TODO: 		mov dword ptr [esi+0x1C0],offset ZList<ZRef<CActionMan::PETACTIONENTRY>>::`vftable'
	mov dword ptr [esi+0x1C8],edi
	mov dword ptr [esi+0x1CC],edi
	mov dword ptr [esi+0x1D0],edi
	lea ecx,[esi+0x1D4]
	push 0x64
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<unsigned long, ZRef<CActionMan::PETACTIONENTRY>, unsigned long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned long, ZRef<CActionMan::PETACTIONENTRY>, unsigned long>::_CalcAutoGrow
	int 3 // TODO: 		mov dword ptr [esi+0x1EC],offset ZList<ZRef<CActionMan::EMPLOYEEIMGENTRY>>::`vftable'
	mov dword ptr [esi+0x1F4],edi
	mov dword ptr [esi+0x1F8],edi
	mov dword ptr [esi+0x1FC],edi
	lea ecx,[esi+0x200]
	push 0x64
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<long, ZRef<CActionMan::EMPLOYEEIMGENTRY>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<CActionMan::EMPLOYEEIMGENTRY>, long>::_CalcAutoGrow
	int 3 // TODO: 		mov dword ptr [esi+0x218],offset ZList<ZRef<CActionMan::EMPLOYEEACTIONENTRY>>::`vftable'
	mov dword ptr [esi+0x220],edi
	mov dword ptr [esi+0x224],edi
	mov dword ptr [esi+0x228],edi
	lea ecx,[esi+0x22C]
	push 0x64
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<unsigned long, ZRef<CActionMan::EMPLOYEEACTIONENTRY>, unsigned long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned long, ZRef<CActionMan::EMPLOYEEACTIONENTRY>, unsigned long>::_CalcAutoGrow
	int 3 // TODO: 		mov dword ptr [esi+0x244],offset ZList<ZRef<CActionMan::SUMMONEDACTIONENTRY>>::`vftable'
	mov dword ptr [esi+0x24C],edi
	mov dword ptr [esi+0x250],edi
	mov dword ptr [esi+0x254],edi
	lea ecx,[esi+0x258]
	push 0x64
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<ActionKey, ZRef<CActionMan::SUMMONEDACTIONENTRY>, ActionKey>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<ActionKey, ZRef<CActionMan::SUMMONEDACTIONENTRY>, ActionKey>::_CalcAutoGrow
	int 3 // TODO: 		mov dword ptr [esi+0x270],offset ZList<ZRef<CActionMan::SHADOWPARTNERACTIONENTRY>>::`vftable'
	mov dword ptr [esi+0x278],edi
	mov dword ptr [esi+0x27C],edi
	mov dword ptr [esi+0x280],edi
	lea ecx,[esi+0x284]
	push 0x64
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<unsigned long, ZRef<CActionMan::SHADOWPARTNERACTIONENTRY>, unsigned long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned long, ZRef<CActionMan::SHADOWPARTNERACTIONENTRY>, unsigned long>::_CalcAutoGrow
	lea ecx,[esi+0x29C]
	push 0x64
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<long, ZMap<long, ZRef<CActionMan::DRAGONACTIONENTRY>, long>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZMap<long, ZRef<CActionMan::DRAGONACTIONENTRY>, long>, long>::_CalcAutoGrow
	mov byte ptr [esp+0x1C],bl
	call timeGetTime
	mov dword ptr [esi+0x2B4],eax
	mov eax,esi
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
// get_unknown
_SUB_EXCEPTION_HANDLER(176E0)
__SUB(000176E0, __cdecl, 146461,  _x_com_ptr<IUnknown>, Ztl_variant_t&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_176E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x50]
	mov dword ptr fs:[0],eax
	xor ebp,ebp
	mov dword ptr [esp+0x18],ebp
	mov ecx,dword ptr [esp+0x64]
	movzx eax,word ptr [ecx]
	cmp ax,9
	je Block7

 Block1:
	cmp ax,0xD
	je Block7

 Block2:
	mov edx,0x4009
	cmp ax,dx
	je Block5

 Block3:
	mov edx,0x400D
	cmp ax,dx
	je Block5

 Block4:
	xor esi,esi
	jmp Block8

 Block5:
	mov eax,dword ptr [ecx+8]
	cmp eax,ebp
	je Block4

 Block6:
	mov esi,dword ptr [eax]
	jmp Block8

 Block7:
	mov esi,dword ptr [ecx+8]

 Block8:
	mov ebx,esi
	mov dword ptr [esp+0x14],ebx
	cmp esi,ebp
	je Block10

 Block9:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block10:
	cmp esi,ebp
	sete al
	mov dword ptr [esp+0x58],1
	test al,al
	je Block16

 Block11:
	mov edi,dword ptr [esp+0x60]
	mov dword ptr [edi],esi
	cmp esi,ebp
	je Block13

 Block12:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block13:
	mov dword ptr [esp+0x58],0xFFFFFFFF
	cmp esi,ebp
	je Block15

 Block14:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block15:
	mov eax,edi
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret

 Block16:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x68],ebp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [eax],esi
	cmp esi,ebp
	je Block18

 Block17:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block18:
	lea ecx,[esp+0x68]
	call _x_com_ptr<IWzUOL>::_QueryUnknownComPtr
	cmp eax,ebp
	jge Block21

 Block19:
	cmp eax,0x80004002
	je Block21

 Block20:
	push eax
	call _com_issue_error

 Block21:
	mov edi,dword ptr [esp+0x64]
	cmp edi,ebp
	sete al
	test al,al
	sete al
	mov byte ptr [esp+0x58],2
	test al,al
	je Block52

 Block22:
	cmp edi,ebp
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea edx,[esp+0x18]
	push edx
	mov ecx,edi
	call IWzUOL::GetfilePath
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push eax
	mov byte ptr [esp+0x5C],3
	call edi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x5C],4
	call edi
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	push ebp
	push ebp
	mov ebp,dword ptr [esp+0x20]
	lea ecx,[esp+0x38]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [eax],ebp
	test ebp,ebp
	je Block30

 Block29:
	lea eax,[ebp+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block30:
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x6C],6
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	lea ecx,[esp+0x54]
	mov bl,5
	push ecx
	mov byte ptr [esp+0x70],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x60],7
	call Ztl_variant_t::GetUnknown
	cmp esi,eax
	je Block37

 Block33:
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block35

 Block34:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block35:
	test esi,esi
	je Block37

 Block36:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block37:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x58],bl
	cmp word ptr [esp+0x40],si
	jne Block40

 Block38:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea ecx,[esp+0x40]
	push ecx
	call edi

 Block41:
	mov byte ptr [esp+0x58],4
	cmp word ptr [esp+0x20],si
	jne Block44

 Block42:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea eax,[esp+0x20]
	push eax
	call edi

 Block45:
	mov byte ptr [esp+0x58],3
	cmp word ptr [esp+0x30],si
	jne Block48

 Block46:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea edx,[esp+0x30]
	push edx
	call edi

 Block49:
	mov byte ptr [esp+0x58],2
	test ebp,ebp
	je Block51

 Block50:
	mov ecx,ebp
	call _xbstr_t::Data_t::Release

 Block51:
	mov ebx,dword ptr [esp+0x14]
	mov edi,dword ptr [esp+0x64]

 Block52:
	mov esi,dword ptr [esp+0x60]
	mov dword ptr [esi],ebx
	test ebx,ebx
	je Block54

 Block53:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+4]
	push ebx
	call ecx

 Block54:
	mov byte ptr [esp+0x58],1
	test edi,edi
	je Block56

 Block55:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block56:
	mov dword ptr [esp+0x58],0xFFFFFFFF
	test ebx,ebx
	je Block58

 Block57:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block58:
	mov eax,esi
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret
}
}
// CActionMan::LoadMorphAction
_SUB_EXCEPTION_HANDLER(193C0)
__SUB_CLASS_THIS(000193C0, __thiscall, 33398,  CActionMan, void, unsigned long, long, ZArray<ZRef<CActionMan::MORPHACTIONFRAMEENTRY> >&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_193C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xD0
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xE4]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x7C],ebp
	mov esi,dword ptr [esp+0xF4]
	mov edi,dword ptr [esp+0xF8]
	mov eax,esi
	shl eax,8
	or eax,edi
	xor ebx,ebx
	mov dword ptr [esp+0x38],eax
	mov dword ptr [esp+0x48],ebx
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x3C]
	lea ecx,[ebp+0xB4]
	push eax
	mov dword ptr [esp+0xF4],ebx
	mov dword ptr [esp+0x80],ecx
	call ZMap<unsigned long, ZRef<CActionMan::MORPHACTIONENTRY>, unsigned long>::GetAt
	test eax,eax
	je Block3

 Block1:
	call timeGetTime
	mov esi,dword ptr [esp+0x48]
	lea ecx,[esi+0x14]
	push ecx
	mov ecx,dword ptr [esp+0x100]
	mov dword ptr [esi+0x18],eax
	call ZArray<ZRef<CActionMan::MORPHACTIONFRAMEENTRY>>::operator=
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0xF0],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block129

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax
	jmp Block129

 Block3:
	push 0x24
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,ebx
	je Block5

 Block4:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3 // TODO: 		mov dword ptr [eax],offset CActionMan::MORPHACTIONENTRY::`vftable'
	mov dword ptr [eax+0x14],ebx
	mov ebx,eax
	mov dword ptr [esp+0x4C],eax
	jmp Block6

 Block5:
	mov dword ptr [esp+0x4C],ebx

 Block6:
	mov dword ptr [esp+0x64],ebx
	test ebx,ebx
	je Block8

 Block7:
	lea ecx,[ebx+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	push esi
	lea edx,[esp+0x24]
	mov dword ptr [ebx+0xC],esi
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0xF4],1
	mov dword ptr [ebx+0x10],edi
	call CActionMan::GetMorphImgEntry
	xor ebx,ebx
	cmp dword ptr [esp+0x24],ebx
	je Block23

 Block9:
	mov eax,dword ptr [edi*4+ActionData::m_saMorphActions]
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block11

 Block10:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [eax+0xC]
	mov byte ptr [esp+0xF8],3
	cmp ecx,ebx
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea edx,[esp+0xD0]
	push edx
	mov byte ptr [esp+0xFC],2
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xF4],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block16

 Block14:
	cmp eax,0x80004002
	je Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	cmp word ptr [esp+0xC4],8
	mov byte ptr [esp+0xEC],6
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [esp+0xC4],ax
	mov eax,dword ptr [esp+0xCC]
	cmp eax,ebx
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[esp+0xC4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov esi,dword ptr [esp+0x1C]
	cmp esi,ebx
	sete al
	test al,al
	je Block24

 Block21:
	mov byte ptr [esp+0xEC],2
	cmp esi,ebx
	je Block23

 Block22:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block23:
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0xEC],1
	call ZRef<CActionMan::MORPHIMGENTRY>::~ZRef<CActionMan::MORPHIMGENTRY>
	lea ecx,[esp+0x60]
	mov byte ptr [esp+0xEC],0
	call ZRef<CActionMan::MORPHACTIONENTRY>::~ZRef<CActionMan::MORPHACTIONENTRY>
	lea ecx,[esp+0x44]
	mov dword ptr [esp+0xEC],0xFFFFFFFF
	call ZRef<CActionMan::MORPHACTIONENTRY>::~ZRef<CActionMan::MORPHACTIONENTRY>
	jmp Block129

 Block24:
	lea ecx,[esp+0x8C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [esp+0xEC],7
	cmp esi,ebx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea edx,[esp+0x88]
	push edx
	mov ecx,esi
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0xF0],8
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [esp+0x88]
	mov byte ptr [esp+0xEC],0xA
	cmp eax,ebx
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block28:
	mov dword ptr [esp+0x80],ebx
	cmp dword ptr [esp+0x40],ebx
	je Block12

 Block29:
	mov edi,edi

 Block30:
	mov ebx,dword ptr [esp+0x40]
	mov eax,dword ptr [ebx]
	mov eax,dword ptr [eax+0xC]
	lea ecx,[esp+0x80]
	push ecx
	lea edx,[esp+0x90]
	push edx
	push 1
	push ebx
	call eax
	test eax,eax
	jne Block106

 Block31:
	lea ecx,[esp+0x8C]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	call DetachBSTR
	mov esi,dword ptr [esp+0x20]
	add esp,4
	xor ebx,ebx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [eax],esi
	cmp esi,ebx
	je Block33

 Block32:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block33:
	lea ecx,[esp+0x6C]
	push ecx
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0xF4],0xC
	mov byte ptr [esp+0xF4],0xB
	call IWzProperty::Getitem
	lea edx,[esp+0x68]
	push edx
	lea eax,[esp+0x88]
	push eax
	mov byte ptr [esp+0xF4],0xD
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [esp+0xF0],0xE
	mov dword ptr [esp+0x34],ebx
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block35

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block35:
	lea ecx,[esp+0x34]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block37

 Block36:
	cmp eax,0x80004002
	jne Block15

 Block37:
	mov eax,dword ptr [esp+0x84]
	mov byte ptr [esp+0xEC],0x10
	cmp eax,ebx
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block39:
	mov edi,dword ptr [esp+0x30]
	cmp edi,ebx
	sete al
	test al,al
	je Block48

 Block40:
	mov byte ptr [esp+0xEC],0xD
	cmp edi,ebx
	je Block42

 Block41:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block42:
	cmp word ptr [esp+0x68],8
	mov byte ptr [esp+0xEC],0xB
	jne Block45

 Block43:
	mov eax,dword ptr [esp+0x70]
	xor edx,edx
	mov word ptr [esp+0x68],dx
	cmp eax,ebx
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea eax,[esp+0x68]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block46:
	mov byte ptr [esp+0xEC],0xA
	cmp esi,ebx
	je Block30

 Block47:
	mov ecx,esi
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x18],ebx
	jmp Block30

 Block48:
	push 0x2C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,ebx
	je Block50

 Block49:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3 // TODO: 		mov dword ptr [eax],offset CActionMan::MORPHACTIONFRAMEENTRY::`vftable'
	mov dword ptr [eax+0xC],ebx
	mov ebp,eax
	jmp Block51

 Block50:
	xor ebp,ebp

 Block51:
	cmp edi,ebx
	je Block12

 Block52:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	call IWzCanvas::Getproperty
	mov esi,dword ptr [ebp+0xC]
	mov byte ptr [esp+0xEC],0x11
	cmp esi,edi
	je Block55

 Block53:
	mov dword ptr [ebp+0xC],edi
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax
	cmp esi,ebx
	je Block55

 Block54:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block55:
	push 0x78
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1AA9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,dword ptr [esp+0x30]
	xor esi,esi
	mov byte ptr [esp+0xF4],0x12
	cmp ebx,esi
	je Block12

 Block56:
	lea ecx,[esp+0xDC]
	push ecx
	mov ecx,ebx
	mov byte ptr [esp+0xF8],0x11
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xF4],0x13
	call get_int32
	mov edi,8
	add esp,8
	mov dword ptr [ebp+0x28],eax
	mov byte ptr [esp+0xEC],0x11
	cmp word ptr [esp+0xD4],di
	jne Block59

 Block57:
	mov eax,dword ptr [esp+0xDC]
	xor edx,edx
	mov word ptr [esp+0xD4],dx
	cmp eax,esi
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea eax,[esp+0xD4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block60:
	push esi
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1ABE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0xB0]
	mov byte ptr [esp+0xF8],0x14
	push edx
	mov ecx,ebx
	mov byte ptr [esp+0xFC],0x11
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xF4],0x15
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x30],esi
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,esi
	jge Block62

 Block61:
	cmp eax,0x80004002
	jne Block15

 Block62:
	mov byte ptr [esp+0xEC],0x17
	cmp word ptr [esp+0xA4],di
	jne Block65

 Block63:
	xor eax,eax
	mov word ptr [esp+0xA4],ax
	mov eax,dword ptr [esp+0xAC]
	cmp eax,esi
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea ecx,[esp+0xA4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block66:
	push esi
	push esi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1ACB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0xC0]
	mov byte ptr [esp+0xF8],0x18
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0xFC],0x17
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xF4],0x19
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x38],esi
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,esi
	jge Block68

 Block67:
	cmp eax,0x80004002
	jne Block15

 Block68:
	mov byte ptr [esp+0xEC],0x1B
	cmp word ptr [esp+0xB4],di
	jne Block71

 Block69:
	mov eax,dword ptr [esp+0xBC]
	xor ecx,ecx
	mov word ptr [esp+0xB4],cx
	cmp eax,esi
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea edx,[esp+0xB4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block72:
	mov esi,dword ptr [esp+0x2C]
	mov edi,dword ptr [esp+0x34]
	test esi,esi
	sete al
	test al,al
	sete al
	test al,al
	je Block77

 Block73:
	test edi,edi
	sete al
	test al,al
	sete al
	test al,al
	je Block77

 Block74:
	test edi,edi
	je Block12

 Block75:
	test esi,esi
	je Block12

 Block76:
	mov ecx,edi
	call IWzShape2D::Gety
	push eax
	mov ecx,edi
	call IWzShape2D::Getx
	push eax
	mov ecx,esi
	call IWzShape2D::Gety
	push eax
	mov ecx,esi
	call IWzShape2D::Getx
	push eax
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_SetRect]
	jmp Block78

 Block77:
	lea ecx,[ebp+0x10]
	push ecx
	call dword ptr [ZImports::_SetRectEmpty]

 Block78:
	xor esi,esi
	push esi
	push esi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1AB4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x5C]
	mov byte ptr [esp+0xF8],0x1C
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0xFC],0x1B
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xF4],0x1D
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x40],esi
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,esi
	jge Block80

 Block79:
	cmp eax,0x80004002
	jne Block15

 Block80:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0xEC],0x1F
	jne Block83

 Block81:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	cmp eax,esi
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea edx,[esp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	mov edi,dword ptr [esp+0x3C]
	cmp edi,esi
	sete al
	test al,al
	je Block86

 Block85:
	mov dword ptr [ebp+0x24],esi
	mov dword ptr [ebp+0x20],esi
	jmp Block92

 Block86:
	cmp edi,esi
	je Block12

 Block87:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+0x14]
	push ecx
	push edi
	mov dword ptr [esp+0x1C],esi
	call edx
	cmp eax,esi
	jge Block89

 Block88:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block89:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [ebp+0x20],eax
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x28]
	lea edx,[esp+0x14]
	push edx
	push edi
	mov dword ptr [esp+0x1C],esi
	call eax
	cmp eax,esi
	jge Block91

 Block90:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block91:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [ebp+0x24],ecx

 Block92:
	lea esi,[ebp+4]
	push esi
	mov dword ptr [esp+0xA4],ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0xFC]
	lea edx,[esp+0x9C]
	push edx
	push 0xFFFFFFFF
	mov byte ptr [esp+0xF4],0x20
	call ZArray<ZRef<CActionMan::MORPHACTIONFRAMEENTRY>>::InsertBefore
	mov ecx,eax
	call ZRef<CActionMan::MORPHACTIONFRAMEENTRY>::op_assign_copy
	push esi
	mov byte ptr [esp+0xF0],0x1F
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block94

 Block93:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebp
	call edx

 Block94:
	mov dword ptr [esp+0xA0],0
	mov byte ptr [esp+0xEC],0x1B
	test edi,edi
	je Block96

 Block95:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block96:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0xEC],0x17
	test eax,eax
	je Block98

 Block97:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block98:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xEC],0x11
	test eax,eax
	je Block100

 Block99:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block100:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [esp+0xF0],0x10
	call ecx
	mov eax,dword ptr [esp+0x30]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0xF0],0xD
	call eax
	cmp word ptr [esp+0x68],8
	mov byte ptr [esp+0xEC],0xB
	jne Block103

 Block101:
	mov eax,dword ptr [esp+0x70]
	xor ecx,ecx
	mov word ptr [esp+0x68],cx
	test eax,eax
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea edx,[esp+0x68]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block104:
	cmp dword ptr [esp+0x18],0
	mov byte ptr [esp+0xEC],0xA
	je Block30

 Block105:
	mov ecx,dword ptr [esp+0x18]
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x18],0
	jmp Block30

 Block106:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0x49F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,dword ptr [esp+0x24]
	lea ecx,[esp+0x58]
	push ecx
	mov byte ptr [esp+0xF8],0x21
	mov ecx,ebp
	mov byte ptr [esp+0xF8],0xA
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xF4],0x22
	call get_int32
	add esp,8
	mov esi,eax
	neg esi
	sbb esi,esi
	neg esi
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0xEC],0xA
	jne Block109

 Block107:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea eax,[esp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block110:
	mov edi,dword ptr [esp+0xFC]
	test esi,esi
	je Block115

 Block111:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block113

 Block112:
	mov eax,dword ptr [eax-4]

 Block113:
	lea esi,[eax-1]
	test esi,esi
	jle Block115

 Block114:
	mov ecx,dword ptr [edi]
	lea eax,[ecx+esi*8]
	push eax
	push 0xFFFFFFFF
	mov ecx,edi
	call ZArray<ZRef<CActionMan::MORPHACTIONFRAMEENTRY>>::InsertBefore
	mov ecx,eax
	call ZRef<CActionMan::MORPHACTIONFRAMEENTRY>::op_assign_copy
	dec esi
	test esi,esi
	jg Block114

 Block115:
	push edi
	mov edi,dword ptr [esp+0x50]
	lea ecx,[edi+0x14]
	call ZArray<ZRef<CActionMan::MORPHACTIONFRAMEENTRY>>::operator=
	mov ecx,dword ptr [esp+0x7C]
	add ecx,0xA0
	call ZList<ZRef<CActionMan::MORPHACTIONENTRY>>::AddTail_
	mov esi,eax
	lea edx,[esp+0x60]
	push edx
	mov ecx,esi
	call ZRef<CActionMan::MORPHACTIONENTRY>::op_assign_copy
	lea eax,[esp+0x60]
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,dword ptr [esp+0x80]
	mov dword ptr [edi+0x20],esi
	call ZMap<unsigned long, ZRef<CActionMan::MORPHACTIONENTRY>, unsigned long>::Insert
	mov dword ptr [edi+0x1C],eax
	call timeGetTime
	mov dword ptr [edi+0x18],eax
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	mov byte ptr [esp+0xF0],7
	call eax
	cmp word ptr [esp+0x8C],8
	mov byte ptr [esp+0xEC],6
	jne Block118

 Block116:
	mov eax,dword ptr [esp+0x94]
	xor ecx,ecx
	mov word ptr [esp+0x8C],cx
	test eax,eax
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea edx,[esp+0x8C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block119:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0xF0],2
	call ecx
	mov eax,dword ptr [esp+0x24]
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	mov byte ptr [esp+0xEC],1
	test eax,eax
	je Block124

 Block120:
	add eax,4
	push eax
	call ebx
	test eax,eax
	jne Block123

 Block121:
	mov edx,dword ptr [esp+0x24]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x24]
	test ecx,ecx
	je Block123

 Block122:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block123:
	mov dword ptr [esp+0x24],0

 Block124:
	lea esi,[edi+4]
	push esi
	mov byte ptr [esp+0xF0],0
	call ebx
	test eax,eax
	jne Block126

 Block125:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block126:
	mov esi,dword ptr [esp+0x48]
	mov dword ptr [esp+0xEC],0xFFFFFFFF
	test esi,esi
	je Block129

 Block127:
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block129

 Block128:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block129:
	mov ecx,dword ptr [esp+0xE4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xDC
	ret 0xC
}
}
// load_tamingmob_action
_SUB_EXCEPTION_HANDLER(26F80)
__SUB(00026F80, __cdecl, 146468,  void, long, long, long, ZArray<CActionFrame>&) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_26F80
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x94
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	xor edi,edi
	mov dword ptr [ebp+0x44],edi
	mov dword ptr [ebp-4],edi
	mov dword ptr [ebp+0x20],edi
	mov esi,dword ptr [ebp+0x78]
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	push esi
	lea eax,[ebp+0x50]
	push eax
	mov byte ptr [ebp-4],1
	call CActionMan::GetCharacterImgEntry
	push eax
	lea ecx,[ebp+0x1C]
	mov byte ptr [ebp-4],2
	call ZRef<CActionMan::CHARACTERIMGENTRY>::op_assign_copy
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],1
	cmp eax,edi
	je Block4

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov ecx,dword ptr [ebp+0x54]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp+0x54]
	cmp ecx,edi
	je Block4

 Block3:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block4:
	mov eax,dword ptr [ebp+0x20]
	cmp eax,edi
	je Block161

 Block5:
	mov ebx,dword ptr [eax+0x40]
	mov dword ptr [ebp+0x5C],ebx
	cmp ebx,edi
	je Block7

 Block6:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+4]
	push ebx
	call edx

 Block7:
	push esi
	mov byte ptr [ebp-4],3
	call is_vehicle
	mov esi,eax
	add esp,4
	mov dword ptr [ebp+0x24],esi
	cmp esi,edi
	jne Block17

 Block8:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x74]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x54],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],4
	cmp ebx,edi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea ecx,[ebp+0x34]
	push ecx
	mov ecx,ebx
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	push eax
	lea edx,[ebp+0x58]
	mov bl,5
	push edx
	mov byte ptr [ebp-4],bl
	call get_unknown
	add esp,8
	push eax
	lea ecx,[ebp+0x5C]
	mov byte ptr [ebp-4],6
	call _x_com_ptr<IWzProperty>::op_assign_unknown_com_ptr
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],bl
	cmp eax,edi
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	cmp word ptr [ebp+0x34],8
	mov byte ptr [ebp-4],3
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [ebp+0x34],ax
	mov eax,dword ptr [ebp+0x3C]
	cmp eax,edi
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[ebp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov ebx,dword ptr [ebp+0x5C]

 Block17:
	cmp ebx,edi
	sete al
	test al,al
	je Block21

 Block18:
	mov byte ptr [ebp-4],1
	cmp ebx,edi
	je Block20

 Block19:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block20:
	lea ecx,[ebp+0x1C]
	mov byte ptr [ebp-4],0
	call ZRef<CActionMan::CHARACTERIMGENTRY>::~ZRef<CActionMan::CHARACTERIMGENTRY>
	jmp Block161

 Block21:
	mov edx,dword ptr [ebp+0x70]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x54],esp
	push edx
	push ecx
	call get_action_name_from_code
	add esp,8
	mov byte ptr [ebp-4],7
	cmp ebx,edi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea eax,[ebp+0x34]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	push eax
	lea ecx,[ebp+0x58]
	push ecx
	mov byte ptr [ebp-4],8
	call get_unknown
	add esp,8
	push eax
	lea ecx,[ebp+0x44]
	mov byte ptr [ebp-4],9
	call _x_com_ptr<IWzProperty>::op_assign_unknown_com_ptr
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],8
	cmp eax,edi
	je Block25

 Block24:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block25:
	cmp word ptr [ebp+0x34],8
	mov byte ptr [ebp-4],3
	jne Block28

 Block26:
	mov eax,dword ptr [ebp+0x3C]
	xor ecx,ecx
	mov word ptr [ebp+0x34],cx
	cmp eax,edi
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea edx,[ebp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov edi,dword ptr [ebp+0x44]
	test edi,edi
	sete al
	test al,al
	je Block32

 Block30:
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],1
	call edx
	lea ecx,[ebp+0x1C]
	mov byte ptr [ebp-4],0
	call ZRef<CActionMan::CHARACTERIMGENTRY>::~ZRef<CActionMan::CHARACTERIMGENTRY>
	mov dword ptr [ebp-4],0xFFFFFFFF
	test edi,edi
	je Block161

 Block31:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx
	jmp Block161

 Block32:
	test esi,esi
	je Block36

 Block33:
	test edi,edi
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	mov ecx,edi
	call IWzProperty::Getcount
	mov ecx,dword ptr [ebp+0x7C]
	lea edx,[ebp+0x2B]
	push edx
	push eax
	call ZArray<CActionFrame>::_Alloc

 Block36:
	lea eax,[ebp-0x40]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [ebp-4],0xA
	test edi,edi
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea ecx,[ebp-0x24]
	push ecx
	mov ecx,edi
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[ebp-0x14]
	mov byte ptr [ebp-4],0xB
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],0xD
	test eax,eax
	je Block40

 Block39:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block40:
	cmp dword ptr [ebp-0x14],0
	mov dword ptr [ebp-0x2C],0
	je Block9

 Block41:
	jmp Block43

 Block42:
	mov edi,dword ptr [ebp+0x44]

 Block43:
	mov esi,dword ptr [ebp-0x14]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[ebp-0x2C]
	push edx
	lea eax,[ebp-0x40]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block156

 Block44:
	lea edx,[ebp-0x40]
	push edx
	lea eax,[ebp+0x48]
	push eax
	call DetachBSTR
	mov esi,dword ptr [ebp+0x48]
	add esp,4
	mov eax,esp
	mov dword ptr [ebp+0x54],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block46

 Block45:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block46:
	lea edx,[ebp-0x90]
	mov byte ptr [ebp-4],0xF
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	push eax
	lea eax,[ebp+0x58]
	push eax
	mov byte ptr [ebp-4],0x10
	call get_unknown
	add esp,8
	cmp word ptr [ebp-0x90],8
	mov byte ptr [ebp-4],0x12
	jne Block49

 Block47:
	mov eax,dword ptr [ebp-0x88]
	xor ecx,ecx
	mov word ptr [ebp-0x90],cx
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea edx,[ebp-0x90]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	mov ebx,dword ptr [ebp+0x58]
	test ebx,ebx
	sete al
	test al,al
	je Block55

 Block51:
	mov byte ptr [ebp-4],0xE
	test ebx,ebx
	je Block53

 Block52:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block53:
	mov byte ptr [ebp-4],0xD
	test esi,esi
	je Block43

 Block54:
	mov ecx,esi
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x48],0
	jmp Block43

 Block55:
	test esi,esi
	je Block57

 Block56:
	mov esi,dword ptr [esi]
	jmp Block58

 Block57:
	xor esi,esi

 Block58:
	push esi
	call __wtoi
	xor esi,esi
	add esp,4
	mov dword ptr [ebp+0x18],eax
	cmp dword ptr [ebp+0x24],esi
	je Block60

 Block59:
	mov ecx,dword ptr [ebp+0x7C]
	imul eax,0x64
	mov edx,dword ptr [ecx]
	mov dword ptr [eax+edx+0x60],esi
	mov edi,dword ptr [ecx]
	mov edx,1
	mov dword ptr [eax+edi+0x58],edx
	mov edi,dword ptr [ecx]
	mov dword ptr [eax+edi+0x54],esi
	mov ecx,dword ptr [ecx]
	mov dword ptr [eax+ecx+0x5C],edx

 Block60:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x4C],esi
	mov dword ptr [ebp+0x54],esp
	mov dword ptr [eax],ebx
	cmp ebx,esi
	je Block62

 Block61:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+4]
	push ebx
	call eax

 Block62:
	lea ecx,[ebp+0x4C]
	call _x_com_ptr<IWzProperty>::_QueryUnknownComPtr
	cmp eax,esi
	jge Block64

 Block63:
	cmp eax,0x80004002
	jne Block155

 Block64:
	lea ecx,[ebp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	mov ecx,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0x14
	cmp ecx,esi
	je Block9

 Block65:
	lea edx,[ebp-0x20]
	push edx
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],0x15
	mov dword ptr [ebp+0x14],esi
	mov dword ptr [ebp+0x54],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block67

 Block66:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block67:
	lea ecx,[ebp+0x14]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,esi
	jge Block69

 Block68:
	cmp eax,0x80004002
	jne Block155

 Block69:
	mov eax,dword ptr [ebp-0x20]
	mov byte ptr [ebp-4],0x17
	cmp eax,esi
	je Block71

 Block70:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block71:
	mov dword ptr [ebp-0x28],esi

 Block72:
	mov ebx,dword ptr [ebp+0x14]
	test ebx,ebx
	je Block9

 Block73:
	mov eax,dword ptr [ebx]
	mov eax,dword ptr [eax+0xC]
	lea ecx,[ebp-0x28]
	push ecx
	lea edx,[ebp+0x34]
	push edx
	push 1
	push ebx
	call eax
	test eax,eax
	jne Block141

 Block74:
	lea ecx,[ebp+0x34]
	push ecx
	lea edx,[ebp+0x60]
	push edx
	call DetachBSTR
	mov dword ptr [ebp+0x30],0
	mov edi,dword ptr [ebp+0x60]
	add esp,4
	mov eax,esp
	mov dword ptr [ebp+0x54],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block76

 Block75:
	lea eax,[edi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block76:
	lea ecx,[ebp-0x70]
	push ecx
	mov ecx,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0x1A
	mov byte ptr [ebp-4],0x19
	call IWzProperty::Getitem
	push eax
	lea edx,[ebp-0x30]
	push edx
	mov byte ptr [ebp-4],0x1B
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x1C
	mov dword ptr [ebp+0x54],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block78

 Block77:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block78:
	lea ecx,[ebp+0x30]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	test eax,eax
	jge Block80

 Block79:
	cmp eax,0x80004002
	jne Block155

 Block80:
	mov eax,dword ptr [ebp-0x30]
	mov byte ptr [ebp-4],0x1B
	test eax,eax
	je Block82

 Block81:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block82:
	cmp word ptr [ebp-0x70],8
	mov byte ptr [ebp-4],0x19
	jne Block85

 Block83:
	xor eax,eax
	mov word ptr [ebp-0x70],ax
	mov eax,dword ptr [ebp-0x68]
	test eax,eax
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea ecx,[ebp-0x70]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block86:
	mov esi,dword ptr [ebp+0x30]
	test esi,esi
	sete al
	test al,al
	je Block97

 Block87:
	mov byte ptr [ebp-4],0x18
	test esi,esi
	je Block89

 Block88:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block89:
	mov byte ptr [ebp-4],0x17
	test edi,edi
	je Block72

 Block90:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block96

 Block91:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block93

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block93:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block95

 Block94:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block95:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block96:
	mov dword ptr [ebp+0x60],0
	jmp Block72

 Block97:
	mov edx,dword ptr [ebp+0x20]
	mov eax,dword ptr [edx+0x14]
	test eax,eax
	je Block99

 Block98:
	mov ecx,dword ptr [eax]
	jmp Block100

 Block99:
	xor ecx,ecx

 Block100:
	mov eax,dword ptr [edx+0x10]
	test eax,eax
	je Block102

 Block101:
	mov eax,dword ptr [eax]
	jmp Block103

 Block102:
	xor eax,eax

 Block103:
	mov ebx,dword ptr [ebp+0x18]
	mov edx,dword ptr [ebp+0x7C]
	imul ebx,0x64
	push esi
	push ecx
	mov ecx,dword ptr [edx]
	push eax
	add ecx,ebx
	mov dword ptr [ebp+0x54],ebx
	call CActionFrame::Merge
	cmp dword ptr [ebp+0x24],0
	jne Block108

 Block104:
	mov byte ptr [ebp-4],0x18
	test esi,esi
	je Block106

 Block105:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block106:
	mov byte ptr [ebp-4],0x17
	test edi,edi
	je Block72

 Block107:
	mov ecx,edi
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x60],0
	jmp Block72

 Block108:
	xor edi,edi
	cmp esi,edi
	je Block9

 Block109:
	lea edx,[ebp+8]
	push edx
	mov ecx,esi
	call IWzCanvas::Getproperty
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x2C],esp
	push 0x1ABE
	push eax
	mov byte ptr [ebp-4],0x1D
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp+8]
	mov byte ptr [ebp-4],0x1E
	cmp esi,edi
	je Block9

 Block110:
	lea ecx,[ebp-0x50]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0x1D
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+4]
	mov dword ptr [ebp+4],edi
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,edi
	jge Block112

 Block111:
	cmp eax,0x80004002
	jne Block155

 Block112:
	cmp word ptr [ebp-0x50],8
	mov byte ptr [ebp-4],0x21
	jne Block115

 Block113:
	mov eax,dword ptr [ebp-0x48]
	xor edx,edx
	mov word ptr [ebp-0x50],dx
	cmp eax,edi
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea eax,[ebp-0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block116:
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x2C],esp
	push 0x1ACB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x60]
	mov byte ptr [ebp-4],0x22
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x21
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x23
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x10]
	mov dword ptr [ebp-0x10],edi
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,edi
	jge Block118

 Block117:
	cmp eax,0x80004002
	jne Block155

 Block118:
	cmp word ptr [ebp-0x60],8
	mov byte ptr [ebp-4],0x25
	jne Block121

 Block119:
	xor eax,eax
	mov word ptr [ebp-0x60],ax
	mov eax,dword ptr [ebp-0x58]
	cmp eax,edi
	je Block122

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block122

 Block121:
	lea ecx,[ebp-0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block122:
	mov edi,dword ptr [ebp+4]
	mov esi,dword ptr [ebp-0x10]
	test edi,edi
	sete al
	test al,al
	sete al
	test al,al
	je Block135

 Block123:
	test esi,esi
	sete al
	test al,al
	sete al
	test al,al
	je Block135

 Block124:
	test esi,esi
	je Block9

 Block125:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x28]
	lea eax,[ebp-0x18]
	push eax
	xor ebx,ebx
	push esi
	mov dword ptr [ebp-0x18],ebx
	call ecx
	cmp eax,ebx
	jge Block127

 Block126:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block127:
	mov edx,dword ptr [ebp-0x18]
	mov eax,dword ptr [esi]
	lea ecx,[ebp+0x10]
	push ecx
	mov dword ptr [ebp-0x1C],edx
	mov edx,dword ptr [eax+0x20]
	push esi
	mov dword ptr [ebp+0x10],ebx
	call edx
	cmp eax,ebx
	jge Block129

 Block128:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block129:
	mov eax,dword ptr [ebp+0x10]
	mov dword ptr [ebp+0x2C],eax
	cmp edi,ebx
	je Block9

 Block130:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x28]
	lea edx,[ebp+0xC]
	push edx
	push edi
	mov dword ptr [ebp+0xC],ebx
	call eax
	cmp eax,ebx
	jge Block132

 Block131:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block132:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x20]
	mov ebx,dword ptr [ebp+0xC]
	lea edx,[ebp]
	push edx
	push edi
	mov dword ptr [ebp],0
	call eax
	test eax,eax
	jge Block134

 Block133:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block134:
	mov ecx,dword ptr [ebp-0x1C]
	mov edx,dword ptr [ebp+0x2C]
	mov eax,dword ptr [ebp]
	push ecx
	push edx
	push ebx
	push eax
	lea ecx,[ebp-0xA0]
	push ecx
	call dword ptr [ZImports::_SetRect]
	mov ebx,dword ptr [ebp+0x54]

 Block135:
	mov edx,dword ptr [ebp+0x7C]
	mov eax,dword ptr [edx]
	lea ecx,[ebp-0xA0]
	lea eax,[ebx+eax+0x54]
	push ecx
	push eax
	push eax
	call UnionRect
	mov byte ptr [ebp-4],0x21
	test esi,esi
	je Block137

 Block136:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block137:
	mov byte ptr [ebp-4],0x1D
	test edi,edi
	je Block139

 Block138:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block139:
	mov eax,dword ptr [ebp+8]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x19
	call edx
	mov eax,dword ptr [ebp+0x30]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x18
	call edx
	cmp dword ptr [ebp+0x60],0
	mov byte ptr [ebp-4],0x17
	je Block72

 Block140:
	mov ecx,dword ptr [ebp+0x60]
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x60],0
	jmp Block72

 Block141:
	cmp dword ptr [ebp+0x24],0
	je Block146

 Block142:
	push 0x78
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x54],esp
	push 0x1AA9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp+0x4C]
	lea ecx,[ebp-0x80]
	push ecx
	mov byte ptr [ebp-4],0x26
	mov ecx,edi
	mov byte ptr [ebp-4],0x17
	call IWzProperty::Getitem
	mov esi,dword ptr [ebp+0x18]
	mov edx,dword ptr [ebp+0x7C]
	imul esi,0x64
	add esi,dword ptr [edx]
	push eax
	mov byte ptr [ebp-4],0x27
	call get_int32
	add esp,8
	mov dword ptr [esi+0x50],eax
	cmp word ptr [ebp-0x80],8
	mov byte ptr [ebp-4],0x17
	jne Block145

 Block143:
	xor eax,eax
	mov word ptr [ebp-0x80],ax
	mov eax,dword ptr [ebp-0x78]
	test eax,eax
	je Block147

 Block144:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block147

 Block145:
	lea ecx,[ebp-0x80]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block147

 Block146:
	mov edi,dword ptr [ebp+0x4C]

 Block147:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	mov byte ptr [ebp-4],0x14
	call eax
	cmp word ptr [ebp+0x34],8
	mov byte ptr [ebp-4],0x13
	jne Block150

 Block148:
	mov eax,dword ptr [ebp+0x3C]
	xor ecx,ecx
	mov word ptr [ebp+0x34],cx
	test eax,eax
	je Block151

 Block149:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block151

 Block150:
	lea edx,[ebp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block151:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [ebp-4],0x12
	call ecx
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xE
	test eax,eax
	je Block153

 Block152:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block153:
	mov ecx,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0xD
	test ecx,ecx
	je Block42

 Block154:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x48],0
	jmp Block42

 Block155:
	push eax
	call _com_issue_error

 Block156:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],0xA
	call edx
	cmp word ptr [ebp-0x40],8
	mov byte ptr [ebp-4],3
	jne Block159

 Block157:
	xor eax,eax
	mov word ptr [ebp-0x40],ax
	mov eax,dword ptr [ebp-0x38]
	test eax,eax
	je Block160

 Block158:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block160

 Block159:
	lea ecx,[ebp-0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block160:
	mov eax,dword ptr [ebp+0x5C]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],1
	call eax
	lea ecx,[ebp+0x1C]
	mov byte ptr [ebp-4],0
	call ZRef<CActionMan::CHARACTERIMGENTRY>::~ZRef<CActionMan::CHARACTERIMGENTRY>
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx

 Block161:
	lea esp,[ebp-0xB0]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x64]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x68
	mov esp,ebp
	pop ebp
	ret
}
}
// CActionMan::CreateAfterimageLayer
_SUB_EXCEPTION_HANDLER(28A20)
__SUB_CLASS_THIS(00028A20, __thiscall, 33427,  CActionMan, void, NakedParam<Ztl_bstr_t>, long, NakedParam<_x_com_ptr<IWzGr2DLayer>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_28A20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x34]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x24]
	push eax
	mov dword ptr [esp+0x40],1
	call esi
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x14]
	push edx
	mov byte ptr [esp+0x40],2
	call esi
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	mov ecx,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x3C],3
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x10]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x3C],4
	test ecx,ecx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[esp+0x24]
	push eax
	lea edx,[esp+0x18]
	push edx
	push 0
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x3C],3
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x3C],2
	cmp word ptr [esp+0x14],si
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x14]
	push ecx
	call edi

 Block14:
	mov byte ptr [esp+0x3C],1
	cmp word ptr [esp+0x24],si
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea eax,[esp+0x24]
	push eax
	call edi

 Block18:
	mov ecx,3
	mov word ptr [esp+0x24],cx
	mov dword ptr [esp+0x2C],0xFFFFFFFE
	mov ecx,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x3C],5
	test ecx,ecx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x14]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block22

 Block21:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block22:
	mov byte ptr [esp+0x3C],1
	cmp word ptr [esp+0x24],si
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
	call edi

 Block26:
	mov edx,dword ptr [esp+0x44]
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x48]
	mov dword ptr [esp+0x14],esp
	test eax,eax
	je Block28

 Block27:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block28:
	mov ecx,ebp
	call CActionMan::GetWeaponAfterImage
	test eax,eax
	je Block41

 Block29:
	mov eax,dword ptr [eax+0xC]
	mov ecx,dword ptr [esp+0x48]
	lea edi,[eax+ecx*4]
	mov eax,dword ptr [edi]
	test eax,eax
	je Block31

 Block30:
	mov ebp,dword ptr [eax-4]
	test ebp,ebp
	jne Block35

 Block31:
	mov ecx,dword ptr [esp+0x44]
	test ecx,ecx
	je Block33

 Block32:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x44],0

 Block33:
	mov eax,dword ptr [esp+0x4C]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block45

 Block34:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x30
	ret 0xC

 Block35:
	xor esi,esi
	test ebp,ebp
	jle Block41

 Block36:
	mov ecx,dword ptr [edi]
	lea eax,[ecx+esi*4]
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block38

 Block37:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block38:
	push ecx
	mov ecx,dword ptr [esp+0x54]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0x50],esp
	test eax,eax
	je Block40

 Block39:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block40:
	call CAnimationDisplayer::LoadCanvas
	inc esi
	add esp,8
	cmp esi,ebp
	jl Block36

 Block41:
	mov ecx,dword ptr [esp+0x44]
	test ecx,ecx
	je Block43

 Block42:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x44],0

 Block43:
	mov eax,dword ptr [esp+0x4C]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block45

 Block44:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block45:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x30
	ret 0xC
}
}
// ZStrUtil___ConvReqSize
__SUB(00006230, __cdecl, 146390,  int32_t, const wchar_t*, char*, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+0xC]
	mov ecx,dword ptr [esp+4]
	push 0
	push 0
	push 0
	push 0
	push eax
	push ecx
	push 0
	push 0
	call WideCharToMultiByte
	ret
}
}
// CActionMan::~CActionMan
_SUB_EXCEPTION_HANDLER(13290)
__SUB_CLASS_THIS0(00013290, __thiscall, 33384,  CActionMan, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_13290
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0xC],esi
	int 3 // TODO: 		mov dword ptr [esi],offset CActionMan::`vftable'
	mov eax,dword ptr [CActionFrame::s_pZMapper]
	xor ebx,ebx
	mov dword ptr [esp+0x18],0x1F
	cmp eax,ebx
	je Block2

 Block1:
	mov dword ptr [CActionFrame::s_pZMapper],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [CActionFrame::s_pSMapper]
	cmp eax,ebx
	je Block4

 Block3:
	mov dword ptr [CActionFrame::s_pSMapper],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	lea ecx,[esi+0x29C]
	mov byte ptr [esp+0x18],0x1E
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<long, ZMap<long, ZRef<CActionMan::DRAGONACTIONENTRY>, long>, long>::`vftable'
	call ZMap<long, ZMap<long, ZRef<CActionMan::DRAGONACTIONENTRY>, long>, long>::RemoveAll
	lea ecx,[esi+0x284]
	mov byte ptr [esp+0x18],0x1D
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<unsigned long, ZRef<CActionMan::SHADOWPARTNERACTIONENTRY>, unsigned long>::`vftable'
	call ZMap<unsigned long, ZRef<CActionMan::SHADOWPARTNERACTIONENTRY>, unsigned long>::RemoveAll
	lea ecx,[esi+0x270]
	mov byte ptr [esp+0x18],0x1C
	int 3 // TODO: 		mov dword ptr [ecx],offset ZList<ZRef<CActionMan::SHADOWPARTNERACTIONENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::SHADOWPARTNERACTIONENTRY>>::RemoveAll
	lea ecx,[esi+0x258]
	mov byte ptr [esp+0x18],0x1B
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<ActionKey, ZRef<CActionMan::SUMMONEDACTIONENTRY>, ActionKey>::`vftable'
	call ZMap<ActionKey, ZRef<CActionMan::SUMMONEDACTIONENTRY>, ActionKey>::RemoveAll
	lea ecx,[esi+0x244]
	mov byte ptr [esp+0x18],0x1A
	int 3 // TODO: 		mov dword ptr [ecx],offset ZList<ZRef<CActionMan::SUMMONEDACTIONENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::SUMMONEDACTIONENTRY>>::RemoveAll
	lea ecx,[esi+0x22C]
	mov byte ptr [esp+0x18],0x19
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<unsigned long, ZRef<CActionMan::EMPLOYEEACTIONENTRY>, unsigned long>::`vftable'
	call ZMap<unsigned long, ZRef<CActionMan::EMPLOYEEACTIONENTRY>, unsigned long>::RemoveAll
	lea ecx,[esi+0x218]
	mov byte ptr [esp+0x18],0x18
	int 3 // TODO: 		mov dword ptr [ecx],offset ZList<ZRef<CActionMan::EMPLOYEEACTIONENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::EMPLOYEEACTIONENTRY>>::RemoveAll
	lea ecx,[esi+0x200]
	mov byte ptr [esp+0x18],0x17
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<long, ZRef<CActionMan::EMPLOYEEIMGENTRY>, long>::`vftable'
	call ZMap<long, ZRef<CActionMan::EMPLOYEEIMGENTRY>, long>::RemoveAll
	lea ecx,[esi+0x1EC]
	mov byte ptr [esp+0x18],0x16
	int 3 // TODO: 		mov dword ptr [ecx],offset ZList<ZRef<CActionMan::EMPLOYEEIMGENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::EMPLOYEEIMGENTRY>>::RemoveAll
	lea ecx,[esi+0x1D4]
	mov byte ptr [esp+0x18],0x15
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<unsigned long, ZRef<CActionMan::PETACTIONENTRY>, unsigned long>::`vftable'
	call ZMap<unsigned long, ZRef<CActionMan::PETACTIONENTRY>, unsigned long>::RemoveAll
	lea ecx,[esi+0x1C0]
	mov byte ptr [esp+0x18],0x14
	int 3 // TODO: 		mov dword ptr [ecx],offset ZList<ZRef<CActionMan::PETACTIONENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::PETACTIONENTRY>>::RemoveAll
	lea ecx,[esi+0x1A8]
	mov byte ptr [esp+0x18],0x13
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<long, ZRef<CActionMan::PETIMGENTRY>, long>::`vftable'
	call ZMap<long, ZRef<CActionMan::PETIMGENTRY>, long>::RemoveAll
	lea ecx,[esi+0x194]
	mov byte ptr [esp+0x18],0x12
	int 3 // TODO: 		mov dword ptr [ecx],offset ZList<ZRef<CActionMan::PETIMGENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::PETIMGENTRY>>::RemoveAll
	lea ecx,[esi+0x17C]
	mov byte ptr [esp+0x18],0x11
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<__int64, ZRef<CActionMan::NPCACTIONENTRY>, __int64>::`vftable'
	call ZMap<__int64, ZRef<CActionMan::NPCACTIONENTRY>, __int64>::RemoveAll
	lea ecx,[esi+0x168]
	mov byte ptr [esp+0x18],0x10
	int 3 // TODO: 		mov dword ptr [ecx],offset ZList<ZRef<CActionMan::NPCACTIONENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::NPCACTIONENTRY>>::RemoveAll
	lea ecx,[esi+0x150]
	mov byte ptr [esp+0x18],0xF
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<long, ZRef<CActionMan::NPCIMGENTRY>, long>::`vftable'
	call ZMap<long, ZRef<CActionMan::NPCIMGENTRY>, long>::RemoveAll
	lea ecx,[esi+0x13C]
	mov byte ptr [esp+0x18],0xE
	int 3 // TODO: 		mov dword ptr [ecx],offset ZList<ZRef<CActionMan::NPCIMGENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::NPCIMGENTRY>>::RemoveAll
	lea ecx,[esi+0x124]
	mov byte ptr [esp+0x18],0xD
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<wchar_t const *, ZRef<CActionMan::MELEEATTACKAFTERIMAGE>, ZXString16>::`vftable'
	call ZMap<wchar_t const *, ZRef<CActionMan::MELEEATTACKAFTERIMAGE>, ZXString16>::RemoveAll
	lea ecx,[esi+0x10C]
	mov byte ptr [esp+0x18],0xC
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<unsigned long, ZRef<CActionMan::MOBACTIONENTRY>, unsigned long>::`vftable'
	call ZMap<unsigned long, ZRef<CActionMan::MOBACTIONENTRY>, unsigned long>::RemoveAll
	lea ecx,[esi+0xF8]
	mov byte ptr [esp+0x18],0xB
	int 3 // TODO: 		mov dword ptr [ecx],offset ZList<ZRef<CActionMan::MOBACTIONENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::MOBACTIONENTRY>>::RemoveAll
	mov byte ptr [esp+0x18],0xA
	lea ecx,[esi+0xE0]
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<long, ZRef<CActionMan::MOBIMGENTRY>, long>::`vftable'
	call ZMap<long, ZRef<CActionMan::MOBIMGENTRY>, long>::RemoveAll
	lea ecx,[esi+0xCC]
	mov byte ptr [esp+0x18],9
	int 3 // TODO: 		mov dword ptr [ecx],offset ZList<ZRef<CActionMan::MOBIMGENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::MOBIMGENTRY>>::RemoveAll
	lea ecx,[esi+0xB4]
	mov byte ptr [esp+0x18],8
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<unsigned long, ZRef<CActionMan::MORPHACTIONENTRY>, unsigned long>::`vftable'
	call ZMap<unsigned long, ZRef<CActionMan::MORPHACTIONENTRY>, unsigned long>::RemoveAll
	lea ecx,[esi+0xA0]
	mov byte ptr [esp+0x18],7
	int 3 // TODO: 		mov dword ptr [ecx],offset ZList<ZRef<CActionMan::MORPHACTIONENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::MORPHACTIONENTRY>>::RemoveAll
	lea ecx,[esi+0x88]
	mov byte ptr [esp+0x18],6
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<long, ZRef<CActionMan::MORPHIMGENTRY>, long>::`vftable'
	call ZMap<long, ZRef<CActionMan::MORPHIMGENTRY>, long>::RemoveAll
	lea ecx,[esi+0x74]
	mov byte ptr [esp+0x18],5
	int 3 // TODO: 		mov dword ptr [ecx],offset ZList<ZRef<CActionMan::MORPHIMGENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::MORPHIMGENTRY>>::RemoveAll
	lea ecx,[esi+0x5C]
	mov byte ptr [esp+0x18],4
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<long, ZXString<char>, long>::`vftable'
	call ZMap<long, ZXString<char>, long>::RemoveAll
	lea ecx,[esi+0x44]
	mov byte ptr [esp+0x18],3
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<FACELOOKCODES, ZRef<CActionMan::FACELOOKENTRY>, FACELOOKCODES>::`vftable'
	call ZMap<FACELOOKCODES, ZRef<CActionMan::FACELOOKENTRY>, FACELOOKCODES>::RemoveAll
	lea ecx,[esi+0x30]
	mov byte ptr [esp+0x18],2
	int 3 // TODO: 		mov dword ptr [ecx],offset ZList<ZRef<CActionMan::FACELOOKENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::FACELOOKENTRY>>::RemoveAll
	lea ecx,[esi+0x18]
	mov byte ptr [esp+0x18],1
	int 3 // TODO: 		mov dword ptr [ecx],offset ZMap<long, ZRef<CActionMan::CHARACTERIMGENTRY>, long>::`vftable'
	call ZMap<long, ZRef<CActionMan::CHARACTERIMGENTRY>, long>::RemoveAll
	lea ecx,[esi+4]
	mov byte ptr [esp+0x18],bl
	int 3 // TODO: 		mov dword ptr [ecx],offset ZList<ZRef<CActionMan::CHARACTERIMGENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::CHARACTERIMGENTRY>>::RemoveAll
	mov dword ptr [TSingleton<CActionMan>::ms_pInstance],ebx
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x10
	ret
}
}
// PcCreateObject__com_ptr_t__com_IIID_IWzProperty___GUID_986515d9_0a0b_4929_8b4f_718682177b92___
__SUB(0000B040, __cdecl, 146414,  void, const wchar_t*, _x_com_ptr<IWzProperty>&, IUnknown*) {
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
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
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
	int 3 // TODO: 		mov dword ptr [esp+0xC],offset _com_error::`vftable'
	mov dword ptr [esp+0x14],0
	mov dword ptr [esp+0x18],0
	call _CxxThrowException

 Block7:
	pop esi
	add esp,0x10
	ret
}
}
// get_int32
_SUB_EXCEPTION_HANDLER(6830)
__SUB(00006830, __cdecl, 146398,  long, Ztl_variant_t&, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_6830
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	lea eax,[esp+8]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov ecx,dword ptr [esp+0x28]
	movzx eax,word ptr [ecx]
	mov dword ptr [esp+0x20],0
	test ax,ax
	je Block4

 Block1:
	cmp ax,0xA
	je Block4

 Block2:
	push 3
	push 0
	push ecx
	lea ecx,[esp+0x14]
	push ecx
	call ZComAPI::ZComVariantChangeType
	add esp,0x10
	test eax,eax
	jl Block4

 Block3:
	mov eax,dword ptr [esp+0x10]
	mov esi,eax
	jmp Block5

 Block4:
	mov esi,dword ptr [esp+0x2C]
	mov eax,dword ptr [esp+0x10]

 Block5:
	cmp word ptr [esp+8],8
	mov dword ptr [esp+0x20],0xFFFFFFFF
	jne Block8

 Block6:
	xor edx,edx
	mov word ptr [esp+8],dx
	test eax,eax
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov eax,esi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret

 Block8:
	lea eax,[esp+8]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov eax,esi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret
}
}
// operator___146393
__SUB(00006300, __cdecl, 146393,  int32_t, const none&, const none&) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+8]
	mov edx,dword ptr [esp+4]
	mov eax,0xC
	push esi
	mov edi,edi

 Block1:
	mov esi,dword ptr [edx]
	cmp esi,dword ptr [ecx]
	jne Block4

 Block2:
	sub eax,4
	add ecx,4
	add edx,4
	cmp eax,4
	jae Block1

 Block3:
	xor eax,eax
	xor edx,edx
	test eax,eax
	sete dl
	pop esi
	mov eax,edx
	ret

 Block4:
	movzx eax,byte ptr [edx]
	movzx esi,byte ptr [ecx]
	sub eax,esi
	jne Block8

 Block5:
	movzx eax,byte ptr [edx+1]
	movzx esi,byte ptr [ecx+1]
	sub eax,esi
	jne Block8

 Block6:
	movzx eax,byte ptr [edx+2]
	movzx esi,byte ptr [ecx+2]
	sub eax,esi
	jne Block8

 Block7:
	movzx eax,byte ptr [edx+3]
	movzx ecx,byte ptr [ecx+3]
	sub eax,ecx

 Block8:
	sar eax,0x1F
	or eax,1
	xor edx,edx
	test eax,eax
	sete dl
	pop esi
	mov eax,edx
	ret
}
}
// CActionMan::MergeTamingMobSprite
_SUB_EXCEPTION_HANDLER(17510)
__SUB_CLASS_THIS(00017510, __thiscall, 33436,  CActionMan, void, ZArray<CActionFrame>&, ZArray<ZRef<CActionMan::TAMINGMOBACTIONFRAMEENTRY> >&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_17510
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
	mov edi,dword ptr [esp+0x3C]
	mov eax,dword ptr [edi]
	xor ebx,ebx
	cmp eax,ebx
	jne Block2

 Block1:
	xor esi,esi
	mov dword ptr [esp+0x18],esi
	jmp Block3

 Block2:
	mov eax,dword ptr [eax-4]
	mov dword ptr [esp+0x18],eax
	mov esi,eax

 Block3:
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,dword ptr [esp+0x44]
	push 1
	push esi
	call ZArray<ZRef<CActionMan::TAMINGMOBACTIONFRAMEENTRY>>::_Realloc
	cmp esi,ebx
	mov dword ptr [esp+0x14],ebx
	jle Block19

 Block4:
	xor ebp,ebp
	jmp Block6

 Block5:
	mov edi,dword ptr [esp+0x3C]
	xor ebx,ebx

 Block6:
	push 0x40
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,ebx
	je Block8

 Block7:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3 // TODO: 		mov dword ptr [eax],offset CActionMan::TAMINGMOBACTIONFRAMEENTRY::`vftable'
	mov dword ptr [eax+0xC],ebx
	mov dword ptr [eax+0x10],ebx
	mov esi,eax
	jmp Block9

 Block8:
	xor esi,esi

 Block9:
	mov dword ptr [esp+0x20],esi
	cmp esi,ebx
	je Block11

 Block10:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	push 1
	lea eax,[esi+0x38]
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esi+0x30]
	push edx
	lea eax,[esi+0x28]
	push eax
	lea ecx,[esi+0x10]
	push ecx
	mov ecx,dword ptr [edi]
	lea edx,[esi+0xC]
	push edx
	add ecx,ebp
	mov dword ptr [esp+0x50],ebx
	call CActionFrame::Draw
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+ebp+0x50]
	mov dword ptr [esi+0x24],ecx
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+ebp+0x54]
	lea eax,[edx+ebp+0x54]
	mov dword ptr [esi+0x14],ecx
	mov edx,dword ptr [eax+4]
	mov dword ptr [esi+0x18],edx
	mov ecx,dword ptr [eax+8]
	mov dword ptr [esi+0x1C],ecx
	mov edx,dword ptr [eax+0xC]
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esi+0x20],edx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [esp+0x14]
	lea ebx,[esi+4]
	push ebx
	lea edi,[ecx+edx*8]
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block16

 Block12:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block15

 Block13:
	mov eax,dword ptr [edi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [edi+4]
	test ecx,ecx
	je Block15

 Block14:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block15:
	mov dword ptr [edi+4],0

 Block16:
	push ebx
	mov dword ptr [edi+4],esi
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block18

 Block17:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block18:
	mov eax,dword ptr [esp+0x14]
	inc eax
	add ebp,0x64
	cmp eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x20],0
	mov dword ptr [esp+0x14],eax
	jl Block5

 Block19:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 8
}
}
// SetRectEmpty
__SUB(0000D590, __cdecl, 134111,  int32_t, SECRECT*) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	mov edx,esi
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xC]
	xor ecx,ecx
	mov dword ptr [esi+8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x18]
	xor ecx,ecx
	mov dword ptr [esi+0x14],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x24]
	xor ecx,ecx
	mov dword ptr [esi+0x20],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2C],eax
	mov eax,1
	pop esi
	ret
}
}
// CActionMan::LoadShadowPartnerAction
_SUB_EXCEPTION_HANDLER(23CF0)
__SUB_CLASS_THIS(00023CF0, __thiscall, 33422,  CActionMan, void, long, long, ZList<ZRef<CActionMan::SHADOWPARTNERACTIONFRAMEENTRY> >&) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_23CF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x68],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [ebp-0x24],ebx
	mov edi,dword ptr [ebp+0x74]
	mov esi,dword ptr [ebp+0x78]
	mov eax,edi
	shl eax,8
	or eax,esi
	mov dword ptr [ebp+0x14],eax
	xor eax,eax
	mov dword ptr [ebp+0x1C],eax
	lea edx,[ebp+0x18]
	mov dword ptr [ebp-4],eax
	push edx
	lea eax,[ebp+0x14]
	lea ecx,[ebx+0x284]
	push eax
	mov dword ptr [ebp-0x10],ecx
	call ZMap<unsigned long, ZRef<CActionMan::SHADOWPARTNERACTIONENTRY>, unsigned long>::GetAt
	test eax,eax
	je Block3

 Block1:
	call timeGetTime
	mov edi,dword ptr [ebp+0x7C]
	mov esi,dword ptr [ebp+0x1C]
	mov ecx,edi
	mov dword ptr [esi+0x2C],eax
	call ZList<ZRef<CActionMan::SHADOWPARTNERACTIONFRAMEENTRY>>::RemoveAll
	lea ecx,[esi+0x18]
	push ecx
	mov ecx,edi
	call ZList<ZRef<CActionMan::SHADOWPARTNERACTIONFRAMEENTRY>>::AddTail_List
	lea edi,[esi+4]
	push edi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block165

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax
	jmp Block165

 Block3:
	push 0x38
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	xor ecx,ecx
	test eax,eax
	je Block5

 Block4:
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3 // TODO: 		mov dword ptr [eax],offset CActionMan::SHADOWPARTNERACTIONENTRY::`vftable'
	int 3 // TODO: 		mov dword ptr [eax+0x18],offset ZList<ZRef<CActionMan::SHADOWPARTNERACTIONFRAMEENTRY>>::`vftable'
	mov dword ptr [eax+0x20],ecx
	mov dword ptr [eax+0x24],ecx
	mov dword ptr [eax+0x28],ecx
	mov dword ptr [ebp+0x50],eax
	jmp Block6

 Block5:
	mov dword ptr [ebp+0x50],0
	mov eax,dword ptr [ebp+0x50]

 Block6:
	mov dword ptr [ebp-0x1C],eax
	cmp eax,ecx
	je Block8

 Block7:
	mov ecx,dword ptr [ebp+0x50]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	mov eax,dword ptr [ebp+0x50]
	mov dword ptr [eax+0xC],edi
	lea edx,[esi+esi*2]
	push edi
	lea ecx,[ebp+0x54]
	mov dword ptr [eax+0x10],esi
	lea eax,[edx*8+ActionData::m_saCharacterActions]
	push ecx
	mov ecx,ebx
	mov byte ptr [ebp-4],1
	mov dword ptr [ebp+0x44],eax
	call CActionMan::GetShadowPartnerProp
	cmp dword ptr [ebp+0x54],0
	sete al
	test al,al
	je Block12

 Block9:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block11

 Block10:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block11:
	lea ecx,[ebp-0x20]
	mov byte ptr [ebp-4],0
	call ZRef<CActionMan::SHADOWPARTNERACTIONENTRY>::~ZRef<CActionMan::SHADOWPARTNERACTIONENTRY>
	lea ecx,[ebp+0x18]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZRef<CActionMan::SHADOWPARTNERACTIONENTRY>::~ZRef<CActionMan::SHADOWPARTNERACTIONENTRY>
	jmp Block165

 Block12:
	xor ebx,ebx
	mov dword ptr [ebp+0x60],ebx
	mov edi,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],3
	cmp dword ptr [edi+8],ebx
	je Block61

 Block13:
	lea ecx,[ebp+0x64]
	push 0x3D1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],4
	cmp eax,ebx
	je Block15

 Block14:
	mov eax,dword ptr [eax]
	jmp Block16

 Block15:
	xor eax,eax

 Block16:
	push ebx
	lea edx,[ebp+0x60]
	push edx
	push eax
	call PcCreate_IWzProperty
	mov ecx,dword ptr [ebp+0x64]
	add esp,0xC
	mov byte ptr [ebp-4],3
	cmp ecx,ebx
	je Block18

 Block17:
	call _xbstr_t::Data_t::Release

 Block18:
	mov dword ptr [ebp+0x5C],ebx
	mov dword ptr [ebp+0x58],ebx

 Block19:
	mov eax,dword ptr [edi+0x14]
	mov esi,dword ptr [ebp+0x54]
	cmp eax,ebx
	je Block53

 Block20:
	mov ecx,dword ptr [ebp+0x5C]
	cmp ecx,dword ptr [eax-4]
	jae Block53

 Block21:
	add eax,dword ptr [ebp+0x58]
	push ebx
	mov eax,dword ptr [eax]
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x4C],esp
	push eax
	push edx
	call get_action_name_from_code
	add esp,8
	mov byte ptr [ebp-4],5
	cmp esi,ebx
	je Block54

 Block22:
	lea ecx,[ebp]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x48]
	mov dword ptr [ebp+0x48],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block24

 Block23:
	cmp eax,0x80004002
	jne Block65

 Block24:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],8
	jne Block27

 Block25:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	cmp eax,ebx
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov esi,dword ptr [ebp+0x48]
	cmp esi,ebx
	sete al
	test al,al
	je Block31

 Block29:
	mov byte ptr [ebp-4],3
	cmp esi,ebx
	je Block52

 Block30:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx
	inc dword ptr [ebp+0x5C]
	add dword ptr [ebp+0x58],0x20
	jmp Block19

 Block31:
	mov eax,0x20
	call __chkstk
	mov eax,dword ptr [edi+0x14]
	add eax,dword ptr [ebp+0x58]
	mov ecx,esp
	mov eax,dword ptr [eax+4]
	push ebx
	push ebx
	push 0xA
	push ecx
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],9
	cmp esi,ebx
	je Block54

 Block32:
	lea eax,[ebp+0x24]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],8
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xA
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x64]
	mov dword ptr [ebp+0x64],ebx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block34

 Block33:
	cmp eax,0x80004002
	jne Block65

 Block34:
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],0xC
	jne Block37

 Block35:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	cmp eax,ebx
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea edx,[ebp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov edi,dword ptr [ebp+0x64]
	cmp edi,ebx
	sete al
	test al,al
	je Block42

 Block39:
	mov byte ptr [ebp-4],8
	cmp edi,ebx
	je Block41

 Block40:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block41:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],3
	call eax
	inc dword ptr [ebp+0x5C]
	mov edi,dword ptr [ebp+0x44]
	add dword ptr [ebp+0x58],0x20
	jmp Block19

 Block42:
	mov ecx,0xD
	mov word ptr [ebp+0x34],cx
	mov dword ptr [ebp+0x3C],edi
	cmp edi,ebx
	je Block44

 Block43:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax

 Block44:
	mov eax,0x20
	mov byte ptr [ebp-4],0xD
	call __chkstk
	mov edx,dword ptr [ebp+0x5C]
	mov eax,esp
	lea ecx,[ebp+0x34]
	push ecx
	push 0xA
	push eax
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0xE
	cmp ecx,ebx
	je Block54

 Block45:
	mov byte ptr [ebp-4],0xD
	call IWzProperty::Putitem
	cmp word ptr [ebp+0x34],8
	mov byte ptr [ebp-4],0xC
	jne Block48

 Block46:
	xor eax,eax
	mov word ptr [ebp+0x34],ax
	mov eax,dword ptr [ebp+0x3C]
	cmp eax,ebx
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea ecx,[ebp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block49:
	mov byte ptr [ebp-4],8
	cmp edi,ebx
	je Block51

 Block50:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block51:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],3
	call edx
	mov edi,dword ptr [ebp+0x44]

 Block52:
	inc dword ptr [ebp+0x5C]
	add dword ptr [ebp+0x58],0x20
	jmp Block19

 Block53:
	mov eax,dword ptr [ebp+0x60]
	cmp eax,ebx
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x64]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x20]
	mov dword ptr [ebp+0x64],ebx
	call eax
	cmp eax,ebx
	jge Block57

 Block56:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block57:
	cmp dword ptr [ebp+0x64],ebx
	jne Block70

 Block58:
	mov eax,dword ptr [ebp+0x60]
	cmp eax,ebx
	je Block72

 Block59:
	mov ecx,eax
	xor eax,eax
	mov dword ptr [ebp+0x60],eax
	cmp ecx,ebx
	je Block71

 Block60:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax
	jmp Block70

 Block61:
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x4C],esp
	push esi
	push ecx
	call get_action_name_from_code
	add esp,8
	mov ecx,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0xF
	cmp ecx,ebx
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	lea edx,[ebp+0x24]
	push edx
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x10
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x60]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block66

 Block64:
	cmp eax,0x80004002
	je Block66

 Block65:
	push eax
	call _com_issue_error

 Block66:
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],3
	jne Block69

 Block67:
	xor eax,eax
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp+0x2C]
	cmp eax,ebx
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea ecx,[ebp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov eax,dword ptr [ebp+0x60]

 Block71:
	cmp eax,ebx

 Block72:
	sete cl
	test cl,cl
	je Block78

 Block73:
	mov byte ptr [ebp-4],2
	cmp eax,ebx
	je Block75

 Block74:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block75:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],1
	cmp eax,ebx
	je Block77

 Block76:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block77:
	mov edi,dword ptr [ebp+0x50]
	jmp Block160

 Block78:
	lea eax,[ebp-0x38]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov ecx,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x11
	cmp ecx,ebx
	jne Block80

 Block79:
	push 0x80004003
	call _com_issue_error

 Block80:
	lea edx,[ebp+0x48]
	push edx
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[ebp+0x58]
	mov byte ptr [ebp-4],0x12
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x14
	cmp eax,ebx
	je Block82

 Block81:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block82:
	mov dword ptr [ebp-0x28],ebx
	cmp dword ptr [ebp+0x58],ebx
	je Block54

 Block83:
	mov eax,dword ptr [ebp+0x58]
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x28]
	push edx
	lea edx,[ebp-0x38]
	push edx
	push 1
	push eax
	mov eax,dword ptr [ecx+0xC]
	call eax
	test eax,eax
	jne Block145

 Block84:
	lea ecx,[ebp-0x38]
	push ecx
	lea edx,[ebp+0x5C]
	push edx
	call DetachBSTR
	mov esi,dword ptr [ebp+0x5C]
	add esp,4
	xor edi,edi
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [eax],esi
	cmp esi,edi
	je Block86

 Block85:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block86:
	mov ecx,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x16
	cmp ecx,edi
	je Block54

 Block87:
	lea edx,[ebp+0x34]
	push edx
	mov byte ptr [ebp-4],0x15
	call IWzProperty::Getitem
	lea eax,[ebp+0x34]
	push eax
	lea ecx,[ebp-0x14]
	push ecx
	mov byte ptr [ebp-4],0x17
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x18
	mov dword ptr [ebp+0x64],edi
	mov dword ptr [ebp+0x20],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block89

 Block88:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block89:
	lea ecx,[ebp+0x64]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block91

 Block90:
	cmp eax,0x80004002
	jne Block65

 Block91:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0x1A
	cmp eax,edi
	je Block93

 Block92:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block93:
	mov ebx,dword ptr [ebp+0x64]
	cmp ebx,edi
	sete al
	test al,al
	je Block108

 Block94:
	mov byte ptr [ebp-4],0x17
	cmp ebx,edi
	je Block96

 Block95:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block96:
	cmp word ptr [ebp+0x34],8
	mov byte ptr [ebp-4],0x15
	jne Block99

 Block97:
	mov eax,dword ptr [ebp+0x3C]
	xor edx,edx
	mov word ptr [ebp+0x34],dx
	cmp eax,edi
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea eax,[ebp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block100:
	mov byte ptr [ebp-4],0x14
	cmp esi,edi
	je Block83

 Block101:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block107

 Block102:
	mov eax,dword ptr [esi]
	cmp eax,edi
	je Block104

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block104:
	mov eax,dword ptr [esi+4]
	cmp eax,edi
	je Block106

 Block105:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block106:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block107:
	mov dword ptr [ebp+0x5C],edi
	jmp Block83

 Block108:
	push 0x18
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,edi
	je Block110

 Block109:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3 // TODO: 		mov dword ptr [eax],offset CActionMan::SHADOWPARTNERACTIONFRAMEENTRY::`vftable'
	mov dword ptr [eax+0xC],edi
	mov esi,eax
	jmp Block111

 Block110:
	xor esi,esi

 Block111:
	cmp ebx,edi
	je Block54

 Block112:
	lea edx,[ebp+0x4C]
	push edx
	mov ecx,ebx
	call IWzCanvas::Getproperty
	mov edi,dword ptr [esi+0xC]
	mov byte ptr [ebp-4],0x1B
	cmp edi,ebx
	je Block115

 Block113:
	mov dword ptr [esi+0xC],ebx
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+4]
	push ebx
	call ecx
	test edi,edi
	je Block115

 Block114:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block115:
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x20],esp
	push 0x1A98
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x10]
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x1C
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x1D
	test ecx,ecx
	je Block54

 Block116:
	lea eax,[ebp+0x24]
	push eax
	mov byte ptr [ebp-4],0x1E
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1F
	call get_int32
	mov edi,8
	add esp,8
	mov dword ptr [esi+0x10],eax
	mov byte ptr [ebp-4],0x1E
	cmp word ptr [ebp+0x24],di
	jne Block119

 Block117:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	test eax,eax
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea edx,[ebp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block120:
	mov eax,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0x1B
	test eax,eax
	je Block122

 Block121:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block122:
	push 0xFFFFFFFF
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x20],esp
	push 0x1A99
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x18]
	push ecx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x20
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x21
	test ecx,ecx
	je Block54

 Block123:
	lea edx,[ebp-0x48]
	push edx
	mov byte ptr [ebp-4],0x22
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x23
	call get_int32
	add esp,8
	mov dword ptr [esi+0x14],eax
	mov byte ptr [ebp-4],0x22
	cmp word ptr [ebp-0x48],di
	jne Block126

 Block124:
	xor eax,eax
	mov word ptr [ebp-0x48],ax
	mov eax,dword ptr [ebp-0x40]
	test eax,eax
	je Block127

 Block125:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block126:
	lea ecx,[ebp-0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block127:
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0x1B
	test eax,eax
	je Block129

 Block128:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block129:
	lea edi,[esi+4]
	push edi
	mov dword ptr [ebp+0xC],esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],0x24
	call ZList<ZRef<CActionMan::SHADOWPARTNERACTIONFRAMEENTRY>>::AddTail_
	lea ecx,[ebp+8]
	push ecx
	mov ecx,eax
	call ZRef<CActionMan::SHADOWPARTNERACTIONFRAMEENTRY>::op_assign_copy
	push edi
	mov byte ptr [ebp-4],0x1B
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block131

 Block130:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block131:
	mov eax,dword ptr [ebp+0x4C]
	mov dword ptr [ebp+0xC],0
	mov byte ptr [ebp-4],0x1A
	test eax,eax
	je Block133

 Block132:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block133:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [ebp-4],0x17
	call ecx
	cmp word ptr [ebp+0x34],8
	mov byte ptr [ebp-4],0x15
	jne Block136

 Block134:
	mov eax,dword ptr [ebp+0x3C]
	xor edx,edx
	mov word ptr [ebp+0x34],dx
	test eax,eax
	je Block137

 Block135:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block137

 Block136:
	lea eax,[ebp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block137:
	cmp dword ptr [ebp+0x5C],0
	mov byte ptr [ebp-4],0x14
	je Block83

 Block138:
	mov esi,dword ptr [ebp+0x5C]
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block144

 Block139:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block141

 Block140:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block141:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block143

 Block142:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block143:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block144:
	mov dword ptr [ebp+0x5C],0
	jmp Block83

 Block145:
	mov edx,dword ptr [ebp+0x44]
	cmp dword ptr [edx+4],0
	mov ebx,dword ptr [ebp+0x7C]
	je Block152

 Block146:
	mov esi,dword ptr [ebx+0x10]
	mov dword ptr [ebp+0x64],esi
	test esi,esi
	je Block152

 Block147:
	lea ebx,[ebx]

 Block148:
	cmp esi,dword ptr [ebx+0xC]
	je Block151

 Block149:
	cmp esi,dword ptr [ebx+0x10]
	je Block151

 Block150:
	mov ecx,ebx
	call ZList<ZRef<CActionMan::SHADOWPARTNERACTIONFRAMEENTRY>>::AddTail_
	push esi
	mov ecx,eax
	call ZRef<CActionMan::SHADOWPARTNERACTIONFRAMEENTRY>::op_assign_copy

 Block151:
	lea eax,[ebp+0x64]
	push eax
	call ZList<ZRef<CActionMan::SHADOWPARTNERACTIONFRAMEENTRY>>::GetPrev
	mov esi,dword ptr [ebp+0x64]
	add esp,4
	test esi,esi
	jne Block148

 Block152:
	mov edi,dword ptr [ebp+0x50]
	lea esi,[edi+0x18]
	mov ecx,esi
	call ZList<ZRef<CActionMan::SHADOWPARTNERACTIONFRAMEENTRY>>::RemoveAll
	push ebx
	mov ecx,esi
	call ZList<ZRef<CActionMan::SHADOWPARTNERACTIONFRAMEENTRY>>::AddTail_List
	mov ecx,dword ptr [ebp-0x24]
	add ecx,0x270
	call ZList<ZRef<CActionMan::SHADOWPARTNERACTIONENTRY>>::AddTail_
	lea ecx,[ebp-0x20]
	mov esi,eax
	push ecx
	mov ecx,esi
	call ZRef<CActionMan::SHADOWPARTNERACTIONENTRY>::op_assign_copy
	mov ecx,dword ptr [ebp-0x10]
	lea edx,[ebp-0x20]
	push edx
	lea eax,[ebp+0x14]
	push eax
	mov dword ptr [edi+0x34],esi
	call ZMap<unsigned long, ZRef<CActionMan::SHADOWPARTNERACTIONENTRY>, unsigned long>::Insert
	mov dword ptr [edi+0x30],eax
	call timeGetTime
	mov dword ptr [edi+0x2C],eax
	mov eax,dword ptr [ebp+0x58]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x11
	call edx
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],3
	jne Block155

 Block153:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	test eax,eax
	je Block156

 Block154:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block156

 Block155:
	lea ecx,[ebp-0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block156:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block158

 Block157:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block158:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block160

 Block159:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block160:
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	lea esi,[edi+4]
	push esi
	mov byte ptr [ebp-4],0
	call ebx
	test eax,eax
	jne Block162

 Block161:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block162:
	mov esi,dword ptr [ebp+0x1C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test esi,esi
	je Block165

 Block163:
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block165

 Block164:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block165:
	lea esp,[ebp-0x58]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x68]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x6C
	mov esp,ebp
	pop ebp
	ret 0xC
}
}
// operator___146404
__SUB(00007820, __cdecl, 146404,  tagRECT&, tagRECT&, const SECRECT&) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+0xC]
	mov eax,dword ptr [esi+8]
	push edi
	push eax
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov edi,dword ptr [esp+0x14]
	mov dword ptr [edi],eax
	mov ecx,dword ptr [esi+0x14]
	push ecx
	lea edx,[esi+0xC]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [edi+4],eax
	mov eax,dword ptr [esi+0x20]
	push eax
	lea ecx,[esi+0x18]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [edi+8],eax
	mov edx,dword ptr [esi+0x2C]
	push edx
	add esi,0x24
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,0x20
	mov dword ptr [edi+0xC],eax
	mov eax,edi
	pop edi
	pop esi
	ret
}
}
// CActionMan::GetMorphImgEntry
_SUB_EXCEPTION_HANDLER(18B30)
__SUB_CLASS_THIS(00018B30, __thiscall, 33399,  CActionMan, ZRef<CActionMan::MORPHIMGENTRY>*, ZRef<CActionMan::MORPHIMGENTRY>*, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_18B30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC4
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xD8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x3C],esi
	xor ebp,ebp
	mov dword ptr [esp+0x38],ebp
	mov dword ptr [esp+0x20],ebp
	lea eax,[esp+0x14]
	push 0xDEE
	push eax
	mov dword ptr [esp+0xE8],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edi,dword ptr [esp+0xEC]
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0xEC],2
	call ZXString16::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0xE0],1
	cmp eax,ebp
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov dword ptr [esp+0x30],ebp
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x18]
	lea ecx,[esi+0x88]
	push eax
	mov byte ptr [esp+0xE8],3
	mov dword ptr [esp+0x1C],edi
	mov dword ptr [esp+0x5C],ecx
	call ZMap<long, ZRef<CActionMan::MORPHIMGENTRY>, long>::GetAt
	test eax,eax
	jne Block99

 Block3:
	push 0x18
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	cmp eax,ebp
	je Block10

 Block4:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3 // TODO: 		mov dword ptr [eax],offset CActionMan::MORPHIMGENTRY::`vftable'
	mov dword ptr [eax+0xC],ebp
	mov edi,eax
	mov dword ptr [esp+0x14],eax
	add eax,4
	push eax
	call ebx

 Block5:
	mov esi,dword ptr [esp+0x30]
	mov dword ptr [esp+0x30],edi
	cmp esi,ebp
	je Block8

 Block6:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block7:
	push edi
	call ebx
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block8:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x68]
	push ecx
	call esi
	lea edx,[esp+0x68]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block11

 Block9:
	push eax
	call _com_issue_error

 Block10:
	xor edi,edi
	mov dword ptr [esp+0x14],edi
	jmp Block5

 Block11:
	lea eax,[esp+0xA8]
	push eax
	mov byte ptr [esp+0xE4],4
	call esi
	lea ecx,[esp+0xA8]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	push ebp
	push ebp
	lea edx,[esp+0x70]
	push edx
	mov edx,dword ptr [esp+0x2C]
	lea eax,[esp+0xB4]
	push eax
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,5
	push edx
	mov byte ptr [esp+0xF8],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xF4],6
	cmp dword ptr [_D_G_RM],ebp
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea eax,[esp+0xCC]
	mov byte ptr [esp+0xF4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xE8],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block18

 Block16:
	cmp eax,0x80004002
	je Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [esp+0xE0],9
	cmp word ptr [esp+0xB8],di
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0xC0]
	xor ecx,ecx
	mov word ptr [esp+0xB8],cx
	cmp eax,ebp
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[esp+0xB8]
	push edx
	call esi

 Block22:
	mov byte ptr [esp+0xE0],0xA
	cmp word ptr [esp+0xA8],di
	jne Block25

 Block23:
	xor eax,eax
	mov word ptr [esp+0xA8],ax
	mov eax,dword ptr [esp+0xB0]
	cmp eax,ebp
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea ecx,[esp+0xA8]
	push ecx
	call esi

 Block26:
	mov byte ptr [esp+0xE0],0xB
	cmp word ptr [esp+0x68],di
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x70]
	xor edx,edx
	mov word ptr [esp+0x68],dx
	cmp eax,ebp
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea eax,[esp+0x68]
	push eax
	call esi

 Block30:
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x3D5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x28]
	mov byte ptr [esp+0xEC],0xC
	cmp ecx,ebp
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	lea edx,[esp+0xD4]
	push edx
	mov byte ptr [esp+0xF0],0xB
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xE8],0xD
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x28],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block35

 Block33:
	cmp eax,0x80004002
	je Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	mov byte ptr [esp+0xE0],0xF
	cmp word ptr [esp+0xC8],di
	jne Block38

 Block36:
	xor eax,eax
	mov word ptr [esp+0xC8],ax
	mov eax,dword ptr [esp+0xD0]
	cmp eax,ebp
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea ecx,[esp+0xC8]
	push ecx
	call esi

 Block39:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x3D6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x28]
	mov byte ptr [esp+0xE4],0x10
	cmp ecx,ebp
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	lea eax,[esp+0x8C]
	push eax
	mov byte ptr [esp+0xE8],0xF
	call IWzProperty::Getitem
	mov byte ptr [esp+0xE0],0x11
	cmp word ptr [esp+0x88],di
	jne Block87

 Block42:
	mov ecx,dword ptr [esp+0x90]
	push ecx
	call __wtoi
	mov ecx,dword ptr [esp+0x40]
	add esp,4
	push eax
	lea edx,[esp+0x5C]
	push edx
	call CActionMan::GetMorphImgEntry
	lea eax,[esp+0x78]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov ecx,dword ptr [esp+0x5C]
	mov ecx,dword ptr [ecx+0xC]
	mov byte ptr [esp+0xE0],0x13
	cmp ecx,ebp
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	lea edx,[esp+0x60]
	push edx
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0xE4],0x14
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0xE0],0x16
	cmp eax,ebp
	je Block46

 Block45:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block46:
	mov esi,dword ptr [esp+0x34]
	mov dword ptr [esp+0x18],ebp
	cmp esi,ebp
	je Block14

 Block47:
	mov eax,dword ptr [esi]
	mov eax,dword ptr [eax+0xC]
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x7C]
	push edx
	push 1
	push esi
	call eax
	test eax,eax
	jne Block82

 Block48:
	lea ecx,[esp+0x78]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	call DetachBSTR
	mov edi,dword ptr [esp+0x30]
	add esp,4
	mov eax,esp
	mov dword ptr [esp+0x68],esp
	mov dword ptr [eax],edi
	cmp edi,ebp
	je Block50

 Block49:
	lea eax,[edi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block50:
	mov ecx,dword ptr [esp+0x60]
	mov ecx,dword ptr [ecx+0xC]
	mov byte ptr [esp+0xE4],0x18
	cmp ecx,ebp
	je Block14

 Block51:
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0xE8],0x17
	call IWzProperty::Getitem
	lea eax,[esp+0x40]
	push 0x3D5
	push eax
	mov byte ptr [esp+0xE8],0x19
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	cmp eax,ebp
	je Block53

 Block52:
	mov eax,dword ptr [eax]
	jmp Block54

 Block53:
	xor eax,eax

 Block54:
	cmp edi,ebp
	je Block56

 Block55:
	mov ecx,dword ptr [edi]
	jmp Block57

 Block56:
	xor ecx,ecx

 Block57:
	push eax
	push ecx
	call __wcsicmp
	add esp,8
	test eax,eax
	mov eax,dword ptr [esp+0x40]
	sete bl
	cmp eax,ebp
	je Block66

 Block58:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebp
	jne Block65

 Block59:
	cmp esi,ebp
	je Block65

 Block60:
	mov eax,dword ptr [esi]
	cmp eax,ebp
	je Block62

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block62:
	mov eax,dword ptr [esi+4]
	cmp eax,ebp
	je Block64

 Block63:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block64:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block65:
	mov esi,dword ptr [esp+0x34]
	mov dword ptr [esp+0x40],ebp

 Block66:
	test bl,bl
	je Block68

 Block67:
	cmp word ptr [esp+0x44],8
	jmp Block76

 Block68:
	lea eax,[esp+0x98]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x98]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block9

 Block69:
	lea edx,[esp+0x98]
	push edx
	lea eax,[esp+0x48]
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x70],esp
	mov dword ptr [eax],edi
	cmp edi,ebp
	je Block71

 Block70:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block71:
	mov ecx,dword ptr [esp+0x28]
	mov byte ptr [esp+0xEC],0x1B
	mov byte ptr [esp+0xEC],0x1A
	call IWzProperty::Add
	mov ebx,8
	mov byte ptr [esp+0xE0],0x19
	cmp word ptr [esp+0x98],bx
	jne Block74

 Block72:
	mov eax,dword ptr [esp+0xA0]
	xor edx,edx
	mov word ptr [esp+0x98],dx
	cmp eax,ebp
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea eax,[esp+0x98]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block75:
	cmp word ptr [esp+0x44],bx

 Block76:
	mov byte ptr [esp+0xE0],0x17
	jne Block79

 Block77:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	cmp eax,ebp
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block80:
	mov byte ptr [esp+0xE0],0x16
	cmp edi,ebp
	je Block47

 Block81:
	mov ecx,edi
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x28],ebp
	jmp Block47

 Block82:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0xE4],0x13
	call ecx
	cmp word ptr [esp+0x78],8
	mov byte ptr [esp+0xE0],0x12
	jne Block85

 Block83:
	mov eax,dword ptr [esp+0x80]
	xor edx,edx
	mov word ptr [esp+0x78],dx
	cmp eax,ebp
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea eax,[esp+0x78]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block86:
	lea ecx,[esp+0x58]
	mov byte ptr [esp+0xE0],0x11
	call ZRef<CActionMan::MORPHIMGENTRY>::~ZRef<CActionMan::MORPHIMGENTRY>

 Block87:
	mov ebx,dword ptr [esp+0x14]
	mov esi,dword ptr [ebx+0xC]
	mov eax,dword ptr [esp+0x1C]
	cmp esi,eax
	je Block90

 Block88:
	mov dword ptr [ebx+0xC],eax
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx
	cmp esi,ebp
	je Block90

 Block89:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block90:
	mov ecx,dword ptr [esp+0x3C]
	add ecx,0x74
	call ZList<ZRef<CActionMan::MORPHIMGENTRY>>::AddTail_
	lea edx,[esp+0x2C]
	push edx
	mov ecx,eax
	call ZRef<CActionMan::MORPHIMGENTRY>::op_assign_copy
	mov eax,dword ptr [esp+0xEC]
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [esp+0x58]
	lea edx,[esp+0x1C]
	push edx
	mov dword ptr [esp+0x20],eax
	call ZMap<long, ZRef<CActionMan::MORPHIMGENTRY>, long>::Insert
	mov dword ptr [ebx+0x14],eax
	call timeGetTime
	mov edi,dword ptr [esp+0xE8]
	lea esi,[ebx+4]
	mov dword ptr [ebx+0x10],eax
	push esi
	mov dword ptr [edi+4],ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp word ptr [esp+0x88],8
	mov dword ptr [esp+0x38],1
	mov byte ptr [esp+0xE0],0xF
	jne Block93

 Block91:
	xor eax,eax
	mov word ptr [esp+0x88],ax
	mov eax,dword ptr [esp+0x90]
	cmp eax,ebp
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea ecx,[esp+0x88]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block94:
	mov eax,dword ptr [esp+0x24]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0xE4],0xB
	call eax
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0xE4],3
	call edx
	push esi
	mov byte ptr [esp+0xE4],1
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block96

 Block95:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block96:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0xE0],0
	cmp eax,ebp
	je Block98

 Block97:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block98:
	mov eax,edi
	jmp Block104

 Block99:
	call timeGetTime
	mov esi,dword ptr [esp+0x30]
	mov ebx,dword ptr [esp+0xE8]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	lea edi,[esi+4]
	mov dword ptr [esi+0x10],eax
	push edi
	mov dword ptr [ebx+4],esi
	call ebp
	push edi
	mov dword ptr [esp+0x3C],1
	mov byte ptr [esp+0xE4],1
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block101

 Block100:
	push edi
	call ebp
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block101:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0xE0],0
	test eax,eax
	je Block103

 Block102:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block103:
	mov eax,ebx

 Block104:
	mov ecx,dword ptr [esp+0xD8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xD0
	ret 8
}
}
// CActionMan::LoadEmployeeAction
_SUB_EXCEPTION_HANDLER(22940)
__SUB_CLASS_THIS(00022940, __thiscall, 33416,  CActionMan, void, CEmployeeTemplate*, long, ZList<ZRef<CActionMan::EMPLOYEEACTIONFRAMEENTRY> >&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_22940
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x98
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xAC]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x34],ecx
	mov eax,dword ptr [esp+0xBC]
	mov ebx,dword ptr [esp+0xC0]
	xor edi,edi
	mov dword ptr [esp+0x14],edi
	mov ebp,dword ptr [eax]
	mov edx,ebp
	shl edx,8
	or edx,ebx
	mov dword ptr [esp+0x18],ebp
	mov dword ptr [esp+0x3C],edx
	mov dword ptr [esp+0x20],edi
	lea eax,[esp+0x1C]
	push eax
	lea edx,[esp+0x40]
	add ecx,0x22C
	push edx
	mov dword ptr [esp+0xBC],edi
	call ZMap<unsigned long, ZRef<CActionMan::EMPLOYEEACTIONENTRY>, unsigned long>::GetAt
	test eax,eax
	je Block3

 Block1:
	call timeGetTime
	mov edi,dword ptr [esp+0xC4]
	mov esi,dword ptr [esp+0x20]
	mov ecx,edi
	mov dword ptr [esi+0x2C],eax
	call ZList<ZRef<CActionMan::EMPLOYEEACTIONFRAMEENTRY>>::RemoveAll
	lea eax,[esi+0x18]
	push eax
	mov ecx,edi
	call ZList<ZRef<CActionMan::EMPLOYEEACTIONFRAMEENTRY>>::AddTail_List
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0xB8],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block92

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax
	jmp Block92

 Block3:
	push 0x38
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,edi
	je Block15

 Block4:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3 // TODO: 		mov dword ptr [eax],offset CActionMan::EMPLOYEEACTIONENTRY::`vftable'
	mov dword ptr [eax+0x20],edi
	mov dword ptr [eax+0x24],edi
	mov dword ptr [eax+0x28],edi
	int 3 // TODO: 		mov dword ptr [eax+0x18],offset ZList<ZRef<CActionMan::EMPLOYEEACTIONFRAMEENTRY>>::`vftable'
	mov edi,eax
	mov dword ptr [esp+0x38],eax
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov esi,dword ptr [esp+0x20]
	mov dword ptr [esp+0x20],edi
	test esi,esi
	je Block9

 Block6:
	lea ebp,[esi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block7:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block8:
	mov ebp,dword ptr [esp+0x18]

 Block9:
	push ebp
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr [edi+0xC],ebp
	mov dword ptr [edi+0x10],ebx
	call CActionMan::GetEmployeeImgEntry
	cmp dword ptr [esp+0x30],0
	je Block91

 Block10:
	cmp ebx,1
	push 0
	push 0
	jge Block17

 Block11:
	mov eax,dword ptr [ebx*4+ActionData::m_saEmployeeAction]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block13

 Block12:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block13:
	mov edx,dword ptr [esp+0x3C]
	mov ecx,dword ptr [edx+0xC]
	mov byte ptr [esp+0xC0],2
	test ecx,ecx
	jne Block16

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	mov dword ptr [esp+0x38],edi
	jmp Block5

 Block16:
	lea eax,[esp+0x98]
	push eax
	mov byte ptr [esp+0xC4],1
	call IWzProperty::Getitem
	mov byte ptr [esp+0xBC],3
	mov ebx,1
	jmp Block22

 Block17:
	mov ecx,dword ptr [esp+0xC4]
	mov edx,dword ptr [ecx+4]
	lea eax,[edx+ebx*4-4]
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block19

 Block18:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block19:
	mov eax,dword ptr [esp+0x3C]
	mov ecx,dword ptr [eax+0xC]
	mov dword ptr [esp+0xC0],4
	test ecx,ecx
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	lea edx,[esp+0x88]
	push edx
	mov byte ptr [esp+0xC4],3
	call IWzProperty::Getitem
	mov dword ptr [esp+0xBC],5
	mov ebx,2

 Block22:
	mov ecx,eax
	mov dword ptr [esp+0x1C],ebx
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block25

 Block23:
	cmp eax,0x80004002
	je Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov dword ptr [esp+0xB4],7
	mov esi,8
	test bl,2
	je Block30

 Block26:
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x7C],si
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x7C],ax
	mov eax,dword ptr [esp+0x84]
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[esp+0x7C]
	push ecx
	call edi

 Block30:
	mov byte ptr [esp+0xB4],8
	test bl,1
	je Block35

 Block31:
	cmp word ptr [esp+0x8C],si
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0x94]
	xor edx,edx
	mov word ptr [esp+0x8C],dx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea eax,[esp+0x8C]
	push eax
	call edi

 Block35:
	mov esi,dword ptr [esp+0x18]
	test esi,esi
	sete al
	test al,al
	je Block38

 Block36:
	mov byte ptr [esp+0xB4],1
	test esi,esi
	je Block91

 Block37:
	mov ecx,dword ptr [esi]
	push esi
	jmp Block90

 Block38:
	lea eax,[esp+0x64]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [esp+0xB4],9
	test esi,esi
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	lea ecx,[esp+0x60]
	push ecx
	mov ecx,esi
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0xB8],0xA
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0xB4],0xC
	test eax,eax
	je Block42

 Block41:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block42:
	cmp dword ptr [esp+0x40],0
	mov dword ptr [esp+0x5C],0
	je Block14

 Block43:
	mov edi,edi

 Block44:
	mov esi,dword ptr [esp+0x40]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x5C]
	push edx
	lea eax,[esp+0x68]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block85

 Block45:
	lea edx,[esp+0x64]
	push edx
	lea eax,[esp+0x18]
	push eax
	call DetachBSTR
	mov ebx,dword ptr [esp+0x1C]
	add esp,4
	xor esi,esi
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax],ebx
	cmp ebx,esi
	je Block47

 Block46:
	lea ecx,[ebx+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block47:
	mov ecx,dword ptr [esp+0x1C]
	lea edx,[esp+0x48]
	mov byte ptr [esp+0xB8],0xE
	push edx
	mov byte ptr [esp+0xBC],0xD
	call IWzProperty::Getitem
	lea eax,[esp+0x44]
	push eax
	lea ecx,[esp+0x58]
	push ecx
	mov byte ptr [esp+0xBC],0xF
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [esp+0xB8],0x10
	mov dword ptr [esp+0x28],esi
	mov dword ptr [esp+0x5C],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block49

 Block48:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block49:
	lea ecx,[esp+0x28]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	cmp eax,esi
	jge Block51

 Block50:
	cmp eax,0x80004002
	jne Block24

 Block51:
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0xB4],0x12
	cmp eax,esi
	je Block53

 Block52:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block53:
	mov edi,dword ptr [esp+0x24]
	cmp edi,esi
	sete al
	test al,al
	je Block62

 Block54:
	mov byte ptr [esp+0xB4],0xF
	cmp edi,esi
	je Block56

 Block55:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block56:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0xB4],0xD
	jne Block59

 Block57:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	cmp eax,esi
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block60:
	mov byte ptr [esp+0xB4],0xC
	cmp ebx,esi
	je Block44

 Block61:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x14],esi
	jmp Block44

 Block62:
	push 0x44
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,esi
	je Block64

 Block63:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3 // TODO: 		mov dword ptr [eax],offset CActionMan::EMPLOYEEACTIONFRAMEENTRY::`vftable'
	mov dword ptr [eax+0xC],esi
	mov esi,eax

 Block64:
	mov ebp,dword ptr [esi+0xC]
	cmp ebp,edi
	je Block69

 Block65:
	mov dword ptr [esi+0xC],edi
	test edi,edi
	je Block67

 Block66:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx

 Block67:
	test ebp,ebp
	je Block69

 Block68:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block69:
	push 0xB4
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x60],esp
	push 0x1AA9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xBC],0x13
	test edi,edi
	je Block14

 Block70:
	lea eax,[esp+0x30]
	push eax
	mov ecx,edi
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xBC],0x14
	test ecx,ecx
	je Block14

 Block71:
	lea edx,[esp+0xA4]
	push edx
	mov byte ptr [esp+0xC0],0x15
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0x16
	call get_int32
	add esp,8
	cmp word ptr [esp+0x9C],8
	mov dword ptr [esi+0x40],eax
	mov byte ptr [esp+0xB4],0x15
	jne Block74

 Block72:
	xor eax,eax
	mov word ptr [esp+0x9C],ax
	mov eax,dword ptr [esp+0xA4]
	test eax,eax
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea ecx,[esp+0x9C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0xB4],0x12
	test eax,eax
	je Block77

 Block76:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block77:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	lea ebp,[esi+4]
	push ebp
	mov dword ptr [esp+0x7C],esi
	call ebx
	mov ecx,dword ptr [esp+0xC4]
	mov byte ptr [esp+0xB4],0x17
	call ZList<ZRef<CActionMan::EMPLOYEEACTIONFRAMEENTRY>>::AddTail_
	lea ecx,[esp+0x74]
	push ecx
	mov ecx,eax
	call ZRef<CActionMan::EMPLOYEEACTIONFRAMEENTRY>::op_assign_copy
	push ebp
	mov byte ptr [esp+0xB8],0x12
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block79

 Block78:
	push ebp
	call ebx
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block79:
	mov ebp,dword ptr [esp+0x38]
	lea esi,[ebp+0x18]
	mov ecx,esi
	mov dword ptr [esp+0x78],0
	call ZList<ZRef<CActionMan::EMPLOYEEACTIONFRAMEENTRY>>::RemoveAll
	mov ecx,dword ptr [esp+0xC4]
	push ecx
	mov ecx,esi
	call ZList<ZRef<CActionMan::EMPLOYEEACTIONFRAMEENTRY>>::AddTail_List
	mov ebx,dword ptr [esp+0x34]
	lea ecx,[ebx+0x218]
	call ZList<ZRef<CActionMan::EMPLOYEEACTIONENTRY>>::AddTail_
	mov esi,eax
	lea edx,[esp+0x1C]
	push edx
	mov ecx,esi
	call ZRef<CActionMan::EMPLOYEEACTIONENTRY>::op_assign_copy
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x40]
	push ecx
	lea ecx,[ebx+0x22C]
	mov dword ptr [ebp+0x34],esi
	call ZMap<unsigned long, ZRef<CActionMan::EMPLOYEEACTIONENTRY>, unsigned long>::Insert
	mov dword ptr [ebp+0x30],eax
	call timeGetTime
	mov dword ptr [ebp+0x2C],eax
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [esp+0xB8],0xF
	call eax
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0xB4],0xD
	jne Block82

 Block80:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block83:
	cmp dword ptr [esp+0x14],0
	mov byte ptr [esp+0xB4],0xC
	je Block44

 Block84:
	mov ecx,dword ptr [esp+0x14]
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x14],0
	jmp Block44

 Block85:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0xB8],9
	call ecx
	cmp word ptr [esp+0x64],8
	mov byte ptr [esp+0xB4],8
	jne Block88

 Block86:
	mov eax,dword ptr [esp+0x6C]
	xor edx,edx
	mov word ptr [esp+0x64],dx
	test eax,eax
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea eax,[esp+0x64]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block89:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xB4],1
	push eax

 Block90:
	mov edx,dword ptr [ecx+8]
	call edx

 Block91:
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0xB4],0
	call ZRef<CActionMan::EMPLOYEEIMGENTRY>::~ZRef<CActionMan::EMPLOYEEIMGENTRY>
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	call ZRef<CActionMan::EMPLOYEEACTIONENTRY>::~ZRef<CActionMan::EMPLOYEEACTIONENTRY>

 Block92:
	mov ecx,dword ptr [esp+0xAC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA4
	ret 0xC
}
}
// CActionMan::GetMeleeAttackRange
_SUB_EXCEPTION_HANDLER(28D00)
__SUB_CLASS_THIS(00028D00, __thiscall, 33429,  CActionMan, void, NakedParam<Ztl_bstr_t>, long, tagRECT&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_28D00
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov esi,dword ptr [esp+0x20]
	mov dword ptr [esp+0x14],0
	cmp esi,0x4A
	jne Block2

 Block1:
	mov eax,dword ptr [esp+0x24]
	push 0xFFFFFFFA
	push 0xFFFFFFEE
	push 0xFFFFFFC2
	push 0xFFFFFFA8
	push eax
	call SetRect
	jmp Block9

 Block2:
	cmp esi,0x39
	jne Block4

 Block3:
	mov esi,0x29

 Block4:
	push ecx
	mov ecx,dword ptr [esp+0x20]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x24],esp
	test eax,eax
	je Block6

 Block5:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	mov ecx,edi
	call CActionMan::GetWeaponAfterImage
	test eax,eax
	je Block8

 Block7:
	lea edx,[esi+esi*2]
	shl edx,4
	add edx,dword ptr [eax+0x10]
	mov eax,dword ptr [esp+0x24]
	push edx
	push eax
	call SECRECT::ToRect
	add esp,8
	jmp Block9

 Block8:
	mov ecx,dword ptr [esp+0x24]
	push ecx
	call SetRectEmpty

 Block9:
	mov ecx,dword ptr [esp+0x1C]
	test ecx,ecx
	je Block11

 Block10:
	call _xbstr_t::Data_t::Release

 Block11:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 0xC
}
}
// CActionMan::FACELOOKENTRY::~FACELOOKENTRY
_SUB_EXCEPTION_HANDLER(135E0)
__SUB_CLASS_THIS0(000135E0, __thiscall, 33740,  CActionMan::FACELOOKENTRY, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_135E0
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
	lea ecx,[esi+0xC]
	mov dword ptr [esp+0x14],0
	int 3 // TODO: 		mov dword ptr [ecx],offset ZList<_x_com_ptr<IWzCanvas>>::`vftable'
	call ZList<_x_com_ptr<IWzCanvas>>::RemoveAll
	int 3 // TODO: 		mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CActionMan::SweepCache
_SUB_EXCEPTION_HANDLER(15F60)
__SUB_CLASS_THIS0(00015F60, __thiscall, 33384,  CActionMan, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_15F60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	call timeGetTime
	mov ecx,eax
	sub ecx,dword ptr [esi+0x2B4]
	mov dword ptr [ebp-0x14],eax
	cmp ecx,0xEA60
	jl Block97

 Block1:
	mov dword ptr [esi+0x2B4],eax
	jmp Block3

 Block3:
	xor ebx,ebx
	mov dword ptr [ebp-0x20],ebx
	mov dword ptr [ebp-0x1C],ebx
	mov dword ptr [ebp-0x18],ebx
	push eax
	push edx
	push ecx
	mov eax,ebp
	xor eax,ecx
	mov dword ptr [ebp-0x20],eax
	inc ecx
	mov edx,dword ptr [ebp-0x1C]
	inc edx
	mov dword ptr [ebp-0x1C],edx
	mov dword ptr [ebp-0x18],0x2D9FB3F
	dec ecx
	pop ecx
	pop edx
	pop eax
	jmp Block5

 Block5:
	mov eax,dword ptr [_D_S_NTYPE]
	cmp eax,6
	ja Block97

 Block6:
	cmp EAX, 0
je Block7
cmp EAX, 1
je Block14
cmp EAX, 2
je Block28
cmp EAX, 3
je Block42
cmp EAX, 4
je Block56
cmp EAX, 5
je Block70
cmp EAX, 6
je Block84


 Block7:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [ebp-0x10],eax
	cmp eax,ebx
	je Block13

 Block8:
	lea edx,[ebp-0x10]
	push edx
	mov ebx,eax
	call ZList<ZRef<CActionMan::CHARACTERIMGENTRY>>::GetNext
	mov edi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [ebp-0x2C],edi
	test edi,edi
	je Block10

 Block9:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block10:
	mov ecx,dword ptr [ebp-0x14]
	sub ecx,dword ptr [edi+0x30]
	mov dword ptr [ebp-4],0
	cmp ecx,0x493E0
	jl Block12

 Block11:
	mov edi,dword ptr [edi+0x34]
	add edi,8
	push edi
	lea ecx,[esi+0x18]
	call ZMap<long, ZRef<CActionMan::CHARACTERIMGENTRY>, long>::RemoveKey
	push ebx
	lea ecx,[esi+4]
	call ZList<ZRef<CActionMan::CHARACTERIMGENTRY>>::RemoveAt

 Block12:
	lea ecx,[ebp-0x30]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZRef<CActionMan::CHARACTERIMGENTRY>::~ZRef<CActionMan::CHARACTERIMGENTRY>
	mov eax,dword ptr [ebp-0x10]
	test eax,eax
	jne Block8

 Block13:
	mov dword ptr [_D_S_NTYPE],1
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block14:
	mov eax,dword ptr [esi+0xD8]
	mov dword ptr [ebp-0x10],eax
	cmp eax,ebx
	je Block20

 Block15:
	lea edx,[ebp-0x10]
	push edx
	mov ebx,eax
	call ZList<ZRef<CActionMan::MOBIMGENTRY>>::GetNext
	mov edi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [ebp-0x2C],edi
	test edi,edi
	je Block17

 Block16:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block17:
	mov ecx,dword ptr [ebp-0x14]
	sub ecx,dword ptr [edi+0x10]
	mov dword ptr [ebp-4],1
	cmp ecx,0x493E0
	jl Block19

 Block18:
	mov edi,dword ptr [edi+0x14]
	add edi,8
	push edi
	lea ecx,[esi+0xE0]
	call ZMap<long, ZRef<CActionMan::MOBIMGENTRY>, long>::RemoveKey
	push ebx
	lea ecx,[esi+0xCC]
	call ZList<ZRef<CActionMan::MOBIMGENTRY>>::RemoveAt

 Block19:
	lea ecx,[ebp-0x30]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZRef<CActionMan::MOBIMGENTRY>::~ZRef<CActionMan::MOBIMGENTRY>
	mov eax,dword ptr [ebp-0x10]
	test eax,eax
	jne Block15

 Block20:
	mov eax,dword ptr [esi+0x104]
	mov dword ptr [ebp-0x10],eax
	test eax,eax
	je Block27

 Block21:
	mov edi,edi

 Block22:
	lea edx,[ebp-0x10]
	push edx
	mov ebx,eax
	call ZList<ZRef<CActionMan::MOBACTIONENTRY>>::GetNext
	mov edi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [ebp-0x2C],edi
	test edi,edi
	je Block24

 Block23:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block24:
	mov ecx,dword ptr [ebp-0x14]
	sub ecx,dword ptr [edi+0x28]
	mov dword ptr [ebp-4],2
	cmp ecx,0x493E0
	jl Block26

 Block25:
	mov edi,dword ptr [edi+0x2C]
	add edi,8
	push edi
	lea ecx,[esi+0x10C]
	call ZMap<unsigned long, ZRef<CActionMan::MOBACTIONENTRY>, unsigned long>::RemoveKey
	push ebx
	lea ecx,[esi+0xF8]
	call ZList<ZRef<CActionMan::MOBACTIONENTRY>>::RemoveAt

 Block26:
	lea ecx,[ebp-0x30]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZRef<CActionMan::MOBACTIONENTRY>::~ZRef<CActionMan::MOBACTIONENTRY>
	mov eax,dword ptr [ebp-0x10]
	test eax,eax
	jne Block22

 Block27:
	mov dword ptr [_D_S_NTYPE],2
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block28:
	mov eax,dword ptr [esi+0x148]
	mov dword ptr [ebp-0x10],eax
	cmp eax,ebx
	je Block34

 Block29:
	lea edx,[ebp-0x10]
	push edx
	mov ebx,eax
	call ZList<ZRef<CActionMan::NPCIMGENTRY>>::GetNext
	mov edi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [ebp-0x2C],edi
	test edi,edi
	je Block31

 Block30:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block31:
	mov ecx,dword ptr [ebp-0x14]
	sub ecx,dword ptr [edi+0x10]
	mov dword ptr [ebp-4],3
	cmp ecx,0x493E0
	jl Block33

 Block32:
	mov edi,dword ptr [edi+0x14]
	add edi,8
	push edi
	lea ecx,[esi+0x150]
	call ZMap<long, ZRef<CActionMan::NPCIMGENTRY>, long>::RemoveKey
	push ebx
	lea ecx,[esi+0x13C]
	call ZList<ZRef<CActionMan::NPCIMGENTRY>>::RemoveAt

 Block33:
	lea ecx,[ebp-0x30]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZRef<CActionMan::NPCIMGENTRY>::~ZRef<CActionMan::NPCIMGENTRY>
	mov eax,dword ptr [ebp-0x10]
	test eax,eax
	jne Block29

 Block34:
	mov eax,dword ptr [esi+0x174]
	mov dword ptr [ebp-0x10],eax
	test eax,eax
	je Block41

 Block35:
	lea esp,[esp]

 Block36:
	lea edx,[ebp-0x10]
	push edx
	mov ebx,eax
	call ZList<ZRef<CActionMan::NPCACTIONENTRY>>::GetNext
	mov edi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [ebp-0x2C],edi
	test edi,edi
	je Block38

 Block37:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block38:
	mov ecx,dword ptr [ebp-0x14]
	sub ecx,dword ptr [edi+0x28]
	mov dword ptr [ebp-4],4
	cmp ecx,0x493E0
	jl Block40

 Block39:
	mov edi,dword ptr [edi+0x2C]
	add edi,8
	push edi
	lea ecx,[esi+0x17C]
	call ZMap<__int64, ZRef<CActionMan::NPCACTIONENTRY>, __int64>::RemoveKey
	push ebx
	lea ecx,[esi+0x168]
	call ZList<ZRef<CActionMan::NPCACTIONENTRY>>::RemoveAt

 Block40:
	lea ecx,[ebp-0x30]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZRef<CActionMan::NPCACTIONENTRY>::~ZRef<CActionMan::NPCACTIONENTRY>
	mov eax,dword ptr [ebp-0x10]
	test eax,eax
	jne Block36

 Block41:
	mov dword ptr [_D_S_NTYPE],3
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block42:
	mov eax,dword ptr [esi+0x1A0]
	mov dword ptr [ebp-0x10],eax
	cmp eax,ebx
	je Block48

 Block43:
	lea edx,[ebp-0x10]
	push edx
	mov ebx,eax
	call ZList<ZRef<CActionMan::PETIMGENTRY>>::GetNext
	mov edi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [ebp-0x2C],edi
	test edi,edi
	je Block45

 Block44:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block45:
	mov ecx,dword ptr [ebp-0x14]
	sub ecx,dword ptr [edi+0x10]
	mov dword ptr [ebp-4],5
	cmp ecx,0x493E0
	jl Block47

 Block46:
	mov edi,dword ptr [edi+0x14]
	add edi,8
	push edi
	lea ecx,[esi+0x1A8]
	call ZMap<long, ZRef<CActionMan::PETIMGENTRY>, long>::RemoveKey
	push ebx
	lea ecx,[esi+0x194]
	call ZList<ZRef<CActionMan::PETIMGENTRY>>::RemoveAt

 Block47:
	lea ecx,[ebp-0x30]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZRef<CActionMan::PETIMGENTRY>::~ZRef<CActionMan::PETIMGENTRY>
	mov eax,dword ptr [ebp-0x10]
	test eax,eax
	jne Block43

 Block48:
	mov eax,dword ptr [esi+0x1CC]
	mov dword ptr [ebp-0x10],eax
	test eax,eax
	je Block55

 Block49:
	lea esp,[esp]

 Block50:
	lea edx,[ebp-0x10]
	push edx
	mov ebx,eax
	call ZList<ZRef<CActionMan::PETACTIONENTRY>>::GetNext
	mov edi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [ebp-0x2C],edi
	test edi,edi
	je Block52

 Block51:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block52:
	mov ecx,dword ptr [ebp-0x14]
	sub ecx,dword ptr [edi+0x2C]
	mov dword ptr [ebp-4],6
	cmp ecx,0x493E0
	jl Block54

 Block53:
	mov edi,dword ptr [edi+0x30]
	add edi,8
	push edi
	lea ecx,[esi+0x1D4]
	call ZMap<unsigned long, ZRef<CActionMan::PETACTIONENTRY>, unsigned long>::RemoveKey
	push ebx
	lea ecx,[esi+0x1C0]
	call ZList<ZRef<CActionMan::PETACTIONENTRY>>::RemoveAt

 Block54:
	lea ecx,[ebp-0x30]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZRef<CActionMan::PETACTIONENTRY>::~ZRef<CActionMan::PETACTIONENTRY>
	mov eax,dword ptr [ebp-0x10]
	test eax,eax
	jne Block50

 Block55:
	mov dword ptr [_D_S_NTYPE],4
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block56:
	mov eax,dword ptr [esi+0x1F8]
	mov dword ptr [ebp-0x10],eax
	cmp eax,ebx
	je Block62

 Block57:
	lea edx,[ebp-0x10]
	push edx
	mov ebx,eax
	call ZList<ZRef<CActionMan::EMPLOYEEIMGENTRY>>::GetNext
	mov edi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [ebp-0x2C],edi
	test edi,edi
	je Block59

 Block58:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block59:
	mov ecx,dword ptr [ebp-0x14]
	sub ecx,dword ptr [edi+0x10]
	mov dword ptr [ebp-4],7
	cmp ecx,0x493E0
	jl Block61

 Block60:
	mov edi,dword ptr [edi+0x14]
	add edi,8
	push edi
	lea ecx,[esi+0x200]
	call ZMap<long, ZRef<CActionMan::EMPLOYEEIMGENTRY>, long>::RemoveKey
	push ebx
	lea ecx,[esi+0x1EC]
	call ZList<ZRef<CActionMan::EMPLOYEEIMGENTRY>>::RemoveAt

 Block61:
	lea ecx,[ebp-0x30]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZRef<CActionMan::EMPLOYEEIMGENTRY>::~ZRef<CActionMan::EMPLOYEEIMGENTRY>
	mov eax,dword ptr [ebp-0x10]
	test eax,eax
	jne Block57

 Block62:
	mov eax,dword ptr [esi+0x224]
	mov dword ptr [ebp-0x10],eax
	test eax,eax
	je Block69

 Block63:
	lea esp,[esp]

 Block64:
	lea edx,[ebp-0x10]
	push edx
	mov ebx,eax
	call ZList<ZRef<CActionMan::EMPLOYEEACTIONENTRY>>::GetNext
	mov edi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [ebp-0x2C],edi
	test edi,edi
	je Block66

 Block65:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block66:
	mov ecx,dword ptr [ebp-0x14]
	sub ecx,dword ptr [edi+0x2C]
	mov dword ptr [ebp-4],8
	cmp ecx,0x493E0
	jl Block68

 Block67:
	mov edi,dword ptr [edi+0x30]
	add edi,8
	push edi
	lea ecx,[esi+0x22C]
	call ZMap<unsigned long, ZRef<CActionMan::EMPLOYEEACTIONENTRY>, unsigned long>::RemoveKey
	push ebx
	lea ecx,[esi+0x218]
	call ZList<ZRef<CActionMan::EMPLOYEEACTIONENTRY>>::RemoveAt

 Block68:
	lea ecx,[ebp-0x30]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZRef<CActionMan::EMPLOYEEACTIONENTRY>::~ZRef<CActionMan::EMPLOYEEACTIONENTRY>
	mov eax,dword ptr [ebp-0x10]
	test eax,eax
	jne Block64

 Block69:
	mov dword ptr [_D_S_NTYPE],5
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block70:
	mov eax,dword ptr [esi+0x250]
	mov dword ptr [ebp-0x10],eax
	cmp eax,ebx
	je Block76

 Block71:
	lea edx,[ebp-0x10]
	push edx
	mov ebx,eax
	call ZList<ZRef<CActionMan::SUMMONEDACTIONENTRY>>::GetNext
	mov edi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [ebp-0x2C],edi
	test edi,edi
	je Block73

 Block72:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block73:
	mov ecx,dword ptr [ebp-0x14]
	sub ecx,dword ptr [edi+0x30]
	mov dword ptr [ebp-4],9
	cmp ecx,0x493E0
	jl Block75

 Block74:
	mov edi,dword ptr [edi+0x34]
	add edi,8
	push edi
	lea ecx,[esi+0x258]
	call ZMap<ActionKey, ZRef<CActionMan::SUMMONEDACTIONENTRY>, ActionKey>::RemoveKey
	push ebx
	lea ecx,[esi+0x244]
	call ZList<ZRef<CActionMan::SUMMONEDACTIONENTRY>>::RemoveAt

 Block75:
	lea ecx,[ebp-0x30]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZRef<CActionMan::SUMMONEDACTIONENTRY>::~ZRef<CActionMan::SUMMONEDACTIONENTRY>
	mov eax,dword ptr [ebp-0x10]
	test eax,eax
	jne Block71

 Block76:
	mov eax,dword ptr [esi+0x27C]
	mov dword ptr [ebp-0x10],eax
	test eax,eax
	je Block83

 Block77:
	lea esp,[esp]

 Block78:
	lea edx,[ebp-0x10]
	push edx
	mov ebx,eax
	call ZList<ZRef<CActionMan::SHADOWPARTNERACTIONENTRY>>::GetNext
	mov edi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [ebp-0x2C],edi
	test edi,edi
	je Block80

 Block79:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block80:
	mov ecx,dword ptr [ebp-0x14]
	sub ecx,dword ptr [edi+0x2C]
	mov dword ptr [ebp-4],0xA
	cmp ecx,0x493E0
	jl Block82

 Block81:
	mov edi,dword ptr [edi+0x30]
	add edi,8
	push edi
	lea ecx,[esi+0x284]
	call ZMap<unsigned long, ZRef<CActionMan::SHADOWPARTNERACTIONENTRY>, unsigned long>::RemoveKey
	push ebx
	lea ecx,[esi+0x270]
	call ZList<ZRef<CActionMan::SHADOWPARTNERACTIONENTRY>>::RemoveAt

 Block82:
	lea ecx,[ebp-0x30]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZRef<CActionMan::SHADOWPARTNERACTIONENTRY>::~ZRef<CActionMan::SHADOWPARTNERACTIONENTRY>
	mov eax,dword ptr [ebp-0x10]
	test eax,eax
	jne Block78

 Block83:
	mov dword ptr [_D_S_NTYPE],6
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block84:
	lea edi,[esi+0x29C]
	mov ecx,edi
	mov dword ptr [ebp-0x28],edi
	call ZMap<long, ZMap<long, ZRef<CActionMan::DRAGONACTIONENTRY>, long>, long>::GetHeadPosition
	mov dword ptr [ebp-0x10],eax
	cmp eax,ebx
	je Block96

 Block85:
	jmp Block87

 Block86:
	mov edi,dword ptr [ebp-0x28]

 Block87:
	push ebx
	lea edx,[ebp-0x10]
	push edx
	mov ecx,edi
	mov dword ptr [ebp-0x2C],eax
	lea esi,[eax+0xC]
	call ZMap<long, ZMap<long, ZRef<CActionMan::DRAGONACTIONENTRY>, long>, long>::GetNext
	mov ecx,esi
	call ZMap<long, ZRef<CActionMan::DRAGONACTIONENTRY>, long>::GetHeadPosition
	mov dword ptr [ebp-0x24],eax
	cmp eax,ebx
	je Block93

 Block88:
	mov edi,eax
	push ebx
	lea eax,[ebp-0x24]
	push eax
	mov ecx,esi
	call ZMap<long, ZRef<CActionMan::DRAGONACTIONENTRY>, long>::GetNext
	mov dword ptr [ebp-0x34],ebx
	mov ecx,dword ptr [ebp-0x14]
	sub ecx,dword ptr ds:[0x28]
	mov dword ptr [ebp-4],0xB
	cmp ecx,0x493E0
	jl Block90

 Block89:
	add edi,8
	push edi
	mov ecx,esi
	call ZMap<long, ZRef<CActionMan::DRAGONACTIONENTRY>, long>::RemoveKey

 Block90:
	push 4
	mov dword ptr [ebp-4],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block92

 Block91:
	push 4
	call dword ptr [ZImports::_InterlockedIncrement]

 Block92:
	mov eax,dword ptr [ebp-0x24]
	mov dword ptr [ebp-0x34],ebx
	cmp eax,ebx
	jne Block88

 Block93:
	cmp dword ptr [esi+0xC],ebx
	jne Block95

 Block94:
	mov edx,dword ptr [ebp-0x2C]
	mov ecx,dword ptr [ebp-0x28]
	add edx,8
	push edx
	call ZMap<long, ZMap<long, ZRef<CActionMan::DRAGONACTIONENTRY>, long>, long>::RemoveKey

 Block95:
	mov eax,dword ptr [ebp-0x10]
	cmp eax,ebx
	jne Block86

 Block96:
	mov dword ptr [_D_S_NTYPE],ebx

 Block97:
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret
}
}
// ActionKey::operator==
__SUB_CLASS_THIS(00006280, __thiscall, 21056,  ActionKey, int32_t, const ActionKey&) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,0xC
	push esi
	lea ebx,[ebx]

 Block1:
	mov esi,dword ptr [ecx]
	cmp esi,dword ptr [edx]
	jne Block4

 Block2:
	sub eax,4
	add edx,4
	add ecx,4
	cmp eax,4
	jae Block1

 Block3:
	xor eax,eax
	xor edx,edx
	test eax,eax
	sete dl
	pop esi
	mov eax,edx
	ret 4

 Block4:
	movzx eax,byte ptr [ecx]
	movzx esi,byte ptr [edx]
	sub eax,esi
	jne Block8

 Block5:
	movzx eax,byte ptr [ecx+1]
	movzx esi,byte ptr [edx+1]
	sub eax,esi
	jne Block8

 Block6:
	movzx eax,byte ptr [ecx+2]
	movzx esi,byte ptr [edx+2]
	sub eax,esi
	jne Block8

 Block7:
	movzx eax,byte ptr [ecx+3]
	movzx ecx,byte ptr [edx+3]
	sub eax,ecx

 Block8:
	sar eax,0x1F
	or eax,1
	xor edx,edx
	test eax,eax
	sete dl
	pop esi
	mov eax,edx
	ret 4
}
}
// CActionMan::LoadMobAction
_SUB_EXCEPTION_HANDLER(1F530)
__SUB_CLASS_THIS(0001F530, __thiscall, 33401,  CActionMan, void, unsigned long, long, ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY> >&) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F530
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x160
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x68],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [ebp-0x6C],ebx
	mov eax,dword ptr [ebp+0x74]
	shl eax,8
	or eax,dword ptr [ebp+0x78]
	xor edi,edi
	mov dword ptr [ebp-0x18],eax
	mov dword ptr [ebp-0x1C],edi
	lea edx,[ebp-0x20]
	push edx
	lea eax,[ebp-0x18]
	lea ecx,[ebx+0x10C]
	push eax
	mov dword ptr [ebp-4],edi
	mov dword ptr [ebp-0x48],ecx
	call ZMap<unsigned long, ZRef<CActionMan::MOBACTIONENTRY>, unsigned long>::GetAt
	test eax,eax
	je Block3

 Block1:
	call timeGetTime
	mov edi,dword ptr [ebp+0x7C]
	mov esi,dword ptr [ebp-0x1C]
	mov ecx,edi
	mov dword ptr [esi+0x28],eax
	call ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>::RemoveAll
	lea ecx,[esi+0x14]
	push ecx
	mov ecx,edi
	call ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>::AddTail_List
	lea edi,[esi+4]
	push edi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block284

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	jmp Block283

 Block3:
	push 0x34
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,edi
	je Block5

 Block4:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	mov dword ptr [eax], 0
	mov dword ptr [eax+0x14], 0
	mov dword ptr [eax+0x1C],edi
	mov dword ptr [eax+0x20],edi
	mov dword ptr [eax+0x24],edi
	mov esi,eax
	mov dword ptr [ebp-0x10],eax
	jmp Block6

 Block5:
	xor esi,esi
	mov dword ptr [ebp-0x10],esi

 Block6:
	mov dword ptr [ebp-0x5C],esi
	cmp esi,edi
	je Block8

 Block7:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	mov eax,dword ptr [ebp+0x74]
	mov edx,dword ptr [ebp+0x78]
	mov dword ptr [esi+0xC],eax
	push eax
	lea eax,[ebp+0x24]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],1
	mov dword ptr [esi+0x10],edx
	call CActionMan::GetMobImgEntry
	cmp dword ptr [ebp+0x28],edi
	je Block23

 Block9:
	mov edx,dword ptr [ebp+0x78]
	mov eax,dword ptr [edx*4+_D_S_SMOBACTION]
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x10],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block11

 Block10:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	mov eax,dword ptr [ebp+0x28]
	mov ecx,dword ptr [eax+0xC]
	mov byte ptr [ebp-4],3
	cmp ecx,edi
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea edx,[ebp-0x154]
	push edx
	mov byte ptr [ebp-4],2
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x40]
	mov dword ptr [ebp+0x40],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block16

 Block14:
	cmp eax,0x80004002
	je Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	cmp word ptr [ebp-0x154],8
	mov byte ptr [ebp-4],6
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [ebp-0x154],ax
	mov eax,dword ptr [ebp-0x14C]
	cmp eax,edi
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[ebp-0x154]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov esi,dword ptr [ebp+0x40]
	cmp esi,edi
	sete al
	test al,al
	je Block24

 Block21:
	mov byte ptr [ebp-4],2
	cmp esi,edi
	je Block23

 Block22:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block23:
	lea ecx,[ebp+0x24]
	mov byte ptr [ebp-4],1
	call ZRef<CActionMan::MOBIMGENTRY>::~ZRef<CActionMan::MOBIMGENTRY>
	lea ecx,[ebp-0x60]
	mov byte ptr [ebp-4],0
	call ZRef<CActionMan::MOBACTIONENTRY>::~ZRef<CActionMan::MOBACTIONENTRY>
	lea ecx,[ebp-0x20]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZRef<CActionMan::MOBACTIONENTRY>::~ZRef<CActionMan::MOBACTIONENTRY>
	jmp Block284

 Block24:
	lea ecx,[ebp-0x84]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [ebp-4],7
	cmp esi,edi
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea edx,[ebp-0x4C]
	push edx
	mov ecx,esi
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[ebp+0x1C]
	mov byte ptr [ebp-4],8
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp-0x4C]
	mov byte ptr [ebp-4],0xA
	cmp eax,edi
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block28:
	mov dword ptr [ebp-0x54],edi
	cmp dword ptr [ebp+0x1C],edi
	je Block12

 Block29:
	mov eax,dword ptr [ebp+0x1C]
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x54]
	push edx
	lea edx,[ebp-0x84]
	push edx
	push 1
	push eax
	mov eax,dword ptr [ecx+0xC]
	call eax
	test eax,eax
	jne Block253

 Block30:
	lea ecx,[ebp-0x84]
	push ecx
	lea edx,[ebp+0x58]
	push edx
	call DetachBSTR
	add esp,8
	mov eax,dword ptr [ebp+0x74]
	mov byte ptr [ebp-4],0xB
	cmp eax,0x864765
	jne Block37

 Block31:
	cmp dword ptr [ebp+0x78],0x10
	jne Block44

 Block32:
	lea eax,[ebp-0x14]
	push 0x1763
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[ebp+0x58]
	call _xbstr_t::operator==
	mov ecx,dword ptr [ebp-0x14]
	xor edi,edi
	mov bl,al
	cmp ecx,edi
	je Block34

 Block33:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp-0x14],edi

 Block34:
	test bl,bl
	je Block45

 Block35:
	lea ecx,[ebp]
	push 0x1762
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[ebp+0x58]
	call Ztl_bstr_t::op_assign
	mov ecx,dword ptr [ebp]
	cmp ecx,edi
	je Block45

 Block36:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp],edi
	jmp Block45

 Block37:
	cmp eax,0x864766
	jne Block44

 Block38:
	cmp dword ptr [ebp+0x78],0x10
	jne Block44

 Block39:
	lea edx,[ebp+4]
	push 0x1763
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[ebp+0x58]
	call _xbstr_t::operator==
	mov ecx,dword ptr [ebp+4]
	mov bl,al
	test ecx,ecx
	je Block41

 Block40:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+4],0

 Block41:
	test bl,bl
	je Block44

 Block42:
	lea eax,[ebp-0x24]
	push 0x1762
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[ebp+0x58]
	call Ztl_bstr_t::op_assign
	mov ecx,dword ptr [ebp-0x24]
	test ecx,ecx
	je Block44

 Block43:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp-0x24],0

 Block44:
	xor edi,edi

 Block45:
	mov ebx,dword ptr [ebp+0x58]
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [eax],ebx
	cmp ebx,edi
	je Block47

 Block46:
	lea ecx,[ebx+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block47:
	mov ecx,dword ptr [ebp+0x40]
	lea edx,[ebp-0x44]
	mov byte ptr [ebp-4],0xC
	push edx
	mov byte ptr [ebp-4],0xB
	call IWzProperty::Getitem
	lea eax,[ebp-0x44]
	push eax
	lea ecx,[ebp-0x74]
	push ecx
	mov byte ptr [ebp-4],0xD
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0xE
	mov dword ptr [ebp+0x14],edi
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block49

 Block48:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block49:
	lea ecx,[ebp+0x14]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block51

 Block50:
	cmp eax,0x80004002
	jne Block15

 Block51:
	mov eax,dword ptr [ebp-0x74]
	mov byte ptr [ebp-4],0x10
	cmp eax,edi
	je Block53

 Block52:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block53:
	mov esi,dword ptr [ebp+0x14]
	cmp esi,edi
	sete al
	test al,al
	je Block62

 Block54:
	mov byte ptr [ebp-4],0xD
	cmp esi,edi
	je Block56

 Block55:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block56:
	cmp word ptr [ebp-0x44],8
	mov byte ptr [ebp-4],0xB
	jne Block59

 Block57:
	mov eax,dword ptr [ebp-0x3C]
	xor edx,edx
	mov word ptr [ebp-0x44],dx
	cmp eax,edi
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea eax,[ebp-0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block60:
	mov byte ptr [ebp-4],0xA
	cmp ebx,edi
	je Block29

 Block61:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x58],edi
	jmp Block29

 Block62:
	push 0x5C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,edi
	je Block64

 Block63:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3 // TODO: 		mov dword ptr [eax],offset CActionMan::MOBACTIONFRAMEENTRY::`vftable'
	mov dword ptr [eax+0xC],edi
	mov dword ptr [eax+0x40],edi
	mov dword ptr [eax+0x44],edi
	mov ebx,eax
	mov dword ptr [ebp+0x50],eax
	jmp Block65

 Block64:
	xor ebx,ebx
	mov dword ptr [ebp+0x50],ebx

 Block65:
	cmp esi,edi
	je Block12

 Block66:
	lea ecx,[ebp+0x34]
	push ecx
	mov ecx,esi
	call IWzCanvas::Getproperty
	mov edi,dword ptr [ebx+0xC]
	mov byte ptr [ebp-4],0x11
	cmp edi,esi
	je Block69

 Block67:
	mov dword ptr [ebx+0xC],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax
	test edi,edi
	je Block69

 Block68:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block69:
	push 0x78
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1AA9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],0x12
	test edi,edi
	je Block12

 Block70:
	lea ecx,[ebp-0x94]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0x11
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x13
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x94],8
	mov dword ptr [ebx+0x50],eax
	mov byte ptr [ebp-4],0x11
	jne Block73

 Block71:
	mov eax,dword ptr [ebp-0x8C]
	xor edx,edx
	mov word ptr [ebp-0x94],dx
	test eax,eax
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea eax,[ebp-0x94]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block74:
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1A98
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x58]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x14
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x15
	test ecx,ecx
	je Block12

 Block75:
	lea eax,[ebp-0xC4]
	push eax
	mov byte ptr [ebp-4],0x16
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x17
	call get_int32
	add esp,8
	cmp word ptr [ebp-0xC4],8
	mov dword ptr [ebx+0x54],eax
	mov byte ptr [ebp-4],0x16
	jne Block78

 Block76:
	mov eax,dword ptr [ebp-0xBC]
	xor ecx,ecx
	mov word ptr [ebp-0xC4],cx
	test eax,eax
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea edx,[ebp-0xC4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block79:
	mov eax,dword ptr [ebp-0x58]
	mov byte ptr [ebp-4],0x11
	test eax,eax
	je Block81

 Block80:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block81:
	push 0xFFFFFFFF
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1A99
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x64]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0x18
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x19
	test ecx,ecx
	je Block12

 Block82:
	lea edx,[ebp-0x124]
	push edx
	mov byte ptr [ebp-4],0x1A
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1B
	call get_int32
	mov esi,8
	add esp,8
	mov dword ptr [ebx+0x58],eax
	mov byte ptr [ebp-4],0x1A
	cmp word ptr [ebp-0x124],si
	jne Block85

 Block83:
	xor eax,eax
	mov word ptr [ebp-0x124],ax
	mov eax,dword ptr [ebp-0x11C]
	test eax,eax
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea ecx,[ebp-0x124]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block86:
	mov eax,dword ptr [ebp-0x64]
	mov byte ptr [ebp-4],0x11
	test eax,eax
	je Block88

 Block87:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block88:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1ABE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0xE4]
	mov byte ptr [ebp-4],0x1C
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x11
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1D
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+8]
	mov dword ptr [ebp+8],0
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	test eax,eax
	jge Block90

 Block89:
	cmp eax,0x80004002
	jne Block15

 Block90:
	mov byte ptr [ebp-4],0x1F
	cmp word ptr [ebp-0xE4],si
	jne Block93

 Block91:
	xor eax,eax
	mov word ptr [ebp-0xE4],ax
	mov eax,dword ptr [ebp-0xDC]
	test eax,eax
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea ecx,[ebp-0xE4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block94:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1ACB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x144]
	mov byte ptr [ebp-4],0x20
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x1F
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x21
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0xC]
	mov dword ptr [ebp+0xC],0
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	test eax,eax
	jge Block96

 Block95:
	cmp eax,0x80004002
	jne Block15

 Block96:
	mov byte ptr [ebp-4],0x23
	cmp word ptr [ebp-0x144],si
	jne Block99

 Block97:
	mov eax,dword ptr [ebp-0x13C]
	xor ecx,ecx
	mov word ptr [ebp-0x144],cx
	test eax,eax
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea edx,[ebp-0x144]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block100:
	mov edi,dword ptr [ebp+8]
	mov esi,dword ptr [ebp+0xC]
	test edi,edi
	sete al
	test al,al
	sete al
	test al,al
	je Block105

 Block101:
	test esi,esi
	sete al
	test al,al
	sete al
	test al,al
	je Block105

 Block102:
	test esi,esi
	je Block12

 Block103:
	test edi,edi
	je Block12

 Block104:
	mov ecx,esi
	call IWzShape2D::Gety
	push eax
	mov ecx,esi
	call IWzShape2D::Getx
	push eax
	mov ecx,edi
	call IWzShape2D::Gety
	push eax
	mov ecx,edi
	call IWzShape2D::Getx
	push eax
	add ebx,0x10
	push ebx
	call SECRECT::SetRect
	add esp,0x14
	jmp Block106

 Block105:
	add ebx,0x10
	push ebx
	call SECRECT::SetRectEmpty
	add esp,4

 Block106:
	xor edi,edi
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1749
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x104]
	push ecx
	mov ecx,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],0x24
	mov byte ptr [ebp-4],0x23
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x25
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x2C]
	mov dword ptr [ebp+0x2C],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block108

 Block107:
	cmp eax,0x80004002
	jne Block15

 Block108:
	cmp word ptr [ebp-0x104],8
	mov byte ptr [ebp-4],0x27
	jne Block111

 Block109:
	mov eax,dword ptr [ebp-0xFC]
	xor edx,edx
	mov word ptr [ebp-0x104],dx
	cmp eax,edi
	je Block112

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block111:
	lea eax,[ebp-0x104]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block112:
	mov esi,dword ptr [ebp+0x2C]
	cmp esi,edi
	sete al
	test al,al
	sete al
	test al,al
	je Block156

 Block113:
	mov dword ptr [ebp+0x4C],edi
	lea ebx,[ebx]

 Block114:
	mov eax,0x20
	call __chkstk
	mov ecx,dword ptr [ebp+0x4C]
	mov eax,esp
	push edi
	push edi
	push 0xA
	push eax
	push ecx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x28
	cmp esi,edi
	je Block12

 Block115:
	lea edx,[ebp-0xA4]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x27
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x29
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp+0x54],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block117

 Block116:
	cmp eax,0x80004002
	jne Block15

 Block117:
	cmp word ptr [ebp-0xA4],8
	mov byte ptr [ebp-4],0x2B
	jne Block120

 Block118:
	xor eax,eax
	mov word ptr [ebp-0xA4],ax
	mov eax,dword ptr [ebp-0x9C]
	cmp eax,edi
	je Block121

 Block119:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block121

 Block120:
	lea ecx,[ebp-0xA4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block121:
	mov ebx,dword ptr [ebp+0x54]
	xor esi,esi
	cmp ebx,esi
	sete al
	test al,al
	jne Block154

 Block122:
	mov ecx,dword ptr [ebp+0x50]
	push 0xFFFFFFFF
	add ecx,0x40
	call ZArray<SECRECT>::InsertBefore
	push esi
	push esi
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1ABE
	push edx
	mov dword ptr [ebp+0x60],eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x2C
	cmp ebx,esi
	je Block12

 Block123:
	lea eax,[ebp-0xB4]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x2B
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x2D
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x30]
	mov dword ptr [ebp+0x30],esi
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,esi
	jge Block125

 Block124:
	cmp eax,0x80004002
	jne Block15

 Block125:
	mov edi,8
	mov byte ptr [ebp-4],0x2F
	cmp word ptr [ebp-0xB4],di
	jne Block128

 Block126:
	mov eax,dword ptr [ebp-0xAC]
	xor ecx,ecx
	mov word ptr [ebp-0xB4],cx
	cmp eax,esi
	je Block129

 Block127:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block129

 Block128:
	lea edx,[ebp-0xB4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block129:
	push esi
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1ACB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0xD4]
	push ecx
	mov byte ptr [ebp-4],0x30
	mov ecx,ebx
	mov byte ptr [ebp-4],0x2F
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x31
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x38]
	mov dword ptr [ebp+0x38],esi
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,esi
	jge Block131

 Block130:
	cmp eax,0x80004002
	jne Block15

 Block131:
	mov byte ptr [ebp-4],0x33
	cmp word ptr [ebp-0xD4],di
	jne Block134

 Block132:
	mov eax,dword ptr [ebp-0xCC]
	xor edx,edx
	mov word ptr [ebp-0xD4],dx
	cmp eax,esi
	je Block135

 Block133:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block135

 Block134:
	lea eax,[ebp-0xD4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block135:
	mov edi,dword ptr [ebp+0x30]
	mov esi,dword ptr [ebp+0x38]
	test edi,edi
	sete al
	test al,al
	sete al
	test al,al
	je Block148

 Block136:
	test esi,esi
	sete al
	test al,al
	sete al
	test al,al
	je Block148

 Block137:
	test esi,esi
	je Block12

 Block138:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x28]
	lea edx,[ebp+0x44]
	push edx
	xor ebx,ebx
	push esi
	mov dword ptr [ebp+0x44],ebx
	call eax
	cmp eax,ebx
	jge Block140

 Block139:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block140:
	mov ecx,dword ptr [ebp+0x44]
	mov edx,dword ptr [esi]
	lea eax,[ebp+0x48]
	push eax
	mov dword ptr [ebp+0x20],ecx
	mov ecx,dword ptr [edx+0x20]
	push esi
	mov dword ptr [ebp+0x48],ebx
	call ecx
	cmp eax,ebx
	jge Block142

 Block141:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block142:
	mov edx,dword ptr [ebp+0x48]
	mov dword ptr [ebp+0x18],edx
	cmp edi,ebx
	je Block12

 Block143:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x28]
	lea ecx,[ebp+0x3C]
	push ecx
	push edi
	mov dword ptr [ebp+0x3C],ebx
	call edx
	cmp eax,ebx
	jge Block145

 Block144:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block145:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x20]
	mov ebx,dword ptr [ebp+0x3C]
	lea ecx,[ebp+0x5C]
	push ecx
	push edi
	mov dword ptr [ebp+0x5C],0
	call edx
	test eax,eax
	jge Block147

 Block146:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block147:
	mov eax,dword ptr [ebp+0x20]
	mov ecx,dword ptr [ebp+0x18]
	mov edx,dword ptr [ebp+0x5C]
	push eax
	mov eax,dword ptr [ebp+0x60]
	push ecx
	push ebx
	push edx
	push eax
	call SECRECT::SetRect
	mov ebx,dword ptr [ebp+0x54]
	add esp,0x14
	jmp Block149

 Block148:
	mov edx,dword ptr [ebp+0x60]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [ebp+0x60]
	mov dword ptr [ecx+8],eax
	lea edx,[ecx+0xC]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [ebp+0x60]
	mov dword ptr [ecx+0x14],eax
	lea edx,[ecx+0x18]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [ebp+0x60]
	mov dword ptr [ecx+0x20],eax
	lea edx,[ecx+0x24]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [ebp+0x60]
	mov dword ptr [ecx+0x2C],eax

 Block149:
	mov byte ptr [ebp-4],0x2F
	test esi,esi
	je Block151

 Block150:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block151:
	mov byte ptr [ebp-4],0x2B
	test edi,edi
	je Block153

 Block152:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block153:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [ebp-4],0x27
	call ecx
	inc dword ptr [ebp+0x4C]
	mov esi,dword ptr [ebp+0x2C]
	xor edi,edi
	jmp Block114

 Block154:
	mov byte ptr [ebp-4],0x27
	cmp ebx,esi
	je Block156

 Block155:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block156:
	xor esi,esi
	push esi
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xB67
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x34]
	lea edx,[ebp-0xF4]
	mov byte ptr [ebp-4],0x34
	push edx
	mov byte ptr [ebp-4],0x27
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x35
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp+0x54],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block158

 Block157:
	cmp eax,0x80004002
	jne Block15

 Block158:
	cmp word ptr [ebp-0xF4],8
	mov byte ptr [ebp-4],0x37
	jne Block161

 Block159:
	xor eax,eax
	mov word ptr [ebp-0xF4],ax
	mov eax,dword ptr [ebp-0xEC]
	cmp eax,esi
	je Block162

 Block160:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block162

 Block161:
	lea ecx,[ebp-0xF4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block162:
	cmp dword ptr [ebp+0x54],esi
	sete al
	test al,al
	sete al
	test al,al
	je Block209

 Block163:
	mov dword ptr [ebp+0x4C],esi
	mov edi,edi

 Block164:
	mov eax,0x20
	call __chkstk
	mov edx,dword ptr [ebp+0x4C]
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	cmp dword ptr [ebp+0x54],0
	mov byte ptr [ebp-4],0x38
	je Block12

 Block165:
	mov ecx,dword ptr [ebp+0x54]
	lea eax,[ebp-0x114]
	push eax
	mov byte ptr [ebp-4],0x37
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x39
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [ebp+0x38],ebx
	test eax,eax
	je Block168

 Block166:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x68]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	test eax,eax
	setl bl
	dec ebx
	and ebx,dword ptr [ebp-0x68]
	mov dword ptr [ebp+0x38],ebx
	test eax,eax
	jge Block168

 Block167:
	cmp eax,0x80004002
	jne Block15

 Block168:
	mov esi,8
	mov byte ptr [ebp-4],0x3B
	cmp word ptr [ebp-0x114],si
	jne Block171

 Block169:
	mov eax,dword ptr [ebp-0x10C]
	xor ecx,ecx
	mov word ptr [ebp-0x114],cx
	test eax,eax
	je Block172

 Block170:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block172

 Block171:
	lea edx,[ebp-0x114]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block172:
	test ebx,ebx
	sete al
	test al,al
	jne Block207

 Block173:
	mov ecx,dword ptr [ebp+0x50]
	push 0xFFFFFFFF
	add ecx,0x44
	call ZArray<SECRECT>::InsertBefore
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0x60],eax
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1ABE
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x3C
	test ebx,ebx
	je Block12

 Block174:
	lea ecx,[ebp-0x134]
	push ecx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x3B
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x3D
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp+0x18],edi
	test eax,eax
	je Block177

 Block175:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0x50]
	push ecx
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x50]
	mov edi,ecx
	mov dword ptr [ebp+0x18],edi
	test eax,eax
	jge Block177

 Block176:
	cmp eax,0x80004002
	jne Block15

 Block177:
	mov byte ptr [ebp-4],0x3F
	cmp word ptr [ebp-0x134],si
	jne Block180

 Block178:
	mov eax,dword ptr [ebp-0x12C]
	xor edx,edx
	mov word ptr [ebp-0x134],dx
	test eax,eax
	je Block181

 Block179:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block181

 Block180:
	lea eax,[ebp-0x134]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block181:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1ACB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x164]
	mov byte ptr [ebp-4],0x40
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x3F
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x41
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x20],esi
	test eax,eax
	je Block184

 Block182:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x70]
	push edx
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x70]
	mov esi,ecx
	mov dword ptr [ebp+0x20],esi
	test eax,eax
	jge Block184

 Block183:
	cmp eax,0x80004002
	jne Block15

 Block184:
	cmp word ptr [ebp-0x164],8
	mov byte ptr [ebp-4],0x43
	jne Block187

 Block185:
	mov eax,dword ptr [ebp-0x15C]
	xor edx,edx
	mov word ptr [ebp-0x164],dx
	test eax,eax
	je Block188

 Block186:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block188

 Block187:
	lea eax,[ebp-0x164]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block188:
	test edi,edi
	sete al
	test al,al
	sete al
	test al,al
	je Block201

 Block189:
	test esi,esi
	sete al
	test al,al
	sete al
	test al,al
	je Block201

 Block190:
	test esi,esi
	je Block12

 Block191:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x28]
	lea edx,[ebp+0x5C]
	push edx
	xor ebx,ebx
	push esi
	mov dword ptr [ebp+0x5C],ebx
	call eax
	cmp eax,ebx
	jge Block193

 Block192:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block193:
	mov ecx,dword ptr [ebp+0x5C]
	mov edx,dword ptr [esi]
	lea eax,[ebp+0x3C]
	push eax
	mov dword ptr [ebp+0x64],ecx
	mov ecx,dword ptr [edx+0x20]
	push esi
	mov dword ptr [ebp+0x3C],ebx
	call ecx
	cmp eax,ebx
	jge Block195

 Block194:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block195:
	mov edx,dword ptr [ebp+0x3C]
	mov dword ptr [ebp+0x30],edx
	cmp edi,ebx
	je Block12

 Block196:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x28]
	lea ecx,[ebp+0x48]
	push ecx
	push edi
	mov dword ptr [ebp+0x48],ebx
	call edx
	cmp eax,ebx
	jge Block198

 Block197:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block198:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x20]
	mov ebx,dword ptr [ebp+0x48]
	lea ecx,[ebp+0x44]
	push ecx
	push edi
	mov dword ptr [ebp+0x44],0
	call edx
	test eax,eax
	jge Block200

 Block199:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block200:
	mov edx,dword ptr [ebp+0x60]
	mov ecx,dword ptr [ebp+0x44]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [ebp+0x60]
	mov dword ptr [ecx+8],eax
	lea edx,[ecx+0xC]
	mov ecx,ebx
	call _ZtlSecureTearHelper<long>::call
	mov ebx,dword ptr [ebp+0x60]
	mov ecx,dword ptr [ebp+0x30]
	lea edx,[ebx+0x18]
	mov dword ptr [ebx+0x14],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [ebp+0x64]
	lea edx,[ebx+0x24]
	mov dword ptr [ebx+0x20],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [ebx+0x2C],eax
	mov ebx,dword ptr [ebp+0x38]
	jmp Block202

 Block201:
	mov edx,dword ptr [ebp+0x60]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [ebp+0x60]
	mov dword ptr [ecx+8],eax
	lea edx,[ecx+0xC]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [ebp+0x60]
	mov dword ptr [ecx+0x14],eax
	lea edx,[ecx+0x18]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [ebp+0x60]
	mov dword ptr [ecx+0x20],eax
	lea edx,[ecx+0x24]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [ebp+0x60]
	mov dword ptr [ecx+0x2C],eax

 Block202:
	mov byte ptr [ebp-4],0x3F
	test esi,esi
	je Block204

 Block203:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block204:
	mov byte ptr [ebp-4],0x3B
	test edi,edi
	je Block206

 Block205:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block206:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [ebp-4],0x37
	call ecx
	inc dword ptr [ebp+0x4C]
	jmp Block164

 Block207:
	mov byte ptr [ebp-4],0x37
	test ebx,ebx
	je Block209

 Block208:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block209:
	xor edi,edi
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1AB4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x34]
	lea edx,[ebp-0x34]
	mov byte ptr [ebp-4],0x44
	push edx
	mov byte ptr [ebp-4],0x37
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x45
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [ebp+0x64],ebx
	cmp eax,edi
	je Block212

 Block210:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x10]
	push edx
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push eax
	mov eax,dword ptr [ecx]
	call eax
	cmp eax,edi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x10]
	cmp eax,edi
	mov dword ptr [ebp+0x64],ebx
	jge Block212

 Block211:
	cmp eax,0x80004002
	jne Block15

 Block212:
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],0x47
	jne Block215

 Block213:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	cmp eax,edi
	je Block216

 Block214:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block216

 Block215:
	lea edx,[ebp-0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block216:
	cmp ebx,edi
	sete al
	test al,al
	je Block218

 Block217:
	mov eax,dword ptr [ebp+0x50]
	mov dword ptr [eax+0x4C],edi
	mov dword ptr [eax+0x48],edi
	jmp Block224

 Block218:
	cmp ebx,edi
	je Block12

 Block219:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp+0x5C]
	push ecx
	push ebx
	mov dword ptr [ebp+0x5C],edi
	call edx
	cmp eax,edi
	jge Block221

 Block220:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block221:
	mov eax,dword ptr [ebp+0x5C]
	mov esi,dword ptr [ebp+0x50]
	mov dword ptr [esi+0x48],eax
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x28]
	lea edx,[ebp+0x5C]
	push edx
	push ebx
	mov dword ptr [ebp+0x5C],edi
	call eax
	cmp eax,edi
	jge Block223

 Block222:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block223:
	mov ecx,dword ptr [ebp+0x5C]
	mov dword ptr [esi+0x4C],ecx

 Block224:
	mov edi,dword ptr [ebp+0x50]
	mov dword ptr [ebp-0x168],edi
	add edi,4
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],0x48
	call ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>::AddTail_
	push edi
	mov esi,eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block229

 Block225:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block228

 Block226:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block228

 Block227:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block228:
	mov dword ptr [esi+4],0

 Block229:
	mov ecx,dword ptr [ebp+0x50]
	push edi
	mov dword ptr [esi+4],ecx
	mov byte ptr [ebp-4],0x47
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block231

 Block230:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp+0x50]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block231:
	mov dword ptr [ebp-0x168],0
	mov byte ptr [ebp-4],0x37
	test ebx,ebx
	je Block233

 Block232:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block233:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x27
	test eax,eax
	je Block235

 Block234:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block235:
	mov eax,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],0x23
	test eax,eax
	je Block237

 Block236:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block237:
	mov eax,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],0x1F
	test eax,eax
	je Block239

 Block238:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block239:
	mov eax,dword ptr [ebp+8]
	mov byte ptr [ebp-4],0x11
	test eax,eax
	je Block241

 Block240:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block241:
	mov eax,dword ptr [ebp+0x34]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x10
	call edx
	mov eax,dword ptr [ebp+0x14]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0xD
	call edx
	cmp word ptr [ebp-0x44],8
	mov byte ptr [ebp-4],0xB
	jne Block244

 Block242:
	xor eax,eax
	mov word ptr [ebp-0x44],ax
	mov eax,dword ptr [ebp-0x3C]
	test eax,eax
	je Block245

 Block243:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block245

 Block244:
	lea ecx,[ebp-0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block245:
	cmp dword ptr [ebp+0x58],0
	mov byte ptr [ebp-4],0xA
	je Block29

 Block246:
	mov esi,dword ptr [ebp+0x58]
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block252

 Block247:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block249

 Block248:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block249:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block251

 Block250:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block251:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block252:
	mov dword ptr [ebp+0x58],0
	jmp Block29

 Block253:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x10],esp
	push 0x49F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x34]
	push ecx
	mov ecx,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0x49
	mov byte ptr [ebp-4],0xA
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x4A
	call get_int32
	add esp,8
	mov esi,eax
	neg esi
	sbb esi,esi
	neg esi
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],0xA
	jne Block256

 Block254:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	test eax,eax
	je Block257

 Block255:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block257

 Block256:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block257:
	mov ebx,dword ptr [ebp+0x7C]
	test esi,esi
	je Block264

 Block258:
	mov esi,dword ptr [ebx+0x10]
	mov dword ptr [ebp+0x5C],esi
	test esi,esi
	je Block264

 Block259:
	mov edi,edi

 Block260:
	cmp esi,dword ptr [ebx+0xC]
	je Block263

 Block261:
	cmp esi,dword ptr [ebx+0x10]
	je Block263

 Block262:
	mov ecx,ebx
	call ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>::AddTail_
	push esi
	mov ecx,eax
	call ZRef<CActionMan::MOBACTIONFRAMEENTRY>::op_assign_copy

 Block263:
	lea ecx,[ebp+0x5C]
	push ecx
	call ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>::GetPrev
	mov esi,dword ptr [ebp+0x5C]
	add esp,4
	test esi,esi
	jne Block260

 Block264:
	mov edi,dword ptr [ebp-0x10]
	lea esi,[edi+0x14]
	mov ecx,esi
	call ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>::RemoveAll
	push ebx
	mov ecx,esi
	call ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>::AddTail_List
	mov ecx,dword ptr [ebp-0x6C]
	add ecx,0xF8
	call ZList<ZRef<CActionMan::MOBACTIONENTRY>>::AddTail_
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov esi,eax
	lea eax,[edi+4]
	push eax
	call ebx
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block269

 Block265:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block268

 Block266:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call ebx
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block268

 Block267:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block268:
	mov dword ptr [esi+4],0

 Block269:
	lea ecx,[ebp-0x60]
	push ecx
	mov ecx,dword ptr [ebp-0x48]
	lea edx,[ebp-0x18]
	mov dword ptr [esi+4],edi
	push edx
	mov dword ptr [edi+0x30],esi
	call ZMap<unsigned long, ZRef<CActionMan::MOBACTIONENTRY>, unsigned long>::Insert
	mov dword ptr [edi+0x2C],eax
	call timeGetTime
	mov dword ptr [edi+0x28],eax
	mov eax,dword ptr [ebp+0x1C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],7
	call edx
	cmp word ptr [ebp-0x84],8
	mov byte ptr [ebp-4],6
	jne Block272

 Block270:
	xor eax,eax
	mov word ptr [ebp-0x84],ax
	mov eax,dword ptr [ebp-0x7C]
	test eax,eax
	je Block273

 Block271:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block273

 Block272:
	lea ecx,[ebp-0x84]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block273:
	mov eax,dword ptr [ebp+0x40]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],2
	call eax
	mov eax,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block278

 Block274:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block277

 Block275:
	mov ecx,dword ptr [ebp+0x28]
	add ecx,4
	push ecx
	call ebx
	mov ecx,dword ptr [ebp+0x28]
	test ecx,ecx
	je Block277

 Block276:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block277:
	mov dword ptr [ebp+0x28],0

 Block278:
	lea esi,[edi+4]
	push esi
	mov byte ptr [ebp-4],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block280

 Block279:
	push esi
	call ebx
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block280:
	mov esi,dword ptr [ebp-0x1C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test esi,esi
	je Block284

 Block281:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block284

 Block282:
	push edi
	call ebx

 Block283:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block284:
	lea esp,[ebp-0x17C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x68]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x6C
	mov esp,ebp
	pop ebp
	ret 0xC
}
}
