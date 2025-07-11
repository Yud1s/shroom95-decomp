#include "regen.hpp"
// LoginWnd_Title.ipp
#include "LoginWnd_Title.hpp"

// CLicenseDlg::~CLicenseDlg
_SUB_EXCEPTION_HANDLER(201FB0)
__SUB_CLASS_THIS0(00201FB0, __thiscall, 139411,  CLicenseDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_201FB0
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
	int 3// TODO: 	mov dword ptr [esi],offset CLicenseDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CLicenseDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CLicenseDlg::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xB4]
	mov dword ptr [esp+0x1C],5
	call ZArray<_x_com_ptr<IWzFont>>::RemoveAll
	lea ecx,[esi+0xB0]
	mov byte ptr [esp+0x1C],4
	call ZArray<CT_INFO>::RemoveAll
	lea edi,[esi+0xA8]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0xA0]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0x98]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	mov ecx,esi
	mov dword ptr [TSingleton<CLicenseDlg>::ms_pInstance],ebx
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
// CUITitle::ClearToolTip
__SUB_CLASS_THIS0(001FFAC0, __thiscall, 139385,  IUIMsgHandler, void) {
__asm {

 Block0:
	add ecx,0x158
	jmp  CUIToolTip::ClearToolTip
}
}
// CUITitle::~CUITitle
_SUB_EXCEPTION_HANDLER(1FFAE0)
__SUB_CLASS_THIS0(001FFAE0, __thiscall, 139377,  CUITitle, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1FFAE0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUITitle::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUITitle::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUITitle::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0x15C]
	mov dword ptr [esp+0x1C],0xB
	call CUIToolTip::~CUIToolTip
	lea edi,[esi+0x154]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],0xA
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0x14C]
	mov byte ptr [esp+0x1C],9
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0x144]
	mov byte ptr [esp+0x1C],8
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0x13C]
	mov byte ptr [esp+0x1C],7
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0x134]
	mov byte ptr [esp+0x1C],6
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0x12C]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	lea edi,[esi+0x124]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block14

 Block13:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block14:
	lea edi,[esi+0x11C]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block16

 Block15:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block16:
	lea edi,[esi+0x114]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block18

 Block17:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block18:
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 2
	push 4
	lea eax,[esi+0xFC]
	push eax
	mov byte ptr [esp+0x2C],1
	call __eh_vector_dtor_iterator
	mov ecx,esi
	mov dword ptr [TSingleton<CUITitle>::ms_pInstance],ebx
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CFadeWnd::~CFadeWnd
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
// CLicenseDlg::OnCreate
_SUB_EXCEPTION_HANDLER(201530)
__SUB_CLASS_THIS(00201530, __thiscall, 139412,  CLicenseDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_201530
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xA4
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xB8]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	xor ebp,ebp
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push 0xBFF
	push eax
	mov dword ptr [esp+0x34],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,edi
	call CWnd::SetBackgrnd
	mov ecx,edi
	call CLicenseDlg::LoadFont
	mov dword ptr [esp+0x3C],ebp
	mov dword ptr [esp+0x30],1
	mov dword ptr [esp+0x34],ebp
	mov dword ptr [esp+0x38],ebp
	lea ecx,[esp+0x18]
	push 0xBDB
	push ecx
	mov dword ptr [esp+0xC8],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0xC4],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xC0],0
	cmp eax,ebp
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0xC0],2
	cmp eax,ebp
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0xC0],0
	cmp eax,ebp
	je Block15

 Block6:
	add eax,8
	cmp eax,ebp
	je Block15

 Block7:
	lea esi,[eax-8]
	cmp esi,ebp
	je Block9

 Block8:
	lea edx,[esi+0xC]
	push edx
	call ebx

 Block9:
	mov eax,dword ptr [edi+0x9C]
	mov dword ptr [edi+0x9C],esi
	mov dword ptr [esp+0x24],eax
	cmp eax,ebp
	je Block11

 Block10:
	push ebp
	lea ecx,[esp+0x24]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [edi+0x9C]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x30]
	push edx
	push ebp
	push 0x176
	push 0x10A
	push 1
	push edi
	call eax
	mov eax,dword ptr [edi+0x9C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebp
	call eax
	lea ecx,[esp+0x18]
	push 0xBFE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0xC4],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xC0],0
	cmp eax,ebp
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block13:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0xC0],4
	cmp eax,ebp
	je Block16

 Block14:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block17

 Block15:
	xor esi,esi
	jmp Block9

 Block16:
	xor eax,eax

 Block17:
	mov byte ptr [esp+0xC0],0
	cmp eax,ebp
	je Block25

 Block18:
	add eax,8
	cmp eax,ebp
	je Block25

 Block19:
	lea esi,[eax-8]
	cmp esi,ebp
	je Block21

 Block20:
	lea edx,[esi+0xC]
	push edx
	call ebx

 Block21:
	mov eax,dword ptr [edi+0xA4]
	mov dword ptr [edi+0xA4],esi
	mov dword ptr [esp+0x24],eax
	cmp eax,ebp
	je Block23

 Block22:
	push ebp
	lea ecx,[esp+0x24]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block23:
	mov ecx,dword ptr [edi+0xA4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x30]
	push edx
	push ebp
	push 0x176
	push 0x154
	push 2
	push edi
	call eax
	push 0x14
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebx,7
	cmp eax,ebp
	je Block26

 Block24:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3// TODO: 	mov dword ptr [eax],offset CTextAnalyzer::`vftable'
	mov dword ptr [eax+0x10],0x15E
	mov dword ptr [eax+0xC],ebx
	jmp Block27

 Block25:
	xor esi,esi
	jmp Block21

 Block26:
	xor eax,eax

 Block27:
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0xB4],eax
	cmp eax,ebp
	je Block29

 Block28:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block29:
	mov dword ptr [esp+0x28],ebp
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov byte ptr [esp+0xC0],6
	cmp eax,ebp
	je Block38

 Block30:
	cmp dword ptr [eax+0x2098],ebp
	je Block38

 Block31:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x50]
	push ecx
	call esi
	lea edx,[esp+0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	lea eax,[esp+0x40]
	push eax
	mov byte ptr [esp+0xC4],bl
	mov dword ptr [esp+0x18],1
	call esi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	push 0
	push 0
	lea edx,[esp+0x58]
	push edx
	lea eax,[esp+0x4C]
	push eax
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	mov ebp,8
	push offset _S_STRINGGUESTEULAI
	mov dword ptr [esp+0xD8],ebp
	mov dword ptr [esp+0x2C],3
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov dword ptr [esp+0xD4],9
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	lea ecx,[esp+0xA4]
	push ecx
	mov byte ptr [esp+0xD8],8
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov dword ptr [esp+0xC8],0xA
	jmp Block45

 Block38:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x70]
	push edx
	call esi
	lea eax,[esp+0x70]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	lea ecx,[esp+0x60]
	mov ebp,8
	push ecx
	mov dword ptr [esp+0xC4],0xB
	mov dword ptr [esp+0x18],ebp
	call esi
	lea edx,[esp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	push 0
	push 0
	lea eax,[esp+0x78]
	push eax
	lea ecx,[esp+0x6C]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push 0xC17
	mov ebx,0xC
	push edx
	mov dword ptr [esp+0xDC],ebx
	mov dword ptr [esp+0x30],0x18
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov dword ptr [esp+0xD4],0xD
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	lea eax,[esp+0x94]
	mov byte ptr [esp+0xD4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov dword ptr [esp+0xC8],0xE
	mov ebx,0x38

 Block45:
	mov ecx,eax
	mov dword ptr [esp+0x1C],ebx
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x30],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block48

 Block46:
	cmp eax,0x80004002
	je Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov dword ptr [esp+0xC0],0x10
	test bl,0x20
	je Block53

 Block49:
	and ebx,0xFFFFFFDF
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x80],bp
	jne Block52

 Block50:
	mov eax,dword ptr [esp+0x88]
	xor ecx,ecx
	mov word ptr [esp+0x80],cx
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea edx,[esp+0x80]
	push edx
	call esi

 Block53:
	mov byte ptr [esp+0xC0],0x11
	test bl,0x10
	je Block58

 Block54:
	and ebx,0xFFFFFFEF
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x60],bp
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[esp+0x60]
	push ecx
	call esi

 Block58:
	mov byte ptr [esp+0xC0],0x12
	test bl,8
	je Block63

 Block59:
	and ebx,0xFFFFFFF7
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x70],bp
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x78]
	xor edx,edx
	mov word ptr [esp+0x70],dx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea eax,[esp+0x70]
	push eax
	call esi

 Block63:
	mov byte ptr [esp+0xC0],0x13
	test bl,4
	je Block68

 Block64:
	and ebx,0xFFFFFFFB
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x90],bp
	jne Block67

 Block65:
	mov eax,dword ptr [esp+0x98]
	xor ecx,ecx
	mov word ptr [esp+0x90],cx
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea edx,[esp+0x90]
	push edx
	call esi

 Block68:
	mov byte ptr [esp+0xC0],0x14
	test bl,2
	je Block73

 Block69:
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x40],bp
	jne Block72

 Block70:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea ecx,[esp+0x40]
	push ecx
	call esi

 Block73:
	mov byte ptr [esp+0xC0],0x15
	test bl,1
	je Block78

 Block74:
	cmp word ptr [esp+0x50],bp
	jne Block77

 Block75:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea eax,[esp+0x50]
	push eax
	call esi

 Block78:
	mov ebp,dword ptr [esp+0x2C]
	xor esi,esi
	xor ebx,ebx
	cmp ebp,esi
	je Block36

 Block79:
	mov ecx,dword ptr [ebp]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[esp+0x14]
	push edx
	push ebp
	mov dword ptr [esp+0x1C],esi
	call eax
	cmp eax,esi
	jge Block81

 Block80:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebp
	push eax
	call _com_issue_errorex

 Block81:
	cmp ebx,dword ptr [esp+0x14]
	jae Block99

 Block82:
	lea ecx,[esp+0x20]
	push 0x1A64
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x18],esi
	mov eax,dword ptr [eax]
	push ebx
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0xCC],0x17
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,8
	mov dword ptr [esp+0x18],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	lea eax,[esp+0xA4]
	mov byte ptr [esp+0xC4],0x18
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0xC8],0x17
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [esp+0xC0],0x19
	jne Block84

 Block83:
	mov eax,dword ptr [eax+8]
	jmp Block85

 Block84:
	mov eax,offset _S___3

 Block85:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],esi
	call ZXString<char>::AssignWideStr
	cmp word ptr [esp+0xA0],8
	mov byte ptr [esp+0xC0],0x1B
	jne Block88

 Block86:
	mov eax,dword ptr [esp+0xA8]
	xor ecx,ecx
	mov word ptr [esp+0xA0],cx
	cmp eax,esi
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea edx,[esp+0xA0]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block89:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xC0],0x1C
	cmp eax,esi
	je Block91

 Block90:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block91:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0xC0],0x1D
	cmp eax,esi
	je Block93

 Block92:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block93:
	mov esi,dword ptr [esp+0x14]
	test esi,esi
	je Block95

 Block94:
	mov eax,dword ptr [esi-4]
	jmp Block96

 Block95:
	xor eax,eax

 Block96:
	push eax
	push esi
	lea ecx,[esp+0x30]
	call ZXString<char>::_Cat
	mov byte ptr [esp+0xC0],0x15
	test esi,esi
	je Block98

 Block97:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block98:
	inc ebx
	xor esi,esi
	jmp Block79

 Block99:
	push esi
	push esi
	push esi
	lea eax,[edi+0xB4]
	push eax
	lea ecx,[edi+0xB0]
	push ecx
	push ecx
	mov ecx,esp
	lea edx,[esp+0x40]
	mov dword ptr [esp+0x2C],esp
	push edx
	mov dword ptr [ecx],esi
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x34]
	call CTextAnalyzer::AnalyzeText
	lea ecx,[eax-0x136]
	mov eax,0x92492493
	imul ecx
	add edx,ecx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	lea ecx,[edx+eax-0xF]
	mov dword ptr [edi+0xBC],ecx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xC0],0x1E
	cmp eax,esi
	je Block101

 Block100:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block102

 Block101:
	xor eax,eax

 Block102:
	mov byte ptr [esp+0xC0],0x15
	cmp eax,esi
	je Block120

 Block103:
	add eax,8
	cmp eax,esi
	je Block120

 Block104:
	lea esi,[eax-8]
	test esi,esi
	je Block106

 Block105:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block106:
	mov eax,dword ptr [edi+0xAC]
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	mov dword ptr [edi+0xAC],esi
	test eax,eax
	je Block110

 Block107:
	lea esi,[eax+8]
	lea eax,[esi+4]
	push eax
	call ebp
	test eax,eax
	jne Block110

 Block108:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block110

 Block109:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block110:
	mov ecx,dword ptr [edi+0xAC]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0x13D
	push 0x28
	push 0x186
	push 5
	push 1
	push 0x3E8
	push edi
	call eax
	mov eax,dword ptr [edi+0xBC]
	mov ecx,dword ptr [edi+0xAC]
	xor edx,edx
	cmp eax,1
	setl dl
	inc edx
	add edx,eax
	push edx
	call CCtrlScrollBar::SetScrollRange
	mov eax,dword ptr [edi+0xAC]
	mov dword ptr [eax+0x34],0x163
	mov eax,dword ptr [esp+0xC8]
	mov dword ptr [edi+0x94],eax
	mov eax,dword ptr [TSingleton<CUITitle>::ms_pInstance]
	test eax,eax
	je Block112

 Block111:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x34]
	call eax

 Block112:
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0xC4],6
	call edx
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0xC0],5
	test eax,eax
	je Block114

 Block113:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block114:
	mov edi,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xC0],0
	test edi,edi
	je Block117

 Block115:
	lea esi,[edi+4]
	push esi
	call ebp
	test eax,eax
	jne Block117

 Block116:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block117:
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0xC0],0xFFFFFFFF
	test eax,eax
	je Block119

 Block118:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block119:
	mov ecx,dword ptr [esp+0xB8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xB0
	ret 4

 Block120:
	xor esi,esi
	jmp Block106
}
}
// CLicenseDlg::OnKey
__SUB_CLASS_THIS(001FF5B0, __thiscall, 139414,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x1B
	je Block3

 Block1:
	cmp eax,0xD
	je Block3

 Block2:
	mov dword ptr [esp+4],eax
	jmp  CDialog::OnKey

 Block3:
	ret 8
}
}
// CLicenseDlg::OnChildNotify
__SUB_CLASS_THIS(001FF6B0, __thiscall, 139417,  CLicenseDlg, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	cmp edi,0x3E8
	jne Block7

 Block1:
	cmp ebx,0x12C
	jb Block7

 Block2:
	cmp ebx,0x130
	ja Block7

 Block3:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi+0xAC]
	lea eax,[eax+eax*4]
	mov dword ptr [esi+0xB8],eax
	mov edx,dword ptr [ecx+0x38]
	mov eax,dword ptr [esi+0x9C]
	cmp edx,dword ptr [esi+0xBC]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	jl Block5

 Block4:
	push 1
	jmp Block6

 Block5:
	push 0

 Block6:
	call edx
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect

 Block7:
	cmp ebx,0x64
	jne Block9

 Block8:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	push edi
	mov ecx,esi
	call edx

 Block9:
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CUITitle::OnCreate
_SUB_EXCEPTION_HANDLER(200390)
__SUB_CLASS_THIS(00200390, __thiscall, 139378,  CUITitle, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_200390
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x90
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xA4]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [TSingleton<CConfig>::ms_pInstance]
	xor ebp,ebp
	push ebp
	push offset _S_
	push ebp
	push ebp
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x74],edi
	mov dword ptr [esp+0x2C],ebp
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebp
	lea ecx,[esp+0x20]
	call ZXString<char>::ReleaseBuffer
	push ebp
	push offset _S_
	push ebp
	push ebp
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0xBC],ebp
	mov dword ptr [esp+0x30],ebp
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebp
	lea ecx,[esp+0x24]
	call ZXString<char>::ReleaseBuffer
	mov eax,dword ptr [edi+4]
	mov dword ptr [esi+0xF8],eax
	mov byte ptr [esp+0xAC],1
	cmp dword ptr [edi+4],ebp
	je Block4

 Block1:
	mov eax,dword ptr [edi+8]
	lea ecx,[edi+8]
	cmp eax,ebp
	je Block4

 Block2:
	cmp byte ptr [eax],0
	je Block4

 Block3:
	push ecx
	lea ecx,[esp+0x20]
	call ZXString<char>::op_assign

 Block4:
	mov dword ptr [esp+0x30],ebp
	mov dword ptr [esp+0x24],1
	mov dword ptr [esp+0x28],ebp
	mov dword ptr [esp+0x2C],ebp
	lea ecx,[esp+0x14]
	push 0x56F
	push ecx
	mov byte ptr [esp+0xB4],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0xB0],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xAC],2
	cmp eax,ebp
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xAC],4
	cmp eax,ebp
	je Block8

 Block7:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block9

 Block8:
	xor eax,eax

 Block9:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0xAC],2
	cmp eax,ebp
	je Block19

 Block10:
	add eax,8
	cmp eax,ebp
	je Block19

 Block11:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block13

 Block12:
	lea edx,[edi+0xC]
	push edx
	call ebx

 Block13:
	mov eax,dword ptr [esi+0x118]
	mov dword ptr [esi+0x118],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block15

 Block14:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block15:
	mov ecx,dword ptr [esi+0x118]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x24]
	push edx
	push ebp
	push 0xF
	push 0xB2
	push 0x3E8
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0x571
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0xB0],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xAC],2
	cmp eax,ebp
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
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xAC],6
	cmp eax,ebp
	je Block20

 Block18:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block21

 Block19:
	xor edi,edi
	jmp Block13

 Block20:
	xor eax,eax

 Block21:
	mov byte ptr [esp+0xAC],2
	cmp eax,ebp
	je Block31

 Block22:
	add eax,8
	cmp eax,ebp
	je Block31

 Block23:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block25

 Block24:
	lea edx,[edi+0xC]
	push edx
	call ebx

 Block25:
	mov eax,dword ptr [esi+0x120]
	mov dword ptr [esi+0x120],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block27

 Block26:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block27:
	mov ecx,dword ptr [esi+0x120]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x24]
	push edx
	push ebp
	push 0x44
	push 0x1B
	push 0x3E9
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0x572
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0xB0],7
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xAC],2
	cmp eax,ebp
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block29:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xAC],8
	cmp eax,ebp
	je Block32

 Block30:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block33

 Block31:
	xor edi,edi
	jmp Block25

 Block32:
	xor eax,eax

 Block33:
	mov byte ptr [esp+0xAC],2
	cmp eax,ebp
	je Block43

 Block34:
	add eax,8
	cmp eax,ebp
	je Block43

 Block35:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block37

 Block36:
	lea edx,[edi+0xC]
	push edx
	call ebx

 Block37:
	mov eax,dword ptr [esi+0x128]
	mov dword ptr [esi+0x128],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block39

 Block38:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block39:
	mov ecx,dword ptr [esi+0x128]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x24]
	push edx
	push ebp
	push 0x44
	push 0x63
	push 0x3EA
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0x573
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0xB0],9
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xAC],2
	cmp eax,ebp
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block41:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xAC],0xA
	cmp eax,ebp
	je Block44

 Block42:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block45

 Block43:
	xor edi,edi
	jmp Block37

 Block44:
	xor eax,eax

 Block45:
	mov byte ptr [esp+0xAC],2
	cmp eax,ebp
	je Block55

 Block46:
	add eax,8
	cmp eax,ebp
	je Block55

 Block47:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block49

 Block48:
	lea edx,[edi+0xC]
	push edx
	call ebx

 Block49:
	mov eax,dword ptr [esi+0x130]
	mov dword ptr [esi+0x130],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block51

 Block50:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block51:
	mov ecx,dword ptr [esi+0x130]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x24]
	push edx
	push ebp
	push 0x44
	push 0xAB
	push 0x3EB
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0x574
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0xB0],0xB
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xAC],2
	cmp eax,ebp
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block53:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov ebx,0xC
	mov byte ptr [esp+0xAC],bl
	cmp eax,ebp
	je Block56

 Block54:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block57

 Block55:
	xor edi,edi
	jmp Block49

 Block56:
	xor eax,eax

 Block57:
	mov byte ptr [esp+0xAC],2
	cmp eax,ebp
	je Block67

 Block58:
	add eax,8
	cmp eax,ebp
	je Block67

 Block59:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block61

 Block60:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block61:
	mov eax,dword ptr [esi+0x138]
	mov dword ptr [esi+0x138],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block63

 Block62:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block63:
	mov ecx,dword ptr [esi+0x138]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x24]
	push edx
	push ebp
	push 0x58
	push 0xF
	push 0x3EC
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0x575
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0xB0],0xD
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xAC],2
	cmp eax,ebp
	je Block65

 Block64:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block65:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xAC],0xE
	cmp eax,ebp
	je Block68

 Block66:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block69

 Block67:
	xor edi,edi
	jmp Block61

 Block68:
	xor eax,eax

 Block69:
	mov byte ptr [esp+0xAC],2
	cmp eax,ebp
	je Block79

 Block70:
	add eax,8
	cmp eax,ebp
	je Block79

 Block71:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block73

 Block72:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block73:
	mov eax,dword ptr [esi+0x140]
	mov dword ptr [esi+0x140],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block75

 Block74:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block75:
	mov ecx,dword ptr [esi+0x140]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x24]
	push edx
	push ebp
	push 0x58
	push 0x57
	push 0x3ED
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0x576
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0xB0],0xF
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xAC],2
	cmp eax,ebp
	je Block77

 Block76:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block77:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xAC],0x10
	cmp eax,ebp
	je Block80

 Block78:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block81

 Block79:
	xor edi,edi
	jmp Block73

 Block80:
	xor eax,eax

 Block81:
	mov byte ptr [esp+0xAC],2
	cmp eax,ebp
	je Block89

 Block82:
	add eax,8
	cmp eax,ebp
	je Block89

 Block83:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block85

 Block84:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block85:
	mov eax,dword ptr [esi+0x148]
	mov dword ptr [esi+0x148],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block87

 Block86:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block87:
	mov ecx,dword ptr [esi+0x148]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x24]
	push edx
	push ebp
	push 0x58
	push 0x9F
	push 0x3EE
	push esi
	call eax
	lea ecx,[esp+0x68]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	mov eax,6
	mov ecx,4
	mov dword ptr [esp+0x70],ecx
	mov ecx,eax
	mov dword ptr [esp+0x78],ecx
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0xB0],0x11
	mov dword ptr [esp+0x88],0xFF5D3C1D
	mov dword ptr [esp+0x70],eax
	mov dword ptr [esp+0x78],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xAC],0x12
	cmp eax,ebp
	je Block90

 Block88:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block91

 Block89:
	xor edi,edi
	jmp Block85

 Block90:
	xor eax,eax

 Block91:
	mov byte ptr [esp+0xAC],0x11
	cmp eax,ebp
	je Block101

 Block92:
	add eax,8
	cmp eax,ebp
	je Block101

 Block93:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block95

 Block94:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block95:
	mov eax,dword ptr [esi+0x150]
	mov dword ptr [esi+0x150],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block97

 Block96:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block97:
	lea edx,[esp+0x1C]
	push edx
	lea ecx,[esp+0x6C]
	call ZXString<char>::op_assign
	lea eax,[esp+0x14]
	push 0x179C
	push eax
	mov dword ptr [esp+0xA0],0x100
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0xA4]
	mov byte ptr [esp+0xB0],0x13
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xAC],0x11
	cmp eax,ebp
	je Block99

 Block98:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block99:
	mov ecx,dword ptr [esi+0x150]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x68]
	push eax
	push 0x18
	push 0xA3
	push 0xF
	push 0xE
	push 0x3EF
	push esi
	call edx
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xAC],0x14
	cmp eax,ebp
	je Block102

 Block100:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block103

 Block101:
	xor edi,edi
	jmp Block95

 Block102:
	xor eax,eax

 Block103:
	mov byte ptr [esp+0xAC],0x11
	cmp eax,ebp
	je Block113

 Block104:
	add eax,8
	cmp eax,ebp
	je Block113

 Block105:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block107

 Block106:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block107:
	mov eax,dword ptr [esi+0x158]
	mov dword ptr [esi+0x158],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block109

 Block108:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block109:
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esp+0x6C]
	call ZXString<char>::op_assign
	lea edx,[esp+0x14]
	push 0x179D
	push edx
	mov dword ptr [esp+0x98],1
	mov dword ptr [esp+0xA0],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0xA4]
	mov byte ptr [esp+0xB0],0x15
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xAC],0x11
	cmp eax,ebp
	je Block111

 Block110:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block111:
	mov ecx,dword ptr [esi+0x158]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	lea edx,[esp+0x68]
	push edx
	push 0x18
	push 0xA3
	push 0x29
	push 0xE
	push 0x3F0
	push esi
	call eax
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x34]
	push ecx
	call edi
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block114

 Block112:
	push eax
	call _com_issue_error

 Block113:
	xor edi,edi
	jmp Block107

 Block114:
	lea eax,[esp+0x44]
	push eax
	mov byte ptr [esp+0xB0],0x16
	call edi
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block116

 Block115:
	push eax
	call _com_issue_error

 Block116:
	push ebp
	push ebp
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x50]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x577
	mov bl,0x17
	push ecx
	mov byte ptr [esp+0xC8],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xC0],0x18
	cmp dword ptr [_D_G_RM],ebp
	jne Block118

 Block117:
	push 0x80004003
	call _com_issue_error

 Block118:
	lea edx,[esp+0x68]
	mov byte ptr [esp+0xC0],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xB4],0x19
	call Ztl_variant_t::GetUnknown
	lea ebp,[esi+0xFC]
	push eax
	mov ecx,ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block121

 Block119:
	cmp eax,0x80004002
	je Block121

 Block120:
	push eax
	call _com_issue_error

 Block121:
	cmp word ptr [esp+0x54],8
	mov byte ptr [esp+0xAC],bl
	jne Block124

 Block122:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block125

 Block123:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block125

 Block124:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block125:
	mov ebx,8
	mov byte ptr [esp+0xAC],0x16
	cmp word ptr [esp+0x44],bx
	jne Block128

 Block126:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block129

 Block127:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block129

 Block128:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block129:
	mov byte ptr [esp+0xAC],0x11
	cmp word ptr [esp+0x34],bx
	jne Block132

 Block130:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block133

 Block131:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block133

 Block132:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block133:
	lea eax,[esp+0x44]
	push eax
	call edi
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block135

 Block134:
	push eax
	call _com_issue_error

 Block135:
	lea edx,[esp+0x34]
	mov bl,0x1A
	push edx
	mov byte ptr [esp+0xB0],bl
	call edi
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block137

 Block136:
	push eax
	call _com_issue_error

 Block137:
	push 0
	push 0
	lea ecx,[esp+0x4C]
	push ecx
	lea edx,[esp+0x40]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x578
	push eax
	mov byte ptr [esp+0xC8],0x1B
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xC0],0x1C
	jne Block139

 Block138:
	push 0x80004003
	call _com_issue_error

 Block139:
	lea ecx,[esp+0x68]
	push ecx
	mov byte ptr [esp+0xC4],0x1B
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xB4],0x1D
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x100]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block142

 Block140:
	cmp eax,0x80004002
	je Block142

 Block141:
	push eax
	call _com_issue_error

 Block142:
	mov edi,8
	mov byte ptr [esp+0xAC],0x1B
	cmp word ptr [esp+0x54],di
	jne Block145

 Block143:
	mov eax,dword ptr [esp+0x5C]
	xor edx,edx
	mov word ptr [esp+0x54],dx
	test eax,eax
	je Block146

 Block144:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block146

 Block145:
	lea eax,[esp+0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block146:
	mov byte ptr [esp+0xAC],bl
	cmp word ptr [esp+0x34],di
	jne Block149

 Block147:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block150

 Block148:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block150

 Block149:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block150:
	mov byte ptr [esp+0xAC],0x11
	cmp word ptr [esp+0x44],di
	jne Block153

 Block151:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block154

 Block152:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block154

 Block153:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block154:
	cmp dword ptr [ebp],0
	mov eax,0xF
	mov dword ptr [esi+0x10C],eax
	mov dword ptr [esi+0x104],eax
	mov eax,0x47
	mov dword ptr [esi+0x110],eax
	mov dword ptr [esi+0x108],eax
	sete al
	test al,al
	sete al
	test al,al
	je Block164

 Block155:
	mov edi,dword ptr [ebp]
	xor ebx,ebx
	cmp edi,ebx
	jne Block157

 Block156:
	push 0x80004003
	call _com_issue_error

 Block157:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x14]
	push eax
	push edi
	mov dword ptr [esp+0x1C],ebx
	call ecx
	cmp eax,ebx
	jge Block159

 Block158:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block159:
	mov edx,dword ptr [esp+0x14]
	add dword ptr [esi+0x10C],edx
	mov edi,dword ptr [ebp]
	cmp edi,ebx
	jne Block161

 Block160:
	push 0x80004003
	call _com_issue_error

 Block161:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x14]
	push ecx
	push edi
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block163

 Block162:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block163:
	mov eax,dword ptr [esp+0x14]
	add dword ptr [esi+0x110],eax

 Block164:
	mov ecx,dword ptr [esp+0x64]
	cmp dword ptr [ecx+4],0
	mov edi,dword ptr [esp+0x1C]
	je Block168

 Block165:
	test edi,edi
	je Block168

 Block166:
	cmp byte ptr [edi],0
	je Block168

 Block167:
	mov ecx,dword ptr [esi+0x150]
	push 2
	call CCtrlEdit::MoveCaret
	mov eax,dword ptr [esi+0x158]
	jmp Block169

 Block168:
	mov eax,dword ptr [esi+0x150]

 Block169:
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	mov edx,dword ptr [esp+0xB4]
	lea ecx,[esp+0x68]
	mov dword ptr [esi+0xF4],edx
	mov byte ptr [esp+0xAC],2
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0xAC],1
	test eax,eax
	je Block171

 Block170:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block171:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0xAC],0
	test eax,eax
	je Block173

 Block172:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block173:
	mov dword ptr [esp+0xAC],0xFFFFFFFF
	test edi,edi
	je Block175

 Block174:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block175:
	mov ecx,dword ptr [esp+0xA4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x9C
	ret 4
}
}
// CUITitle::SetRet
_SUB_EXCEPTION_HANDLER(1FFEC0)
__SUB_CLASS_THIS(001FFEC0, __thiscall, 139382,  CUITitle, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1FFEC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	call CUITitle::IsRequestValid
	test eax,eax
	je Block24

 Block1:
	mov eax,dword ptr [esi+0xF4]
	xor ebx,ebx
	cmp dword ptr [eax+0x1A8],ebx
	jne Block24

 Block2:
	mov edi,dword ptr [TSingleton<CConfig>::ms_pInstance]
	mov dword ptr [esp+0x20],ebx
	mov ecx,dword ptr [esi+0x150]
	lea edx,[esp+0x14]
	push edx
	mov dword ptr [esp+0x30],ebx
	call CCtrlEdit::GetText
	mov ecx,dword ptr [esi+0x158]
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0x30],1
	call CCtrlEdit::GetText
	cmp dword ptr [esp+0x34],1
	mov ebp,dword ptr [esp+0x18]
	mov byte ptr [esp+0x2C],2
	jne Block19

 Block3:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block28

 Block4:
	mov eax,dword ptr [eax-4]
	cmp eax,4
	jl Block28

 Block5:
	cmp eax,0x100
	jg Block28

 Block6:
	cmp ebp,ebx
	je Block25

 Block7:
	mov eax,dword ptr [ebp-4]
	cmp eax,5
	jl Block25

 Block8:
	cmp eax,0xC
	jg Block25

 Block9:
	mov eax,dword ptr [esi+0xF8]
	mov dword ptr [edi+4],eax
	cmp eax,ebx
	je Block12

 Block10:
	mov ecx,dword ptr [esi+0x150]
	lea edx,[esp+0x34]
	push edx
	call CCtrlEdit::GetText
	push eax
	lea ecx,[edi+8]
	mov byte ptr [esp+0x30],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x2C],2
	cmp eax,ebx
	je Block13

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block13

 Block12:
	lea ecx,[edi+8]
	call ZXString<char>::Empty

 Block13:
	mov ecx,edi
	call CConfig::SaveGlobal
	mov ecx,dword ptr [esi+0x158]
	lea eax,[esp+0x1C]
	push eax
	call CCtrlEdit::GetText
	mov edi,eax
	mov ecx,dword ptr [esi+0x150]
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x30],4
	call CCtrlEdit::GetText
	mov edi,dword ptr [edi]
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0xF4]
	push edi
	push eax
	mov byte ptr [esp+0x34],5
	call CLogin::SendCheckPasswordPacket
	mov edi,eax
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x2C],4
	cmp eax,ebx
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x2C],2
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	cmp edi,ebx
	je Block19

 Block18:
	push ebx
	mov ecx,esi
	call CUITitle::EnableLoginCtrl

 Block19:
	mov byte ptr [esp+0x2C],1
	cmp ebp,ebx
	je Block22

 Block20:
	add ebp,0xFFFFFFF4
	push ebp

 Block21:
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x2C],bl
	cmp eax,ebx
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 4

 Block25:
	push ebx
	push 3
	call CLoginUtilDlg::Error
	add esp,8
	mov byte ptr [esp+0x2C],1
	cmp ebp,ebx
	je Block27

 Block26:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block27:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x2C],bl
	jmp Block23

 Block28:
	push ebx
	push 0x1C
	call CLoginUtilDlg::Error
	mov eax,dword ptr [esp+0x20]
	add esp,8
	mov byte ptr [esp+0x2C],1
	cmp eax,ebx
	je Block22

 Block29:
	add eax,0xFFFFFFF4
	push eax
	jmp Block21
}
}
// CLicenseDlg::LoadFont
_SUB_EXCEPTION_HANDLER(201130)
__SUB_CLASS_THIS0(00201130, __thiscall, 139411,  CLicenseDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_201130
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
	lea eax,[esp+0x17]
	lea edi,[ecx+0xB4]
	push eax
	push 0xA
	mov ecx,edi
	mov dword ptr [esp+0x20],edi
	call ZArray<_x_com_ptr<IWzFont>>::_Alloc
	xor ebx,ebx
	xor esi,esi

 Block1:
	lea ecx,[esp+0x20]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [edi]
	mov eax,dword ptr [eax]
	push ebx
	add edx,esi
	push edx
	push eax
	mov dword ptr [esp+0x58],ebx
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x2C]
	or ebp,0xFFFFFFFF
	add esp,0xC
	mov dword ptr [esp+0x4C],ebp
	cmp eax,ebx
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block3:
	add esi,4
	cmp esi,0x28
	jl Block1

 Block4:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea edx,[esp+0x24]
	push edx
	push 0xFF000000
	push 0xA
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0x1A25
	mov ebx,1
	push eax
	mov dword ptr [esp+0x64],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x5C],2
	test ecx,ecx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov byte ptr [esp+0x5C],bl
	call IWzFont::Create
	cmp word ptr [esp+0x24],8
	mov dword ptr [esp+0x4C],ebp
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	lea eax,[esp+0x1C]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov ebx,3
	mov dword ptr [esp+0x4C],ebx
	test eax,eax
	je Block14

 Block13:
	mov ebp,dword ptr [eax]
	jmp Block15

 Block14:
	xor ebp,ebp

 Block15:
	mov ecx,8
	mov word ptr [esp+0x34],cx
	test ebp,ebp
	jne Block17

 Block16:
	xor esi,esi
	jmp Block22

 Block17:
	mov eax,ebp
	lea edx,[eax+2]
	lea ebx,[ebx]

 Block18:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block18

 Block19:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea edx,[edi+edi+6]
	push edx
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block21

 Block20:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebp
	push esi
	call _memcpy
	add esp,0xC

 Block21:
	mov edi,dword ptr [esp+0x18]

 Block22:
	mov dword ptr [esp+0x3C],esi
	test esi,esi
	jne Block25

 Block23:
	test ebp,ebp
	je Block25

 Block24:
	push 0x8007000E
	call _com_issue_error

 Block25:
	lea eax,[esp+0x34]
	push eax
	push 0xFF000000
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 0x1A25
	push ecx
	mov byte ptr [esp+0x64],4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,4
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x5C],5
	test eax,eax
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	mov ecx,eax
	mov byte ptr [esp+0x5C],4
	call IWzFont::Create
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x4C],bl
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov esi,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test esi,esi
	je Block40

 Block32:
	lea ecx,[esi+8]
	push ecx
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
	mov dword ptr [esp+0x1C],0

 Block40:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx]
	mov esi,dword ptr [ecx+8]
	cmp esi,eax
	je Block45

 Block41:
	mov dword ptr [ecx+8],eax
	test eax,eax
	je Block43

 Block42:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block43:
	test esi,esi
	je Block45

 Block44:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block45:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+4]
	mov esi,dword ptr [ecx+0xC]
	cmp esi,eax
	je Block50

 Block46:
	mov dword ptr [ecx+0xC],eax
	test eax,eax
	je Block48

 Block47:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block48:
	test esi,esi
	je Block50

 Block49:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block50:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx]
	mov esi,dword ptr [ecx+0x10]
	cmp esi,eax
	je Block55

 Block51:
	mov dword ptr [ecx+0x10],eax
	test eax,eax
	je Block53

 Block52:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block53:
	test esi,esi
	je Block55

 Block54:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block55:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+4]
	mov esi,dword ptr [ecx+0x14]
	cmp esi,eax
	je Block60

 Block56:
	mov dword ptr [ecx+0x14],eax
	test eax,eax
	je Block58

 Block57:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block58:
	test esi,esi
	je Block60

 Block59:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block60:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx]
	mov esi,dword ptr [ecx+0x18]
	cmp esi,eax
	je Block65

 Block61:
	mov dword ptr [ecx+0x18],eax
	test eax,eax
	je Block63

 Block62:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block63:
	test esi,esi
	je Block65

 Block64:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block65:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+4]
	mov esi,dword ptr [ecx+0x1C]
	cmp esi,eax
	je Block70

 Block66:
	mov dword ptr [ecx+0x1C],eax
	test eax,eax
	je Block68

 Block67:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block68:
	test esi,esi
	je Block70

 Block69:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block70:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx]
	mov esi,dword ptr [ecx+0x20]
	cmp esi,eax
	je Block75

 Block71:
	mov dword ptr [ecx+0x20],eax
	test eax,eax
	je Block73

 Block72:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block73:
	test esi,esi
	je Block75

 Block74:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block75:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+4]
	mov esi,dword ptr [ecx+0x24]
	cmp esi,eax
	je Block80

 Block76:
	mov dword ptr [ecx+0x24],eax
	test eax,eax
	je Block78

 Block77:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block78:
	test esi,esi
	je Block80

 Block79:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block80:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret
}
}
// CUITitle::IsRequestValid
__SUB_CLASS_THIS0(001FF530, __thiscall, 139386,  CUITitle, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xF4]
	cmp dword ptr [eax+0x1AC],0
	jne Block3

 Block1:
	cmp dword ptr [eax+0x1A4],0
	jne Block3

 Block2:
	mov eax,1
	ret

 Block3:
	xor eax,eax
	ret
}
}
// CUITitle::CUITitle
_SUB_EXCEPTION_HANDLER(1FF940)
__SUB_CLASS_THIS(001FF940, __thiscall, 139375,  CUITitle, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1FF940
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
	mov esi,ecx
	mov dword ptr [esp+0x18],esi
	call CFadeWnd::_ctor_default
	xor edi,edi
	lea eax,[esi+0xF4]
	mov dword ptr [esp+0x24],edi
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFF0C
	mov dword ptr [TSingleton<CUITitle>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUITitle>::ms_pInstance],edi

 Block3:
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 2
	push 4
	lea eax,[esi+0xFC]
	push eax
	mov byte ptr [esp+0x38],1
	int 3// TODO: 	mov dword ptr [esi],offset CUITitle::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUITitle::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUITitle::`vftable'{for `ZRefCounted'}
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x118],edi
	mov dword ptr [esi+0x120],edi
	mov dword ptr [esi+0x128],edi
	mov dword ptr [esi+0x130],edi
	mov dword ptr [esi+0x138],edi
	mov dword ptr [esi+0x140],edi
	mov dword ptr [esi+0x148],edi
	mov dword ptr [esi+0x150],edi
	mov dword ptr [esi+0x158],edi
	lea ecx,[esi+0x15C]
	mov byte ptr [esp+0x24],0xB
	call CUIToolTip::_ctor_default
	lea ecx,[esi+0x104]
	mov ebp,0xFFFFFFA0
	push ecx
	mov byte ptr [esp+0x28],0xC
	lea ebx,[ebp+0x34]
	call dword ptr [ZImports::_SetRectEmpty]
	push edi
	push edi
	push edi
	push ebx
	push ebp
	push ebx
	push ebp
	push ebx
	push ebp
	push 0xFF
	push 0xFF
	push 0xFF
	mov ecx,esi
	call CFadeWnd::SetOption
	lea edx,[esp+0x14]
	push 0x178B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x2C]
	mov eax,dword ptr [eax]
	push edi
	push 1
	push ecx
	push edi
	push 0xA
	push eax
	push 0x84
	push 0xF3
	mov ecx,esi
	mov byte ptr [esp+0x44],0xD
	call CFadeWnd::CreateFadeWnd
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x24],0xC
	cmp eax,edi
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
	mov eax,esi
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 4
}
}
// CLicenseDlg::HitTest
__SUB_CLASS_THIS(001FF570, __thiscall, 139415,  CLicenseDlg, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+0x10]
	push edi
	mov edi,ecx
	test esi,esi
	jne Block2

 Block1:
	pop edi
	xor eax,eax
	pop esi
	ret 0xC

 Block2:
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [esp+0xC]
	push esi
	push eax
	push ecx
	mov ecx,edi
	call CWnd::HitTest
	test eax,eax
	je Block6

 Block3:
	cmp dword ptr [esi],0
	jne Block6

 Block4:
	cmp dword ptr [edi+0x3C],0
	je Block6

 Block5:
	mov eax,1

 Block6:
	pop edi
	pop esi
	ret 0xC
}
}
// CLicenseDlg::SetRet
__SUB_CLASS_THIS(001FF5D0, __thiscall, 139418,  CLicenseDlg, void, long) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x84],0
	jne Block3

 Block1:
	cmp dword ptr [ecx+0x14],0
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0x80],eax
	mov dword ptr [ecx+0x84],1
	je Block3

 Block2:
	call CWnd::Destroy

 Block3:
	ret 4
}
}
// CUITitle::Draw
_SUB_EXCEPTION_HANDLER(1FF730)
__SUB_CLASS_THIS(001FF730, __thiscall, 139380,  CUITitle, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1FF730
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x34]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea eax,[esp+0x34]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x30],0
	call CWnd::GetCanvas
	mov edi,dword ptr [eax]
	xor ecx,ecx
	cmp dword ptr [esi+0xF8],ecx
	mov byte ptr [esp+0x2C],1
	setne cl
	mov edx,dword ptr [esi+ecx*4+0xFC]
	test edi,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov ebp,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi+0x108]
	mov esi,dword ptr [esi+0x104]
	mov ebx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x28]
	push edx
	mov edx,dword ptr [ebx+0x80]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x30]
	push ecx
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x38]
	push esi
	push edi
	mov dword ptr [eax+0xC],ebp
	call edx
	test eax,eax
	jge Block6

 Block5:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block6:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x2C],0
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	cmp word ptr [esp+0x14],8
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
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
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 4
}
}
// CLicenseDlg::Draw
_SUB_EXCEPTION_HANDLER(2000F0)
__SUB_CLASS_THIS(002000F0, __thiscall, 139416,  CLicenseDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2000F0
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
	mov ebp,ecx
	mov eax,dword ptr [esp+0x70]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebp
	call CWnd::GetCanvas
	xor esi,esi
	mov edx,3
	mov dword ptr [esp+0x68],esi
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],1
	mov ebx,dword ptr [esp+0x18]
	mov byte ptr [esp+0x68],1
	cmp ebx,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea eax,[esp+0x20]
	push eax
	push 0x134
	push 0x161
	push 0x29
	push 0x24
	lea ecx,[esp+0x64]
	push ecx
	mov ecx,ebx
	call IWzCanvas::SetClipRect
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x68],3
	jne Block5

 Block3:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	cmp eax,esi
	je Block6

 Block4:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block6

 Block5:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block6:
	mov dword ptr [esp+0x70],esi
	mov dword ptr [esp+0x14],esi
	jmp Block8

 Block8:
	mov eax,dword ptr [ebp+0xB0]
	test eax,eax
	je Block24

 Block9:
	mov ecx,dword ptr [esp+0x70]
	cmp ecx,dword ptr [eax-4]
	jae Block24

 Block10:
	mov edi,eax
	add edi,dword ptr [esp+0x14]
	mov eax,dword ptr [edi+8]
	mov esi,dword ptr [edi+0x1C]
	lea edx,[eax+eax*4]
	sub esi,edx
	mov eax,esi
	sub eax,dword ptr [ebp+0xB8]
	cmp eax,0xFFFFFFD0
	jl Block22

 Block11:
	cmp eax,0x14E
	jge Block22

 Block12:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block23

 Block13:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x6C],4
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block23

 Block14:
	mov eax,dword ptr [edi+0xC]
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x34]
	push edx
	push eax
	mov eax,dword ptr [edi+0x10]
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x7C],5
	call _xbstr_t::_ctor_0
	sub esi,dword ptr [ebp+0xB8]
	mov eax,dword ptr [edi+0x18]
	add esi,0x29
	push esi
	add eax,0x24
	mov byte ptr [esp+0x7C],6
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0x80],5
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x68],4
	cmp word ptr [esp+0x30],si
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	mov byte ptr [esp+0x68],3
	cmp word ptr [esp+0x40],si
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc dword ptr [esp+0x70]
	add dword ptr [esp+0x14],0x44
	jmp Block8

 Block21:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	inc dword ptr [esp+0x70]
	add dword ptr [esp+0x14],0x44
	jmp Block8

 Block23:
	push eax
	call _com_issue_error

 Block24:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x68],0
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea eax,[esp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret 4
}
}
// CLicenseDlg::CLicenseDlg
_SUB_EXCEPTION_HANDLER(201EC0)
__SUB_CLASS_THIS(00201EC0, __thiscall, 139409,  CLicenseDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_201EC0
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
	call CDialog::_ctor_default
	xor eax,eax
	lea ecx,[esi+0x91]
	mov dword ptr [esp+0x14],eax
	cmp ecx,eax
	je Block2

 Block1:
	add ecx,0xFFFFFF6F
	mov dword ptr [TSingleton<CLicenseDlg>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CLicenseDlg>::ms_pInstance],eax

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CLicenseDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CLicenseDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CLicenseDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x9C],eax
	mov dword ptr [esi+0xA4],eax
	mov dword ptr [esi+0xAC],eax
	mov dword ptr [esi+0xB0],eax
	mov dword ptr [esi+0xB4],eax
	push eax
	mov dword ptr [esi+0xB8],eax
	mov eax,dword ptr [esp+0x20]
	push eax
	push 1
	push 0xD2
	push 0x1AA
	push 0x1AF
	push 0x2F
	push 0xB8
	mov ecx,esi
	mov byte ptr [esp+0x34],6
	mov dword ptr [esi+0xBC],0xFFFFFFFF
	call CDialog::CreateDlg_0
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// CUITitle::ToggleRememberMailAddr
__SUB_CLASS_THIS0(001FF510, __thiscall, 139377,  CUITitle, void) {
__asm {

 Block0:
	xor eax,eax
	cmp dword ptr [ecx+0xF8],eax
	push 0
	sete al
	mov dword ptr [ecx+0xF8],eax
	call CWnd::InvalidateRect
	ret
}
}
// CUITitle::OnMouseMove
__SUB_CLASS_THIS(001FF560, __thiscall, 139384,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	mov eax,1
	ret 8
}
}
// CUITitle::OnButtonClicked
_SUB_EXCEPTION_HANDLER(1FFC90)
__SUB_CLASS_THIS(001FFC90, __thiscall, 139379,  CUITitle, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1FFC90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esp+0x28]
	lea eax,[edi-0x3E8]
	cmp eax,6
	ja Block19

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block4
cmp EAX, 2
je Block6
cmp EAX, 3
je Block9
cmp EAX, 4
je Block12
cmp EAX, 5
je Block15
cmp EAX, 6
je Block18


 Block2:
	call CUITitle::IsRequestValid
	test eax,eax
	je Block26

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 1
	call edx
	jmp Block19

 Block4:
	call CUITitle::IsRequestValid
	test eax,eax
	je Block26

 Block5:
	call CUITitle::ToggleRememberMailAddr
	jmp Block19

 Block6:
	call CUITitle::IsRequestValid
	test eax,eax
	je Block26

 Block7:
	lea eax,[esp+0x28]
	push 1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push eax
	mov dword ptr [esp+0x28],0
	call open_web_site
	mov eax,dword ptr [esp+0x30]
	add esp,8
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block19

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block19

 Block9:
	call CUITitle::IsRequestValid
	test eax,eax
	je Block26

 Block10:
	lea ecx,[esp+0xC]
	push 2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push eax
	mov dword ptr [esp+0x28],1
	call open_web_site
	mov eax,dword ptr [esp+0x14]
	add esp,8
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block19

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block19

 Block12:
	call CUITitle::IsRequestValid
	test eax,eax
	je Block26

 Block13:
	lea edx,[esp+0x10]
	push 0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push eax
	mov dword ptr [esp+0x28],2
	call open_web_site
	mov eax,dword ptr [esp+0x18]
	add esp,8
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block19

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block19

 Block15:
	call CUITitle::IsRequestValid
	test eax,eax
	je Block26

 Block16:
	lea eax,[esp+0x14]
	push 0x1AB9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 0
	push eax
	mov dword ptr [esp+0x28],3
	call open_web_site
	mov eax,dword ptr [esp+0x1C]
	add esp,8
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block19

 Block18:
	push 0
	call PostQuitMessage

 Block19:
	cmp edi,1
	jne Block21

 Block20:
	push edi
	jmp Block25

 Block21:
	cmp edi,2
	jne Block23

 Block22:
	push edi
	jmp Block25

 Block23:
	cmp edi,8
	jne Block26

 Block24:
	push edi

 Block25:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	mov ecx,esi
	call eax

 Block26:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x18
	ret 4
}
}
// CUITitle::OnMouseButton
__SUB_CLASS_THIS(001FF620, __thiscall, 139381,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x202
	mov eax,dword ptr [esp+0xC]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+0x14]
	jne Block3

 Block1:
	push ecx
	push eax
	lea eax,[esi+0x100]
	push eax
	call dword ptr [ZImports::_PtInRect]
	test eax,eax
	je Block3

 Block2:
	lea ecx,[esi-4]
	call CUITitle::ToggleRememberMailAddr

 Block3:
	pop esi
	ret 0x10
}
}
// CUITitle::EnableLoginCtrl
__SUB_CLASS_THIS(001FF660, __thiscall, 139383,  CUITitle, void, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x150]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push edi
	mov edi,dword ptr [esp+0xC]
	push edi
	call edx
	mov eax,dword ptr [esi+0x158]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push edi
	call edx
	mov esi,dword ptr [esi+0x118]
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x1C]
	lea ecx,[esi+4]
	push edi
	call edx
	pop edi
	pop esi
	ret 4
}
}
// CLicenseDlg::OnButtonClicked
_SUB_EXCEPTION_HANDLER(1FF870)
__SUB_CLASS_THIS(001FF870, __thiscall, 139413,  CLicenseDlg, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1FF870
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
	cmp edi,1
	jne Block5

 Block1:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	test eax,eax
	je Block4

 Block2:
	cmp dword ptr [eax+0x2098],0
	je Block4

 Block3:
	mov ecx,dword ptr [TSingleton<CUITitle>::ms_pInstance]
	push edi
	call CUITitle::EnableLoginCtrl
	push 0xB
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0xC]
	push eax
	mov dword ptr [esp+0x28],0
	call CClientSocket::SendPacket
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	push edi
	jmp Block9

 Block4:
	mov ecx,dword ptr [esi+0x94]
	call CLogin::OnAcceptLicense
	push 1
	jmp Block9

 Block5:
	mov ecx,dword ptr [esi+0x94]
	call CLogin::OnDenyLicense
	cmp edi,2
	jne Block7

 Block6:
	push edi
	jmp Block9

 Block7:
	cmp edi,8
	jne Block10

 Block8:
	push edi

 Block9:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	mov ecx,esi
	call eax

 Block10:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4
}
}
