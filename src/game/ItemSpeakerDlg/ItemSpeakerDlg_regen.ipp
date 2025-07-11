#include "regen.hpp"
// ItemSpeakerDlg.ipp
#include "ItemSpeakerDlg.hpp"

// CItemSpeakerDlg::HitTest
__SUB_CLASS_THIS(001C9BF0, __thiscall, 70306,  CItemSpeakerDlg, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x10]
	push esi
	mov esi,dword ptr [esp+0x18]
	push edi
	push esi
	push ebp
	push eax
	mov edi,ecx
	call CWnd::HitTest
	mov ebx,eax
	test ebx,ebx
	jne Block2

 Block1:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0xC

 Block2:
	test esi,esi
	je Block6

 Block3:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block6

 Block4:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x28]
	call eax
	test eax,eax
	mov eax,ebx
	jne Block7

 Block5:
	pop edi
	mov dword ptr [esi],0
	pop esi
	pop ebp
	pop ebx
	ret 0xC

 Block6:
	mov ecx,dword ptr [esp+0x14]
	push ebp
	push ecx
	mov ecx,edi
	call CItemSpeakerDlg::_InItemRect
	neg eax
	sbb eax,eax
	neg eax
	inc eax

 Block7:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0xC
}
}
// CItemSpeakerDlg::PutItem
_SUB_EXCEPTION_HANDLER(1CABA0)
__SUB_CLASS_THIS(001CABA0, __thiscall, 70309,  CItemSpeakerDlg, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1CABA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x88
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x9C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x64],esi
	mov eax,dword ptr [esp+0xAC]
	mov ecx,dword ptr [esp+0xB0]
	lea edx,[esp+0x4C]
	mov dword ptr [esi+0x9C],eax
	mov dword ptr [esi+0xA0],ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edx
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x50]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	xor edi,edi
	cmp eax,edi
	je Block5

 Block1:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push edi
	call ebp
	test esi,esi
	je Block4

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block4:
	mov esi,dword ptr [esp+0x64]
	mov dword ptr [esp+0x50],0
	xor edi,edi

 Block5:
	mov eax,dword ptr [esi+0xA0]
	mov ecx,dword ptr [esi+0x9C]
	push eax
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call CharacterData::GetItem
	push eax
	lea ecx,[esi+0xA4]
	mov dword ptr [esp+0xA8],edi
	call ZRef<GW_ItemSlotBase>::op_assign_copy
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0xA4],0xFFFFFFFF
	cmp eax,edi
	je Block9

 Block6:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x18]
	add eax,4
	push eax
	call ebp
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,edi
	je Block9

 Block8:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block9:
	mov ecx,3
	mov esi,0xFFFFFFFE
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],esi
	mov ebx,dword ptr [esp+0x64]
	mov ecx,dword ptr [ebx+0xB1C]
	mov dword ptr [esp+0xA4],1
	cmp ecx,edi
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x50]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x4C]
	cmp eax,edi
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	mov ebp,8
	mov dword ptr [esp+0xA4],0xFFFFFFFF
	cmp word ptr [esp+0x14],bp
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov edx,3
	mov word ptr [esp+0x14],dx
	mov dword ptr [esp+0x1C],esi
	mov ecx,dword ptr [ebx+0xB20]
	mov dword ptr [esp+0xA4],2
	cmp ecx,edi
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	lea eax,[esp+0x14]
	push eax
	lea edx,[esp+0x50]
	push edx
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x4C]
	cmp eax,edi
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block21:
	mov dword ptr [esp+0xA4],0xFFFFFFFF
	cmp word ptr [esp+0x14],bp
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,edi
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov eax,dword ptr [ebx+0xA8]
	cmp eax,edi
	je Block172

 Block26:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov dword ptr [esp+0x4C],eax
	mov dword ptr [esp+0x24],edi
	lea edx,[esp+0x14]
	push 0x3D0
	push edx
	mov dword ptr [esp+0xAC],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea ecx,[esp+0x28]
	push ecx
	push eax
	mov byte ptr [esp+0xB0],4
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0xA4],3
	cmp eax,edi
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block28:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x54]
	push edx
	call ebp
	lea eax,[esp+0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	lea ecx,[esp+0x14]
	mov bl,5
	push ecx
	mov byte ptr [esp+0xA8],bl
	call ebp
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0xA4],6
	cmp ecx,edi
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	lea eax,[esp+0x54]
	push eax
	lea edx,[esp+0x18]
	push edx
	push 0x20
	push 0x20
	call IWzCanvas::Create
	mov esi,8
	mov byte ptr [esp+0xA4],bl
	cmp word ptr [esp+0x14],si
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,edi
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov byte ptr [esp+0xA4],3
	cmp word ptr [esp+0x54],si
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x5C]
	xor edx,edx
	mov word ptr [esp+0x54],dx
	cmp eax,edi
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea eax,[esp+0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov eax,dword ptr [esp+0x24]
	cmp eax,edi
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x70]
	push edi
	push eax
	mov esi,eax
	call edx
	cmp eax,edi
	jge Block46

 Block45:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block46:
	mov eax,dword ptr [esp+0x24]
	cmp eax,edi
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x78]
	push edi
	push eax
	mov esi,eax
	call edx
	cmp eax,edi
	jge Block50

 Block49:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block50:
	mov eax,dword ptr [esp+0x4C]
	push 2
	push edi
	push edi
	push edi
	push edi
	push edi
	push edi
	push 0x20
	push edi
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x50]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x40],esp
	cmp eax,edi
	je Block52

 Block51:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block52:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	lea ecx,[esp+0x2C]
	push ecx
	call ebp
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block54

 Block53:
	push eax
	call _com_issue_error

 Block54:
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0xA8],7
	call ebp
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	lea edx,[esp+0x6C]
	push edx
	mov byte ptr [esp+0xA8],8
	call ebp
	lea eax,[esp+0x6C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block58

 Block57:
	push eax
	call _com_issue_error

 Block58:
	lea ecx,[esp+0x14]
	push ecx
	mov byte ptr [esp+0xA8],9
	call ebp
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block60

 Block59:
	push eax
	call _com_issue_error

 Block60:
	lea eax,[esp+0x54]
	mov bl,0xA
	push eax
	mov byte ptr [esp+0xA8],bl
	call ebp
	lea ecx,[esp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block62

 Block61:
	push eax
	call _com_issue_error

 Block62:
	mov edx,dword ptr [esp+0x64]
	mov ecx,dword ptr [edx+0xB1C]
	mov byte ptr [esp+0xA4],0xB
	cmp ecx,edi
	jne Block64

 Block63:
	push 0x80004003
	call _com_issue_error

 Block64:
	lea eax,[esp+0x2C]
	push eax
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x74]
	push eax
	lea edx,[esp+0x20]
	push edx
	mov edx,dword ptr [esp+0x34]
	lea eax,[esp+0x64]
	push eax
	push edx
	lea eax,[esp+0x94]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x7C],8
	jne Block71

 Block65:
	mov eax,dword ptr [esp+0x84]
	xor ecx,ecx
	mov word ptr [esp+0x7C],cx
	cmp eax,edi
	je Block67

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block67:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block68:
	cmp word ptr [esp+0x54],8
	mov byte ptr [esp+0xA4],bl
	jne Block72

 Block69:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	cmp eax,edi
	je Block73

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block71:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x7C]
	push edx
	call esi
	jmp Block68

 Block72:
	lea ecx,[esp+0x54]
	push ecx
	call esi

 Block73:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xA4],9
	jne Block76

 Block74:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	cmp eax,edi
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea eax,[esp+0x14]
	push eax
	call esi

 Block77:
	cmp word ptr [esp+0x6C],8
	mov byte ptr [esp+0xA4],8
	jne Block80

 Block78:
	mov eax,dword ptr [esp+0x74]
	xor ecx,ecx
	mov word ptr [esp+0x6C],cx
	cmp eax,edi
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea edx,[esp+0x6C]
	push edx
	call esi

 Block81:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xA4],7
	jne Block84

 Block82:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,edi
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea ecx,[esp+0x3C]
	push ecx
	call esi

 Block85:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xA4],3
	jne Block88

 Block86:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,edi
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea eax,[esp+0x2C]
	push eax
	call esi

 Block89:
	mov dword ptr [esp+0x28],edi
	lea ecx,[esp+0x14]
	push 0x3D0
	push ecx
	mov byte ptr [esp+0xAC],0xC
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea edx,[esp+0x2C]
	push edx
	push eax
	mov byte ptr [esp+0xB0],0xD
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0xA4],0xC
	cmp eax,edi
	je Block91

 Block90:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block91:
	lea eax,[esp+0x3C]
	push eax
	call ebp
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block93

 Block92:
	push eax
	call _com_issue_error

 Block93:
	lea edx,[esp+0x2C]
	mov bl,0xE
	push edx
	mov byte ptr [esp+0xA8],bl
	call ebp
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block95

 Block94:
	push eax
	call _com_issue_error

 Block95:
	mov ecx,dword ptr [esp+0x28]
	mov byte ptr [esp+0xA4],0xF
	cmp ecx,edi
	jne Block97

 Block96:
	push 0x80004003
	call _com_issue_error

 Block97:
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push 0xF
	push 0x9F
	call IWzCanvas::Create
	mov byte ptr [esp+0xA4],bl
	mov ebx,8
	cmp word ptr [esp+0x2C],bx
	jne Block100

 Block98:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,edi
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea edx,[esp+0x2C]
	push edx
	call esi

 Block101:
	mov byte ptr [esp+0xA4],0xC
	cmp word ptr [esp+0x3C],bx
	jne Block104

 Block102:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,edi
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea ecx,[esp+0x3C]
	push ecx
	call esi

 Block105:
	mov eax,dword ptr [esp+0x28]
	cmp eax,edi
	jne Block107

 Block106:
	push 0x80004003
	call _com_issue_error

 Block107:
	mov edx,dword ptr [eax]
	push edi
	mov esi,eax
	push eax
	mov eax,dword ptr [edx+0x70]
	call eax
	cmp eax,edi
	jge Block109

 Block108:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block109:
	mov eax,dword ptr [esp+0x28]
	cmp eax,edi
	jne Block111

 Block110:
	push 0x80004003
	call _com_issue_error

 Block111:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x78]
	push edi
	push eax
	mov esi,eax
	call edx
	cmp eax,edi
	jge Block113

 Block112:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block113:
	mov eax,dword ptr [esp+0x4C]
	push eax
	lea ecx,[esp+0x6C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	push 0x9F
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 1
	push edx
	mov byte ptr [esp+0xB4],0x10
	call get_basic_font
	lea eax,[esp+0x78]
	add esp,8
	push eax
	call format_string_1
	add esp,0xC
	lea ecx,[esp+0x3C]
	push ecx
	call ebp
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block115

 Block114:
	push eax
	call _com_issue_error

 Block115:
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0xA8],0x11
	call ebp
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block117

 Block116:
	push eax
	call _com_issue_error

 Block117:
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x30]
	push eax
	lea ecx,[esp+0x1C]
	push edi
	push ecx
	mov byte ptr [esp+0xB4],0x12
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x70]
	push eax
	push ecx
	mov dword ptr [esp+0x5C],esp
	mov ecx,esp
	mov bl,0x13
	push edx
	mov byte ptr [esp+0xB8],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x38]
	mov byte ptr [esp+0xB4],0x14
	cmp ecx,edi
	jne Block119

 Block118:
	push 0x80004003
	call _com_issue_error

 Block119:
	push 2
	push 2
	mov byte ptr [esp+0xBC],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA4],0x12
	cmp eax,edi
	je Block121

 Block120:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block121:
	mov ebx,8
	mov byte ptr [esp+0xA4],0x11
	cmp word ptr [esp+0x2C],bx
	jne Block128

 Block122:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,edi
	je Block124

 Block123:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block124:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block125:
	mov byte ptr [esp+0xA4],0x10
	cmp word ptr [esp+0x3C],bx
	jne Block129

 Block126:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,edi
	je Block130

 Block127:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block130

 Block128:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x2C]
	push ecx
	call esi
	jmp Block125

 Block129:
	lea eax,[esp+0x3C]
	push eax
	call esi

 Block130:
	lea ecx,[esp+0x7C]
	push ecx
	call ebp
	lea edx,[esp+0x7C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block132

 Block131:
	push eax
	call _com_issue_error

 Block132:
	lea eax,[esp+0x54]
	push eax
	mov byte ptr [esp+0xA8],0x15
	call ebp
	lea ecx,[esp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block134

 Block133:
	push eax
	call _com_issue_error

 Block134:
	lea edx,[esp+0x6C]
	push edx
	mov byte ptr [esp+0xA8],0x16
	call ebp
	lea eax,[esp+0x6C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block136

 Block135:
	push eax
	call _com_issue_error

 Block136:
	lea ecx,[esp+0x3C]
	push ecx
	mov byte ptr [esp+0xA8],0x17
	call ebp
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block138

 Block137:
	push eax
	call _com_issue_error

 Block138:
	lea eax,[esp+0x2C]
	mov bl,0x18
	push eax
	mov byte ptr [esp+0xA8],bl
	call ebp
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block140

 Block139:
	push eax
	call _com_issue_error

 Block140:
	mov edx,dword ptr [esp+0x64]
	mov ecx,dword ptr [edx+0xB20]
	mov byte ptr [esp+0xA4],0x19
	cmp ecx,edi
	jne Block142

 Block141:
	push 0x80004003
	call _com_issue_error

 Block142:
	lea eax,[esp+0x7C]
	push eax
	lea edx,[esp+0x58]
	push edx
	lea eax,[esp+0x74]
	push eax
	lea edx,[esp+0x48]
	push edx
	mov edx,dword ptr [esp+0x38]
	lea eax,[esp+0x3C]
	push eax
	push edx
	lea eax,[esp+0xA4]
	push eax
	call IWzGr2DLayer::InsertCanvas
	mov ebp,8
	cmp word ptr [esp+0x8C],bp
	jne Block145

 Block143:
	mov eax,dword ptr [esp+0x94]
	xor ecx,ecx
	mov word ptr [esp+0x8C],cx
	cmp eax,edi
	je Block146

 Block144:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block146

 Block145:
	lea edx,[esp+0x8C]
	push edx
	call esi

 Block146:
	mov byte ptr [esp+0xA4],bl
	cmp word ptr [esp+0x2C],bp
	jne Block149

 Block147:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,edi
	je Block150

 Block148:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block150

 Block149:
	lea ecx,[esp+0x2C]
	push ecx
	call esi

 Block150:
	mov byte ptr [esp+0xA4],0x17
	cmp word ptr [esp+0x3C],bp
	jne Block153

 Block151:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,edi
	je Block154

 Block152:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block154

 Block153:
	lea eax,[esp+0x3C]
	push eax
	call esi

 Block154:
	mov byte ptr [esp+0xA4],0x16
	cmp word ptr [esp+0x6C],bp
	jne Block157

 Block155:
	mov eax,dword ptr [esp+0x74]
	xor ecx,ecx
	mov word ptr [esp+0x6C],cx
	cmp eax,edi
	je Block158

 Block156:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block158

 Block157:
	lea edx,[esp+0x6C]
	push edx
	call esi

 Block158:
	mov byte ptr [esp+0xA4],0x15
	cmp word ptr [esp+0x54],bp
	jne Block161

 Block159:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	cmp eax,edi
	je Block162

 Block160:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block162

 Block161:
	lea ecx,[esp+0x54]
	push ecx
	call esi

 Block162:
	mov byte ptr [esp+0xA4],0x10
	cmp word ptr [esp+0x7C],bp
	jne Block165

 Block163:
	mov eax,dword ptr [esp+0x84]
	xor edx,edx
	mov word ptr [esp+0x7C],dx
	cmp eax,edi
	je Block166

 Block164:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block166

 Block165:
	lea eax,[esp+0x7C]
	push eax
	call esi

 Block166:
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0xA4],0xC
	cmp eax,edi
	je Block168

 Block167:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block168:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0xA4],3
	cmp eax,edi
	je Block170

 Block169:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block170:
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0xA4],0xFFFFFFFF
	cmp eax,edi
	je Block172

 Block171:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block172:
	mov eax,1
	mov ecx,dword ptr [esp+0x9C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x94
	ret 8
}
}
// CItemSpeakerDlg::OnKey
__SUB_CLASS_THIS(001CAB60, __thiscall, 70308,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	mov esi,ecx
	test edi,edi
	js Block3

 Block1:
	cmp ebx,0xD
	jne Block3

 Block2:
	lea ecx,[esi-4]
	call CItemSpeakerDlg::_SendConsumeCashItemUseRequest
	test eax,eax
	je Block4

 Block3:
	push edi
	push ebx
	mov ecx,esi
	call CDialog::OnKey

 Block4:
	pop edi
	pop esi
	pop ebx
	ret 8
}
}
// CItemSpeakerDlg::OnCreate
_SUB_EXCEPTION_HANDLER(1CA210)
__SUB_CLASS_THIS(001CA210, __thiscall, 70303,  CItemSpeakerDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1CA210
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
	mov esi,ecx
	xor ebp,ebp
	push ebp
	push ebp
	lea edi,[esi+0xB24]
	push esi
	mov ecx,edi
	call CLayoutMan::Init
	lea eax,[esp+0x24]
	push 0x1992
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	push ebp
	push ebp
	push 1
	push eax
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0xCC],ebp
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],ebp
	je Block2

 Block1:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x18],ebp

 Block2:
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	cmp eax,ebp
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	lea edx,[esp+0x24]
	push 0x1991
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	push ebp
	push ebp
	mov ebx,2
	push ebx
	push eax
	lea eax,[esp+0x28]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0xCC],1
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x18],ebp
	je Block6

 Block5:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x18],ebp

 Block6:
	mov eax,dword ptr [esp+0x24]
	or edi,0xFFFFFFFF
	mov dword ptr [esp+0xB4],edi
	cmp eax,ebp
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block8:
	lea ecx,[esp+0x70]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0xB8],ebx
	mov dword ptr [esp+0x98],edi
	mov dword ptr [esp+0x90],0xFF000000
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x38],eax
	mov byte ptr [esp+0xB4],3
	cmp eax,ebp
	je Block10

 Block9:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block11

 Block10:
	xor eax,eax

 Block11:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0xB4],2
	test eax,eax
	je Block19

 Block12:
	add eax,8
	je Block19

 Block13:
	lea edi,[eax-8]
	test edi,edi
	je Block15

 Block14:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block15:
	mov eax,dword ptr [esi+0xB00]
	mov dword ptr [esi+0xB00],edi
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block17

 Block16:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block17:
	mov ecx,dword ptr [esi+0xB00]
	lea eax,[esp+0x70]
	push eax
	push 0xF
	push 0xCA
	push 0x81
	push 0x12
	xor edi,edi
	mov dword ptr [esp+0xB4],0x3C
	mov dword ptr [esp+0x88],ebx
	mov dword ptr [esp+0x8C],edi
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	push 0x3E9
	push esi
	call edx
	mov eax,dword ptr [esi+0xB00]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	lea ecx,[esp+0x3C]
	call CCtrlCheckBox::CREATEPARAM::_ctor_default
	mov eax,0xE
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0xB8],4
	mov dword ptr [esp+0x44],edi
	mov dword ptr [esp+0x5C],eax
	mov dword ptr [esp+0x60],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x38],eax
	mov byte ptr [esp+0xB4],5
	cmp eax,edi
	je Block20

 Block18:
	mov ecx,eax
	call CCtrlCheckBox::_ctor_default
	jmp Block21

 Block19:
	xor edi,edi
	jmp Block15

 Block20:
	xor eax,eax

 Block21:
	mov byte ptr [esp+0xB4],4
	cmp eax,edi
	je Block29

 Block22:
	add eax,8
	cmp eax,edi
	je Block29

 Block23:
	lea edi,[eax-8]
	test edi,edi
	je Block25

 Block24:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block25:
	mov eax,dword ptr [esi+0xAF8]
	mov dword ptr [esi+0xAF8],edi
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block27

 Block26:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlCheckBox>::_ReleaseRaw

 Block27:
	mov ecx,dword ptr [esi+0xAF8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x3C]
	push eax
	push 0x9B
	push 0xB
	push 0x3E8
	push esi
	call edx
	mov ecx,dword ptr [esi+0xAF8]
	push 1
	call CCtrlCheckBox::SetChecked
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block30

 Block28:
	push eax
	call _com_issue_error

 Block29:
	xor edi,edi
	jmp Block25

 Block30:
	mov edx,3
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xB4],7
	test ecx,ecx
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	lea eax,[esp+0x14]
	push eax
	lea edx,[esp+0x2C]
	push edx
	push 0
	push 0
	push 0
	push 0x41
	push 0x67
	lea eax,[esp+0x40]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xB1C]
	cmp edi,eax
	je Block37

 Block33:
	mov dword ptr [esi+0xB1C],eax
	test eax,eax
	je Block35

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block35:
	test edi,edi
	je Block37

 Block36:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block37:
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block39

 Block38:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block39:
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov ebp,8
	mov byte ptr [esp+0xB4],6
	cmp word ptr [esp+0x28],bp
	jne Block42

 Block40:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea edx,[esp+0x28]
	push edx
	call ebx

 Block43:
	mov byte ptr [esp+0xB4],4
	cmp word ptr [esp+0x14],bp
	jne Block46

 Block44:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea ecx,[esp+0x14]
	push ecx
	call ebx

 Block47:
	lea edx,[esp+0x24]
	push edx
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0xB4],8
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block49

 Block48:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block49:
	mov edi,dword ptr [esi+0xB1C]
	mov byte ptr [esp+0xB4],9
	test edi,edi
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push edi
	call eax
	test eax,eax
	jge Block53

 Block52:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block53:
	mov byte ptr [esp+0xB4],8
	cmp word ptr [esp+0x14],bp
	jne Block56

 Block54:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea edx,[esp+0x14]
	push edx
	call ebx

 Block57:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xB4],4
	test eax,eax
	je Block59

 Block58:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block59:
	lea eax,[esp+0x24]
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	xor ebp,ebp
	mov bl,0xA
	mov ecx,0xD
	mov byte ptr [esp+0xB4],bl
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebp
	je Block61

 Block60:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block61:
	mov edi,dword ptr [esi+0xB1C]
	mov byte ptr [esp+0xB4],0xB
	cmp edi,ebp
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push edi
	call eax
	cmp eax,ebp
	jge Block65

 Block64:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block65:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xB4],bl
	jne Block68

 Block66:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebp
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xB4],4
	cmp eax,ebp
	je Block71

 Block70:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block71:
	mov edi,dword ptr [esi+0xB1C]
	cmp edi,ebp
	jne Block73

 Block72:
	push 0x80004003
	call _com_issue_error

 Block73:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push edi
	call ecx
	cmp eax,ebp
	jge Block75

 Block74:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block75:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block77

 Block76:
	push eax
	call _com_issue_error

 Block77:
	mov ecx,3
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],ebp
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xB4],0xD
	cmp ecx,ebp
	jne Block79

 Block78:
	push 0x80004003
	call _com_issue_error

 Block79:
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x2C]
	push eax
	push ebp
	push ebp
	push ebp
	push 0x65
	push 0x29
	lea edx,[esp+0x40]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xB20]
	cmp edi,eax
	je Block84

 Block80:
	mov dword ptr [esi+0xB20],eax
	cmp eax,ebp
	je Block82

 Block81:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block82:
	cmp edi,ebp
	je Block84

 Block83:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block84:
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block86

 Block85:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block86:
	mov ebx,8
	mov byte ptr [esp+0xB4],0xC
	cmp word ptr [esp+0x28],bx
	jne Block89

 Block87:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebp
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block90:
	mov byte ptr [esp+0xB4],4
	cmp word ptr [esp+0x14],bx
	jne Block93

 Block91:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block94:
	lea edx,[esp+0x24]
	push edx
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0xB4],0xE
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebp
	je Block96

 Block95:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block96:
	mov edi,dword ptr [esi+0xB20]
	mov byte ptr [esp+0xB4],0xF
	cmp edi,ebp
	jne Block98

 Block97:
	push 0x80004003
	call _com_issue_error

 Block98:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push edi
	call eax
	cmp eax,ebp
	jge Block100

 Block99:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block100:
	mov byte ptr [esp+0xB4],0xE
	cmp word ptr [esp+0x14],bx
	jne Block103

 Block101:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebp
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block104:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xB4],4
	cmp eax,ebp
	je Block106

 Block105:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block106:
	lea eax,[esp+0x38]
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x10
	mov ecx,0xD
	mov byte ptr [esp+0xB4],bl
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],eax
	cmp eax,ebp
	je Block108

 Block107:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block108:
	mov edi,dword ptr [esi+0xB20]
	mov byte ptr [esp+0xB4],0x11
	cmp edi,ebp
	jne Block110

 Block109:
	push 0x80004003
	call _com_issue_error

 Block110:
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push edi
	call eax
	cmp eax,ebp
	jge Block112

 Block111:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block112:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xB4],bl
	jne Block115

 Block113:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebp
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block116:
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0xB4],4
	cmp eax,ebp
	je Block118

 Block117:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block118:
	mov edi,dword ptr [esi+0xB20]
	cmp edi,ebp
	jne Block120

 Block119:
	push 0x80004003
	call _com_issue_error

 Block120:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push edi
	call ecx
	cmp eax,ebp
	jge Block122

 Block121:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block122:
	push ebp
	mov ecx,esi
	call CWnd::Draw
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0xB4],2
	cmp ecx,ebp
	je Block124

 Block123:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x48],ebp

 Block124:
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebp
	je Block126

 Block125:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block126:
	lea ecx,[esp+0x70]
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov ecx,dword ptr [esp+0xAC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA4
	ret 4
}
}
// CItemSpeakerDlg::_SendConsumeCashItemUseRequest
_SUB_EXCEPTION_HANDLER(1C9E70)
__SUB_CLASS_THIS0(001C9E70, __thiscall, 70310,  CItemSpeakerDlg, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1C9E70
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [esi+0xB00]
	lea eax,[esp+0xC]
	push eax
	call CCtrlEdit::GetText
	xor edi,edi
	push edi
	push edi
	mov ecx,eax
	mov dword ptr [esp+0x34],edi
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov eax,dword ptr [eax]
	cmp eax,edi
	je Block2

 Block1:
	cmp byte ptr [eax],0
	jne Block3

 Block2:
	mov edi,1

 Block3:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	test edi,edi
	jne Block13

 Block6:
	cmp dword ptr [esi+0xA8],edi
	jne Block8

 Block7:
	push edi
	push 1
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1164
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,7
	je Block13

 Block8:
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	test edi,edi
	je Block13

 Block9:
	cmp dword ptr [edi+0x20B8],0
	jne Block12

 Block10:
	mov eax,dword ptr [edi+0x20CC]
	mov edx,dword ptr [eax+0x69]
	push edx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block12

 Block11:
	call get_update_time
	sub eax,dword ptr [edi+0x20BC]
	cmp eax,0x1F4
	jge Block14

 Block12:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x136
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block13:
	xor eax,eax
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x24
	ret

 Block14:
	push 0x55
	lea ecx,[esp+0x18]
	call COutPacket::_ctor_1
	mov dword ptr [esp+0x2C],1
	call get_update_time
	push eax
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	movzx ecx,word ptr [esi+0x94]
	push ecx
	lea ecx,[esp+0x18]
	call COutPacket::Encode2
	mov edx,dword ptr [esi+0x98]
	push edx
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	mov ecx,dword ptr [esi+0xB00]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x14],esp
	push eax
	call CCtrlEdit::GetText
	lea ecx,[esp+0x18]
	call COutPacket::EncodeStr
	mov eax,dword ptr [esi+0xAF8]
	mov eax,dword ptr [eax+0x48]
	push eax
	lea ecx,[esp+0x18]
	call COutPacket::Encode1
	cmp dword ptr [esi+0xA8],0
	setne cl
	movzx edx,cl
	push edx
	lea ecx,[esp+0x18]
	call COutPacket::Encode1
	cmp dword ptr [esi+0xA8],0
	je Block16

 Block15:
	mov eax,dword ptr [esi+0x9C]
	push eax
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	mov ecx,dword ptr [esi+0xA0]
	push ecx
	lea ecx,[esp+0x18]
	call COutPacket::Encode4

 Block16:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x14]
	push edx
	call CClientSocket::SendPacket
	mov dword ptr [edi+0x20B8],1
	call get_update_time
	mov dword ptr [edi+0x20BC],eax
	lea eax,[esp+0x10]
	push 0x927
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov byte ptr [esp+0x34],2
	call play_game_sound
	mov eax,dword ptr [esp+0x18]
	add esp,8
	mov byte ptr [esp+0x2C],1
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block18:
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov eax,1
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x24
	ret
}
}
// CItemSpeakerDlg::~CItemSpeakerDlg
_SUB_EXCEPTION_HANDLER(1C9C60)
__SUB_CLASS_THIS0(001C9C60, __thiscall, 70302,  CItemSpeakerDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1C9C60
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
	int 3// TODO: 	mov dword ptr [esi],offset CItemSpeakerDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CItemSpeakerDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CItemSpeakerDlg::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xB24]
	mov dword ptr [esp+0x1C],9
	call CLayoutMan::~CLayoutMan
	mov eax,dword ptr [esi+0xB20]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],8
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xB1C]
	mov byte ptr [esp+0x1C],7
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	lea edi,[esi+0xB14]
	mov byte ptr [esp+0x1C],6
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xB0C]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0xB04]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0xAFC]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	lea edi,[esi+0xAF4]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block14

 Block13:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlCheckBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block14:
	lea ecx,[esi+0xAC]
	mov byte ptr [esp+0x1C],1
	call CUIToolTip::~CUIToolTip
	mov eax,dword ptr [esi+0xA8]
	mov byte ptr [esp+0x1C],bl
	cmp eax,ebx
	je Block19

 Block15:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block18

 Block16:
	mov eax,dword ptr [esi+0xA8]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0xA8]
	cmp ecx,ebx
	je Block18

 Block17:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block18:
	mov dword ptr [esi+0xA8],ebx

 Block19:
	int 3// TODO: 	mov dword ptr [esi],offset CUniqueModeless::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUniqueModeless::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUniqueModeless::`vftable'{for `ZRefCounted'}
	mov ecx,esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	mov dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],ebx
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
// CItemSpeakerDlg::CItemSpeakerDlg
_SUB_EXCEPTION_HANDLER(1CA0E0)
__SUB_CLASS_THIS(001CA0E0, __thiscall, 70300,  CItemSpeakerDlg, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1CA0E0
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
	call CUniqueModeless::_ctor_default
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr [esi+0x94],eax
	or eax,0xFFFFFFFF
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CItemSpeakerDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CItemSpeakerDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CItemSpeakerDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x98],ecx
	mov dword ptr [esi+0x9C],eax
	mov dword ptr [esi+0xA0],eax
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0xA8],edi
	lea ecx,[esi+0xAC]
	mov byte ptr [esp+0x18],1
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xAF8],edi
	mov dword ptr [esi+0xB00],edi
	mov dword ptr [esi+0xB08],edi
	mov dword ptr [esi+0xB10],edi
	mov dword ptr [esi+0xB18],edi
	mov dword ptr [esi+0xB1C],edi
	mov dword ptr [esi+0xB20],edi
	mov dword ptr [esi+0xB24],edi
	mov dword ptr [esi+0xB28],edi
	mov dword ptr [esi+0xB2C],edi
	mov dword ptr [esi+0xB30],edi
	mov dword ptr [esi+0xB34],edi
	lea edx,[esp+0x20]
	push 0x19B4
	push edx
	mov byte ptr [esp+0x20],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x18],0xB
	cmp eax,edi
	je Block2

 Block1:
	mov eax,dword ptr [eax]
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	push edi
	push edi
	push 1
	push eax
	mov ecx,esi
	call CDialog::CreateDlg_2
	mov ecx,dword ptr [esp+0x20]
	cmp ecx,edi
	je Block5

 Block4:
	call _xbstr_t::Data_t::Release

 Block5:
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 8
}
}
// CItemSpeakerDlg::_InItemRect
__SUB_CLASS_THIS(001C9AB0, __thiscall, 70309,  CItemSpeakerDlg, int32_t, long, long) {
__asm {

 Block0:
	sub esp,8
	push esi
	push edi
	mov edi,ecx
	mov esi,dword ptr [edi+0xB1C]
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x68]
	lea ecx,[esp+8]
	push ecx
	push esi
	mov dword ptr [esp+0x10],0
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov esi,dword ptr [edi+0xB1C]
	test esi,esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x70]
	lea ecx,[esp+0xC]
	push ecx
	push esi
	mov dword ptr [esp+0x14],0
	call edx
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	mov eax,dword ptr [esp+8]
	mov ecx,dword ptr [esp+0x14]
	cmp eax,ecx
	jg Block13

 Block9:
	add eax,0x20
	cmp ecx,eax
	jg Block13

 Block10:
	mov eax,dword ptr [esp+0xC]
	mov ecx,dword ptr [esp+0x18]
	cmp eax,ecx
	jg Block13

 Block11:
	add eax,0x20
	cmp ecx,eax
	jg Block13

 Block12:
	pop edi
	mov eax,1
	pop esi
	add esp,8
	ret 8

 Block13:
	pop edi
	xor eax,eax
	pop esi
	add esp,8
	ret 8
}
}
// CItemSpeakerDlg::OnMouseMove
__SUB_CLASS_THIS(001C9B70, __thiscall, 70305,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0xA4],0
	push edi
	je Block3

 Block1:
	mov edi,dword ptr [esp+0x14]
	mov ebx,dword ptr [esp+0x10]
	push edi
	push ebx
	lea ecx,[esi-4]
	call CItemSpeakerDlg::_InItemRect
	test eax,eax
	je Block3

 Block2:
	mov eax,dword ptr [esi+0xA4]
	push 0
	push 0
	push 0
	push 0
	push 0
	push eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,esi
	call edx
	mov edx,dword ptr [esi]
	lea eax,[eax+edi+0x14]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	add eax,ebx
	push eax
	lea ecx,[esi+0xA8]
	call CUIToolTip::ShowItemToolTip
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	ret 8

 Block3:
	lea ecx,[esi+0xA8]
	call CUIToolTip::ClearToolTip
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	ret 8
}
}
// CItemSpeakerDlg::GetRTTI
__SUB_CLASS_THIS0(001C9E00, __thiscall, 70312,  CItemSpeakerDlg, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CItemSpeakerDlg::ms_RTTI_CItemSpeakerDlg
	ret
}
}
// CItemSpeakerDlg::IsKindOf
__SUB_CLASS_THIS(001C9E20, __thiscall, 70313,  CItemSpeakerDlg, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CItemSpeakerDlg::ms_RTTI_CItemSpeakerDlg
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
// CItemSpeakerDlg::OnButtonClicked
__SUB_CLASS_THIS(001CAB10, __thiscall, 70307,  CItemSpeakerDlg, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	cmp eax,1
	jne Block3

 Block1:
	call CItemSpeakerDlg::_SendConsumeCashItemUseRequest
	test eax,eax
	je Block7

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 1
	mov ecx,esi
	call edx
	pop esi
	ret 4

 Block3:
	cmp eax,2
	jne Block5

 Block4:
	push eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	call edx
	pop esi
	ret 4

 Block5:
	cmp eax,8
	jne Block7

 Block6:
	push eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	call edx

 Block7:
	pop esi
	ret 4
}
}
// CItemSpeakerDlg::OnMouseButton
__SUB_CLASS_THIS(001CB7E0, __thiscall, 70304,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x201
	jne Block5

 Block1:
	cmp dword ptr [ecx+0xA4],0
	je Block5

 Block2:
	mov eax,dword ptr [esp+0x10]
	push esi
	lea esi,[ecx-4]
	mov ecx,dword ptr [esp+0x10]
	push eax
	push ecx
	mov ecx,esi
	call CItemSpeakerDlg::_InItemRect
	test eax,eax
	je Block4

 Block3:
	push 0xFFFFFFFF
	push 0xFFFFFFFF
	mov ecx,esi
	call CItemSpeakerDlg::PutItem

 Block4:
	pop esi

 Block5:
	ret 0x10
}
}
