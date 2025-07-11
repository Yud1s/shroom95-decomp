#include "regen.hpp"
// UIEquip.ipp
#include "UIEquip.hpp"

// EqSlotInfo::GetY
__SUB(003A3960, __cdecl, 23511,  long, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	xor ecx,ecx
	cmp eax,3
	ja Block5

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block4
cmp EAX, 3
je Block4


 Block2:
	mov ecx,0x1B
	jmp Block5

 Block3:
	mov ecx,0x25
	jmp Block5

 Block4:
	mov ecx,0x16

 Block5:
	mov edx,dword ptr [esp+4]
	test edx,edx
	jl Block7

 Block6:
	mov eax,edx
	shl eax,5
	add eax,ecx
	add eax,edx
	ret

 Block7:
	mov eax,0x300
	ret
}
}
// CUIPetEquip::IsKindOf
__SUB_CLASS_THIS(003A4A30, __thiscall, 23610,  CUIPetEquip, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIPetEquip::ms_RTTI_CUIPetEquip
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
// CUIMechanicEquip::GetBodyPartFromPoint
__SUB_CLASS_THIS(003A3870, __thiscall, 23532,  CUIMechanicEquip, long, int32_t, int32_t) {
__asm {

 Block0:
	mov edx,dword ptr [esp+8]
	push esi
	mov esi,dword ptr [esp+8]
	xor eax,eax
	jmp Block2

 Block2:
	mov ecx,dword ptr [eax*8+CUIMechanicEquip::ms_aRegion]
	cmp ecx,esi
	jge Block6

 Block3:
	add ecx,0x20
	cmp esi,ecx
	jge Block6

 Block4:
	mov ecx,dword ptr [eax*8+CUIMechanicEquip::ms_aRegion+4]
	cmp ecx,edx
	jge Block6

 Block5:
	add ecx,0x20
	cmp edx,ecx
	jl Block8

 Block6:
	inc eax
	cmp eax,5
	jl Block2

 Block7:
	or eax,0xFFFFFFFF
	pop esi
	ret 8

 Block8:
	add eax,0x44C
	pop esi
	ret 8
}
}
// CUIMechanicEquip::OnMouseButton
_SUB_EXCEPTION_HANDLER(3A56B0)
__SUB_CLASS_THIS(003A56B0, __thiscall, 23529,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A56B0
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
	mov ebx,ecx
	mov dword ptr [esp+0x18],ebx
	cmp dword ptr [esp+0xBC],0x201
	jne Block27

 Block1:
	mov edi,dword ptr [esp+0xC8]
	mov ebp,dword ptr [esp+0xC4]
	push edi
	lea ecx,[ebx-4]
	push ebp
	mov dword ptr [esp+0x1C],ecx
	call CUIMechanicEquip::GetBodyPartFromPoint
	mov esi,eax
	test esi,esi
	jge Block3

 Block2:
	lea ecx,[ebx+0x7C]
	jmp Block26

 Block3:
	mov ebx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [ebx+0x20B8],0
	jne Block27

 Block4:
	mov eax,dword ptr [ebx+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block27

 Block5:
	call get_update_time
	sub eax,dword ptr [ebx+0x20BC]
	cmp eax,0x1F4
	jl Block27

 Block6:
	lea edx,[esp+0x34]
	push edx
	mov ecx,ebx
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	lea ecx,[esp+0x34]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	neg esi
	push esi
	push 1
	lea eax,[esp+0x28]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x3C],esi
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x20]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	xor ebx,ebx
	cmp esi,ebx
	je Block25

 Block7:
	push offset _D_VTMISSING
	lea ecx,[esp+0x70]
	call Ztl_variant_t::_ctor_1
	mov ecx,3
	mov dword ptr [esp+0xB4],ebx
	mov word ptr [esp+0x5C],cx
	mov dword ptr [esp+0x64],ebx
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xB4],1
	cmp ecx,ebx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	lea edx,[esp+0x6C]
	push edx
	lea eax,[esp+0x60]
	push eax
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	lea edx,[esp+0x50]
	push edx
	call IWzGr2D::CreateLayer
	lea ecx,[esp+0x5C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x6C]
	mov byte ptr [esp+0xB4],4
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push ebx
	push ebx
	push eax
	lea eax,[esp+0x28]
	push eax
	call CItemInfo::GetItemIcon
	push offset _D_VTMISSING
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0xB8],5
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x50]
	mov byte ptr [esp+0xB8],6
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x90]
	mov byte ptr [esp+0xB8],7
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x80]
	mov byte ptr [esp+0xB8],8
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0xB8],9
	call Ztl_variant_t::_ctor_1
	mov esi,dword ptr [esp+0x34]
	mov byte ptr [esp+0xB4],0xA
	cmp esi,ebx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea ecx,[esp+0x3C]
	push ecx
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x94]
	push eax
	mov eax,dword ptr [esp+0x28]
	lea ecx,[esp+0x88]
	push ecx
	lea edx,[esp+0x30]
	push edx
	push eax
	lea ecx,[esp+0xB4]
	push ecx
	mov ecx,esi
	call IWzGr2DLayer::InsertCanvas
	lea ecx,[esp+0x9C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x20]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x7C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x8C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x4C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0xB4],5
	call Ztl_variant_t::~Ztl_variant_t
	push 0x80FFFFFF
	mov ecx,esi
	call IWzGr2DLayer::Putcolor
	mov ecx,dword ptr [esp+0x14]
	lea edx,[esp+0x14]
	push edx
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0xB4],0xB
	mov word ptr [esp+0x20],cx
	mov dword ptr [esp+0x28],eax
	cmp eax,ebx
	je Block13

 Block12:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block13:
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0xB8],0xC
	call IWzVector2D::Putorigin
	lea ecx,[esp+0x20]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xB4],5
	cmp eax,ebx
	je Block15

 Block14:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block15:
	push offset _D_VTMISSING
	lea ecx,[esp+0x50]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0xB8],0xD
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xB4],0xE
	cmp ecx,ebx
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x40]
	push eax
	mov ebx,ecx
	call IWzCanvas::Getcy
	sub edi,eax
	add edi,0x10
	push edi
	mov ecx,ebx
	call IWzCanvas::Getcx
	sub ebp,eax
	sub ebp,0x10
	push ebp
	mov ecx,esi
	call IWzVector2D::RelMove
	lea ecx,[esp+0x3C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0xB4],5
	call Ztl_variant_t::~Ztl_variant_t
	push 0x28
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov edi,dword ptr [esp+0x18]
	mov byte ptr [esp+0xB4],0xF
	test eax,eax
	je Block19

 Block18:
	mov ecx,dword ptr [esp+0x30]
	lea edx,[edi-4]
	neg edx
	sbb edx,edx
	and edx,edi
	push edx
	push 0
	push ecx
	push 1
	push esi
	mov ecx,eax
	call CDraggableItem::_ctor_0
	jmp Block20

 Block19:
	xor eax,eax

 Block20:
	lea ecx,[edi-4]
	neg ecx
	sbb ecx,ecx
	push 0
	and ecx,edi
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov byte ptr [esp+0xC0],5
	call CWndMan::BeginDragDrop
	lea edx,[esp+0x14]
	push 0x75E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [esp+0xB8],0x10
	call play_ui_sound
	mov eax,dword ptr [esp+0x18]
	add esp,4
	mov byte ptr [esp+0xB4],5
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block22:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xB4],4
	test eax,eax
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block24:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov dword ptr [esp+0xB8],0xFFFFFFFF
	call ecx

 Block25:
	mov ecx,dword ptr [esp+0x18]
	add ecx,0x7C

 Block26:
	call CUIToolTip::ClearToolTip

 Block27:
	mov ecx,dword ptr [esp+0xAC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA4
	ret 0x10
}
}
// CUIEquip::OnDestroy
__SUB_CLASS_THIS0(003A54C0, __thiscall, 23642,  CUIEquip, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xB18]
	push edi
	test ecx,ecx
	je Block3

 Block1:
	call CWnd::Destroy
	cmp dword ptr [esi+0xB18],0
	lea edi,[esi+0xB14]
	je Block3

 Block2:
	push 0
	mov ecx,edi
	call ZRef<CUIMechanicEquip>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block3:
	mov ecx,dword ptr [esi+0xB20]
	test ecx,ecx
	je Block6

 Block4:
	call CWnd::Destroy
	cmp dword ptr [esi+0xB20],0
	lea edi,[esi+0xB1C]
	je Block6

 Block5:
	push 0
	mov ecx,edi
	call ZRef<CUIDragonEquip>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block6:
	mov ecx,dword ptr [esi+0xB28]
	test ecx,ecx
	je Block9

 Block7:
	call CWnd::Destroy
	cmp dword ptr [esi+0xB28],0
	lea edi,[esi+0xB24]
	je Block9

 Block8:
	push 0
	mov ecx,edi
	call ZRef<CUIPetEquip>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block9:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push esi
	call CWvsContext::RemoveFromStackForTab
	pop edi
	mov ecx,esi
	pop esi
	jmp  CUIWnd::OnDestroy
}
}
// CUIMechanicEquip::OnSetFocus
__SUB_CLASS_THIS(003A3E50, __thiscall, 23530,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUIMechanicEquip::~CUIMechanicEquip
_SUB_EXCEPTION_HANDLER(3A3E80)
__SUB_CLASS_THIS0(003A3E80, __thiscall, 23525,  CUIMechanicEquip, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A3E80
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIMechanicEquip::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIMechanicEquip::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIMechanicEquip::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0x80]
	mov dword ptr [esp+0x14],1
	call CUIToolTip::~CUIToolTip
	mov ecx,esi
	mov dword ptr [TSingleton<CUIMechanicEquip>::ms_pInstance],0
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CWnd::~CWnd
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUIPetEquip::GetPetEquipFromPoint
__SUB_CLASS_THIS(003A39B0, __thiscall, 23607,  CUIPetEquip, long, int32_t, int32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	xor edx,edx
	lea ecx,[ecx]

 Block1:
	lea esi,[edx+1]
	cmp esi,0xE
	je Block4

 Block2:
	cmp esi,0x14
	jle Block52

 Block3:
	cmp esi,0x30
	jg Block52

 Block4:
	mov eax,dword ptr [edx*8+_D_SEQSLOTINFO]
	cmp eax,edi
	jge Block52

 Block5:
	add eax,0x20
	cmp edi,eax
	jge Block52

 Block6:
	mov eax,dword ptr [edx*8+_D_SEQSLOTINFO+4]
	cmp eax,ebx
	jge Block52

 Block7:
	add eax,0x20
	cmp ebx,eax
	jge Block52

 Block8:
	cmp esi,0xE
	jne Block13

 Block9:
	mov eax,dword ptr [ecx+0xAE8]
	sub eax,0
	je Block57

 Block10:
	sub eax,1
	je Block56

 Block11:
	sub eax,1
	jne Block52

 Block12:
	pop edi
	lea eax,[esi+0x18]
	pop esi
	pop ebx
	ret 8

 Block13:
	cmp esi,0x15
	jne Block18

 Block14:
	mov eax,dword ptr [ecx+0xAE8]
	sub eax,0
	je Block59

 Block15:
	sub eax,1
	je Block58

 Block16:
	sub eax,1
	jne Block52

 Block17:
	pop edi
	lea eax,[esi+0x12]
	pop esi
	pop ebx
	ret 8

 Block18:
	cmp esi,0x1D
	jne Block23

 Block19:
	mov eax,dword ptr [ecx+0xAE8]
	sub eax,0
	je Block61

 Block20:
	sub eax,1
	je Block60

 Block21:
	sub eax,1
	jne Block52

 Block22:
	pop edi
	lea eax,[esi+0xB]
	pop esi
	pop ebx
	ret 8

 Block23:
	cmp esi,0x16
	jne Block28

 Block24:
	mov eax,dword ptr [ecx+0xAE8]
	sub eax,0
	je Block63

 Block25:
	sub eax,1
	je Block62

 Block26:
	sub eax,1
	jne Block52

 Block27:
	pop edi
	lea eax,[esi+0x13]
	pop esi
	pop ebx
	ret 8

 Block28:
	cmp esi,0x17
	jne Block33

 Block29:
	mov eax,dword ptr [ecx+0xAE8]
	sub eax,0
	je Block65

 Block30:
	sub eax,1
	je Block64

 Block31:
	sub eax,1
	jne Block52

 Block32:
	pop edi
	lea eax,[esi+0x13]
	pop esi
	pop ebx
	ret 8

 Block33:
	cmp esi,0x1A
	jne Block38

 Block34:
	mov eax,dword ptr [ecx+0xAE8]
	sub eax,0
	je Block67

 Block35:
	sub eax,1
	je Block66

 Block36:
	sub eax,1
	jne Block52

 Block37:
	pop edi
	lea eax,[esi+0x11]
	pop esi
	pop ebx
	ret 8

 Block38:
	cmp esi,0x1B
	jne Block43

 Block39:
	mov eax,dword ptr [ecx+0xAE8]
	sub eax,0
	je Block69

 Block40:
	sub eax,1
	je Block68

 Block41:
	sub eax,1
	jne Block52

 Block42:
	pop edi
	lea eax,[esi+0x11]
	pop esi
	pop ebx
	ret 8

 Block43:
	cmp esi,0x1C
	jne Block48

 Block44:
	mov eax,dword ptr [ecx+0xAE8]
	sub eax,0
	je Block71

 Block45:
	sub eax,1
	je Block70

 Block46:
	sub eax,1
	jne Block52

 Block47:
	pop edi
	lea eax,[esi+0x11]
	pop esi
	pop ebx
	ret 8

 Block48:
	cmp esi,0x2E
	jne Block75

 Block49:
	mov eax,dword ptr [ecx+0xAE8]
	sub eax,0
	je Block74

 Block50:
	sub eax,1
	je Block73

 Block51:
	sub eax,1
	je Block72

 Block52:
	mov edx,esi
	cmp edx,0x32
	jb Block1

 Block53:
	lea eax,[edi-0x2D]
	cmp eax,0x1E
	ja Block76

 Block54:
	lea ecx,[ebx-0x18]
	cmp ecx,0x1E
	ja Block76

 Block55:
	pop edi
	pop esi
	mov eax,0xC8
	pop ebx
	ret 8

 Block56:
	pop edi
	pop esi
	mov eax,0x1E
	pop ebx
	ret 8

 Block57:
	pop edi
	pop esi
	mov eax,0xE
	pop ebx
	ret 8

 Block58:
	pop edi
	pop esi
	mov eax,0x1F
	pop ebx
	ret 8

 Block59:
	pop edi
	pop esi
	mov eax,0x15
	pop ebx
	ret 8

 Block60:
	pop edi
	pop esi
	mov eax,0x20
	pop ebx
	ret 8

 Block61:
	pop edi
	pop esi
	mov eax,0x1D
	pop ebx
	ret 8

 Block62:
	pop edi
	pop esi
	mov eax,0x21
	pop ebx
	ret 8

 Block63:
	pop edi
	pop esi
	mov eax,0x16
	pop ebx
	ret 8

 Block64:
	pop edi
	pop esi
	mov eax,0x22
	pop ebx
	ret 8

 Block65:
	pop edi
	pop esi
	mov eax,0x17
	pop ebx
	ret 8

 Block66:
	pop edi
	pop esi
	mov eax,0x23
	pop ebx
	ret 8

 Block67:
	pop edi
	pop esi
	mov eax,0x1A
	pop ebx
	ret 8

 Block68:
	pop edi
	pop esi
	mov eax,0x24
	pop ebx
	ret 8

 Block69:
	pop edi
	pop esi
	mov eax,0x1B
	pop ebx
	ret 8

 Block70:
	pop edi
	pop esi
	mov eax,0x25
	pop ebx
	ret 8

 Block71:
	pop edi
	pop esi
	mov eax,0x1C
	pop ebx
	ret 8

 Block72:
	pop edi
	pop esi
	mov eax,0x30
	pop ebx
	ret 8

 Block73:
	pop edi
	pop esi
	mov eax,0x2F
	pop ebx
	ret 8

 Block74:
	pop edi
	pop esi
	mov eax,0x2E
	pop ebx
	ret 8

 Block75:
	pop edi
	pop esi
	lea eax,[edx+1]
	pop ebx
	ret 8

 Block76:
	add edi,0xFFFFFF91
	cmp edi,0x1E
	ja Block79

 Block77:
	add ebx,0xFFFFFFE8
	cmp ebx,0x1E
	ja Block79

 Block78:
	pop edi
	pop esi
	mov eax,0xC9
	pop ebx
	ret 8

 Block79:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	ret 8
}
}
// CUIPetEquip::CUIPetEquip
_SUB_EXCEPTION_HANDLER(3A4920)
__SUB_CLASS_THIS(003A4920, __thiscall, 23597,  CUIPetEquip, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A4920
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
	call CWnd::_ctor_default
	xor edi,edi
	lea ecx,[esi+0x80]
	mov dword ptr [esp+0x18],edi
	cmp ecx,edi
	je Block2

 Block1:
	lea eax,[ecx-0x80]
	mov dword ptr [TSingleton<CUIPetEquip>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIPetEquip>::ms_pInstance],edi

 Block3:
	mov byte ptr [esp+0x18],1
	int 3// TODO: 	mov dword ptr [esi],offset CUIPetEquip::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIPetEquip::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIPetEquip::`vftable'{for `ZRefCounted'}
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xACC],edi
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 3
	push 8
	lea ecx,[esi+0xAD0]
	push ecx
	mov byte ptr [esp+0x2C],3
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xAEC],edi
	mov edx,dword ptr [esp+0x24]
	mov eax,dword ptr [esp+0x20]
	push edi
	push 1
	push edi
	push 1
	push 0xA
	push 0xC9
	push 0xA7
	push edx
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x3C],5
	call CWnd::CreateWnd
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
// CUIPetEquip::OnMouseButton
_SUB_EXCEPTION_HANDLER(3A65A0)
__SUB_CLASS_THIS(003A65A0, __thiscall, 23602,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A65A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xB0
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC4]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	cmp dword ptr [esp+0xD4],0x201
	jne Block81

 Block1:
	mov eax,dword ptr [esp+0xE0]
	mov edx,dword ptr [esp+0xDC]
	push eax
	lea ecx,[ebp-4]
	push edx
	call CUIPetEquip::GetPetEquipFromPoint
	mov esi,eax
	test esi,esi
	jne Block3

 Block2:
	lea ecx,[ebp+0x7C]
	call CUIToolTip::ClearToolTip
	jmp Block81

 Block3:
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [edi+0x20B8],0
	jne Block81

 Block4:
	mov eax,dword ptr [edi+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block81

 Block5:
	call get_update_time
	sub eax,dword ptr [edi+0x20BC]
	cmp eax,0x1F4
	jl Block81

 Block6:
	lea edx,[esp+0x80]
	push edx
	mov ecx,edi
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	lea ecx,[esp+0x80]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov eax,0xFFFFFF9C
	sub eax,esi
	push eax
	mov dword ptr [esp+0x30],eax
	push 1
	lea eax,[esp+0x68]
	push eax
	mov ecx,ebx
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x60]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test edi,edi
	jne Block8

 Block7:
	neg esi
	push esi
	push 1
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,ebx
	mov dword ptr [esp+0x38],esi
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x1C]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>

 Block8:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	xor esi,esi
	add esp,8
	cmp eax,esi
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov ecx,3
	mov dword ptr [esp+0xCC],esi
	mov word ptr [esp+0x80],cx
	mov dword ptr [esp+0x88],esi
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xCC],1
	cmp ecx,esi
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x84]
	push eax
	push esi
	push esi
	push esi
	push esi
	push esi
	lea edx,[esp+0xCC]
	push edx
	call IWzGr2D::CreateLayer
	mov ebx,8
	mov byte ptr [esp+0xCC],3
	cmp word ptr [esp+0x80],bx
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x80],ax
	mov eax,dword ptr [esp+0x88]
	cmp eax,esi
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[esp+0x80]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov byte ptr [esp+0xCC],4
	cmp word ptr [esp+0x30],bx
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	cmp eax,esi
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov dword ptr [esp+0x80],esi
	mov byte ptr [esp+0xCC],5
	cmp edi,esi
	je Block39

 Block21:
	push offset _D_VTMISSING
	lea ecx,[esp+0x94]
	call Ztl_variant_t::_ctor_1
	mov ecx,3
	mov word ptr [esp+0x30],cx
	mov dword ptr [esp+0x38],esi
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xCC],7
	cmp ecx,esi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea edx,[esp+0x90]
	push edx
	lea eax,[esp+0x34]
	push eax
	push esi
	push esi
	push esi
	push esi
	push esi
	lea edx,[esp+0x30]
	push edx
	call IWzGr2D::CreateLayer
	lea ecx,[esp+0x30]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x90]
	mov byte ptr [esp+0xCC],0xA
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push esi
	push esi
	push eax
	lea eax,[esp+0x24]
	push eax
	call CItemInfo::GetItemIcon
	mov bl,0xB
	push offset _D_VTMISSING
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0xD0],bl
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0xD0],0xC
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0xA4]
	mov byte ptr [esp+0xD0],0xD
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x64]
	mov byte ptr [esp+0xD0],0xE
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0xD0],0xF
	call Ztl_variant_t::_ctor_1
	mov esi,dword ptr [esp+0x14]
	mov byte ptr [esp+0xCC],0x10
	test esi,esi
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	lea ecx,[esp+0x50]
	push ecx
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0xA8]
	push eax
	mov eax,dword ptr [esp+0x24]
	lea ecx,[esp+0x6C]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	push eax
	lea ecx,[esp+0x88]
	push ecx
	mov ecx,esi
	call IWzGr2DLayer::InsertCanvas
	lea ecx,[esp+0x70]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x1C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x60]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xA0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x40]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x50]
	mov byte ptr [esp+0xCC],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0x80FFFFFF
	mov ecx,esi
	call IWzGr2DLayer::Putcolor
	lea edx,[esp+0x60]
	push edx
	lea ecx,[ebp-4]
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0xCC],0x11
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block27

 Block26:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block27:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0xD0],0x12
	call IWzVector2D::Putorigin
	lea ecx,[esp+0x1C]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0xCC],bl
	test eax,eax
	je Block29

 Block28:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block29:
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0xD0],0x13
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x18]
	mov byte ptr [esp+0xCC],0x14
	test ecx,ecx
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x54]
	push eax
	mov edi,ecx
	call IWzCanvas::Getcy
	mov ecx,dword ptr [esp+0xE8]
	sub ecx,eax
	add ecx,0x10
	push ecx
	mov ecx,edi
	call IWzCanvas::Getcx
	mov edx,dword ptr [esp+0xE8]
	sub edx,eax
	sub edx,0x10
	push edx
	mov ecx,esi
	call IWzVector2D::RelMove
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0xCC],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0x28
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x60],eax
	mov byte ptr [esp+0xCC],0x15
	test eax,eax
	je Block33

 Block32:
	mov ecx,dword ptr [esp+0x2C]
	lea edx,[ebp-4]
	neg edx
	sbb edx,edx
	and edx,ebp
	push edx
	push 0
	push ecx
	push 1
	push esi
	mov ecx,eax
	call CDraggableItem::_ctor_0
	jmp Block34

 Block33:
	xor eax,eax

 Block34:
	lea ecx,[ebp-4]
	neg ecx
	sbb ecx,ecx
	push 0
	and ecx,ebp
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov byte ptr [esp+0xD8],bl
	call CWndMan::BeginDragDrop
	lea edx,[esp+0x60]
	push 0x75E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [esp+0xD0],0x16
	call play_ui_sound
	mov eax,dword ptr [esp+0x64]
	add esp,4
	mov byte ptr [esp+0xCC],bl
	test eax,eax
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block36:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xCC],0xA
	test eax,eax
	je Block38

 Block37:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block38:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0xD0],5
	call ecx
	xor esi,esi

 Block39:
	mov edx,dword ptr [esp+0xE0]
	mov eax,dword ptr [esp+0xDC]
	push edx
	lea edi,[ebp-4]
	push eax
	mov ecx,edi
	call CUIPetEquip::GetPetEquipFromPoint
	cmp eax,0xC8
	jne Block59

 Block40:
	mov ecx,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	cmp dword ptr [ecx+0x3C0],esi
	je Block59

 Block41:
	push offset _D_VTMISSING
	lea ecx,[esp+0x54]
	call Ztl_variant_t::_ctor_1
	mov edx,3
	mov word ptr [esp+0x30],dx
	mov dword ptr [esp+0x38],esi
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xCC],0x18
	cmp ecx,esi
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	lea eax,[esp+0x50]
	push eax
	lea edx,[esp+0x34]
	push edx
	push esi
	push esi
	push esi
	push esi
	push esi
	lea eax,[esp+0x7C]
	push eax
	call IWzGr2D::CreateLayer
	lea ecx,[esp+0x30]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x50]
	mov byte ptr [esp+0xCC],0x1B
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	mov eax,dword ptr [ecx+0x3C0]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push esi
	push esi
	push eax
	lea edx,[esp+0x24]
	push edx
	call CItemInfo::GetItemIcon
	mov bl,0x1C
	push offset _D_VTMISSING
	lea ecx,[esp+0x74]
	mov byte ptr [esp+0xD0],bl
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0xD0],0x1D
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x94]
	mov byte ptr [esp+0xD0],0x1E
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0xA4]
	mov byte ptr [esp+0xD0],0x1F
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0xD0],0x20
	call Ztl_variant_t::_ctor_1
	mov esi,dword ptr [esp+0x60]
	mov byte ptr [esp+0xCC],0x21
	test esi,esi
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	lea eax,[esp+0x70]
	push eax
	lea ecx,[esp+0x20]
	push ecx
	lea edx,[esp+0x98]
	push edx
	mov edx,dword ptr [esp+0x24]
	lea eax,[esp+0xAC]
	push eax
	lea ecx,[esp+0x50]
	push ecx
	push edx
	lea eax,[esp+0xCC]
	push eax
	mov ecx,esi
	call IWzGr2DLayer::InsertCanvas
	lea ecx,[esp+0xB4]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x40]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xA0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x90]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x1C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x70]
	mov byte ptr [esp+0xCC],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0x80FFFFFF
	mov ecx,esi
	call IWzGr2DLayer::Putcolor
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov edx,0xD
	mov byte ptr [esp+0xCC],0x22
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block47

 Block46:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block47:
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xD0],0x23
	call IWzVector2D::Putorigin
	lea ecx,[esp+0x1C]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xCC],bl
	test eax,eax
	je Block49

 Block48:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block49:
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x74]
	mov byte ptr [esp+0xD0],0x24
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x18]
	mov byte ptr [esp+0xCC],0x25
	test ecx,ecx
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	lea eax,[esp+0x40]
	push eax
	lea edx,[esp+0x74]
	push edx
	mov edi,ecx
	call IWzCanvas::Getcy
	mov ecx,dword ptr [esp+0xE8]
	sub ecx,eax
	add ecx,0x10
	push ecx
	mov ecx,edi
	call IWzCanvas::Getcx
	mov edx,dword ptr [esp+0xE8]
	sub edx,eax
	sub edx,0x10
	push edx
	mov ecx,esi
	call IWzVector2D::RelMove
	lea ecx,[esp+0x70]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0xCC],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0x28
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xCC],0x26
	test eax,eax
	je Block53

 Block52:
	mov ecx,dword ptr [esp+0x2C]
	lea edx,[ebp-4]
	neg edx
	sbb edx,edx
	and edx,ebp
	push edx
	push 0
	push ecx
	push 2
	push esi
	mov ecx,eax
	call CDraggableItem::_ctor_0
	jmp Block54

 Block53:
	xor eax,eax

 Block54:
	lea ecx,[ebp-4]
	neg ecx
	sbb ecx,ecx
	push 0
	and ecx,ebp
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov byte ptr [esp+0xD8],bl
	call CWndMan::BeginDragDrop
	lea edx,[esp+0x14]
	push 0x75E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [esp+0xD0],0x27
	call play_ui_sound
	mov eax,dword ptr [esp+0x18]
	add esp,4
	mov byte ptr [esp+0xCC],bl
	test eax,eax
	je Block56

 Block55:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block56:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xCC],0x1B
	test eax,eax
	je Block58

 Block57:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block58:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0xD0],5
	call ecx
	xor esi,esi

 Block59:
	mov edx,dword ptr [esp+0xE0]
	mov eax,dword ptr [esp+0xDC]
	push edx
	lea edi,[ebp-4]
	push eax
	mov ecx,edi
	call CUIPetEquip::GetPetEquipFromPoint
	cmp eax,0xC9
	jne Block79

 Block60:
	mov ecx,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	cmp dword ptr [ecx+0x3C4],esi
	je Block79

 Block61:
	push offset _D_VTMISSING
	lea ecx,[esp+0x74]
	call Ztl_variant_t::_ctor_1
	mov edx,3
	mov word ptr [esp+0x30],dx
	mov dword ptr [esp+0x38],esi
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xCC],0x29
	cmp ecx,esi
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	lea eax,[esp+0x70]
	push eax
	lea edx,[esp+0x34]
	push edx
	push esi
	push esi
	push esi
	push esi
	push esi
	lea eax,[esp+0x7C]
	push eax
	call IWzGr2D::CreateLayer
	lea ecx,[esp+0x30]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x70]
	mov byte ptr [esp+0xCC],0x2C
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	mov eax,dword ptr [ecx+0x3C4]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push esi
	push esi
	push eax
	lea edx,[esp+0x24]
	push edx
	call CItemInfo::GetItemIcon
	mov bl,0x2D
	push offset _D_VTMISSING
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0xD0],bl
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x94]
	mov byte ptr [esp+0xD0],0x2E
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0xA4]
	mov byte ptr [esp+0xD0],0x2F
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0xD0],0x30
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0xD0],0x31
	call Ztl_variant_t::_ctor_1
	mov esi,dword ptr [esp+0x60]
	mov byte ptr [esp+0xCC],0x32
	test esi,esi
	jne Block65

 Block64:
	push 0x80004003
	call _com_issue_error

 Block65:
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x94]
	push ecx
	lea edx,[esp+0xA8]
	push edx
	mov edx,dword ptr [esp+0x24]
	lea eax,[esp+0x4C]
	push eax
	lea ecx,[esp+0x60]
	push ecx
	push edx
	lea eax,[esp+0xCC]
	push eax
	mov ecx,esi
	call IWzGr2DLayer::InsertCanvas
	lea ecx,[esp+0xB4]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x40]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xA0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x90]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xCC],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0x80FFFFFF
	mov ecx,esi
	call IWzGr2DLayer::Putcolor
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov edx,0xD
	mov byte ptr [esp+0xCC],0x33
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block67

 Block66:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block67:
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xD0],0x34
	call IWzVector2D::Putorigin
	lea ecx,[esp+0x1C]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xCC],bl
	test eax,eax
	je Block69

 Block68:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block69:
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0xD0],0x35
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x18]
	mov byte ptr [esp+0xCC],0x36
	test ecx,ecx
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	lea eax,[esp+0x40]
	push eax
	lea edx,[esp+0x54]
	push edx
	mov edi,ecx
	call IWzCanvas::Getcy
	mov ecx,eax
	mov eax,dword ptr [esp+0xE8]
	sub eax,ecx
	add eax,0x10
	push eax
	mov ecx,edi
	call IWzCanvas::Getcx
	mov edx,eax
	mov eax,dword ptr [esp+0xE8]
	sub eax,edx
	sub eax,0x10
	push eax
	mov ecx,esi
	call IWzVector2D::RelMove
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0xCC],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0x28
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xCC],0x37
	test eax,eax
	je Block73

 Block72:
	mov ecx,dword ptr [esp+0x2C]
	lea edx,[ebp-4]
	neg edx
	sbb edx,edx
	and edx,ebp
	push edx
	push 0
	push ecx
	push 2
	push esi
	mov ecx,eax
	call CDraggableItem::_ctor_0
	jmp Block74

 Block73:
	xor eax,eax

 Block74:
	lea ecx,[ebp-4]
	neg ecx
	sbb ecx,ecx
	push 0
	and ecx,ebp
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov byte ptr [esp+0xD8],bl
	call CWndMan::BeginDragDrop
	lea edx,[esp+0x14]
	push 0x75E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [esp+0xD0],0x38
	call play_ui_sound
	mov eax,dword ptr [esp+0x18]
	add esp,4
	mov byte ptr [esp+0xCC],bl
	test eax,eax
	je Block76

 Block75:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block76:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xCC],0x2C
	test eax,eax
	je Block78

 Block77:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block78:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0xD0],5
	call ecx
	xor esi,esi

 Block79:
	lea ecx,[ebp+0x7C]
	call CUIToolTip::ClearToolTip
	mov eax,dword ptr [esp+0xB0]
	mov dword ptr [esp+0xCC],0xFFFFFFFF
	cmp eax,esi
	je Block81

 Block80:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block81:
	mov ecx,dword ptr [esp+0xC4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xBC
	ret 0x10
}
}
// CUIPetEquip::Draw
_SUB_EXCEPTION_HANDLER(3A5FB0)
__SUB_CLASS_THIS(003A5FB0, __thiscall, 23604,  CUIPetEquip, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A5FB0
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
	mov dword ptr [esp+0x1C],ebp
	mov eax,dword ptr [esp+0x50]
	push eax
	call CWnd::Draw
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esp+0x38]
	push edx
	mov dword ptr [esp+0x1C],ecx
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [esp+0x3C]
	mov eax,dword ptr [eax+4]
	xor ebx,ebx
	mov dword ptr [esp+0x50],eax
	cmp esi,ebx
	je Block5

 Block1:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov dword ptr [esp+0x3C],ebx

 Block5:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,ebp
	call CWnd::GetCanvas
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov esi,dword ptr [esp+0x28]
	mov dword ptr [esp+0x48],ebx
	cmp eax,ebx
	je Block31

 Block6:
	mov edx,dword ptr [eax+0x2E44]
	cmp dword ptr [edx+4],ebx
	jne Block16

 Block7:
	cmp esi,ebx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov ecx,dword ptr [_D_SEQSLOTINFO+108]
	mov edx,dword ptr [_D_SEQSLOTINFO+104]
	mov eax,dword ptr [esi]
	mov eax,dword ptr [eax+0x8C]
	push 0x40FF0000
	push 0x20
	push 0x20
	push ecx
	push edx
	push esi
	call eax
	cmp eax,ebx
	jge Block11

 Block10:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block11:
	mov edx,dword ptr [_D_SEQSLOTINFO+164]
	mov eax,dword ptr [_D_SEQSLOTINFO+160]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x8C]
	push 0x40FF0000
	push 0x20
	push 0x20
	push edx
	push eax
	push esi
	call ecx
	cmp eax,ebx
	jge Block13

 Block12:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block13:
	mov eax,dword ptr [_D_SEQSLOTINFO+228]
	mov ecx,dword ptr [_D_SEQSLOTINFO+224]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x8C]
	push 0x40FF0000
	push 0x20
	push 0x20
	push eax
	push ecx
	push esi
	call edx
	cmp eax,ebx
	jge Block15

 Block14:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block15:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]

 Block16:
	cmp eax,ebx
	je Block31

 Block17:
	mov eax,dword ptr [eax+0x2E44]
	mov eax,dword ptr [eax+4]
	cmp eax,ebx
	je Block19

 Block18:
	mov ecx,dword ptr [eax+0x16C]
	push ecx
	add eax,0x164
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	jne Block24

 Block19:
	cmp esi,ebx
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x8C]
	push 0x40FF0000
	push 0x20
	push 0x20
	push 0x17
	push 0x2C
	push esi
	call eax
	cmp eax,ebx
	jge Block23

 Block22:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block23:
	mov ecx,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	push ebx
	call CFuncKeyMappedMan::ChangePetConsumeItemID

 Block24:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edx,dword ptr [ecx+0x2E44]
	mov eax,dword ptr [edx+4]
	cmp eax,ebx
	je Block26

 Block25:
	mov ecx,dword ptr [eax+0x178]
	push ecx
	add eax,0x170
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	jne Block31

 Block26:
	cmp esi,ebx
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x8C]
	push 0x40FF0000
	push 0x20
	push 0x20
	push 0x17
	push 0x6E
	push esi
	call eax
	cmp eax,ebx
	jge Block30

 Block29:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block30:
	mov ecx,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	push ebx
	call CFuncKeyMappedMan::ChangePetConsumeMPItemID

 Block31:
	mov ebx,1
	jmp Block33

 Block32:
	mov ebp,dword ptr [esp+0x1C]

 Block33:
	cmp ebx,0xE
	je Block36

 Block34:
	cmp ebx,0x14
	jle Block63

 Block35:
	cmp ebx,0x30
	jg Block63

 Block36:
	cmp ebx,0x18
	je Block51

 Block37:
	cmp ebx,0x19
	je Block51

 Block38:
	cmp ebx,0xE
	je Block42

 Block39:
	cmp ebx,0x15
	jl Block41

 Block40:
	cmp ebx,0x1D
	jle Block42

 Block41:
	cmp ebx,0x2E
	jne Block43

 Block42:
	cmp dword ptr [ebp+0xAE8],0
	jne Block63

 Block43:
	cmp ebx,0x1E
	jl Block45

 Block44:
	cmp ebx,0x25
	jle Block46

 Block45:
	cmp ebx,0x2F
	jne Block47

 Block46:
	cmp dword ptr [ebp+0xAE8],1
	jne Block63

 Block47:
	cmp ebx,0x26
	jl Block49

 Block48:
	cmp ebx,0x2D
	jle Block50

 Block49:
	cmp ebx,0x30
	jne Block51

 Block50:
	cmp dword ptr [ebp+0xAE8],2
	jne Block63

 Block51:
	mov eax,dword ptr [esp+0x50]
	mov edi,dword ptr [eax+ebx*8+0xFD]
	mov eax,dword ptr [eax+ebx*8+0x2DD]
	test eax,eax
	je Block55

 Block52:
	mov edx,dword ptr [esp+0x18]
	xor ecx,ecx
	cmp dword ptr [edx+ebx*8+0x3A54],ecx
	mov edi,eax
	setne cl
	mov ebp,ecx
	cmp ebp,1
	je Block56

 Block53:
	cmp ebx,0xE
	jne Block56

 Block54:
	lea ebp,[ebx-0xD]
	jmp Block56

 Block55:
	mov ecx,dword ptr [esp+0x18]
	xor eax,eax
	cmp dword ptr [ecx+ebx*8+0x3874],eax
	setne al
	mov ebp,eax

 Block56:
	test edi,edi
	je Block63

 Block57:
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	mov edx,dword ptr [edi]
	push 2
	push 0
	push 0
	push 0
	push 0
	mov dword ptr [esp+0x38],eax
	mov eax,dword ptr [edx+4]
	push 0
	mov ecx,edi
	call eax
	mov ecx,dword ptr [ebx*8+CUIEnchantDlg::ms_RTTI_CUIEnchantDlg]
	mov edx,dword ptr [ebx*8+CUIDragonBox::ms_RTTI_CUIDragonBox]
	push eax
	mov eax,dword ptr [esp+0x40]
	add ecx,0x20
	push ecx
	push edx
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x58],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block59

 Block58:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block59:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	test ebp,ebp
	jne Block63

 Block60:
	test esi,esi
	je Block8

 Block61:
	mov eax,dword ptr [ebx*8+CUIEnchantDlg::ms_RTTI_CUIEnchantDlg]
	mov ecx,dword ptr [ebx*8+CUIDragonBox::ms_RTTI_CUIDragonBox]
	mov edx,dword ptr [esi]
	push 0x40FF0000
	push 0x20
	push 0x20
	push eax
	mov eax,dword ptr [edx+0x8C]
	push ecx
	push esi
	call eax
	test eax,eax
	jge Block63

 Block62:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block63:
	inc ebx
	cmp ebx,0x3B
	jle Block32

 Block64:
	mov ecx,dword ptr [esp+0x50]
	mov eax,dword ptr [ecx+0x509]
	test eax,eax
	je Block66

 Block65:
	mov eax,dword ptr [eax-4]

 Block66:
	xor edi,edi
	lea edx,[eax-1]
	mov eax,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	mov ecx,dword ptr [eax+0x3C0]
	mov ebp,dword ptr [eax+0x3C4]
	lea ebx,[edi+1]
	cmp edx,ebx
	mov dword ptr [esp+0x2C],edx
	mov dword ptr [esp+0x24],ecx
	mov dword ptr [esp+0x20],ebp
	mov dword ptr [esp+0x14],edi
	mov dword ptr [esp+0x18],edi
	jl Block82

 Block67:
	lea ecx,[ecx]

 Block68:
	mov ecx,dword ptr [esp+0x50]
	push ebx
	push 2
	lea edx,[esp+0x38]
	push edx
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block73

 Block69:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block72

 Block70:
	mov eax,dword ptr [esp+0x34]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x34]
	test ecx,ecx
	je Block72

 Block71:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block72:
	mov dword ptr [esp+0x34],0

 Block73:
	test edi,edi
	je Block80

 Block74:
	lea ebp,[edi+0xC]
	mov ecx,ebp
	call TSecType<long>::GetData
	cmp eax,dword ptr [esp+0x24]
	jne Block77

 Block75:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	mov ecx,edi
	call eax
	test eax,eax
	jne Block77

 Block76:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x20]
	mov ecx,edi
	call eax
	add dword ptr [esp+0x14],eax

 Block77:
	mov ecx,ebp
	call TSecType<long>::GetData
	cmp eax,dword ptr [esp+0x20]
	jne Block80

 Block78:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	mov ecx,edi
	call eax
	test eax,eax
	jne Block80

 Block79:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x20]
	mov ecx,edi
	call eax
	add dword ptr [esp+0x18],eax

 Block80:
	inc ebx
	cmp ebx,dword ptr [esp+0x2C]
	jle Block68

 Block81:
	mov edi,dword ptr [esp+0x14]
	mov ebp,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x24]

 Block82:
	test ecx,ecx
	je Block91

 Block83:
	push 2
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0x37
	push 0x2C
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x7C],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block85

 Block84:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block85:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	test edi,edi
	jl Block91

 Block86:
	mov eax,dword ptr [esp+0x1C]
	mov eax,dword ptr [eax+0xAEC]
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x58],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block88

 Block87:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block88:
	push edi
	push 0x2B
	push 0x2C
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x68],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block90

 Block89:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block90:
	call draw_number_by_image
	add esp,0x18

 Block91:
	test ebp,ebp
	je Block100

 Block92:
	push 2
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0x37
	push 0x6E
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x7C],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block94

 Block93:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block94:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov edi,dword ptr [esp+0x18]
	test edi,edi
	jl Block100

 Block95:
	mov edx,dword ptr [esp+0x1C]
	mov eax,dword ptr [edx+0xAEC]
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x58],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block97

 Block96:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block97:
	push edi
	push 0x2B
	push 0x6E
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x68],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block99

 Block98:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block99:
	call draw_number_by_image
	add esp,0x18

 Block100:
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test esi,esi
	je Block102

 Block101:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block102:
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
// CUIEquip::OnButtonClicked
__SUB_CLASS_THIS(003A7E50, __thiscall, 23646,  CUIEquip, void, uint32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	lea eax,[edi-0xBB8]
	mov esi,ecx
	cmp eax,3
	ja Block6

 Block1:
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block4
cmp EAX, 2
je Block2
cmp EAX, 3
je Block5


 Block2:
	call CUIEquip::TogglePetEquip
	pop edi
	pop esi
	ret 4

 Block3:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	pop edi
	mov dword ptr [eax+0x40CC],0x2FDFDF4
	pop esi
	mov dword ptr [esp+4],0
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	jmp  CWvsContext::SendMigrateToShopRequest

 Block4:
	call CUIEquip::ToggleDragonEquip
	pop edi
	pop esi
	ret 4

 Block5:
	call CUIEquip::ToggleMechanicEquip

 Block6:
	push edi
	mov ecx,esi
	call CUIWnd::OnButtonClicked
	pop edi
	pop esi
	ret 4
}
}
// CUIEquip::Draw
_SUB_EXCEPTION_HANDLER(3AA560)
__SUB_CLASS_THIS(003AA560, __thiscall, 23648,  CUIEquip, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3AA560
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
	mov dword ptr [esp+0x14],ecx
	mov eax,dword ptr [esp+0x68]
	push eax
	call CWnd::Draw
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,esi
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block5

 Block1:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block4

 Block3:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block4:
	mov dword ptr [esp+0x4C],0

 Block5:
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,dword ptr [esp+0x18]
	call CWnd::GetCanvas
	mov eax,dword ptr [esi+0x38CC]
	mov ebx,dword ptr [esp+0x38]
	lea edi,[esi+0x3870]
	add esi,0x3A50
	mov dword ptr [esp+0x2C],esi
	mov esi,dword ptr [edi+0x54]
	mov dword ptr [esp+0x60],0
	test eax,eax
	je Block11

 Block6:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x14F8B589
	imul ecx
	sar edx,0xD
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xE
	jne Block11

 Block7:
	test esi,esi
	jne Block11

 Block8:
	push 0xA
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x70],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+4]
	push ebx
	call edx

 Block10:
	mov ecx,dword ptr [esp+0x1C]
	add ecx,0xB3C
	call CUIEquip::CExpandableWndInfo::SetSlotDisable_1

 Block11:
	mov ecx,dword ptr [esp+0x2C]
	mov eax,dword ptr [ecx+0x2C]
	test eax,eax
	jne Block13

 Block12:
	mov eax,dword ptr [edi+0x2C]

 Block13:
	mov esi,dword ptr [ecx+0x34]
	test esi,esi
	jne Block15

 Block14:
	mov esi,dword ptr [edi+0x34]

 Block15:
	test eax,eax
	je Block21

 Block16:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x69
	jne Block21

 Block17:
	test esi,esi
	jne Block21

 Block18:
	push 6
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x70],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block20

 Block19:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+4]
	push ebx
	call edx

 Block20:
	mov ecx,dword ptr [esp+0x1C]
	add ecx,0xB3C
	call CUIEquip::CExpandableWndInfo::SetSlotDisable_1

 Block21:
	cmp dword ptr [TSingleton<CSkillInfo>::ms_pInstance],0
	je Block30

 Block22:
	mov eax,dword ptr [ebp+0x3D]
	push eax
	lea ecx,[ebp+0x39]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	add esp,8
	movsx edx,ax
	push 0
	push edx
	push 0x3EC
	call get_novice_skill_as_race
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	add esp,8
	push eax
	push ebp
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jne Block30

 Block23:
	push 0x12
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x70],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block25

 Block24:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+4]
	push ebx
	call ecx

 Block25:
	mov esi,dword ptr [esp+0x1C]
	add esi,0xB3C
	mov ecx,esi
	call CUIEquip::CExpandableWndInfo::SetSlotDisable_1
	push 0x13
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x70],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block27

 Block26:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+4]
	push ebx
	call eax

 Block27:
	mov ecx,esi
	call CUIEquip::CExpandableWndInfo::SetSlotDisable_1
	push 0x14
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x70],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block29

 Block28:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+4]
	push ebx
	call edx

 Block29:
	mov ecx,esi
	call CUIEquip::CExpandableWndInfo::SetSlotDisable_1

 Block30:
	mov eax,dword ptr [ebp+0x3D]
	push eax
	lea esi,[ebp+0x39]
	push esi
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx ecx,ax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov ecx,edx
	shr ecx,0x1F
	add esp,8
	add ecx,edx
	jne Block36

 Block31:
	cmp word ptr [ebp+0xF7],1
	jne Block36

 Block32:
	mov edx,dword ptr [ebp+0x3D]
	push edx
	push esi
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx ecx,ax
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,8
	cmp eax,0x2B
	je Block36

 Block33:
	push 0xA
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x70],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block35

 Block34:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+4]
	push ebx
	call edx

 Block35:
	mov ecx,dword ptr [esp+0x1C]
	add ecx,0xB3C
	call CUIEquip::CExpandableWndInfo::SetSlotDisable_1

 Block36:
	call Util::FTGetNow
	mov dword ptr [esp+0x50],eax
	mov eax,dword ptr [esp+0x14]
	xor ecx,ecx
	add eax,0xB3C
	cmp dword ptr [eax],ecx
	mov dword ptr [esp+0x54],edx
	setne cl
	add ecx,0x3A
	cmp ecx,1
	jl Block84

 Block37:
	mov eax,dword ptr [esp+0x2C]
	add ebp,0x2E5
	lea edx,[edi+0xC]
	sub eax,edi
	mov dword ptr [esp+0x68],0
	mov dword ptr [esp+0x20],offset CUIEquip::CExpandableWndInfo::m_sEqSlotInfo
	mov dword ptr [esp+0x1C],edx
	mov dword ptr [esp+0x18],ebp
	mov dword ptr [esp+0x3C],eax

 Block38:
	mov eax,dword ptr [esp+0x68]
	inc eax
	mov dword ptr [esp+0x24],eax
	cmp eax,0xE
	je Block83

 Block39:
	cmp eax,0x14
	jle Block41

 Block40:
	cmp eax,0x30
	jle Block83

 Block41:
	mov eax,dword ptr [esp+0x18]
	mov edx,dword ptr [esp+0x68]
	add edx,0xFFFFFFC6
	mov ecx,dword ptr [eax-0x1E0]
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x2C],ecx
	jne Block43

 Block42:
	mov ecx,dword ptr [esp+0x18]
	lea eax,[esp+0x50]
	push eax
	add ecx,0x64
	push ecx
	call dword ptr [ZImports::_CompareFileTime]
	mov dword ptr [esp+0x28],1
	test eax,eax
	jl Block44

 Block43:
	mov dword ptr [esp+0x28],0

 Block44:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	test esi,esi
	je Block46

 Block45:
	mov ecx,dword ptr [esp+0x3C]
	cmp dword ptr [ecx+eax],edx
	jmp Block47

 Block46:
	mov esi,dword ptr [esp+0x2C]
	cmp dword ptr [eax],0

 Block47:
	setne dl
	mov dword ptr [esp+0x30],edx
	test esi,esi
	jne Block52

 Block48:
	cmp dword ptr [esp+0x28],esi
	je Block83

 Block49:
	mov ecx,dword ptr [esp+0x24]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x70],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block51

 Block50:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+4]
	push ebx
	call eax

 Block51:
	mov ecx,dword ptr [esp+0x1C]
	add ecx,0xB3C
	jmp Block82

 Block52:
	sub esp,8
	mov eax,esp
	lea ecx,[esi+4]
	mov dword ptr [esp+0x3C],esp
	push ecx
	mov dword ptr [eax+4],esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::CalcEquipItemQuality
	mov edi,eax
	mov eax,dword ptr [esp+0x14]
	add eax,0xB3C
	mov dword ptr [esp+0x34],eax
	mov eax,dword ptr [eax]
	test eax,eax
	jne Block55

 Block53:
	cmp dword ptr [esp+0x68],0x3A
	jl Block55

 Block54:
	mov ebp,dword ptr [esp+0x20]
	mov ecx,offset CUIEquip::CExpandableWndInfo::m_sEqSlotInfo+456
	jmp Block56

 Block55:
	mov ebp,dword ptr [esp+0x20]
	mov ecx,ebp

 Block56:
	mov edx,dword ptr [ecx+4]
	add edx,0x20
	push edx
	mov edx,dword ptr [esp+0x6C]
	test eax,eax
	jne Block58

 Block57:
	cmp edx,0x3A
	mov ecx,offset CUIEquip::CExpandableWndInfo::m_sEqSlotInfo+456
	jge Block59

 Block58:
	mov ecx,ebp

 Block59:
	mov ecx,dword ptr [ecx]
	add ecx,0x20
	push ecx
	test eax,eax
	jne Block61

 Block60:
	cmp edx,0x3A
	mov ecx,offset CUIEquip::CExpandableWndInfo::m_sEqSlotInfo+456
	jge Block62

 Block61:
	mov ecx,ebp

 Block62:
	mov ecx,dword ptr [ecx+4]
	push ecx
	test eax,eax
	jne Block64

 Block63:
	cmp edx,0x3A
	mov eax,offset CUIEquip::CExpandableWndInfo::m_sEqSlotInfo+456
	jge Block65

 Block64:
	mov eax,ebp

 Block65:
	mov edx,dword ptr [eax]
	push edx
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x58],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block67

 Block66:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+4]
	push ebx
	call ecx

 Block67:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawGradeFrame
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push 2
	push 1
	push edi
	push 0
	push 0
	push 0
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x4C]
	push eax
	mov eax,dword ptr [ecx]
	test eax,eax
	jne Block69

 Block68:
	cmp dword ptr [esp+0x84],0x3A
	mov ecx,offset CUIEquip::CExpandableWndInfo::m_sEqSlotInfo+456
	jge Block70

 Block69:
	mov ecx,ebp

 Block70:
	mov edx,dword ptr [ecx+4]
	add edx,0x20
	push edx
	test eax,eax
	jne Block72

 Block71:
	cmp dword ptr [esp+0x88],0x3A
	mov eax,offset CUIEquip::CExpandableWndInfo::m_sEqSlotInfo+456
	jge Block73

 Block72:
	mov eax,ebp

 Block73:
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x94],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block75

 Block74:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+4]
	push ebx
	call edx

 Block75:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	cmp dword ptr [esp+0x30],0
	je Block79

 Block76:
	cmp dword ptr [esp+0x28],0
	jne Block79

 Block77:
	cmp dword ptr [esp+0x2C],0
	je Block83

 Block78:
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [eax+0xF5]
	push ecx
	add eax,0xED
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block83

 Block79:
	mov edx,dword ptr [esp+0x24]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x70],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block81

 Block80:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+4]
	push ebx
	call ecx

 Block81:
	mov ecx,dword ptr [esp+0x3C]

 Block82:
	call CUIEquip::CExpandableWndInfo::SetSlotDisable_1

 Block83:
	mov esi,dword ptr [esp+0x14]
	mov eax,8
	add dword ptr [esp+0x18],eax
	add dword ptr [esp+0x1C],eax
	add dword ptr [esp+0x20],eax
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	add esi,0xB3C
	cmp dword ptr [esi],edx
	mov dword ptr [esp+0x68],eax
	setne dl
	inc eax
	add edx,0x3A
	cmp eax,edx
	jle Block38

 Block84:
	mov eax,dword ptr [esp+0x14]
	cmp dword ptr [eax+0xB58],0
	je Block91

 Block85:
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block90

 Block86:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block89

 Block87:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block89

 Block88:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block89:
	mov dword ptr [esp+0x44],0

 Block90:
	mov ecx,dword ptr [ebx+0x35]
	push ecx
	add ebx,0x33
	push ebx
	call _ZtlSecureFuseHelper<unsigned char>::call
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [edx+0xB58]
	mov edx,dword ptr [ecx+4]
	add esp,8
	cmp al,0x32
	sbb eax,eax
	inc eax
	add ecx,4
	push eax
	mov eax,dword ptr [edx+0x1C]
	call eax
	mov ebx,dword ptr [esp+0x38]

 Block91:
	mov dword ptr [esp+0x60],0xFFFFFFFF
	test ebx,ebx
	je Block93

 Block92:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block93:
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret 4
}
}
// CUIEquip::GetBodyPartFromPoint
__SUB_CLASS_THIS(003A3CE0, __thiscall, 23650,  CUIEquip, long, int32_t, int32_t) {
__asm {

 Block0:
	push ecx
	mov ecx,dword ptr [ecx+0xB3C]
	xor eax,eax
	xor edx,edx
	test ecx,ecx
	setne al
	push ebx
	push ebp
	push esi
	push edi
	mov dword ptr [esp+0x10],ecx
	add eax,0x3A
	mov esi,eax
	test esi,esi
	jle Block12

 Block1:
	mov ebx,dword ptr [esp+0x1C]
	mov ebp,dword ptr [esp+0x18]
	mov edi,offset CUIEquip::CExpandableWndInfo::m_sEqSlotInfo
	mov edi,edi

 Block2:
	test ecx,ecx
	jne Block4

 Block3:
	cmp edx,0x3A
	mov eax,offset CUIEquip::CExpandableWndInfo::m_sEqSlotInfo+456
	jge Block5

 Block4:
	mov eax,edi

 Block5:
	mov ecx,dword ptr [eax]
	cmp ecx,ebp
	jge Block9

 Block6:
	add ecx,0x20
	cmp ebp,ecx
	jge Block9

 Block7:
	mov eax,dword ptr [eax+4]
	cmp eax,ebx
	jge Block9

 Block8:
	add eax,0x20
	cmp ebx,eax
	jl Block11

 Block9:
	inc edx
	add edi,8
	cmp edx,esi
	jge Block12

 Block10:
	mov ecx,dword ptr [esp+0x10]
	jmp Block2

 Block11:
	pop edi
	pop esi
	pop ebp
	lea eax,[edx+1]
	pop ebx
	pop ecx
	ret 8

 Block12:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	pop ecx
	ret 8
}
}
// CUIEquip::ToggleMechanicEquip
_SUB_EXCEPTION_HANDLER(3A7AF0)
__SUB_CLASS_THIS0(003A7AF0, __thiscall, 23642,  CUIEquip, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A7AF0
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
	mov edi,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x18]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block5

 Block1:
	lea esi,[eax-0x10]
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov dword ptr [esp+0x1C],0

 Block5:
	mov ecx,dword ptr [ebp+0x35]
	push ecx
	add ebp,0x33
	push ebp
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	cmp al,0x32
	jb Block13

 Block6:
	mov ecx,dword ptr [edi+0xB18]
	test ecx,ecx
	je Block9

 Block7:
	call CWnd::Destroy
	cmp dword ptr [edi+0xB18],0
	lea esi,[edi+0xB14]
	je Block13

 Block8:
	push 0
	mov ecx,esi
	call ZRef<CUIMechanicEquip>::_ReleaseRaw
	mov dword ptr [esi+4],0
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret

 Block9:
	push 0xAC8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebx,eax
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x28],0
	test ebx,ebx
	je Block11

 Block10:
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [edx+0x30]
	lea esi,[edi+4]
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	sub eax,0x97
	push eax
	mov ecx,ebx
	call CUIMechanicEquip::_ctor_0
	jmp Block12

 Block11:
	xor eax,eax

 Block12:
	push eax
	lea ecx,[edi+0xB14]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call ZRef<CUIMechanicEquip>::op_assign_ptr

 Block13:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret
}
}
// CUIEquip::ToggleDragonEquip
_SUB_EXCEPTION_HANDLER(3A7C40)
__SUB_CLASS_THIS0(003A7C40, __thiscall, 23642,  CUIEquip, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A7C40
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
	mov edi,ecx
	mov ecx,dword ptr [edi+0xB20]
	test ecx,ecx
	je Block3

 Block1:
	call CWnd::Destroy
	cmp dword ptr [edi+0xB20],0
	lea esi,[edi+0xB1C]
	je Block7

 Block2:
	push 0
	mov ecx,esi
	call ZRef<CUIDragonEquip>::_ReleaseRaw
	mov dword ptr [esi+4],0
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret

 Block3:
	push 0xAC8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebx,eax
	mov dword ptr [esp+0x10],ebx
	mov dword ptr [esp+0x1C],0
	test ebx,ebx
	je Block5

 Block4:
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [eax+0x30]
	lea esi,[edi+4]
	mov ecx,esi
	call edx
	push eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	sub eax,0x97
	push eax
	mov ecx,ebx
	call CUIDragonEquip::_ctor_0
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	push eax
	lea ecx,[edi+0xB1C]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZRef<CUIDragonEquip>::op_assign_ptr

 Block7:
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
// CUIEquip::TogglePetEquip
_SUB_EXCEPTION_HANDLER(3A43B0)
__SUB_CLASS_THIS0(003A43B0, __thiscall, 23642,  CUIEquip, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A43B0
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
	mov dword ptr [esp+0x1C],ecx
	mov ecx,dword ptr [ecx+0xB28]
	xor edi,edi
	cmp ecx,edi
	je Block64

 Block1:
	lea eax,[esp+0x20]
	push eax
	call CWnd::GetLayer
	mov ebp,dword ptr [esp+0x20]
	mov dword ptr [esp+0x64],edi
	cmp ebp,edi
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,ebp
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x64],1
	cmp esi,edi
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x68]
	lea eax,[esp+0x18]
	push eax
	push esi
	mov dword ptr [esp+0x20],edi
	call ecx
	cmp eax,edi
	jge Block7

 Block6:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block7:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x64],0
	cmp eax,edi
	je Block9

 Block8:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block9:
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,ebp
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x64],2
	cmp esi,edi
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x70]
	lea eax,[esp+0x14]
	push eax
	push esi
	mov dword ptr [esp+0x1C],edi
	call ecx
	cmp eax,edi
	jge Block13

 Block12:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block13:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x64],0
	cmp eax,edi
	je Block15

 Block14:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block15:
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,ebp
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x64],3
	cmp ecx,edi
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	lea edx,[esp+0x2C]
	push edx
	call IWzVector2D::Getorigin
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x64],5
	cmp eax,edi
	je Block19

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block19:
	lea eax,[esp+0x28]
	push eax
	mov ecx,ebp
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x64],6
	cmp esi,edi
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	mov edx,dword ptr [_D_VTEMPTY]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [_D_VTEMPTY+4]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [_D_VTEMPTY+8]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [_D_VTEMPTY+12]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,edi
	jge Block23

 Block22:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block23:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x64],5
	cmp eax,edi
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block25:
	lea eax,[esp+0x28]
	push eax
	mov ecx,ebp
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x64],7
	cmp esi,edi
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	mov edx,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,edi
	jge Block29

 Block28:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block29:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x64],5
	cmp eax,edi
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block31:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x4C]
	push eax
	call esi
	lea ecx,[esp+0x4C]
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
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x68],8
	call esi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	lea ecx,[esp+0x28]
	push ecx
	mov bl,9
	mov ecx,ebp
	mov byte ptr [esp+0x68],bl
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x64],0xA
	cmp ecx,edi
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	mov ebp,dword ptr [esp+0x18]
	lea edx,[esp+0x4C]
	push edx
	mov edx,dword ptr [esp+0x18]
	lea eax,[esp+0x40]
	push eax
	push edx
	push ebp
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x64],bl
	cmp eax,edi
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block39:
	mov esi,8
	mov byte ptr [esp+0x64],8
	cmp word ptr [esp+0x3C],si
	jne Block42

 Block40:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,edi
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
	mov byte ptr [esp+0x64],5
	cmp word ptr [esp+0x4C],si
	jne Block46

 Block44:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	cmp eax,edi
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block47:
	mov esi,dword ptr [esp+0x1C]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x2C]
	add esi,4
	mov ecx,esi
	call eax
	mov ebx,dword ptr [esp+0x1C]
	mov edi,eax
	add edi,0xB7
	mov eax,ebp
	sub eax,edi
	cdq
	xor eax,edx
	lea ecx,[esp+0x3C]
	sub eax,edx
	push ecx
	mov dword ptr [ebx+0xB38],eax
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block49

 Block48:
	push eax
	call _com_issue_error

 Block49:
	mov ebp,dword ptr [esp+0x20]
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x58]
	lea ecx,[esp+0x1C]
	push ecx
	push ebp
	mov byte ptr [esp+0x6C],0xB
	mov dword ptr [esp+0x24],0
	call edx
	test eax,eax
	jge Block51

 Block50:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push ebp
	push eax
	call _com_issue_errorex

 Block51:
	mov eax,dword ptr [ebx+0xB38]
	add eax,dword ptr [esp+0x1C]
	mov ecx,3
	mov word ptr [esp+0x4C],cx
	mov dword ptr [esp+0x54],eax
	lea edx,[esp+0x3C]
	push edx
	mov edx,dword ptr [esi]
	lea eax,[esp+0x50]
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	mov byte ptr [esp+0x6C],0xC
	call eax
	add eax,0x67
	push eax
	push edi
	mov ecx,ebp
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x64],0xB
	cmp word ptr [esp+0x4C],si
	jne Block54

 Block52:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	mov byte ptr [esp+0x64],5
	cmp word ptr [esp+0x3C],si
	jne Block58

 Block56:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov dword ptr [ebx+0xB34],1
	mov byte ptr [esp+0x64],0
	cmp word ptr [esp+0x2C],si
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov dword ptr [esp+0x68],0xFFFFFFFF
	call edx

 Block64:
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret
}
}
// CUIPetEquip::SetPetConsumeMPItem
_SUB_EXCEPTION_HANDLER(3A96C0)
__SUB_CLASS_THIS(003A96C0, __thiscall, 23608,  CUIPetEquip, void, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A96C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x54]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x1C],esi
	mov dword ptr [esp+0x14],0
	mov edi,dword ptr [esp+0x64]
	test edi,edi
	jne Block2

 Block1:
	mov ecx,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	push edi
	call CFuncKeyMappedMan::ChangePetConsumeMPItemID
	push edi
	mov ecx,esi
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x50
	ret 0xC

 Block2:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test eax,eax
	je Block37

 Block3:
	mov eax,dword ptr [eax+0x2E44]
	mov eax,dword ptr [eax+4]
	test eax,eax
	je Block37

 Block4:
	mov ecx,dword ptr [eax+0x178]
	push ecx
	add eax,0x170
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block37

 Block5:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edi
	lea edx,[esp+0x14]
	push edx
	call CItemInfo::GetItemProp
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	sete cl
	mov dword ptr [esp+0x5C],0
	test cl,cl
	je Block8

 Block6:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	test eax,eax
	je Block37

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x50
	ret 0xC

 Block8:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x70],esp
	push 0x928
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x68],1
	test ecx,ecx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x6C],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x64],2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x5C],4
	call Ztl_variant_t::~Ztl_variant_t
	mov esi,dword ptr [esp+0x18]
	test esi,esi
	sete al
	test al,al
	je Block13

 Block11:
	mov byte ptr [esp+0x5C],0
	test esi,esi
	je Block35

 Block12:
	jmp Block34

 Block13:
	push 0
	push ecx
	mov dword ptr [esp+0x6C],esp
	mov ecx,esp
	push offset _S_MP
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x64],5
	test esi,esi
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea ecx,[esp+0x4C]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x68],4
	call IWzProperty::Getitem
	mov ebx,1
	push eax
	mov byte ptr [esp+0x64],6
	mov dword ptr [esp+0x1C],ebx
	call get_int32
	add esp,8
	test eax,eax
	jne Block17

 Block16:
	push eax
	push ecx
	mov dword ptr [esp+0x6C],esp
	mov ecx,esp
	push offset _S_MPR
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x3C]
	mov dword ptr [esp+0x64],7
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x68],6
	call IWzProperty::Getitem
	mov ebx,3
	push eax
	mov dword ptr [esp+0x64],8
	mov dword ptr [esp+0x1C],ebx
	call get_int32
	add esp,8
	mov byte ptr [esp+0x64],1
	test eax,eax
	je Block18

 Block17:
	mov byte ptr [esp+0x64],0

 Block18:
	test bl,2
	je Block20

 Block19:
	lea ecx,[esp+0x34]
	and ebx,0xFFFFFFFD
	call Ztl_variant_t::~Ztl_variant_t

 Block20:
	mov dword ptr [esp+0x5C],4
	test bl,1
	je Block22

 Block21:
	lea ecx,[esp+0x44]
	call Ztl_variant_t::~Ztl_variant_t

 Block22:
	cmp byte ptr [esp+0x64],0
	je Block24

 Block23:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x78],esp
	push 0xB4E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	add esp,0x14
	push esi
	mov byte ptr [esp+0x60],0
	call edx
	mov eax,dword ptr [esp+0x10]
	jmp Block6

 Block24:
	mov ecx,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	cmp dword ptr [ecx+0x3C4],edi
	je Block33

 Block25:
	push edi
	call CFuncKeyMappedMan::ChangePetConsumeMPItemID
	mov ecx,dword ptr [esp+0x1C]
	push 0
	call CWnd::InvalidateRect
	lea ecx,[esp+0x64]
	push 0xD8C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov byte ptr [esp+0x64],9
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x6C]
	add esp,8
	mov byte ptr [esp+0x5C],4
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	push 0x19C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x5C],0xA
	test eax,eax
	je Block38

 Block28:
	mov ecx,eax
	call CUISysOpt::_ctor_default
	test eax,eax
	je Block38

 Block29:
	add eax,8
	je Block38

 Block30:
	lea edi,[eax-8]
	mov dword ptr [esp+0x20],edi
	test edi,edi
	je Block32

 Block31:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block32:
	mov ecx,edi
	mov byte ptr [esp+0x5C],0xB
	call CDialog::DoModal
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x5C],4
	call ZRef<CUISysOpt>::~ZRef<CUISysOpt>

 Block33:
	mov byte ptr [esp+0x5C],0

 Block34:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block35:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	test eax,eax
	je Block37

 Block36:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block37:
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x50
	ret 0xC

 Block38:
	xor edi,edi
	mov dword ptr [esp+0x20],edi
	jmp Block32
}
}
// CUIEquip::IsMyAddon
__SUB_CLASS_THIS(003A5460, __thiscall, 23652,  CUIEquip, int32_t, CWnd*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp dword ptr [ecx+0xB18],eax
	je Block4

 Block1:
	cmp dword ptr [ecx+0xB20],eax
	je Block4

 Block2:
	cmp dword ptr [ecx+0xB28],eax
	je Block4

 Block3:
	xor eax,eax
	ret 4

 Block4:
	mov eax,1
	ret 4
}
}
// CUIDragonEquip::IsKindOf
__SUB_CLASS_THIS(003A4090, __thiscall, 23570,  CUIDragonEquip, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIDragonEquip::ms_RTTI_CUIDragonEquip
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
// CUIEquip::OnMouseButton
_SUB_EXCEPTION_HANDLER(3A72B0)
__SUB_CLASS_THIS(003A72B0, __thiscall, 23644,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A72B0
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
	mov edi,ecx
	mov dword ptr [esp+0x14],edi
	cmp dword ptr [esp+0xB8],0x201
	jne Block31

 Block1:
	mov eax,dword ptr [esp+0xC4]
	mov edx,dword ptr [esp+0xC0]
	push eax
	lea ecx,[edi-4]
	push edx
	call CUIEquip::GetBodyPartFromPoint
	mov esi,eax
	test esi,esi
	jne Block3

 Block2:
	lea ecx,[edi+0x84]
	jmp Block30

 Block3:
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [edi+0x20B8],0
	jne Block31

 Block4:
	mov eax,dword ptr [edi+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block31

 Block5:
	call get_update_time
	sub eax,dword ptr [edi+0x20BC]
	cmp eax,0x1F4
	jl Block31

 Block6:
	lea edx,[esp+0x30]
	push edx
	mov ecx,edi
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	lea ecx,[esp+0x30]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov edi,0xFFFFFF9C
	sub edi,esi
	push edi
	push 1
	lea eax,[esp+0x60]
	push eax
	mov ecx,ebp
	call CharacterData::GetItem
	mov ebx,dword ptr [eax+4]
	lea ecx,[esp+0x58]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test ebx,ebx
	jne Block8

 Block7:
	neg esi
	mov edi,esi
	push edi
	push 1
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,ebp
	call CharacterData::GetItem
	mov ebx,dword ptr [eax+4]
	lea ecx,[esp+0x20]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test ebx,ebx
	je Block28

 Block8:
	add ebx,0xC
	mov ecx,ebx
	call TSecType<long>::GetData
	push eax
	call is_evan_dragon_riding_item
	add esp,4
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [esp+0x14]
	add ecx,0x84
	jmp Block30

 Block10:
	push offset _D_VTMISSING
	lea ecx,[esp+0x7C]
	call Ztl_variant_t::_ctor_1
	xor ebp,ebp
	mov edx,3
	mov dword ptr [esp+0xB0],ebp
	mov word ptr [esp+0x68],dx
	mov dword ptr [esp+0x70],ebp
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xB0],1
	cmp ecx,ebp
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea eax,[esp+0x78]
	push eax
	lea edx,[esp+0x6C]
	push edx
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	lea eax,[esp+0x4C]
	push eax
	call IWzGr2D::CreateLayer
	lea ecx,[esp+0x68]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x78]
	mov byte ptr [esp+0xB0],4
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,ebx
	call TSecType<long>::GetData
	push ebp
	push ebp
	push eax
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemIcon
	mov bl,5
	push offset _D_VTMISSING
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0xB4],bl
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0xB4],6
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x8C]
	mov byte ptr [esp+0xB4],7
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0xB4],8
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0xB4],9
	call Ztl_variant_t::_ctor_1
	mov esi,dword ptr [esp+0x30]
	mov byte ptr [esp+0xB0],0xA
	cmp esi,ebp
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x4C]
	push eax
	lea ecx,[esp+0x90]
	push ecx
	mov ecx,dword ptr [esp+0x28]
	lea edx,[esp+0x64]
	push edx
	lea eax,[esp+0x30]
	push eax
	push ecx
	lea edx,[esp+0xB0]
	push edx
	mov ecx,esi
	call IWzGr2DLayer::InsertCanvas
	lea ecx,[esp+0x98]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x20]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x58]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x88]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x48]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0xB0],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0x80FFFFFF
	mov ecx,esi
	call IWzGr2DLayer::Putcolor
	mov ecx,dword ptr [esp+0x14]
	lea eax,[esp+0x18]
	push eax
	add ecx,0xFFFFFFFC
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0xB0],0xB
	mov word ptr [esp+0x20],cx
	mov dword ptr [esp+0x28],eax
	cmp eax,ebp
	je Block16

 Block15:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block16:
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0xB4],0xC
	call IWzVector2D::Putorigin
	lea ecx,[esp+0x20]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xB0],bl
	cmp eax,ebp
	je Block18

 Block17:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block18:
	push offset _D_VTMISSING
	lea ecx,[esp+0x4C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0xB4],0xD
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xB0],0xE
	cmp ecx,ebp
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea edx,[esp+0x48]
	push edx
	lea eax,[esp+0x3C]
	push eax
	mov ebp,ecx
	call IWzCanvas::Getcy
	mov ecx,eax
	mov eax,dword ptr [esp+0xCC]
	sub eax,ecx
	add eax,0x10
	push eax
	mov ecx,ebp
	call IWzCanvas::Getcx
	mov edx,eax
	mov eax,dword ptr [esp+0xCC]
	sub eax,edx
	sub eax,0x10
	push eax
	mov ecx,esi
	call IWzVector2D::RelMove
	lea ecx,[esp+0x38]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x48]
	mov byte ptr [esp+0xB0],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0x28
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov ebp,dword ptr [esp+0x14]
	mov byte ptr [esp+0xB0],0xF
	test eax,eax
	je Block22

 Block21:
	lea edx,[ebp-4]
	neg edx
	sbb edx,edx
	and edx,ebp
	push edx
	push 0
	push edi
	push 1
	push esi
	mov ecx,eax
	call CDraggableItem::_ctor_0
	jmp Block23

 Block22:
	xor eax,eax

 Block23:
	lea ecx,[ebp-4]
	neg ecx
	sbb ecx,ecx
	push 0
	and ecx,ebp
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov byte ptr [esp+0xBC],bl
	call CWndMan::BeginDragDrop
	lea eax,[esp+0x18]
	push 0x75E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [esp+0xB4],0x10
	call play_ui_sound
	mov eax,dword ptr [esp+0x1C]
	add esp,4
	mov byte ptr [esp+0xB0],bl
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xB0],4
	test eax,eax
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block27:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	call ecx
	jmp Block29

 Block28:
	mov ebp,dword ptr [esp+0x14]

 Block29:
	lea ecx,[ebp+0x84]

 Block30:
	call CUIToolTip::ClearToolTip

 Block31:
	mov ecx,dword ptr [esp+0xA8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA0
	ret 0x10
}
}
// CUIMechanicEquip::GetRTTI
__SUB_CLASS_THIS0(003A3E60, __thiscall, 23533,  CUIMechanicEquip, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIMechanicEquip::ms_RTTI_CUIMechanicEquip
	ret
}
}
// CUIMechanicEquip::IsKindOf
__SUB_CLASS_THIS(003A3F00, __thiscall, 23534,  CUIMechanicEquip, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIMechanicEquip::ms_RTTI_CUIMechanicEquip
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
// EqSlotInfo::GetX
__SUB(003A3910, __cdecl, 23511,  long, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	xor ecx,ecx
	cmp eax,3
	ja Block5

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block2
cmp EAX, 3
je Block4


 Block2:
	mov ecx,0xA
	jmp Block5

 Block3:
	mov ecx,0xB
	jmp Block5

 Block4:
	mov ecx,0xC

 Block5:
	mov edx,dword ptr [esp+4]
	test edx,edx
	jl Block7

 Block6:
	mov eax,edx
	shl eax,5
	add eax,ecx
	add eax,edx
	ret

 Block7:
	mov eax,0x400
	ret
}
}
// CUIEquip::Update
__SUB_CLASS_THIS0(003A5570, __thiscall, 23642,  CUIEquip, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0xAFC],0
	jne Block6

 Block1:
	cmp dword ptr [esi+0xB34],0
	jne Block6

 Block2:
	add dword ptr [esi+0xB38],0xFFFFFFE2
	jns Block6

 Block3:
	mov ecx,dword ptr [esi+0xB28]
	test ecx,ecx
	je Block6

 Block4:
	call CWnd::Destroy
	add esi,0xB24
	cmp dword ptr [esi+4],0
	je Block6

 Block5:
	push 0
	mov ecx,esi
	call ZRef<CUIPetEquip>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block6:
	pop esi
	ret
}
}
// CUIDragonEquip::GetBodyPartFromPoint
__SUB_CLASS_THIS(003A38C0, __thiscall, 23568,  CUIDragonEquip, long, int32_t, int32_t) {
__asm {

 Block0:
	mov edx,dword ptr [esp+8]
	push esi
	mov esi,dword ptr [esp+8]
	xor eax,eax
	jmp Block2

 Block2:
	mov ecx,dword ptr [eax*8+CUIDragonEquip::ms_aRegion]
	cmp ecx,esi
	jge Block6

 Block3:
	add ecx,0x20
	cmp esi,ecx
	jge Block6

 Block4:
	mov ecx,dword ptr [eax*8+CUIDragonEquip::ms_aRegion+4]
	cmp ecx,edx
	jge Block6

 Block5:
	add ecx,0x20
	cmp edx,ecx
	jl Block8

 Block6:
	inc eax
	cmp eax,4
	jl Block2

 Block7:
	or eax,0xFFFFFFFF
	pop esi
	ret 8

 Block8:
	add eax,0x3E8
	pop esi
	ret 8
}
}
// CUIDragonEquip::~CUIDragonEquip
_SUB_EXCEPTION_HANDLER(3A4010)
__SUB_CLASS_THIS0(003A4010, __thiscall, 23561,  CUIDragonEquip, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A4010
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIDragonEquip::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIDragonEquip::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIDragonEquip::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0x80]
	mov dword ptr [esp+0x14],1
	call CUIToolTip::~CUIToolTip
	mov ecx,esi
	mov dword ptr [TSingleton<CUIDragonEquip>::ms_pInstance],0
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CWnd::~CWnd
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUIDragonEquip::OnMouseButton
_SUB_EXCEPTION_HANDLER(3A5B30)
__SUB_CLASS_THIS(003A5B30, __thiscall, 23565,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A5B30
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
	mov ebx,ecx
	mov dword ptr [esp+0x18],ebx
	cmp dword ptr [esp+0xBC],0x201
	jne Block27

 Block1:
	mov edi,dword ptr [esp+0xC8]
	mov ebp,dword ptr [esp+0xC4]
	push edi
	lea ecx,[ebx-4]
	push ebp
	mov dword ptr [esp+0x1C],ecx
	call CUIDragonEquip::GetBodyPartFromPoint
	mov esi,eax
	test esi,esi
	jge Block3

 Block2:
	lea ecx,[ebx+0x7C]
	jmp Block26

 Block3:
	mov ebx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [ebx+0x20B8],0
	jne Block27

 Block4:
	mov eax,dword ptr [ebx+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block27

 Block5:
	call get_update_time
	sub eax,dword ptr [ebx+0x20BC]
	cmp eax,0x1F4
	jl Block27

 Block6:
	lea edx,[esp+0x34]
	push edx
	mov ecx,ebx
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	lea ecx,[esp+0x34]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	neg esi
	push esi
	push 1
	lea eax,[esp+0x28]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x3C],esi
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x20]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	xor ebx,ebx
	cmp esi,ebx
	je Block25

 Block7:
	push offset _D_VTMISSING
	lea ecx,[esp+0x70]
	call Ztl_variant_t::_ctor_1
	mov ecx,3
	mov dword ptr [esp+0xB4],ebx
	mov word ptr [esp+0x5C],cx
	mov dword ptr [esp+0x64],ebx
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xB4],1
	cmp ecx,ebx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	lea edx,[esp+0x6C]
	push edx
	lea eax,[esp+0x60]
	push eax
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	lea edx,[esp+0x50]
	push edx
	call IWzGr2D::CreateLayer
	lea ecx,[esp+0x5C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x6C]
	mov byte ptr [esp+0xB4],4
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push ebx
	push ebx
	push eax
	lea eax,[esp+0x28]
	push eax
	call CItemInfo::GetItemIcon
	push offset _D_VTMISSING
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0xB8],5
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x50]
	mov byte ptr [esp+0xB8],6
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x90]
	mov byte ptr [esp+0xB8],7
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x80]
	mov byte ptr [esp+0xB8],8
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0xB8],9
	call Ztl_variant_t::_ctor_1
	mov esi,dword ptr [esp+0x34]
	mov byte ptr [esp+0xB4],0xA
	cmp esi,ebx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea ecx,[esp+0x3C]
	push ecx
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x94]
	push eax
	mov eax,dword ptr [esp+0x28]
	lea ecx,[esp+0x88]
	push ecx
	lea edx,[esp+0x30]
	push edx
	push eax
	lea ecx,[esp+0xB4]
	push ecx
	mov ecx,esi
	call IWzGr2DLayer::InsertCanvas
	lea ecx,[esp+0x9C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x20]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x7C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x8C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x4C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0xB4],5
	call Ztl_variant_t::~Ztl_variant_t
	push 0x80FFFFFF
	mov ecx,esi
	call IWzGr2DLayer::Putcolor
	mov ecx,dword ptr [esp+0x14]
	lea edx,[esp+0x14]
	push edx
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0xB4],0xB
	mov word ptr [esp+0x20],cx
	mov dword ptr [esp+0x28],eax
	cmp eax,ebx
	je Block13

 Block12:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block13:
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0xB8],0xC
	call IWzVector2D::Putorigin
	lea ecx,[esp+0x20]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xB4],5
	cmp eax,ebx
	je Block15

 Block14:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block15:
	push offset _D_VTMISSING
	lea ecx,[esp+0x50]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0xB8],0xD
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xB4],0xE
	cmp ecx,ebx
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x40]
	push eax
	mov ebx,ecx
	call IWzCanvas::Getcy
	sub edi,eax
	add edi,0x10
	push edi
	mov ecx,ebx
	call IWzCanvas::Getcx
	sub ebp,eax
	sub ebp,0x10
	push ebp
	mov ecx,esi
	call IWzVector2D::RelMove
	lea ecx,[esp+0x3C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0xB4],5
	call Ztl_variant_t::~Ztl_variant_t
	push 0x28
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov edi,dword ptr [esp+0x18]
	mov byte ptr [esp+0xB4],0xF
	test eax,eax
	je Block19

 Block18:
	mov ecx,dword ptr [esp+0x30]
	lea edx,[edi-4]
	neg edx
	sbb edx,edx
	and edx,edi
	push edx
	push 0
	push ecx
	push 1
	push esi
	mov ecx,eax
	call CDraggableItem::_ctor_0
	jmp Block20

 Block19:
	xor eax,eax

 Block20:
	lea ecx,[edi-4]
	neg ecx
	sbb ecx,ecx
	push 0
	and ecx,edi
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov byte ptr [esp+0xC0],5
	call CWndMan::BeginDragDrop
	lea edx,[esp+0x14]
	push 0x75E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [esp+0xB8],0x10
	call play_ui_sound
	mov eax,dword ptr [esp+0x18]
	add esp,4
	mov byte ptr [esp+0xB4],5
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block22:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xB4],4
	test eax,eax
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block24:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov dword ptr [esp+0xB8],0xFFFFFFFF
	call ecx

 Block25:
	mov ecx,dword ptr [esp+0x18]
	add ecx,0x7C

 Block26:
	call CUIToolTip::ClearToolTip

 Block27:
	mov ecx,dword ptr [esp+0xAC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA4
	ret 0x10
}
}
// CUIMechanicEquip::OnCreate
_SUB_EXCEPTION_HANDLER(3A8270)
__SUB_CLASS_THIS(003A8270, __thiscall, 23526,  CUIMechanicEquip, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A8270
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	push 0
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGEQ
	call _xbstr_t::_ctor_1
	mov ecx,edi
	call CWnd::SetBackgrnd
	mov ecx,dword ptr [TSingleton<CUIEquip>::ms_pInstance]
	lea eax,[esp+0x10]
	push eax
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov dword ptr [esp+0x30],0
	mov word ptr [esp+0x18],cx
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x34],1
	call CWnd::GetLayer
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x30],2
	test esi,esi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0xFC]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x34]
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block6

 Block5:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x30],1
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x30],0
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test eax,eax
	je Block14

 Block13:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block14:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,edi
	call CWnd::GetLayer
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x30],3
	test esi,esi
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xB4]
	push 0xFFFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block18

 Block17:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block18:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test eax,eax
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x28
	ret 4
}
}
// CUIEquip::CExpandableWndInfo::SetSlotDisable
_SUB_EXCEPTION_HANDLER(3A9CD0)
__SUB_CLASS_THIS(003A9CD0, __thiscall, 23812,  CUIEquip::CExpandableWndInfo, void, NakedParam<_x_com_ptr<IWzCanvas>>, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A9CD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
	push ebx
	push ebp
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x54]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x24]
	push eax
	mov dword ptr [esp+0x60],0
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
	mov byte ptr [esp+0x60],1
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
	push 0
	push 0
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x20]
	push edx
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	mov bl,2
	push offset _S_UIUIWINDOW2IMGEQ__1
	mov byte ptr [esp+0x74],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x70],3
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x58]
	mov byte ptr [esp+0x70],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x64],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x14],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x5C],6
	cmp word ptr [esp+0x44],bx
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0x44]
	push edx
	call ebp

 Block13:
	mov byte ptr [esp+0x5C],7
	cmp word ptr [esp+0x14],bx
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x14]
	push ecx
	call ebp

 Block17:
	mov byte ptr [esp+0x5C],bl
	cmp word ptr [esp+0x24],bx
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x24]
	push eax
	call ebp

 Block21:
	mov esi,dword ptr [esp+0x10]
	test esi,esi
	sete al
	test al,al
	je Block24

 Block22:
	mov byte ptr [esp+0x5C],0
	test esi,esi
	je Block32

 Block23:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx
	jmp Block32

 Block24:
	mov eax,3
	mov word ptr [esp+0x34],ax
	mov dword ptr [esp+0x3C],0xFF
	mov ecx,dword ptr [esp+0x64]
	mov byte ptr [esp+0x5C],9
	test ecx,ecx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov eax,dword ptr [esp+0x6C]
	lea edx,[esp+0x34]
	push edx
	mov edx,dword ptr [esp+0x6C]
	push esi
	push eax
	push edx
	call IWzCanvas::Copy
	mov byte ptr [esp+0x5C],bl
	cmp word ptr [esp+0x34],bx
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[esp+0x34]
	push ecx
	call ebp

 Block30:
	mov byte ptr [esp+0x5C],0
	test esi,esi
	je Block32

 Block31:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block32:
	mov eax,dword ptr [esp+0x64]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	test eax,eax
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret 0xC
}
}
// CUIDragonEquip::GetRTTI
__SUB_CLASS_THIS0(003A3FF0, __thiscall, 23569,  CUIDragonEquip, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIDragonEquip::ms_RTTI_CUIDragonEquip
	ret
}
}
// CUIEquip::GetRTTI
__SUB_CLASS_THIS0(003A5440, __thiscall, 23653,  CUIEquip, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIEquip::ms_RTTI_CUIEquip
	ret
}
}
// CUIPetEquip::OnButtonClicked
__SUB_CLASS_THIS(003A7E10, __thiscall, 23605,  CUIPetEquip, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x7D0
	je Block4

 Block1:
	jbe Block5

 Block2:
	cmp eax,0x7D3
	ja Block5

 Block3:
	add eax,0xFFFFF82F
	mov dword ptr [ecx+0xAE8],eax
	mov dword ptr [esp+4],0
	jmp  CWnd::InvalidateRect

 Block4:
	mov ecx,dword ptr [TSingleton<CUIEquip>::ms_pInstance]
	call CUIEquip::TogglePetEquip

 Block5:
	ret 4
}
}
// CUIEquip::OnMoveWnd
__SUB_CLASS_THIS(003A4300, __thiscall, 23647,  CUIEquip, void, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push ebx
	push esi
	push edi
	mov esi,ecx
	mov ecx,dword ptr [esp+0x10]
	push eax
	push ecx
	mov ecx,esi
	call CWnd::OnMoveWnd
	mov ebx,dword ptr [esi+0xB18]
	test ebx,ebx
	je Block2

 Block1:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x30]
	lea edi,[esi+4]
	mov ecx,edi
	call eax
	mov edx,dword ptr [edi]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,edi
	call eax
	sub eax,0x97
	push eax
	mov ecx,ebx
	call CWnd::MoveWnd

 Block2:
	mov ebx,dword ptr [esi+0xB20]
	test ebx,ebx
	je Block4

 Block3:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x30]
	lea edi,[esi+4]
	mov ecx,edi
	call eax
	mov edx,dword ptr [edi]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,edi
	call eax
	sub eax,0x97
	push eax
	mov ecx,ebx
	call CWnd::MoveWnd

 Block4:
	mov edi,dword ptr [esi+0xB28]
	test edi,edi
	je Block6

 Block5:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x30]
	add esi,4
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	add eax,0x67
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	add eax,0xB7
	push eax
	mov ecx,edi
	call CWnd::MoveWnd

 Block6:
	pop edi
	pop esi
	pop ebx
	ret 8
}
}
// CUIPetEquip::OnCreate
_SUB_EXCEPTION_HANDLER(3A9FF0)
__SUB_CLASS_THIS(003A9FF0, __thiscall, 23600,  CUIPetEquip, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A9FF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x64]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	xor edi,edi
	push edi
	push edi
	push edi
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push 0x1A76
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,ebx
	call CWnd::SetBackgrnd
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x44]
	push ecx
	call esi
	lea edx,[esp+0x44]
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
	lea eax,[esp+0x24]
	push eax
	mov dword ptr [esp+0x70],edi
	call esi
	lea ecx,[esp+0x24]
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
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0x50E
	push ecx
	mov byte ptr [esp+0x88],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x80],2
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x68]
	mov byte ptr [esp+0x80],1
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x74],3
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebx+0xAEC]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov esi,8
	mov byte ptr [esp+0x6C],1
	cmp word ptr [esp+0x54],si
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [esp+0x6C],0
	cmp word ptr [esp+0x24],si
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	cmp word ptr [esp+0x44],si
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov dword ptr [esp+0x40],edi
	mov dword ptr [esp+0x38],edi
	mov dword ptr [esp+0x3C],edi
	lea eax,[esp+0x18]
	push 0x1259
	push eax
	mov dword ptr [esp+0x74],4
	mov dword ptr [esp+0x3C],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0x70],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x6C],4
	cmp eax,edi
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block23:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x6C],6
	cmp eax,edi
	je Block25

 Block24:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block26

 Block25:
	xor eax,eax

 Block26:
	mov byte ptr [esp+0x6C],4
	cmp eax,edi
	je Block33

 Block27:
	add eax,8
	cmp eax,edi
	je Block33

 Block28:
	lea esi,[eax-8]
	cmp esi,edi
	je Block30

 Block29:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block30:
	mov eax,dword ptr [ebx+0xACC]
	mov dword ptr [ebx+0xACC],esi
	mov dword ptr [esp+0x28],eax
	cmp eax,edi
	je Block32

 Block31:
	push edi
	lea ecx,[esp+0x28]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block32:
	mov ecx,dword ptr [ebx+0xACC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x34]
	push eax
	push 1
	push 0x9F
	push 0x7D
	push 0x7D0
	push ebx
	call edx
	mov eax,0xFFFFF52C
	sub eax,ebx
	mov ebp,0x7D1
	mov dword ptr [esp+0x14],0xA
	lea esi,[ebx+0xAD4]
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x18],3
	jmp Block36

 Block33:
	xor esi,esi
	jmp Block30

 Block35:
	xor edi,edi

 Block36:
	lea eax,[esp+0x1C]
	push 0x125A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	lea ecx,[ebp-0x7D0]
	push ecx
	push eax
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0x78],7
	call ZXString16::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x6C],4
	cmp eax,edi
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block38:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x24],eax
	mov byte ptr [esp+0x6C],8
	cmp eax,edi
	je Block40

 Block39:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block41

 Block40:
	xor eax,eax

 Block41:
	mov byte ptr [esp+0x6C],4
	cmp eax,edi
	je Block45

 Block42:
	add eax,8
	cmp eax,edi
	je Block45

 Block43:
	lea edi,[eax-8]
	test edi,edi
	je Block45

 Block44:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block45:
	mov eax,dword ptr [esi]
	mov dword ptr [esi],edi
	test eax,eax
	je Block49

 Block46:
	lea edi,[eax+8]
	lea ecx,[edi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block49

 Block47:
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block49

 Block48:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block49:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x34]
	push edx
	mov edx,dword ptr [esp+0x18]
	push 1
	push 0x97
	push edx
	push ebp
	push ebx
	call eax
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edx,dword ptr [ecx+0x2E44]
	mov eax,dword ptr [esi]
	add edx,dword ptr [esp+0x20]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	cmp dword ptr [edx+esi+4],0
	mov edx,dword ptr [eax+0x1C]
	je Block51

 Block50:
	push 1
	jmp Block52

 Block51:
	push 0

 Block52:
	call edx
	add dword ptr [esp+0x14],0x22
	inc ebp
	add esi,8
	sub dword ptr [esp+0x18],1
	jne Block35

 Block53:
	lea eax,[esp+0x1C]
	mov dword ptr [ebx+0xAE8],0
	mov ecx,dword ptr [TSingleton<CUIEquip>::ms_pInstance]
	push eax
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x6C],9
	mov word ptr [esp+0x24],cx
	mov dword ptr [esp+0x2C],eax
	test eax,eax
	je Block55

 Block54:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block55:
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,ebx
	mov byte ptr [esp+0x70],0xA
	call CWnd::GetLayer
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x6C],0xB
	test esi,esi
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0xFC]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x40]
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block59

 Block58:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block59:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x6C],0xA
	test eax,eax
	je Block61

 Block60:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block61:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x6C],9
	jne Block64

 Block62:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block65:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x6C],4
	test eax,eax
	je Block67

 Block66:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block67:
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,ebx
	call CWnd::GetLayer
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x6C],0xC
	test esi,esi
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xB4]
	push 0xFFFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block71

 Block70:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block71:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x6C],4
	test eax,eax
	je Block73

 Block72:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block73:
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	test eax,eax
	je Block75

 Block74:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block75:
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x5C
	ret 4
}
}
// CUIEquip::OnCreate
_SUB_EXCEPTION_HANDLER(3A8DF0)
__SUB_CLASS_THIS(003A8DF0, __thiscall, 23643,  CUIEquip, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A8DF0
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
	jmp Block2

 Block2:
	xor eax,eax
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x14],eax
	push eax
	push ecx
	push edx
	push ebx
	push ebx
	push ebp
	push esi
	push edi
	mov dword ptr [esp+0x40],0x102
	lea ebx,[esp+0x34]
	mov dword ptr [esp+0x3C],ebx
	mov dword ptr [esp+0x38],0x2D9FB3D
	mov ebx,0x800
	inc ebx
	inc ebx
	inc ebx
	add ebx,0x1E
	mov dword ptr [esp+0x34],ebx
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ebx
	pop edx
	pop ecx
	pop eax
	jmp Block4

 Block4:
	push 0
	push 0
	lea edi,[ebp+0xB40]
	push ebp
	mov ecx,edi
	call CLayoutMan::Init
	push 1
	push ecx
	mov esi,esp
	mov dword ptr [esp+0x2C],esp
	push 0x52
	push offset _S_UIUIWINDOW2IMGEQ__9
	push 0
	push 0x29
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x29
	mov ecx,esi
	call ZXString16::ReleaseBuffer
	mov eax,dword ptr [esp+0x74]
	push eax
	mov ecx,ebp
	call CUIWnd::OnCreate_1
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x3C]
	push ecx
	call esi
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea eax,[esp+0x24]
	push eax
	mov dword ptr [esp+0x68],0
	call esi
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	push 0
	push 0
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x30]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x80],esp
	push 0x50E
	push ecx
	mov byte ptr [esp+0x80],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],2
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea edx,[esp+0x60]
	mov byte ptr [esp+0x78],1
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],3
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0xB08]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block13

 Block11:
	cmp eax,0x80004002
	je Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x64],1
	cmp word ptr [esp+0x4C],si
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x4C]
	push ecx
	call ebx

 Block17:
	mov byte ptr [esp+0x64],0
	cmp word ptr [esp+0x24],si
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x24]
	push eax
	call ebx

 Block21:
	mov dword ptr [esp+0x64],0xFFFFFFFF
	cmp word ptr [esp+0x3C],si
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea edx,[esp+0x3C]
	push edx
	call ebx

 Block25:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x40]
	call edx
	mov ecx,eax
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x2B
	jne Block27

 Block26:
	push 0
	push 0
	push 0
	push ecx
	mov esi,esp
	mov dword ptr [esp+0x7C],esp
	push 0x5E
	push offset _S_UIUIWINDOW2IMGEQ__8
	push 0
	push 0x2F
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x2F
	mov ecx,esi
	call ZXString16::ReleaseBuffer
	mov ecx,ebp
	call CWnd::CoverBackgrnd

 Block27:
	cmp dword ptr [ebp+0xB3C],0
	je Block30

 Block28:
	push 0
	push 0
	push 0
	push ecx
	mov esi,esp
	mov dword ptr [esp+0x7C],esp
	push 0x58
	push offset _S_UIUIWINDOW2IMGEQ__7
	push 0
	push 0x2C
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x2C
	mov ecx,esi
	call ZXString16::ReleaseBuffer
	mov ecx,ebp
	call CWnd::CoverBackgrnd
	push 0
	push 0
	push 0
	push 0xBB8
	push offset _S_UIUIWINDOW2IMGEQ__6
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,edi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x28],0
	je Block30

 Block29:
	push 0
	lea ecx,[esp+0x28]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block30:
	push 0
	push 0
	push 0
	push 0xBBA
	push offset _S_UIUIWINDOW2IMGEQ__5
	lea edx,[esp+0x38]
	push edx
	mov ecx,edi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x28],0
	je Block32

 Block31:
	push 0
	lea ecx,[esp+0x28]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block32:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x40]
	call edx
	mov ecx,eax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x16
	je Block34

 Block33:
	cmp ecx,0x7D1
	jne Block36

 Block34:
	push 0
	push 0
	push 0
	push 0xBB9
	push offset _S_UIUIWINDOW2IMGEQ__4
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,edi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x28],0
	je Block36

 Block35:
	push 0
	lea ecx,[esp+0x28]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block36:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x40]
	call eax
	mov ecx,eax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0x23
	jne Block46

 Block37:
	push 0
	push 0
	push 0
	push 0xBBB
	push offset _S_UIUIWINDOW2IMGEQ__3
	lea edx,[esp+0x38]
	push edx
	mov ecx,edi
	call CLayoutMan::AddButton
	mov edi,eax
	mov eax,dword ptr [edi+4]
	mov dword ptr [esp+0x64],4
	lea esi,[ebp+0xB54]
	test eax,eax
	je Block39

 Block38:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block39:
	cmp dword ptr [esi+4],0
	je Block41

 Block40:
	push 0
	mov ecx,esi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block41:
	cmp dword ptr [esp+0x28],0
	mov eax,dword ptr [edi+4]
	mov dword ptr [esi+4],eax
	mov dword ptr [esp+0x64],0xFFFFFFFF
	je Block43

 Block42:
	push 0
	lea ecx,[esp+0x28]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block43:
	cmp dword ptr [ebp+0xB58],0
	je Block46

 Block44:
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x34]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov edx,dword ptr [esi+0x35]
	push edx
	add esi,0x33
	push esi
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	cmp al,0x32
	jae Block46

 Block45:
	mov eax,dword ptr [ebp+0xB58]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx

 Block46:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x40]
	call edx
	mov ecx,eax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x23
	jne Block48

 Block47:
	mov ecx,ebp
	call CUIEquip::ToggleMechanicEquip

 Block48:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x40]
	call eax
	mov ecx,eax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x16
	je Block50

 Block49:
	cmp ecx,0x7D1
	jne Block51

 Block50:
	mov ecx,ebp
	call CUIEquip::ToggleDragonEquip

 Block51:
	cmp dword ptr [ebp+0xAFC],1
	jne Block53

 Block52:
	mov ecx,ebp
	call CUIEquip::TogglePetEquip

 Block53:
	push 0
	mov ecx,ebp
	call CWnd::InvalidateRect
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	add ecx,0x40A0
	call ZArray<CUIWnd *>::InsertBefore
	mov dword ptr [eax],ebp
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret 4
}
}
// CUIPetEquip::~CUIPetEquip
_SUB_EXCEPTION_HANDLER(3A4A60)
__SUB_CLASS_THIS0(003A4A60, __thiscall, 23599,  CUIPetEquip, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A4A60
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIPetEquip::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIPetEquip::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIPetEquip::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xAEC]
	mov dword ptr [esp+0x18],3
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 3
	push 8
	lea eax,[esi+0xAD0]
	push eax
	call __eh_vector_dtor_iterator
	cmp dword ptr [esi+0xACC],0
	lea edi,[esi+0xAC8]
	mov byte ptr [esp+0x18],2
	je Block4

 Block3:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block4:
	lea ecx,[esi+0x80]
	mov byte ptr [esp+0x18],1
	call CUIToolTip::~CUIToolTip
	mov ecx,esi
	mov dword ptr [TSingleton<CUIPetEquip>::ms_pInstance],0
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CWnd::~CWnd
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CUIEquip::IsKindOf
__SUB_CLASS_THIS(003A5490, __thiscall, 23654,  CUIEquip, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIEquip::ms_RTTI_CUIEquip
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
// CUIPetEquip::OnSetFocus
__SUB_CLASS_THIS(003A4A00, __thiscall, 23601,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUIEquip::CExpandableWndInfo::SetSlotDisable
_SUB_EXCEPTION_HANDLER(3A9F30)
__SUB_CLASS_THIS(003A9F30, __thiscall, 23811,  CUIEquip::CExpandableWndInfo, void, NakedParam<_x_com_ptr<IWzCanvas>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A9F30
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [esp+0x1C]
	mov eax,dword ptr [esi]
	dec ecx
	mov dword ptr [esp+0x10],0
	test eax,eax
	jne Block2

 Block1:
	cmp ecx,0x3A
	mov edx,offset CUIEquip::CExpandableWndInfo::m_sEqSlotInfo+456
	jge Block3

 Block2:
	lea edx,[ecx*8+CUIEquip::CExpandableWndInfo::m_sEqSlotInfo]

 Block3:
	mov edx,dword ptr [edx+4]
	push edx
	test eax,eax
	jne Block5

 Block4:
	cmp ecx,0x3A
	mov eax,offset CUIEquip::CExpandableWndInfo::m_sEqSlotInfo+456
	jge Block6

 Block5:
	lea eax,[ecx*8+CUIEquip::CExpandableWndInfo::m_sEqSlotInfo]

 Block6:
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x24]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x28],esp
	test eax,eax
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block8:
	mov ecx,esi
	call CUIEquip::CExpandableWndInfo::SetSlotDisable_0
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 8
}
}
// CUIDragonEquip::CUIDragonEquip
_SUB_EXCEPTION_HANDLER(3A3F30)
__SUB_CLASS_THIS(003A3F30, __thiscall, 23559,  CUIDragonEquip, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A3F30
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
	call CWnd::_ctor_default
	lea ecx,[esi+0x80]
	mov dword ptr [esp+0x14],0
	test ecx,ecx
	je Block2

 Block1:
	lea eax,[ecx-0x80]
	mov dword ptr [TSingleton<CUIDragonEquip>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIDragonEquip>::ms_pInstance],0

 Block3:
	mov byte ptr [esp+0x14],1
	int 3// TODO: 	mov dword ptr [esi],offset CUIDragonEquip::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIDragonEquip::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIDragonEquip::`vftable'{for `ZRefCounted'}
	call CUIToolTip::_ctor_default
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x1C]
	push 0
	push 1
	push 0
	push 1
	push 0xA
	push 0xAC
	push 0x97
	push ecx
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x38],2
	call CWnd::CreateWnd
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 8
}
}
// CUIDragonEquip::OnCreate
_SUB_EXCEPTION_HANDLER(3A87B0)
__SUB_CLASS_THIS(003A87B0, __thiscall, 23562,  CUIDragonEquip, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A87B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	push 0
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGEQ__2
	call _xbstr_t::_ctor_1
	mov ecx,edi
	call CWnd::SetBackgrnd
	mov ecx,dword ptr [TSingleton<CUIEquip>::ms_pInstance]
	lea eax,[esp+0x10]
	push eax
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov dword ptr [esp+0x30],0
	mov word ptr [esp+0x18],cx
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x34],1
	call CWnd::GetLayer
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x30],2
	test esi,esi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0xFC]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x34]
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block6

 Block5:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x30],1
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x30],0
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test eax,eax
	je Block14

 Block13:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block14:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,edi
	call CWnd::GetLayer
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x30],3
	test esi,esi
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xB4]
	push 0xFFFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block18

 Block17:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block18:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test eax,eax
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x28
	ret 4
}
}
// CUIDragonEquip::Draw
_SUB_EXCEPTION_HANDLER(3A8960)
__SUB_CLASS_THIS(003A8960, __thiscall, 23563,  CUIDragonEquip, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A8960
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x68]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x78]
	push eax
	call CWnd::Draw
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,edi
	call CWvsContext::GetCharacterData
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x78],edx
	test eax,eax
	je Block5

 Block1:
	lea ebp,[eax-0x10]
	lea ebx,[ebp+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebp,ebp
	je Block4

 Block3:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebp
	call edx

 Block4:
	mov dword ptr [esp+0x24],0

 Block5:
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	call CWnd::GetCanvas
	mov ecx,dword ptr [esp+0x78]
	mov ebx,dword ptr [esp+0x1C]
	add edi,0x3C34
	add ecx,0x4BD
	mov dword ptr [esp+0x70],0
	mov ebp,offset CUIDragonEquip::ms_aRegion
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esp+0x78],ecx

 Block6:
	mov edx,dword ptr [esp+0x78]
	mov esi,dword ptr [edx]
	test esi,esi
	je Block36

 Block7:
	xor eax,eax
	cmp dword ptr [edi],eax
	lea ecx,[esi+4]
	setne al
	sub esp,8
	mov dword ptr [esp+0x1C],esp
	mov edi,eax
	mov eax,esp
	push ecx
	mov dword ptr [eax+4],esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::CalcEquipItemQuality
	mov edx,dword ptr [esi]
	push 2
	push 1
	push eax
	mov eax,dword ptr [edx+4]
	push 0
	push 0
	push 0
	mov ecx,esi
	call eax
	mov ecx,dword ptr [ebp+4]
	mov edx,dword ptr [ebp]
	push eax
	add ecx,0x20
	push ecx
	push edx
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block9

 Block8:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+4]
	push ebx
	call ecx

 Block9:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	test edi,edi
	jne Block36

 Block10:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x38]
	push edx
	call esi
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block40

 Block11:
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0x74],1
	call esi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block40

 Block12:
	push edi
	push edi
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x34]
	push ecx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGEQ__1
	mov byte ptr [esp+0x88],2
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x84],3
	cmp dword ptr [_D_G_RM],edi
	je Block41

 Block13:
	lea edx,[esp+0x6C]
	mov byte ptr [esp+0x84],2
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x78],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block15

 Block14:
	cmp eax,0x80004002
	jne Block40

 Block15:
	mov esi,8
	mov byte ptr [esp+0x70],6
	cmp word ptr [esp+0x58],si
	jne Block22

 Block16:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block18:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block19:
	mov byte ptr [esp+0x70],7
	cmp word ptr [esp+0x28],si
	jne Block23

 Block20:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block24

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block22:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x58]
	push ecx
	call edi
	jmp Block19

 Block23:
	lea eax,[esp+0x28]
	push eax
	call edi

 Block24:
	mov byte ptr [esp+0x70],8
	cmp word ptr [esp+0x38],si
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea edx,[esp+0x38]
	push edx
	call edi

 Block28:
	mov esi,dword ptr [esp+0x14]
	test esi,esi
	sete al
	test al,al
	sete al
	test al,al
	je Block34

 Block29:
	mov eax,3
	mov word ptr [esp+0x48],ax
	mov dword ptr [esp+0x50],0xFF
	mov byte ptr [esp+0x70],9
	test ebx,ebx
	je Block41

 Block30:
	mov edx,dword ptr [ebp+4]
	mov eax,dword ptr [ebp]
	lea ecx,[esp+0x48]
	push ecx
	push esi
	push edx
	push eax
	mov ecx,ebx
	call IWzCanvas::Copy
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x70],8
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[esp+0x48]
	push edx
	call edi

 Block34:
	mov byte ptr [esp+0x70],0
	test esi,esi
	je Block36

 Block35:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block36:
	mov edi,dword ptr [esp+0x18]
	add dword ptr [esp+0x78],8
	add edi,8
	add ebp,8
	cmp ebp,offset CUIEquip::CExpandableWndInfo::m_sEqSlotInfo
	mov dword ptr [esp+0x18],edi
	jl Block6

 Block37:
	mov dword ptr [esp+0x70],0xFFFFFFFF
	test ebx,ebx
	je Block39

 Block38:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block39:
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x60
	ret 4

 Block40:
	push eax
	call _com_issue_error

 Block41:
	push 0x80004003
	call _com_issue_error
}
}
// CUIDragonEquip::OnMouseMove
_SUB_EXCEPTION_HANDLER(3A4D50)
__SUB_CLASS_THIS(003A4D50, __thiscall, 23564,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A4D50
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
	lea eax,[esp+0x18]
	mov dword ptr [esp+0x18],0
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block5

 Block1:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block4

 Block3:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block4:
	mov dword ptr [esp+0x1C],0

 Block5:
	mov ecx,dword ptr [esp+0x44]
	mov edx,dword ptr [esp+0x40]
	push ecx
	push edx
	lea ecx,[esi-4]
	call CUIDragonEquip::GetBodyPartFromPoint
	mov edi,eax
	test edi,edi
	jge Block7

 Block6:
	xor ebp,ebp
	mov dword ptr [esp+0x2C],ebp
	lea eax,[esp+0x28]
	mov dword ptr [esp+0x38],ebp
	lea ebx,[ebp+1]
	jmp Block8

 Block7:
	mov eax,edi
	neg eax
	push eax
	push 1
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,ebp
	call CharacterData::GetItem
	mov ebp,dword ptr [esp+0x2C]
	mov ebx,2

 Block8:
	mov edx,dword ptr [eax+4]
	mov dword ptr [esp+0x14],edx
	test bl,2
	je Block14

 Block9:
	mov eax,dword ptr [esp+0x24]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x18],ebx
	test eax,eax
	je Block14

 Block10:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x24]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x24]
	test ecx,ecx
	je Block13

 Block12:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block13:
	mov dword ptr [esp+0x24],0

 Block14:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test bl,1
	je Block18

 Block15:
	test ebp,ebp
	je Block18

 Block16:
	lea ebx,[ebp+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block18

 Block17:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebp
	call eax

 Block18:
	cmp dword ptr [esp+0x14],0
	je Block20

 Block19:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 5
	call CInputSystem::SetCursorState
	push 0
	push 1
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax+4],0
	push 0
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [esi]
	push 0
	mov eax,dword ptr [edx+0x30]
	push 0
	push 0
	push 0
	push 0
	push edi
	push 0
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x7C],1
	call eax
	mov ecx,dword ptr [esp+0x88]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	add eax,dword ptr [esp+0x88]
	lea ecx,[esi+0x7C]
	push eax
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call CUIToolTip::SetToolTip_Equip
	jmp Block21

 Block20:
	lea ecx,[esi+0x7C]
	call CUIToolTip::ClearToolTip
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 0
	call CInputSystem::SetCursorState

 Block21:
	xor eax,eax
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 8
}
}
// CUIPetEquip::SetPetConsumeItem
_SUB_EXCEPTION_HANDLER(3A9330)
__SUB_CLASS_THIS(003A9330, __thiscall, 23608,  CUIPetEquip, void, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A9330
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x54]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x1C],esi
	mov dword ptr [esp+0x14],0
	mov edi,dword ptr [esp+0x64]
	test edi,edi
	jne Block2

 Block1:
	mov ecx,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	push edi
	call CFuncKeyMappedMan::ChangePetConsumeItemID
	push edi
	mov ecx,esi
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x50
	ret 0xC

 Block2:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test eax,eax
	je Block37

 Block3:
	mov eax,dword ptr [eax+0x2E44]
	mov eax,dword ptr [eax+4]
	test eax,eax
	je Block37

 Block4:
	mov ecx,dword ptr [eax+0x16C]
	push ecx
	add eax,0x164
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block37

 Block5:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edi
	lea edx,[esp+0x14]
	push edx
	call CItemInfo::GetItemProp
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	sete cl
	mov dword ptr [esp+0x5C],0
	test cl,cl
	je Block8

 Block6:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	test eax,eax
	je Block37

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x50
	ret 0xC

 Block8:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x70],esp
	push 0x928
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x68],1
	test ecx,ecx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x6C],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x64],2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x5C],4
	call Ztl_variant_t::~Ztl_variant_t
	mov esi,dword ptr [esp+0x18]
	test esi,esi
	sete al
	test al,al
	je Block13

 Block11:
	mov byte ptr [esp+0x5C],0
	test esi,esi
	je Block35

 Block12:
	jmp Block34

 Block13:
	push 0
	push ecx
	mov dword ptr [esp+0x6C],esp
	mov ecx,esp
	push offset _S_HP
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x64],5
	test esi,esi
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea ecx,[esp+0x4C]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x68],4
	call IWzProperty::Getitem
	mov ebx,1
	push eax
	mov byte ptr [esp+0x64],6
	mov dword ptr [esp+0x1C],ebx
	call get_int32
	add esp,8
	test eax,eax
	jne Block17

 Block16:
	push eax
	push ecx
	mov dword ptr [esp+0x6C],esp
	mov ecx,esp
	push offset _S_HPR
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x3C]
	mov dword ptr [esp+0x64],7
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x68],6
	call IWzProperty::Getitem
	mov ebx,3
	push eax
	mov dword ptr [esp+0x64],8
	mov dword ptr [esp+0x1C],ebx
	call get_int32
	add esp,8
	mov byte ptr [esp+0x64],1
	test eax,eax
	je Block18

 Block17:
	mov byte ptr [esp+0x64],0

 Block18:
	test bl,2
	je Block20

 Block19:
	lea ecx,[esp+0x34]
	and ebx,0xFFFFFFFD
	call Ztl_variant_t::~Ztl_variant_t

 Block20:
	mov dword ptr [esp+0x5C],4
	test bl,1
	je Block22

 Block21:
	lea ecx,[esp+0x44]
	call Ztl_variant_t::~Ztl_variant_t

 Block22:
	cmp byte ptr [esp+0x64],0
	je Block24

 Block23:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x78],esp
	push 0xB4D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	add esp,0x14
	push esi
	mov byte ptr [esp+0x60],0
	call edx
	mov eax,dword ptr [esp+0x10]
	jmp Block6

 Block24:
	mov ecx,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	cmp dword ptr [ecx+0x3C0],edi
	je Block33

 Block25:
	push edi
	call CFuncKeyMappedMan::ChangePetConsumeItemID
	mov ecx,dword ptr [esp+0x1C]
	push 0
	call CWnd::InvalidateRect
	lea ecx,[esp+0x64]
	push 0xD8B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0xC
	push eax
	mov byte ptr [esp+0x64],9
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x6C]
	add esp,8
	mov byte ptr [esp+0x5C],4
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	push 0x19C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x5C],0xA
	test eax,eax
	je Block38

 Block28:
	mov ecx,eax
	call CUISysOpt::_ctor_default
	test eax,eax
	je Block38

 Block29:
	add eax,8
	je Block38

 Block30:
	lea edi,[eax-8]
	mov dword ptr [esp+0x20],edi
	test edi,edi
	je Block32

 Block31:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block32:
	mov ecx,edi
	mov byte ptr [esp+0x5C],0xB
	call CDialog::DoModal
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x5C],4
	call ZRef<CUISysOpt>::~ZRef<CUISysOpt>

 Block33:
	mov byte ptr [esp+0x5C],0

 Block34:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block35:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	test eax,eax
	je Block37

 Block36:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block37:
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x50
	ret 0xC

 Block38:
	xor edi,edi
	mov dword ptr [esp+0x20],edi
	jmp Block32
}
}
// CUIEquip::CUIEquip
_SUB_EXCEPTION_HANDLER(3A8CF0)
__SUB_CLASS_THIS0(003A8CF0, __thiscall, 23640,  CUIEquip, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A8CF0
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
	xor edi,edi
	push edi
	push edi
	push 1
	push 6
	push 0xA2
	push 5
	push 1
	call CUIWnd::_ctor_0
	lea eax,[esi+0xB08]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0xB08]
	mov dword ptr [TSingleton<CUIEquip>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIEquip>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIEquip::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIEquip::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIEquip::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax],edi
	mov dword ptr [esi+0xB18],edi
	mov dword ptr [esi+0xB20],edi
	mov dword ptr [esi+0xB28],edi
	mov dword ptr [esi+0xB30],edi
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [edx+0x414C]
	mov dword ptr [esi+0xB3C],eax
	mov dword ptr [esi+0xB40],edi
	mov dword ptr [esi+0xB44],edi
	mov dword ptr [esi+0xB48],edi
	mov dword ptr [esi+0xB4C],edi
	mov dword ptr [esi+0xB50],edi
	mov dword ptr [esi+0xB58],edi
	push 0xA
	push 0x130
	push 0xB8
	mov ecx,esi
	mov byte ptr [esp+0x24],8
	mov dword ptr [esi+0xAD8],0xA2
	call CUIWnd::CreateUIWndPosSaved
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
// CUIMechanicEquip::Draw
_SUB_EXCEPTION_HANDLER(3A8420)
__SUB_CLASS_THIS(003A8420, __thiscall, 23527,  CUIMechanicEquip, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A8420
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x68]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x78]
	push eax
	call CWnd::Draw
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,edi
	call CWvsContext::GetCharacterData
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x78],edx
	test eax,eax
	je Block5

 Block1:
	lea ebp,[eax-0x10]
	lea ebx,[ebp+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebp,ebp
	je Block4

 Block3:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebp
	call edx

 Block4:
	mov dword ptr [esp+0x24],0

 Block5:
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	call CWnd::GetCanvas
	mov ecx,dword ptr [esp+0x78]
	mov ebx,dword ptr [esp+0x1C]
	add edi,0x3C54
	add ecx,0x4DD
	mov dword ptr [esp+0x70],0
	mov ebp,offset CUIMechanicEquip::ms_aRegion
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esp+0x78],ecx

 Block6:
	mov edx,dword ptr [esp+0x78]
	mov esi,dword ptr [edx]
	test esi,esi
	je Block36

 Block7:
	xor eax,eax
	cmp dword ptr [edi],eax
	lea ecx,[esi+4]
	setne al
	sub esp,8
	mov dword ptr [esp+0x1C],esp
	mov edi,eax
	mov eax,esp
	push ecx
	mov dword ptr [eax+4],esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::CalcEquipItemQuality
	mov edx,dword ptr [esi]
	push 2
	push 1
	push eax
	mov eax,dword ptr [edx+4]
	push 0
	push 0
	push 0
	mov ecx,esi
	call eax
	mov ecx,dword ptr [ebp+4]
	mov edx,dword ptr [ebp]
	push eax
	add ecx,0x20
	push ecx
	push edx
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block9

 Block8:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+4]
	push ebx
	call ecx

 Block9:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	test edi,edi
	jne Block36

 Block10:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x38]
	push edx
	call esi
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block40

 Block11:
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0x74],1
	call esi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block40

 Block12:
	push edi
	push edi
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x34]
	push ecx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGEQ__1
	mov byte ptr [esp+0x88],2
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x84],3
	cmp dword ptr [_D_G_RM],edi
	je Block41

 Block13:
	lea edx,[esp+0x6C]
	mov byte ptr [esp+0x84],2
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x78],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block15

 Block14:
	cmp eax,0x80004002
	jne Block40

 Block15:
	mov esi,8
	mov byte ptr [esp+0x70],6
	cmp word ptr [esp+0x58],si
	jne Block22

 Block16:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block18:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block19:
	mov byte ptr [esp+0x70],7
	cmp word ptr [esp+0x28],si
	jne Block23

 Block20:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block24

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block22:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x58]
	push ecx
	call edi
	jmp Block19

 Block23:
	lea eax,[esp+0x28]
	push eax
	call edi

 Block24:
	mov byte ptr [esp+0x70],8
	cmp word ptr [esp+0x38],si
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea edx,[esp+0x38]
	push edx
	call edi

 Block28:
	mov esi,dword ptr [esp+0x14]
	test esi,esi
	sete al
	test al,al
	sete al
	test al,al
	je Block34

 Block29:
	mov eax,3
	mov word ptr [esp+0x48],ax
	mov dword ptr [esp+0x50],0xFF
	mov byte ptr [esp+0x70],9
	test ebx,ebx
	je Block41

 Block30:
	mov edx,dword ptr [ebp+4]
	mov eax,dword ptr [ebp]
	lea ecx,[esp+0x48]
	push ecx
	push esi
	push edx
	push eax
	mov ecx,ebx
	call IWzCanvas::Copy
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x70],8
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[esp+0x48]
	push edx
	call edi

 Block34:
	mov byte ptr [esp+0x70],0
	test esi,esi
	je Block36

 Block35:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block36:
	mov edi,dword ptr [esp+0x18]
	add dword ptr [esp+0x78],8
	add edi,8
	add ebp,8
	cmp ebp,offset CUIDragonEquip::ms_aRegion
	mov dword ptr [esp+0x18],edi
	jl Block6

 Block37:
	mov dword ptr [esp+0x70],0xFFFFFFFF
	test ebx,ebx
	je Block39

 Block38:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block39:
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x60
	ret 4

 Block40:
	push eax
	call _com_issue_error

 Block41:
	push 0x80004003
	call _com_issue_error
}
}
// CUIPetEquip::OnMouseMove
_SUB_EXCEPTION_HANDLER(3A4F50)
__SUB_CLASS_THIS(003A4F50, __thiscall, 23603,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A4F50
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
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x24]
	push eax
	call CWvsContext::GetCharacterData
	mov ecx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x14],ecx
	test eax,eax
	je Block5

 Block1:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block4

 Block3:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block4:
	mov dword ptr [esp+0x28],0

 Block5:
	mov edi,dword ptr [esp+0x40]
	mov ebx,dword ptr [esp+0x3C]
	push edi
	lea ebp,[esi-4]
	push ebx
	mov ecx,ebp
	call CUIPetEquip::GetPetEquipFromPoint
	neg eax
	push eax
	push 1
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [esp+0x20]
	call CharacterData::GetItem
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x40],edx
	test eax,eax
	je Block10

 Block6:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x20]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x20]
	test ecx,ecx
	je Block9

 Block8:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block9:
	mov dword ptr [esp+0x20],0

 Block10:
	push edi
	push ebx
	mov ecx,ebp
	call CUIPetEquip::GetPetEquipFromPoint
	mov ecx,0xFFFFFF9C
	sub ecx,eax
	push ecx
	mov ecx,dword ptr [esp+0x18]
	push 1
	lea edx,[esp+0x1C]
	push edx
	call CharacterData::GetItem
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x3C],eax
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block15

 Block11:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block14

 Block12:
	mov ecx,dword ptr [esp+0x18]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x18]
	test ecx,ecx
	je Block14

 Block13:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block14:
	mov dword ptr [esp+0x18],0

 Block15:
	cmp dword ptr [esp+0x40],0
	je Block20

 Block16:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 5
	call CInputSystem::SetCursorState
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	cmp eax,ecx
	jne Block19

 Block17:
	push ecx
	push 1
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [eax+4],ecx
	push ecx
	push ecx
	push ecx
	push ecx
	push ecx
	push ecx
	push ecx
	push ecx
	push ecx
	push ecx
	push ecx
	mov dword ptr [esp+0x70],ecx
	push ecx
	mov ecx,dword ptr [esp+0x80]

 Block18:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x30]
	push ecx
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	lea ecx,[eax+edi+0x14]
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,esi
	call eax
	add eax,ebx
	push eax
	lea ecx,[esi+0x7C]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	call CUIToolTip::SetToolTip_Equip
	jmp Block29

 Block19:
	mov edx,dword ptr [esi]
	push 1
	push ecx
	mov ecx,dword ptr [esp+0x48]
	push 1
	push eax
	mov eax,dword ptr [edx+0x30]
	push ecx
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	lea ecx,[eax+edi+0x14]
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,esi
	call eax
	add eax,ebx
	push eax
	lea ecx,[esi+0x7C]
	call CUIToolTip::SetToolTip_Equip2
	jmp Block29

 Block20:
	cmp dword ptr [esp+0x3C],0
	je Block22

 Block21:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 5
	call CInputSystem::SetCursorState
	push 0
	push 1
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x50],esp
	mov dword ptr [eax+4],0
	push 0
	mov ecx,dword ptr [esp+0x50]
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	mov dword ptr [esp+0x70],1
	push 0
	jmp Block18

 Block22:
	push edi
	push ebx
	mov ecx,ebp
	call CUIPetEquip::GetPetEquipFromPoint
	cmp eax,0xC8
	jne Block25

 Block23:
	mov ecx,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	cmp dword ptr [ecx+0x3C0],0
	jle Block25

 Block24:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 5
	call CInputSystem::SetCursorState
	push 1
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [eax+4],0
	push 0
	push 0
	push 0
	mov edx,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	mov eax,dword ptr [edx+0x3C0]
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,esi
	mov dword ptr [esp+0x80],2
	call edx
	mov edx,dword ptr [esi]
	lea eax,[eax+edi+0x14]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	add eax,ebx
	push eax
	lea ecx,[esi+0x7C]
	mov dword ptr [esp+0x88],0xFFFFFFFF
	call CUIToolTip::SetToolTip_Bundle
	jmp Block29

 Block25:
	push edi
	push ebx
	mov ecx,ebp
	call CUIPetEquip::GetPetEquipFromPoint
	cmp eax,0xC9
	jne Block28

 Block26:
	mov ecx,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	cmp dword ptr [ecx+0x3C4],0
	jle Block28

 Block27:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 5
	call CInputSystem::SetCursorState
	push 1
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [eax+4],0
	push 0
	push 0
	push 0
	mov edx,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	mov eax,dword ptr [edx+0x3C4]
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,esi
	mov dword ptr [esp+0x80],3
	call edx
	mov edx,dword ptr [esi]
	lea eax,[eax+edi+0x14]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	add eax,ebx
	push eax
	lea ecx,[esi+0x7C]
	mov dword ptr [esp+0x88],0xFFFFFFFF
	call CUIToolTip::SetToolTip_Bundle
	jmp Block29

 Block28:
	lea ecx,[esi+0x7C]
	call CUIToolTip::ClearToolTip
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 0
	call CInputSystem::SetCursorState

 Block29:
	xor eax,eax
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
// CUIPetEquip::GetRTTI
__SUB_CLASS_THIS0(003A4A10, __thiscall, 23609,  CUIPetEquip, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIPetEquip::ms_RTTI_CUIPetEquip
	ret
}
}
// CUIEquip::~CUIEquip
_SUB_EXCEPTION_HANDLER(3A5320)
__SUB_CLASS_THIS0(003A5320, __thiscall, 23642,  CUIEquip, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A5320
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIEquip::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIEquip::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIEquip::`vftable'{for `ZRefCounted'}
	lea edi,[esi+0xB54]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],7
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea ecx,[esi+0xB40]
	mov byte ptr [esp+0x1C],6
	call CLayoutMan::~CLayoutMan
	lea edi,[esi+0xB2C]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0xB24]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CUIPetEquip>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xB1C]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CUIDragonEquip>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0xB14]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CUIMechanicEquip>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	mov eax,dword ptr [esi+0xB08]
	mov byte ptr [esp+0x1C],1
	cmp eax,ebx
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIEquip>::ms_pInstance],ebx
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CUIWnd::~CUIWnd
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
// CUIEquip::OnMouseMove
_SUB_EXCEPTION_HANDLER(3A7780)
__SUB_CLASS_THIS(003A7780, __thiscall, 23645,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A7780
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
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x2C]
	push eax
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [esp+0x30]
	mov edi,dword ptr [eax+4]
	test ebx,ebx
	je Block5

 Block1:
	add ebx,0xFFFFFFF0
	lea ebp,[ebx+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block4

 Block3:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block4:
	mov dword ptr [esp+0x30],0

 Block5:
	mov ecx,dword ptr [esp+0x48]
	mov edx,dword ptr [esp+0x44]
	push ecx
	push edx
	lea ecx,[esi-4]
	call CUIEquip::GetBodyPartFromPoint
	mov ebx,eax
	neg eax
	push eax
	push 1
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,edi
	call CharacterData::GetItem
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],edx
	test eax,eax
	je Block10

 Block6:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x20]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x20]
	test ecx,ecx
	je Block9

 Block8:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block9:
	mov dword ptr [esp+0x20],0

 Block10:
	mov ecx,0xFFFFFF9C
	sub ecx,ebx
	push ecx
	push 1
	lea edx,[esp+0x2C]
	push edx
	mov ecx,edi
	call CharacterData::GetItem
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x14],ebp
	test eax,eax
	je Block15

 Block11:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x28]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x28]
	test ecx,ecx
	je Block14

 Block13:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block14:
	mov dword ptr [esp+0x28],0

 Block15:
	cmp ebx,0xA
	jne Block21

 Block16:
	mov ecx,dword ptr [edi+0x3D]
	push ecx
	lea ebp,[edi+0x39]
	push ebp
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx ecx,ax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add esp,8
	add eax,edx
	jne Block20

 Block17:
	cmp word ptr [edi+0xF7],1
	jne Block20

 Block18:
	mov ecx,dword ptr [edi+0x3D]
	push ecx
	push ebp
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx ecx,ax
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,8
	cmp eax,0x2B
	je Block20

 Block19:
	push 1
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1731
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	mov dword ptr [esp+0x48],0
	call eax
	mov ecx,dword ptr [esp+0x54]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	add eax,dword ptr [esp+0x54]
	lea ecx,[esi+0x84]
	push eax
	mov dword ptr [esp+0x50],0xFFFFFFFF
	call CUIToolTip::SetToolTip_String_MultiLine
	jmp Block33

 Block20:
	mov ebp,dword ptr [esp+0x14]

 Block21:
	mov edi,dword ptr [esp+0x18]
	test edi,edi
	je Block29

 Block22:
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	cmp eax,0x1D05D8
	je Block25

 Block23:
	cmp eax,0x1D05D9
	je Block25

 Block24:
	cmp eax,0x1D05DA
	jne Block26

 Block25:
	lea ecx,[esi+0x84]
	call CUIToolTip::ClearToolTip
	jmp Block34

 Block26:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 5
	call CInputSystem::SetCursorState
	push 1
	test ebp,ebp
	jne Block28

 Block27:
	push 1
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax+4],ebp
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	push ebx
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	mov dword ptr [esp+0x7C],1
	push edi
	jmp Block31

 Block28:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x30]
	push 0
	push 1
	push ebp
	push edi
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x5C]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	add eax,dword ptr [esp+0x5C]
	lea ecx,[esi+0x84]
	push eax
	call CUIToolTip::SetToolTip_Equip2
	jmp Block34

 Block29:
	test ebp,ebp
	je Block32

 Block30:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 5
	call CInputSystem::SetCursorState
	push 0
	push 1
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax+4],0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	mov dword ptr [esp+0x7C],2
	push ebp

 Block31:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x8C]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	add eax,dword ptr [esp+0x8C]
	lea ecx,[esi+0x84]
	push eax
	mov dword ptr [esp+0x88],0xFFFFFFFF
	call CUIToolTip::SetToolTip_Equip
	jmp Block34

 Block32:
	lea ecx,[esi+0x84]
	call CUIToolTip::ClearToolTip

 Block33:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 0
	call CInputSystem::SetCursorState

 Block34:
	xor eax,eax
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret 8
}
}
// CUIEquip::ShowItemReleaseEffect
_SUB_EXCEPTION_HANDLER(3A9A50)
__SUB_CLASS_THIS(003A9A50, __thiscall, 23651,  CUIEquip, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A9A50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [esp+0x50]
	mov eax,dword ptr [esi+0xB3C]
	dec ecx
	test eax,eax
	jne Block2

 Block1:
	cmp ecx,0x3A
	mov edx,offset CUIEquip::CExpandableWndInfo::m_sEqSlotInfo+456
	jge Block3

 Block2:
	lea edx,[ecx*8+CUIEquip::CExpandableWndInfo::m_sEqSlotInfo]

 Block3:
	mov ebp,dword ptr [edx]
	test eax,eax
	jne Block5

 Block4:
	cmp ecx,0x3A
	mov eax,offset CUIEquip::CExpandableWndInfo::m_sEqSlotInfo+456
	jge Block6

 Block5:
	lea eax,[ecx*8+CUIEquip::CExpandableWndInfo::m_sEqSlotInfo]

 Block6:
	mov edi,dword ptr [eax+4]
	push 0x4E
	push offset _S_UIUIWINDOW2IMGIT__32
	push 0
	push 0x27
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],0
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x27
	lea ecx,[esp+0x14]
	call ZXString16::ReleaseBuffer
	push 0
	push 0xFF
	push 1
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x5C],0
	call CWnd::GetLayer
	push edi
	push ebp
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x64],1
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x60],2
	test ecx,ecx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x38],esp
	push edx
	call IWzGr2DLayer::Getlt
	mov ebp,dword ptr [esp+0x2C]
	push 0
	lea eax,[esp+0x70]
	push ebp
	push eax
	mov byte ptr [esp+0x70],3
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x48],5
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	sete cl
	test cl,cl
	jne Block28

 Block11:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push eax
	call esi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x4C],6
	call esi
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x48],7
	test ecx,ecx
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x48],6
	cmp word ptr [esp+0x20],si
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[esp+0x20]
	push edx
	call edi

 Block21:
	mov byte ptr [esp+0x48],5
	cmp word ptr [esp+0x30],si
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[esp+0x30]
	push ecx
	call edi

 Block25:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],0
	mov edx,dword ptr [esp+0x54]
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [esp+0x28],esp
	test eax,eax
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block27:
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov eax,dword ptr [esp+0x50]

 Block28:
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test ebp,ebp
	je Block32

 Block31:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString16::_Release
	add esp,4

 Block32:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x3C
	ret 4
}
}
// CUIMechanicEquip::CUIMechanicEquip
_SUB_EXCEPTION_HANDLER(3A3DA0)
__SUB_CLASS_THIS(003A3DA0, __thiscall, 23523,  CUIMechanicEquip, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A3DA0
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
	call CWnd::_ctor_default
	lea ecx,[esi+0x80]
	mov dword ptr [esp+0x14],0
	test ecx,ecx
	je Block2

 Block1:
	lea eax,[ecx-0x80]
	mov dword ptr [TSingleton<CUIMechanicEquip>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIMechanicEquip>::ms_pInstance],0

 Block3:
	mov byte ptr [esp+0x14],1
	int 3// TODO: 	mov dword ptr [esi],offset CUIMechanicEquip::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIMechanicEquip::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIMechanicEquip::`vftable'{for `ZRefCounted'}
	call CUIToolTip::_ctor_default
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x1C]
	push 0
	push 1
	push 0
	push 1
	push 0xA
	push 0xAC
	push 0x97
	push ecx
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x38],2
	call CWnd::CreateWnd
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 8
}
}
// CUIDragonEquip::OnSetFocus
__SUB_CLASS_THIS(003A3FE0, __thiscall, 23566,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUIMechanicEquip::OnMouseMove
_SUB_EXCEPTION_HANDLER(3A4B50)
__SUB_CLASS_THIS(003A4B50, __thiscall, 23528,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A4B50
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
	lea eax,[esp+0x18]
	mov dword ptr [esp+0x18],0
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block5

 Block1:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block4

 Block3:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block4:
	mov dword ptr [esp+0x1C],0

 Block5:
	mov ecx,dword ptr [esp+0x44]
	mov edx,dword ptr [esp+0x40]
	push ecx
	push edx
	lea ecx,[esi-4]
	call CUIMechanicEquip::GetBodyPartFromPoint
	mov edi,eax
	test edi,edi
	jge Block7

 Block6:
	xor ebp,ebp
	mov dword ptr [esp+0x2C],ebp
	lea eax,[esp+0x28]
	mov dword ptr [esp+0x38],ebp
	lea ebx,[ebp+1]
	jmp Block8

 Block7:
	mov eax,edi
	neg eax
	push eax
	push 1
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,ebp
	call CharacterData::GetItem
	mov ebp,dword ptr [esp+0x2C]
	mov ebx,2

 Block8:
	mov edx,dword ptr [eax+4]
	mov dword ptr [esp+0x14],edx
	test bl,2
	je Block14

 Block9:
	mov eax,dword ptr [esp+0x24]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x18],ebx
	test eax,eax
	je Block14

 Block10:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x24]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x24]
	test ecx,ecx
	je Block13

 Block12:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block13:
	mov dword ptr [esp+0x24],0

 Block14:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test bl,1
	je Block18

 Block15:
	test ebp,ebp
	je Block18

 Block16:
	lea ebx,[ebp+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block18

 Block17:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebp
	call eax

 Block18:
	cmp dword ptr [esp+0x14],0
	je Block20

 Block19:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 5
	call CInputSystem::SetCursorState
	push 0
	push 1
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax+4],0
	push 0
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [esi]
	push 0
	mov eax,dword ptr [edx+0x30]
	push 0
	push 0
	push 0
	push 0
	push edi
	push 0
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x7C],1
	call eax
	mov ecx,dword ptr [esp+0x88]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	add eax,dword ptr [esp+0x88]
	lea ecx,[esi+0x7C]
	push eax
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call CUIToolTip::SetToolTip_Equip
	jmp Block21

 Block20:
	lea ecx,[esi+0x7C]
	call CUIToolTip::ClearToolTip
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 0
	call CInputSystem::SetCursorState

 Block21:
	xor eax,eax
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 8
}
}
