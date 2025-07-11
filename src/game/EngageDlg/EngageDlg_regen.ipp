#include "regen.hpp"
// EngageDlg.ipp
#include "EngageDlg.hpp"

// CEngageDlg::IsKindOf
__SUB_CLASS_THIS(0011A830, __thiscall, 59959,  CEngageDlg, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CEngageDlg::ms_RTTI_CEngageDlg
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
// CEngageDlg::GetRTTI
__SUB_CLASS_THIS0(0011A810, __thiscall, 59958,  CEngageDlg, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CEngageDlg::ms_RTTI_CEngageDlg
	ret
}
}
// CEngageDlg::~CEngageDlg
_SUB_EXCEPTION_HANDLER(11A860)
__SUB_CLASS_THIS0(0011A860, __thiscall, 59949,  CEngageDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_11A860
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
	int 3// TODO: 	mov dword ptr [esi],offset CEngageDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CEngageDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CEngageDlg::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xA4]
	mov dword ptr [esp+0x18],2
	call ZArray<ZXString<char>>::RemoveAll
	cmp dword ptr [esi+0xA0],0
	lea edi,[esi+0x9C]
	mov byte ptr [esp+0x18],1
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	mov eax,dword ptr [esi+0x98]
	mov byte ptr [esp+0x18],0
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	int 3// TODO: 	mov dword ptr [esi],offset CUniqueModeless::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUniqueModeless::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUniqueModeless::`vftable'{for `ZRefCounted'}
	mov ecx,esi
	mov dword ptr [esp+0x18],0xFFFFFFFF
	mov dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	call CDialog::~CDialog
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CEngageDlg::OnCreate
_SUB_EXCEPTION_HANDLER(11A950)
__SUB_CLASS_THIS(0011A950, __thiscall, 59951,  CEngageDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_11A950
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x130
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x144]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x28],ebx
	lea eax,[esp+0x24]
	push 0x3D0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	xor ebp,ebp
	lea ecx,[ebx+0x78]
	push ebp
	push ecx
	push eax
	mov dword ptr [esp+0x158],ebp
	mov dword ptr [esp+0x38],ecx
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x30]
	or esi,0xFFFFFFFF
	add esp,0xC
	mov dword ptr [esp+0x14C],esi
	cmp eax,ebp
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x40]
	push ecx
	call edi
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea eax,[esp+0x14]
	push eax
	mov dword ptr [esp+0x150],1
	call edi
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov edx,dword ptr [esp+0x2C]
	mov ecx,dword ptr [edx]
	mov byte ptr [esp+0x14C],2
	cmp ecx,ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[esp+0x40]
	push eax
	mov eax,dword ptr [ebx+0x28]
	lea edx,[esp+0x18]
	push edx
	mov edx,dword ptr [ebx+0x24]
	push eax
	push edx
	call IWzCanvas::Create
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x14C],1
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	cmp word ptr [esp+0x40],8
	mov dword ptr [esp+0x14C],esi
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	cmp eax,ebp
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block16:
	lea ecx,[esp+0x84]
	push ecx
	call edi
	lea edx,[esp+0x84]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	lea eax,[esp+0x40]
	push eax
	mov dword ptr [esp+0x150],3
	call edi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	push ebp
	push ebp
	lea edx,[esp+0x8C]
	push edx
	lea eax,[esp+0x4C]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0x196F
	mov bl,4
	push ecx
	mov byte ptr [esp+0x168],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x160],5
	cmp dword ptr [_D_G_RM],ebp
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea edx,[esp+0x108]
	mov byte ptr [esp+0x160],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x154],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x3C]
	mov dword ptr [esp+0x3C],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block25

 Block23:
	cmp eax,0x80004002
	je Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	cmp word ptr [esp+0xF4],8
	mov byte ptr [esp+0x14C],8
	jne Block32

 Block26:
	xor eax,eax
	mov word ptr [esp+0xF4],ax
	mov eax,dword ptr [esp+0xFC]
	cmp eax,ebp
	je Block28

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block28:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block29:
	mov ebx,8
	mov byte ptr [esp+0x14C],9
	cmp word ptr [esp+0x40],bx
	jne Block33

 Block30:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	cmp eax,ebp
	je Block34

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block32:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0xF4]
	push ecx
	call esi
	jmp Block29

 Block33:
	lea eax,[esp+0x40]
	push eax
	call esi

 Block34:
	mov byte ptr [esp+0x14C],0xA
	cmp word ptr [esp+0x84],bx
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x8C]
	xor ecx,ecx
	mov word ptr [esp+0x84],cx
	cmp eax,ebp
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea edx,[esp+0x84]
	push edx
	call esi

 Block38:
	lea eax,[esp+0x54]
	push eax
	call edi
	lea ecx,[esp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	lea edx,[esp+0xB4]
	push edx
	mov byte ptr [esp+0x150],0xB
	call edi
	lea eax,[esp+0xB4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	push ebp
	push ebp
	lea ecx,[esp+0x5C]
	push ecx
	lea edx,[esp+0xC0]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push 0x1966
	mov bl,0xC
	push eax
	mov byte ptr [esp+0x168],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x160],0xD
	cmp dword ptr [_D_G_RM],ebp
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	lea ecx,[esp+0x138]
	push ecx
	mov byte ptr [esp+0x164],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x154],0xE
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x34]
	mov dword ptr [esp+0x34],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block47

 Block45:
	cmp eax,0x80004002
	je Block47

 Block46:
	push eax
	call _com_issue_error

 Block47:
	mov ebx,8
	mov byte ptr [esp+0x14C],0x10
	cmp word ptr [esp+0x124],bx
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x12C]
	xor edx,edx
	mov word ptr [esp+0x124],dx
	cmp eax,ebp
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea eax,[esp+0x124]
	push eax
	call esi

 Block51:
	mov byte ptr [esp+0x14C],0x11
	cmp word ptr [esp+0xB4],bx
	jne Block54

 Block52:
	mov eax,dword ptr [esp+0xBC]
	xor ecx,ecx
	mov word ptr [esp+0xB4],cx
	cmp eax,ebp
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea edx,[esp+0xB4]
	push edx
	call esi

 Block55:
	mov byte ptr [esp+0x14C],0x12
	cmp word ptr [esp+0x54],bx
	jne Block58

 Block56:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	cmp eax,ebp
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea ecx,[esp+0x54]
	push ecx
	call esi

 Block59:
	lea edx,[esp+0xA4]
	push edx
	call edi
	lea eax,[esp+0xA4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block61

 Block60:
	push eax
	call _com_issue_error

 Block61:
	lea ecx,[esp+0xC4]
	push ecx
	mov byte ptr [esp+0x150],0x13
	call edi
	lea edx,[esp+0xC4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block63

 Block62:
	push eax
	call _com_issue_error

 Block63:
	push ebp
	push ebp
	lea eax,[esp+0xAC]
	push eax
	lea ecx,[esp+0xD0]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x38],esp
	push 0x1967
	push edx
	mov byte ptr [esp+0x168],0x14
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x160],0x15
	cmp dword ptr [_D_G_RM],ebp
	jne Block65

 Block64:
	push 0x80004003
	call _com_issue_error

 Block65:
	lea eax,[esp+0x118]
	mov byte ptr [esp+0x160],0x14
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x154],0x16
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x38],ebp
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
	mov byte ptr [esp+0x14C],0x18
	cmp word ptr [esp+0x104],bx
	jne Block71

 Block69:
	mov eax,dword ptr [esp+0x10C]
	xor ecx,ecx
	mov word ptr [esp+0x104],cx
	cmp eax,ebp
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea edx,[esp+0x104]
	push edx
	call esi

 Block72:
	mov byte ptr [esp+0x14C],0x19
	cmp word ptr [esp+0xC4],bx
	jne Block75

 Block73:
	xor eax,eax
	mov word ptr [esp+0xC4],ax
	mov eax,dword ptr [esp+0xCC]
	cmp eax,ebp
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea ecx,[esp+0xC4]
	push ecx
	call esi

 Block76:
	mov byte ptr [esp+0x14C],0x1A
	cmp word ptr [esp+0xA4],bx
	jne Block79

 Block77:
	mov eax,dword ptr [esp+0xAC]
	xor edx,edx
	mov word ptr [esp+0xA4],dx
	cmp eax,ebp
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea eax,[esp+0xA4]
	push eax
	call esi

 Block80:
	lea ecx,[esp+0xD4]
	push ecx
	call edi
	lea edx,[esp+0xD4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block82

 Block81:
	push eax
	call _com_issue_error

 Block82:
	lea eax,[esp+0xE4]
	push eax
	mov byte ptr [esp+0x150],0x1B
	call edi
	lea ecx,[esp+0xE4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block84

 Block83:
	push eax
	call _com_issue_error

 Block84:
	push ebp
	push ebp
	lea edx,[esp+0xDC]
	push edx
	lea eax,[esp+0xF0]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0x1964
	mov bl,0x1C
	push ecx
	mov byte ptr [esp+0x168],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x160],0x1D
	cmp dword ptr [_D_G_RM],ebp
	jne Block86

 Block85:
	push 0x80004003
	call _com_issue_error

 Block86:
	lea edx,[esp+0x128]
	mov byte ptr [esp+0x160],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x154],0x1E
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x40],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block89

 Block87:
	cmp eax,0x80004002
	je Block89

 Block88:
	push eax
	call _com_issue_error

 Block89:
	mov ebx,8
	mov byte ptr [esp+0x14C],0x20
	cmp word ptr [esp+0x114],bx
	jne Block92

 Block90:
	xor eax,eax
	mov word ptr [esp+0x114],ax
	mov eax,dword ptr [esp+0x11C]
	cmp eax,ebp
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea ecx,[esp+0x114]
	push ecx
	call esi

 Block93:
	mov byte ptr [esp+0x14C],0x21
	cmp word ptr [esp+0xE4],bx
	jne Block96

 Block94:
	mov eax,dword ptr [esp+0xEC]
	xor edx,edx
	mov word ptr [esp+0xE4],dx
	cmp eax,ebp
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea eax,[esp+0xE4]
	push eax
	call esi

 Block97:
	mov byte ptr [esp+0x14C],0x22
	cmp word ptr [esp+0xD4],bx
	jne Block100

 Block98:
	mov eax,dword ptr [esp+0xDC]
	xor ecx,ecx
	mov word ptr [esp+0xD4],cx
	cmp eax,ebp
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea edx,[esp+0xD4]
	push edx
	call esi

 Block101:
	lea eax,[esp+0x74]
	push eax
	call edi
	lea ecx,[esp+0x74]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block103

 Block102:
	push eax
	call _com_issue_error

 Block103:
	lea edx,[esp+0x64]
	push edx
	mov byte ptr [esp+0x150],0x23
	call edi
	lea eax,[esp+0x64]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block105

 Block104:
	push eax
	call _com_issue_error

 Block105:
	push ebp
	push ebp
	lea ecx,[esp+0x7C]
	push ecx
	lea edx,[esp+0x70]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push 0x196E
	mov bl,0x24
	push eax
	mov byte ptr [esp+0x168],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x160],0x25
	cmp dword ptr [_D_G_RM],ebp
	jne Block107

 Block106:
	push 0x80004003
	call _com_issue_error

 Block107:
	lea ecx,[esp+0x148]
	push ecx
	mov byte ptr [esp+0x164],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x154],0x26
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x28],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block110

 Block108:
	cmp eax,0x80004002
	je Block110

 Block109:
	push eax
	call _com_issue_error

 Block110:
	mov ebx,8
	mov byte ptr [esp+0x14C],0x28
	cmp word ptr [esp+0x134],bx
	jne Block113

 Block111:
	mov eax,dword ptr [esp+0x13C]
	xor edx,edx
	mov word ptr [esp+0x134],dx
	cmp eax,ebp
	je Block114

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block114

 Block113:
	lea eax,[esp+0x134]
	push eax
	call esi

 Block114:
	mov byte ptr [esp+0x14C],0x29
	cmp word ptr [esp+0x64],bx
	jne Block117

 Block115:
	mov eax,dword ptr [esp+0x6C]
	xor ecx,ecx
	mov word ptr [esp+0x64],cx
	cmp eax,ebp
	je Block118

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block118

 Block117:
	lea edx,[esp+0x64]
	push edx
	call esi

 Block118:
	mov byte ptr [esp+0x14C],0x2A
	cmp word ptr [esp+0x74],bx
	jne Block121

 Block119:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	cmp eax,ebp
	je Block122

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block122

 Block121:
	lea ecx,[esp+0x74]
	push ecx
	call esi

 Block122:
	lea edx,[esp+0x14]
	push edx
	call edi
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block124

 Block123:
	push eax
	call _com_issue_error

 Block124:
	mov ecx,dword ptr [esp+0x2C]
	mov esi,dword ptr [ecx]
	mov byte ptr [esp+0x14C],0x2B
	cmp esi,ebp
	jne Block126

 Block125:
	push 0x80004003
	call _com_issue_error

 Block126:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x48]
	mov ecx,dword ptr [edx+0x80]
	push eax
	push ebp
	push ebp
	push esi
	call ecx
	cmp eax,ebp
	jge Block128

 Block127:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block128:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x14C],0x2A
	jne Block131

 Block129:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	cmp eax,ebp
	je Block132

 Block130:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block132

 Block131:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block132:
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [ecx+0x28]
	mov ebx,dword ptr [esp+0x30]
	mov edi,0x14
	sub edx,0x2F
	cmp edx,edi
	jle Block143

 Block133:
	mov edi,edi

 Block134:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block3

 Block135:
	mov edx,dword ptr [esp+0x2C]
	mov esi,dword ptr [edx]
	mov byte ptr [esp+0x14C],0x2C
	cmp esi,ebp
	je Block7

 Block136:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x2C]
	push ebx
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x34]
	push edi
	push ebp
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x80]
	push esi
	call eax
	cmp eax,ebp
	jge Block138

 Block137:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block138:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x14C],0x2A
	jne Block141

 Block139:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebp
	je Block142

 Block140:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block142

 Block141:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block142:
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [eax+0x28]
	add edi,0x10
	sub ecx,0x2F
	cmp edi,ecx
	jl Block134

 Block143:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block145

 Block144:
	push eax
	call _com_issue_error

 Block145:
	mov ecx,dword ptr [esp+0x2C]
	mov esi,dword ptr [ecx]
	mov byte ptr [esp+0x14C],0x2D
	cmp esi,ebp
	jne Block147

 Block146:
	push 0x80004003
	call _com_issue_error

 Block147:
	mov edi,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [edx+0x28]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x28]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x2C]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x30]
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [esp+0x44]
	push eax
	sub ecx,0x2F
	push ecx
	mov ecx,dword ptr [edx+0x80]
	push ebp
	push esi
	call ecx
	cmp eax,ebp
	jge Block149

 Block148:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block149:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x14C],0x2A
	jne Block152

 Block150:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	cmp eax,ebp
	je Block153

 Block151:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block153

 Block152:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block153:
	mov ecx,dword ptr [esp+0x28]
	mov eax,dword ptr [ecx+0x28]
	mov ebx,dword ptr [esp+0x3C]
	lea edi,[eax-0x1F]
	add eax,0xFFFFFFF1
	cmp edi,eax
	jge Block163

 Block154:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block3

 Block155:
	mov ecx,dword ptr [esp+0x2C]
	mov esi,dword ptr [ecx]
	mov byte ptr [esp+0x14C],0x2E
	cmp esi,ebp
	je Block7

 Block156:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x2C]
	push ebx
	push edi
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x38]
	push ebp
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	cmp eax,ebp
	jge Block158

 Block157:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block158:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x14C],0x2A
	jne Block161

 Block159:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block162

 Block160:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block162

 Block161:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block162:
	mov edx,dword ptr [esp+0x28]
	mov eax,dword ptr [edx+0x28]
	add edi,0x10
	sub eax,0xF
	cmp edi,eax
	jl Block154

 Block163:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block165

 Block164:
	push eax
	call _com_issue_error

 Block165:
	mov eax,dword ptr [esp+0x2C]
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x14C],0x2F
	cmp esi,ebp
	jne Block167

 Block166:
	push 0x80004003
	call _com_issue_error

 Block167:
	mov edi,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x28]
	mov ecx,dword ptr [ecx+0x28]
	mov ebp,dword ptr [esp+0x24]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x28]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x2C]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x30]
	push ebp
	sub ecx,0xF
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [edx+0x80]
	push ecx
	xor edi,edi
	push edi
	push esi
	call eax
	cmp eax,edi
	jge Block169

 Block168:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block169:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x14C],0x2A
	jne Block172

 Block170:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,edi
	je Block173

 Block171:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block173

 Block172:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block173:
	mov dword ptr [esp+0xA0],edi
	mov dword ptr [esp+0x94],1
	mov dword ptr [esp+0x98],edi
	mov dword ptr [esp+0x9C],edi
	lea eax,[esp+0x2C]
	push 0x1961
	mov bl,0x30
	push eax
	mov byte ptr [esp+0x154],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0xA4]
	mov byte ptr [esp+0x150],0x31
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x14C],bl
	cmp eax,edi
	je Block175

 Block174:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block175:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x50],eax
	mov byte ptr [esp+0x14C],0x32
	cmp eax,edi
	je Block177

 Block176:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block178

 Block177:
	xor eax,eax

 Block178:
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x14C],bl
	test eax,eax
	je Block199

 Block179:
	add eax,8
	je Block199

 Block180:
	lea esi,[eax-8]
	test esi,esi
	je Block182

 Block181:
	lea ecx,[esi+0xC]
	push ecx
	call edi

 Block182:
	mov ecx,dword ptr [esp+0x28]
	mov eax,dword ptr [ecx+0xA0]
	mov dword ptr [ecx+0xA0],esi
	test eax,eax
	je Block186

 Block183:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block186

 Block184:
	lea eax,[esi+4]
	push eax
	call edi
	test esi,esi
	je Block186

 Block185:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block186:
	mov esi,dword ptr [esp+0x28]
	mov ecx,dword ptr [esi+0xA0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x94]
	push eax
	mov eax,dword ptr [esi+0x28]
	push 0
	sub eax,0x1F
	push eax
	push 0xC5
	push 2
	push esi
	call edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x54],esp
	push 0x31
	push eax
	call get_basic_font
	add esp,8
	push 0xC8
	push ecx
	mov ecx,esp
	lea edx,[esi+0x98]
	mov dword ptr [esp+0x34],esp
	push edx
	mov byte ptr [esp+0x15C],0x33
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea eax,[esi+0xA4]
	push eax
	mov byte ptr [esp+0x15C],bl
	call separate_string_by_width
	mov eax,dword ptr [esi+0xA0]
	add esp,0x10
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	mov eax,dword ptr [esp+0xA0]
	mov byte ptr [esp+0x14C],0x2A
	test eax,eax
	je Block188

 Block187:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block188:
	mov byte ptr [esp+0x14C],0x22
	test ebp,ebp
	je Block190

 Block189:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx

 Block190:
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x14C],0x1A
	test eax,eax
	je Block192

 Block191:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block192:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x14C],0x12
	test eax,eax
	je Block194

 Block193:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block194:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x14C],0xA
	test eax,eax
	je Block196

 Block195:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block196:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x14C],0xFFFFFFFF
	test eax,eax
	je Block198

 Block197:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block198:
	mov ecx,dword ptr [esp+0x144]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x13C
	ret 4

 Block199:
	xor esi,esi
	jmp Block182
}
}
// CEngageDlg::CEngageDlg
_SUB_EXCEPTION_HANDLER(11A740)
__SUB_CLASS_THIS0(0011A740, __thiscall, 59947,  CEngageDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_11A740
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x14],esi
	call CUniqueModeless::_ctor_default
	xor ebp,ebp
	lea edi,[esi+0x98]
	int 3// TODO: 	mov dword ptr [esi],offset CEngageDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CEngageDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CEngageDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x20],ebp
	mov dword ptr [edi],ebp
	mov dword ptr [esi+0xA0],ebp
	mov dword ptr [esi+0xA4],ebp
	lea eax,[esp+0x10]
	push 0x1093
	push eax
	mov byte ptr [esp+0x28],3
	mov dword ptr [esi+0xA8],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x24],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x20],3
	cmp eax,ebp
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	push ebp
	push 1
	push ebp
	push ebp
	mov ecx,esi
	call CDialog::CreateDlg_1
	mov eax,esi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x14
	ret
}
}
// CEngageDlg::SetRet
_SUB_EXCEPTION_HANDLER(11A680)
__SUB_CLASS_THIS(0011A680, __thiscall, 59953,  CEngageDlg, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_11A680
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esp+0x2C]
	cmp edi,2
	jne Block2

 Block1:
	push 0xA1
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	push 1
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x28],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0xC]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	cmp dword ptr [esi+0x84],0
	jne Block5

 Block3:
	cmp dword ptr [esi+0x14],0
	mov dword ptr [esi+0x80],edi
	mov dword ptr [esi+0x84],1
	je Block5

 Block4:
	mov ecx,esi
	call CWnd::Destroy

 Block5:
	mov ecx,esi
	call CWnd::Destroy
	mov edx,dword ptr [esi+8]
	mov eax,dword ptr [edx]
	lea ecx,[esi+8]
	push 1
	call eax
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4
}
}
// CEngageDlg::PreCreateWnd
__SUB_CLASS_THIS(0011A620, __thiscall, 59950,  CEngageDlg, void, long, long, long, long, long, int32_t, void*) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xA4]
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]

 Block2:
	lea edx,[eax*8]
	sub edx,eax
	add edx,edx
	mov eax,edx
	shr eax,4
	inc eax
	cmp eax,1
	jne Block4

 Block3:
	mov eax,2

 Block4:
	mov edx,dword ptr [esp+0x10]
	shl eax,4
	lea eax,[edx+eax+0x43]
	mov dword ptr [esp+0x10],eax
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	mov dword ptr [esp+0xC],0x104
	mov dword ptr [esp+8],eax
	mov dword ptr [esp+4],0xFFFFFF7E
	jmp  CWnd::PreCreateWnd
}
}
// CEngageDlg::Draw
_SUB_EXCEPTION_HANDLER(11B920)
__SUB_CLASS_THIS(0011B920, __thiscall, 59952,  CEngageDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_11B920
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x174
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x188]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x4C],esi
	mov eax,dword ptr [esp+0x198]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov eax,dword ptr [esi+0xA4]
	xor ebp,ebp
	mov dword ptr [esp+0x190],ebp
	cmp eax,ebp
	jne Block2

 Block1:
	xor eax,eax
	jmp Block3

 Block2:
	mov eax,dword ptr [eax-4]

 Block3:
	lea ecx,[eax*8]
	sub ecx,eax
	mov eax,dword ptr [esi+0xA4]
	add ecx,ecx
	cmp eax,ebp
	jne Block5

 Block4:
	xor eax,eax
	jmp Block6

 Block5:
	mov eax,dword ptr [eax-4]

 Block6:
	lea edx,[eax*8]
	sub edx,eax
	add edx,edx
	mov eax,edx
	shr eax,4
	inc eax
	cmp eax,1
	jne Block8

 Block7:
	mov eax,2

 Block8:
	shl eax,4
	sub eax,ecx
	cdq
	sub eax,edx
	mov ebx,eax
	sar ebx,1
	add ebx,0x14
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x24],ebp
	mov edi,dword ptr [esp+0x38]
	xor ecx,ecx
	mov byte ptr [esp+0x190],1
	mov dword ptr [esp+0x20],ecx
	jmp Block10

 Block10:
	mov eax,dword ptr [esi+0xA4]
	test eax,eax
	je Block133

 Block11:
	cmp ecx,dword ptr [eax-4]
	jae Block133

 Block12:
	lea ecx,[eax+ecx*4]
	push ecx
	lea ecx,[esp+0x28]
	call ZXString<char>::op_assign
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block131

 Block13:
	mov ebp,dword ptr [esp+0x24]
	lea ecx,[esp+0x58]
	push ecx
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0x19C],2
	call _xbstr_t::_ctor_0
	lea edx,[esp+0x5C]
	push 0x31
	push edx
	mov byte ptr [esp+0x1A0],3
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x198],4
	test ecx,ecx
	je Block132

 Block14:
	mov byte ptr [esp+0x198],5
	call IWzFont::CalcTextWidth
	mov esi,eax
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x190],2
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	cmp word ptr [esp+0x58],8
	mov byte ptr [esp+0x190],1
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov eax,0xEA
	sub eax,esi
	cdq
	sub eax,edx
	mov esi,eax
	sar esi,1
	lea edx,[esp+0x88]
	add esi,0xF
	push edx
	mov dword ptr [esp+0x20],esi
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x88]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block131

 Block21:
	lea ecx,[esp+0x168]
	push ecx
	mov byte ptr [esp+0x194],6
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x168]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block131

 Block22:
	lea eax,[esp+0x88]
	push eax
	lea ecx,[esp+0x16C]
	push ecx
	lea edx,[esp+0x38]
	push 0x33
	push edx
	mov byte ptr [esp+0x1A0],7
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0x1A4],8
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x1A0],9
	test edi,edi
	je Block132

 Block23:
	lea eax,[ebx+1]
	push eax
	dec esi
	push esi
	mov ecx,edi
	mov byte ptr [esp+0x1A8],8
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x190],7
	test eax,eax
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block25:
	cmp word ptr [esp+0x168],8
	mov byte ptr [esp+0x190],6
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [esp+0x168],ax
	mov eax,dword ptr [esp+0x170]
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[esp+0x168]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	cmp word ptr [esp+0x88],8
	mov byte ptr [esp+0x190],1
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0x90]
	xor edx,edx
	mov word ptr [esp+0x88],dx
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea eax,[esp+0x88]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block33:
	lea ecx,[esp+0xA8]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0xA8]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block131

 Block34:
	lea eax,[esp+0x108]
	push eax
	mov byte ptr [esp+0x194],0xA
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x108]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block131

 Block35:
	lea edx,[esp+0xA8]
	push edx
	lea eax,[esp+0x10C]
	push eax
	lea ecx,[esp+0x58]
	push 0x33
	push ecx
	mov byte ptr [esp+0x1A0],0xB
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0x1A4],0xC
	call _xbstr_t::_ctor_0
	lea eax,[ebx+2]
	push eax
	mov byte ptr [esp+0x1A4],0xD
	push esi
	mov ecx,edi
	mov byte ptr [esp+0x1A8],0xC
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x190],0xB
	test eax,eax
	je Block37

 Block36:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block37:
	mov ebx,8
	mov byte ptr [esp+0x190],0xA
	cmp word ptr [esp+0x108],bx
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x110]
	xor ecx,ecx
	mov word ptr [esp+0x108],cx
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea edx,[esp+0x108]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov byte ptr [esp+0x190],1
	cmp word ptr [esp+0xA8],bx
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [esp+0xA8],ax
	mov eax,dword ptr [esp+0xB0]
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[esp+0xA8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0xC8]
	push edx
	call ebx
	lea eax,[esp+0xC8]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block131

 Block46:
	lea ecx,[esp+0x148]
	push ecx
	mov byte ptr [esp+0x194],0xE
	call ebx
	lea edx,[esp+0x148]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block131

 Block47:
	lea eax,[esp+0xC8]
	push eax
	lea ecx,[esp+0x14C]
	push ecx
	lea edx,[esp+0x30]
	push 0x33
	push edx
	mov byte ptr [esp+0x1A0],0xF
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0x1A4],0x10
	call _xbstr_t::_ctor_0
	mov ebx,dword ptr [esp+0x28]
	add ebx,3
	push ebx
	mov byte ptr [esp+0x1A4],0x11
	push esi
	mov ecx,edi
	mov byte ptr [esp+0x1A8],0x10
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x190],0xF
	test eax,eax
	je Block49

 Block48:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block49:
	mov esi,8
	mov byte ptr [esp+0x190],0xE
	cmp word ptr [esp+0x148],si
	jne Block52

 Block50:
	xor eax,eax
	mov word ptr [esp+0x148],ax
	mov eax,dword ptr [esp+0x150]
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea ecx,[esp+0x148]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block53:
	mov byte ptr [esp+0x190],1
	cmp word ptr [esp+0xC8],si
	jne Block56

 Block54:
	mov eax,dword ptr [esp+0xD0]
	xor edx,edx
	mov word ptr [esp+0xC8],dx
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea eax,[esp+0xC8]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block57:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0xE8]
	push ecx
	call esi
	lea edx,[esp+0xE8]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block131

 Block58:
	lea eax,[esp+0x128]
	push eax
	mov byte ptr [esp+0x194],0x12
	call esi
	lea ecx,[esp+0x128]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block131

 Block59:
	lea edx,[esp+0xE8]
	push edx
	lea eax,[esp+0x12C]
	push eax
	lea ecx,[esp+0x50]
	push 0x33
	push ecx
	mov byte ptr [esp+0x1A0],0x13
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0x1A4],0x14
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x28]
	mov esi,dword ptr [esp+0x2C]
	inc eax
	push eax
	mov byte ptr [esp+0x1A4],0x15
	push esi
	mov ecx,edi
	mov byte ptr [esp+0x1A8],0x14
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x190],0x13
	test eax,eax
	je Block61

 Block60:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block61:
	cmp word ptr [esp+0x128],8
	mov byte ptr [esp+0x190],0x12
	jne Block64

 Block62:
	mov eax,dword ptr [esp+0x130]
	xor ecx,ecx
	mov word ptr [esp+0x128],cx
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea edx,[esp+0x128]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block65:
	cmp word ptr [esp+0xE8],8
	mov byte ptr [esp+0x190],1
	jne Block68

 Block66:
	xor eax,eax
	mov word ptr [esp+0xE8],ax
	mov eax,dword ptr [esp+0xF0]
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea ecx,[esp+0xE8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	lea edx,[esp+0x78]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x78]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block131

 Block70:
	lea ecx,[esp+0x68]
	push ecx
	mov byte ptr [esp+0x194],0x16
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x68]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block131

 Block71:
	lea eax,[esp+0x78]
	push eax
	lea ecx,[esp+0x6C]
	push ecx
	lea edx,[esp+0x48]
	push 0x33
	push edx
	mov byte ptr [esp+0x1A0],0x17
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0x1A4],0x18
	call _xbstr_t::_ctor_0
	push ebx
	mov byte ptr [esp+0x1A4],0x19
	push esi
	mov ecx,edi
	mov byte ptr [esp+0x1A8],0x18
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x190],0x17
	test eax,eax
	je Block73

 Block72:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block73:
	mov esi,8
	mov byte ptr [esp+0x190],0x16
	cmp word ptr [esp+0x68],si
	jne Block76

 Block74:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	test eax,eax
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea ecx,[esp+0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block77:
	mov byte ptr [esp+0x190],1
	cmp word ptr [esp+0x78],si
	jne Block80

 Block78:
	mov eax,dword ptr [esp+0x80]
	xor edx,edx
	mov word ptr [esp+0x78],dx
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea eax,[esp+0x78]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block81:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0xB8]
	push ecx
	call esi
	lea edx,[esp+0xB8]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block131

 Block82:
	lea eax,[esp+0x98]
	push eax
	mov byte ptr [esp+0x194],0x1A
	call esi
	lea ecx,[esp+0x98]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block131

 Block83:
	lea edx,[esp+0xB8]
	push edx
	lea eax,[esp+0x9C]
	push eax
	lea ecx,[esp+0x34]
	push 0x33
	push ecx
	mov byte ptr [esp+0x1A0],0x1B
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0x1A4],0x1C
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x28]
	mov esi,dword ptr [esp+0x2C]
	inc eax
	push eax
	inc esi
	mov byte ptr [esp+0x1A4],0x1D
	push esi
	mov ecx,edi
	mov byte ptr [esp+0x1A8],0x1C
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x190],0x1B
	test eax,eax
	je Block85

 Block84:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block85:
	cmp word ptr [esp+0x98],8
	mov byte ptr [esp+0x190],0x1A
	jne Block88

 Block86:
	mov eax,dword ptr [esp+0xA0]
	xor ecx,ecx
	mov word ptr [esp+0x98],cx
	test eax,eax
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea edx,[esp+0x98]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block89:
	cmp word ptr [esp+0xB8],8
	mov byte ptr [esp+0x190],1
	jne Block92

 Block90:
	xor eax,eax
	mov word ptr [esp+0xB8],ax
	mov eax,dword ptr [esp+0xC0]
	test eax,eax
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea ecx,[esp+0xB8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block93:
	lea edx,[esp+0xF8]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0xF8]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block131

 Block94:
	lea ecx,[esp+0xD8]
	push ecx
	mov byte ptr [esp+0x194],0x1E
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0xD8]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block131

 Block95:
	lea eax,[esp+0xF8]
	push eax
	lea ecx,[esp+0xDC]
	push ecx
	lea edx,[esp+0x3C]
	push 0x33
	push edx
	mov byte ptr [esp+0x1A0],0x1F
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0x1A4],0x20
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x28]
	add eax,2
	push eax
	mov byte ptr [esp+0x1A4],0x21
	push esi
	mov ecx,edi
	mov byte ptr [esp+0x1A8],0x20
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x190],0x1F
	test eax,eax
	je Block97

 Block96:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block97:
	cmp word ptr [esp+0xD8],8
	mov byte ptr [esp+0x190],0x1E
	jne Block100

 Block98:
	xor eax,eax
	mov word ptr [esp+0xD8],ax
	mov eax,dword ptr [esp+0xE0]
	test eax,eax
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea ecx,[esp+0xD8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block101:
	cmp word ptr [esp+0xF8],8
	mov byte ptr [esp+0x190],1
	jne Block104

 Block102:
	mov eax,dword ptr [esp+0x100]
	xor edx,edx
	mov word ptr [esp+0xF8],dx
	test eax,eax
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea eax,[esp+0xF8]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block105:
	lea ecx,[esp+0x138]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x138]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block131

 Block106:
	lea eax,[esp+0x118]
	push eax
	mov byte ptr [esp+0x194],0x22
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x118]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block131

 Block107:
	lea edx,[esp+0x138]
	push edx
	lea eax,[esp+0x11C]
	push eax
	lea ecx,[esp+0x44]
	push 0x33
	push ecx
	mov byte ptr [esp+0x1A0],0x23
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0x1A4],0x24
	call _xbstr_t::_ctor_0
	push ebx
	mov byte ptr [esp+0x1A4],0x25
	push esi
	mov ecx,edi
	mov byte ptr [esp+0x1A8],0x24
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x190],0x23
	test eax,eax
	je Block109

 Block108:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block109:
	mov esi,8
	mov byte ptr [esp+0x190],0x22
	cmp word ptr [esp+0x118],si
	jne Block116

 Block110:
	mov eax,dword ptr [esp+0x120]
	xor ecx,ecx
	mov word ptr [esp+0x118],cx
	test eax,eax
	je Block112

 Block111:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block112:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block113:
	mov byte ptr [esp+0x190],1
	cmp word ptr [esp+0x138],si
	jne Block117

 Block114:
	xor eax,eax
	mov word ptr [esp+0x138],ax
	mov eax,dword ptr [esp+0x140]
	test eax,eax
	je Block118

 Block115:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block118

 Block116:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x118]
	push edx
	call ebx
	jmp Block113

 Block117:
	lea ecx,[esp+0x138]
	push ecx
	call ebx

 Block118:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x178]
	push edx
	call esi
	lea eax,[esp+0x178]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block131

 Block119:
	lea ecx,[esp+0x158]
	push ecx
	mov byte ptr [esp+0x194],0x26
	call esi
	lea edx,[esp+0x158]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block131

 Block120:
	lea eax,[esp+0x178]
	push eax
	lea ecx,[esp+0x15C]
	push ecx
	lea edx,[esp+0x4C]
	push 0x32
	push edx
	mov byte ptr [esp+0x1A0],0x27
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0x1A4],0x28
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x28]
	add eax,2
	push eax
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x1A4],0x29
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x1A8],0x28
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x190],0x27
	test eax,eax
	je Block122

 Block121:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block122:
	mov esi,8
	mov byte ptr [esp+0x190],0x26
	cmp word ptr [esp+0x158],si
	jne Block125

 Block123:
	xor eax,eax
	mov word ptr [esp+0x158],ax
	mov eax,dword ptr [esp+0x160]
	test eax,eax
	je Block126

 Block124:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block126

 Block125:
	lea ecx,[esp+0x158]
	push ecx
	call ebx

 Block126:
	mov byte ptr [esp+0x190],1
	cmp word ptr [esp+0x178],si
	jne Block129

 Block127:
	mov eax,dword ptr [esp+0x180]
	xor edx,edx
	mov word ptr [esp+0x178],dx
	test eax,eax
	je Block130

 Block128:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block130

 Block129:
	lea eax,[esp+0x178]
	push eax
	call ebx

 Block130:
	add dword ptr [esp+0x18],0xE
	inc dword ptr [esp+0x20]
	mov esi,dword ptr [esp+0x4C]
	mov ebx,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x20]
	jmp Block10

 Block131:
	push eax
	call _com_issue_error

 Block132:
	push 0x80004003
	call _com_issue_error

 Block133:
	mov byte ptr [esp+0x190],0
	test ebp,ebp
	je Block135

 Block134:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block135:
	mov dword ptr [esp+0x190],0xFFFFFFFF
	test edi,edi
	je Block137

 Block136:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block137:
	mov ecx,dword ptr [esp+0x188]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x180
	ret 4
}
}
