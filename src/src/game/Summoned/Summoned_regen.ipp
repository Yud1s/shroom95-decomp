#include "regen.hpp"
// Summoned.ipp
#include "Summoned.hpp"

// CSummoned::OnRemoved
_SUB_EXCEPTION_HANDLER(34C450)
__SUB_CLASS_THIS(0034C450, __thiscall, 67292,  CSummoned, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_34C450
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [esp+0x2C]
	call CInPacket::Decode1
	movzx ebx,al
	mov eax,dword ptr [esi+0x110]
	push eax
	lea edi,[esi+0x108]
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0x10
	je Block4

 Block1:
	mov ecx,dword ptr [esi+0x110]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,4
	jne Block3

 Block2:
	cmp dword ptr [esi+0xC0],0x4F837A
	je Block4

 Block3:
	mov edx,edi
	mov ecx,0x10
	call _ZtlSecureTearHelper<long>::call
	mov ecx,esi
	mov dword ptr [esi+0x110],eax
	call CSummoned::PrepareActionLayer

 Block4:
	mov ecx,esi
	call CSummoned::PreserveAction
	mov ecx,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	lea eax,[esi+4]
	push eax
	push 0
	call CMobPool::LetMobChasePuppet
	cmp dword ptr [esi+0xC0],0x217C05A
	jne Block7

 Block5:
	cmp dword ptr [esi+0x1DC],1
	jne Block7

 Block6:
	mov edx,dword ptr [esi+0xB4]
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push edx
	call CAnimationDisplayer::RemoveTeslacoilAnimation

 Block7:
	mov eax,dword ptr [esi+0xC0]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push eax
	call CSkillInfo::GetSkill
	cmp dword ptr [esi+0xBC],0
	mov edi,eax
	je Block28

 Block8:
	test edi,edi
	je Block28

 Block9:
	mov eax,dword ptr [esi+0xC0]
	cmp eax,0x1F914D0
	je Block27

 Block10:
	cmp eax,0x217E773
	je Block27

 Block11:
	test ebx,ebx
	je Block17

 Block12:
	cmp ebx,7
	jle Block27

 Block13:
	cmp ebx,0xA
	jg Block27

 Block14:
	lea ecx,[esp+0x14]
	push 0x1875
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,2
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x2C],0
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [eax]
	push 0xC
	push edx
	push eax
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x34],3
	call ZXString<char>::Format
	add esp,0xC
	push eax
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x34]
	add esp,8
	mov byte ptr [esp+0x24],bl
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov eax,dword ptr [esp+0x14]
	jmp Block25

 Block17:
	cmp eax,0x217C059
	je Block27

 Block18:
	cmp eax,0x217C061
	je Block27

 Block19:
	cmp eax,0x217C062
	je Block27

 Block20:
	cmp eax,0x217E76B
	je Block27

 Block21:
	cmp eax,0x1E9F99E
	je Block27

 Block22:
	lea ecx,[esp+0x18]
	push 0x1874
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x24],0
	mov dword ptr [esp+0x10],0
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [eax]
	push 0xC
	push edx
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x34],1
	call ZXString<char>::Format
	add esp,0xC
	push eax
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x18]
	add esp,8
	mov byte ptr [esp+0x24],0
	test eax,eax
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov eax,dword ptr [esp+0x18]

 Block25:
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	lea ecx,[esi+0x9C]
	call CSummoned::SummonedBullet::Container::OnRemoved

 Block28:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x18
	ret 4
}
}
// CSummoned::TryDoingAttackTarget
__SUB_CLASS_THIS(00352710, __thiscall, 67264,  CSummoned, void, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	sub esp,0x28
	mov dword ptr [ebp-0x28],ecx
	mov dword ptr [ebp-0x1C],0
	mov eax,dword ptr [ebp-0x28]
	cmp dword ptr [eax+0xD4],3
	je Block2

 Block1:
	jmp Block5

 Block2:
	mov ecx,dword ptr [ebp-0x28]
	call CSummoned::GetTargetID
	push eax
	call TSingleton<CMobPool>::GetInstance
	mov ecx,eax
	call CMobPool::GetMob
	mov dword ptr [ebp-4],eax
	cmp dword ptr [ebp-4],0
	jne Block4

 Block3:
	push 0
	mov ecx,dword ptr [ebp-0x28]
	call CSummoned::SetTargetID
	jmp Block5

 Block4:
	mov ecx,dword ptr [ebp+8]
	push ecx
	mov edx,dword ptr [ebp-4]
	push edx
	mov ecx,dword ptr [ebp-0x28]
	call CSummoned::AttackToTargetMob
	mov eax,dword ptr [ebp-0x28]
	mov ecx,dword ptr [ebp+8]
	mov dword ptr [eax+0x134],ecx

 Block5:
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CSummonedBase::Action2AIType
// 748E3C
static uint8_t _SUB_348DF0_LOOKUP_TABLE_0[13] = {
0, 0, 1, 4, 4, 4, 4, 4, 4, 2, 4, 4, 3, 
};
__SUB_CLASS_THIS(00348DF0, __thiscall, 67317,  CSummonedBase, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	add eax,0xFFFFFFFC
	cmp eax,0xC
	ja Block5

 Block1:
	movzx eax,byte ptr [eax+_SUB_348DF0_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block5
cmp EAX, 1
je Block4
cmp EAX, 2
je Block3
cmp EAX, 3
je Block2
cmp EAX, 4
je Block5


 Block2:
	mov eax,1
	ret 4

 Block3:
	mov eax,2
	ret 4

 Block4:
	mov eax,3
	ret 4

 Block5:
	xor eax,eax
	ret 4
}
}
// CSummonedBase::LoadAttackInfo
_SUB_EXCEPTION_HANDLER(358B20)
__SUB_CLASS_THIS(00358B20, __thiscall, 67315,  CSummonedBase, ZRef<SummonedAttackInfo>*, ZRef<SummonedAttackInfo>*, long, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_358B20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x9C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xB0]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x28],ecx
	xor ebp,ebp
	mov dword ptr [esp+0x1C],ebp
	mov dword ptr [esp+0x48],ebp
	mov esi,dword ptr [esp+0xC4]
	mov ebx,dword ptr [esp+0xD0]
	mov eax,1
	mov dword ptr [esp+0xB8],eax
	cmp esi,0x217C05A
	jne Block2

 Block1:
	cmp ebx,3
	je Block3

 Block2:
	xor eax,eax

 Block3:
	mov edi,dword ptr [esp+0xC8]
	neg eax
	sbb eax,eax
	and eax,dword ptr [esp+0xCC]
	lea ecx,[esi+esi]
	or ecx,edi
	shl ecx,6
	or ecx,eax
	add ecx,ecx
	add ecx,ecx
	or ecx,ebx
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x50]
	mov dword ptr [esp+0x50],ecx
	push eax
	mov ecx,offset CSummonedBase::ms_mSummonedAttackInfo
	call ZMap<unsigned long, ZRef<SummonedAttackInfo>, unsigned long>::GetAt
	test eax,eax
	jne Block111

 Block4:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push esi
	call CSkillInfo::GetSkill
	cmp eax,ebp
	jne Block6

 Block5:
	mov esi,dword ptr [esp+0xC0]
	mov dword ptr [esi+4],ebp
	lea ecx,[esp+0x44]
	mov dword ptr [esp+0x1C],1
	mov byte ptr [esp+0xB8],0
	call ZRef<SummonedAttackInfo>::~ZRef<SummonedAttackInfo>
	mov eax,esi
	jmp Block117

 Block6:
	push ebp
	push esi
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	call CActionMan::GetSummonedProp
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	sete cl
	test cl,cl
	je Block10

 Block7:
	mov esi,dword ptr [esp+0xC0]
	mov dword ptr [esi+4],ebp
	mov dword ptr [esp+0x1C],1
	mov byte ptr [esp+0xB8],1
	cmp eax,ebp
	je Block9

 Block8:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block9:
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0xB8],0
	call ZRef<SummonedAttackInfo>::~ZRef<SummonedAttackInfo>
	mov eax,esi
	jmp Block117

 Block10:
	mov ecx,dword ptr [esp+0x28]
	push ebx
	call CSummonedBase::AIType2Action
	mov esi,dword ptr [ZImports::_InterlockedIncrement]
	add eax,edi
	mov edi,dword ptr [eax*4+_D_S_SSUMMONEDACTIO]
	lea eax,[eax*4+_D_S_SSUMMONEDACTIO]
	mov dword ptr [esp+0x20],edi
	cmp edi,ebp
	je Block12

 Block11:
	lea ecx,[edi+8]
	push ecx
	call esi

 Block12:
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],edi
	cmp edi,ebp
	je Block14

 Block13:
	lea edx,[edi+8]
	push edx
	call esi

 Block14:
	mov ecx,dword ptr [esp+0x30]
	mov byte ptr [esp+0xC4],4
	cmp ecx,ebp
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea eax,[esp+0x7C]
	push eax
	mov byte ptr [esp+0xC8],3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC0],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x40],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block19

 Block17:
	cmp eax,0x80004002
	je Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	mov ebx,8
	mov byte ptr [esp+0xB8],7
	cmp word ptr [esp+0x70],bx
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x78]
	xor ecx,ecx
	mov word ptr [esp+0x70],cx
	cmp eax,ebp
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea edx,[esp+0x70]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov esi,dword ptr [esp+0x3C]
	cmp esi,ebp
	sete al
	test al,al
	je Block31

 Block24:
	mov ebx,dword ptr [esp+0xC0]
	mov dword ptr [ebx+4],ebp
	mov dword ptr [esp+0x1C],1
	mov byte ptr [esp+0xB8],3
	cmp esi,ebp
	je Block26

 Block25:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block26:
	cmp edi,ebp
	je Block28

 Block27:
	mov ecx,edi
	call _xbstr_t::Data_t::Release

 Block28:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xB8],1
	cmp eax,ebp
	je Block30

 Block29:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block30:
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0xB8],0
	call ZRef<SummonedAttackInfo>::~ZRef<SummonedAttackInfo>
	mov eax,ebx
	jmp Block117

 Block31:
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x3D5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xC4],bl
	cmp esi,ebp
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	lea edx,[esp+0x8C]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xC8],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC0],9
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x60]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[esp+0x80]
	mov byte ptr [esp+0xB8],0xB
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x50]
	mov dword ptr [esp+0x54],ebp
	call ZRef<SummonedAttackInfo>::_Alloc
	mov edi,dword ptr [esp+0x5C]
	mov esi,dword ptr [esp+0x54]
	mov byte ptr [esp+0xB8],0xC
	cmp edi,ebp
	je Block67

 Block34:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x690
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0xAC]
	push ecx
	mov byte ptr [esp+0xC8],0xD
	mov ecx,edi
	mov byte ptr [esp+0xC8],0xC
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC0],0xE
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x2C]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[esp+0xA0]
	mov byte ptr [esp+0xB8],0x10
	call Ztl_variant_t::~Ztl_variant_t
	mov ebp,dword ptr [esp+0x28]
	test ebp,ebp
	je Block50

 Block35:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1AD9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x9C]
	mov byte ptr [esp+0xC4],0x11
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0xC8],0x10
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC0],0x12
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzVector2D>::CreateFromUnknown
	lea ecx,[esp+0x90]
	mov byte ptr [esp+0xB8],0x14
	call Ztl_variant_t::~Ztl_variant_t
	mov ebx,dword ptr [esp+0x18]
	test ebx,ebx
	je Block37

 Block36:
	push offset _D_VTMISSING
	lea ecx,[esp+0x64]
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x60]
	push ecx
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	lea edx,[esi+0x2C]
	push edx
	lea eax,[esi+0x28]
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0xDC],0x15
	call IWzVector2D::_GetSnapshot
	lea ecx,[esp+0x60]
	mov byte ptr [esp+0xB8],0x14
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x696
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x68]
	mov byte ptr [esp+0xC0],0x16
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0xC4],0x14
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xC0],0x17
	call get_int32
	add esp,8
	lea ecx,[esp+0x60]
	mov dword ptr [esi+0x30],eax
	mov byte ptr [esp+0xB8],0x14
	call Ztl_variant_t::~Ztl_variant_t

 Block37:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x1ABE
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x6C]
	push ecx
	mov byte ptr [esp+0xC8],0x18
	mov ecx,ebp
	mov byte ptr [esp+0xC8],0x14
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC0],0x19
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x5C]
	call _x_com_ptr<IWzVector2D>::CreateFromUnknown
	lea ecx,[esp+0x60]
	mov byte ptr [esp+0xB8],0x1B
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1ACB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x38]
	mov byte ptr [esp+0xC4],0x1C
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0xC8],0x1B
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xC0],0x1D
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzVector2D>::CreateFromUnknown
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0xB8],0x1F
	call Ztl_variant_t::~Ztl_variant_t
	mov ebp,dword ptr [esp+0x58]
	mov ebx,dword ptr [esp+0x14]
	test ebp,ebp
	sete al
	test al,al
	sete al
	test al,al
	je Block44

 Block38:
	test ebx,ebx
	sete al
	test al,al
	sete al
	test al,al
	je Block44

 Block39:
	test ebx,ebx
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	test ebp,ebp
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	mov ecx,ebx
	call IWzShape2D::Gety
	push eax
	mov ecx,ebx
	call IWzShape2D::Getx
	push eax
	mov ecx,ebp
	call IWzShape2D::Gety
	push eax
	mov ecx,ebp
	call IWzShape2D::Getx
	push eax
	lea ecx,[esi+0x34]
	push ecx
	call SECRECT::SetRect
	add esp,0x14

 Block44:
	mov byte ptr [esp+0xB8],0x1B
	test ebx,ebx
	je Block46

 Block45:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block46:
	mov byte ptr [esp+0xB8],0x14
	test ebp,ebp
	je Block48

 Block47:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx

 Block48:
	cmp dword ptr [esp+0x18],0
	mov byte ptr [esp+0xB8],0x10
	je Block50

 Block49:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block50:
	push 1
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x691
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x34]
	push ecx
	mov byte ptr [esp+0xC4],0x20
	mov ecx,edi
	mov byte ptr [esp+0xC4],0x10
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xC0],0x21
	call get_int32
	add esp,8
	lea ecx,[esp+0x2C]
	mov dword ptr [esi+0x1C],eax
	mov byte ptr [esp+0xB8],0x10
	call Ztl_variant_t::~Ztl_variant_t
	push 1
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x692
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x34]
	mov byte ptr [esp+0xC0],0x22
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xC4],0x10
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xC0],0x23
	call get_int32
	add esp,8
	lea ecx,[esp+0x2C]
	mov dword ptr [esi+0x20],eax
	mov byte ptr [esp+0xB8],0x10
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x6A0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x34]
	mov byte ptr [esp+0xC0],0x24
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xC4],0x10
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xC0],0x25
	call get_int32
	add esp,8
	lea ecx,[esp+0x2C]
	mov dword ptr [esi+0x64],eax
	mov byte ptr [esp+0xB8],0x10
	call Ztl_variant_t::~Ztl_variant_t
	push 0
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_PRIORITY
	call _xbstr_t::_ctor_1
	lea eax,[esp+0x34]
	mov byte ptr [esp+0xC0],0x26
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xC4],0x10
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xC0],0x27
	call get_int32
	add esp,8
	lea ecx,[esp+0x2C]
	mov dword ptr [esi+0x68],eax
	call Ztl_variant_t::~Ztl_variant_t
	mov dword ptr [esp+0x40],0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0x1AAD
	mov bl,0x28
	push ecx
	mov byte ptr [esp+0xC4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x30]
	mov byte ptr [esp+0xBC],0x29
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xC0],bl
	call IWzProperty::Getitem
	movzx ebp,word ptr [eax]
	lea ecx,[esp+0x2C]
	call Ztl_variant_t::~Ztl_variant_t
	test bp,bp
	je Block56

 Block51:
	lea eax,[esp+0x14]
	push 0xACB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x20]
	mov byte ptr [esp+0xB8],0x2A
	test ecx,ecx
	je Block53

 Block52:
	mov edx,dword ptr [ecx]
	jmp Block54

 Block53:
	xor edx,edx

 Block54:
	mov ecx,dword ptr [eax]
	mov ebp,dword ptr [esp+0xC4]
	push edx
	mov eax,0x68DB8BAD
	imul ebp
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	push ebp
	add eax,edx
	push eax
	push ecx
	lea ecx,[esp+0x50]
	push ecx
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x14
	push eax
	lea ecx,[esp+0x1C]
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x18]
	push edx
	lea ecx,[esi+0x6C]
	call Ztl_bstr_t::op_assign
	lea ecx,[esp+0x18]
	call Ztl_bstr_t::~Ztl_bstr_t
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xB8],bl
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block57

 Block56:
	mov ebp,dword ptr [esp+0xC4]

 Block57:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x43F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x30]
	push ecx
	mov byte ptr [esp+0xC0],0x2B
	mov ecx,edi
	mov byte ptr [esp+0xC0],bl
	call IWzProperty::Getitem
	movzx edx,word ptr [eax]
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x14],edx
	call Ztl_variant_t::~Ztl_variant_t
	cmp word ptr [esp+0x14],0
	je Block63

 Block58:
	lea eax,[esp+0x14]
	push 0xACD
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	cmp dword ptr [esp+0x20],0
	mov byte ptr [esp+0xB8],0x2C
	je Block60

 Block59:
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [ecx]
	jmp Block61

 Block60:
	xor edx,edx

 Block61:
	mov ecx,dword ptr [eax]
	push edx
	mov eax,0x68DB8BAD
	imul ebp
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	push ebp
	add eax,edx
	push eax
	push ecx
	lea ecx,[esp+0x50]
	push ecx
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0x14
	push eax
	lea ecx,[esp+0x1C]
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x18]
	push edx
	lea ecx,[esi+0x70]
	call Ztl_bstr_t::op_assign
	lea ecx,[esp+0x18]
	call Ztl_bstr_t::~Ztl_bstr_t
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xB8],bl
	test eax,eax
	je Block63

 Block62:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block63:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x6A1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x34]
	push ecx
	mov byte ptr [esp+0xC4],0x2D
	mov ecx,edi
	mov byte ptr [esp+0xC4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xC0],0x2E
	call get_int32
	add esp,8
	lea ecx,[esp+0x2C]
	mov dword ptr [esi+0x74],eax
	mov byte ptr [esp+0xB8],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0x64
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0xB31
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x34]
	mov byte ptr [esp+0xC0],0x2F
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xC4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xC0],0x30
	call get_int32
	add esp,8
	lea ecx,[esp+0x2C]
	mov dword ptr [esi+0x78],eax
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0xB8],0x10
	test eax,eax
	je Block65

 Block64:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block65:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0xB8],0xC
	test eax,eax
	je Block67

 Block66:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block67:
	mov ecx,dword ptr [esp+0xD0]
	mov ebx,dword ptr [esp+0xC4]
	xor eax,eax
	mov ebp,1
	mov dword ptr [esi+0x7C],eax
	mov dword ptr [esi+0x18],eax
	cmp ecx,ebp
	jne Block70

 Block68:
	push ebx
	call is_self_destruct_summon_skill
	mov ecx,dword ptr [esp+0xD4]
	add esp,4
	test eax,eax
	je Block100

 Block69:
	jmp Block99

 Block70:
	cmp ecx,2
	jne Block73

 Block71:
	cmp ebx,0x217C063
	jne Block100

 Block72:
	jmp Block103

 Block73:
	cmp ecx,eax
	jne Block100

 Block74:
	cmp ebx,0xB71EEC
	jg Block86

 Block75:
	je Block82

 Block76:
	cmp ebx,0x23435E
	jg Block83

 Block77:
	je Block82

 Block78:
	cmp ebx,0x14282F
	je Block99

 Block79:
	cmp ebx,0x205D2D
	je Block81

 Block80:
	cmp ebx,0x21E3CD
	jne Block100

 Block81:
	mov dword ptr [esi+0x7C],ebp

 Block82:
	mov dword ptr [esi+0x18],ebp
	jmp Block100

 Block83:
	cmp ebx,0x236A6B
	je Block81

 Block84:
	cmp ebx,0x3EBA9F
	je Block99

 Block85:
	cmp ebx,0x40413F
	jmp Block98

 Block86:
	cmp ebx,0x217C059
	jg Block92

 Block87:
	je Block99

 Block88:
	cmp ebx,0xB8CC9C
	je Block81

 Block89:
	cmp ebx,0x1E9F99E
	je Block81

 Block90:
	cmp ebx,0x1F93BDB
	je Block99

 Block91:
	jmp Block100

 Block92:
	cmp ebx,0x217E76B
	jg Block97

 Block93:
	je Block99

 Block94:
	cmp ebx,0x217C061
	jl Block100

 Block95:
	cmp ebx,0x217C062
	jg Block100

 Block96:
	jmp Block99

 Block97:
	cmp ebx,0x217E773

 Block98:
	jne Block100

 Block99:
	mov dword ptr [esi+0x7C],ebp

 Block100:
	cmp ebx,0x217C05A
	jne Block104

 Block101:
	cmp ecx,3
	jne Block104

 Block102:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push ebx
	call CSkillInfo::GetSkill
	mov ecx,dword ptr [esp+0xCC]
	push ecx
	mov ecx,eax
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nMobCount
	mov dword ptr [esi+0x1C],eax

 Block103:
	mov dword ptr [esi+0x7C],ebp

 Block104:
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x50]
	push eax
	mov ecx,offset CSummonedBase::ms_mSummonedAttackInfo
	call ZMap<unsigned long, ZRef<SummonedAttackInfo>, unsigned long>::Insert
	mov esi,dword ptr [esp+0xC0]
	lea ecx,[esp+0x50]
	push ecx
	mov ecx,esi
	call ZRef<SummonedAttackInfo>::_ctor_copy
	lea ecx,[esp+0x50]
	mov dword ptr [esp+0x1C],ebp
	mov byte ptr [esp+0xB8],0xB
	call ZRef<SummonedAttackInfo>::~ZRef<SummonedAttackInfo>
	mov byte ptr [esp+0xB8],7
	test edi,edi
	je Block106

 Block105:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block106:
	mov eax,dword ptr [esp+0x3C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0xBC],3
	call edx
	mov ecx,dword ptr [esp+0x20]
	test ecx,ecx
	je Block108

 Block107:
	call _xbstr_t::Data_t::Release

 Block108:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xB8],1
	test eax,eax
	je Block110

 Block109:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block110:
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0xB8],0
	call ZRef<SummonedAttackInfo>::~ZRef<SummonedAttackInfo>
	mov eax,esi
	jmp Block117

 Block111:
	mov esi,dword ptr [esp+0x48]
	mov eax,dword ptr [esp+0xC0]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [eax+4],esi
	cmp esi,ebp
	je Block113

 Block112:
	lea ecx,[esi+4]
	push ecx
	call ebx

 Block113:
	mov dword ptr [esp+0x1C],1
	mov byte ptr [esp+0xB8],0
	cmp esi,ebp
	je Block116

 Block114:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block116

 Block115:
	push edi
	call ebx
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block116:
	mov eax,dword ptr [esp+0xC0]

 Block117:
	mov ecx,dword ptr [esp+0xB0]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA8
	ret 0x14
}
}
// CSummoned::SendRemove
_SUB_EXCEPTION_HANDLER(34C170)
__SUB_CLASS_THIS0(0034C170, __thiscall, 67253,  CSummoned, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_34C170
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push 0xD3
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	mov eax,dword ptr [esi+0xB4]
	push eax
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode4
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret
}
}
// CSummoned::CSummoned
_SUB_EXCEPTION_HANDLER(350010)
__SUB_CLASS_THIS(00350010, __thiscall, 67251,  CSummoned, void, unsigned long, unsigned long, long, unsigned char, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_350010
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
	call CLife::_ctor_default
	xor edi,edi
	mov dword ptr [esp+0x18],edi
	int 3// TODO: 	mov dword ptr [esi+0x88],offset CSummonedBase::`vftable'
	int 3// TODO: 	mov dword ptr [esi],offset CSummoned::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CSummoned::`vftable'{for `IVecCtrlOwner'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CSummoned::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [esi+0x88],offset CSummoned::`vftable'
	mov dword ptr [esi+0x94],edi
	int 3// TODO: 	mov dword ptr [esi+0xA0],offset ZList<ZRef<CSummoned::SummonedBullet>>::`vftable'
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esi+0xB0],edi
	int 3// TODO: 	mov dword ptr [esi+0x9C],offset CSummoned::SummonedBullet::Container::`vftable'
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [esi+0xB4],eax
	mov al,byte ptr [esp+0x2C]
	mov dword ptr [esi+0xB8],ecx
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esi+0xC0],edx
	mov byte ptr [esi+0xC4],al
	mov dword ptr [esi+0xC8],ecx
	mov dword ptr [esi+0xE8],edi
	mov dword ptr [esi+0xF4],edi
	mov dword ptr [esi+0xF8],edi
	lea edx,[esp+0x2C]
	push edx
	lea ecx,[esi+0x114]
	push 0x13
	mov byte ptr [esp+0x20],4
	mov dword ptr [ecx],edi
	call ZArray<ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>>::_Alloc
	mov dword ptr [esi+0x174],edi
	mov dword ptr [esi+0x178],edi
	mov dword ptr [esi+0x17C],edi
	mov dword ptr [esi+0x180],edi
	mov dword ptr [esi+0x184],edi
	mov dword ptr [esi+0x188],edi
	mov dword ptr [esi+0x190],edi
	lea ecx,[esi+0x194]
	mov byte ptr [esp+0x18],0xA
	call SECPOINT::_ctor_default
	lea ecx,[esi+0x1AC]
	mov byte ptr [esp+0x18],0xB
	call SECPOINT::_ctor_default
	lea ecx,[esi+0x1C4]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, long, unsigned long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned long, long, unsigned long>::_CalcAutoGrow
	mov dword ptr [esi+0x1DC],edi
	mov dword ptr [esi+0x1E4],edi
	mov dword ptr [esi+0x1EC],edi
	lea edx,[esi+0xFC]
	xor ecx,ecx
	mov byte ptr [esp+0x18],0xF
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x104],eax
	lea edx,[esi+0x108]
	or ecx,0xFFFFFFFF
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x124]
	xor ecx,ecx
	mov dword ptr [esi+0x110],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x12C],eax
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 0x14
}
}
// CSummoned::TryDoingAttackManual
_SUB_EXCEPTION_HANDLER(351240)
__SUB_CLASS_THIS(00351240, __thiscall, 67264,  CSummoned, void, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_351240
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xD94
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0xD40],ecx
	mov eax,dword ptr [ebp-0xD40]
	cmp dword ptr [eax+0xD4],5
	je Block2

 Block1:
	jmp Block98

 Block2:
	call TSingleton<CWvsContext>::GetInstance
	mov dword ptr [ebp-0x34],eax
	lea ecx,[ebp-0xB6C]
	push ecx
	mov ecx,dword ptr [ebp-0x34]
	call CWvsContext::GetCharacterData
	mov dword ptr [ebp-0xD44],eax
	mov ecx,dword ptr [ebp-0xD44]
	call ZRef<CharacterData>::op_star
	mov dword ptr [ebp-0x44],eax
	lea ecx,[ebp-0xB6C]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov edx,dword ptr [ebp-0x44]
	mov dword ptr [ebp-0x58],edx
	mov ecx,dword ptr [ebp-0x34]
	call CWvsContext::GetBasicStat
	mov dword ptr [ebp-0xA70],eax
	mov ecx,dword ptr [ebp-0x34]
	call CWvsContext::GetSecondaryStat
	mov dword ptr [ebp-0x164],eax
	mov dword ptr [ebp-0xA6C],0
	mov eax,dword ptr [ebp-0xA6C]
	push eax
	mov ecx,dword ptr [ebp-0xD40]
	add ecx,0x88
	call CSummonedBase::AIType2Action
	mov dword ptr [ebp-0x30],eax
	mov ecx,dword ptr [ebp-0xA6C]
	push ecx
	mov ecx,dword ptr [ebp-0xD40]
	add ecx,0x88
	call CSummonedBase::AIType2Action
	mov edx,dword ptr [ebp-0x30]
	sub edx,eax
	mov dword ptr [ebp-0x3C],edx
	mov eax,dword ptr [ebp-0xA6C]
	push eax
	mov ecx,dword ptr [ebp-0xD40]
	mov edx,dword ptr [ecx+0xC8]
	push edx
	mov eax,dword ptr [ebp-0x3C]
	push eax
	mov ecx,dword ptr [ebp-0xD40]
	mov edx,dword ptr [ecx+0xC0]
	push edx
	lea eax,[ebp-0xB74]
	push eax
	mov ecx,dword ptr [ebp-0xD40]
	add ecx,0x88
	call CSummonedBase::LoadAttackInfo
	mov dword ptr [ebp-0xD48],eax
	mov ecx,dword ptr [ebp-0xD48]
	call ZRef<SummonedAttackInfo>::op_star_access
	mov dword ptr [ebp-0x1C],eax
	lea ecx,[ebp-0xB74]
	call ZRef<SummonedAttackInfo>::~ZRef<SummonedAttackInfo>
	cmp dword ptr [ebp-0x1C],0
	jne Block4

 Block3:
	jmp Block98

 Block4:
	mov dword ptr [ebp-0x160],6
	mov ecx,dword ptr [ebp-0x1C]
	mov edx,dword ptr [ecx+0x1C]
	mov dword ptr [ebp-0x14C],edx
	mov dword ptr [ebp-0xFC],1
	mov dword ptr [ebp-0xF8],0
	mov dword ptr [ebp-0x64],0
	mov eax,dword ptr [ebp-0x1C]
	mov ecx,dword ptr [eax+0x18]
	mov dword ptr [ebp-0xF4],ecx
	mov edx,dword ptr [ebp-0x1C]
	mov eax,dword ptr [edx+0x7C]
	mov dword ptr [ebp-0xA68],eax
	mov dword ptr [ebp-0x18],0
	cmp dword ptr [ebp-0xA68],0
	jne Block34

 Block5:
	mov ecx,dword ptr [ebp-0xD40]
	cmp dword ptr [ecx+0xC0],0x4F837A
	jne Block7

 Block6:
	lea edx,[ebp-0xB7C]
	push edx
	mov ecx,dword ptr [ebp-0xD40]
	add ecx,4
	mov eax,dword ptr [ebp-0xD40]
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [edx+0x10]
	call eax
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [eax+4]
	mov dword ptr [ebp-0xA78],ecx
	mov dword ptr [ebp-0xA74],edx
	jmp Block8

 Block7:
	call TSingleton<CUserLocal>::GetInstance
	add eax,4
	mov dword ptr [ebp-0xD4C],eax
	lea eax,[ebp-0xB84]
	push eax
	mov ecx,dword ptr [ebp-0xD4C]
	mov edx,dword ptr [ecx]
	mov ecx,dword ptr [ebp-0xD4C]
	mov eax,dword ptr [edx+0x10]
	call eax
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [eax+4]
	mov dword ptr [ebp-0xA78],ecx
	mov dword ptr [ebp-0xA74],edx

 Block8:
	mov dword ptr [ebp-0xA7C],1

 Block9:
	mov eax,1
	test eax,eax
	je Block24

 Block10:
	push 0
	mov ecx,dword ptr [ebp-0xA74]
	push ecx
	mov edx,dword ptr [ebp-0xA78]
	push edx
	call TSingleton<CMobPool>::GetInstance
	mov ecx,eax
	call CMobPool::FindNearestMob
	mov dword ptr [ebp-0x148],eax
	cmp dword ptr [ebp-0x148],0
	jne Block12

 Block11:
	jmp Block98

 Block12:
	lea eax,[ebp-0xB8C]
	push eax
	mov ecx,dword ptr [ebp-0xD40]
	add ecx,4
	mov edx,dword ptr [ebp-0xD40]
	mov eax,dword ptr [edx+4]
	mov edx,dword ptr [eax+0x10]
	call edx
	mov eax,dword ptr [eax]
	mov dword ptr [ebp-0xA84],eax
	lea ecx,[ebp-0xB94]
	push ecx
	mov ecx,dword ptr [ebp-0xD40]
	add ecx,4
	mov edx,dword ptr [ebp-0xD40]
	mov eax,dword ptr [edx+4]
	mov edx,dword ptr [eax+0x10]
	call edx
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [ebp-0x1C]
	add eax,dword ptr [ecx+0x2C]
	mov dword ptr [ebp-0xA80],eax
	mov edx,dword ptr [ebp-0x1C]
	mov eax,dword ptr [ebp-0xA84]
	add eax,dword ptr [edx+0x2C]
	mov dword ptr [ebp-0xA8C],eax
	mov ecx,dword ptr [ebp-0xA80]
	mov dword ptr [ebp-0xA88],ecx
	mov edx,dword ptr [ebp-0x1C]
	mov eax,dword ptr [edx+0x30]
	neg eax
	add eax,dword ptr [ebp-0xA84]
	mov dword ptr [ebp-0xAA4],eax
	mov ecx,dword ptr [ebp-0xA80]
	mov dword ptr [ebp-0xAA0],ecx
	mov edx,dword ptr [ebp-0x1C]
	mov eax,dword ptr [ebp-0xA84]
	sub eax,dword ptr [edx+0x2C]
	mov dword ptr [ebp-0xA9C],eax
	mov ecx,dword ptr [ebp-0xA80]
	mov dword ptr [ebp-0xA98],ecx
	mov edx,dword ptr [ebp-0x1C]
	mov eax,dword ptr [ebp-0xA84]
	add eax,dword ptr [edx+0x30]
	mov dword ptr [ebp-0xA94],eax
	mov ecx,dword ptr [ebp-0xA80]
	mov dword ptr [ebp-0xA90],ecx
	mov edx,dword ptr [ebp-0x148]
	push edx
	push 4
	mov eax,dword ptr [ebp-0xA80]
	push eax
	mov ecx,dword ptr [ebp-0xAA4]
	push ecx
	mov edx,dword ptr [ebp-0xA8C]
	push edx
	mov eax,dword ptr [ebp-0xA84]
	push eax
	call TSingleton<CMobPool>::GetInstance
	mov ecx,eax
	call CMobPool::CheckMobInTrapezoid
	test eax,eax
	je Block15

 Block13:
	mov ecx,dword ptr [ebp-0xA80]
	add ecx,1
	push ecx
	mov edx,dword ptr [ebp-0xAA4]
	push edx
	mov eax,dword ptr [ebp-0xA8C]
	push eax
	call _zmax_long
	add esp,8
	push eax
	mov ecx,dword ptr [ebp-0xA80]
	push ecx
	mov edx,dword ptr [ebp-0xAA4]
	push edx
	mov eax,dword ptr [ebp-0xA8C]
	push eax
	call _zmin_long
	add esp,8
	push eax
	lea ecx,[ebp-0x2C]
	push ecx
	call SetRect
	mov dword ptr [ebp-0x38],1
	jmp Block24

 Block15:
	mov edx,dword ptr [ebp-0x148]
	push edx
	push 4
	mov eax,dword ptr [ebp-0xA80]
	push eax
	mov ecx,dword ptr [ebp-0xA94]
	push ecx
	mov edx,dword ptr [ebp-0xA9C]
	push edx
	mov eax,dword ptr [ebp-0xA84]
	push eax
	call TSingleton<CMobPool>::GetInstance
	mov ecx,eax
	call CMobPool::CheckMobInTrapezoid
	test eax,eax
	je Block18

 Block16:
	mov ecx,dword ptr [ebp-0xA80]
	add ecx,1
	push ecx
	mov edx,dword ptr [ebp-0xA94]
	push edx
	mov eax,dword ptr [ebp-0xA9C]
	push eax
	call _zmax_long
	add esp,8
	push eax
	mov ecx,dword ptr [ebp-0xA80]
	push ecx
	mov edx,dword ptr [ebp-0xA94]
	push edx
	mov eax,dword ptr [ebp-0xA9C]
	push eax
	call _zmin_long
	add esp,8
	push eax
	lea ecx,[ebp-0x2C]
	push ecx
	call SetRect
	mov dword ptr [ebp-0x38],0
	jmp Block24

 Block18:
	mov edx,dword ptr [ebp-0xD40]
	cmp dword ptr [edx+0xC0],0x4F8379
	je Block20

 Block19:
	mov eax,dword ptr [ebp-0xD40]
	cmp dword ptr [eax+0xC0],0x4FA6A2
	jne Block22

 Block20:
	cmp dword ptr [ebp-0xA7C],0
	je Block22

 Block21:
	lea ecx,[ebp-0xB9C]
	push ecx
	mov ecx,dword ptr [ebp-0xD40]
	add ecx,4
	mov edx,dword ptr [ebp-0xD40]
	mov eax,dword ptr [edx+4]
	mov edx,dword ptr [eax+0x10]
	call edx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [eax+4]
	mov dword ptr [ebp-0xA78],ecx
	mov dword ptr [ebp-0xA74],edx
	jmp Block23

 Block22:
	jmp Block98

 Block23:
	mov dword ptr [ebp-0xA7C],0
	jmp Block9

 Block24:
	mov dword ptr [ebp-0x64],1
	sub esp,0x10
	mov eax,esp
	mov ecx,dword ptr [ebp-0x2C]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [ebp-0x28]
	mov dword ptr [eax+4],edx
	mov ecx,dword ptr [ebp-0x24]
	mov dword ptr [eax+8],ecx
	mov edx,dword ptr [ebp-0x20]
	mov dword ptr [eax+0xC],edx
	lea eax,[ebp-0xBA4]
	push eax
	mov ecx,dword ptr [ebp-0x148]
	call CMob::GetHitPoint
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [eax+4]
	mov dword ptr [ebp-0x15C],ecx
	mov dword ptr [ebp-0x158],edx
	mov eax,dword ptr [ebp-0xD40]
	cmp dword ptr [eax+0xC0],0x2F9F6E
	je Block32

 Block25:
	mov ecx,dword ptr [ebp-0xD40]
	cmp dword ptr [ecx+0xC0],0x31260D
	je Block32

 Block26:
	mov edx,dword ptr [ebp-0xD40]
	cmp dword ptr [edx+0xC0],0x4F837A
	je Block32

 Block27:
	mov eax,dword ptr [ebp-0xD40]
	cmp dword ptr [eax+0xC0],0xE4E5AC
	je Block32

 Block28:
	mov ecx,dword ptr [ebp-0xD40]
	cmp dword ptr [ecx+0xC0],0xA7DCAC
	je Block32

 Block29:
	mov edx,dword ptr [ebp-0xD40]
	cmp dword ptr [edx+0xC0],0xB71EEC
	je Block32

 Block30:
	mov eax,dword ptr [ebp-0xD40]
	cmp dword ptr [eax+0xC0],0xC6612C
	je Block32

 Block31:
	mov ecx,dword ptr [ebp-0xD40]
	cmp dword ptr [ecx+0xC0],0xD5A36D
	jne Block33

 Block32:
	mov edx,dword ptr [ebp-0x1C]
	add edx,0x34
	push edx
	lea eax,[ebp-0x54]
	push eax
	call SECRECT::ToRect
	add esp,8
	mov ecx,dword ptr [ebp-0x158]
	push ecx
	mov edx,dword ptr [ebp-0x15C]
	push edx
	lea eax,[ebp-0x54]
	push eax
	call OffsetRect
	push 0
	push 0
	push 0
	push 0
	push 0
	mov ecx,dword ptr [ebp-0x148]
	push ecx
	mov edx,dword ptr [ebp-0x14C]
	sub edx,1
	push edx
	lea eax,[ebp-0x144]
	push eax
	lea ecx,[ebp-0x54]
	push ecx
	call TSingleton<CMobPool>::GetInstance
	mov ecx,eax
	call CMobPool::FindHitMobInRect
	add eax,dword ptr [ebp-0x64]
	mov dword ptr [ebp-0x64],eax
	mov dword ptr [ebp-0x18],1
	mov dword ptr [ebp-0xF8],0x78

 Block33:
	jmp Block58

 Block34:
	mov edx,dword ptr [ebp-0x1C]
	add edx,0x34
	push edx
	lea eax,[ebp-0xB44]
	push eax
	call SECRECT::ToRect
	add esp,8
	push 0
	lea ecx,[ebp-0xBAC]
	push ecx
	mov ecx,dword ptr [ebp-0xD40]
	add ecx,4
	mov edx,dword ptr [ebp-0xD40]
	mov eax,dword ptr [edx+4]
	mov edx,dword ptr [eax+0x10]
	call edx
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[ebp-0xBB4]
	push ecx
	mov ecx,dword ptr [ebp-0xD40]
	add ecx,4
	mov edx,dword ptr [ebp-0xD40]
	mov eax,dword ptr [edx+4]
	mov edx,dword ptr [eax+0x10]
	call edx
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[ebp-0xB44]
	push ecx
	call adjust_rect
	add esp,0x10
	push 0
	push 0
	push 0
	mov edx,dword ptr [ebp-0x1C]
	mov eax,dword ptr [edx+0x68]
	push eax
	push 0
	push 0
	mov ecx,dword ptr [ebp-0x14C]
	push ecx
	lea edx,[ebp-0xAE0]
	push edx
	lea eax,[ebp-0xB44]
	push eax
	call TSingleton<CMobPool>::GetInstance
	mov ecx,eax
	call CMobPool::FindHitMobInRect
	mov dword ptr [ebp-0xB24],eax
	mov ecx,dword ptr [ebp-0x1C]
	add ecx,0x34
	push ecx
	lea edx,[ebp-0xB34]
	push edx
	call SECRECT::ToRect
	add esp,8
	push 1
	lea eax,[ebp-0xBBC]
	push eax
	mov ecx,dword ptr [ebp-0xD40]
	add ecx,4
	mov edx,dword ptr [ebp-0xD40]
	mov eax,dword ptr [edx+4]
	mov edx,dword ptr [eax+0x10]
	call edx
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[ebp-0xBC4]
	push ecx
	mov ecx,dword ptr [ebp-0xD40]
	add ecx,4
	mov edx,dword ptr [ebp-0xD40]
	mov eax,dword ptr [edx+4]
	mov edx,dword ptr [eax+0x10]
	call edx
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[ebp-0xB34]
	push ecx
	call adjust_rect
	add esp,0x10
	push 0
	push 0
	push 0
	mov edx,dword ptr [ebp-0x1C]
	mov eax,dword ptr [edx+0x68]
	push eax
	push 0
	push 0
	mov ecx,dword ptr [ebp-0x14C]
	push ecx
	lea edx,[ebp-0xB20]
	push edx
	lea eax,[ebp-0xB34]
	push eax
	call TSingleton<CMobPool>::GetInstance
	mov ecx,eax
	call CMobPool::FindHitMobInRect
	mov dword ptr [ebp-0xAE4],eax
	mov ecx,dword ptr [ebp-0xD40]
	cmp dword ptr [ecx+0xC0],0x217E773
	jne Block38

 Block35:
	cmp dword ptr [ebp-0xB24],0
	jne Block37

 Block36:
	cmp dword ptr [ebp-0xAE4],0
	je Block38

 Block37:
	mov dword ptr [ebp-0xA6C],1
	mov edx,dword ptr [ebp-0xA6C]
	push edx
	mov ecx,dword ptr [ebp-0xD40]
	add ecx,0x88
	call CSummonedBase::AIType2Action
	mov dword ptr [ebp-0x30],eax

 Block38:
	cmp dword ptr [ebp-0xB24],0
	jne Block42

 Block39:
	cmp dword ptr [ebp-0xAE4],0
	jne Block42

 Block40:
	cmp dword ptr [ebp-0xA6C],1
	je Block42

 Block41:
	jmp Block58

 Block42:
	mov eax,dword ptr [ebp-0xB24]
	cmp eax,dword ptr [ebp-0xAE4]
	je Block44

 Block43:
	mov ecx,dword ptr [ebp-0xB24]
	xor edx,edx
	cmp ecx,dword ptr [ebp-0xAE4]
	setg dl
	mov dword ptr [ebp-0x38],edx
	jmp Block46

 Block44:
	call TSingleton<CUserLocal>::GetInstance
	add eax,4
	mov dword ptr [ebp-0xD50],eax
	lea eax,[ebp-0xBD4]
	push eax
	mov ecx,dword ptr [ebp-0xD40]
	add ecx,4
	mov edx,dword ptr [ebp-0xD40]
	mov eax,dword ptr [edx+4]
	mov edx,dword ptr [eax+0x10]
	call edx
	mov esi,eax
	lea eax,[ebp-0xBCC]
	push eax
	mov ecx,dword ptr [ebp-0xD50]
	mov edx,dword ptr [ecx]
	mov ecx,dword ptr [ebp-0xD50]
	mov eax,dword ptr [edx+0x10]
	call eax
	mov ecx,dword ptr [eax]
	xor edx,edx
	cmp ecx,dword ptr [esi]
	setge dl
	mov dword ptr [ebp-0x38],edx
	mov eax,dword ptr [ebp-0xD40]
	cmp dword ptr [eax+0xC0],0x236A6B
	jne Block46

 Block45:
	xor ecx,ecx
	cmp dword ptr [ebp-0x38],0
	sete cl
	mov dword ptr [ebp-0x38],ecx

 Block46:
	cmp dword ptr [ebp-0x38],0
	je Block48

 Block47:
	lea edx,[ebp-0xAE0]
	mov dword ptr [ebp-0xD54],edx
	jmp Block49

 Block48:
	lea eax,[ebp-0xB20]
	mov dword ptr [ebp-0xD54],eax

 Block49:
	mov ecx,0xF
	mov esi,dword ptr [ebp-0xD54]
	lea edi,[ebp-0x148]
	rep movsd
	cmp dword ptr [ebp-0x38],0
	je Block51

 Block50:
	lea ecx,[ebp-0xB44]
	mov dword ptr [ebp-0xD58],ecx
	jmp Block52

 Block51:
	lea edx,[ebp-0xB34]
	mov dword ptr [ebp-0xD58],edx

 Block52:
	mov eax,dword ptr [ebp-0xD58]
	mov dword ptr [ebp-0xBD8],eax
	mov ecx,dword ptr [ebp-0xBD8]
	mov edx,dword ptr [ecx]
	mov dword ptr [ebp-0x54],edx
	mov eax,dword ptr [ecx+4]
	mov dword ptr [ebp-0x50],eax
	mov edx,dword ptr [ecx+8]
	mov dword ptr [ebp-0x4C],edx
	mov eax,dword ptr [ecx+0xC]
	mov dword ptr [ebp-0x48],eax
	cmp dword ptr [ebp-0x38],0
	je Block54

 Block53:
	mov ecx,dword ptr [ebp-0xB24]
	mov dword ptr [ebp-0xD5C],ecx
	jmp Block55

 Block54:
	mov edx,dword ptr [ebp-0xAE4]
	mov dword ptr [ebp-0xD5C],edx

 Block55:
	mov eax,dword ptr [ebp-0xD5C]
	and eax,0xFFFF
	mov dword ptr [ebp-0x64],eax
	jne Block58

 Block56:
	cmp dword ptr [ebp-0xA6C],1
	je Block58

 Block57:
	jmp Block98

 Block58:
	mov ecx,dword ptr [ebp-0x38]
	push ecx
	mov ecx,dword ptr [ebp-0xD40]
	call CSummoned::_ZtlSecureGet_m_nMoveAction
	push eax
	call get_action_from_act_dir
	add esp,4
	push eax
	call make_act_dir
	add esp,8
	mov edx,eax
	mov ecx,dword ptr [ebp-0xD40]
	call CSummoned::_ZtlSecurePut_m_nMoveAction
	xor edx,edx
	cmp dword ptr [ebp-0xA6C],1
	sete dl
	push edx
	mov eax,dword ptr [ebp-0x38]
	push eax
	mov ecx,dword ptr [ebp-0x1C]
	mov edx,dword ptr [ecx+0x64]
	push edx
	mov eax,dword ptr [ebp+8]
	push eax
	mov ecx,dword ptr [ebp-0x1C]
	add ecx,0x6C
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0xBDC],esp
	push ecx
	mov ecx,edx
	call Ztl_bstr_t::_ctor_copy
	mov dword ptr [ebp-0xD60],eax
	mov ecx,dword ptr [ebp-0xD40]
	add ecx,0x8C
	call CSummoned::ATTACKEFFECT::SetAttackEffect
	mov dword ptr [ebp-0x60],0
	lea eax,[ebp-0xBE4]
	push eax
	call TSingleton<CWvsContext>::GetInstance
	mov ecx,eax
	call CWvsContext::GetCharacterData
	mov dword ptr [ebp-0xD64],eax
	mov ecx,dword ptr [ebp-0xD64]
	mov dword ptr [ebp-0xD68],ecx
	mov dword ptr [ebp-4],0
	lea edx,[ebp-0x60]
	push edx
	mov eax,dword ptr [ebp-0xD40]
	mov ecx,dword ptr [eax+0xC0]
	push ecx
	mov ecx,dword ptr [ebp-0xD68]
	call ZRef<CharacterData>::op_star
	push eax
	call TSingleton<CSkillInfo>::GetInstance
	mov ecx,eax
	call CSkillInfo::GetSkillLevel_0
	mov dword ptr [ebp-0x150],eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0xBE4]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov edx,dword ptr [ebp-0x150]
	push edx
	mov ecx,dword ptr [ebp-0x60]
	call SKILLENTRY::GetLevelData
	mov dword ptr [ebp-0x40],eax
	mov eax,dword ptr [ebp-0x1C]
	mov ecx,dword ptr [eax+0x64]
	mov dword ptr [ebp-0xF0],ecx
	push 0
	lea edx,[ebp-0xA64]
	push edx
	mov eax,dword ptr [ebp-0x64]
	push eax
	mov ecx,dword ptr [ebp-0x30]
	push ecx
	push 0
	mov edx,dword ptr [ebp-0x150]
	push edx
	mov ecx,dword ptr [ebp-0x58]
	call GW_CharacterStat::_ZtlSecureGet_nLevel
	movzx eax,al
	push eax
	mov ecx,dword ptr [ebp-0x60]
	push ecx
	lea ecx,[ebp-0xEC]
	call CSkill_HitAni::_ctor_0
	mov dword ptr [ebp-4],1
	mov dword ptr [ebp-0xB48],0
	jmp Block60

 Block59:
	mov edx,dword ptr [ebp-0xB48]
	add edx,1
	mov dword ptr [ebp-0xB48],edx

 Block60:
	mov eax,dword ptr [ebp-0xB48]
	cmp eax,dword ptr [ebp-0x64]
	jge Block84

 Block61:
	mov ecx,dword ptr [ebp-0xB48]
	imul ecx,0x98
	lea edx,[ebp+ecx-0xA64]
	mov dword ptr [ebp-0xB50],edx
	push 0x98
	push 0
	mov eax,dword ptr [ebp-0xB50]
	push eax
	call _memset
	add esp,0xC
	mov ecx,dword ptr [ebp-0xB50]
	mov edx,dword ptr [ebp-0xB48]
	mov eax,dword ptr [ebp+edx*4-0x148]
	mov dword ptr [ecx],eax
	push 0
	mov ecx,dword ptr [ebp-0xB50]
	mov ecx,dword ptr [ecx]
	call CMob::GetCurrentAction
	mov edx,dword ptr [ebp-0xB50]
	mov dword ptr [edx+8],eax
	mov eax,dword ptr [ebp-0xB50]
	mov ecx,dword ptr [eax]
	call CMob::GetCurrentFrameIndex
	mov ecx,dword ptr [ebp-0xB50]
	mov dword ptr [ecx+0xC],eax
	cmp dword ptr [ebp-0xB48],0
	jne Block64

 Block62:
	cmp dword ptr [ebp-0x18],0
	je Block64

 Block63:
	lea edx,[ebp-0x15C]
	mov dword ptr [ebp-0xD6C],edx
	jmp Block65

 Block64:
	sub esp,0x10
	mov eax,esp
	mov ecx,dword ptr [ebp-0x54]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [ebp-0x50]
	mov dword ptr [eax+4],edx
	mov ecx,dword ptr [ebp-0x4C]
	mov dword ptr [eax+8],ecx
	mov edx,dword ptr [ebp-0x48]
	mov dword ptr [eax+0xC],edx
	lea eax,[ebp-0xBF0]
	push eax
	mov ecx,dword ptr [ebp-0xB50]
	mov ecx,dword ptr [ecx]
	call CMob::GetHitPoint
	mov dword ptr [ebp-0xD6C],eax

 Block65:
	mov edx,dword ptr [ebp-0xD6C]
	mov dword ptr [ebp-0xBE8],edx
	mov eax,dword ptr [ebp-0xBE8]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [ebp-0xB50]
	mov dword ptr [eax+0x90],ecx
	mov dword ptr [eax+0x94],edx
	cmp dword ptr [ebp-0x18],0
	je Block67

 Block66:
	mov ecx,dword ptr [ebp-0xF8]
	mov dword ptr [ebp-0xD70],ecx
	jmp Block68

 Block67:
	mov edx,dword ptr [ebp-0xB48]
	imul edx,0x32
	mov dword ptr [ebp-0xD70],edx

 Block68:
	mov eax,dword ptr [ebp-0xF0]
	add eax,dword ptr [ebp-0xD70]
	mov ecx,dword ptr [ebp-0xB50]
	mov dword ptr [ecx+0x10],eax
	mov edx,dword ptr [ebp-0xB50]
	mov ecx,dword ptr [edx]
	call CMob::GetRandomHitAction
	mov ecx,dword ptr [ebp-0xB50]
	mov dword ptr [ecx+4],eax
	mov edx,dword ptr [ebp-0xB50]
	mov ecx,dword ptr [edx]
	call CMob::GetMobStat
	mov dword ptr [ebp-0xB58],eax
	mov eax,dword ptr [ebp-0xD40]
	mov ecx,dword ptr [eax+0xE0]
	mov dword ptr [ebp-0xB4C],ecx
	call TSingleton<CUserLocal>::GetInstance
	mov ecx,eax
	call CUserLocal::GetRepeatSkillPoint
	imul eax,dword ptr [ebp-0xB4C]
	cdq
	mov ecx,0x64
	idiv ecx
	add eax,dword ptr [ebp-0xB4C]
	mov dword ptr [ebp-0xB4C],eax
	cmp dword ptr [ebp-0xF4],0
	je Block70

 Block69:
	mov ecx,dword ptr [ebp-0x34]
	call CWvsContext::GetDragonFuryDamage
	push eax
	call TSingleton<CUserLocal>::GetInstance
	add eax,0x88
	mov ecx,eax
	call CAvatar::GetWeaponItemID
	push eax
	mov edx,dword ptr [ebp-0xB4C]
	push edx
	sub esp,8
	mov eax,esp
	mov dword ptr [ebp-0xBF4],esp
	push eax
	call TSingleton<CUserLocal>::GetInstance
	mov ecx,eax
	call CUserLocal::GetPassiveSkillData
	mov dword ptr [ebp-0xD74],eax
	mov ecx,dword ptr [ebp-0xD74]
	mov dword ptr [ebp-0xD78],ecx
	mov byte ptr [ebp-4],2
	mov edx,dword ptr [ebp-0xD40]
	mov eax,dword ptr [edx+0xC8]
	push eax
	mov ecx,dword ptr [ebp-0x60]
	push ecx
	mov edx,dword ptr [ebp-0x164]
	push edx
	mov eax,dword ptr [ebp-0xA70]
	push eax
	mov ecx,dword ptr [ebp-0x44]
	push ecx
	mov edx,dword ptr [ebp-0xB58]
	push edx
	mov eax,dword ptr [ebp-0xB50]
	mov ecx,dword ptr [eax]
	call CMob::GetMobID
	push eax
	mov ecx,dword ptr [ebp-0x34]
	call CWvsContext::GetCalcDamage
	mov byte ptr [ebp-4],1
	mov ecx,eax
	call CalcDamage::MDamage_2
	mov dword ptr [ebp-0xD7C],eax
	mov ecx,dword ptr [ebp-0xB50]
	mov edx,dword ptr [ebp-0xD7C]
	mov dword ptr [ecx+0x18],edx
	jmp Block71

 Block70:
	push 0
	call TSingleton<CUserLocal>::GetInstance
	add eax,0x88
	mov ecx,eax
	call CAvatar::GetWeaponItemID
	push eax
	mov eax,dword ptr [ebp-0xB4C]
	push eax
	sub esp,8
	mov ecx,esp
	mov dword ptr [ebp-0xBF8],esp
	push ecx
	call TSingleton<CUserLocal>::GetInstance
	mov ecx,eax
	call CUserLocal::GetPassiveSkillData
	mov dword ptr [ebp-0xD80],eax
	mov edx,dword ptr [ebp-0xD80]
	mov dword ptr [ebp-0xD84],edx
	mov byte ptr [ebp-4],3
	mov eax,dword ptr [ebp-0xD40]
	mov ecx,dword ptr [eax+0xC8]
	push ecx
	mov edx,dword ptr [ebp-0x60]
	push edx
	mov eax,dword ptr [ebp-0x164]
	push eax
	mov ecx,dword ptr [ebp-0xA70]
	push ecx
	mov edx,dword ptr [ebp-0x44]
	push edx
	mov eax,dword ptr [ebp-0xB58]
	push eax
	mov ecx,dword ptr [ebp-0xB50]
	mov ecx,dword ptr [ecx]
	call CMob::GetMobID
	push eax
	mov ecx,dword ptr [ebp-0x34]
	call CWvsContext::GetCalcDamage
	mov byte ptr [ebp-4],1
	mov ecx,eax
	call CalcDamage::PDamage_1
	mov dword ptr [ebp-0xD88],eax
	mov edx,dword ptr [ebp-0xB50]
	mov eax,dword ptr [ebp-0xD88]
	mov dword ptr [edx+0x18],eax

 Block71:
	mov ecx,dword ptr [ebp-0xB50]
	mov ecx,dword ptr [ecx]
	call CMob::GetTemplate
	mov ecx,eax
	call CMobTemplate::_ZtlSecureGet_nFixedDamage
	mov dword ptr [ebp-0xB5C],eax
	cmp dword ptr [ebp-0xB5C],0
	jle Block74

 Block72:
	mov edx,dword ptr [ebp-0xB50]
	cmp dword ptr [edx+0x18],0
	jle Block74

 Block73:
	mov eax,dword ptr [ebp-0xB50]
	mov ecx,dword ptr [ebp-0xB5C]
	mov dword ptr [eax+0x18],ecx

 Block74:
	mov edx,dword ptr [ebp-0xD40]
	mov eax,dword ptr [edx+0xC0]
	push eax
	mov ecx,dword ptr [ebp-0xB50]
	mov ecx,dword ptr [ecx]
	call CMob::GetTemplate
	mov ecx,eax
	call CMobTemplate::IsVulnerableTo
	test eax,eax
	jne Block76

 Block75:
	mov edx,dword ptr [ebp-0xB50]
	mov dword ptr [edx+0x18],0

 Block76:
	mov eax,dword ptr [ebp-0xB50]
	mov ecx,dword ptr [eax]
	call CMob::GetTemplate
	mov ecx,eax
	call CMobTemplate::_ZtlSecureGet_nWeaponID
	mov dword ptr [ebp-0xB60],eax
	lea ecx,[ebp-0xC00]
	push ecx
	call TSingleton<CWvsContext>::GetInstance
	mov ecx,eax
	call CWvsContext::GetCharacterData
	mov dword ptr [ebp-0xD8C],eax
	mov ecx,dword ptr [ebp-0xD8C]
	call ZRef<CharacterData>::op_star
	mov dword ptr [ebp-0xB54],eax
	lea ecx,[ebp-0xC00]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	cmp dword ptr [ebp-0xB60],0
	je Block81

 Block77:
	mov ecx,dword ptr [ebp-0xB54]
	add ecx,0x151
	call ZRef<GW_ItemSlotBase>::op_arrow
	add eax,0xC
	mov ecx,eax
	call TSecType<long>::op_t
	cmp dword ptr [ebp-0xB60],eax
	je Block81

 Block78:
	mov edx,dword ptr [ebp-0xB50]
	mov dword ptr [edx+0x18],0
	push 0
	push 0
	push 0
	push 0
	push 1
	push 1
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0xC04],esp
	mov ecx,dword ptr [ebp-0xB48]
	push ecx
	push eax
	lea ecx,[ebp-0xEC]
	call CSkill_HitAni::operator()
	mov dword ptr [ebp-0xD90],eax
	mov edx,dword ptr [ebp-0xB50]
	mov eax,dword ptr [edx+0x94]
	push eax
	mov ecx,dword ptr [edx+0x90]
	push ecx
	push 0
	push 0
	mov edx,dword ptr [ebp-0xB50]
	mov eax,dword ptr [edx+0x18]
	push eax
	mov ecx,dword ptr [ebp-0x38]
	push ecx
	mov edx,dword ptr [ebp-0xB50]
	mov eax,dword ptr [edx+4]
	push eax
	mov ecx,dword ptr [ebp-0xB50]
	mov edx,dword ptr [ebp+8]
	add edx,dword ptr [ecx+0x10]
	push edx
	mov eax,dword ptr [ebp-0xD40]
	mov ecx,dword ptr [eax+0xC0]
	push ecx
	call TSingleton<CWvsContext>::GetInstance
	mov ecx,eax
	call CWvsContext::GetCharacterId
	push eax
	mov edx,dword ptr [ebp-0xB50]
	mov ecx,dword ptr [edx]
	call CMob::AddDamageInfo
	call TSingleton<CBattleRecordMan>::IsInstantiated
	test eax,eax
	je Block80

 Block79:
	push 1
	push 0
	mov eax,dword ptr [ebp-0xB50]
	mov ecx,dword ptr [eax+0x18]
	push ecx
	call TSingleton<CBattleRecordMan>::GetInstance
	mov ecx,eax
	call CBattleRecordMan::SetBattleDamageInfo

 Block80:
	jmp Block83

 Block81:
	push 0
	push 0
	push 0
	push 0
	push 1
	push 1
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0xC08],esp
	mov eax,dword ptr [ebp-0xB48]
	push eax
	push edx
	lea ecx,[ebp-0xEC]
	call CSkill_HitAni::operator()
	mov dword ptr [ebp-0xD94],eax
	mov ecx,dword ptr [ebp-0xB50]
	mov edx,dword ptr [ecx+0x94]
	push edx
	mov eax,dword ptr [ecx+0x90]
	push eax
	push 0
	push 0
	mov ecx,dword ptr [ebp-0xB50]
	mov edx,dword ptr [ecx+0x18]
	push edx
	mov eax,dword ptr [ebp-0x38]
	push eax
	mov ecx,dword ptr [ebp-0xB50]
	mov edx,dword ptr [ecx+4]
	push edx
	mov eax,dword ptr [ebp-0xB50]
	mov ecx,dword ptr [ebp+8]
	add ecx,dword ptr [eax+0x10]
	push ecx
	mov edx,dword ptr [ebp-0xD40]
	mov eax,dword ptr [edx+0xC0]
	push eax
	call TSingleton<CWvsContext>::GetInstance
	mov ecx,eax
	call CWvsContext::GetCharacterId
	push eax
	mov ecx,dword ptr [ebp-0xB50]
	mov ecx,dword ptr [ecx]
	call CMob::AddDamageInfo
	call TSingleton<CBattleRecordMan>::IsInstantiated
	test eax,eax
	je Block83

 Block82:
	push 1
	push 0
	mov edx,dword ptr [ebp-0xB50]
	mov eax,dword ptr [edx+0x18]
	push eax
	call TSingleton<CBattleRecordMan>::GetInstance
	mov ecx,eax
	call CBattleRecordMan::SetBattleDamageInfo

 Block83:
	jmp Block59

 Block84:
	jmp Block86

 Block86:
	mov dword ptr [ebp-0x168],0x19DEA1BD
	mov dword ptr [ebp-0x14],0xBE02FF0A
	push 0
	lea ecx,[ebp-0x14]
	push ecx
	lea edx,[ebp-0x178]
	push edx
	call DR_check
	add esp,0xC
	mov dword ptr [ebp-0x154],eax
	push 0xD0
	lea ecx,[ebp-0x10C]
	call COutPacket::_ctor_1
	mov byte ptr [ebp-4],4
	mov eax,dword ptr [ebp-0xD40]
	mov ecx,dword ptr [eax+0xB4]
	push ecx
	lea ecx,[ebp-0x10C]
	call COutPacket::Encode4
	mov edx,dword ptr [ebp-0x178]
	not edx
	push edx
	lea ecx,[ebp-0x10C]
	call COutPacket::Encode4
	mov eax,dword ptr [ebp-0x174]
	not eax
	push eax
	lea ecx,[ebp-0x10C]
	call COutPacket::Encode4
	call get_update_time
	push eax
	lea ecx,[ebp-0x10C]
	call COutPacket::Encode4
	mov ecx,dword ptr [ebp-0x170]
	not ecx
	push ecx
	lea ecx,[ebp-0x10C]
	call COutPacket::Encode4
	mov edx,dword ptr [ebp-0x16C]
	not edx
	push edx
	lea ecx,[ebp-0x10C]
	call COutPacket::Encode4
	mov eax,dword ptr [ebp-0x38]
	shl eax,7
	mov ecx,dword ptr [ebp-0x30]
	and ecx,0x7F
	or eax,ecx
	push eax
	lea ecx,[ebp-0x10C]
	call COutPacket::Encode1
	push 0
	mov edx,dword ptr [ebp-0x178]
	push edx
	call get_rand_0
	add esp,8
	mov dword ptr [ebp-0x5C],eax
	mov eax,dword ptr [ebp-0x5C]
	push eax
	lea ecx,[ebp-0x10C]
	call COutPacket::Encode4
	push 0
	push 0
	push 0
	mov ecx,dword ptr [ebp-0x5C]
	push ecx
	push 4
	lea edx,[ebp-0x154]
	push edx
	call CCrc32::GetCrc32
	add esp,0x18
	push eax
	lea ecx,[ebp-0x10C]
	call COutPacket::Encode4
	movzx eax,byte ptr [ebp-0x64]
	push eax
	lea ecx,[ebp-0x10C]
	call COutPacket::Encode1
	jmp Block88

 Block88:
	call TSingleton<CUserLocal>::GetInstance
	add eax,4
	mov dword ptr [ebp-0xD98],eax
	lea ecx,[ebp-0xC10]
	push ecx
	mov edx,dword ptr [ebp-0xD98]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [ebp-0xD98]
	mov edx,dword ptr [eax+0x10]
	call edx
	movzx eax,word ptr [eax]
	push eax
	lea ecx,[ebp-0x10C]
	call COutPacket::Encode2
	call TSingleton<CUserLocal>::GetInstance
	add eax,4
	mov dword ptr [ebp-0xD9C],eax
	lea ecx,[ebp-0xC18]
	push ecx
	mov edx,dword ptr [ebp-0xD9C]
	mov eax,dword ptr [edx]
	mov ecx,dword ptr [ebp-0xD9C]
	mov edx,dword ptr [eax+0x10]
	call edx
	movzx eax,word ptr [eax+4]
	push eax
	lea ecx,[ebp-0x10C]
	call COutPacket::Encode2
	lea ecx,[ebp-0xC20]
	push ecx
	mov ecx,dword ptr [ebp-0xD40]
	add ecx,4
	mov edx,dword ptr [ebp-0xD40]
	mov eax,dword ptr [edx+4]
	mov edx,dword ptr [eax+0x10]
	call edx
	movzx eax,word ptr [eax]
	push eax
	lea ecx,[ebp-0x10C]
	call COutPacket::Encode2
	lea ecx,[ebp-0xC28]
	push ecx
	mov ecx,dword ptr [ebp-0xD40]
	add ecx,4
	mov edx,dword ptr [ebp-0xD40]
	mov eax,dword ptr [edx+4]
	mov edx,dword ptr [eax+0x10]
	call edx
	movzx eax,word ptr [eax+4]
	push eax
	lea ecx,[ebp-0x10C]
	call COutPacket::Encode2
	call TSingleton<CUserLocal>::GetInstance
	mov ecx,eax
	call CUserLocal::GetRepeatSkillPoint
	push eax
	lea ecx,[ebp-0x10C]
	call COutPacket::Encode4
	mov dword ptr [ebp-0xB48],0
	jmp Block90

 Block89:
	mov ecx,dword ptr [ebp-0xB48]
	add ecx,1
	mov dword ptr [ebp-0xB48],ecx

 Block90:
	mov edx,dword ptr [ebp-0xB48]
	cmp edx,dword ptr [ebp-0x64]
	jge Block92

 Block91:
	mov eax,dword ptr [ebp-0xB48]
	imul eax,0x98
	lea ecx,[ebp+eax-0xA64]
	mov dword ptr [ebp-0xB64],ecx
	mov edx,dword ptr [ebp-0xB64]
	mov ecx,dword ptr [edx]
	call CMob::GetMobID
	push eax
	lea ecx,[ebp-0x10C]
	call COutPacket::Encode4
	mov eax,dword ptr [ebp-0xB64]
	mov ecx,dword ptr [eax]
	call CMob::GetCurTemplate
	mov ecx,eax
	call CMobTemplate::_ZtlSecureGet_dwTemplateID
	push eax
	lea ecx,[ebp-0x10C]
	call COutPacket::Encode4
	mov ecx,dword ptr [ebp-0xB64]
	movzx edx,byte ptr [ecx+4]
	push edx
	lea ecx,[ebp-0x10C]
	call COutPacket::Encode1
	mov eax,dword ptr [ebp-0xB64]
	mov ecx,dword ptr [eax]
	call CMob::IsLeft
	shl eax,7
	mov ecx,dword ptr [ebp-0xB64]
	mov edx,dword ptr [ecx+8]
	and edx,0x7F
	or eax,edx
	push eax
	lea ecx,[ebp-0x10C]
	call COutPacket::Encode1
	mov eax,dword ptr [ebp-0xB64]
	movzx ecx,byte ptr [eax+0xC]
	push ecx
	lea ecx,[ebp-0x10C]
	call COutPacket::Encode1
	mov edx,dword ptr [ebp-0xB64]
	mov ecx,dword ptr [edx]
	call CMob::GetCalcDamageStatIndex
	push eax
	lea ecx,[ebp-0x10C]
	call COutPacket::Encode1
	lea eax,[ebp-0xC30]
	push eax
	mov ecx,dword ptr [ebp-0xB64]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [ebp-0xB64]
	mov ecx,dword ptr [eax]
	add ecx,4
	mov edx,dword ptr [edx+4]
	mov eax,dword ptr [edx+0x10]
	call eax
	movzx ecx,word ptr [eax]
	push ecx
	lea ecx,[ebp-0x10C]
	call COutPacket::Encode2
	lea edx,[ebp-0xC38]
	push edx
	mov eax,dword ptr [ebp-0xB64]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ebp-0xB64]
	mov eax,dword ptr [edx]
	add eax,4
	mov edx,dword ptr [ecx+4]
	mov ecx,eax
	mov eax,dword ptr [edx+0x10]
	call eax
	movzx ecx,word ptr [eax+4]
	push ecx
	lea ecx,[ebp-0x10C]
	call COutPacket::Encode2
	lea edx,[ebp-0xC40]
	push edx
	mov eax,dword ptr [ebp-0xB64]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ebp-0xB64]
	mov eax,dword ptr [edx]
	add eax,4
	mov edx,dword ptr [ecx+4]
	mov ecx,eax
	mov eax,dword ptr [edx+0x14]
	call eax
	movzx ecx,word ptr [eax]
	push ecx
	lea ecx,[ebp-0x10C]
	call COutPacket::Encode2
	lea edx,[ebp-0xC48]
	push edx
	mov eax,dword ptr [ebp-0xB64]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ebp-0xB64]
	mov eax,dword ptr [edx]
	add eax,4
	mov edx,dword ptr [ecx+4]
	mov ecx,eax
	mov eax,dword ptr [edx+0x14]
	call eax
	movzx ecx,word ptr [eax+4]
	push ecx
	lea ecx,[ebp-0x10C]
	call COutPacket::Encode2
	mov edx,dword ptr [ebp-0xB64]
	movzx eax,word ptr [edx+0x10]
	push eax
	lea ecx,[ebp-0x10C]
	call COutPacket::Encode2
	mov ecx,dword ptr [ebp-0xB64]
	mov edx,dword ptr [ecx+0x18]
	push edx
	lea ecx,[ebp-0x10C]
	call COutPacket::Encode4
	jmp Block89

 Block92:
	cmp dword ptr [ebp-0x60],0
	je Block94

 Block93:
	mov ecx,dword ptr [ebp-0x60]
	call SKILLENTRY::GetCrc
	mov dword ptr [ebp-0xDA0],eax
	jmp Block95

 Block94:
	mov dword ptr [ebp-0xDA0],0

 Block95:
	mov eax,dword ptr [ebp-0xDA0]
	mov dword ptr [ebp-0x10],eax
	mov ecx,dword ptr [ebp-0x10]
	push ecx
	lea ecx,[ebp-0x10C]
	call COutPacket::Encode4
	lea edx,[ebp-0x10C]
	push edx
	call SendPacket
	add esp,4
	mov eax,dword ptr [ebp-0xD40]
	mov ecx,dword ptr [ebp+8]
	mov dword ptr [eax+0x134],ecx
	mov edx,dword ptr [ebp-0x30]
	push edx
	mov ecx,dword ptr [ebp-0xD40]
	call CSummoned::SetAttackAction
	push 1
	mov ecx,dword ptr [ebp-0xD40]
	call CSummoned::SetSuspended
	cmp dword ptr [ebp-0xA6C],1
	jne Block97

 Block96:
	mov eax,dword ptr [ebp-0xD40]
	mov dword ptr [eax+0x16C],1
	mov ecx,dword ptr [ebp-0xD40]
	call CSummoned::PreserveAction

 Block97:
	mov byte ptr [ebp-4],1
	lea ecx,[ebp-0x10C]
	call COutPacket::~COutPacket
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0xEC]
	call CSkill_HitAni::~CSkill_HitAni

 Block98:
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CSummoned::TryDoingSummon
_SUB_EXCEPTION_HANDLER(34B640)
__SUB_CLASS_THIS(0034B640, __thiscall, 67264,  CSummoned, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_34B640
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0xD4],4
	jne Block2

 Block1:
	push 0xD2
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	mov eax,dword ptr [esi+0xB4]
	push eax
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode4
	push 0x217E771
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	mov ecx,dword ptr [esi+0x104]
	push ecx
	lea edx,[esi+0xFC]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	shl al,7
	or al,0xE
	movzx eax,al
	add esp,8
	push eax
	lea ecx,[esp+0xC]
	call COutPacket::Encode1
	call get_update_time
	push eax
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	push 0xE
	mov ecx,esi
	call CSummoned::SetAttackAction
	mov edx,dword ptr [esp+0x28]
	lea ecx,[esp+0xC]
	mov dword ptr [esi+0x168],1
	mov dword ptr [esi+0x134],edx
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 4
}
}
// CSummonedBase::AIType2Action
__SUB_CLASS_THIS(00348DA0, __thiscall, 67317,  CSummonedBase, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,3
	ja Block6

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block4
cmp EAX, 3
je Block5


 Block2:
	mov eax,4
	ret 4

 Block3:
	mov eax,0x10
	ret 4

 Block4:
	mov eax,0xD
	ret 4

 Block5:
	mov eax,6
	ret 4

 Block6:
	xor eax,eax
	ret 4
}
}
// CSummoned::TryDoingGiveBuff
_SUB_EXCEPTION_HANDLER(34AF50)
__SUB_CLASS_THIS(0034AF50, __thiscall, 67264,  CSummoned, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_34AF50
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
	mov dword ptr [esp+0x2C],ecx
	cmp dword ptr [ecx+0xD4],2
	jne Block34

 Block1:
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x30]
	push eax
	mov ecx,esi
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x18],ebp
	test eax,eax
	je Block6

 Block2:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block5

 Block3:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block5

 Block4:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block5:
	mov dword ptr [esp+0x34],0

 Block6:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push offset _D_S_PBUFF
	push 0x142449
	add esi,0x2148
	push ebp
	mov dword ptr [esp+0x20],esi
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jle Block34

 Block7:
	mov ecx,dword ptr [_D_S_PBUFF]
	push eax
	call SKILLENTRY::GetLevelData
	mov esi,eax
	mov ecx,dword ptr [esi+0x1B0]
	push ecx
	lea ebp,[esi+0x1A8]
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x60]
	push edx
	lea ebx,[esi+0x58]
	push ebx
	mov dword ptr [esp+0x38],eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x54]
	mov dword ptr [esp+0x30],eax
	lea eax,[esi+0x4C]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x1C8]
	mov dword ptr [esp+0x3C],eax
	lea eax,[esi+0x1C0]
	push edx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x1BC]
	mov dword ptr [esp+0x3C],eax
	lea eax,[esi+0x1B4]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov edi,eax
	neg edi
	sbb edi,edi
	xor edx,edx
	neg edi
	cmp dword ptr [esp+0x44],edx
	setne dl
	xor eax,eax
	add edi,edx
	cmp dword ptr [esp+0x48],eax
	setne al
	xor ecx,ecx
	add edi,eax
	cmp dword ptr [esp+0x4C],ecx
	mov eax,dword ptr [esi+0x1B0]
	setne cl
	xor edx,edx
	push eax
	push ebp
	add edi,ecx
	cmp dword ptr [esp+0x58],edx
	setne dl
	add edi,edx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x60]
	push ecx
	push ebx
	mov ebp,eax
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x54]
	mov dword ptr [esp+0x58],eax
	push edx
	lea eax,[esi+0x4C]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x64],eax
	mov eax,dword ptr [esi+0x1C8]
	add esp,0x40
	push eax
	lea eax,[esi+0x1C0]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x1BC]
	mov dword ptr [esp+0x30],eax
	push ecx
	lea eax,[esi+0x1B4]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,eax
	mov eax,dword ptr [esp+0x38]
	add esp,0x10
	neg ebx
	sbb ebx,ebx
	neg ebx
	neg eax
	sbb eax,eax
	and eax,2
	add ebx,eax
	mov eax,dword ptr [esp+0x24]
	neg eax
	sbb eax,eax
	and eax,3
	add ebx,eax
	mov eax,dword ptr [esp+0x20]
	neg eax
	sbb eax,eax
	and eax,4
	add ebx,eax
	neg ebp
	sbb ebp,ebp
	mov ecx,offset _D_G_RAND
	and ebp,5
	call CRand32::Random
	add ebx,ebp
	je Block9

 Block8:
	xor edx,edx
	div ebx
	mov eax,edx
	inc eax

 Block9:
	xor ebx,ebx
	xor ecx,ecx
	test edi,edi
	jle Block12

 Block10:
	lea ecx,[ecx+ebx+1]
	cmp eax,ecx
	jle Block12

 Block11:
	inc ebx
	cmp ebx,edi
	jl Block10

 Block12:
	mov edx,dword ptr [esi+0x1B0]
	push edx
	lea edi,[esi+0x1A8]
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block16

 Block13:
	mov eax,dword ptr [esi+0x1B0]
	push eax
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov ebp,dword ptr [esp+0x20]
	mov edi,dword ptr [esp+0x1C]
	add esp,8
	push ebp
	mov ecx,edi
	mov dword ptr [esp+0x2C],eax
	call SecondaryStat::GetIncPAD
	cmp eax,dword ptr [esp+0x28]
	jge Block17

 Block14:
	cmp ebx,4
	jl Block17

 Block15:
	mov ebp,4
	jmp Block33

 Block16:
	mov edi,dword ptr [esp+0x14]
	mov ebp,dword ptr [esp+0x18]

 Block17:
	mov ecx,dword ptr [esi+0x60]
	push ecx
	lea eax,[esi+0x58]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block21

 Block18:
	mov edx,dword ptr [esi+0x60]
	push edx
	lea eax,[esi+0x58]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push ebp
	mov ecx,edi
	mov dword ptr [esp+0x2C],eax
	call SecondaryStat::GetIncEVA
	cmp eax,dword ptr [esp+0x28]
	jge Block21

 Block19:
	cmp ebx,3
	jl Block21

 Block20:
	mov ebp,3
	jmp Block33

 Block21:
	mov eax,dword ptr [esi+0x54]
	push eax
	lea eax,[esi+0x4C]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block25

 Block22:
	mov ecx,dword ptr [esi+0x54]
	push ecx
	lea eax,[esi+0x4C]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push ebp
	mov ecx,edi
	mov dword ptr [esp+0x2C],eax
	call SecondaryStat::GetIncACC
	cmp eax,dword ptr [esp+0x28]
	jge Block25

 Block23:
	cmp ebx,2
	jl Block25

 Block24:
	mov ebp,2
	jmp Block33

 Block25:
	mov edx,dword ptr [esi+0x1C8]
	push edx
	lea eax,[esi+0x1C0]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block29

 Block26:
	mov eax,dword ptr [edi+0x1050]
	push eax
	lea ecx,[edi+0x1048]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x1C8]
	mov ebp,eax
	push edx
	lea eax,[esi+0x1C0]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,0x10
	cmp ebp,eax
	jge Block29

 Block27:
	cmp ebx,1
	jl Block29

 Block28:
	mov ebp,1
	jmp Block33

 Block29:
	mov eax,dword ptr [esi+0x1BC]
	push eax
	lea ebp,[esi+0x1B4]
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block34

 Block30:
	mov ecx,dword ptr [edi+0x1020]
	push ecx
	add edi,0x1018
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x1BC]
	push edx
	push ebp
	mov edi,eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,0x10
	cmp edi,eax
	jge Block34

 Block31:
	test ebx,ebx
	jl Block34

 Block32:
	xor ebp,ebp

 Block33:
	push 0xD2
	lea ecx,[esp+0x3C]
	lea ebx,[ebp+8]
	call COutPacket::_ctor_1
	mov edi,dword ptr [esp+0x2C]
	mov eax,dword ptr [edi+0xB4]
	push eax
	lea ecx,[esp+0x3C]
	mov dword ptr [esp+0x54],0
	call COutPacket::Encode4
	push 0x142449
	lea ecx,[esp+0x3C]
	call COutPacket::Encode4
	mov ecx,dword ptr [edi+0x104]
	push ecx
	lea edx,[edi+0xFC]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov cl,bl
	and cl,0x7F
	shl al,7
	or cl,al
	movzx edx,cl
	add esp,8
	push edx
	lea ecx,[esp+0x3C]
	call COutPacket::Encode1
	push ebp
	lea ecx,[esp+0x3C]
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x38]
	push eax
	call CClientSocket::SendPacket
	mov ecx,dword ptr [esi+0x168]
	push ecx
	add esi,0x160
	push esi
	call _ZtlSecureFuseHelper<long>::call
	imul eax,0x3E8
	add eax,dword ptr [esp+0x60]
	add esp,8
	push ebx
	mov ecx,edi
	mov dword ptr [edi+0x13C],eax
	call CSummoned::SetAttackAction
	lea ecx,[esp+0x3C]
	mov dword ptr [edi+0x168],1
	mov dword ptr [esp+0x50],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block34:
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
// CSummoned::ChaseTarget
__SUB_CLASS_THIS(00349290, __thiscall, 67277,  CSummoned, void, int32_t, IVecCtrlOwner*) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x188]
	test eax,eax
	je Block2

 Block1:
	lea ecx,[eax-0xC]
	jmp Block3

 Block2:
	xor ecx,ecx

 Block3:
	cmp dword ptr [ecx+0x18],0
	je Block7

 Block4:
	test eax,eax
	je Block6

 Block5:
	lea ecx,[eax-0xC]
	jmp  CVecCtrlSummoned::ChaseTarget

 Block6:
	xor ecx,ecx
	jmp  CVecCtrlSummoned::ChaseTarget

 Block7:
	ret 8
}
}
// CSummoned::OnHit
_SUB_EXCEPTION_HANDLER(34BC80)
__SUB_CLASS_THIS(0034BC80, __thiscall, 67292,  CSummoned, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_34BC80
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x38]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	cmp dword ptr [edi+0xBC],0
	je Block2

 Block1:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	jmp Block3

 Block2:
	mov eax,dword ptr [edi+0xB8]
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push eax
	call CUserPool::GetUser

 Block3:
	test eax,eax
	je Block5

 Block4:
	cmp dword ptr [eax+0x638],0
	jne Block26

 Block5:
	mov esi,dword ptr [esp+0x48]
	mov ecx,esi
	call CInPacket::Decode1
	movsx ebx,al
	mov ecx,esi
	mov dword ptr [esp+0x14],ebx
	call CInPacket::Decode4
	cmp ebx,0xFFFFFFFE
	mov dword ptr [esp+0x1C],eax
	jle Block22

 Block6:
	mov ecx,esi
	call CInPacket::Decode4
	mov ebp,eax
	mov ecx,esi
	mov dword ptr [esp+0x18],ebp
	call CInPacket::Decode1
	movzx ecx,al
	push ebp
	mov dword ptr [esp+0x4C],ecx
	call CMobTemplate::GetMobTemplate
	add esp,4
	test eax,eax
	je Block22

 Block7:
	test ebx,ebx
	jl Block22

 Block8:
	push ebx
	mov ecx,eax
	call CMobTemplate::GetAttackInfo
	mov esi,eax
	test esi,esi
	je Block22

 Block9:
	mov eax,dword ptr [esi+0x7C]
	test eax,eax
	je Block22

 Block10:
	mov eax,dword ptr [eax]
	test eax,eax
	je Block22

 Block11:
	mov eax,dword ptr [eax-4]
	shr eax,1
	je Block22

 Block12:
	push 1
	lea edx,[esp+0x2C]
	push edx
	mov ecx,edi
	call CSummoned::GetBodyRect
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x30]
	push eax
	sub ecx,eax
	push ecx
	call get_rand_0
	mov edx,dword ptr [esp+0x3C]
	mov ebx,eax
	mov eax,dword ptr [esp+0x34]
	push eax
	sub edx,eax
	push edx
	call get_rand_0
	add esp,0x10
	cmp dword ptr [esi+0x88],0
	push 0xC00614A4
	push ecx
	mov ebp,eax
	mov eax,esp
	mov dword ptr [eax],0
	je Block17

 Block13:
	mov dword ptr [esp+0x28],esp
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x58],0
	call CSummoned::GetVecCtrl
	mov esi,dword ptr [esi+0x7C]
	mov byte ptr [esp+0x54],1
	test esi,esi
	je Block15

 Block14:
	mov esi,dword ptr [esi]
	jmp Block16

 Block15:
	xor esi,esi

 Block16:
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	mov dword ptr [esp+0x5C],ecx
	mov ecx,edi
	call CSummoned::IsLeft
	mov ecx,dword ptr [esp+0x5C]
	neg eax
	sbb eax,eax
	inc eax
	push eax
	mov dword ptr [esp+0x58],0xFFFFFFFF
	jmp Block21

 Block17:
	mov dword ptr [esp+0x2C],esp
	push ebp
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [eax],0
	mov esi,dword ptr [esi+0x7C]
	mov dword ptr [esp+0x54],2
	mov dword ptr [esp+0x38],esp
	test esi,esi
	je Block19

 Block18:
	mov esi,dword ptr [esi]
	jmp Block20

 Block19:
	xor esi,esi

 Block20:
	xor edx,edx
	cmp dword ptr [esp+0x5C],edx
	mov dword ptr [esp+0x54],0xFFFFFFFF
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	sete dl
	push edx

 Block21:
	push esi
	call CAnimationDisplayer::Effect_General
	push ebp
	push ebx
	call get_sound_volume_by_pos
	mov ecx,dword ptr [esp+0x20]
	push eax
	mov eax,dword ptr [esp+0x20]
	add eax,0xB
	push eax
	push ecx
	call play_mob_sound
	add esp,0x14

 Block22:
	mov esi,dword ptr [esp+0x1C]
	lea edx,[edi+0x124]
	test esi,esi
	jg Block24

 Block23:
	mov ecx,0xFFFFFA24
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x12C],eax
	jmp Block25

 Block24:
	mov ecx,0x5DC
	call _ZtlSecureTearHelper<long>::call
	lea edx,[edi+0x108]
	mov ecx,0xF
	mov dword ptr [edi+0x12C],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [edi+0x110],eax
	call CSummoned::PrepareActionLayer
	mov edx,dword ptr [edi+0xC0]
	push 0
	push 0x33
	push edx
	call play_skill_sound
	add esp,0xC

 Block25:
	push esi
	mov ecx,edi
	call CSummoned::MakeIncDecHPEffect

 Block26:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret 4
}
}
// CSummoned::SetSuspended
__SUB_CLASS_THIS(00348E60, __thiscall, 67264,  CSummoned, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0x168],eax
	ret 4
}
}
// CSummoned::GetID
__SUB_CLASS_THIS0(00348E70, __thiscall, 67261,  CSummoned, unsigned long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xE8]
	ret
}
}
// CSummoned::MakeIncDecHPEffect
__SUB_CLASS_THIS(00349840, __thiscall, 67264,  CSummoned, void, long) {
__asm {

 Block0:
	sub esp,0x10
	cmp dword ptr [esp+0x14],0
	push ebx
	mov ebx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push ebp
	push esi
	push edi
	mov edi,ecx
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [eax+0x10]
	lea esi,[edi+4]
	jle Block2

 Block1:
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,esi
	call edx
	lea ebp,[eax+4]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	call edx
	push 0
	mov esi,eax
	mov eax,dword ptr [esp+0x28]
	push 2
	push eax
	mov ecx,edi
	call CSummoned::GetHeight
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [esi]
	sub ecx,eax
	push ecx
	push edx
	mov ecx,ebx
	call CAnimationDisplayer::Effect_HP
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 4

 Block2:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	call edx
	lea ebp,[eax+4]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,esi
	call edx
	push 2
	mov ecx,edi
	mov esi,eax
	call CSummoned::GetHeight
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [esi]
	sub ecx,eax
	push ecx
	push edx
	mov ecx,ebx
	call CAnimationDisplayer::Effect_Miss
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 4
}
}
// CSummoned::OnMove
__SUB_CLASS_THIS(00349250, __thiscall, 67292,  CSummoned, void, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x188]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [esp+4]
	push 0
	add eax,0xFFFFFFF4
	push ecx
	lea ecx,[eax+0x244]
	call CMovePath::OnMovePacket
	ret 4

 Block2:
	mov ecx,dword ptr [esp+4]
	xor eax,eax
	push eax
	push ecx
	lea ecx,[eax+0x244]
	call CMovePath::OnMovePacket
	ret 4
}
}
// CSummoned::ATTACKEFFECT::~ATTACKEFFECT
__SUB_CLASS_THIS0(0034C430, __thiscall, 67493,  CSummoned::ATTACKEFFECT, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+8]
	test ecx,ecx
	je Block2

 Block1:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+8],0

 Block2:
	pop esi
	ret
}
}
// CSummoned::Init
_SUB_EXCEPTION_HANDLER(355740)
__SUB_CLASS_THIS(00355740, __thiscall, 67254,  CSummoned, int32_t, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_355740
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x230
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x244]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x14],ebx
	mov eax,dword ptr [ebx+0xC0]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push eax
	call CSkillInfo::GetSkill
	xor ebp,ebp
	cmp eax,ebp
	jne Block2

 Block1:
	xor eax,eax
	jmp Block15

 Block2:
	mov esi,dword ptr [esp+0x254]
	mov ecx,esi
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [esp+0x28],ecx
	mov ecx,esi
	call CInPacket::Decode2
	movsx edx,ax
	mov ecx,esi
	mov dword ptr [esp+0x20],edx
	call CInPacket::Decode1
	movzx eax,al
	mov ecx,esi
	mov dword ptr [esp+0x1C],eax
	call CInPacket::Decode2
	movzx eax,ax
	movsx ecx,ax
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov dword ptr [esp+0x1C],eax
	call CWvsPhysicalSpace2D::GetFoothold
	mov ecx,esi
	call CInPacket::Decode1
	movzx edx,al
	mov ecx,esi
	mov dword ptr [esp+0x24],edx
	call CInPacket::Decode1
	movzx eax,al
	mov ecx,esi
	mov dword ptr [esp+0x2C],eax
	call CInPacket::Decode1
	movzx ecx,al
	mov dword ptr [esp+0x38],ecx
	mov ecx,esi
	call CInPacket::Decode1
	push 0xF0
	movzx edi,al
	xor eax,eax
	lea edx,[esp+0x59]
	push ebp
	mov dword ptr [esp+0x44],eax
	push edx
	mov dword ptr [esp+0x4C],eax
	mov dword ptr [esp+0x50],eax
	int 3// TODO: 	mov dword ptr [esp+0x48],offset AvatarLook::`vftable'
	mov byte ptr [esp+0x54],al
	mov dword ptr [esp+0x55],ebp
	mov dword ptr [esp+0x59],ebp
	mov dword ptr [esp+0x5D],ebp
	call _memset
	xor eax,eax
	add esp,0xC
	mov dword ptr [esp+0x235],eax
	mov dword ptr [esp+0x239],eax
	mov dword ptr [esp+0x23D],eax
	mov dword ptr [esp+0x24C],ebp
	cmp edi,ebp
	je Block4

 Block3:
	push esi
	lea ecx,[esp+0x40]
	call AvatarLook::Decode

 Block4:
	cmp dword ptr [ebx+0xC0],0x217C05A
	jne Block14

 Block5:
	mov ecx,esi
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [ebx+0x1DC],eax
	cmp eax,1
	jne Block14

 Block6:
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x34],ebp
	call ZRef<Triangle>::_Alloc
	mov ebx,dword ptr [esp+0x34]
	mov byte ptr [esp+0x24C],1
	jmp Block8

 Block8:
	mov ecx,esi
	call CInPacket::Decode2
	cwde
	mov ecx,esi
	mov dword ptr [ebx+ebp*8],eax
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebx+ebp*8+4],ecx
	inc ebp
	cmp ebp,3
	jl Block8

 Block9:
	mov ecx,dword ptr [esp+0x14]
	lea edx,[esp+0x30]
	push edx
	add ecx,0x1E0
	call ZRef<Triangle>::op_assign_copy
	mov byte ptr [esp+0x24C],0
	test ebx,ebx
	je Block13

 Block10:
	add ebx,0xFFFFFFF0
	lea esi,[ebx+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block13

 Block11:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block13

 Block12:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block13:
	mov ebx,dword ptr [esp+0x14]

 Block14:
	mov ecx,dword ptr [esp+0x38]
	mov edx,dword ptr [esp+0x2C]
	neg edi
	sbb edi,edi
	lea eax,[esp+0x3C]
	and edi,eax
	mov eax,dword ptr [esp+0x24]
	push edi
	push ecx
	mov ecx,dword ptr [esp+0x20]
	push edx
	mov edx,dword ptr [esp+0x28]
	push eax
	mov eax,dword ptr [esp+0x30]
	push ecx
	mov ecx,dword ptr [esp+0x3C]
	push edx
	push eax
	push ecx
	mov ecx,ebx
	call CSummoned::Init_0

 Block15:
	mov ecx,dword ptr [esp+0x244]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x23C
	ret 4
}
}
// CSummoned::SummonedBullet::SummonedBullet
_SUB_EXCEPTION_HANDLER(34F3D0)
__SUB_CLASS_THIS(0034F3D0, __thiscall, 67505,  CSummoned::SummonedBullet, void, long, long, NakedParam<tagPOINT>, NakedParam<tagPOINT>, NakedParam<_x_com_ptr<IWzVector2D>>, long, NakedParam<Ztl_bstr_t>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_34F3D0
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
	push ecx
	mov ecx,dword ptr [esp+0x38]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x18],1
	mov dword ptr [esp+0xC],esp
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [esp+0x30]
	mov eax,dword ptr [esp+0x2C]
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	push edx
	mov edx,dword ptr [esp+0x2C]
	push eax
	mov eax,dword ptr [esp+0x2C]
	push ecx
	push edx
	push eax
	mov ecx,esi
	call CFadeoutBullet::_ctor_0
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr [esi+0x34],ecx
	mov ecx,dword ptr [esp+0x3C]
	int 3// TODO: 	mov dword ptr [esi],offset CSummoned::SummonedBullet::`vftable'
	mov dword ptr [esi+0x38],ecx
	test ecx,ecx
	je Block4

 Block3:
	add ecx,8
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x3C]

 Block4:
	mov eax,dword ptr [esp+0x34]
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [esi+0x3C],edx
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov ecx,dword ptr [esp+0x3C]

 Block6:
	test ecx,ecx
	je Block8

 Block7:
	call _xbstr_t::Data_t::Release

 Block8:
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 0x28
}
}
// CSummoned::SetLayerZ
__SUB_CLASS_THIS0(00349650, __thiscall, 67253,  CSummoned, void) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x188]
	push edi
	test eax,eax
	je Block2

 Block1:
	lea edi,[eax-0xC]
	jmp Block3

 Block2:
	xor edi,edi

 Block3:
	cmp dword ptr [esi+0xBC],0
	je Block5

 Block4:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	jmp Block6

 Block5:
	mov eax,dword ptr [esi+0xB8]
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push eax
	call CUserPool::GetUser

 Block6:
	test eax,eax
	je Block8

 Block7:
	lea ecx,[eax+0x88]
	jmp Block9

 Block8:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	add ecx,0x88

 Block9:
	call CAvatar::GetLayerZ
	mov ecx,dword ptr [esi+0x174]
	mov ebx,eax
	test ecx,ecx
	je Block11

 Block10:
	mov eax,dword ptr [edi+0x1C0]
	imul eax,0xBB8
	sub eax,dword ptr [edi+0x1C4]
	lea edx,[eax+eax*4]
	lea eax,[edx+edx-0x3FFF8AD9]
	push eax
	call CAvatar::SetLayerZ
	pop edi
	pop esi
	pop ebx
	ret

 Block11:
	mov ecx,dword ptr [esi+0xC0]
	push ecx
	call is_summon_octopus_skill
	add esp,4
	test eax,eax
	je Block15

 Block12:
	mov esi,dword ptr [esi+0xF8]
	mov ecx,dword ptr [edi+0x1C4]
	mov eax,dword ptr [edi+0x1C0]
	test esi,esi
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	mov edx,dword ptr [esi]
	imul eax,0xBB8
	mov edx,dword ptr [edx+0xB4]
	sub eax,ecx
	lea eax,[eax+eax*4]
	lea ecx,[eax+eax-0x3FFF8AD8]
	push ecx
	push esi
	call edx
	jmp Block34

 Block15:
	mov eax,dword ptr [esi+0xC0]
	cmp eax,0x236A6B
	je Block31

 Block16:
	cmp eax,0xB8CC9C
	je Block31

 Block17:
	cmp eax,0x205D2D
	je Block31

 Block18:
	cmp eax,0x21E3CD
	je Block31

 Block19:
	cmp eax,0x23435E
	je Block31

 Block20:
	cmp eax,0x217C059
	je Block31

 Block21:
	cmp eax,0x217C061
	je Block31

 Block22:
	cmp eax,0x217C062
	je Block31

 Block23:
	cmp eax,0x1F914D0
	jne Block26

 Block24:
	push 0
	mov ecx,esi
	call CSummoned::GetCurrentAction
	cmp eax,3
	jne Block26

 Block25:
	inc ebx
	push ebx
	jmp Block30

 Block26:
	cmp dword ptr [esi+0xD0],0
	jne Block28

 Block27:
	mov eax,dword ptr [edi+0x1C0]
	imul eax,0xBB8
	sub eax,dword ptr [edi+0x1C4]
	lea eax,[eax+eax*4]
	lea eax,[eax+eax-0x3FFF8AD9]
	jmp Block29

 Block28:
	mov eax,0xC0041F14

 Block29:
	push eax

 Block30:
	lea ecx,[esi+0xF8]
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Putz
	pop edi
	pop esi
	pop ebx
	ret

 Block31:
	mov esi,dword ptr [esi+0xF8]
	test esi,esi
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xB4]
	dec ebx
	push ebx
	push esi
	call ecx

 Block34:
	test eax,eax
	jge Block36

 Block35:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block36:
	pop edi
	pop esi
	pop ebx
	ret
}
}
// CTutor::~CTutor
_SUB_EXCEPTION_HANDLER(356710)
__SUB_CLASS_THIS0(00356710, __thiscall, 67768,  CTutor, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_356710
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
	int 3// TODO: 	mov dword ptr [esi],offset CTutor::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CTutor::`vftable'{for `IVecCtrlOwner'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CTutor::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [esi+0x88],offset CTutor::`vftable'
	lea ecx,[esi+0x1F8]
	mov dword ptr [esp+0x14],2
	call ZArray<CT_INFO>::RemoveAll
	lea ecx,[esi+0x1F4]
	mov byte ptr [esp+0x14],1
	call ZArray<_x_com_ptr<IWzFont>>::RemoveAll
	mov eax,dword ptr [esi+0x1F0]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov ecx,esi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CSummoned::~CSummoned
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CSummoned::_ZtlSecureGet_m_nMoveAction
__SUB_CLASS0(00349180, __fastcall, 67298,  CSummoned, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x104]
	push eax
	add ecx,0xFC
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CSummonedBase::~CSummonedBase
__SUB_CLASS_THIS0(00348D90, __thiscall, 67313,  CSummonedBase, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset CSummonedBase::`vftable'
	ret
}
}
// CSummoned::ProcessAction
_SUB_EXCEPTION_HANDLER(34A6A0)
__SUB_CLASS_THIS(0034A6A0, __thiscall, 67264,  CSummoned, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_34A6A0
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
	cmp dword ptr [esi+0x174],0
	jne Block14

 Block1:
	push 0
	call CSummoned::GetCurrentAction
	add dword ptr [esi+0x11C],0xFFFFFFE2
	cmp dword ptr [esi+0x11C],0
	jg Block14

 Block2:
	mov ecx,dword ptr [esi+0x114]
	lea eax,[eax+eax*4]
	lea edi,[esi+0x118]
	push edi
	lea ebp,[ecx+eax*4]
	call ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>::GetNext
	mov edx,dword ptr [esi+0x110]
	push edx
	lea ebx,[esi+0x108]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,0xC
	cmp eax,0xFFFFFFFF
	jle Block5

 Block3:
	cmp dword ptr [edi],0
	jne Block7

 Block4:
	mov edx,ebx
	or ecx,0xFFFFFFFF
	call _ZtlSecureTearHelper<long>::call
	mov ecx,esi
	mov dword ptr [esi+0x110],eax
	mov dword ptr [esi+0x168],0
	call CSummoned::PrepareActionLayer
	jmp Block14

 Block5:
	cmp dword ptr [edi],0
	jne Block7

 Block6:
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [edi],eax

 Block7:
	mov ecx,3
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],1
	mov ecx,dword ptr [esi+0xF8]
	mov dword ptr [esp+0x2C],0
	test ecx,ecx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	lea edx,[esp+0x14]
	push edx
	call IWzGr2DLayer::ShiftCanvas
	cmp word ptr [esp+0x14],8
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov edx,dword ptr [edi]
	push edx
	push ebp
	mov ecx,esi
	call CSummoned::SetFrameInfo

 Block14:
	mov eax,dword ptr [esi+0x12C]
	push eax
	lea edi,[esi+0x124]
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block17

 Block15:
	mov ecx,dword ptr [esi+0x12C]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,eax
	sub ebx,0x1E
	add esp,8
	mov edx,edi
	mov ecx,ebx
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x12C],eax
	test ebx,ebx
	jge Block17

 Block16:
	mov edx,edi
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x12C],eax

 Block17:
	mov edx,dword ptr [esi+0x12C]
	push edx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jge Block20

 Block18:
	mov eax,dword ptr [esi+0x12C]
	push eax
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,eax
	add ebx,0x1E
	add esp,8
	mov edx,edi
	mov ecx,ebx
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x12C],eax
	test ebx,ebx
	jle Block20

 Block19:
	mov edx,edi
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x12C],eax

 Block20:
	cmp dword ptr [esi+0x174],0
	je Block25

 Block21:
	mov ecx,dword ptr [esi+0x12C]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block24

 Block22:
	inc dword ptr [esi+0x160]
	mov edx,dword ptr [esi+0x160]
	and dl,3
	cmp dl,2
	jae Block24

 Block23:
	mov ecx,dword ptr [esi+0x174]
	mov eax,0xFF808080
	push eax
	call CAvatar::SetLayerColor
	jmp Block33

 Block24:
	mov ecx,dword ptr [esi+0x174]
	or eax,0xFFFFFFFF
	push eax
	call CAvatar::SetLayerColor
	jmp Block33

 Block25:
	mov eax,dword ptr [esi+0x12C]
	push eax
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block28

 Block26:
	inc dword ptr [esi+0x160]
	mov ecx,dword ptr [esi+0x160]
	and cl,3
	cmp cl,2
	jae Block28

 Block27:
	mov eax,0xFF808080
	jmp Block29

 Block28:
	or eax,0xFFFFFFFF

 Block29:
	mov esi,dword ptr [esi+0xF8]
	test esi,esi
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0xE0]
	push esi
	call eax
	test eax,eax
	jge Block33

 Block32:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block33:
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
// CSummoned::GetMoveAction
_SUB_EXCEPTION_HANDLER(349530)
__SUB_CLASS_THIS0(00349530, __thiscall, 67262,  CSummoned, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_349530
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
	mov eax,ecx
	mov ecx,dword ptr [eax+0x174]
	xor edi,edi
	cmp ecx,edi
	je Block2

 Block1:
	call CAvatar::GetHeight
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x24
	ret

 Block2:
	mov ecx,3
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],edi
	mov eax,dword ptr [eax+0xF8]
	mov dword ptr [esp+0x2C],edi
	cmp eax,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea edx,[esp+0x14]
	push edx
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x2C],2
	jne Block7

 Block5:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	cmp eax,edi
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block8:
	mov esi,dword ptr [esp+0x10]
	cmp esi,edi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x74]
	lea edx,[esp+0xC]
	push edx
	push esi
	mov dword ptr [esp+0x14],edi
	call eax
	cmp eax,edi
	jge Block12

 Block11:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block12:
	mov eax,dword ptr [esp+0xC]
	mov edx,dword ptr [esi]
	xor ecx,ecx
	cmp eax,edi
	setle cl
	push esi
	mov dword ptr [esp+0x30],0xFFFFFFFF
	dec ecx
	and ecx,eax
	mov eax,dword ptr [edx+8]
	mov edi,ecx
	call eax
	mov eax,edi
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x24
	ret
}
}
// CSummoned::GetShoeAttr
__SUB_CLASS_THIS0(0034FF60, __thiscall, 67290,  CSummoned, const ZRef<CAttrShoe>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x18C]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esp+4],0
	mov dword ptr [esi+4],eax
	test eax,eax
	je Block2

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CSummoned::OnAttack
_SUB_EXCEPTION_HANDLER(353340)
__SUB_CLASS_THIS(00353340, __thiscall, 67292,  CSummoned, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_353340
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x120]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	cmp dword ptr [edi+0xBC],0
	mov dword ptr [esp+0x18],0
	je Block2

 Block1:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	jmp Block3

 Block2:
	mov eax,dword ptr [edi+0xB8]
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push eax
	call CUserPool::GetUser

 Block3:
	test eax,eax
	je Block5

 Block4:
	cmp dword ptr [eax+0x638],0
	jne Block156

 Block5:
	call get_update_time
	mov ecx,dword ptr [edi+0x110]
	push ecx
	lea esi,[edi+0x108]
	push esi
	mov dword ptr [esp+0x54],eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0xFFFFFFFF
	jle Block7

 Block6:
	mov edx,esi
	or ecx,0xFFFFFFFF
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [edi+0x110],eax
	call CSummoned::PrepareActionLayer

 Block7:
	mov edx,dword ptr [edi+0xC0]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push edx
	call CSkillInfo::GetSkill
	mov dword ptr [esp+0x58],eax
	test eax,eax
	je Block156

 Block8:
	mov ebp,dword ptr [esp+0x130]
	mov ecx,ebp
	call CInPacket::Decode1
	mov ecx,ebp
	mov byte ptr [edi+0xC4],al
	call CInPacket::Decode1
	movzx esi,al
	mov eax,esi
	shr eax,7
	and eax,1
	mov dword ptr [esp+0x38],eax
	mov eax,dword ptr [edi+0xC0]
	cmp eax,0x3EBA9F
	je Block10

 Block9:
	cmp eax,0x40413F
	jne Block11

 Block10:
	mov eax,dword ptr [edi+0x104]
	push eax
	lea ecx,[edi+0xFC]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	and eax,1
	mov dword ptr [esp+0x38],eax

 Block11:
	and esi,0x7F
	lea ecx,[edi+0x88]
	push esi
	mov dword ptr [esp+0x64],esi
	call CSummonedBase::Action2AIType
	mov ecx,ebp
	mov dword ptr [esp+0x30],eax
	call CInPacket::Decode1
	movzx ebx,al
	xor esi,esi
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x14],esi
	lea edx,[esp+0x67]
	push edx
	push ebx
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x130],esi
	call ZArray<ATTACKINFO>::_Alloc
	cmp ebx,esi
	jle Block16

 Block12:
	mov esi,dword ptr [esp+0x14]
	add esi,0x18
	lea ebx,[ebx]

 Block13:
	mov ecx,ebp
	call CInPacket::Decode4
	mov dword ptr [esi-0x18],eax
	test eax,eax
	je Block15

 Block14:
	mov ecx,ebp
	call CInPacket::Decode1
	movzx eax,al
	mov ecx,ebp
	mov dword ptr [esi-0x14],eax
	call CInPacket::Decode4
	mov dword ptr [esi],eax

 Block15:
	add esi,0x98
	sub ebx,1
	jne Block13

 Block16:
	mov ecx,ebp
	call CInPacket::Decode1
	mov ebx,dword ptr [esp+0x14]
	xor esi,esi
	lea esp,[esp]

 Block17:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block30

 Block18:
	cmp esi,dword ptr [eax-4]
	jae Block29

 Block19:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block27

 Block20:
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	lea edx,[esp+0x20]
	push edx
	add ecx,4
	mov dword ptr [esp+0x24],eax
	call ZMap<unsigned long, __POSITION *, unsigned long>::GetAt
	test eax,eax
	je Block22

 Block21:
	mov eax,dword ptr [esp+0x20]
	jmp Block23

 Block22:
	or dword ptr [esp+0x18],1
	mov dword ptr [esp+0x2C],0
	lea eax,[esp+0x28]

 Block23:
	test byte ptr [esp+0x18],1
	mov ebp,dword ptr [eax+4]
	je Block26

 Block24:
	and dword ptr [esp+0x18],0xFFFFFFFE
	cmp dword ptr [esp+0x2C],0
	je Block26

 Block25:
	push 0
	lea ecx,[esp+0x2C]
	call ZRef<CMob>::_ReleaseRaw
	mov dword ptr [esp+0x2C],0

 Block26:
	test ebp,ebp
	jne Block28

 Block27:
	push esi
	lea ecx,[esp+0x18]
	call ZArray<ATTACKINFO>::FindIndex
	push eax
	lea ecx,[esp+0x18]
	call ZArray<ATTACKINFO>::RemoveAt
	dec esi
	sub ebx,0x98
	inc esi
	add ebx,0x98
	jmp Block17

 Block28:
	mov dword ptr [ebx],ebp
	inc esi
	add ebx,0x98
	jmp Block17

 Block29:
	cmp dword ptr [eax-4],0
	jne Block33

 Block30:
	mov ebx,dword ptr [esp+0x30]
	cmp ebx,1
	je Block34

 Block31:
	cmp dword ptr [edi+0xC0],0x217E76B
	je Block34

 Block32:
	jmp Block155

 Block33:
	mov ebx,dword ptr [esp+0x30]

 Block34:
	mov eax,dword ptr [edi+0x104]
	push eax
	lea esi,[edi+0xFC]
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	xor ecx,dword ptr [esp+0x40]
	add esp,8
	and ecx,1
	xor ecx,eax
	mov edx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x104],eax
	cmp ebx,3
	ja Block40

 Block35:
	cmp EBX, 0
je Block36
cmp EBX, 1
je Block37
cmp EBX, 2
je Block38
cmp EBX, 3
je Block39


 Block36:
	mov ecx,4
	jmp Block41

 Block37:
	mov ecx,0x10
	jmp Block41

 Block38:
	mov ecx,0xD
	jmp Block41

 Block39:
	mov ecx,6
	jmp Block41

 Block40:
	xor ecx,ecx

 Block41:
	mov eax,dword ptr [esp+0x60]
	mov edx,dword ptr [edi+0xC0]
	sub eax,ecx
	mov ecx,dword ptr [edi+0xC8]
	push ebx
	push ecx
	push eax
	push edx
	lea eax,[esp+0x78]
	push eax
	lea ecx,[edi+0x88]
	call CSummonedBase::LoadAttackInfo
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x6C]
	mov esi,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x30],ebp
	test eax,eax
	je Block46

 Block42:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block45

 Block43:
	mov ecx,dword ptr [esp+0x6C]
	add ecx,4
	push ecx
	call esi
	mov ecx,dword ptr [esp+0x6C]
	test ecx,ecx
	je Block45

 Block44:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block45:
	mov dword ptr [esp+0x6C],0

 Block46:
	test ebp,ebp
	je Block155

 Block47:
	mov ebp,dword ptr [ebp+0x6C]
	xor ecx,ecx
	cmp ebx,1
	sete cl
	mov dword ptr [esp+0x1C],ecx
	test ebp,ebp
	je Block49

 Block48:
	lea edx,[ebp+8]
	push edx
	call esi

 Block49:
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [eax+0x64]
	lea ebx,[edi+0x94]
	lea edx,[esp+0x50]
	mov dword ptr [esp+0x20],ecx
	cmp ebx,edx
	je Block61

 Block50:
	mov esi,dword ptr [ebx]
	test esi,esi
	je Block59

 Block51:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block58

 Block52:
	test esi,esi
	je Block58

 Block53:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block55

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block55:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block57

 Block56:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block57:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block58:
	mov dword ptr [ebx],0

 Block59:
	mov dword ptr [ebx],ebp
	test ebp,ebp
	je Block61

 Block60:
	lea ecx,[ebp+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block61:
	mov edx,dword ptr [esp+0x38]
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr [edi+0x90],edx
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [edi+0x98],eax
	lea eax,[edx+ecx]
	mov dword ptr [edi+0x8C],eax
	test eax,eax
	jne Block63

 Block62:
	mov dword ptr [edi+0x8C],1

 Block63:
	test ebp,ebp
	je Block70

 Block64:
	lea eax,[ebp+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block70

 Block65:
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block67

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block67:
	mov eax,dword ptr [ebp+4]
	test eax,eax
	je Block69

 Block68:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block69:
	push ebp
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block70:
	mov ecx,dword ptr [esp+0x30]
	mov edx,dword ptr [ecx+0x64]
	mov eax,dword ptr [edi+4]
	lea esi,[edi+4]
	lea ecx,[esp+0x74]
	mov dword ptr [esp+0x18],edx
	mov edx,dword ptr [eax+0x10]
	push ecx
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x10]
	mov dword ptr [esp+0x28],eax
	lea eax,[esp+0x74]
	push eax
	mov ecx,esi
	call edx
	mov esi,dword ptr [eax+4]
	mov ebx,dword ptr [esp+0x14]
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x60]
	mov edx,dword ptr [edi+0xC8]
	push 0
	push ebx
	push eax
	movzx eax,byte ptr [edi+0xC4]
	push ecx
	mov ecx,dword ptr [esp+0x68]
	push 0
	push edx
	push eax
	sub esi,0x19
	push ecx
	lea ecx,[esp+0xBC]
	mov dword ptr [esp+0x4C],esi
	call CSkill_HitAni::_ctor_0
	mov byte ptr [esp+0x128],1
	mov dword ptr [esp+0x20],0
	lea ebp,[ebx+0x94]

 Block71:
	test ebx,ebx
	je Block138

 Block72:
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [esp+0x20]
	cmp eax,dword ptr [edx-4]
	jae Block138

 Block73:
	mov ecx,dword ptr [ebp-0x94]
	mov edx,dword ptr [ecx+4]
	mov edx,dword ptr [edx+0x10]
	mov dword ptr [esp+0x1C],ecx
	add ecx,4
	lea eax,[esp+0x8C]
	push eax
	call edx
	mov ebx,eax
	mov eax,dword ptr [edi+4]
	mov eax,dword ptr [eax+0x10]
	lea ecx,[edi+4]
	lea edx,[esp+0x94]
	push edx
	call eax
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [esp+0x28]
	xor ebx,ebx
	cmp ecx,dword ptr [eax]
	mov ecx,dword ptr [esp+0x1C]
	push 1
	lea eax,[esp+0x40]
	push eax
	setl bl
	mov dword ptr [ebp-4],edx
	mov dword ptr [ebp],esi
	call CMob::GetBodyRect
	lea ecx,[esp+0x3C]
	push ecx
	call IsRectEmpty
	test eax,eax
	jne Block138

 Block74:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [esp+0x40]
	cmp eax,ecx
	jl Block76

 Block75:
	mov ecx,dword ptr [esp+0x48]
	cmp eax,ecx
	jle Block77

 Block76:
	mov dword ptr [ebp],ecx

 Block77:
	test ebx,ebx
	je Block79

 Block78:
	mov ecx,dword ptr [esp+0x44]
	mov edx,dword ptr [esp+0x3C]
	lea eax,[ecx+edx]
	cdq
	sub eax,edx
	sar eax,1
	add ecx,0xFFFFFFF6
	cmp eax,ecx
	jmp Block80

 Block79:
	mov ecx,dword ptr [esp+0x3C]
	mov eax,dword ptr [esp+0x44]
	add eax,ecx
	cdq
	sub eax,edx
	sar eax,1
	add ecx,0xA
	cmp ecx,eax

 Block80:
	jge Block82

 Block81:
	mov eax,ecx

 Block82:
	mov ecx,dword ptr [ebp]
	sub ecx,esi
	mov edx,ecx
	mov dword ptr [ebp-4],eax
	imul edx,ecx
	sub eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x50],ecx
	mov ecx,eax
	imul ecx,eax
	add edx,ecx
	mov dword ptr [esp+0x70],edx
	mov dword ptr [esp+0x5C],eax
	fild dword ptr [esp+0x70]
	call __CIsqrt
	fld qword ptr [__real_4082c00000000000]
	fcom
	fnstsw ax
	test ah,5
	jp Block84

 Block83:
	fdivrp st(1),st(0)
	fild dword ptr [esp+0x5C]
	fmul st,st(1)
	fiadd dword ptr [esp+0x28]
	call __ftol2_sse
	fimul dword ptr [esp+0x50]
	mov dword ptr [ebp-4],eax
	fiadd dword ptr [esp+0x2C]
	call __ftol2_sse
	mov dword ptr [ebp],eax
	jmp Block85

 Block84:
	fstp st(1)
	fstp st(0)

 Block85:
	mov edx,dword ptr [esp+0x18]
	mov ebx,0x217C05A
	mov dword ptr [ebp-0x84],edx
	cmp dword ptr [edi+0xC0],ebx
	jne Block90

 Block86:
	mov eax,dword ptr [edi+0xC8]
	push eax
	push ebx
	call get_summoned_attack_delay
	mov esi,eax
	add esp,8
	sub esi,0x12C
	je Block88

 Block87:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	div esi
	test edx,edx
	jge Block89

 Block88:
	xor edx,edx

 Block89:
	add dword ptr [ebp-0x84],edx

 Block90:
	mov ecx,dword ptr [ebp-0x94]
	mov eax,dword ptr [ecx+0x174]
	mov edx,dword ptr [eax+0x1C4]
	push edx
	add eax,0x1BC
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov esi,eax
	add esp,8
	lea eax,[esp+0x7C]
	push eax
	mov dword ptr [esp+0x54],esi
	call CWvsContext::GetCharacterData
	mov ecx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x80]
	mov dword ptr [esp+0x5C],ecx
	test eax,eax
	je Block95

 Block91:
	lea esi,[eax-0x10]
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block94

 Block92:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block94

 Block93:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block94:
	mov esi,dword ptr [esp+0x50]
	mov dword ptr [esp+0x80],0
	mov ebx,0x217C05A

 Block95:
	test esi,esi
	je Block117

 Block96:
	mov ecx,dword ptr [esp+0x5C]
	mov eax,dword ptr [ecx+0x155]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	cmp esi,eax
	je Block117

 Block97:
	mov edx,dword ptr [esp+0x18]
	mov dword ptr [ebp-0x84],edx
	cmp dword ptr [edi+0xC0],ebx
	jne Block102

 Block98:
	mov eax,dword ptr [edi+0xC8]
	push eax
	push ebx
	call get_summoned_attack_delay
	mov esi,eax
	add esp,8
	sub esi,0x12C
	je Block100

 Block99:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	div esi
	test edx,edx
	jge Block101

 Block100:
	xor edx,edx

 Block101:
	add dword ptr [ebp-0x84],edx

 Block102:
	mov dword ptr [ebp-0x7C],0
	cmp dword ptr [edi+0xBC],0
	je Block104

 Block103:
	mov esi,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	jmp Block105

 Block104:
	mov ecx,dword ptr [edi+0xB8]
	push ecx
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	call CUserPool::GetUser
	mov esi,eax

 Block105:
	mov eax,dword ptr [esp+0x20]
	push 0
	push 0
	push 0
	push 0
	push 1
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x6C],esp
	push eax
	push edx
	lea ecx,[esp+0xC0]
	call CSkill_HitAni::operator()
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ebp-4]
	mov eax,dword ptr [esi+0x19E8]
	push ecx
	mov ecx,dword ptr [ebp-0x7C]
	push edx
	mov edx,dword ptr [esp+0x5C]
	push 0
	push 0
	push ecx
	mov ecx,dword ptr [ebp-0x90]
	push edx
	mov edx,dword ptr [esp+0x80]
	push ecx
	mov ecx,dword ptr [esp+0x50]
	add ecx,edx
	mov edx,dword ptr [edi+0xC0]
	push ecx
	mov ecx,dword ptr [esp+0x58]
	push edx
	push eax
	call CMob::AddDamageInfo
	mov eax,dword ptr [edi+0xC0]
	cmp eax,0x3EBA9F
	je Block107

 Block106:
	cmp eax,0x40413F
	jne Block137

 Block107:
	mov eax,dword ptr [edi+0x104]
	mov ebx,dword ptr [esp+0x28]
	push eax
	lea eax,[edi+0xFC]
	push eax
	mov dword ptr [esp+0x58],ebx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esp+0x44]
	mov edx,dword ptr [esp+0x4C]
	and al,1
	movsx esi,al
	add esp,8
	lea eax,[edx+ecx]
	mov ecx,dword ptr [esp+0x48]
	neg esi
	sbb esi,esi
	cdq
	sub eax,edx
	and esi,0xFFFFFFCE
	add esi,0x19
	add esi,ebx
	mov ebx,eax
	mov eax,dword ptr [esp+0x40]
	add eax,ecx
	cdq
	sub eax,edx
	movzx edx,byte ptr [edi+0xC8]
	sar eax,1
	push 0
	mov dword ptr [esp+0x8C],eax
	mov eax,dword ptr [edi+0xC8]
	push edx
	push eax
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,dword ptr [esp+0x68]
	sar ebx,1
	call SKILLENTRY::GetBallUOL
	push 0
	push ecx
	mov ecx,dword ptr [esp+0x3C]
	mov eax,esp
	mov byte ptr [esp+0x130],2
	mov dword ptr [esp+0x58],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block109

 Block108:
	mov edx,ecx
	add edx,8
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block109:
	mov edx,dword ptr [esp+0x90]
	mov eax,dword ptr [ebp-0x84]
	mov ecx,dword ptr [esp+0x54]
	push 0xC00614A4
	push edx
	add eax,ecx
	mov ecx,dword ptr [esp+0x3C]
	push ebx
	push ecx
	push esi
	lea ecx,[eax+0x10E]
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::RegisterChainlightningAnimation
	cmp dword ptr [esp+0x34],0
	mov byte ptr [esp+0x128],1
	je Block137

 Block110:
	mov esi,dword ptr [esp+0x34]
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block116

 Block111:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block113

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block113:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block115

 Block114:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block115:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block116:
	mov dword ptr [esp+0x34],0
	jmp Block137

 Block117:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [ebp-0x84],eax
	cmp dword ptr [edi+0xC0],ebx
	jne Block122

 Block118:
	mov ecx,dword ptr [edi+0xC8]
	push ecx
	push ebx
	call get_summoned_attack_delay
	mov esi,eax
	add esp,8
	sub esi,0x12C
	je Block120

 Block119:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	div esi
	test edx,edx
	jge Block121

 Block120:
	xor edx,edx

 Block121:
	add dword ptr [ebp-0x84],edx

 Block122:
	cmp dword ptr [edi+0xBC],0
	je Block124

 Block123:
	mov esi,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	jmp Block125

 Block124:
	mov edx,dword ptr [edi+0xB8]
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push edx
	call CUserPool::GetUser
	mov esi,eax

 Block125:
	push 0
	push 0
	push 0
	push 0
	push 1
	push 0
	push ecx
	mov ecx,dword ptr [esp+0x3C]
	mov eax,esp
	mov dword ptr [esp+0x6C],esp
	push ecx
	push eax
	lea ecx,[esp+0xC0]
	call CSkill_HitAni::operator()
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [ebp-4]
	mov eax,dword ptr [esi+0x19E8]
	push edx
	mov edx,dword ptr [ebp-0x7C]
	push ecx
	mov ecx,dword ptr [esp+0x5C]
	push 0
	push 0
	push edx
	mov edx,dword ptr [ebp-0x90]
	push ecx
	mov ecx,dword ptr [esp+0x80]
	push edx
	mov edx,dword ptr [esp+0x50]
	add edx,ecx
	mov ecx,dword ptr [edi+0xC0]
	push edx
	push ecx
	mov ecx,dword ptr [esp+0x5C]
	push eax
	call CMob::AddDamageInfo
	mov eax,dword ptr [edi+0xC0]
	cmp eax,0x3EBA9F
	je Block127

 Block126:
	cmp eax,0x40413F
	jne Block137

 Block127:
	mov edx,dword ptr [edi+0x104]
	mov ebx,dword ptr [esp+0x28]
	push edx
	lea eax,[edi+0xFC]
	push eax
	mov dword ptr [esp+0x58],ebx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esp+0x4C]
	and al,1
	movsx esi,al
	mov eax,dword ptr [esp+0x44]
	add esp,8
	neg esi
	sbb esi,esi
	add eax,ecx
	movzx ecx,byte ptr [edi+0xC8]
	cdq
	sub eax,edx
	mov edx,dword ptr [esp+0x40]
	and esi,0xFFFFFFCE
	add esi,0x19
	add esi,ebx
	mov ebx,eax
	mov eax,dword ptr [esp+0x48]
	add eax,edx
	cdq
	sub eax,edx
	mov edx,dword ptr [edi+0xC8]
	push 0
	sar eax,1
	push ecx
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr [esp+0x80],eax
	push edx
	lea eax,[esp+0x30]
	push eax
	sar ebx,1
	call SKILLENTRY::GetBallUOL
	push 0
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	mov eax,esp
	mov byte ptr [esp+0x130],3
	mov dword ptr [esp+0x58],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block129

 Block128:
	add ecx,8
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block129:
	mov ecx,dword ptr [esp+0x80]
	mov edx,dword ptr [ebp-0x84]
	mov eax,dword ptr [esp+0x54]
	push 0xC00614A4
	push ecx
	mov ecx,dword ptr [esp+0x3C]
	push ebx
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	add eax,edx
	push esi
	lea edx,[eax+0x10E]
	push edx
	push eax
	call CAnimationDisplayer::RegisterChainlightningAnimation
	cmp dword ptr [esp+0x24],0
	mov byte ptr [esp+0x128],1
	je Block137

 Block130:
	mov esi,dword ptr [esp+0x24]
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block136

 Block131:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block133

 Block132:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block133:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block135

 Block134:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block135:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block136:
	mov dword ptr [esp+0x24],0

 Block137:
	inc dword ptr [esp+0x20]
	mov ebx,dword ptr [esp+0x14]
	mov esi,dword ptr [esp+0x2C]
	add ebp,0x98
	jmp Block71

 Block138:
	mov ecx,dword ptr [esp+0x60]
	push ecx
	mov ecx,edi
	call CSummoned::SetAttackAction
	mov edi,dword ptr [edi+0xC0]
	cmp edi,0x2F9F6E
	je Block140

 Block139:
	cmp edi,0x31260D
	jne Block154

 Block140:
	mov edi,dword ptr [esp+0x14]
	test edi,edi
	je Block154

 Block141:
	cmp dword ptr [edi-4],0
	je Block154

 Block142:
	mov esi,dword ptr [esp+0x30]
	mov edx,dword ptr [esi+0x3C]
	add esi,0x34
	push edx
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x44],eax
	mov eax,dword ptr [esi+0x14]
	push eax
	lea ecx,[esi+0xC]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x20]
	mov dword ptr [esp+0x50],eax
	push edx
	lea eax,[esi+0x18]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x2C]
	push ecx
	add esi,0x24
	push esi
	mov dword ptr [esp+0x64],eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,0x20
	mov dword ptr [esp+0x48],eax
	mov edx,dword ptr [edi+0x94]
	mov eax,dword ptr [edi+0x90]
	push edx
	push eax
	lea ecx,[esp+0x44]
	push ecx
	call OffsetRect
	mov ecx,dword ptr [esp+0x58]
	add dword ptr [esp+0x48],0x64
	lea edx,[esp+0x1C]
	push edx
	call SKILLENTRY::GetTileUOL
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x128],4
	test eax,eax
	je Block144

 Block143:
	mov eax,dword ptr [eax]
	jmp Block145

 Block144:
	xor eax,eax

 Block145:
	mov ecx,dword ptr [esp+0x18]
	push 0
	push 0xFF
	push 0x80
	push 0x1F4
	add ecx,0xC8
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	lea edx,[esp+0x50]
	push edx
	push eax
	call CAnimationDisplayer::RegisterFootHoldAnimation
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x128],1
	test eax,eax
	je Block154

 Block146:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block153

 Block147:
	test esi,esi
	je Block153

 Block148:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block150

 Block149:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block150:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block152

 Block151:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block152:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block153:
	mov dword ptr [esp+0x1C],0

 Block154:
	push offset Ztl_bstr_t::~Ztl_bstr_t
	push 0xF
	push 4
	lea eax,[esp+0xF0]
	push eax
	mov byte ptr [esp+0x138],6
	call __eh_vector_dtor_iterator
	push offset Ztl_bstr_t::~Ztl_bstr_t
	push 0xF
	push 4
	lea ecx,[esp+0xB4]
	push ecx
	mov byte ptr [esp+0x138],5
	call __eh_vector_dtor_iterator
	int 3// TODO: 	mov dword ptr [esp+0x9C],offset ZRefCounted::`vftable'

 Block155:
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x128],0xFFFFFFFF
	call ZArray<ATTACKINFO>::RemoveAll

 Block156:
	mov ecx,dword ptr [esp+0x120]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x118
	ret 4
}
}
// CSummoned::_ZtlSecurePut_m_nMoveAction
__SUB_CLASS(00349CB0, __fastcall, 67299,  CSummoned, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0xFC]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x104],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CSummoned::SummonedBullet::PrepareBulletLayer
_SUB_EXCEPTION_HANDLER(34F4F0)
__SUB_CLASS_THIS(0034F4F0, __thiscall, 67508,  CSummoned::SummonedBullet, _x_com_ptr<IWzGr2DLayer>, NakedParam<_x_com_ptr<IWzVector2D>>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_34F4F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x68
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x7C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x20],ebx
	xor edi,edi
	mov dword ptr [esp+0x84],ebx
	mov dword ptr [esp+0x24],edi
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0x88],1
	call ebp
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x88],2
	call ebp
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	mov eax,dword ptr [esi+0x38]
	push ebx
	push ebx
	lea ecx,[esp+0x44]
	push ecx
	lea edx,[esp+0x38]
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block6

 Block5:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	mov byte ptr [esp+0x98],4
	cmp dword ptr [_D_G_RM],ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[esp+0x80]
	mov byte ptr [esp+0x98],3
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x8C],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	cmp word ptr [esp+0x6C],8
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x84],7
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x74]
	xor ecx,ecx
	mov word ptr [esp+0x6C],cx
	cmp eax,ebx
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[esp+0x6C]
	push edx
	call ebp

 Block15:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x84],8
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebx
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x2C]
	push ecx
	call ebp

 Block19:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x84],9
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebx
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea eax,[esp+0x3C]
	push eax
	call ebp

 Block23:
	mov ebp,dword ptr [esp+0x18]
	cmp ebp,ebx
	sete al
	mov byte ptr [esp+0x17],al
	test al,al
	jne Block89

 Block24:
	cmp ebp,ebx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov ecx,dword ptr [ebp]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[esp+0x1C]
	push edx
	push ebp
	mov dword ptr [esp+0x24],ebx
	call eax
	cmp eax,ebx
	jge Block28

 Block27:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebp
	push eax
	call _com_issue_errorex

 Block28:
	cmp dword ptr [esp+0x1C],ebx
	je Block89

 Block29:
	mov ecx,dword ptr [esi+0x34]
	push ebx
	push 0xFF
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push ebx
	mov dword ptr [eax],ebx
	mov edx,dword ptr [esp+0xA4]
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0xAC]
	mov dword ptr [esp+0x44],esp
	cmp eax,ebx
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block31:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [eax],ebp
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x4C],esp
	push ebp
	call ecx
	lea edx,[esp+0x40]
	push edx
	call CAnimationDisplayer::LoadLayer_0
	mov eax,dword ptr [eax]
	add esp,0x28
	cmp eax,ebx
	je Block33

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov edi,eax
	push eax
	mov dword ptr [esp+0x28],edi
	call edx

 Block33:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block35

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block35:
	cmp edi,ebx
	sete al
	test al,al
	je Block40

 Block36:
	mov eax,dword ptr [ebp]
	mov esi,dword ptr [esp+0x8C]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov dword ptr [esi],ebx
	mov byte ptr [esp+0x88],1
	call ecx
	mov byte ptr [esp+0x84],0
	cmp edi,ebx
	je Block38

 Block37:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block38:
	mov eax,dword ptr [esp+0x90]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	cmp eax,ebx
	je Block93

 Block39:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block93

 Block40:
	cmp dword ptr [esp+0x94],ebx
	je Block60

 Block41:
	cmp edi,ebx
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x84],0xA
	cmp ecx,ebx
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	call IWzVector2D::Getrx
	mov dword ptr [esp+0x28],eax
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x84],9
	cmp eax,ebx
	je Block47

 Block46:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block47:
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x84],0xB
	cmp ecx,ebx
	jne Block49

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	call IWzVector2D::Getry
	mov ebp,eax
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x84],9
	cmp eax,ebx
	je Block51

 Block50:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block51:
	push offset _D_VTMISSING
	lea ecx,[esp+0x50]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x60]
	mov byte ptr [esp+0x88],0xC
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x1C]
	mov bl,0xD
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x88],bl
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x84],0xE
	test esi,esi
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	lea ecx,[esp+0x4C]
	push ecx
	lea edx,[esp+0x60]
	push edx
	push ebp
	mov ecx,edi
	call IWzGr2DLayer::Getwidth
	add eax,dword ptr [esp+0x34]
	mov ecx,esi
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x84],bl
	test eax,eax
	je Block55

 Block54:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block55:
	lea ecx,[esp+0x5C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0x84],9
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0x50]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x60]
	mov byte ptr [esp+0x88],0xF
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x28]
	mov bl,0x10
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x88],bl
	call IWzGr2DLayer::Getrb
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x84],0x11
	test esi,esi
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	lea ecx,[esp+0x4C]
	push ecx
	lea edx,[esp+0x60]
	push edx
	mov ecx,edi
	call IWzGr2DLayer::Getheight
	push eax
	mov ecx,edi
	call IWzGr2DLayer::Getwidth
	neg eax
	push eax
	mov ecx,esi
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x84],bl
	test eax,eax
	je Block59

 Block58:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block59:
	lea ecx,[esp+0x5C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0x84],9
	call Ztl_variant_t::~Ztl_variant_t
	mov ebp,dword ptr [esp+0x18]
	xor ebx,ebx

 Block60:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x5C]
	push eax
	call esi
	lea ecx,[esp+0x5C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block62

 Block61:
	push eax
	call _com_issue_error

 Block62:
	lea edx,[esp+0x4C]
	mov bl,0x12
	push edx
	mov byte ptr [esp+0x88],bl
	call esi
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block64

 Block63:
	push eax
	call _com_issue_error

 Block64:
	mov byte ptr [esp+0x84],0x13
	test edi,edi
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	lea ecx,[esp+0x5C]
	push ecx
	lea edx,[esp+0x50]
	push edx
	push 0x20
	mov ecx,edi
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x84],bl
	cmp word ptr [esp+0x4C],si
	jne Block69

 Block67:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov byte ptr [esp+0x84],9
	cmp word ptr [esp+0x5C],si
	jne Block73

 Block71:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	test eax,eax
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea eax,[esp+0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block74:
	xor esi,esi
	cmp byte ptr [esp+0x17],0
	sete al
	test al,al
	je Block77

 Block75:
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 0xB20
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x64]
	mov byte ptr [esp+0x8C],0x14
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x90],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x8C],0x15
	mov dword ptr [esp+0x28],2
	call get_int32
	mov esi,eax
	add esp,8
	test esi,esi
	je Block77

 Block76:
	mov bl,1
	jmp Block78

 Block77:
	xor bl,bl

 Block78:
	test byte ptr [esp+0x20],2
	mov dword ptr [esp+0x84],9
	je Block80

 Block79:
	lea ecx,[esp+0x5C]
	call Ztl_variant_t::~Ztl_variant_t

 Block80:
	test bl,bl
	je Block87

 Block81:
	cmp dword ptr [esp+0x94],0
	mov eax,3
	mov word ptr [esp+0x5C],ax
	je Block83

 Block82:
	mov dword ptr [esp+0x64],esi
	mov byte ptr [esp+0x84],0x16
	jmp Block84

 Block83:
	neg esi
	mov dword ptr [esp+0x64],esi
	mov byte ptr [esp+0x84],0x17

 Block84:
	mov ecx,dword ptr [esp+0x90]
	test ecx,ecx
	jne Block86

 Block85:
	push 0x80004003
	call _com_issue_error

 Block86:
	fldz
	lea edx,[esp+0x5C]
	push edx
	sub esp,8
	fstp qword ptr [esp]
	call IWzVector2D::Rotate
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x84],9
	call Ztl_variant_t::~Ztl_variant_t

 Block87:
	mov eax,dword ptr [edi]
	mov esi,dword ptr [esp+0x8C]
	mov ecx,dword ptr [eax+4]
	push edi
	mov dword ptr [esi],edi
	call ecx
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	mov byte ptr [esp+0x88],1
	call eax
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [esp+0x88],0
	call edx
	mov eax,dword ptr [esp+0x90]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	test eax,eax
	je Block93

 Block88:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block93

 Block89:
	mov esi,dword ptr [esp+0x8C]
	mov dword ptr [esi],ebx
	mov byte ptr [esp+0x84],1
	cmp ebp,ebx
	je Block91

 Block90:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block91:
	mov eax,dword ptr [esp+0x90]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	cmp eax,ebx
	je Block93

 Block92:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block93:
	mov eax,esi
	mov ecx,dword ptr [esp+0x7C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x74
	ret 0xC
}
}
// CSummoned::SetTeslaCoilTriangle
_SUB_EXCEPTION_HANDLER(354D30)
__SUB_CLASS_THIS(00354D30, __thiscall, 67284,  CSummoned, void, NakedParam<ZRef<Triangle>>, NakedParam<ZRef<ZArray<unsigned long> >>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_354D30
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
	mov esi,ecx
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esi+0x1E0]
	mov dword ptr [esp+0x24],1
	call ZRef<Triangle>::op_assign_copy
	lea ecx,[esp+0x30]
	push ecx
	lea ecx,[esi+0x1E8]
	call ZRef<ZArray<unsigned long>>::op_assign_copy
	mov edx,dword ptr [esi+0xC0]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push edx
	call CSkillInfo::GetSkill
	mov edi,eax
	call get_update_time
	mov ebx,dword ptr [esi+0xF0]
	push ecx
	mov dword ptr [esp+0x18],esp
	mov ebp,eax
	mov eax,esp
	push 0
	push 1
	push 1
	push eax
	mov ecx,edi
	call SKILLENTRY::GetBallUOL
	mov ecx,dword ptr [esp+0x30]
	push ebx
	push ebp
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],ecx
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x28],esp
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ebp

 Block2:
	mov ecx,esi
	call CSummoned::ShowTeslaCoilTriangle
	mov eax,dword ptr [esp+0x2C]
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	mov byte ptr [esp+0x20],0
	test eax,eax
	je Block7

 Block3:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block6

 Block4:
	push edi
	call ebp
	test esi,esi
	je Block6

 Block5:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block6:
	mov dword ptr [esp+0x2C],0

 Block7:
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block11

 Block8:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block11

 Block9:
	push edi
	call ebp
	test esi,esi
	je Block11

 Block10:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block11:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 0x10
}
}
// CSummoned::OnSkill
__SUB_CLASS_THIS(0034A940, __thiscall, 67292,  CSummoned, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0xBC],0
	je Block2

 Block1:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	jmp Block3

 Block2:
	mov eax,dword ptr [esi+0xB8]
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push eax
	call CUserPool::GetUser

 Block3:
	test eax,eax
	je Block5

 Block4:
	cmp dword ptr [eax+0x638],0
	jne Block8

 Block5:
	push edi
	call get_update_time
	mov ecx,dword ptr [esi+0x110]
	push ecx
	lea edi,[esi+0x108]
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0xFFFFFFFF
	jle Block7

 Block6:
	mov edx,edi
	or ecx,0xFFFFFFFF
	call _ZtlSecureTearHelper<long>::call
	mov ecx,esi
	mov dword ptr [esi+0x110],eax
	call CSummoned::PrepareActionLayer

 Block7:
	mov ecx,dword ptr [esp+0xC]
	call CInPacket::Decode1
	movzx edx,al
	and edx,0x7F
	push edx
	mov ecx,esi
	call CSummoned::SetAttackAction
	pop edi

 Block8:
	pop esi
	ret 4
}
}
// CSummoned::_LoadEffect
_SUB_EXCEPTION_HANDLER(354050)
__SUB_CLASS_THIS0(00354050, __thiscall, 67253,  CSummoned, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_354050
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
	mov edi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x2C],ebx
	mov eax,dword ptr [edi+0xC0]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push eax
	xor ebp,ebp
	call CSkillInfo::GetSkill
	cmp eax,ebp
	je Block161

 Block1:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,eax
	call SKILLENTRY::GetSummonedUOL
	mov ecx,dword ptr [edi+0x174]
	mov dword ptr [esp+0x60],ebp
	cmp ecx,ebp
	je Block3

 Block2:
	lea edx,[esp+0x28]
	push edx
	call CAvatar::GetLayerUnderFace
	lea ebx,[ebp+1]
	jmp Block4

 Block3:
	lea eax,[edi+0xF8]

 Block4:
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x1C],esi
	cmp esi,ebp
	je Block6

 Block5:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block6:
	mov byte ptr [esp+0x60],1
	test bl,1
	je Block9

 Block7:
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block9

 Block8:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block9:
	push ebp
	push 0xFF
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [eax],esi
	cmp esi,ebp
	je Block11

 Block10:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block11:
	mov eax,dword ptr [edi+0x188]
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x7C],2
	mov dword ptr [esp+0x40],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block13:
	push offset _S_EFFECT__2
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x84],3
	call Ztl_bstr_t::op_add_1
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x7C],4
	cmp eax,ebp
	je Block15

 Block14:
	mov eax,dword ptr [eax]
	jmp Block16

 Block15:
	xor eax,eax

 Block16:
	push ebp
	push eax
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0x88],5
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	mov ecx,dword ptr [esp+0x20]
	mov byte ptr [esp+0x60],7
	cmp ecx,ebp
	je Block18

 Block17:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x20],ebp

 Block18:
	mov ebx,dword ptr [ZImports::_VariantInit]
	cmp dword ptr [esp+0x14],ebp
	je Block38

 Block19:
	lea edx,[esp+0x48]
	push edx
	mov dword ptr [edi+0x178],1
	call ebx
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block21

 Block20:
	push eax
	call _com_issue_error

 Block21:
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0x64],8
	call ebx
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x60],9
	cmp ecx,ebp
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	lea eax,[esp+0x48]
	push eax
	lea edx,[esp+0x3C]
	push edx
	push ebp
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x60],8
	cmp word ptr [esp+0x38],si
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov byte ptr [esp+0x60],7
	cmp word ptr [esp+0x48],si
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	cmp eax,ebp
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov esi,dword ptr [edi+0x180]
	mov eax,dword ptr [esp+0x14]
	cmp esi,eax
	je Block69

 Block34:
	mov dword ptr [edi+0x180],eax
	cmp eax,ebp
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block36:
	cmp esi,ebp
	je Block69

 Block37:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx
	jmp Block69

 Block38:
	push ebp
	push 0xFF
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],esi
	cmp esi,ebp
	je Block40

 Block39:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block40:
	mov eax,dword ptr [edi+0x188]
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x7C],0xA
	mov dword ptr [esp+0x50],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block42

 Block41:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block42:
	push offset _S_REPEAT
	lea eax,[esp+0x4C]
	push eax
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x84],0xB
	call Ztl_bstr_t::op_add_1
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x7C],0xC
	cmp eax,ebp
	je Block44

 Block43:
	mov eax,dword ptr [eax]
	jmp Block45

 Block44:
	xor eax,eax

 Block45:
	push ebp
	push eax
	lea ecx,[esp+0x48]
	push ecx
	mov byte ptr [esp+0x88],0xD
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x180]
	add esp,0x28
	cmp esi,eax
	je Block50

 Block46:
	mov dword ptr [edi+0x180],eax
	cmp eax,ebp
	je Block48

 Block47:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block48:
	cmp esi,ebp
	je Block50

 Block49:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block50:
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block52

 Block51:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block52:
	mov ecx,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x60],7
	cmp ecx,ebp
	je Block54

 Block53:
	call _xbstr_t::Data_t::Release

 Block54:
	cmp dword ptr [edi+0x180],ebp
	je Block78

 Block55:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block57

 Block56:
	push eax
	call _com_issue_error

 Block57:
	lea edx,[esp+0x48]
	mov bl,0xE
	push edx
	mov byte ptr [esp+0x64],bl
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block59

 Block58:
	push eax
	call _com_issue_error

 Block59:
	mov ecx,dword ptr [edi+0x180]
	mov byte ptr [esp+0x60],0xF
	cmp ecx,ebp
	jne Block61

 Block60:
	push 0x80004003
	call _com_issue_error

 Block61:
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x4C]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x48],si
	jne Block64

 Block62:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	cmp eax,ebp
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block65:
	mov byte ptr [esp+0x60],7
	cmp word ptr [esp+0x38],si
	jne Block68

 Block66:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	cmp dword ptr [edi+0x180],ebp
	je Block78

 Block70:
	mov ebx,dword ptr [esp+0x1C]
	cmp ebx,ebp
	jne Block72

 Block71:
	push 0x80004003
	call _com_issue_error

 Block72:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0xD4]
	lea eax,[esp+0x24]
	push eax
	push ebx
	mov dword ptr [esp+0x2C],ebp
	call ecx
	cmp eax,ebp
	jge Block74

 Block73:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebx
	push eax
	call _com_issue_errorex

 Block74:
	mov esi,dword ptr [edi+0x180]
	cmp esi,ebp
	jne Block76

 Block75:
	push 0x80004003
	call _com_issue_error

 Block76:
	mov eax,dword ptr [esp+0x24]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xD8]
	push eax
	push esi
	call ecx
	cmp eax,ebp
	jge Block79

 Block77:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex
	jmp Block79

 Block78:
	mov ebx,dword ptr [esp+0x1C]

 Block79:
	push ebp
	push 0xFF
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	mov dword ptr [eax],ebx
	cmp ebx,ebp
	je Block81

 Block80:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+4]
	push ebx
	call eax

 Block81:
	mov eax,dword ptr [edi+0x188]
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x7C],0x10
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block83

 Block82:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block83:
	push offset _S_EFFECT0
	lea eax,[esp+0x44]
	push eax
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x84],0x11
	call Ztl_bstr_t::op_add_1
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x7C],0x12
	cmp eax,ebp
	je Block85

 Block84:
	mov eax,dword ptr [eax]
	jmp Block86

 Block85:
	xor eax,eax

 Block86:
	push ebp
	push eax
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0x88],0x13
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [esp+0x3C]
	add esp,0x28
	cmp esi,eax
	je Block91

 Block87:
	mov dword ptr [esp+0x14],eax
	cmp eax,ebp
	je Block89

 Block88:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block89:
	cmp esi,ebp
	je Block91

 Block90:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block91:
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebp
	je Block93

 Block92:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block93:
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x60],7
	cmp ecx,ebp
	je Block95

 Block94:
	call _xbstr_t::Data_t::Release

 Block95:
	cmp dword ptr [esp+0x14],ebp
	je Block115

 Block96:
	lea eax,[esp+0x38]
	push eax
	mov dword ptr [edi+0x17C],1
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block98

 Block97:
	push eax
	call _com_issue_error

 Block98:
	lea edx,[esp+0x48]
	mov bl,0x14
	push edx
	mov byte ptr [esp+0x64],bl
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block100

 Block99:
	push eax
	call _com_issue_error

 Block100:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x60],0x15
	cmp ecx,ebp
	jne Block102

 Block101:
	push 0x80004003
	call _com_issue_error

 Block102:
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x4C]
	push eax
	push ebp
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x48],si
	jne Block105

 Block103:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	cmp eax,ebp
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block106:
	mov byte ptr [esp+0x60],7
	cmp word ptr [esp+0x38],si
	jne Block109

 Block107:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block110:
	mov esi,dword ptr [edi+0x184]
	mov eax,dword ptr [esp+0x14]
	cmp esi,eax
	je Block146

 Block111:
	mov dword ptr [edi+0x184],eax
	cmp eax,ebp
	je Block113

 Block112:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block113:
	cmp esi,ebp
	je Block146

 Block114:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx
	jmp Block146

 Block115:
	push ebp
	push 0xFF
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	mov dword ptr [eax],ebx
	cmp ebx,ebp
	je Block117

 Block116:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+4]
	push ebx
	call ecx

 Block117:
	mov eax,dword ptr [edi+0x188]
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x7C],0x16
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block119

 Block118:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block119:
	push offset _S_REPEAT0
	lea ecx,[esp+0x44]
	push ecx
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x84],0x17
	call Ztl_bstr_t::op_add_1
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x7C],0x18
	cmp eax,ebp
	je Block121

 Block120:
	mov eax,dword ptr [eax]
	jmp Block122

 Block121:
	xor eax,eax

 Block122:
	push ebp
	push eax
	lea edx,[esp+0x50]
	push edx
	mov byte ptr [esp+0x88],0x19
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x184]
	add esp,0x28
	cmp esi,eax
	je Block127

 Block123:
	mov dword ptr [edi+0x184],eax
	cmp eax,ebp
	je Block125

 Block124:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block125:
	cmp esi,ebp
	je Block127

 Block126:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block127:
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebp
	je Block129

 Block128:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block129:
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x60],7
	cmp ecx,ebp
	je Block131

 Block130:
	call _xbstr_t::Data_t::Release

 Block131:
	cmp dword ptr [edi+0x184],ebp
	je Block155

 Block132:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block134

 Block133:
	push eax
	call _com_issue_error

 Block134:
	lea eax,[esp+0x48]
	mov bl,0x1A
	push eax
	mov byte ptr [esp+0x64],bl
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block136

 Block135:
	push eax
	call _com_issue_error

 Block136:
	mov ecx,dword ptr [edi+0x184]
	mov byte ptr [esp+0x60],0x1B
	cmp ecx,ebp
	jne Block138

 Block137:
	push 0x80004003
	call _com_issue_error

 Block138:
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x4C]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x48],si
	jne Block141

 Block139:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	cmp eax,ebp
	je Block142

 Block140:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block142

 Block141:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block142:
	mov byte ptr [esp+0x60],7
	cmp word ptr [esp+0x38],si
	jne Block145

 Block143:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block146

 Block144:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block146

 Block145:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block146:
	cmp dword ptr [edi+0x184],ebp
	je Block155

 Block147:
	mov esi,dword ptr [esp+0x1C]
	cmp esi,ebp
	jne Block149

 Block148:
	push 0x80004003
	call _com_issue_error

 Block149:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xD4]
	lea eax,[esp+0x24]
	push eax
	push esi
	mov dword ptr [esp+0x2C],ebp
	call ecx
	cmp eax,ebp
	jge Block151

 Block150:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block151:
	mov esi,dword ptr [edi+0x184]
	cmp esi,ebp
	jne Block153

 Block152:
	push 0x80004003
	call _com_issue_error

 Block153:
	mov eax,dword ptr [esp+0x24]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xD8]
	push eax
	push esi
	call ecx
	cmp eax,ebp
	jge Block155

 Block154:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block155:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x60],1
	cmp eax,ebp
	je Block157

 Block156:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block157:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x60],0
	cmp eax,ebp
	je Block159

 Block158:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block159:
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,ebp
	je Block161

 Block160:
	call _xbstr_t::Data_t::Release

 Block161:
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
// CSummoned::SummonedBullet::Container::OnRemoved
__SUB_CLASS_THIS0(0034A9D0, __thiscall, 67523,  CSummoned::SummonedBullet::Container, void) {
__asm {

 Block0:
	push ecx
	mov byte ptr [esp],0
	mov eax,dword ptr [esp]
	push eax
	call BulletContainer<CSummoned::SummonedBullet>::CallUpdate_RemoveT
	pop ecx
	ret
}
}
// CTutor::Update
__SUB_CLASS_THIS0(00358460, __thiscall, 67768,  CTutor, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call timeGetTime
	mov ecx,dword ptr [esi+0x204]
	add ecx,dword ptr [esi+0x200]
	cmp ecx,eax
	jae Block3

 Block1:
	mov eax,dword ptr [esi+0x1F0]
	test eax,eax
	je Block3

 Block2:
	mov dword ptr [esi+0x1F0],0
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block3:
	mov ecx,esi
	pop esi
	jmp  CSummoned::Update
}
}
// CSummoned::GetBodyRect
__SUB_CLASS_THIS(0034AAD0, __thiscall, 67266,  CSummoned, int32_t, tagRECT&, int32_t) {
__asm {

 Block0:
	sub esp,0x10
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x174]
	test ecx,ecx
	je Block2

 Block1:
	mov eax,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x18]
	push eax
	push edx
	call CAvatar::GetBodyRect
	mov eax,1
	pop esi
	add esp,0x10
	ret 8

 Block2:
	push ebp
	lea ebp,[esi+0x140]
	push ebp
	call IsRectEmpty
	test eax,eax
	je Block4

 Block3:
	mov eax,dword ptr [esp+0x1C]
	push eax
	call SetRectEmpty
	pop ebp
	xor eax,eax
	pop esi
	add esp,0x10
	ret 8

 Block4:
	mov ecx,dword ptr [esi+0x104]
	push ebx
	push edi
	push ecx
	lea edx,[esi+0xFC]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,eax
	add esp,8
	and ebx,1
	mov eax,ebp
	jne Block6

 Block5:
	lea eax,[esi+0x150]

 Block6:
	mov ecx,dword ptr [eax]
	mov edi,dword ptr [esp+0x24]
	mov dword ptr [edi],ecx
	mov edx,dword ptr [eax+4]
	mov dword ptr [edi+4],edx
	mov ecx,dword ptr [eax+8]
	mov dword ptr [edi+8],ecx
	mov edx,dword ptr [eax+0xC]
	lea ecx,[esi+0x194]
	mov dword ptr [edi+0xC],edx
	call TSecType<long>::GetData
	push eax
	lea ecx,[esi+0x1A0]
	call TSecType<long>::GetData
	push eax
	push edi
	call OffsetRect
	cmp dword ptr [esp+0x28],0
	je Block10

 Block7:
	mov eax,ebp
	test ebx,ebx
	jne Block9

 Block8:
	lea eax,[esi+0x150]

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [eax+4]
	mov dword ptr [esp+0x10],ecx
	mov ecx,dword ptr [eax+8]
	mov dword ptr [esp+0x14],edx
	mov edx,dword ptr [eax+0xC]
	mov dword ptr [esp+0x18],ecx
	lea ecx,[esi+0x1AC]
	mov dword ptr [esp+0x1C],edx
	call TSecType<long>::GetData
	push eax
	lea ecx,[esi+0x1B8]
	call TSecType<long>::GetData
	push eax
	lea eax,[esp+0x18]
	push eax
	call OffsetRect
	lea ecx,[esp+0x10]
	push ecx
	push edi
	push edi
	call UnionRect

 Block10:
	pop edi
	pop ebx
	pop ebp
	mov eax,1
	pop esi
	add esp,0x10
	ret 8
}
}
// CSummoned::GetType
__SUB_CLASS_THIS0(0034FED0, __thiscall, 67287,  CSummoned, long) {
__asm {

 Block0:
	mov eax,4
	ret
}
}
// CSummoned::OnResolveMoveAction
__SUB_CLASS_THIS(00348F10, __thiscall, 67288,  CSummoned, long, long, long, long, const CVecCtrl*) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xCC]
	cmp eax,5
	ja Block13

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block11
cmp EAX, 2
je Block11
cmp EAX, 3
je Block13
cmp EAX, 4
je Block9
cmp EAX, 5
je Block9


 Block2:
	cmp dword ptr [ecx+0xBC],0x217C05A
	jne Block6

 Block3:
	mov ecx,dword ptr [ecx+0x1D8]
	cmp ecx,1
	je Block5

 Block4:
	cmp ecx,2
	jne Block6

 Block5:
	xor eax,eax
	cmp dword ptr [esp+4],eax
	setl al
	and eax,1
	or eax,0x2A
	ret 0x10

 Block6:
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block8

 Block7:
	xor ecx,ecx
	test eax,eax
	setl cl
	and ecx,1
	or ecx,4
	mov eax,ecx
	ret 0x10

 Block8:
	mov eax,dword ptr [esp+0xC]
	and eax,1
	or eax,4
	ret 0x10

 Block9:
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block8

 Block10:
	xor edx,edx
	test eax,eax
	setl dl
	and edx,1
	or edx,0xC
	mov eax,edx
	ret 0x10

 Block11:
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block8

 Block12:
	xor ecx,ecx
	test eax,eax
	setl cl
	and ecx,1
	or ecx,2
	mov eax,ecx
	ret 0x10

 Block13:
	xor eax,eax
	ret 0x10
}
}
// CSummoned::PreserveAction
_SUB_EXCEPTION_HANDLER(34BEF0)
__SUB_CLASS_THIS0(0034BEF0, __thiscall, 67253,  CSummoned, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_34BEF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x4C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push eax
	call esi
	lea ecx,[esp+0x3C]
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
	lea edx,[esp+0x2C]
	push edx
	mov dword ptr [esp+0x58],0
	call esi
	lea eax,[esp+0x2C]
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
	mov ecx,dword ptr [edi+0xF8]
	mov byte ptr [esp+0x54],1
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x54],0
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	or ebp,0xFFFFFFFF
	cmp word ptr [esp+0x3C],8
	mov dword ptr [esp+0x54],ebp
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	lea edx,[esp+0x1C]
	push edx
	call esi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	mov esi,dword ptr [edi+0x188]
	mov dword ptr [esp+0x54],2
	test esi,esi
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x30]
	push 0
	push 0
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x3C]
	push 0
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x44]
	push 0
	push 0
	mov dword ptr [eax+0xC],edx
	push 0
	lea eax,[esp+0x40]
	push eax
	mov eax,dword ptr [ecx+0x8C]
	lea edx,[esp+0x40]
	push edx
	push esi
	call eax
	test eax,eax
	jge Block20

 Block19:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block20:
	cmp word ptr [esp+0x1C],8
	mov dword ptr [esp+0x54],ebp
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov eax,dword ptr [esp+0x14]
	lea esi,[edi+0x194]
	lea ecx,[esi+0xC]
	push eax
	call TSecType<long>::SetData
	mov ecx,dword ptr [esp+0x18]
	push ecx
	mov ecx,esi
	call TSecType<long>::SetData
	mov ecx,esi
	call TSecType<long>::GetData
	lea ecx,[edi+0x1A0]
	mov ebp,eax
	call TSecType<long>::GetData
	mov esi,dword ptr [edi+0x188]
	test esi,esi
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov edx,dword ptr [esi]
	push ebp
	push eax
	mov eax,dword ptr [edx+0x40]
	push esi
	call eax
	test eax,eax
	jge Block28

 Block27:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block28:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x14],esp
	push 0
	mov dword ptr [eax],0
	mov eax,dword ptr [edi+0xF8]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block30:
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x48
	ret
}
}
// CSummoned::GetRTTI
__SUB_CLASS_THIS0(0034FEE0, __thiscall, 67300,  CSummoned, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CSummoned::ms_RTTI_CSummoned
	ret
}
}
// CSummoned::IsKindOf
__SUB_CLASS_THIS(0034FEF0, __thiscall, 67301,  CSummoned, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CSummoned::ms_RTTI_CSummoned
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
// CSummoned::OnLayerZChanged
__SUB_CLASS_THIS(00349810, __thiscall, 67289,  CSummoned, void, const CVecCtrl*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block2

 Block1:
	add eax,0xC
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	cmp eax,dword ptr [ecx+0x184]
	jne Block5

 Block4:
	add ecx,0xFFFFFFFC
	call CSummoned::SetLayerZ

 Block5:
	ret 4
}
}
// CSummoned::SetAttackAction
__SUB_CLASS_THIS(0034A0F0, __thiscall, 67264,  CSummoned, void, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	lea edx,[esi+0x108]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,esi
	mov dword ptr [esi+0x110],eax
	call CSummoned::PrepareActionLayer
	pop esi
	ret 4
}
}
// CSummoned::GetPosPrev
__SUB_CLASS_THIS0(0034FFC0, __thiscall, 67291,  CSummoned, const tagPOINT) {
__asm {

 Block0:
	push esi
	lea esi,[ecx+0x1A8]
	push edi
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov ecx,esi
	mov edi,eax
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [eax],edi
	pop edi
	mov dword ptr [eax+4],ecx
	pop esi
	ret 4
}
}
// CSummoned::SetDamaged
_SUB_EXCEPTION_HANDLER(34B730)
__SUB_CLASS_THIS(0034B730, __thiscall, 67276,  CSummoned, void, long, long, long, CMob*, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_34B730
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
	mov edi,ecx
	mov dword ptr [esp+0x14],edi
	mov ecx,dword ptr [edi+0x12C]
	lea eax,[edi+0x124]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block52

 Block1:
	mov eax,dword ptr [edi+0xE4]
	test eax,eax
	jne Block52

 Block2:
	mov ebp,dword ptr [esp+0x70]
	test ebp,ebp
	je Block41

 Block3:
	mov ecx,ebp
	call CMob::IsMobOurTeam
	test eax,eax
	jne Block52

 Block4:
	mov ecx,ebp
	call CMob::IsSamePhaseWithMe
	test eax,eax
	je Block52

 Block5:
	cmp dword ptr [ebp+0x310],0
	jne Block52

 Block6:
	mov ecx,dword ptr [ebp+0x174]
	test ecx,ecx
	je Block11

 Block7:
	call CMobTemplate::_ZtlSecureGet_dwTemplateID
	cmp eax,0x8F71AF
	jne Block9

 Block8:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	call CUserLocal::IsGL5thEventCakeTeam
	test eax,eax
	jne Block52

 Block9:
	mov ecx,dword ptr [ebp+0x174]
	call CMobTemplate::_ZtlSecureGet_dwTemplateID
	cmp eax,0x8F71B0
	jne Block11

 Block10:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	call CUserLocal::IsGL5thEventPieTeam
	test eax,eax
	jne Block52

 Block11:
	mov edx,dword ptr [esp+0x74]
	mov ecx,dword ptr [ebp+0x174]
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edx
	mov dword ptr [esp+0x70],ecx
	call CMobTemplate::GetAttackInfo
	mov edi,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov ebp,eax
	xor ebx,ebx

 Block12:
	lea ecx,[esi+0x3C98]
	call CRand32::Random
	mov dword ptr [esp+ebx*4+0x3C],eax
	inc ebx
	cmp ebx,6
	jl Block12

 Block13:
	xor ebx,ebx
	mov dword ptr [esp+0x18],ebx
	cmp ebp,ebx
	je Block16

 Block14:
	cmp dword ptr [ebp+0x1C],ebx
	je Block16

 Block15:
	mov eax,dword ptr [edi+0x594]
	xor ecx,ecx
	cmp eax,ebx
	setne cl
	lea edx,[esp+0x18]
	push ecx
	push edx
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x78],esp
	push eax
	mov ecx,edi
	call CUserLocal::GetPassiveSkillData
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,esi
	call CWvsContext::GetCharacterData
	mov edx,dword ptr [esp+0x4C]
	mov eax,dword ptr [eax+4]
	push edx
	lea ecx,[esi+0x2148]
	push ecx
	lea edx,[esi+0x20D0]
	push edx
	push eax
	mov eax,dword ptr [esp+0x90]
	add eax,0x188
	push eax
	lea ecx,[esi+0x3C78]
	mov dword ptr [esp+0x80],ebx
	call CalcDamage::MDamageSummoned
	lea ecx,[esp+0x24]
	mov esi,eax
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ebx,dword ptr [esp+0x6C]
	jmp Block17

 Block16:
	mov eax,dword ptr [esi+0x3FD0]
	push eax
	mov eax,dword ptr [edi+0x594]
	xor ecx,ecx
	cmp eax,ebx
	mov ebx,dword ptr [esp+0x70]
	mov edx,dword ptr [ebx+0x14]
	setne cl
	lea eax,[ebx+0xC]
	push ecx
	push edx
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	push eax
	lea ecx,[esp+0x24]
	push ecx
	sub esp,8
	mov edx,esp
	mov dword ptr [esp+0x84],esp
	push edx
	mov ecx,edi
	call CUserLocal::GetPassiveSkillData
	lea eax,[esp+0x3C]
	push eax
	mov ecx,esi
	call CWvsContext::GetCharacterData
	mov ecx,dword ptr [esp+0x54]
	mov eax,dword ptr [eax+4]
	push ecx
	push ebp
	lea edx,[esi+0x2148]
	push edx
	mov edx,dword ptr [esp+0x94]
	lea ecx,[esi+0x20D0]
	push ecx
	push eax
	add edx,0x188
	push edx
	lea ecx,[esi+0x3C78]
	mov dword ptr [esp+0x8C],1
	call CalcDamage::PDamageSummoned
	lea ecx,[esp+0x24]
	mov esi,eax
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	call ZRef<CharacterData>::~ZRef<CharacterData>

 Block17:
	xor eax,eax
	mov dword ptr [esp+0x6C],eax
	mov dword ptr [esp+0x68],eax
	cmp ebp,eax
	je Block34

 Block18:
	mov ecx,dword ptr [esp+0x14]
	push 1
	lea eax,[esp+0x40]
	push eax
	call CSummoned::GetBodyRect
	mov eax,dword ptr [esp+0x3C]
	mov edi,dword ptr [esp+0x44]
	sub edi,eax
	mov dword ptr [esp+0x64],eax
	mov ecx,offset _D_G_RAND
	je Block20

 Block19:
	call CRand32::Random
	xor edx,edx
	div edi
	add edx,dword ptr [esp+0x64]
	mov dword ptr [esp+0x64],edx
	jmp Block21

 Block20:
	call CRand32::Random
	mov dword ptr [esp+0x64],eax

 Block21:
	mov eax,dword ptr [esp+0x40]
	mov edi,dword ptr [esp+0x48]
	sub edi,eax
	mov dword ptr [esp+0x1C],eax
	mov ecx,offset _D_G_RAND
	je Block23

 Block22:
	call CRand32::Random
	xor edx,edx
	div edi
	mov edi,edx
	add edi,dword ptr [esp+0x1C]
	jmp Block24

 Block23:
	call CRand32::Random
	mov edi,eax

 Block24:
	cmp dword ptr [ebp+0x88],0
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [eax],0
	je Block29

 Block25:
	mov dword ptr [esp+0x28],esp
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x74],2
	call CSummoned::GetVecCtrl
	mov ebp,dword ptr [ebp+0x7C]
	mov byte ptr [esp+0x70],3
	test ebp,ebp
	je Block27

 Block26:
	mov edx,dword ptr [ebp]
	mov dword ptr [esp+0x30],edx
	jmp Block28

 Block27:
	mov dword ptr [esp+0x30],0

 Block28:
	mov ecx,dword ptr [esp+0x28]
	mov ebp,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CSummoned::IsLeft
	neg eax
	sbb eax,eax
	inc eax
	push eax
	mov eax,dword ptr [esp+0x34]
	push eax
	mov dword ptr [esp+0x78],0xFFFFFFFF
	mov ecx,ebp
	jmp Block33

 Block29:
	mov dword ptr [esp+0x2C],esp
	mov ecx,dword ptr [esp+0x6C]
	push edi
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],0
	mov ebp,dword ptr [ebp+0x7C]
	mov dword ptr [esp+0x70],4
	mov dword ptr [esp+0x38],esp
	test ebp,ebp
	je Block31

 Block30:
	mov ebp,dword ptr [ebp]
	jmp Block32

 Block31:
	xor ebp,ebp

 Block32:
	xor edx,edx
	cmp dword ptr [esp+0x8C],edx
	mov dword ptr [esp+0x70],0xFFFFFFFF
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	setg dl
	push edx
	push ebp

 Block33:
	call CAnimationDisplayer::Effect_General
	mov eax,dword ptr [ebx+0x14]
	push eax
	add ebx,0xC
	push ebx
	call _ZtlSecureFuseHelper<unsigned long>::call
	mov ecx,dword ptr [esp+0x6C]
	push edi
	push ecx
	mov ebx,eax
	call get_sound_volume_by_pos
	mov edx,dword ptr [esp+0x84]
	push eax
	add edx,0xB
	push edx
	push ebx
	call play_mob_sound
	add esp,0x1C

 Block34:
	mov edi,dword ptr [esp+0x14]
	mov ebp,dword ptr [esp+0x70]

 Block35:
	lea edx,[edi+0x124]
	mov ecx,0xFFFFFA24
	test esi,esi
	jle Block37

 Block36:
	mov ecx,0x5DC

 Block37:
	call _ZtlSecureTearHelper<long>::call
	cmp dword ptr [esp+0x68],0
	mov dword ptr [edi+0x12C],eax
	jne Block39

 Block38:
	cmp dword ptr [esp+0x6C],0
	je Block44

 Block39:
	mov eax,dword ptr [edi+0x188]
	test eax,eax
	je Block42

 Block40:
	lea ecx,[eax-0xC]
	jmp Block43

 Block41:
	mov esi,dword ptr [esp+0x64]
	jmp Block35

 Block42:
	xor ecx,ecx

 Block43:
	fild dword ptr [esp+0x6C]
	sub esp,0x10
	fstp qword ptr [esp+8]
	fild dword ptr [esp+0x78]
	fstp qword ptr [esp]
	call CVecCtrl::SetImpactNext_0

 Block44:
	push esi
	mov ecx,edi
	call CSummoned::MakeIncDecHPEffect
	push 0xD1
	lea ecx,[esp+0x30]
	call COutPacket::_ctor_1
	mov eax,dword ptr [edi+0xB4]
	push eax
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x60],5
	call COutPacket::Encode4
	test ebp,ebp
	jne Block46

 Block45:
	push 0xFE
	lea ecx,[esp+0x30]
	call COutPacket::Encode1
	push esi
	lea ecx,[esp+0x30]
	call COutPacket::Encode4
	jmp Block47

 Block46:
	mov ecx,dword ptr [esp+0x74]
	push ecx
	lea ecx,[esp+0x30]
	call COutPacket::Encode1
	push esi
	lea ecx,[esp+0x30]
	call COutPacket::Encode4
	mov eax,dword ptr [ebp+0x174]
	mov edx,dword ptr [eax+0x14]
	push edx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	push eax
	lea ecx,[esp+0x30]
	call COutPacket::Encode4
	cmp dword ptr [esp+0x78],0
	setl al
	movzx ecx,al
	push ecx
	lea ecx,[esp+0x30]
	call COutPacket::Encode1

 Block47:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x2C]
	push edx
	call CClientSocket::SendPacket
	test esi,esi
	je Block49

 Block48:
	lea edx,[edi+0x108]
	mov ecx,0xF
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [edi+0x110],eax
	call CSummoned::PrepareActionLayer
	mov eax,dword ptr [edi+0xC0]
	push 0
	push 0x33
	push eax
	call play_skill_sound
	add esp,0xC

 Block49:
	mov ecx,dword ptr [edi+0x174]
	test ecx,ecx
	je Block51

 Block50:
	neg esi
	sbb esi,esi
	and esi,3
	push 0xFFFFFFFF
	add esi,2
	push esi
	call CAvatar::SetEmotion

 Block51:
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block52:
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret 0x18
}
}
// CSummoned::ShowTeslaCoilTriangle
_SUB_EXCEPTION_HANDLER(34C6C0)
__SUB_CLASS_THIS(0034C6C0, __thiscall, 67286,  CSummoned, void, NakedParam<ZRef<Triangle>>, long, long, NakedParam<Ztl_bstr_t>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_34C6C0
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
	mov esi,ecx
	mov edi,dword ptr [esi+0xF8]
	mov dword ptr [esp+0x20],1
	test edi,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xB0]
	lea ecx,[esp+0x14]
	push ecx
	push edi
	mov dword ptr [esp+0x1C],0
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block4:
	mov eax,dword ptr [esi+0xB4]
	mov ebp,dword ptr [esp+0x30]
	mov edi,dword ptr [esp+0x14]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x40]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x40]
	dec edi
	add ebp,0x3C0
	mov dword ptr [esp+0x38],esp
	test eax,eax
	je Block6

 Block5:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	mov eax,dword ptr [esp+0x34]
	mov edx,dword ptr [eax+0xC]
	mov ecx,dword ptr [eax+8]
	mov ebx,dword ptr [esp+0x3C]
	push edi
	push edx
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push edx
	push eax
	push ebx
	push ebp
	call CAnimationDisplayer::RegisterTeslacoilAnimation
	mov ecx,dword ptr [esi+0xB4]
	mov edx,dword ptr [esp+0x38]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x38],esp
	test eax,eax
	je Block8

 Block7:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [eax+0x14]
	mov edx,dword ptr [eax+0x10]
	push edi
	push ecx
	mov ecx,dword ptr [eax+0xC]
	push edx
	mov edx,dword ptr [eax+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push edx
	push ebx
	push ebp
	call CAnimationDisplayer::RegisterTeslacoilAnimation
	mov eax,dword ptr [esi+0xB4]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x40]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x38],esp
	test eax,eax
	je Block10

 Block9:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block10:
	mov eax,dword ptr [esp+0x34]
	mov edx,dword ptr [eax+4]
	mov ecx,dword ptr [eax]
	push edi
	push edx
	mov edx,dword ptr [eax+0x14]
	mov eax,dword ptr [eax+0x10]
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push edx
	push eax
	push ebx
	push ebp
	call CAnimationDisplayer::RegisterTeslacoilAnimation
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x20],0
	test eax,eax
	je Block15

 Block11:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block14

 Block12:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block14

 Block13:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block14:
	mov dword ptr [esp+0x2C],0

 Block15:
	mov ecx,dword ptr [esp+0x38]
	test ecx,ecx
	je Block17

 Block16:
	call _xbstr_t::Data_t::Release

 Block17:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 0x14
}
}
// CTutor::OnMessage
_SUB_EXCEPTION_HANDLER(34EEE0)
__SUB_CLASS_THIS(0034EEE0, __thiscall, 67771,  CTutor, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_34EEE0
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
	mov edi,ecx
	mov eax,dword ptr [edi+0x1F0]
	xor ebp,ebp
	cmp eax,ebp
	je Block2

 Block1:
	mov dword ptr [edi+0x1F0],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	call timeGetTime
	mov ecx,dword ptr [edi+0xC0]
	mov dword ptr [edi+0x200],eax
	mov eax,dword ptr [esp+0x5C]
	push 1
	push ecx
	lea edx,[esp+0x18]
	mov dword ptr [edi+0x204],eax
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	push edx
	call CActionMan::GetSummonedProp
	push 0x50
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x64],esp
	push 0x701
	push eax
	mov dword ptr [esp+0x60],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x18]
	mov byte ptr [esp+0x58],1
	cmp ecx,ebp
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0x5C],0
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x58],2
	call get_int32
	add esp,8
	cmp word ptr [esp+0x38],8
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x50],0
	jne Block7

 Block5:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block8:
	mov eax,dword ptr [edi+0xF8]
	push ebp
	push 0xFF
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block10:
	mov eax,dword ptr [edi+0x188]
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x6C],3
	mov dword ptr [esp+0x40],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block12:
	lea eax,[esp+0x34]
	push 0x1425
	push eax
	mov byte ptr [esp+0x74],4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x78],ebp
	mov ecx,dword ptr [esp+0x74]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x80]
	push edx
	mov byte ptr [esp+0x78],6
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,0xC
	push ebp
	push eax
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x78],8
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x1F0]
	add esp,0x28
	cmp esi,eax
	je Block17

 Block13:
	mov dword ptr [edi+0x1F0],eax
	cmp eax,ebp
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block15:
	cmp esi,ebp
	je Block17

 Block16:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block17:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	je Block19

 Block18:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block19:
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x50],7
	cmp eax,ebp
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block21:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x50],0
	cmp eax,ebp
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block23:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push ecx
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	lea eax,[esp+0x28]
	push eax
	mov byte ptr [esp+0x54],9
	call esi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	mov ecx,dword ptr [edi+0x1F0]
	mov byte ptr [esp+0x50],0xA
	cmp ecx,ebp
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x2C]
	push eax
	push ebp
	push ebp
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x50],9
	cmp word ptr [esp+0x28],si
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebp
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov byte ptr [esp+0x50],0
	cmp word ptr [esp+0x38],si
	jne Block36

 Block34:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov esi,dword ptr [edi+0x1F0]
	cmp esi,ebp
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xC0]
	lea eax,[esp+0x5C]
	push eax
	push esi
	mov dword ptr [esp+0x64],ebp
	call ecx
	cmp eax,ebp
	jge Block41

 Block40:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block41:
	mov esi,dword ptr [edi+0x1F0]
	mov ebp,dword ptr [esp+0x5C]
	test esi,esi
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xB8]
	lea eax,[esp+0x58]
	push eax
	push esi
	mov dword ptr [esp+0x60],0
	call ecx
	test eax,eax
	jge Block45

 Block44:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block45:
	mov esi,dword ptr [edi+0x1F0]
	test esi,esi
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	mov edx,dword ptr [esp+0x1C]
	mov eax,dword ptr [esp+0x58]
	mov ecx,dword ptr [esi]
	add ebp,edx
	cdq
	sub eax,edx
	sar eax,1
	neg ebp
	push ebp
	neg eax
	push eax
	mov eax,dword ptr [ecx+0x44]
	push esi
	call eax
	test eax,eax
	jge Block49

 Block48:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block49:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
	push ecx
	call esi
	lea edx,[esp+0x28]
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
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x54],0xB
	call esi
	lea ecx,[esp+0x38]
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
	mov ecx,dword ptr [edi+0x1F0]
	mov byte ptr [esp+0x50],0xC
	test ecx,ecx
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x3C]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x50],0xB
	cmp word ptr [esp+0x38],si
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov byte ptr [esp+0x50],0
	cmp word ptr [esp+0x28],si
	jne Block62

 Block60:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block63:
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
	cmp eax,0x15
	je Block66

 Block64:
	cmp ecx,0x7D0
	je Block66

 Block65:
	push 0x11
	mov ecx,edi
	call CSummoned::SetAttackAction

 Block66:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	test eax,eax
	je Block68

 Block67:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block68:
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
// CSummoned::GetPos
__SUB_CLASS_THIS0(0034FF90, __thiscall, 67291,  CSummoned, const tagPOINT) {
__asm {

 Block0:
	push esi
	lea esi,[ecx+0x190]
	push edi
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov ecx,esi
	mov edi,eax
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [eax],edi
	pop edi
	mov dword ptr [eax+4],ecx
	pop esi
	ret 4
}
}
// CTutor::CTutor
_SUB_EXCEPTION_HANDLER(355980)
__SUB_CLASS_THIS(00355980, __thiscall, 67766,  CTutor, void, unsigned long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_355980
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x14],ebx
	mov eax,dword ptr [esp+0x3C]
	mov ecx,dword ptr [esp+0x38]
	push 1
	push 1
	push eax
	xor ebp,ebp
	push ebp
	push ecx
	mov ecx,ebx
	call CSummoned::_ctor_0
	int 3// TODO: 	mov dword ptr [ebx],offset CTutor::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [ebx+4],offset CTutor::`vftable'{for `IVecCtrlOwner'}
	int 3// TODO: 	mov dword ptr [ebx+8],offset CTutor::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [ebx+0x88],offset CTutor::`vftable'
	mov dword ptr [esp+0x30],ebp
	mov dword ptr [ebx+0x1F0],ebp
	lea edi,[ebx+0x1F4]
	mov dword ptr [edi],ebp
	mov dword ptr [ebx+0x1F8],ebp
	lea edx,[esp+0x3C]
	push edx
	push 0xC
	mov ecx,edi
	mov byte ptr [esp+0x38],3
	mov dword ptr [ebx+0x200],ebp
	call ZArray<_x_com_ptr<IWzFont>>::_Alloc
	xor esi,esi

 Block1:
	lea eax,[esp+0x3C]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [eax]
	push ebp
	add ecx,esi
	push ecx
	push eax
	mov byte ptr [esp+0x3C],4
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x48]
	add esp,0xC
	mov byte ptr [esp+0x30],3
	cmp eax,ebp
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block3:
	add esi,4
	cmp esi,0x30
	jl Block1

 Block4:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x18]
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
	lea ecx,[esp+0x18]
	push ecx
	push 0xFF000000
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x4C],esp
	push 0x1A25
	push edx
	mov byte ptr [esp+0x48],5
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x40],6
	cmp ecx,ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov byte ptr [esp+0x40],5
	call IWzFont::Create
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x30],3
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebp
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
	lea edx,[esp+0x3C]
	push 0x5B0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x30],7
	cmp eax,ebp
	je Block14

 Block13:
	mov ebp,dword ptr [eax]
	jmp Block15

 Block14:
	xor ebp,ebp

 Block15:
	mov eax,8
	mov word ptr [esp+0x18],ax
	test ebp,ebp
	jne Block17

 Block16:
	xor esi,esi
	jmp Block21

 Block17:
	mov eax,ebp
	lea edx,[eax+2]

 Block18:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block18

 Block19:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea ecx,[edi+edi+6]
	push ecx
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
	mov dword ptr [esp+0x20],esi
	test esi,esi
	jne Block24

 Block22:
	test ebp,ebp
	je Block24

 Block23:
	push 0x8007000E
	call _com_issue_error

 Block24:
	lea edx,[esp+0x18]
	push edx
	push 0xFF000000
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	push 0x1A25
	push eax
	mov byte ptr [esp+0x48],8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [ebx+0x1F4]
	lea edi,[ebx+0x1F4]
	add eax,4
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x40],9
	test eax,eax
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov ecx,eax
	mov byte ptr [esp+0x40],8
	call IWzFont::Create
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x30],7
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x30],3
	test eax,eax
	je Block38

 Block31:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block38

 Block32:
	test esi,esi
	je Block38

 Block33:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block35

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block35:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block37

 Block36:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block37:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block38:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	lea edx,[esp+0x18]
	push edx
	push 0xFFFF0000
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	push 0x1A25
	mov bl,0xA
	push eax
	mov byte ptr [esp+0x48],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,8
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x40],0xB
	test eax,eax
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	mov ecx,eax
	mov byte ptr [esp+0x40],bl
	call IWzFont::Create
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x30],3
	jne Block45

 Block43:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block46:
	lea eax,[esp+0x3C]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x30],0xC
	test eax,eax
	je Block48

 Block47:
	mov ebp,dword ptr [eax]
	jmp Block49

 Block48:
	xor ebp,ebp

 Block49:
	mov ecx,8
	mov word ptr [esp+0x18],cx
	test ebp,ebp
	jne Block51

 Block50:
	xor esi,esi
	jmp Block55

 Block51:
	mov eax,ebp
	lea edx,[eax+2]

 Block52:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block52

 Block53:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea edx,[edi+edi+6]
	push edx
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block55

 Block54:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebp
	push esi
	call _memcpy
	add esp,0xC

 Block55:
	mov dword ptr [esp+0x20],esi
	test esi,esi
	jne Block58

 Block56:
	test ebp,ebp
	je Block58

 Block57:
	push 0x8007000E
	call _com_issue_error

 Block58:
	lea eax,[esp+0x18]
	push eax
	push 0xFFFF0000
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	push 0x1A25
	mov bl,0xD
	push ecx
	mov byte ptr [esp+0x48],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [esp+0x24]
	mov eax,dword ptr [edi+0x1F4]
	add edi,0x1F4
	add eax,0xC
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x40],0xE
	test eax,eax
	jne Block60

 Block59:
	push 0x80004003
	call _com_issue_error

 Block60:
	mov ecx,eax
	mov byte ptr [esp+0x40],bl
	call IWzFont::Create
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x30],0xC
	jne Block63

 Block61:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block64:
	mov esi,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x30],3
	test esi,esi
	je Block72

 Block65:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block72

 Block66:
	test esi,esi
	je Block72

 Block67:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block69

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block69:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block71

 Block70:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block71:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block72:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x18]
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
	lea ecx,[esp+0x18]
	push ecx
	push 0xFF00FF00
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x4C],esp
	push 0x1A25
	mov bl,0xF
	push edx
	mov byte ptr [esp+0x48],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,0x10
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x40],0x10
	test eax,eax
	jne Block76

 Block75:
	push 0x80004003
	call _com_issue_error

 Block76:
	mov ecx,eax
	mov byte ptr [esp+0x40],bl
	call IWzFont::Create
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x30],3
	jne Block79

 Block77:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block80:
	lea edx,[esp+0x3C]
	push 0x5B0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x30],0x11
	test eax,eax
	je Block82

 Block81:
	mov ebp,dword ptr [eax]
	jmp Block83

 Block82:
	xor ebp,ebp

 Block83:
	mov eax,8
	mov word ptr [esp+0x18],ax
	test ebp,ebp
	jne Block85

 Block84:
	xor esi,esi
	jmp Block89

 Block85:
	mov eax,ebp
	lea edx,[eax+2]
	lea ebx,[ebx]

 Block86:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block86

 Block87:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea ecx,[edi+edi+6]
	push ecx
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block89

 Block88:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebp
	push esi
	call _memcpy
	add esp,0xC

 Block89:
	mov dword ptr [esp+0x20],esi
	test esi,esi
	jne Block92

 Block90:
	test ebp,ebp
	je Block92

 Block91:
	push 0x8007000E
	call _com_issue_error

 Block92:
	lea edx,[esp+0x18]
	push edx
	push 0xFF00FF00
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	push 0x1A25
	mov bl,0x12
	push eax
	mov byte ptr [esp+0x48],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [esp+0x24]
	mov eax,dword ptr [edi+0x1F4]
	add edi,0x1F4
	add eax,0x14
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x40],0x13
	test eax,eax
	jne Block94

 Block93:
	push 0x80004003
	call _com_issue_error

 Block94:
	mov ecx,eax
	mov byte ptr [esp+0x40],bl
	call IWzFont::Create
	mov ebx,8
	mov byte ptr [esp+0x30],0x11
	cmp word ptr [esp+0x18],bx
	jne Block97

 Block95:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block98:
	mov esi,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x30],3
	test esi,esi
	je Block106

 Block99:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block106

 Block100:
	test esi,esi
	je Block106

 Block101:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block103

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block103:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block105

 Block104:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block105:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block106:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block108

 Block107:
	push eax
	call _com_issue_error

 Block108:
	lea eax,[esp+0x18]
	push eax
	push 0xFF0000FF
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	push 0x1A25
	push ecx
	mov byte ptr [esp+0x48],0x14
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,0x18
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x40],0x15
	test eax,eax
	jne Block110

 Block109:
	push 0x80004003
	call _com_issue_error

 Block110:
	mov ecx,eax
	mov byte ptr [esp+0x40],0x14
	call IWzFont::Create
	mov byte ptr [esp+0x30],3
	cmp word ptr [esp+0x18],bx
	jne Block113

 Block111:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block114

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block114

 Block113:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block114:
	lea ecx,[esp+0x3C]
	push 0x5B0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x30],0x16
	test eax,eax
	je Block116

 Block115:
	mov ebp,dword ptr [eax]
	jmp Block117

 Block116:
	xor ebp,ebp

 Block117:
	mov edx,8
	mov word ptr [esp+0x18],dx
	test ebp,ebp
	jne Block119

 Block118:
	xor esi,esi
	jmp Block123

 Block119:
	mov eax,ebp
	lea edx,[eax+2]

 Block120:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block120

 Block121:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea eax,[edi+edi+6]
	push eax
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block123

 Block122:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebp
	push esi
	call _memcpy
	add esp,0xC

 Block123:
	mov dword ptr [esp+0x20],esi
	test esi,esi
	jne Block126

 Block124:
	test ebp,ebp
	je Block126

 Block125:
	push 0x8007000E
	call _com_issue_error

 Block126:
	lea ecx,[esp+0x18]
	push ecx
	push 0xFF0000FF
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x48],esp
	push 0x1A25
	mov bl,0x17
	push edx
	mov byte ptr [esp+0x48],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,dword ptr [esp+0x24]
	mov eax,dword ptr [ebp+0x1F4]
	add ebp,0x1F4
	add eax,0x1C
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x40],0x18
	test eax,eax
	jne Block128

 Block127:
	push 0x80004003
	call _com_issue_error

 Block128:
	mov ecx,eax
	mov byte ptr [esp+0x40],bl
	call IWzFont::Create
	mov edi,8
	mov byte ptr [esp+0x30],0x16
	cmp word ptr [esp+0x18],di
	jne Block131

 Block129:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block132

 Block130:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block132

 Block131:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block132:
	mov esi,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x30],3
	test esi,esi
	je Block140

 Block133:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block140

 Block134:
	test esi,esi
	je Block140

 Block135:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block137

 Block136:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block137:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block139

 Block138:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block139:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block140:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block142

 Block141:
	push eax
	call _com_issue_error

 Block142:
	lea edx,[esp+0x18]
	push edx
	push 0xFFFFFFFF
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	push 0x1A25
	mov bl,0x19
	push eax
	mov byte ptr [esp+0x48],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [ebp]
	add eax,0x20
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x40],0x1A
	test eax,eax
	jne Block144

 Block143:
	push 0x80004003
	call _com_issue_error

 Block144:
	mov ecx,eax
	mov byte ptr [esp+0x40],bl
	call IWzFont::Create
	mov byte ptr [esp+0x30],3
	cmp word ptr [esp+0x18],di
	jne Block147

 Block145:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block148

 Block146:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block148

 Block147:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block148:
	lea eax,[esp+0x3C]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov bl,0x1B
	mov byte ptr [esp+0x30],bl
	test eax,eax
	je Block150

 Block149:
	mov ebp,dword ptr [eax]
	jmp Block151

 Block150:
	xor ebp,ebp

 Block151:
	mov ecx,edi
	mov word ptr [esp+0x18],cx
	test ebp,ebp
	jne Block153

 Block152:
	xor esi,esi
	jmp Block159

 Block153:
	mov eax,ebp
	lea edx,[eax+2]
	jmp Block155

 Block155:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block155

 Block156:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea edx,[edi+edi+6]
	push edx
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block158

 Block157:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebp
	push esi
	call _memcpy
	add esp,0xC

 Block158:
	mov edi,8

 Block159:
	mov dword ptr [esp+0x20],esi
	test esi,esi
	jne Block162

 Block160:
	test ebp,ebp
	je Block162

 Block161:
	push 0x8007000E
	call _com_issue_error

 Block162:
	lea eax,[esp+0x18]
	push eax
	push 0xFFFFFFFF
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	push 0x1A25
	push ecx
	mov byte ptr [esp+0x48],0x1C
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,dword ptr [esp+0x24]
	mov eax,dword ptr [ebp+0x1F4]
	add ebp,0x1F4
	add eax,0x24
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x40],0x1D
	test eax,eax
	jne Block164

 Block163:
	push 0x80004003
	call _com_issue_error

 Block164:
	mov ecx,eax
	mov byte ptr [esp+0x40],0x1C
	call IWzFont::Create
	mov byte ptr [esp+0x30],bl
	cmp word ptr [esp+0x18],di
	jne Block167

 Block165:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block168

 Block166:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block168

 Block167:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block168:
	mov esi,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x30],3
	test esi,esi
	je Block176

 Block169:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block176

 Block170:
	test esi,esi
	je Block176

 Block171:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block173

 Block172:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block173:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block175

 Block174:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block175:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block176:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block178

 Block177:
	push eax
	call _com_issue_error

 Block178:
	lea ecx,[esp+0x18]
	push ecx
	push 0xFF51378C
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x4C],esp
	push 0x1A25
	mov bl,0x1E
	push edx
	mov byte ptr [esp+0x48],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [ebp]
	add eax,0x28
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x40],0x1F
	test eax,eax
	jne Block180

 Block179:
	push 0x80004003
	call _com_issue_error

 Block180:
	mov ecx,eax
	mov byte ptr [esp+0x40],bl
	call IWzFont::Create
	mov byte ptr [esp+0x30],3
	cmp word ptr [esp+0x18],di
	jne Block183

 Block181:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block184

 Block182:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block184

 Block183:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block184:
	lea edx,[esp+0x3C]
	push 0x5B0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x30],0x20
	test eax,eax
	je Block186

 Block185:
	mov ebp,dword ptr [eax]
	jmp Block187

 Block186:
	xor ebp,ebp

 Block187:
	mov word ptr [esp+0x18],di
	test ebp,ebp
	jne Block189

 Block188:
	xor esi,esi
	jmp Block193

 Block189:
	mov eax,ebp
	lea edx,[eax+2]
	mov edi,edi

 Block190:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block190

 Block191:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea eax,[edi+edi+6]
	push eax
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block193

 Block192:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebp
	push esi
	call _memcpy
	add esp,0xC

 Block193:
	mov dword ptr [esp+0x20],esi
	test esi,esi
	jne Block196

 Block194:
	test ebp,ebp
	je Block196

 Block195:
	push 0x8007000E
	call _com_issue_error

 Block196:
	lea ecx,[esp+0x18]
	push ecx
	push 0xFF51378C
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x48],esp
	push 0x1A25
	mov bl,0x21
	push edx
	mov byte ptr [esp+0x48],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [esp+0x24]
	mov eax,dword ptr [edi+0x1F4]
	add eax,0x2C
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x40],0x22
	test eax,eax
	jne Block198

 Block197:
	push 0x80004003
	call _com_issue_error

 Block198:
	mov ecx,eax
	mov byte ptr [esp+0x40],bl
	call IWzFont::Create
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x30],0x20
	jne Block201

 Block199:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block202

 Block200:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block202

 Block201:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block202:
	mov esi,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x30],3
	test esi,esi
	je Block210

 Block203:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block210

 Block204:
	test esi,esi
	je Block210

 Block205:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block207

 Block206:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block207:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block209

 Block208:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block209:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block210:
	mov eax,edi
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 8
}
}
// CSummoned::SummonedBullet::Container::~Container
__SUB_CLASS_THIS0(0034AA80, __thiscall, 67523,  CSummoned::SummonedBullet::Container, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset BulletContainer<CSummoned::SummonedBullet>::`vftable'
	add ecx,4
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<CSummoned::SummonedBullet>>::`vftable'
	jmp  ZList<ZRef<CSummoned::SummonedBullet>>::RemoveAll
}
}
// CSummoned::IsLeft
__SUB_CLASS_THIS0(00349C90, __thiscall, 67260,  CSummoned, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x104]
	push eax
	add ecx,0xFC
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	and eax,1
	ret
}
}
// CSummoned::Init
_SUB_EXCEPTION_HANDLER(354E60)
__SUB_CLASS_THIS(00354E60, __thiscall, 67256,  CSummoned, int32_t, long, long, long, short, long, long, long, AvatarLook*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_354E60
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
	mov esi,ecx
	mov eax,dword ptr [esi+0xB8]
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push eax
	call CUserPool::GetUser
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	mov ecx,eax
	mov eax,dword ptr [edx+0xC]
	call eax
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov edx,dword ptr [esp+0x4C]
	lea ecx,[esi+0x1A0]
	push edx
	mov dword ptr [esi+0xBC],eax
	call TSecType<long>::SetData
	mov eax,dword ptr [esp+0x50]
	lea edi,[esi+0x194]
	push eax
	mov ecx,edi
	call TSecType<long>::SetData
	lea ecx,[edi+0xC]
	lea ebx,[esi+0x1AC]
	call TSecType<long>::GetData
	lea ecx,[ebx+0xC]
	push eax
	call TSecType<long>::SetData
	mov ecx,edi
	call TSecType<long>::GetData
	push eax
	mov ecx,ebx
	call TSecType<long>::SetData
	mov ecx,dword ptr [esp+0x54]
	lea ebp,[esi+0xFC]
	mov edx,ebp
	call _ZtlSecureTearHelper<long>::call
	mov edx,dword ptr [esi+0xC0]
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr [esi+0x104],eax
	mov eax,dword ptr [esp+0x5C]
	push edx
	push eax
	mov dword ptr [esi+0xD0],eax
	mov dword ptr [esi+0xD4],ecx
	call is_invulnerable_summon_skill
	mov dword ptr [esi+0xE4],eax
	mov eax,dword ptr [esi+0xC0]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	add esp,8
	push eax
	call CSkillInfo::GetSkill
	movsx ecx,word ptr [esp+0x58]
	mov ebx,eax
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov dword ptr [esp+0x58],ebx
	call CWvsPhysicalSpace2D::GetFoothold
	mov dword ptr [esp+0x58],eax
	test ebx,ebx
	jne Block5

 Block4:
	xor eax,eax
	jmp Block95

 Block5:
	mov edx,dword ptr [esi+0xC8]
	push edx
	mov ecx,ebx
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x1B0]
	push ecx
	add eax,0x1A8
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0xC8]
	add esp,8
	push edx
	mov ecx,ebx
	mov dword ptr [esi+0xD8],eax
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x3C]
	push ecx
	add eax,0x34
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0xC8]
	add esp,8
	push edx
	mov ecx,ebx
	mov dword ptr [esi+0xDC],eax
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0xD8]
	push ecx
	add eax,0xD0
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push 0x90
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esi+0xE0],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x5C],eax
	mov dword ptr [esp+0x44],0
	test eax,eax
	je Block7

 Block6:
	push 0
	mov ecx,eax
	call CAttrShoe::_ctor_0
	jmp Block8

 Block7:
	xor eax,eax

 Block8:
	push eax
	lea ecx,[esi+0x18C]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	call ZRef<CAttrShoe>::op_assign_ptr
	mov eax,dword ptr [esi+0xD0]
	cmp eax,4
	je Block11

 Block9:
	cmp eax,5
	je Block11

 Block10:
	cmp eax,2
	jne Block12

 Block11:
	mov eax,dword ptr [esi+0x190]
	fld1
	sub esp,8
	fstp qword ptr [esp]
	lea ecx,[eax+0x78]
	call TSecType<double>::SetData
	fld1
	mov eax,dword ptr [esi+0x190]
	sub esp,8
	lea ecx,[eax+0x84]
	fstp qword ptr [esp]
	call TSecType<double>::SetData

 Block12:
	call CVecCtrlSummoned::CreateInstance
	mov edx,dword ptr [esi+0xD0]
	mov ecx,dword ptr [esi+0xC0]
	push edx
	mov edx,dword ptr [esi+0xB4]
	push ecx
	mov ebx,eax
	lea eax,[esi+4]
	push edx
	push eax
	mov ecx,ebx
	call CVecCtrlSummoned::Init
	mov eax,dword ptr [esi+0xD0]
	cmp eax,4
	je Block15

 Block13:
	cmp eax,5
	je Block15

 Block14:
	mov eax,dword ptr [esp+0x58]
	mov dword ptr [esp+0x58],eax
	jmp Block16

 Block15:
	mov dword ptr [esp+0x58],0

 Block16:
	mov ecx,dword ptr [esi+0x104]
	push ecx
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov ecx,edi
	mov ebp,eax
	call TSecType<long>::GetData
	lea ecx,[esi+0x1A0]
	mov edi,eax
	call TSecType<long>::GetData
	mov ecx,dword ptr [esp+0x58]
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+4]
	push ecx
	push ebp
	push 0
	push 0
	push edi
	push eax
	mov eax,dword ptr [esi+0xBC]
	push eax
	mov ecx,ebx
	call edx
	lea edi,[esi+0x188]
	push ebx
	mov ecx,edi
	call __QueryVecCtrlSummoned
	test eax,eax
	jge Block19

 Block17:
	cmp eax,0x80004002
	je Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	mov ebx,dword ptr [esp+0x68]
	test ebx,ebx
	je Block24

 Block20:
	lea ecx,[esi+0x170]
	call ZRef<CAvatar>::_Alloc
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block22

 Block21:
	mov edx,dword ptr [eax+0x640]
	jmp Block23

 Block22:
	mov edx,2

 Block23:
	mov eax,dword ptr [esp+0x50]
	mov ecx,dword ptr [esp+0x4C]
	push 0
	push 0x64
	push eax
	push ecx
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x70],esp
	mov dword ptr [eax],0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x74],esp
	mov dword ptr [eax],0
	mov ecx,dword ptr [esi+0x174]
	push edx
	mov dword ptr [esp+0x64],1
	push ebx
	mov dword ptr [esp+0x68],0xFFFFFFFF
	call CAvatar::Init_1

 Block24:
	mov ecx,esi
	call CSummoned::_LoadEffect
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	mov ecx,3
	mov dword ptr [esp+0x44],2
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],0
	mov byte ptr [esp+0x44],cl
	mov ecx,dword ptr [_D_G_GR]
	test ecx,ecx
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x20]
	push eax
	push 0
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x74]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov ebx,dword ptr [esi+0xF8]
	cmp ebx,eax
	je Block33

 Block29:
	mov dword ptr [esi+0xF8],eax
	test eax,eax
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block31:
	test ebx,ebx
	je Block33

 Block32:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block33:
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block35

 Block34:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block35:
	mov ebp,8
	mov byte ptr [esp+0x44],2
	cmp word ptr [esp+0x1C],bp
	jne Block38

 Block36:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block39:
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp word ptr [esp+0x2C],bp
	jne Block42

 Block40:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block43:
	mov ebx,dword ptr [esi+0xF8]
	test ebx,ebx
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push ebx
	call eax
	test eax,eax
	jge Block47

 Block46:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebx
	push eax
	call _com_issue_errorex

 Block47:
	mov eax,dword ptr [edi]
	mov ecx,0xD
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block49

 Block48:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block49:
	mov ebx,dword ptr [esi+0xF8]
	mov dword ptr [esp+0x44],4
	test ebx,ebx
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [ebx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push ebx
	call eax
	test eax,eax
	jge Block53

 Block52:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push ebx
	push eax
	call _com_issue_errorex

 Block53:
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp word ptr [esp+0x1C],bp
	jne Block56

 Block54:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block57:
	mov ebx,dword ptr [esi+0xF8]
	test ebx,ebx
	jne Block59

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	mov edx,dword ptr [_D_VTEMPTY]
	mov ecx,dword ptr [ebx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [_D_VTEMPTY+4]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [_D_VTEMPTY+8]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [_D_VTEMPTY+12]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push ebx
	call eax
	test eax,eax
	jge Block61

 Block60:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebx
	push eax
	call _com_issue_errorex

 Block61:
	cmp dword ptr [esp+0x64],1
	jne Block66

 Block62:
	lea ebp,[esi+0x108]
	mov edx,ebp
	mov ecx,3
	call _ZtlSecureTearHelper<long>::call
	cmp dword ptr [esi+0xC0],0x217C05A
	mov dword ptr [esi+0x110],eax
	jne Block66

 Block63:
	mov eax,dword ptr [esi+0x1DC]
	cmp eax,1
	je Block65

 Block64:
	cmp eax,2
	jne Block66

 Block65:
	mov ecx,dword ptr [esi+0x104]
	push ecx
	lea ebx,[esi+0xFC]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	and eax,1
	or eax,0x2A
	add esp,8
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov edx,ebp
	mov ecx,0x12
	mov dword ptr [esi+0x104],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x110],eax

 Block66:
	mov dword ptr [esi+0x8C],0
	call get_update_time
	mov dword ptr [esi+0x134],eax
	call get_update_time
	add eax,0x2710
	mov dword ptr [esi+0x13C],eax
	mov dword ptr [esi+0x138],eax
	call get_update_time
	lea edx,[esp+0x1C]
	mov dword ptr [esi+0xEC],eax
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edx
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [esp+0x20]
	mov edi,dword ptr [eax+4]
	test ebx,ebx
	je Block71

 Block67:
	add ebx,0xFFFFFFF0
	lea ebp,[ebx+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block70

 Block68:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block70

 Block69:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx

 Block70:
	mov dword ptr [esp+0x20],0

 Block71:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	lea eax,[esp+0x18]
	push eax
	push 0x217E381
	xor ebx,ebx
	push edi
	mov dword ptr [esp+0x24],ebx
	call CSkillInfo::GetSkillLevel_0
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,ebx
	je Block74

 Block72:
	cmp eax,ebx
	je Block74

 Block73:
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x174]
	push ecx
	add eax,0x16C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov ebx,eax

 Block74:
	mov edx,dword ptr [esi+0xC8]
	mov ebp,dword ptr [esp+0x54]
	push edx
	mov ecx,ebp
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0xFC]
	push ecx
	add eax,0xF4
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	imul ecx,0x3E8
	mov edx,ecx
	imul edx,ebx
	mov eax,0x51EB851F
	imul edx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov edx,dword ptr [esi+0xEC]
	add ecx,eax
	add edx,ecx
	xor eax,eax
	add esp,8
	mov ecx,esi
	mov dword ptr [esi+0xF0],edx
	mov dword ptr [esi+0x168],eax
	mov dword ptr [esi+0x16C],eax
	call CSummoned::PrepareActionLayer
	mov ecx,esi
	call CSummoned::SetLayerZ
	mov edi,dword ptr [esp+0x14]
	test edi,edi
	je Block76

 Block75:
	lea eax,[edi+4]
	jmp Block77

 Block76:
	xor eax,eax

 Block77:
	push eax
	push 1
	mov ecx,esi
	call CSummoned::ChaseTarget
	cmp dword ptr [esi+0xC0],0x217C05A
	jne Block82

 Block78:
	cmp dword ptr [esi+0x1DC],1
	jne Block82

 Block79:
	call get_update_time
	mov edi,eax
	mov eax,dword ptr [esi+0xC8]
	push eax
	mov ecx,ebp
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x174]
	push ecx
	add eax,0x16C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	imul ecx,0x3E8
	mov edx,ecx
	imul edx,ebx
	mov eax,0x51EB851F
	imul edx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add esp,4
	add eax,edx
	add ecx,eax
	mov dword ptr [esp+0x5C],esp
	lea ebx,[ecx+edi]
	mov ecx,esp
	push 0
	push 1
	push 1
	push ecx
	mov ecx,ebp
	call SKILLENTRY::GetBallUOL
	mov eax,dword ptr [esi+0x1E4]
	push ebx
	push edi
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block81

 Block80:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block81:
	mov ecx,esi
	call CSummoned::ShowTeslaCoilTriangle
	mov edi,dword ptr [esp+0x14]

 Block82:
	cmp dword ptr [esi+0xBC],0
	je Block91

 Block83:
	cmp dword ptr [esi+0xC0],0x217E76B
	jne Block91

 Block84:
	push offset _S_EFFECTBASICEFFIM__14
	lea ecx,[esp+0x5C]
	call _xbstr_t::_ctor_1
	push 3
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x58],esp
	push edx
	lea ecx,[edi+0x88]
	mov dword ptr [esp+0x50],5
	call CAvatar::GetLayerUnderFace
	mov eax,dword ptr [esi+0x188]
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x58],6
	mov dword ptr [esp+0x60],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block86

 Block85:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block86:
	mov eax,dword ptr [esi+0x104]
	push eax
	lea eax,[esi+0xFC]
	push eax
	mov byte ptr [esp+0x60],7
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,dword ptr [esp+0x74]
	add esp,8
	test ebx,ebx
	je Block88

 Block87:
	mov ecx,dword ptr [ebx]
	jmp Block89

 Block88:
	xor ecx,ecx

 Block89:
	and eax,1
	push eax
	push ecx
	mov byte ptr [esp+0x60],5
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::Effect_General
	test ebx,ebx
	je Block91

 Block90:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release

 Block91:
	mov eax,dword ptr [esi+0xC0]
	cmp eax,0x217E773
	je Block93

 Block92:
	cmp eax,0x1E9F99E
	jne Block94

 Block93:
	mov dword ptr [esi+0x168],1

 Block94:
	mov eax,1

 Block95:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret 0x20
}
}
// CSummoned::GetCurrentAction
__SUB_CLASS_THIS(003494C0, __thiscall, 67265,  CSummoned, long, long*) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x104]
	push edi
	push eax
	lea ecx,[esi+0xFC]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esp+0x18]
	add esp,8
	push edx
	push eax
	mov ecx,esi
	call CSummoned::MoveAction2RawAction
	mov ebx,eax
	mov eax,dword ptr [esi+0x110]
	push eax
	lea edi,[esi+0x108]
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0xFFFFFFFF
	jle Block2

 Block1:
	mov ecx,dword ptr [esi+0x110]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	pop edi
	pop esi
	pop ebx
	ret 4

 Block2:
	pop edi
	pop esi
	mov eax,ebx
	pop ebx
	ret 4
}
}
// CSummoned::ATTACKEFFECT::SetAttackEffect
__SUB_CLASS_THIS(0034C3C0, __thiscall, 67486,  CSummoned::ATTACKEFFECT, void, NakedParam<Ztl_bstr_t>, long, long, int32_t, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	push edi
	lea edi,[esi+8]
	lea eax,[esp+0xC]
	cmp edi,eax
	je Block5

 Block1:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	je Block3

 Block2:
	call _xbstr_t::Data_t::Release
	mov dword ptr [edi],0

 Block3:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr [edi],ecx
	test ecx,ecx
	je Block6

 Block4:
	add ecx,8
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ecx,dword ptr [esp+0xC]

 Block6:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esi+0xC],eax
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esi+4],edx
	mov edx,dword ptr [esp+0x14]
	add eax,edx
	mov dword ptr [esi],eax
	jne Block8

 Block7:
	mov dword ptr [esi],1

 Block8:
	pop edi
	pop esi
	test ecx,ecx
	je Block10

 Block9:
	call _xbstr_t::Data_t::Release

 Block10:
	ret 0x14
}
}
// CSummoned::~CSummoned
_SUB_EXCEPTION_HANDLER(34FC80)
__SUB_CLASS_THIS0(0034FC80, __thiscall, 67253,  CSummoned, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_34FC80
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
	mov esi,ecx
	mov dword ptr [esp+0x14],esi
	int 3// TODO: 	mov dword ptr [esi],offset CSummoned::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CSummoned::`vftable'{for `IVecCtrlOwner'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CSummoned::`vftable'{for `ZRefCounted'}
	int 3// TODO: 	mov dword ptr [esi+0x88],offset CSummoned::`vftable'
	mov eax,dword ptr [esi+0x1EC]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x20],0xE
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
	call ebp
	test edi,edi
	je Block4

 Block3:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block4:
	mov dword ptr [esi+0x1EC],0

 Block5:
	mov eax,dword ptr [esi+0x1E4]
	mov byte ptr [esp+0x20],0xD
	test eax,eax
	je Block10

 Block6:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block9

 Block7:
	push ebx
	call ebp
	test edi,edi
	je Block9

 Block8:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block9:
	mov dword ptr [esi+0x1E4],0

 Block10:
	lea ecx,[esi+0x1C4]
	mov byte ptr [esp+0x20],0xC
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, long, unsigned long>::`vftable'
	call ZMap<unsigned long, long, unsigned long>::RemoveAll
	lea ecx,[esi+0x1AC]
	mov byte ptr [esp+0x20],0xB
	call SECPOINT::~SECPOINT
	lea ecx,[esi+0x194]
	mov byte ptr [esp+0x20],0xA
	call SECPOINT::~SECPOINT
	mov eax,dword ptr [esi+0x190]
	mov byte ptr [esp+0x20],9
	test eax,eax
	je Block15

 Block11:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block14

 Block12:
	mov eax,dword ptr [esi+0x190]
	add eax,4
	push eax
	call ebp
	mov ecx,dword ptr [esi+0x190]
	test ecx,ecx
	je Block14

 Block13:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block14:
	mov dword ptr [esi+0x190],0

 Block15:
	mov eax,dword ptr [esi+0x188]
	mov byte ptr [esp+0x20],8
	test eax,eax
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block17:
	mov eax,dword ptr [esi+0x184]
	mov byte ptr [esp+0x20],7
	test eax,eax
	je Block19

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block19:
	mov eax,dword ptr [esi+0x180]
	mov byte ptr [esp+0x20],6
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block21:
	mov eax,dword ptr [esi+0x174]
	mov byte ptr [esp+0x20],5
	test eax,eax
	je Block26

 Block22:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block25

 Block23:
	push ebx
	call ebp
	test edi,edi
	je Block25

 Block24:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block25:
	mov dword ptr [esi+0x174],0

 Block26:
	lea ecx,[esi+0x114]
	mov byte ptr [esp+0x20],4
	call ZArray<ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>>::RemoveAll
	mov eax,dword ptr [esi+0xF8]
	mov byte ptr [esp+0x20],3
	test eax,eax
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block28:
	lea ecx,[esi+0xA0]
	int 3// TODO: 	mov dword ptr [esi+0x9C],offset BulletContainer<CSummoned::SummonedBullet>::`vftable'
	mov byte ptr [esp+0x20],2
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<CSummoned::SummonedBullet>>::`vftable'
	call ZList<ZRef<CSummoned::SummonedBullet>>::RemoveAll
	mov ecx,dword ptr [esi+0x94]
	test ecx,ecx
	je Block30

 Block29:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x94],0

 Block30:
	mov ecx,esi
	int 3// TODO: 	mov dword ptr [esi+0x88],offset CSummonedBase::`vftable'
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call CLife::~CLife
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret
}
}
// CSummoned::ShowEffect
_SUB_EXCEPTION_HANDLER(34C290)
__SUB_CLASS_THIS(0034C290, __thiscall, 67264,  CSummoned, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_34C290
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
	mov edi,ecx
	xor esi,esi
	mov dword ptr [esp+0xC],esi
	mov dword ptr [esp+0x1C],esi
	cmp dword ptr [esp+0x24],esi
	jne Block4

 Block1:
	lea eax,[esp+0x24]
	push 0xB6B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x20],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x1C],0
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block3:
	mov esi,dword ptr [esp+0xC]

 Block4:
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0
	push 0
	mov dword ptr [eax],0
	mov eax,dword ptr [edi+0x188]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push 0
	push esi
	call CAnimationDisplayer::Effect_General
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test esi,esi
	je Block8

 Block7:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block8:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4
}
}
// CSummoned::SetFrameInfo
__SUB_CLASS_THIS(003491A0, __thiscall, 67294,  CSummoned, void, ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY> >&, __POSITION*) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+0xC]
	mov eax,dword ptr [ecx+4]
	push edi
	cmp ecx,dword ptr [edx+0xC]
	jne Block2

 Block1:
	mov ecx,dword ptr [esi+0x130]
	mov dword ptr [esi+0x120],ecx

 Block2:
	mov edx,dword ptr [eax+0x40]
	sub dword ptr [esi+0x120],edx
	mov ecx,dword ptr [eax+0x40]
	lea edi,[eax+0x10]
	mov dword ptr [esi+0x11C],ecx
	mov edx,dword ptr [edi+8]
	push edx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esi+0x140],eax
	mov eax,dword ptr [edi+0x14]
	push eax
	lea ecx,[edi+0xC]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esi+0x144],eax
	mov edx,dword ptr [edi+0x20]
	push edx
	lea eax,[edi+0x18]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esi+0x148],eax
	mov ecx,dword ptr [edi+0x2C]
	push ecx
	add edi,0x24
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esi+0x14C],eax
	mov ecx,dword ptr [esi+0x144]
	add esp,0x20
	mov edx,eax
	mov eax,dword ptr [esi+0x140]
	push edx
	mov edx,dword ptr [esi+0x148]
	neg eax
	push eax
	push ecx
	neg edx
	push edx
	add esi,0x150
	push esi
	call SetRect
	pop edi
	pop esi
	ret 8
}
}
// CSummoned::ProcessAttack
_SUB_EXCEPTION_HANDLER(34ABF0)
__SUB_CLASS_THIS(0034ABF0, __thiscall, 67264,  CSummoned, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_34ABF0
	mov eax,dword ptr fs:[0]
	push eax
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi+0x8C]
	mov ebp,dword ptr [esp+0x20]
	test eax,eax
	je Block19

 Block1:
	mov ecx,ebp
	sub ecx,eax
	js Block19

 Block2:
	mov eax,dword ptr [esi+0x94]
	test eax,eax
	je Block15

 Block3:
	mov eax,dword ptr [eax]
	test eax,eax
	je Block15

 Block4:
	mov eax,dword ptr [eax-4]
	shr eax,1
	je Block15

 Block5:
	cmp dword ptr [esi+0xC0],0x217E76B
	jne Block10

 Block6:
	call get_screen_width
	xor edx,edx
	cmp eax,0x320
	setle dl
	push 1
	push ecx
	lea eax,[esi+0xF8]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push eax
	dec edx
	and edx,0x64
	add edx,0x64
	mov edi,edx
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	mov dword ptr [esp+0x20],0
	call get_screen_height
	cdq
	sub eax,edx
	sar eax,1
	neg edi
	sub edi,eax
	push edi
	call get_screen_width
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push eax
	push ecx
	lea edx,[esi+0x188]
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push edx
	call _x_com_ptr<IWzVector2D>::_ctor_copy
	mov eax,dword ptr [esi+0x94]
	test eax,eax
	je Block8

 Block7:
	mov eax,dword ptr [eax]
	jmp Block9

 Block8:
	xor eax,eax

 Block9:
	xor ecx,ecx
	cmp dword ptr [esi+0x90],ecx
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	jmp Block14

 Block10:
	push 1
	push ecx
	lea edx,[esi+0xF8]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edx
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push 0
	push 0
	push ecx
	lea eax,[esi+0x188]
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push eax
	call _x_com_ptr<IWzVector2D>::_ctor_copy
	mov eax,dword ptr [esi+0x94]
	test eax,eax
	je Block12

 Block11:
	mov eax,dword ptr [eax]
	jmp Block13

 Block12:
	xor eax,eax

 Block13:
	xor ecx,ecx
	cmp dword ptr [esi+0x90],ecx

 Block14:
	sete cl
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_General

 Block15:
	cmp dword ptr [esi+0x98],0
	push 0
	je Block17

 Block16:
	mov edx,dword ptr [esi+0xC0]
	push 0x32
	push edx
	jmp Block18

 Block17:
	mov eax,dword ptr [esi+0xC0]
	push 0x31
	push eax

 Block18:
	call play_skill_sound
	add esp,0xC
	mov dword ptr [esi+0x8C],0

 Block19:
	push ebp
	lea ecx,[esi+0x9C]
	call BulletContainer<CSummoned::SummonedBullet>::CallUpdate_T
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0xC
	ret 4
}
}
// CSummoned::AttackToTargetMob
_SUB_EXCEPTION_HANDLER(3501D0)
__SUB_CLASS_THIS(003501D0, __thiscall, 67271,  CSummoned, int32_t, CMob*, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3501D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC80
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0xC44],ecx
	push 1
	lea eax,[ebp-0x4C]
	push eax
	mov ecx,dword ptr [ebp+8]
	call CMob::GetBodyRect
	lea ecx,[ebp-0x4C]
	push ecx
	call IsRectEmpty
	test eax,eax
	je Block2

 Block1:
	xor eax,eax
	jmp Block52

 Block2:
	call TSingleton<CWvsContext>::GetInstance
	mov dword ptr [ebp-0x34],eax
	lea edx,[ebp-0xA98]
	push edx
	mov ecx,dword ptr [ebp-0x34]
	call CWvsContext::GetCharacterData
	mov dword ptr [ebp-0xC48],eax
	mov ecx,dword ptr [ebp-0xC48]
	call ZRef<CharacterData>::op_star
	mov dword ptr [ebp-0x50],eax
	lea ecx,[ebp-0xA98]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov eax,dword ptr [ebp-0x50]
	mov dword ptr [ebp-0x64],eax
	mov ecx,dword ptr [ebp-0x34]
	call CWvsContext::GetBasicStat
	mov dword ptr [ebp-0xA34],eax
	mov ecx,dword ptr [ebp-0x34]
	call CWvsContext::GetSecondaryStat
	mov dword ptr [ebp-0x130],eax
	mov dword ptr [ebp-0x30],4
	mov ecx,dword ptr [ebp-0x30]
	sub ecx,4
	mov dword ptr [ebp-0x3C],ecx
	mov edx,dword ptr [ebp-0x30]
	push edx
	mov ecx,dword ptr [ebp-0xC44]
	add ecx,0x88
	call CSummonedBase::Action2AIType
	push eax
	mov eax,dword ptr [ebp-0xC44]
	mov ecx,dword ptr [eax+0xC8]
	push ecx
	mov edx,dword ptr [ebp-0x3C]
	push edx
	mov eax,dword ptr [ebp-0xC44]
	mov ecx,dword ptr [eax+0xC0]
	push ecx
	lea edx,[ebp-0xAA0]
	push edx
	mov ecx,dword ptr [ebp-0xC44]
	add ecx,0x88
	call CSummonedBase::LoadAttackInfo
	mov dword ptr [ebp-0xC4C],eax
	mov ecx,dword ptr [ebp-0xC4C]
	call ZRef<SummonedAttackInfo>::op_star_access
	mov dword ptr [ebp-0x1C],eax
	lea ecx,[ebp-0xAA0]
	call ZRef<SummonedAttackInfo>::~ZRef<SummonedAttackInfo>
	cmp dword ptr [ebp-0x1C],0
	jne Block4

 Block3:
	xor eax,eax
	jmp Block52

 Block4:
	mov dword ptr [ebp-0x12C],6
	mov eax,dword ptr [ebp-0x1C]
	mov ecx,dword ptr [eax+0x1C]
	mov dword ptr [ebp-0x118],ecx
	mov edx,dword ptr [ebp-0x1C]
	mov eax,dword ptr [edx+0x20]
	mov dword ptr [ebp-0x104],eax
	mov dword ptr [ebp-0x100],0
	mov ecx,dword ptr [ebp-0x1C]
	mov edx,dword ptr [ecx+0x18]
	mov dword ptr [ebp-0xFC],edx
	mov eax,dword ptr [ebp-0x1C]
	mov ecx,dword ptr [eax+0x7C]
	mov dword ptr [ebp-0xA30],ecx
	mov dword ptr [ebp-0x18],0
	cmp dword ptr [ebp-0xA30],0
	jne Block11

 Block5:
	lea edx,[ebp-0xAA8]
	push edx
	mov ecx,dword ptr [ebp-0xC44]
	add ecx,4
	mov eax,dword ptr [ebp-0xC44]
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [edx+0x10]
	call eax
	mov ecx,dword ptr [eax]
	mov dword ptr [ebp-0xA3C],ecx
	lea edx,[ebp-0xAB0]
	push edx
	mov ecx,dword ptr [ebp-0xC44]
	add ecx,4
	mov eax,dword ptr [ebp-0xC44]
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [edx+0x10]
	call eax
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [ebp-0x1C]
	add ecx,dword ptr [edx+0x2C]
	mov dword ptr [ebp-0xA38],ecx
	mov eax,dword ptr [ebp-0x1C]
	mov ecx,dword ptr [ebp-0xA3C]
	add ecx,dword ptr [eax+0x2C]
	mov dword ptr [ebp-0xA44],ecx
	mov edx,dword ptr [ebp-0xA38]
	mov dword ptr [ebp-0xA40],edx
	mov eax,dword ptr [ebp-0x1C]
	mov ecx,dword ptr [eax+0x30]
	neg ecx
	add ecx,dword ptr [ebp-0xA3C]
	mov dword ptr [ebp-0xA5C],ecx
	mov edx,dword ptr [ebp-0xA38]
	mov dword ptr [ebp-0xA58],edx
	mov eax,dword ptr [ebp-0x1C]
	mov ecx,dword ptr [ebp-0xA3C]
	sub ecx,dword ptr [eax+0x2C]
	mov dword ptr [ebp-0xA54],ecx
	mov edx,dword ptr [ebp-0xA38]
	mov dword ptr [ebp-0xA50],edx
	mov eax,dword ptr [ebp-0x1C]
	mov ecx,dword ptr [ebp-0xA3C]
	add ecx,dword ptr [eax+0x30]
	mov dword ptr [ebp-0xA4C],ecx
	mov edx,dword ptr [ebp-0xA38]
	mov dword ptr [ebp-0xA48],edx
	mov eax,dword ptr [ebp+8]
	push eax
	push 4
	mov ecx,dword ptr [ebp-0xA38]
	push ecx
	mov edx,dword ptr [ebp-0xA5C]
	push edx
	mov eax,dword ptr [ebp-0xA44]
	push eax
	mov ecx,dword ptr [ebp-0xA3C]
	push ecx
	call TSingleton<CMobPool>::GetInstance
	mov ecx,eax
	call CMobPool::CheckMobInTrapezoid
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [ebp-0xA38]
	add edx,1
	push edx
	mov eax,dword ptr [ebp-0xA5C]
	push eax
	mov ecx,dword ptr [ebp-0xA44]
	push ecx
	call _zmax_long
	add esp,8
	push eax
	mov edx,dword ptr [ebp-0xA38]
	push edx
	mov eax,dword ptr [ebp-0xA5C]
	push eax
	mov ecx,dword ptr [ebp-0xA44]
	push ecx
	call _zmin_long
	add esp,8
	push eax
	lea edx,[ebp-0x2C]
	push edx
	call SetRect
	mov dword ptr [ebp-0x38],1
	jmp Block10

 Block7:
	mov eax,dword ptr [ebp+8]
	push eax
	push 4
	mov ecx,dword ptr [ebp-0xA38]
	push ecx
	mov edx,dword ptr [ebp-0xA4C]
	push edx
	mov eax,dword ptr [ebp-0xA54]
	push eax
	mov ecx,dword ptr [ebp-0xA3C]
	push ecx
	call TSingleton<CMobPool>::GetInstance
	mov ecx,eax
	call CMobPool::CheckMobInTrapezoid
	test eax,eax
	je Block9

 Block8:
	mov edx,dword ptr [ebp-0xA38]
	add edx,1
	push edx
	mov eax,dword ptr [ebp-0xA4C]
	push eax
	mov ecx,dword ptr [ebp-0xA54]
	push ecx
	call _zmax_long
	add esp,8
	push eax
	mov edx,dword ptr [ebp-0xA38]
	push edx
	mov eax,dword ptr [ebp-0xA4C]
	push eax
	mov ecx,dword ptr [ebp-0xA54]
	push ecx
	call _zmin_long
	add esp,8
	push eax
	lea edx,[ebp-0x2C]
	push edx
	call SetRect
	mov dword ptr [ebp-0x38],0
	jmp Block10

 Block9:
	xor eax,eax
	jmp Block52

 Block10:
	sub esp,0x10
	mov eax,esp
	mov ecx,dword ptr [ebp-0x2C]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [ebp-0x28]
	mov dword ptr [eax+4],edx
	mov ecx,dword ptr [ebp-0x24]
	mov dword ptr [eax+8],ecx
	mov edx,dword ptr [ebp-0x20]
	mov dword ptr [eax+0xC],edx
	lea eax,[ebp-0xAB8]
	push eax
	mov ecx,dword ptr [ebp+8]
	call CMob::GetHitPoint
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [eax+4]
	mov dword ptr [ebp-0x128],ecx
	mov dword ptr [ebp-0x124],edx
	jmp Block16

 Block11:
	mov eax,dword ptr [ebp-0x1C]
	add eax,0x34
	push eax
	lea ecx,[ebp-0xA7C]
	push ecx
	call SECRECT::ToRect
	add esp,8
	push 0
	lea edx,[ebp-0xAC0]
	push edx
	mov ecx,dword ptr [ebp-0xC44]
	add ecx,4
	mov eax,dword ptr [ebp-0xC44]
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [edx+0x10]
	call eax
	mov ecx,dword ptr [eax+4]
	push ecx
	lea edx,[ebp-0xAC8]
	push edx
	mov ecx,dword ptr [ebp-0xC44]
	add ecx,4
	mov eax,dword ptr [ebp-0xC44]
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [edx+0x10]
	call eax
	mov ecx,dword ptr [eax]
	push ecx
	lea edx,[ebp-0xA7C]
	push edx
	call adjust_rect
	add esp,0x10
	mov eax,dword ptr [ebp-0xA7C]
	sub eax,2
	mov dword ptr [ebp-0xA7C],eax
	mov ecx,dword ptr [ebp-0xA78]
	sub ecx,2
	mov dword ptr [ebp-0xA78],ecx
	mov edx,dword ptr [ebp-0xA74]
	add edx,2
	mov dword ptr [ebp-0xA74],edx
	mov eax,dword ptr [ebp-0xA70]
	add eax,2
	mov dword ptr [ebp-0xA70],eax
	mov ecx,dword ptr [ebp-0x1C]
	add ecx,0x34
	push ecx
	lea edx,[ebp-0xA6C]
	push edx
	call SECRECT::ToRect
	add esp,8
	push 1
	lea eax,[ebp-0xAD0]
	push eax
	mov ecx,dword ptr [ebp-0xC44]
	add ecx,4
	mov edx,dword ptr [ebp-0xC44]
	mov eax,dword ptr [edx+4]
	mov edx,dword ptr [eax+0x10]
	call edx
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[ebp-0xAD8]
	push ecx
	mov ecx,dword ptr [ebp-0xC44]
	add ecx,4
	mov edx,dword ptr [ebp-0xC44]
	mov eax,dword ptr [edx+4]
	mov edx,dword ptr [eax+0x10]
	call edx
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[ebp-0xA6C]
	push ecx
	call adjust_rect
	add esp,0x10
	mov edx,dword ptr [ebp-0xA6C]
	sub edx,2
	mov dword ptr [ebp-0xA6C],edx
	mov eax,dword ptr [ebp-0xA68]
	sub eax,2
	mov dword ptr [ebp-0xA68],eax
	mov ecx,dword ptr [ebp-0xA64]
	add ecx,2
	mov dword ptr [ebp-0xA64],ecx
	mov edx,dword ptr [ebp-0xA60]
	add edx,2
	mov dword ptr [ebp-0xA60],edx
	lea eax,[ebp-0xAE0]
	push eax
	mov ecx,dword ptr [ebp+8]
	add ecx,4
	mov edx,dword ptr [ebp+8]
	mov eax,dword ptr [edx+4]
	mov edx,dword ptr [eax+0x10]
	call edx
	mov ecx,dword ptr [eax+4]
	push ecx
	mov edx,dword ptr [eax]
	push edx
	lea eax,[ebp-0xA7C]
	push eax
	call dword ptr [ZImports::_PtInRect]
	test eax,eax
	je Block13

 Block12:
	mov ecx,dword ptr [ebp-0xA7C]
	mov dword ptr [ebp-0x60],ecx
	mov edx,dword ptr [ebp-0xA78]
	mov dword ptr [ebp-0x5C],edx
	mov eax,dword ptr [ebp-0xA74]
	mov dword ptr [ebp-0x58],eax
	mov ecx,dword ptr [ebp-0xA70]
	mov dword ptr [ebp-0x54],ecx
	mov dword ptr [ebp-0x38],1
	jmp Block16

 Block13:
	lea edx,[ebp-0xAE8]
	push edx
	mov ecx,dword ptr [ebp+8]
	add ecx,4
	mov eax,dword ptr [ebp+8]
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [edx+0x10]
	call eax
	mov ecx,dword ptr [eax+4]
	push ecx
	mov edx,dword ptr [eax]
	push edx
	lea eax,[ebp-0xA6C]
	push eax
	call dword ptr [ZImports::_PtInRect]
	test eax,eax
	je Block15

 Block14:
	mov ecx,dword ptr [ebp-0xA6C]
	mov dword ptr [ebp-0x60],ecx
	mov edx,dword ptr [ebp-0xA68]
	mov dword ptr [ebp-0x5C],edx
	mov eax,dword ptr [ebp-0xA64]
	mov dword ptr [ebp-0x58],eax
	mov ecx,dword ptr [ebp-0xA60]
	mov dword ptr [ebp-0x54],ecx
	mov dword ptr [ebp-0x38],0
	jmp Block16

 Block15:
	xor eax,eax
	jmp Block52

 Block16:
	mov edx,dword ptr [ebp-0x38]
	push edx
	mov ecx,dword ptr [ebp-0xC44]
	call CSummoned::_ZtlSecureGet_m_nMoveAction
	push eax
	call get_action_from_act_dir
	add esp,4
	push eax
	call make_act_dir
	add esp,8
	mov edx,eax
	mov ecx,dword ptr [ebp-0xC44]
	call CSummoned::_ZtlSecurePut_m_nMoveAction
	push 0
	mov eax,dword ptr [ebp-0x38]
	push eax
	mov ecx,dword ptr [ebp-0x1C]
	mov edx,dword ptr [ecx+0x64]
	push edx
	mov eax,dword ptr [ebp+0xC]
	push eax
	mov ecx,dword ptr [ebp-0x1C]
	add ecx,0x6C
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0xAEC],esp
	push ecx
	mov ecx,edx
	call Ztl_bstr_t::_ctor_copy
	mov dword ptr [ebp-0xC50],eax
	mov ecx,dword ptr [ebp-0xC44]
	add ecx,0x8C
	call CSummoned::ATTACKEFFECT::SetAttackEffect
	mov dword ptr [ebp-0x6C],0
	mov dword ptr [ebp-0x11C],0
	mov eax,dword ptr [ebp-0xC44]
	cmp dword ptr [eax+0xC0],0x217C061
	je Block18

 Block17:
	mov ecx,dword ptr [ebp-0xC44]
	cmp dword ptr [ecx+0xC0],0x217C062
	jne Block19

 Block18:
	lea edx,[ebp-0xAF4]
	push edx
	call TSingleton<CWvsContext>::GetInstance
	mov ecx,eax
	call CWvsContext::GetCharacterData
	mov dword ptr [ebp-0xC54],eax
	mov eax,dword ptr [ebp-0xC54]
	mov dword ptr [ebp-0xC58],eax
	mov dword ptr [ebp-4],0
	push 0
	push 0x217C059
	mov ecx,dword ptr [ebp-0xC58]
	call ZRef<CharacterData>::op_star
	push eax
	call TSingleton<CSkillInfo>::GetInstance
	mov ecx,eax
	call CSkillInfo::GetSkillLevel_0
	mov dword ptr [ebp-0x11C],eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0xAF4]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,dword ptr [ebp-0xC44]
	mov edx,dword ptr [ecx+0xC0]
	push edx
	call TSingleton<CSkillInfo>::GetInstance
	mov ecx,eax
	call CSkillInfo::GetSkill
	mov dword ptr [ebp-0x6C],eax
	jmp Block20

 Block19:
	lea eax,[ebp-0xAFC]
	push eax
	call TSingleton<CWvsContext>::GetInstance
	mov ecx,eax
	call CWvsContext::GetCharacterData
	mov dword ptr [ebp-0xC5C],eax
	mov ecx,dword ptr [ebp-0xC5C]
	mov dword ptr [ebp-0xC60],ecx
	mov dword ptr [ebp-4],1
	lea edx,[ebp-0x6C]
	push edx
	mov eax,dword ptr [ebp-0xC44]
	mov ecx,dword ptr [eax+0xC0]
	push ecx
	mov ecx,dword ptr [ebp-0xC60]
	call ZRef<CharacterData>::op_star
	push eax
	call TSingleton<CSkillInfo>::GetInstance
	mov ecx,eax
	call CSkillInfo::GetSkillLevel_0
	mov dword ptr [ebp-0x11C],eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0xAFC]
	call ZRef<CharacterData>::~ZRef<CharacterData>

 Block20:
	cmp dword ptr [ebp-0x6C],0
	je Block22

 Block21:
	cmp dword ptr [ebp-0x11C],0
	jne Block23

 Block22:
	xor eax,eax
	jmp Block52

 Block23:
	mov edx,dword ptr [ebp-0x1C]
	mov eax,dword ptr [edx+0x64]
	mov dword ptr [ebp-0xF8],eax
	push 0
	lea ecx,[ebp-0xA2C]
	push ecx
	push 1
	mov edx,dword ptr [ebp-0x30]
	push edx
	push 0
	mov eax,dword ptr [ebp-0x11C]
	push eax
	mov ecx,dword ptr [ebp-0x64]
	call GW_CharacterStat::_ZtlSecureGet_nLevel
	movzx ecx,al
	push ecx
	mov edx,dword ptr [ebp-0x6C]
	push edx
	lea ecx,[ebp-0xF4]
	call CSkill_HitAni::_ctor_0
	mov dword ptr [ebp-4],2
	mov dword ptr [ebp-0xA80],0
	jmp Block25

 Block24:
	mov eax,dword ptr [ebp-0xA80]
	add eax,1
	mov dword ptr [ebp-0xA80],eax

 Block25:
	mov ecx,dword ptr [ebp-0xA80]
	cmp ecx,dword ptr [ebp-0x104]
	jge Block40

 Block26:
	mov edx,dword ptr [ebp-0xA80]
	imul edx,0x98
	lea eax,[ebp+edx-0xA2C]
	mov dword ptr [ebp-0xA84],eax
	push 0x98
	push 0
	mov ecx,dword ptr [ebp-0xA84]
	push ecx
	call _memset
	add esp,0xC
	mov edx,dword ptr [ebp-0xA84]
	mov eax,dword ptr [ebp+8]
	mov dword ptr [edx],eax
	push 0
	mov ecx,dword ptr [ebp-0xA84]
	mov ecx,dword ptr [ecx]
	call CMob::GetCurrentAction
	mov edx,dword ptr [ebp-0xA84]
	mov dword ptr [edx+8],eax
	mov eax,dword ptr [ebp-0xA84]
	mov ecx,dword ptr [eax]
	call CMob::GetCurrentFrameIndex
	mov ecx,dword ptr [ebp-0xA84]
	mov dword ptr [ecx+0xC],eax
	cmp dword ptr [ebp-0x18],0
	je Block28

 Block27:
	lea edx,[ebp-0x128]
	mov dword ptr [ebp-0xC64],edx
	jmp Block29

 Block28:
	sub esp,0x10
	mov eax,esp
	mov ecx,dword ptr [ebp-0x60]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [ebp-0x5C]
	mov dword ptr [eax+4],edx
	mov ecx,dword ptr [ebp-0x58]
	mov dword ptr [eax+8],ecx
	mov edx,dword ptr [ebp-0x54]
	mov dword ptr [eax+0xC],edx
	lea eax,[ebp-0xB08]
	push eax
	mov ecx,dword ptr [ebp-0xA84]
	mov ecx,dword ptr [ecx]
	call CMob::GetHitPoint
	mov dword ptr [ebp-0xC64],eax

 Block29:
	mov edx,dword ptr [ebp-0xC64]
	mov dword ptr [ebp-0xB00],edx
	mov eax,dword ptr [ebp-0xB00]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [ebp-0xA84]
	mov dword ptr [eax+0x90],ecx
	mov dword ptr [eax+0x94],edx
	mov ecx,dword ptr [ebp-0x18]
	neg ecx
	sbb ecx,ecx
	and ecx,dword ptr [ebp-0x100]
	add ecx,dword ptr [ebp-0xF8]
	mov edx,dword ptr [ebp-0xA84]
	mov dword ptr [edx+0x10],ecx
	mov eax,dword ptr [ebp-0xA84]
	mov ecx,dword ptr [eax]
	call CMob::GetRandomHitAction
	mov ecx,dword ptr [ebp-0xA84]
	mov dword ptr [ecx+4],eax
	mov edx,dword ptr [ebp-0xA84]
	mov ecx,dword ptr [edx]
	call CMob::GetMobStat
	mov dword ptr [ebp-0xA88],eax
	cmp dword ptr [ebp-0xFC],0
	je Block31

 Block30:
	mov ecx,dword ptr [ebp-0x34]
	call CWvsContext::GetDragonFuryDamage
	push eax
	call TSingleton<CUserLocal>::GetInstance
	add eax,0x88
	mov ecx,eax
	call CAvatar::GetWeaponItemID
	push eax
	mov eax,dword ptr [ebp-0xC44]
	mov ecx,dword ptr [eax+0xE0]
	push ecx
	sub esp,8
	mov edx,esp
	mov dword ptr [ebp-0xB0C],esp
	push edx
	call TSingleton<CUserLocal>::GetInstance
	mov ecx,eax
	call CUserLocal::GetPassiveSkillData
	mov dword ptr [ebp-0xC68],eax
	mov eax,dword ptr [ebp-0xC68]
	mov dword ptr [ebp-0xC6C],eax
	mov byte ptr [ebp-4],3
	mov ecx,dword ptr [ebp-0xC44]
	mov edx,dword ptr [ecx+0xC8]
	push edx
	mov eax,dword ptr [ebp-0x6C]
	push eax
	mov ecx,dword ptr [ebp-0x130]
	push ecx
	mov edx,dword ptr [ebp-0xA34]
	push edx
	mov eax,dword ptr [ebp-0x50]
	push eax
	mov ecx,dword ptr [ebp-0xA88]
	push ecx
	mov edx,dword ptr [ebp-0xA84]
	mov ecx,dword ptr [edx]
	call CMob::GetMobID
	push eax
	mov ecx,dword ptr [ebp-0x34]
	call CWvsContext::GetCalcDamage
	mov byte ptr [ebp-4],2
	mov ecx,eax
	call CalcDamage::MDamage_2
	mov dword ptr [ebp-0xC70],eax
	mov eax,dword ptr [ebp-0xA84]
	mov ecx,dword ptr [ebp-0xC70]
	mov dword ptr [eax+0x18],ecx
	jmp Block32

 Block31:
	push 0
	call TSingleton<CUserLocal>::GetInstance
	add eax,0x88
	mov ecx,eax
	call CAvatar::GetWeaponItemID
	push eax
	mov edx,dword ptr [ebp-0xC44]
	mov eax,dword ptr [edx+0xE0]
	push eax
	sub esp,8
	mov ecx,esp
	mov dword ptr [ebp-0xB10],esp
	push ecx
	call TSingleton<CUserLocal>::GetInstance
	mov ecx,eax
	call CUserLocal::GetPassiveSkillData
	mov dword ptr [ebp-0xC74],eax
	mov edx,dword ptr [ebp-0xC74]
	mov dword ptr [ebp-0xC78],edx
	mov byte ptr [ebp-4],4
	mov eax,dword ptr [ebp-0xC44]
	mov ecx,dword ptr [eax+0xC8]
	push ecx
	mov edx,dword ptr [ebp-0x6C]
	push edx
	mov eax,dword ptr [ebp-0x130]
	push eax
	mov ecx,dword ptr [ebp-0xA34]
	push ecx
	mov edx,dword ptr [ebp-0x50]
	push edx
	mov eax,dword ptr [ebp-0xA88]
	push eax
	mov ecx,dword ptr [ebp-0xA84]
	mov ecx,dword ptr [ecx]
	call CMob::GetMobID
	push eax
	mov ecx,dword ptr [ebp-0x34]
	call CWvsContext::GetCalcDamage
	mov byte ptr [ebp-4],2
	mov ecx,eax
	call CalcDamage::PDamage_1
	mov dword ptr [ebp-0xC7C],eax
	mov edx,dword ptr [ebp-0xA84]
	mov eax,dword ptr [ebp-0xC7C]
	mov dword ptr [edx+0x18],eax

 Block32:
	mov ecx,dword ptr [ebp-0xA84]
	mov ecx,dword ptr [ecx]
	call CMob::GetTemplate
	mov ecx,eax
	call CMobTemplate::_ZtlSecureGet_nFixedDamage
	mov dword ptr [ebp-0xA8C],eax
	cmp dword ptr [ebp-0xA8C],0
	jle Block35

 Block33:
	mov edx,dword ptr [ebp-0xA84]
	cmp dword ptr [edx+0x18],0
	jle Block35

 Block34:
	mov eax,dword ptr [ebp-0xA84]
	mov ecx,dword ptr [ebp-0xA8C]
	mov dword ptr [eax+0x18],ecx

 Block35:
	mov edx,dword ptr [ebp-0xC44]
	mov eax,dword ptr [edx+0xC0]
	push eax
	mov ecx,dword ptr [ebp-0xA84]
	mov ecx,dword ptr [ecx]
	call CMob::GetTemplate
	mov ecx,eax
	call CMobTemplate::IsVulnerableTo
	test eax,eax
	jne Block37

 Block36:
	mov edx,dword ptr [ebp-0xA84]
	mov dword ptr [edx+0x18],0

 Block37:
	push 0
	push 0
	push 0
	push 0
	push 1
	push 1
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0xB14],esp
	mov ecx,dword ptr [ebp-0xA80]
	push ecx
	push eax
	lea ecx,[ebp-0xF4]
	call CSkill_HitAni::operator()
	mov dword ptr [ebp-0xC80],eax
	mov edx,dword ptr [ebp-0xA84]
	mov eax,dword ptr [edx+0x94]
	push eax
	mov ecx,dword ptr [edx+0x90]
	push ecx
	mov edx,dword ptr [ebp-0xA80]
	push edx
	push 0
	mov eax,dword ptr [ebp-0xA84]
	mov ecx,dword ptr [eax+0x18]
	push ecx
	mov edx,dword ptr [ebp-0x38]
	push edx
	mov eax,dword ptr [ebp-0xA84]
	mov ecx,dword ptr [eax+4]
	push ecx
	mov edx,dword ptr [ebp-0xA84]
	mov eax,dword ptr [ebp+0xC]
	add eax,dword ptr [edx+0x10]
	push eax
	mov ecx,dword ptr [ebp-0xC44]
	mov edx,dword ptr [ecx+0xC0]
	push edx
	call TSingleton<CWvsContext>::GetInstance
	mov ecx,eax
	call CWvsContext::GetCharacterId
	push eax
	mov eax,dword ptr [ebp-0xA84]
	mov ecx,dword ptr [eax]
	call CMob::AddDamageInfo
	call TSingleton<CBattleRecordMan>::IsInstantiated
	test eax,eax
	je Block39

 Block38:
	push 1
	push 0
	mov ecx,dword ptr [ebp-0xA84]
	mov edx,dword ptr [ecx+0x18]
	push edx
	call TSingleton<CBattleRecordMan>::GetInstance
	mov ecx,eax
	call CBattleRecordMan::SetBattleDamageInfo

 Block39:
	jmp Block24

 Block40:
	jmp Block42

 Block42:
	mov dword ptr [ebp-0x134],0x19DEA1BD
	mov dword ptr [ebp-0x14],0xBE02FF0A
	push 0
	lea eax,[ebp-0x14]
	push eax
	lea ecx,[ebp-0x144]
	push ecx
	call DR_check
	add esp,0xC
	mov dword ptr [ebp-0x120],eax
	push 0xD0
	lea ecx,[ebp-0x114]
	call COutPacket::_ctor_1
	mov byte ptr [ebp-4],5
	mov edx,dword ptr [ebp-0xC44]
	mov eax,dword ptr [edx+0xB4]
	push eax
	lea ecx,[ebp-0x114]
	call COutPacket::Encode4
	mov ecx,dword ptr [ebp-0x144]
	not ecx
	push ecx
	lea ecx,[ebp-0x114]
	call COutPacket::Encode4
	mov edx,dword ptr [ebp-0x140]
	not edx
	push edx
	lea ecx,[ebp-0x114]
	call COutPacket::Encode4
	call get_update_time
	push eax
	lea ecx,[ebp-0x114]
	call COutPacket::Encode4
	mov eax,dword ptr [ebp-0x13C]
	not eax
	push eax
	lea ecx,[ebp-0x114]
	call COutPacket::Encode4
	mov ecx,dword ptr [ebp-0x138]
	not ecx
	push ecx
	lea ecx,[ebp-0x114]
	call COutPacket::Encode4
	mov edx,dword ptr [ebp-0x38]
	shl edx,7
	mov eax,dword ptr [ebp-0x30]
	and eax,0x7F
	or edx,eax
	push edx
	lea ecx,[ebp-0x114]
	call COutPacket::Encode1
	push 0
	mov ecx,dword ptr [ebp-0x144]
	push ecx
	call get_rand_0
	add esp,8
	mov dword ptr [ebp-0x68],eax
	mov edx,dword ptr [ebp-0x68]
	push edx
	lea ecx,[ebp-0x114]
	call COutPacket::Encode4
	push 0
	push 0
	push 0
	mov eax,dword ptr [ebp-0x68]
	push eax
	push 4
	lea ecx,[ebp-0x120]
	push ecx
	call CCrc32::GetCrc32
	add esp,0x18
	push eax
	lea ecx,[ebp-0x114]
	call COutPacket::Encode4
	push 1
	lea ecx,[ebp-0x114]
	call COutPacket::Encode1
	jmp Block44

 Block44:
	call TSingleton<CUserLocal>::GetInstance
	add eax,4
	mov dword ptr [ebp-0xC84],eax
	lea edx,[ebp-0xB1C]
	push edx
	mov eax,dword ptr [ebp-0xC84]
	mov edx,dword ptr [eax]
	mov ecx,dword ptr [ebp-0xC84]
	mov eax,dword ptr [edx+0x10]
	call eax
	movzx ecx,word ptr [eax]
	push ecx
	lea ecx,[ebp-0x114]
	call COutPacket::Encode2
	call TSingleton<CUserLocal>::GetInstance
	add eax,4
	mov dword ptr [ebp-0xC88],eax
	lea edx,[ebp-0xB24]
	push edx
	mov eax,dword ptr [ebp-0xC88]
	mov edx,dword ptr [eax]
	mov ecx,dword ptr [ebp-0xC88]
	mov eax,dword ptr [edx+0x10]
	call eax
	movzx ecx,word ptr [eax+4]
	push ecx
	lea ecx,[ebp-0x114]
	call COutPacket::Encode2
	lea edx,[ebp-0xB2C]
	push edx
	mov ecx,dword ptr [ebp-0xC44]
	add ecx,4
	mov eax,dword ptr [ebp-0xC44]
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [edx+0x10]
	call eax
	movzx ecx,word ptr [eax]
	push ecx
	lea ecx,[ebp-0x114]
	call COutPacket::Encode2
	lea edx,[ebp-0xB34]
	push edx
	mov ecx,dword ptr [ebp-0xC44]
	add ecx,4
	mov eax,dword ptr [ebp-0xC44]
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [edx+0x10]
	call eax
	movzx ecx,word ptr [eax+4]
	push ecx
	lea ecx,[ebp-0x114]
	call COutPacket::Encode2
	push 0
	lea ecx,[ebp-0x114]
	call COutPacket::Encode4
	mov dword ptr [ebp-0xA80],0
	jmp Block46

 Block45:
	mov edx,dword ptr [ebp-0xA80]
	add edx,1
	mov dword ptr [ebp-0xA80],edx

 Block46:
	mov eax,dword ptr [ebp-0xA80]
	cmp eax,dword ptr [ebp-0x104]
	jge Block48

 Block47:
	mov ecx,dword ptr [ebp-0xA80]
	imul ecx,0x98
	lea edx,[ebp+ecx-0xA2C]
	mov dword ptr [ebp-0xA90],edx
	mov eax,dword ptr [ebp-0xA90]
	mov ecx,dword ptr [eax]
	call CMob::GetMobID
	push eax
	lea ecx,[ebp-0x114]
	call COutPacket::Encode4
	mov ecx,dword ptr [ebp-0xA90]
	mov ecx,dword ptr [ecx]
	call CMob::GetCurTemplate
	mov ecx,eax
	call CMobTemplate::_ZtlSecureGet_dwTemplateID
	push eax
	lea ecx,[ebp-0x114]
	call COutPacket::Encode4
	mov edx,dword ptr [ebp-0xA90]
	movzx eax,byte ptr [edx+4]
	push eax
	lea ecx,[ebp-0x114]
	call COutPacket::Encode1
	mov ecx,dword ptr [ebp-0xA90]
	mov ecx,dword ptr [ecx]
	call CMob::IsLeft
	shl eax,7
	mov edx,dword ptr [ebp-0xA90]
	mov ecx,dword ptr [edx+8]
	and ecx,0x7F
	or eax,ecx
	push eax
	lea ecx,[ebp-0x114]
	call COutPacket::Encode1
	mov edx,dword ptr [ebp-0xA90]
	movzx eax,byte ptr [edx+0xC]
	push eax
	lea ecx,[ebp-0x114]
	call COutPacket::Encode1
	mov ecx,dword ptr [ebp-0xA90]
	mov ecx,dword ptr [ecx]
	call CMob::GetCalcDamageStatIndex
	push eax
	lea ecx,[ebp-0x114]
	call COutPacket::Encode1
	lea edx,[ebp-0xB3C]
	push edx
	mov eax,dword ptr [ebp-0xA90]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ebp-0xA90]
	mov eax,dword ptr [edx]
	add eax,4
	mov edx,dword ptr [ecx+4]
	mov ecx,eax
	mov eax,dword ptr [edx+0x10]
	call eax
	movzx ecx,word ptr [eax]
	push ecx
	lea ecx,[ebp-0x114]
	call COutPacket::Encode2
	lea edx,[ebp-0xB44]
	push edx
	mov eax,dword ptr [ebp-0xA90]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ebp-0xA90]
	mov eax,dword ptr [edx]
	add eax,4
	mov edx,dword ptr [ecx+4]
	mov ecx,eax
	mov eax,dword ptr [edx+0x10]
	call eax
	movzx ecx,word ptr [eax+4]
	push ecx
	lea ecx,[ebp-0x114]
	call COutPacket::Encode2
	lea edx,[ebp-0xB4C]
	push edx
	mov eax,dword ptr [ebp-0xA90]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ebp-0xA90]
	mov eax,dword ptr [edx]
	add eax,4
	mov edx,dword ptr [ecx+4]
	mov ecx,eax
	mov eax,dword ptr [edx+0x14]
	call eax
	movzx ecx,word ptr [eax]
	push ecx
	lea ecx,[ebp-0x114]
	call COutPacket::Encode2
	lea edx,[ebp-0xB54]
	push edx
	mov eax,dword ptr [ebp-0xA90]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ebp-0xA90]
	mov eax,dword ptr [edx]
	add eax,4
	mov edx,dword ptr [ecx+4]
	mov ecx,eax
	mov eax,dword ptr [edx+0x14]
	call eax
	movzx ecx,word ptr [eax+4]
	push ecx
	lea ecx,[ebp-0x114]
	call COutPacket::Encode2
	mov edx,dword ptr [ebp-0xA90]
	movzx eax,word ptr [edx+0x10]
	push eax
	lea ecx,[ebp-0x114]
	call COutPacket::Encode2
	mov ecx,dword ptr [ebp-0xA90]
	mov edx,dword ptr [ecx+0x18]
	push edx
	lea ecx,[ebp-0x114]
	call COutPacket::Encode4
	jmp Block45

 Block48:
	cmp dword ptr [ebp-0x6C],0
	je Block50

 Block49:
	mov ecx,dword ptr [ebp-0x6C]
	call SKILLENTRY::GetCrc
	mov dword ptr [ebp-0xC8C],eax
	jmp Block51

 Block50:
	mov dword ptr [ebp-0xC8C],0

 Block51:
	mov eax,dword ptr [ebp-0xC8C]
	mov dword ptr [ebp-0x10],eax
	mov ecx,dword ptr [ebp-0x10]
	push ecx
	lea ecx,[ebp-0x114]
	call COutPacket::Encode4
	lea edx,[ebp-0x114]
	push edx
	call SendPacket
	add esp,4
	mov eax,dword ptr [ebp-0x30]
	push eax
	mov ecx,dword ptr [ebp-0xC44]
	call CSummoned::SetAttackAction
	push 1
	mov ecx,dword ptr [ebp-0xC44]
	call CSummoned::SetSuspended
	push 0
	push 0x31
	mov ecx,dword ptr [ebp-0xC44]
	mov edx,dword ptr [ecx+0xC0]
	push edx
	call play_skill_sound
	add esp,0xC
	mov dword ptr [ebp-0xB58],1
	mov byte ptr [ebp-4],2
	lea ecx,[ebp-0x114]
	call COutPacket::~COutPacket
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0xF4]
	call CSkill_HitAni::~CSkill_HitAni
	mov eax,dword ptr [ebp-0xB58]

 Block52:
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	mov esp,ebp
	pop ebp
	ret 8
}
}
// CSummoned::TryDoingHealingRobot
_SUB_EXCEPTION_HANDLER(34B3E0)
__SUB_CLASS_THIS(0034B3E0, __thiscall, 67275,  CSummoned, int32_t, unsigned long, tagRECT&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_34B3E0
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
	mov esi,ecx
	cmp dword ptr [esi+0xC0],0x217C063
	je Block2

 Block1:
	xor eax,eax
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x54
	ret 8

 Block2:
	lea edi,[esi+0x88]
	push 0xD
	mov ecx,edi
	call CSummonedBase::Action2AIType
	push eax
	mov eax,dword ptr [esi+0xC8]
	push eax
	push 0
	push 0x217C063
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,edi
	call CSummonedBase::LoadAttackInfo
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block7

 Block3:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block6

 Block4:
	mov edx,dword ptr [esp+0x14]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	je Block6

 Block5:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block6:
	mov dword ptr [esp+0x14],0

 Block7:
	test edi,edi
	je Block1

 Block8:
	cmp dword ptr [edi+0x7C],0
	je Block1

 Block9:
	add edi,0x34
	lea eax,[esp+0x38]
	push edi
	push eax
	call SECRECT::ToRect
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	lea edi,[esi+4]
	add esp,8
	lea eax,[esp+0x18]
	push eax
	mov ecx,edi
	call edx
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax]
	push ebx
	push eax
	lea eax,[esp+0x40]
	push eax
	call OffsetRect
	lea ecx,[esp+0x38]
	push ecx
	call IsRectEmpty
	test eax,eax
	jne Block1

 Block10:
	mov eax,dword ptr [esp+0x6C]
	lea edx,[esp+0x38]
	push edx
	push eax
	lea ecx,[esp+0x50]
	push ecx
	call IntersectRect
	test eax,eax
	je Block1

 Block11:
	call get_update_time
	mov edi,eax
	lea edx,[esp+0x6C]
	push edx
	lea eax,[esp+0x6C]
	lea ebx,[esi+0x1C4]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esp+0x74],0
	call ZMap<unsigned long, long, unsigned long>::GetAt
	test eax,eax
	je Block13

 Block12:
	mov ecx,dword ptr [esi+0xC0]
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	call CSkillInfo::GetSkill
	mov edx,dword ptr [esi+0xC8]
	push edx
	mov ecx,eax
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nX
	imul eax,0x3E8
	sub edi,dword ptr [esp+0x6C]
	cmp edi,eax
	jl Block1

 Block13:
	push 0xD2
	lea ecx,[esp+0x2C]
	call COutPacket::_ctor_1
	mov eax,dword ptr [esi+0xB4]
	push eax
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x64],0
	call COutPacket::Encode4
	mov ecx,dword ptr [esi+0xC0]
	push ecx
	lea ecx,[esp+0x2C]
	call COutPacket::Encode4
	mov edx,dword ptr [esi+0x104]
	push edx
	lea eax,[esi+0xFC]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	shl al,7
	or al,0xD
	movzx ecx,al
	add esp,8
	push ecx
	lea ecx,[esp+0x2C]
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x28]
	push edx
	call CClientSocket::SendPacket
	lea eax,[esp+0x10]
	push eax
	lea ecx,[esp+0x6C]
	push ecx
	mov ecx,ebx
	call ZMap<unsigned long, long, unsigned long>::Insert
	push 0xD
	mov ecx,esi
	call CSummoned::SetAttackAction
	lea ecx,[esp+0x2C]
	mov dword ptr [esi+0x168],1
	mov dword ptr [esp+0x60],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov eax,1
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x54
	ret 8
}
}
// CSummoned::Update
_SUB_EXCEPTION_HANDLER(357F70)
__SUB_CLASS_THIS0(00357F70, __thiscall, 67253,  CSummoned, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_357F70
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
	xor ebp,ebp
	cmp dword ptr [esi+0x16C],ebp
	jne Block58

 Block1:
	mov ecx,dword ptr [esi+0x174]
	cmp ecx,ebp
	je Block3

 Block2:
	call CAvatar::Update

 Block3:
	mov ecx,esi
	call CSummoned::_UpdateEffect
	call get_update_time
	mov ebx,eax
	mov eax,dword ptr [esi+0x188]
	mov dword ptr [esp+0x1C],ebx
	cmp eax,ebp
	je Block5

 Block4:
	lea edi,[eax-0xC]
	mov dword ptr [esp+0x14],edi
	jmp Block6

 Block5:
	mov dword ptr [esp+0x14],ebp
	mov edi,ebp

 Block6:
	mov eax,dword ptr [edi+0x18]
	mov ecx,edi
	cmp eax,ebp
	je Block40

 Block7:
	call CVecCtrl::UpdateActive
	mov eax,dword ptr [esi+0x12C]
	push eax
	lea ecx,[esi+0x124]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block13

 Block8:
	push 1
	lea edx,[esp+0x5C]
	push edx
	mov ecx,esi
	call CSummoned::GetBodyRect
	mov ecx,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	push ebp
	lea eax,[esp+0x5C]
	push eax
	call CMobPool::FindBodyAttackMob
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block13

 Block9:
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x14]
	lea edi,[eax+4]
	lea eax,[esp+0x28]
	push eax
	mov ecx,edi
	call edx
	mov ebp,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,edi
	call edx
	mov ebx,dword ptr [eax]
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x10]
	sub ebx,dword ptr [ebp]
	lea edi,[esi+4]
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,edi
	call edx
	sub ebx,dword ptr [eax]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x14]
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,edi
	call edx
	mov ebp,dword ptr [eax]
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax+0x1BC]
	push ecx
	add eax,0x1B4
	push eax
	add ebp,ebx
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	je Block12

 Block10:
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x14]
	lea eax,[esp+0x40]
	push eax
	mov ecx,edi
	call edx
	lea ebx,[eax+4]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax+4]
	sub eax,dword ptr [ebx]
	jns Block12

 Block11:
	mov ebp,0x7FFFFFFF

 Block12:
	mov ecx,dword ptr [esp+0x18]
	push ebp
	push 0xFFFFFFFF
	push ecx
	push 0
	push 0
	push 0
	mov ecx,esi
	call CSummoned::SetDamaged
	mov edi,dword ptr [esp+0x14]
	mov ebx,dword ptr [esp+0x1C]
	xor ebp,ebp

 Block13:
	cmp dword ptr [esi+0xE4],ebp
	jne Block16

 Block14:
	mov eax,dword ptr [esi+0xC0]
	cmp eax,0x1F93BDB
	je Block16

 Block15:
	cmp eax,0x217E76B
	jne Block43

 Block16:
	mov edx,dword ptr [esi+0x110]
	push edx
	lea eax,[esi+0x108]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0xFFFFFFFF
	jg Block43

 Block17:
	mov eax,dword ptr [esi+0xD4]
	dec eax
	cmp eax,4
	ja Block32

 Block18:
	cmp EAX, 0
je Block19
cmp EAX, 1
je Block26
cmp EAX, 2
je Block21
cmp EAX, 3
je Block30
cmp EAX, 4
je Block24


 Block19:
	mov ecx,dword ptr [esi+0xC8]
	mov edx,dword ptr [esi+0xC0]
	push ecx
	push edx
	call get_summoned_attack_delay
	mov ecx,ebx
	sub ecx,dword ptr [esi+0x134]
	add esp,8
	cmp ecx,eax
	jle Block32

 Block20:
	push ebp
	push ebx
	mov ecx,esi
	call CSummoned::TryDoingAttack
	jmp Block32

 Block21:
	cmp dword ptr [esi+0xE8],ebp
	je Block32

 Block22:
	mov edx,dword ptr [esi+0xC8]
	mov eax,dword ptr [esi+0xC0]
	push edx
	push eax
	call get_summoned_attack_delay
	mov ecx,ebx
	sub ecx,dword ptr [esi+0x134]
	add esp,8
	cmp ecx,eax
	jle Block32

 Block23:
	push ebx
	mov ecx,esi
	call CSummoned::TryDoingAttackTarget
	jmp Block32

 Block24:
	cmp dword ptr [esi+0xF4],ebp
	je Block32

 Block25:
	mov edx,dword ptr [esi+0xC8]
	mov eax,dword ptr [esi+0xC0]
	push edx
	push eax
	call get_summoned_attack_delay
	add esp,8
	push ebx
	mov ecx,esi
	call CSummoned::TryDoingAttackManual
	mov dword ptr [esi+0xF4],ebp
	jmp Block32

 Block26:
	mov ecx,ebx
	sub ecx,dword ptr [esi+0x138]
	test ecx,ecx
	jle Block28

 Block27:
	push ebx
	mov ecx,esi
	call CSummoned::TryDoingHeal
	cmp eax,ebp
	jne Block32

 Block28:
	mov edx,ebx
	sub edx,dword ptr [esi+0x13C]
	test edx,edx
	jle Block32

 Block29:
	push ebx
	mov ecx,esi
	call CSummoned::TryDoingGiveBuff
	jmp Block32

 Block30:
	mov eax,dword ptr [esi+0xC8]
	mov ecx,dword ptr [esi+0xC0]
	push eax
	push ecx
	call get_summoned_attack_delay
	mov edx,ebx
	sub edx,dword ptr [esi+0x134]
	add esp,8
	cmp edx,eax
	jle Block32

 Block31:
	push ebx
	mov ecx,esi
	call CSummoned::TryDoingSummon

 Block32:
	cmp dword ptr [esi+0xC0],0x217C05A
	jne Block35

 Block33:
	mov eax,dword ptr [esi+0xC8]
	push eax
	push 0x217C05A
	call get_summoned_attack_delay
	mov ecx,ebx
	sub ecx,dword ptr [esi+0x134]
	add esp,8
	cmp ecx,eax
	jle Block35

 Block34:
	push ebx
	mov ecx,esi
	call CSummoned::TryDoingTaslaCoilAttack

 Block35:
	mov edx,dword ptr [esi+0xC0]
	push edx
	call is_self_destruct_summon_skill
	add esp,4
	test eax,eax
	je Block43

 Block36:
	mov eax,dword ptr [esi+0xC0]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push eax
	call CSkillInfo::GetSkill
	cmp eax,ebp
	je Block43

 Block37:
	cmp dword ptr [esi+0xC8],ebp
	jle Block43

 Block38:
	mov ecx,ebx
	sub ecx,dword ptr [esi+0xF0]
	test ecx,ecx
	jle Block43

 Block39:
	push 1
	push ebx
	mov ecx,esi
	call CSummoned::TryDoingAttack
	jmp Block43

 Block40:
	push ebp
	push ebp
	call CVecCtrl::UpdatePassive
	cmp eax,ebp
	jle Block43

 Block41:
	test al,0x10
	je Block43

 Block42:
	push ebp
	mov ecx,esi
	call CSummoned::ShowEffect

 Block43:
	cmp dword ptr [esi+0xC0],0x217C05A
	mov eax,dword ptr [edi+0x1D8]
	jne Block47

 Block44:
	mov ecx,dword ptr [esi+0x1DC]
	cmp ecx,1
	je Block46

 Block45:
	cmp ecx,2
	jne Block47

 Block46:
	mov edx,dword ptr [esi+0x104]
	push edx
	lea eax,[esi+0xFC]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	and eax,1
	add esp,8
	or eax,0x2A

 Block47:
	push ebp
	push eax
	mov ecx,esi
	call CSummoned::SetMoveAction
	push ebx
	mov ecx,esi
	call CSummoned::ProcessAction
	push ebx
	mov ecx,esi
	call CSummoned::ProcessAttack
	lea ebx,[esi+0x194]
	lea ecx,[ebx+0xC]
	lea edi,[esi+0x1AC]
	call TSecType<long>::GetData
	lea ecx,[edi+0xC]
	push eax
	call TSecType<long>::SetData
	mov ecx,ebx
	call TSecType<long>::GetData
	push eax
	mov ecx,edi
	call TSecType<long>::SetData
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block49

 Block48:
	push eax
	call _com_issue_error

 Block49:
	mov esi,dword ptr [esi+0x188]
	mov dword ptr [esp+0x70],ebp
	cmp esi,ebp
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	mov edx,dword ptr [esp+0x48]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x5C]
	push ebp
	push ebp
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x68]
	push ebp
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x70]
	push ebp
	push ebp
	mov dword ptr [eax+0xC],edx
	push ebp
	lea eax,[esp+0x4C]
	push eax
	mov eax,dword ptr [ecx+0x8C]
	lea edx,[esp+0x4C]
	push edx
	push esi
	call eax
	cmp eax,ebp
	jge Block53

 Block52:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block53:
	cmp word ptr [esp+0x48],8
	mov dword ptr [esp+0x70],0xFFFFFFFF
	jne Block56

 Block54:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	cmp eax,ebp
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block57:
	mov eax,dword ptr [esp+0x20]
	push eax
	lea ecx,[ebx+0xC]
	call TSecType<long>::SetData
	mov ecx,dword ptr [esp+0x24]
	push ecx
	mov ecx,ebx
	call TSecType<long>::SetData

 Block58:
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x60
	ret
}
}
// CSummoned::SetMoveAction
__SUB_CLASS_THIS(0034A630, __thiscall, 67263,  CSummoned, void, long, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+8],0
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	jne Block2

 Block1:
	mov eax,dword ptr [esi+0x104]
	push eax
	lea ecx,[esi+0xFC]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp edi,eax
	je Block4

 Block2:
	lea edx,[esi+0xFC]
	mov ecx,edi
	call _ZtlSecureTearHelper<long>::call
	mov edx,dword ptr [esi+0x110]
	mov dword ptr [esi+0x104],eax
	push edx
	lea eax,[esi+0x108]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0xFFFFFFFF
	jg Block4

 Block3:
	mov ecx,esi
	call CSummoned::PrepareActionLayer

 Block4:
	pop edi
	pop esi
	ret 8
}
}
// CSummoned::TryDoingHeal
_SUB_EXCEPTION_HANDLER(34AD90)
__SUB_CLASS_THIS(0034AD90, __thiscall, 67273,  CSummoned, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_34AD90
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
	cmp dword ptr [esi+0xD4],2
	jne Block9

 Block1:
	mov ebx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x14]
	push eax
	mov ecx,ebx
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [esp+0x18]
	mov ebp,dword ptr [eax+4]
	test edi,edi
	je Block6

 Block2:
	add edi,0xFFFFFFF0
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block5

 Block3:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block5

 Block4:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block5:
	mov dword ptr [esp+0x18],0

 Block6:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push offset _D_S_PHEALING
	push 0x142448
	push ebp
	call CSkillInfo::GetSkillLevel_0
	mov edi,eax
	test edi,edi
	jle Block9

 Block7:
	mov ecx,dword ptr [ebx+0x2138]
	push ecx
	add ebx,0x2130
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [ebp+0x69]
	push edx
	add ebp,0x61
	push ebp
	mov ebx,eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,0x10
	cmp ebx,eax
	jle Block9

 Block8:
	mov ecx,dword ptr [_D_S_PHEALING]
	push edi
	call SKILLENTRY::GetLevelData
	push 0xD2
	lea ecx,[esp+0x20]
	mov edi,eax
	call COutPacket::_ctor_1
	mov eax,dword ptr [esi+0xB4]
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x38],0
	call COutPacket::Encode4
	push 0x142448
	lea ecx,[esp+0x20]
	call COutPacket::Encode4
	mov ecx,dword ptr [esi+0x104]
	push ecx
	lea edx,[esi+0xFC]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	shl al,7
	or al,7
	movzx eax,al
	add esp,8
	push eax
	lea ecx,[esp+0x20]
	call COutPacket::Encode1
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	mov edx,dword ptr [edi+0x168]
	push edx
	add edi,0x160
	push edi
	call _ZtlSecureFuseHelper<long>::call
	imul eax,0x3E8
	add eax,dword ptr [esp+0x44]
	add esp,8
	push 7
	mov ecx,esi
	mov dword ptr [esi+0x138],eax
	call CSummoned::SetAttackAction
	lea ecx,[esp+0x20]
	mov dword ptr [esi+0x168],1
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov eax,1
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 4
}
}
// CTutor::OnMessage
_SUB_EXCEPTION_HANDLER(34C880)
__SUB_CLASS_THIS(0034C880, __thiscall, 67773,  CTutor, void, ZXString<char>&, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_34C880
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
	mov ebp,ecx
	mov dword ptr [esp+0x48],ebp
	mov eax,dword ptr [ebp+0x1F0]
	xor ebx,ebx
	cmp eax,ebx
	je Block2

 Block1:
	mov dword ptr [ebp+0x1F0],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	call timeGetTime
	mov esi,dword ptr [esp+0xBC]
	mov dword ptr [ebp+0x200],eax
	mov eax,dword ptr [esp+0xC4]
	mov dword ptr [ebp+0x204],eax
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block501

 Block3:
	cmp byte ptr [eax],bl
	je Block501

 Block4:
	mov ecx,dword ptr [ebp+0xC0]
	push 1
	push ecx
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	lea edx,[esp+0x74]
	push edx
	call CActionMan::GetSummonedProp
	push 0x50
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x701
	push eax
	mov dword ptr [esp+0xC4],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x74]
	mov byte ptr [esp+0xBC],1
	cmp ecx,ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0xC0],0
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],2
	call get_int32
	add esp,8
	cmp word ptr [esp+0x34],8
	mov dword ptr [esp+0x28],eax
	mov byte ptr [esp+0xB4],0
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,ebx
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	push 0x14
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,ebx
	je Block12

 Block11:
	mov edx,dword ptr [esp+0xC0]
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3// TODO: 	mov dword ptr [eax],offset CTextAnalyzer::`vftable'
	mov dword ptr [eax+0x10],edx
	mov dword ptr [eax+0xC],ebx
	mov edi,eax
	mov dword ptr [esp+0x70],eax
	jmp Block13

 Block12:
	xor edi,edi
	mov dword ptr [esp+0x70],edi

 Block13:
	mov dword ptr [esp+0xA8],edi
	cmp edi,ebx
	je Block15

 Block14:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block15:
	push ebx
	push ebx
	push ebx
	lea ecx,[ebp+0x1F4]
	push ecx
	lea eax,[ebp+0x1F8]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push esi
	mov byte ptr [esp+0xD0],3
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	mov ecx,edi
	call CTextAnalyzer::AnalyzeText
	lea edx,[esp+0x5C]
	push edx
	mov dword ptr [ebp+0x1FC],eax
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	lea ecx,[esp+0x14]
	mov bl,4
	push ecx
	mov byte ptr [esp+0xB8],bl
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	xor edi,edi
	add esp,8
	cmp eax,edi
	jge Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xB4],5
	cmp ecx,edi
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	lea eax,[esp+0x5C]
	push eax
	mov eax,dword ptr [ebp+0x1FC]
	lea edx,[esp+0x18]
	push edx
	mov edx,dword ptr [esp+0xC8]
	push 0xA
	add eax,0x5C
	push eax
	add edx,0x26
	push edx
	push edi
	push edi
	lea eax,[esp+0x60]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0x1F0]
	cmp esi,eax
	je Block26

 Block22:
	mov dword ptr [ebp+0x1F0],eax
	cmp eax,edi
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block24:
	cmp esi,edi
	je Block26

 Block25:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block26:
	mov eax,dword ptr [esp+0x44]
	cmp eax,edi
	je Block28

 Block27:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block28:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xB4],bl
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,edi
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	cmp word ptr [esp+0x5C],8
	mov byte ptr [esp+0xB4],3
	jne Block35

 Block33:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	cmp eax,edi
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea ecx,[esp+0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	mov eax,dword ptr [ebp+0x188]
	mov edx,0xD
	mov word ptr [esp+0x14],dx
	mov dword ptr [esp+0x1C],eax
	cmp eax,edi
	je Block38

 Block37:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block38:
	mov esi,dword ptr [ebp+0x1F0]
	mov byte ptr [esp+0xB4],6
	cmp esi,edi
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi]
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
	push esi
	call eax
	cmp eax,edi
	jge Block42

 Block41:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block42:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xB4],3
	jne Block50

 Block43:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,edi
	je Block45

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block45:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block46:
	mov eax,dword ptr [ebp+0xF8]
	mov ecx,0xD
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],eax
	cmp eax,edi
	je Block48

 Block47:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block48:
	mov esi,dword ptr [ebp+0x1F0]
	mov byte ptr [esp+0xB4],7
	cmp esi,edi
	jne Block51

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x14]
	push edx
	call ebx
	jmp Block46

 Block51:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi]
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
	push esi
	call eax
	cmp eax,edi
	jge Block53

 Block52:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block53:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xB4],3
	jne Block56

 Block54:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,edi
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
	mov esi,dword ptr [ebp+0x1F0]
	cmp esi,edi
	jne Block59

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	cmp eax,edi
	jge Block61

 Block60:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block61:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x14]
	push edx
	call esi
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block63

 Block62:
	push eax
	call _com_issue_error

 Block63:
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0xB8],8
	call esi
	lea edx,[esp+0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	mov ecx,dword ptr [ebp+0x1F0]
	mov byte ptr [esp+0xB4],9
	cmp ecx,edi
	jne Block67

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	lea eax,[esp+0x14]
	push eax
	lea edx,[esp+0x60]
	push edx
	push edi
	push edi
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0xB4],8
	cmp word ptr [esp+0x5C],si
	jne Block70

 Block68:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	cmp eax,edi
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea ecx,[esp+0x5C]
	push ecx
	call ebx

 Block71:
	mov byte ptr [esp+0xB4],3
	cmp word ptr [esp+0x14],si
	jne Block74

 Block72:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	cmp eax,edi
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea eax,[esp+0x14]
	push eax
	call ebx

 Block75:
	mov esi,dword ptr [ebp+0x1F0]
	cmp esi,edi
	jne Block77

 Block76:
	push 0x80004003
	call _com_issue_error

 Block77:
	mov ecx,dword ptr [esi]
	mov eax,0xFFFFFFA6
	sub eax,dword ptr [esp+0x28]
	sub eax,dword ptr [ebp+0x1FC]
	push eax
	mov eax,dword ptr [esp+0xC4]
	cdq
	sub eax,edx
	mov edx,dword ptr [ecx+0x44]
	sar eax,1
	neg eax
	push eax
	push esi
	call edx
	cmp eax,edi
	jge Block79

 Block78:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block79:
	mov eax,3
	mov word ptr [esp+0x5C],ax
	mov dword ptr [esp+0x64],edi
	mov ecx,dword ptr [ebp+0x1F0]
	mov byte ptr [esp+0xB4],0xA
	cmp ecx,edi
	jne Block81

 Block80:
	push 0x80004003
	call _com_issue_error

 Block81:
	lea edx,[esp+0x5C]
	push edx
	lea eax,[esp+0x48]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x5C],8
	mov byte ptr [esp+0xB4],0xC
	jne Block84

 Block82:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	cmp eax,edi
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea edx,[esp+0x5C]
	push edx
	call ebx

 Block85:
	mov dword ptr [esp+0x28],edi
	lea eax,[esp+0x30]
	push 0x5A0
	push eax
	mov byte ptr [esp+0xBC],0xD
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov esi,eax
	lea ecx,[esp+0x2C]
	push 0x1424
	mov bl,0xE
	push ecx
	mov byte ptr [esp+0xBC],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [esi]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x30]
	push eax
	mov byte ptr [esp+0xC0],0xF
	call ZXString16::Format
	mov eax,dword ptr [esp+0x38]
	add esp,0xC
	mov byte ptr [esp+0xB4],bl
	cmp eax,edi
	je Block87

 Block86:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block87:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0xB4],0xD
	cmp eax,edi
	je Block89

 Block88:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block89:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x74]
	push ecx
	call ebp
	lea edx,[esp+0x74]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block91

 Block90:
	push eax
	call _com_issue_error

 Block91:
	lea eax,[esp+0x84]
	push eax
	mov byte ptr [esp+0xB8],0x10
	call ebp
	lea ecx,[esp+0x84]
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
	push edi
	push edi
	lea edx,[esp+0x7C]
	push edx
	mov edx,dword ptr [esp+0x34]
	lea eax,[esp+0x90]
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xCC],0x11
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xC8],0x12
	cmp dword ptr [_D_G_RM],edi
	jne Block95

 Block94:
	push 0x80004003
	call _com_issue_error

 Block95:
	lea eax,[esp+0xA8]
	mov byte ptr [esp+0xC8],0x11
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xBC],0x13
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x30],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block98

 Block96:
	cmp eax,0x80004002
	je Block98

 Block97:
	push eax
	call _com_issue_error

 Block98:
	mov ebx,8
	mov byte ptr [esp+0xB4],0x15
	cmp word ptr [esp+0x94],bx
	jne Block105

 Block99:
	mov eax,dword ptr [esp+0x9C]
	xor ecx,ecx
	mov word ptr [esp+0x94],cx
	cmp eax,edi
	je Block101

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block101:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block102:
	mov byte ptr [esp+0xB4],0x16
	cmp word ptr [esp+0x84],bx
	jne Block106

 Block103:
	xor eax,eax
	mov word ptr [esp+0x84],ax
	mov eax,dword ptr [esp+0x8C]
	cmp eax,edi
	je Block107

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block105:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x94]
	push edx
	call esi
	jmp Block102

 Block106:
	lea ecx,[esp+0x84]
	push ecx
	call esi

 Block107:
	mov byte ptr [esp+0xB4],0x17
	cmp word ptr [esp+0x74],bx
	jne Block110

 Block108:
	mov eax,dword ptr [esp+0x7C]
	xor edx,edx
	mov word ptr [esp+0x74],dx
	cmp eax,edi
	je Block111

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block111

 Block110:
	lea eax,[esp+0x74]
	push eax
	call esi

 Block111:
	lea ecx,[esp+0x14]
	push ecx
	call ebp
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block113

 Block112:
	push eax
	call _com_issue_error

 Block113:
	mov ecx,dword ptr [esp+0x44]
	mov byte ptr [esp+0xB4],0x18
	cmp ecx,edi
	jne Block115

 Block114:
	push 0x80004003
	call _com_issue_error

 Block115:
	mov edx,dword ptr [esp+0x2C]
	lea eax,[esp+0x14]
	push eax
	push edx
	push edi
	push edi
	call IWzCanvas::Copy
	mov byte ptr [esp+0xB4],0x17
	cmp word ptr [esp+0x14],bx
	jne Block118

 Block116:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,edi
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea ecx,[esp+0x14]
	push ecx
	call esi

 Block119:
	lea edx,[esp+0x24]
	push 0x5A1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov esi,eax
	lea eax,[esp+0x30]
	push 0x1424
	mov bl,0x19
	push eax
	mov byte ptr [esp+0xBC],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0xC0],0x1A
	call ZXString16::Format
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov byte ptr [esp+0xB4],bl
	cmp eax,edi
	je Block121

 Block120:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block121:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xB4],0x17
	cmp eax,edi
	je Block123

 Block122:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block123:
	lea eax,[esp+0x34]
	push eax
	call ebp
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block125

 Block124:
	push eax
	call _com_issue_error

 Block125:
	lea edx,[esp+0x14]
	push edx
	mov byte ptr [esp+0xB8],0x1B
	call ebp
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block127

 Block126:
	push eax
	call _com_issue_error

 Block127:
	mov eax,dword ptr [esp+0x28]
	push edi
	push edi
	lea ecx,[esp+0x3C]
	push ecx
	lea edx,[esp+0x20]
	push edx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,0x1C
	push eax
	mov byte ptr [esp+0xCC],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xC8],0x1D
	cmp dword ptr [_D_G_RM],edi
	jne Block129

 Block128:
	push 0x80004003
	call _com_issue_error

 Block129:
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0xCC],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xBC],0x1E
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x30]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block132

 Block130:
	cmp eax,0x80004002
	je Block132

 Block131:
	push eax
	call _com_issue_error

 Block132:
	mov esi,8
	mov byte ptr [esp+0xB4],bl
	cmp word ptr [esp+0x4C],si
	jne Block135

 Block133:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	cmp eax,edi
	je Block136

 Block134:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block136

 Block135:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block136:
	mov byte ptr [esp+0xB4],0x1B
	cmp word ptr [esp+0x14],si
	jne Block139

 Block137:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,edi
	je Block140

 Block138:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block140

 Block139:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block140:
	mov byte ptr [esp+0xB4],0x17
	cmp word ptr [esp+0x34],si
	jne Block143

 Block141:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,edi
	je Block144

 Block142:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block144

 Block143:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block144:
	mov ebp,dword ptr [esp+0x2C]
	xor esi,esi
	cmp dword ptr [esp+0xC0],esi
	jle Block154

 Block145:
	mov edi,dword ptr [esp+0x44]
	mov bl,0x1F
	mov edi,edi

 Block146:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block16

 Block147:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [edi]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x30]
	push ebp
	mov dword ptr [eax+0xC],edx
	push 0
	lea eax,[esi+0x13]
	push eax
	push edi
	mov byte ptr [esp+0xD4],bl
	call ecx
	test eax,eax
	jge Block149

 Block148:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block149:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xB4],0x17
	jne Block152

 Block150:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
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
	inc esi
	cmp esi,dword ptr [esp+0xC0]
	jl Block146

 Block154:
	lea ecx,[esp+0x30]
	push 0x5A2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov esi,eax
	lea edx,[esp+0x24]
	push 0x1424
	mov bl,0x20
	push edx
	mov byte ptr [esp+0xBC],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0xC0],0x21
	call ZXString16::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0xB4],bl
	test eax,eax
	je Block156

 Block155:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block156:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0xB4],0x17
	test eax,eax
	je Block158

 Block157:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block158:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
	push eax
	call esi
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block160

 Block159:
	push eax
	call _com_issue_error

 Block160:
	lea edx,[esp+0x34]
	mov bl,0x22
	push edx
	mov byte ptr [esp+0xB8],bl
	call esi
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block162

 Block161:
	push eax
	call _com_issue_error

 Block162:
	mov eax,dword ptr [esp+0x28]
	push 0
	push 0
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x40]
	push edx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xCC],0x23
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xC8],0x24
	jne Block164

 Block163:
	push 0x80004003
	call _com_issue_error

 Block164:
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0xCC],0x23
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xBC],0x25
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block170

 Block165:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x24]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	mov esi,eax
	xor eax,eax
	test esi,esi
	setl al
	dec eax
	and eax,dword ptr [esp+0x24]
	mov edi,eax
	test ebp,ebp
	je Block167

 Block166:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx

 Block167:
	mov ebp,edi
	mov dword ptr [esp+0x2C],ebp
	test esi,esi
	jge Block173

 Block168:
	cmp esi,0x80004002
	je Block173

 Block169:
	push esi
	call _com_issue_error

 Block170:
	test ebp,ebp
	je Block173

 Block171:
	mov eax,ebp
	xor ebp,ebp
	mov dword ptr [esp+0x2C],ebp
	test eax,eax
	je Block173

 Block172:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block173:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0xB4],0x23
	jne Block176

 Block174:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block177

 Block175:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block177

 Block176:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block177:
	mov esi,8
	mov byte ptr [esp+0xB4],bl
	cmp word ptr [esp+0x34],si
	jne Block180

 Block178:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block181

 Block179:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block181

 Block180:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block181:
	mov byte ptr [esp+0xB4],0x17
	cmp word ptr [esp+0x14],si
	jne Block184

 Block182:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block185

 Block183:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block185

 Block184:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block185:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
	push eax
	call edi
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block187

 Block186:
	push eax
	call _com_issue_error

 Block187:
	mov ebx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0xC0]
	mov esi,dword ptr [esp+0x44]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x2C]
	push ebp
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0x34]
	push 0
	add ecx,0x13
	push ecx
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [edx+0x80]
	push esi
	mov byte ptr [esp+0xD4],0x26
	call eax
	test eax,eax
	jge Block189

 Block188:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block189:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xB4],0x17
	jne Block192

 Block190:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block193

 Block191:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block193

 Block192:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block193:
	lea eax,[esp+0x30]
	push 0x5A4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov esi,eax
	lea ecx,[esp+0x24]
	push 0x1424
	mov bl,0x27
	push ecx
	mov byte ptr [esp+0xBC],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [esi]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x30]
	push eax
	mov byte ptr [esp+0xC0],0x28
	call ZXString16::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0xB4],bl
	test eax,eax
	je Block195

 Block194:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block195:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0xB4],0x17
	test eax,eax
	je Block197

 Block196:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block197:
	lea ecx,[esp+0x14]
	push ecx
	call edi
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block199

 Block198:
	push eax
	call _com_issue_error

 Block199:
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0xB8],0x29
	call edi
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block201

 Block200:
	push eax
	call _com_issue_error

 Block201:
	push 0
	push 0
	lea edx,[esp+0x1C]
	push edx
	mov edx,dword ptr [esp+0x34]
	lea eax,[esp+0x40]
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,0x2A
	push edx
	mov byte ptr [esp+0xCC],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xC8],0x2B
	jne Block203

 Block202:
	push 0x80004003
	call _com_issue_error

 Block203:
	lea eax,[esp+0x60]
	mov byte ptr [esp+0xC8],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xBC],0x2C
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block209

 Block204:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x24]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x24]
	mov edi,ecx
	test ebp,ebp
	je Block206

 Block205:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	call eax

 Block206:
	mov ebp,edi
	mov dword ptr [esp+0x2C],ebp
	test esi,esi
	jge Block212

 Block207:
	cmp esi,0x80004002
	je Block212

 Block208:
	push esi
	call _com_issue_error

 Block209:
	test ebp,ebp
	je Block212

 Block210:
	mov eax,ebp
	xor ebp,ebp
	mov dword ptr [esp+0x2C],ebp
	test eax,eax
	je Block212

 Block211:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block212:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0xB4],bl
	jne Block215

 Block213:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block216

 Block214:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block216

 Block215:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block216:
	mov esi,8
	mov byte ptr [esp+0xB4],0x29
	cmp word ptr [esp+0x34],si
	jne Block219

 Block217:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block220

 Block218:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block220

 Block219:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block220:
	mov byte ptr [esp+0xB4],0x17
	cmp word ptr [esp+0x14],si
	jne Block223

 Block221:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block224

 Block222:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block224

 Block223:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block224:
	mov eax,dword ptr [esp+0x48]
	xor esi,esi
	cmp dword ptr [eax+0x1FC],esi
	jle Block234

 Block225:
	mov edi,dword ptr [esp+0x44]
	mov bl,0x2D

 Block226:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block16

 Block227:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [edi]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x30]
	push ebp
	mov dword ptr [eax+0xC],edx
	lea eax,[esi+0x15]
	push eax
	push 0
	push edi
	mov byte ptr [esp+0xD4],bl
	call ecx
	test eax,eax
	jge Block229

 Block228:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block229:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xB4],0x17
	jne Block232

 Block230:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
	je Block233

 Block231:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block233

 Block232:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block233:
	mov ecx,dword ptr [esp+0x48]
	inc esi
	cmp esi,dword ptr [ecx+0x1FC]
	jl Block226

 Block234:
	lea edx,[esp+0x30]
	push 0x5A3
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov esi,eax
	lea eax,[esp+0x24]
	push 0x1424
	mov bl,0x2E
	push eax
	mov byte ptr [esp+0xBC],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0xC0],0x2F
	call ZXString16::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0xB4],bl
	test eax,eax
	je Block236

 Block235:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block236:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0xB4],0x17
	test eax,eax
	je Block238

 Block237:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block238:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
	push eax
	call esi
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block240

 Block239:
	push eax
	call _com_issue_error

 Block240:
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0xB8],0x30
	call esi
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block242

 Block241:
	push eax
	call _com_issue_error

 Block242:
	mov eax,dword ptr [esp+0x28]
	push 0
	push 0
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x40]
	push edx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,0x31
	push eax
	mov byte ptr [esp+0xCC],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xC8],0x32
	jne Block244

 Block243:
	push 0x80004003
	call _com_issue_error

 Block244:
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0xCC],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xBC],0x33
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block250

 Block245:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x24]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	mov esi,eax
	xor eax,eax
	test esi,esi
	setl al
	dec eax
	and eax,dword ptr [esp+0x24]
	mov edi,eax
	test ebp,ebp
	je Block247

 Block246:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx

 Block247:
	mov ebp,edi
	mov dword ptr [esp+0x2C],ebp
	test esi,esi
	jge Block253

 Block248:
	cmp esi,0x80004002
	je Block253

 Block249:
	push esi
	call _com_issue_error

 Block250:
	test ebp,ebp
	je Block253

 Block251:
	mov eax,ebp
	xor ebp,ebp
	mov dword ptr [esp+0x2C],ebp
	test eax,eax
	je Block253

 Block252:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block253:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0xB4],bl
	jne Block256

 Block254:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block257

 Block255:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block257

 Block256:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block257:
	mov esi,8
	mov byte ptr [esp+0xB4],0x30
	cmp word ptr [esp+0x34],si
	jne Block260

 Block258:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block261

 Block259:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block261

 Block260:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block261:
	mov byte ptr [esp+0xB4],0x17
	cmp word ptr [esp+0x14],si
	jne Block264

 Block262:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block265

 Block263:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block265

 Block264:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block265:
	mov eax,dword ptr [esp+0x48]
	xor esi,esi
	cmp dword ptr [eax+0x1FC],esi
	jle Block275

 Block266:
	mov edi,dword ptr [esp+0x44]
	mov bl,0x34
	lea ebx,[ebx]

 Block267:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block16

 Block268:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [edi]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+0xC],edx
	push ebp
	lea eax,[esi+0x15]
	push eax
	mov eax,dword ptr [esp+0xD8]
	add eax,0x13
	push eax
	push edi
	mov byte ptr [esp+0xD4],bl
	call ecx
	test eax,eax
	jge Block270

 Block269:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block270:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xB4],0x17
	jne Block273

 Block271:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
	je Block274

 Block272:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block274

 Block273:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block274:
	mov ecx,dword ptr [esp+0x48]
	inc esi
	cmp esi,dword ptr [ecx+0x1FC]
	jl Block267

 Block275:
	lea edx,[esp+0x30]
	push 0x5A6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov esi,eax
	lea eax,[esp+0x24]
	push 0x1424
	mov bl,0x35
	push eax
	mov byte ptr [esp+0xBC],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0xC0],0x36
	call ZXString16::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0xB4],bl
	test eax,eax
	je Block277

 Block276:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block277:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0xB4],0x17
	test eax,eax
	je Block279

 Block278:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block279:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
	push eax
	call esi
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block281

 Block280:
	push eax
	call _com_issue_error

 Block281:
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0xB8],0x37
	call esi
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block283

 Block282:
	push eax
	call _com_issue_error

 Block283:
	mov eax,dword ptr [esp+0x28]
	push 0
	push 0
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x40]
	push edx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,0x38
	push eax
	mov byte ptr [esp+0xCC],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xC8],0x39
	jne Block285

 Block284:
	push 0x80004003
	call _com_issue_error

 Block285:
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0xCC],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xBC],0x3A
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block291

 Block286:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x24]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	mov esi,eax
	xor eax,eax
	test esi,esi
	setl al
	dec eax
	and eax,dword ptr [esp+0x24]
	mov edi,eax
	test ebp,ebp
	je Block288

 Block287:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx

 Block288:
	mov ebp,edi
	mov dword ptr [esp+0x2C],ebp
	test esi,esi
	jge Block294

 Block289:
	cmp esi,0x80004002
	je Block294

 Block290:
	push esi
	call _com_issue_error

 Block291:
	test ebp,ebp
	je Block294

 Block292:
	mov eax,ebp
	xor ebp,ebp
	mov dword ptr [esp+0x2C],ebp
	test eax,eax
	je Block294

 Block293:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block294:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0xB4],bl
	jne Block297

 Block295:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block298

 Block296:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block298

 Block297:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block298:
	mov esi,8
	mov byte ptr [esp+0xB4],0x37
	cmp word ptr [esp+0x34],si
	jne Block301

 Block299:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block302

 Block300:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block302

 Block301:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block302:
	mov byte ptr [esp+0xB4],0x17
	cmp word ptr [esp+0x14],si
	jne Block305

 Block303:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block306

 Block304:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block306

 Block305:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block306:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
	push eax
	call edi
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block308

 Block307:
	push eax
	call _com_issue_error

 Block308:
	mov ebx,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x48]
	mov ecx,dword ptr [edx+0x1FC]
	mov esi,dword ptr [esp+0x44]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x2C]
	push ebp
	add ecx,0x15
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0x34]
	push ecx
	push 0
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [edx+0x80]
	push esi
	mov byte ptr [esp+0xD4],0x3B
	call eax
	test eax,eax
	jge Block310

 Block309:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block310:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xB4],0x17
	jne Block313

 Block311:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block314

 Block312:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block314

 Block313:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block314:
	lea eax,[esp+0x30]
	push 0x5A7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov esi,eax
	lea ecx,[esp+0x24]
	push 0x1424
	mov bl,0x3C
	push ecx
	mov byte ptr [esp+0xBC],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [esi]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x30]
	push eax
	mov byte ptr [esp+0xC0],0x3D
	call ZXString16::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0xB4],bl
	test eax,eax
	je Block316

 Block315:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block316:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0xB4],0x17
	test eax,eax
	je Block318

 Block317:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block318:
	lea ecx,[esp+0x14]
	push ecx
	call edi
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block320

 Block319:
	push eax
	call _com_issue_error

 Block320:
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0xB8],0x3E
	call edi
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block322

 Block321:
	push eax
	call _com_issue_error

 Block322:
	push 0
	push 0
	lea edx,[esp+0x1C]
	push edx
	mov edx,dword ptr [esp+0x34]
	lea eax,[esp+0x40]
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,0x3F
	push edx
	mov byte ptr [esp+0xCC],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xC8],0x40
	jne Block324

 Block323:
	push 0x80004003
	call _com_issue_error

 Block324:
	lea eax,[esp+0x60]
	mov byte ptr [esp+0xC8],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xBC],0x41
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block330

 Block325:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x24]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x24]
	mov edi,ecx
	test ebp,ebp
	je Block327

 Block326:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	call eax

 Block327:
	mov ebp,edi
	mov dword ptr [esp+0x2C],ebp
	test esi,esi
	jge Block333

 Block328:
	cmp esi,0x80004002
	je Block333

 Block329:
	push esi
	call _com_issue_error

 Block330:
	test ebp,ebp
	je Block333

 Block331:
	mov eax,ebp
	xor ebp,ebp
	mov dword ptr [esp+0x2C],ebp
	test eax,eax
	je Block333

 Block332:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block333:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0xB4],bl
	jne Block336

 Block334:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block337

 Block335:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block337

 Block336:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block337:
	mov esi,8
	mov byte ptr [esp+0xB4],0x3E
	cmp word ptr [esp+0x34],si
	jne Block340

 Block338:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block341

 Block339:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block341

 Block340:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block341:
	mov byte ptr [esp+0xB4],0x17
	cmp word ptr [esp+0x14],si
	jne Block344

 Block342:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block345

 Block343:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block345

 Block344:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block345:
	xor esi,esi
	cmp dword ptr [esp+0xC0],esi
	jle Block355

 Block346:
	mov edi,dword ptr [esp+0x44]
	mov bl,0x42
	lea esp,[esp]

 Block347:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block16

 Block348:
	mov edx,dword ptr [esp+0x48]
	mov ecx,dword ptr [edx+0x1FC]
	mov edx,dword ptr [edi]
	mov edi,dword ptr [esp+0x14]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x28]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x2C]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x30]
	push ebp
	add ecx,0x15
	mov dword ptr [eax+0xC],edi
	mov edi,dword ptr [esp+0x58]
	push ecx
	mov ecx,dword ptr [edx+0x80]
	lea eax,[esi+0x13]
	push eax
	push edi
	mov byte ptr [esp+0xD4],bl
	call ecx
	test eax,eax
	jge Block350

 Block349:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block350:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xB4],0x17
	jne Block353

 Block351:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
	je Block354

 Block352:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block354

 Block353:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block354:
	inc esi
	cmp esi,dword ptr [esp+0xC0]
	jl Block347

 Block355:
	lea ecx,[esp+0x30]
	push 0x1AD4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov esi,eax
	lea edx,[esp+0x24]
	push 0x1424
	mov bl,0x43
	push edx
	mov byte ptr [esp+0xBC],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0xC0],0x44
	call ZXString16::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0xB4],bl
	test eax,eax
	je Block357

 Block356:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block357:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0xB4],0x17
	test eax,eax
	je Block359

 Block358:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block359:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
	push eax
	call esi
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block361

 Block360:
	push eax
	call _com_issue_error

 Block361:
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0xB8],0x45
	call esi
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block363

 Block362:
	push eax
	call _com_issue_error

 Block363:
	mov eax,dword ptr [esp+0x28]
	push 0
	push 0
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x40]
	push edx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,0x46
	push eax
	mov byte ptr [esp+0xCC],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xC8],0x47
	jne Block365

 Block364:
	push 0x80004003
	call _com_issue_error

 Block365:
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0xCC],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xBC],0x48
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block371

 Block366:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x24]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	mov esi,eax
	xor eax,eax
	test esi,esi
	setl al
	dec eax
	and eax,dword ptr [esp+0x24]
	mov edi,eax
	test ebp,ebp
	je Block368

 Block367:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx

 Block368:
	mov ebp,edi
	mov dword ptr [esp+0x2C],ebp
	test esi,esi
	jge Block374

 Block369:
	cmp esi,0x80004002
	je Block374

 Block370:
	push esi
	call _com_issue_error

 Block371:
	test ebp,ebp
	je Block374

 Block372:
	mov eax,ebp
	xor ebp,ebp
	mov dword ptr [esp+0x2C],ebp
	test eax,eax
	je Block374

 Block373:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block374:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0xB4],bl
	jne Block377

 Block375:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block378

 Block376:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block378

 Block377:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block378:
	mov esi,8
	mov byte ptr [esp+0xB4],0x45
	cmp word ptr [esp+0x34],si
	jne Block381

 Block379:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block382

 Block380:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block382

 Block381:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block382:
	mov byte ptr [esp+0xB4],0x17
	cmp word ptr [esp+0x14],si
	jne Block385

 Block383:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block386

 Block384:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block386

 Block385:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block386:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
	push eax
	call edi
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block388

 Block387:
	push eax
	call _com_issue_error

 Block388:
	mov ebx,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x48]
	mov ecx,dword ptr [edx+0x1FC]
	mov esi,dword ptr [esp+0x44]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x2C]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0x30]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [esp+0xD0]
	push ebp
	add ecx,0x15
	push ecx
	add eax,0x13
	push eax
	mov eax,dword ptr [edx+0x80]
	push esi
	mov byte ptr [esp+0xD4],0x49
	call eax
	test eax,eax
	jge Block390

 Block389:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block390:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xB4],0x17
	jne Block393

 Block391:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block394

 Block392:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block394

 Block393:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block394:
	lea eax,[esp+0x30]
	push 0x5A5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov esi,eax
	lea ecx,[esp+0x24]
	push 0x1424
	mov bl,0x4A
	push ecx
	mov byte ptr [esp+0xBC],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [esi]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x30]
	push eax
	mov byte ptr [esp+0xC0],0x4B
	call ZXString16::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0xB4],bl
	test eax,eax
	je Block396

 Block395:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block396:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0xB4],0x17
	test eax,eax
	je Block398

 Block397:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block398:
	lea ecx,[esp+0x14]
	push ecx
	call edi
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block400

 Block399:
	push eax
	call _com_issue_error

 Block400:
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0xB8],0x4C
	call edi
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block402

 Block401:
	push eax
	call _com_issue_error

 Block402:
	push 0
	push 0
	lea edx,[esp+0x1C]
	push edx
	mov edx,dword ptr [esp+0x34]
	lea eax,[esp+0x40]
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,0x4D
	push edx
	mov byte ptr [esp+0xCC],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xC8],0x4E
	jne Block404

 Block403:
	push 0x80004003
	call _com_issue_error

 Block404:
	lea eax,[esp+0x60]
	mov byte ptr [esp+0xC8],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xBC],0x4F
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block410

 Block405:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x24]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x24]
	mov edi,ecx
	test ebp,ebp
	je Block407

 Block406:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	call eax

 Block407:
	mov ebp,edi
	mov dword ptr [esp+0x2C],ebp
	test esi,esi
	jge Block413

 Block408:
	cmp esi,0x80004002
	je Block413

 Block409:
	push esi
	call _com_issue_error

 Block410:
	test ebp,ebp
	je Block413

 Block411:
	mov eax,ebp
	xor ebp,ebp
	mov dword ptr [esp+0x2C],ebp
	test eax,eax
	je Block413

 Block412:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block413:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0xB4],bl
	jne Block416

 Block414:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block417

 Block415:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block417

 Block416:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block417:
	mov esi,8
	mov byte ptr [esp+0xB4],0x4C
	cmp word ptr [esp+0x34],si
	jne Block420

 Block418:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block421

 Block419:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block421

 Block420:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block421:
	mov byte ptr [esp+0xB4],0x17
	cmp word ptr [esp+0x14],si
	jne Block424

 Block422:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block425

 Block423:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block425

 Block424:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block425:
	xor edi,edi
	cmp dword ptr [esp+0xC0],edi
	jle Block438

 Block426:
	mov ebx,dword ptr [esp+0x44]
	jmp Block428

 Block428:
	mov eax,dword ptr [esp+0x48]
	xor esi,esi
	cmp dword ptr [eax+0x1FC],esi
	jle Block437

 Block429:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block16

 Block430:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [ebx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+0xC],edx
	push ebp
	lea eax,[esi+0x15]
	push eax
	mov eax,dword ptr [ecx+0x80]
	lea edx,[edi+0x13]
	push edx
	push ebx
	mov byte ptr [esp+0xD4],0x50
	call eax
	test eax,eax
	jge Block432

 Block431:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block432:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xB4],0x17
	jne Block435

 Block433:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block436

 Block434:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block436

 Block435:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block436:
	mov eax,dword ptr [esp+0x48]
	inc esi
	cmp esi,dword ptr [eax+0x1FC]
	jl Block429

 Block437:
	inc edi
	cmp edi,dword ptr [esp+0xC0]
	jl Block428

 Block438:
	lea ecx,[esp+0x30]
	push 0x5A8
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov esi,eax
	lea edx,[esp+0x24]
	push 0x1424
	mov bl,0x51
	push edx
	mov byte ptr [esp+0xBC],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0xC0],0x52
	call ZXString16::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0xB4],bl
	test eax,eax
	je Block440

 Block439:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block440:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0xB4],0x17
	test eax,eax
	je Block442

 Block441:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block442:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
	push eax
	call esi
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block444

 Block443:
	push eax
	call _com_issue_error

 Block444:
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0xB8],0x53
	call esi
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block446

 Block445:
	push eax
	call _com_issue_error

 Block446:
	mov eax,dword ptr [esp+0x28]
	push 0
	push 0
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x40]
	push edx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,0x54
	push eax
	mov byte ptr [esp+0xCC],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xC8],0x55
	jne Block448

 Block447:
	push 0x80004003
	call _com_issue_error

 Block448:
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0xCC],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xBC],0x56
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block454

 Block449:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x24]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	mov esi,eax
	xor eax,eax
	test esi,esi
	setl al
	dec eax
	and eax,dword ptr [esp+0x24]
	mov edi,eax
	test ebp,ebp
	je Block451

 Block450:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx

 Block451:
	mov ebp,edi
	mov dword ptr [esp+0x2C],ebp
	test esi,esi
	jge Block457

 Block452:
	cmp esi,0x80004002
	je Block457

 Block453:
	push esi
	call _com_issue_error

 Block454:
	test ebp,ebp
	je Block457

 Block455:
	mov eax,ebp
	xor ebp,ebp
	mov dword ptr [esp+0x2C],ebp
	test eax,eax
	je Block457

 Block456:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block457:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0xB4],bl
	jne Block460

 Block458:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block461

 Block459:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block461

 Block460:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block461:
	mov edi,8
	mov byte ptr [esp+0xB4],0x53
	cmp word ptr [esp+0x34],di
	jne Block464

 Block462:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block465

 Block463:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block465

 Block464:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block465:
	mov byte ptr [esp+0xB4],0x17
	cmp word ptr [esp+0x14],di
	jne Block468

 Block466:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block469

 Block467:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block469

 Block468:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block469:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block471

 Block470:
	push eax
	call _com_issue_error

 Block471:
	mov edx,dword ptr [esp+0x48]
	mov ecx,dword ptr [edx+0x1FC]
	mov edx,dword ptr [esp+0x14]
	mov esi,dword ptr [esp+0x44]
	mov ebx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0xD0]
	cdq
	sub eax,edx
	push ebp
	sar eax,1
	add ecx,0x23
	push ecx
	add eax,0xA
	push eax
	mov eax,dword ptr [ebx+0x80]
	push esi
	mov byte ptr [esp+0xD4],0x57
	call eax
	test eax,eax
	jge Block473

 Block472:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block473:
	mov byte ptr [esp+0xB4],0x17
	cmp word ptr [esp+0x14],di
	jne Block476

 Block474:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block477

 Block475:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block477

 Block476:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block477:
	xor ebp,ebp
	xor edi,edi
	mov bl,0x59
	lea esp,[esp]

 Block478:
	mov ecx,dword ptr [esp+0x48]
	mov eax,dword ptr [ecx+0x1F8]
	add ecx,0x1F8
	test eax,eax
	je Block492

 Block479:
	cmp ebp,dword ptr [eax-4]
	jae Block492

 Block480:
	mov esi,eax
	add esi,edi
	cmp dword ptr [esi],0
	jne Block491

 Block481:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block16

 Block482:
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0xB8],0x58
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block16

 Block483:
	mov eax,dword ptr [esi+0xC]
	lea ecx,[esp+0x14]
	push ecx
	lea edx,[esp+0x38]
	push edx
	push eax
	mov eax,dword ptr [esi+0x10]
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xC8],bl
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esi+0x1C]
	mov ecx,dword ptr [esi+0x18]
	add eax,0x15
	add ecx,0x13
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x5C]
	mov byte ptr [esp+0xCC],0x5A
	mov byte ptr [esp+0xCC],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0xB4],0x58
	jne Block486

 Block484:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block487

 Block485:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block487

 Block486:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block487:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xB4],0x17
	jne Block490

 Block488:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block491

 Block489:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc ebp
	add edi,0x44
	jmp Block478

 Block490:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block491:
	inc ebp
	add edi,0x44
	jmp Block478

 Block492:
	mov ecx,dword ptr [esp+0x48]
	push 0x11
	call CSummoned::SetAttackAction
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xB4],0xD
	test eax,eax
	je Block494

 Block493:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block494:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0xB4],0xC
	test eax,eax
	je Block496

 Block495:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block496:
	mov eax,dword ptr [esp+0x44]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0xB8],3
	call edx
	mov edi,dword ptr [esp+0x70]
	mov byte ptr [esp+0xB4],0
	test edi,edi
	je Block499

 Block497:
	lea esi,[edi+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block499

 Block498:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block499:
	mov eax,dword ptr [esp+0x6C]
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	test eax,eax
	je Block501

 Block500:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block501:
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
// CSummoned::SetActive
__SUB_CLASS_THIS(0034A120, __thiscall, 67258,  CSummoned, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x104]
	neg eax
	push edi
	sbb eax,eax
	push ecx
	add eax,2
	lea edi,[esi+0xFC]
	push edi
	mov dword ptr [esi+0x1DC],eax
	call _ZtlSecureFuseHelper<long>::call
	and eax,1
	or eax,0x2A
	add esp,8
	mov edx,edi
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	push 0x12
	mov ecx,esi
	mov dword ptr [esi+0x104],eax
	call CSummoned::SetAttackAction
	pop edi
	mov dword ptr [esi+0x168],1
	pop esi
	ret 4
}
}
// CSummoned::TryDoingAttack
_SUB_EXCEPTION_HANDLER(356860)
__SUB_CLASS_THIS(00356860, __thiscall, 67272,  CSummoned, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_356860
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xB14
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xB28]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x34],esi
	cmp dword ptr [esi+0xD4],1
	mov ebp,dword ptr [esp+0xB3C]
	je Block2

 Block1:
	cmp ebp,1
	jne Block291

 Block2:
	mov eax,dword ptr [esi+0xC0]
	cmp eax,0x217C05A
	jne Block5

 Block3:
	test ebp,ebp
	jne Block5

 Block4:
	cmp dword ptr [esi+0x1DC],ebp
	jne Block291

 Block5:
	cmp eax,0x217E773
	jne Block7

 Block6:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,0x1388
	div ecx
	mov eax,dword ptr [esp+0xB38]
	sub eax,dword ptr [esi+0xEC]
	add edx,0x7D0
	cmp eax,edx
	jb Block291

 Block7:
	mov ebx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea ecx,[esp+0xE0]
	push ecx
	mov ecx,ebx
	mov dword ptr [esp+0x98],ebx
	call CWvsContext::GetCharacterData
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0xE4]
	mov dword ptr [esp+0x58],edx
	test eax,eax
	je Block12

 Block8:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block11

 Block9:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block11

 Block10:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block11:
	mov ebp,dword ptr [esp+0xB3C]
	mov dword ptr [esp+0xE4],0

 Block12:
	add ebx,0x2148
	mov dword ptr [esp+0x44],ebx
	lea ebx,[esi+0x88]
	push ebp
	mov ecx,ebx
	call CSummonedBase::AIType2Action
	cmp dword ptr [esi+0xC0],0x4FA6A2
	mov edi,eax
	mov dword ptr [esp+0x50],edi
	jne Block14

 Block13:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	not eax
	and eax,1
	or eax,4
	mov dword ptr [esp+0x50],eax

 Block14:
	mov eax,dword ptr [esi+0xC0]
	push eax
	call is_summon_octopus_skill
	add esp,4
	test eax,eax
	jne Block23

 Block15:
	mov eax,dword ptr [esi+0xC0]
	cmp eax,0x4F837A
	je Block23

 Block16:
	cmp eax,0x1F93BDB
	je Block23

 Block17:
	push eax
	call is_self_destruct_summon_skill
	add esp,4
	test eax,eax
	jne Block23

 Block18:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	call CUser::IsOnLadderOrRope
	test eax,eax
	jne Block291

 Block19:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edx,dword ptr [ecx+0x5F8]
	push edx
	call is_vehicle
	add esp,4
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	add ecx,0x88
	call CAvatar::IsRidingWildHunterJaguar
	test eax,eax
	je Block291

 Block21:
	mov ecx,dword ptr [esp+0x44]
	call SecondaryStat::_ZtlSecureGet_nDarkSight_
	test eax,eax
	jne Block291

 Block22:
	mov ecx,dword ptr [esp+0x44]
	call SecondaryStat::_ZtlSecureGet_nWindWalk_
	test eax,eax
	jne Block291

 Block23:
	mov ecx,dword ptr [esi+0xC8]
	mov eax,dword ptr [esp+0x50]
	mov edx,dword ptr [esi+0xC0]
	push ebp
	push ecx
	sub eax,edi
	push eax
	mov dword ptr [esp+0xE8],eax
	push edx
	lea eax,[esp+0xBC]
	push eax
	mov ecx,ebx
	call CSummonedBase::LoadAttackInfo
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0xB0]
	mov dword ptr [esp+0x40],edi
	test eax,eax
	je Block28

 Block24:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block27

 Block25:
	mov ecx,dword ptr [esp+0xB0]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0xB0]
	test ecx,ecx
	je Block27

 Block26:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block27:
	mov dword ptr [esp+0xB0],0

 Block28:
	xor ebx,ebx
	cmp edi,ebx
	je Block291

 Block29:
	mov eax,dword ptr [edi+0x7C]
	mov ecx,dword ptr [edi+0x1C]
	mov edx,dword ptr [edi+0x18]
	mov dword ptr [esp+0x28],ecx
	mov dword ptr [esp+0x44],ebx
	mov dword ptr [esp+0xD8],edx
	mov dword ptr [esp+0x90],ebx
	cmp eax,ebx
	jne Block61

 Block30:
	cmp dword ptr [esi+0xC0],0x4F837A
	jne Block32

 Block31:
	mov eax,dword ptr [esi+4]
	mov eax,dword ptr [eax+0x10]
	lea ecx,[esi+4]
	lea edx,[esp+0x68]
	push edx
	call eax
	jmp Block33

 Block32:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edx,dword ptr [ecx+4]
	mov edx,dword ptr [edx+0x10]
	add ecx,4
	lea eax,[esp+0x68]
	push eax
	call edx

 Block33:
	mov ecx,dword ptr [eax]
	mov eax,dword ptr [eax+4]
	push ebx
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	mov dword ptr [esp+0x38],1
	call CMobPool::FindNearestMob
	mov dword ptr [esp+0x108],eax
	cmp eax,ebx
	je Block291

 Block34:
	lea ebx,[esi+4]

 Block35:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x68]
	push ecx
	mov ecx,ebx
	call edx
	mov esi,dword ptr [eax]
	mov eax,dword ptr [esp+0x40]
	mov ebp,dword ptr [eax+0x2C]
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x9C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x40],ebp
	call edx
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x40]
	mov eax,dword ptr [eax+0x30]
	mov ecx,esi
	sub ecx,dword ptr [esp+0x3C]
	lea edx,[esi+ebp]
	mov dword ptr [esp+0x60],ecx
	mov ecx,dword ptr [esp+0x108]
	push ecx
	mov ecx,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	push 4
	add edi,ebp
	push edi
	mov ebp,esi
	sub ebp,eax
	push ebp
	push edx
	add eax,esi
	push esi
	mov dword ptr [esp+0xBC],edx
	mov dword ptr [esp+0x60],eax
	call CMobPool::CheckMobInTrapezoid
	test eax,eax
	jne Block42

 Block36:
	mov edx,dword ptr [esp+0x108]
	mov eax,dword ptr [esp+0x48]
	mov ebp,dword ptr [esp+0x60]
	mov ecx,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	push edx
	push 4
	push edi
	push eax
	push ebp
	push esi
	call CMobPool::CheckMobInTrapezoid
	test eax,eax
	jne Block47

 Block37:
	mov ecx,dword ptr [esp+0x34]
	mov eax,dword ptr [ecx+0xC0]
	cmp eax,0x4F8379
	je Block39

 Block38:
	cmp eax,0x4FA6A2
	jne Block291

 Block39:
	cmp dword ptr [esp+0x2C],0
	je Block291

 Block40:
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0xE8]
	push eax
	mov ecx,ebx
	call edx
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [eax]
	push 0
	push ecx
	mov ecx,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	push edx
	mov dword ptr [esp+0x38],0
	call CMobPool::FindNearestMob
	mov dword ptr [esp+0x108],eax
	test eax,eax
	jne Block35

 Block41:
	jmp Block291

 Block42:
	mov eax,dword ptr [esp+0xA4]
	cmp ebp,eax
	mov ecx,eax
	jl Block44

 Block43:
	mov ecx,ebp

 Block44:
	cmp eax,ebp
	jge Block46

 Block45:
	mov ebp,eax

 Block46:
	lea eax,[edi+1]
	push eax
	push ecx
	push edi
	push ebp
	lea ecx,[esp+0xC4]
	push ecx
	call SetRect
	mov dword ptr [esp+0x30],1
	jmp Block52

 Block47:
	mov eax,dword ptr [esp+0x48]
	cmp eax,ebp
	mov ecx,ebp
	jl Block49

 Block48:
	mov ecx,eax

 Block49:
	cmp ebp,eax
	jl Block51

 Block50:
	mov ebp,eax

 Block51:
	lea edx,[edi+1]
	push edx
	push ecx
	push edi
	push ebp
	lea eax,[esp+0xC4]
	push eax
	call SetRect
	mov dword ptr [esp+0x30],0

 Block52:
	mov ecx,dword ptr [esp+0xB4]
	mov edx,dword ptr [esp+0xB8]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0xCC]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0xD0]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x118]
	mov dword ptr [eax+0xC],edx
	lea eax,[esp+0x78]
	push eax
	mov dword ptr [esp+0x40],1
	call CMob::GetHitPoint
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x34]
	mov eax,dword ptr [eax+0xC0]
	mov dword ptr [esp+0x48],ecx
	mov dword ptr [esp+0x4C],edx
	cmp eax,0x2F9F6E
	je Block60

 Block53:
	cmp eax,0x31260D
	je Block60

 Block54:
	cmp eax,0x4F837A
	je Block60

 Block55:
	cmp eax,0xE4E5AC
	je Block60

 Block56:
	cmp eax,0xA7DCAC
	je Block60

 Block57:
	cmp eax,0xB71EEC
	je Block60

 Block58:
	cmp eax,0xC6612C
	je Block60

 Block59:
	cmp eax,0xD5A36D
	jne Block79

 Block60:
	mov ecx,dword ptr [esp+0x40]
	add ecx,0x34
	push ecx
	lea edx,[esp+0x84]
	push edx
	call SECRECT::ToRect
	mov eax,dword ptr [esp+0x54]
	mov ecx,dword ptr [esp+0x50]
	add esp,8
	push eax
	push ecx
	lea edx,[esp+0x88]
	push edx
	call OffsetRect
	mov eax,dword ptr [esp+0x108]
	mov ecx,dword ptr [esp+0x28]
	push 0
	push 0
	push 0
	push 0
	push 0
	push eax
	dec ecx
	push ecx
	mov ecx,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	lea edx,[esp+0x128]
	push edx
	lea eax,[esp+0xA0]
	push eax
	call CMobPool::FindHitMobInRect
	inc eax
	mov dword ptr [esp+0x2C],eax
	mov dword ptr [esp+0x90],1
	mov dword ptr [esp+0x44],0x78
	jmp Block79

 Block61:
	lea ebp,[edi+0x34]
	lea ecx,[esp+0xF0]
	push ebp
	push ecx
	call SECRECT::ToRect
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	lea ebx,[esi+4]
	add esp,8
	lea eax,[esp+0x68]
	push eax
	mov ecx,ebx
	call edx
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x10]
	mov dword ptr [esp+0x3C],eax
	lea eax,[esp+0x9C]
	push eax
	mov ecx,ebx
	call edx
	mov ecx,dword ptr [esp+0x3C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0xF8]
	push edx
	call OffsetRect
	mov eax,dword ptr [edi+0x68]
	mov ecx,dword ptr [esp+0x28]
	push 0
	push 0
	push 0
	push eax
	push 0
	push 0
	push ecx
	mov ecx,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	lea edx,[esp+0x220]
	push edx
	lea eax,[esp+0x110]
	push eax
	call CMobPool::FindHitMobInRect
	lea ecx,[esp+0x70]
	push ebp
	push ecx
	mov dword ptr [esp+0x34],eax
	call SECRECT::ToRect
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x10]
	add esp,8
	lea eax,[esp+0x68]
	push eax
	mov ecx,ebx
	call edx
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x9C]
	push ecx
	mov ecx,ebx
	call edx
	mov edx,dword ptr [eax]
	mov eax,dword ptr [esp+0x78]
	mov ecx,dword ptr [esp+0x70]
	neg eax
	push ebp
	mov dword ptr [esp+0x74],eax
	push edx
	lea eax,[esp+0x78]
	neg ecx
	push eax
	mov dword ptr [esp+0x84],ecx
	call OffsetRect
	mov ecx,dword ptr [edi+0x68]
	push 0
	push 0
	push 0
	push ecx
	push 0
	push 0
	mov edx,dword ptr [esp+0x40]
	push edx
	lea eax,[esp+0x1E4]
	push eax
	lea ecx,[esp+0x90]
	push ecx
	mov ecx,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	call CMobPool::FindHitMobInRect
	cmp dword ptr [esi+0xC0],0x217E773
	mov dword ptr [esp+0x28],eax
	jne Block65

 Block62:
	cmp dword ptr [esp+0x2C],0
	jne Block64

 Block63:
	test eax,eax
	je Block67

 Block64:
	push 1
	lea ecx,[esi+0x88]
	mov dword ptr [esp+0xB40],1
	call CSummonedBase::AIType2Action
	mov dword ptr [esp+0x50],eax

 Block65:
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	jne Block86

 Block66:
	cmp dword ptr [esp+0x28],eax
	jne Block87

 Block67:
	cmp dword ptr [esp+0xB3C],1
	jne Block291

 Block68:
	mov edx,dword ptr [ebx]
	mov edi,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x68]
	push eax
	mov ecx,ebx
	add edi,4
	call edx
	mov ebp,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x9C]
	push ecx
	mov ecx,edi
	call edx
	mov ecx,dword ptr [eax]
	xor eax,eax
	cmp ecx,dword ptr [ebp]
	setge al
	cmp dword ptr [esi+0xC0],0x236A6B
	mov dword ptr [esp+0x30],eax
	jne Block70

 Block69:
	xor edx,edx
	cmp eax,edx
	sete dl
	mov dword ptr [esp+0x30],edx

 Block70:
	mov edx,dword ptr [esp+0x30]

 Block71:
	lea esi,[esp+0x204]
	test edx,edx
	jne Block73

 Block72:
	lea esi,[esp+0x1C8]

 Block73:
	mov ecx,0xF
	lea edi,[esp+0x108]
	rep movsd
	lea eax,[esp+0xF0]
	test edx,edx
	jne Block75

 Block74:
	lea eax,[esp+0x70]

 Block75:
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0x80],ecx
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x84],ecx
	mov ecx,dword ptr [eax+8]
	mov eax,dword ptr [eax+0xC]
	mov dword ptr [esp+0x8C],eax
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x88],ecx
	test edx,edx
	jne Block77

 Block76:
	mov eax,dword ptr [esp+0x28]

 Block77:
	and eax,0xFFFF
	mov dword ptr [esp+0x2C],eax
	jne Block79

 Block78:
	cmp dword ptr [esp+0xB3C],1
	jne Block291

 Block79:
	mov ecx,dword ptr [esp+0x34]
	mov eax,dword ptr [ecx+0xC0]
	cmp eax,0x1F93BDB
	je Block85

 Block80:
	cmp eax,0x217E772
	je Block85

 Block81:
	cmp eax,0x217C063
	je Block85

 Block82:
	cmp eax,0x217C05A
	je Block85

 Block83:
	cmp eax,0x217C05D
	je Block85

 Block84:
	cmp eax,0x217E771
	jne Block88

 Block85:
	xor ebp,ebp
	mov dword ptr [esp+0x30],ebp
	jmp Block89

 Block86:
	cmp eax,dword ptr [esp+0x28]
	je Block68

 Block87:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	cmp dword ptr [esp+0x2C],eax
	setg dl
	mov dword ptr [esp+0x30],edx
	jmp Block71

 Block88:
	xor ebp,ebp

 Block89:
	cmp eax,0x217E773
	jne Block92

 Block90:
	cmp dword ptr [esp+0x2C],ebp
	jne Block92

 Block91:
	call CSummoned::IsLeft
	mov dword ptr [esp+0x30],eax

 Block92:
	mov edi,dword ptr [esp+0x34]
	mov ecx,dword ptr [edi+0x104]
	push ecx
	lea esi,[edi+0xFC]
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	xor ecx,dword ptr [esp+0x38]
	add esp,8
	and ecx,1
	xor ecx,eax
	mov edx,esi
	call _ZtlSecureTearHelper<long>::call
	xor edx,edx
	cmp dword ptr [esp+0xB3C],1
	mov dword ptr [edi+0x104],eax
	mov eax,dword ptr [esp+0x30]
	mov edi,dword ptr [esp+0x40]
	mov ecx,dword ptr [edi+0x64]
	sete dl
	push edx
	mov edx,dword ptr [esp+0xB3C]
	push eax
	mov eax,dword ptr [edi+0x6C]
	push ecx
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0xB8],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block94

 Block93:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block94:
	mov esi,dword ptr [esp+0x48]
	lea ecx,[esi+0x8C]
	call CSummoned::ATTACKEFFECT::SetAttackEffect
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x60]
	push eax
	mov dword ptr [esp+0x3C],ebp
	call CWvsContext::GetCharacterData
	mov edx,dword ptr [esi+0xC0]
	mov eax,dword ptr [eax+4]
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push edx
	push eax
	mov dword ptr [esp+0xB3C],ebp
	call CSkillInfo::GetSkillLevel_0
	lea ecx,[esp+0x60]
	mov esi,eax
	mov dword ptr [esp+0xB30],0xFFFFFFFF
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,dword ptr [esp+0x38]
	push esi
	call SKILLENTRY::GetLevelData
	mov eax,dword ptr [esp+0x58]
	mov ecx,dword ptr [eax+0x35]
	mov edi,dword ptr [edi+0x64]
	push ecx
	add eax,0x33
	push eax
	mov dword ptr [esp+0xA0],edi
	call _ZtlSecureFuseHelper<unsigned char>::call
	mov ecx,dword ptr [esp+0x58]
	add esp,8
	push ebp
	mov byte ptr [esp+0x40],al
	mov eax,dword ptr [esp+0x30]
	lea edx,[esp+0x244]
	push edx
	mov edx,dword ptr [esp+0x44]
	push eax
	mov eax,dword ptr [esp+0x44]
	push ecx
	push ebp
	push esi
	push edx
	push eax
	lea ecx,[esp+0x164]
	call CSkill_HitAni::_ctor_0
	mov ecx,dword ptr [esp+0x34]
	mov eax,dword ptr [ecx+0xC0]
	mov dword ptr [esp+0xB30],1
	cmp eax,0x2F9F6E
	je Block96

 Block95:
	cmp eax,0x31260D
	jne Block101

 Block96:
	mov eax,dword ptr [esp+0x84]
	mov edx,dword ptr [esp+0x80]
	mov ecx,dword ptr [esp+0x88]
	mov dword ptr [esp+0x74],eax
	mov eax,dword ptr [esp+0x8C]
	mov dword ptr [esp+0x70],edx
	mov dword ptr [esp+0x7C],eax
	lea edx,[esp+0x3C]
	mov dword ptr [esp+0x78],ecx
	mov ecx,dword ptr [esp+0x38]
	add eax,0x64
	push edx
	mov dword ptr [esp+0x80],eax
	call SKILLENTRY::GetTileUOL
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xB30],2
	cmp eax,ebp
	je Block98

 Block97:
	mov eax,dword ptr [eax]
	jmp Block99

 Block98:
	xor eax,eax

 Block99:
	push ebp
	push 0xFF
	push 0x80
	push 0x1F4
	add edi,0xC8
	push edi
	lea ecx,[esp+0x84]
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::RegisterFootHoldAnimation
	mov ecx,dword ptr [esp+0x3C]
	mov byte ptr [esp+0xB30],1
	cmp ecx,ebp
	je Block101

 Block100:
	call _xbstr_t::Data_t::Release

 Block101:
	cmp dword ptr [esp+0x2C],ebp
	mov dword ptr [esp+0x28],ebp
	jle Block150

 Block102:
	jmp Block104

 Block104:
	mov ebp,dword ptr [esp+0x28]
	mov edx,ebp
	imul edx,0x98
	push 0x98
	lea esi,[esp+edx+0x244]
	push 0
	push esi
	call _memset
	mov ecx,dword ptr [esp+ebp*4+0x114]
	add esp,0xC
	push 0
	mov dword ptr [esi],ecx
	call CMob::GetCurrentAction
	mov edi,dword ptr [esi]
	push 0
	mov ecx,edi
	mov dword ptr [esi+8],eax
	call CMob::GetCurrentAction
	mov ecx,dword ptr [edi+0x400]
	lea edx,[eax+eax*4]
	mov eax,dword ptr [edi+0x458]
	push ecx
	lea ecx,[eax+edx*4]
	call ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>::IndexOf
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [ecx+0xC0]
	push edx
	mov dword ptr [esi+0xC],eax
	call is_summon_octopus_skill
	add esp,4
	test eax,eax
	je Block125

 Block105:
	cmp dword ptr [esp+0x30],0
	je Block107

 Block106:
	mov eax,dword ptr [esp+0x40]
	mov ebp,dword ptr [eax+0x28]
	jmp Block108

 Block107:
	mov ecx,dword ptr [esp+0x40]
	mov ebp,dword ptr [ecx+0x28]
	neg ebp

 Block108:
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x100]
	push eax
	mov ecx,ebx
	call edx
	mov edi,dword ptr [eax]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0xF0]
	push ecx
	add edi,ebp
	mov ecx,ebx
	mov dword ptr [esp+0xA0],edi
	call edx
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x40]
	add ebp,dword ptr [eax+0x2C]
	cmp dword ptr [esp+0x30],0
	je Block110

 Block109:
	mov ecx,edi
	sub ecx,dword ptr [esp+0x48]
	jmp Block111

 Block110:
	mov ecx,dword ptr [esp+0x48]
	sub ecx,edi

 Block111:
	mov eax,dword ptr [esp+0x4C]
	sub eax,ebp
	mov edx,eax
	imul edx,eax
	mov eax,ecx
	imul eax,ecx
	add edx,eax
	mov dword ptr [esp+0x44],edx
	fild dword ptr [esp+0x44]
	call __CIsqrt
	fmul qword ptr [__real_4082c00000000000]
	mov edi,dword ptr [esp+0x40]
	fidiv dword ptr [edi+0x78]
	call __ftol2_sse
	mov edx,dword ptr [esp+0xB38]
	mov ecx,eax
	mov eax,dword ptr [edi+0x64]
	lea edi,[eax+ecx]
	add edi,dword ptr [esp+0xB38]
	mov dword ptr [esp+0x44],ecx
	add edx,eax
	push 0x40
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0xEC],edx
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0xA4],eax
	test eax,eax
	je Block116

 Block112:
	mov eax,dword ptr [esp+0xDC]
	mov edx,dword ptr [esp+0x40]
	push eax
	mov eax,dword ptr [edx+0x70]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x68],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block114

 Block113:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block114:
	mov eax,dword ptr [esp+0x3C]
	mov ecx,dword ptr [eax+0xF8]
	mov byte ptr [esp+0xB38],4
	test ecx,ecx
	je Block154

 Block115:
	call IWzGr2DLayer::Getz
	mov edx,dword ptr [esp+0x50]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x5C]
	mov eax,esp
	mov dword ptr [esp+0x70],esp
	push ecx
	mov ecx,dword ptr [esp+0xFC]
	push edx
	mov dword ptr [eax],0
	mov eax,dword ptr [esp+0xB4]
	push ebp
	push eax
	push edi
	push ecx
	mov ecx,dword ptr [esp+0xCC]
	mov byte ptr [esp+0xB58],3
	call CSummoned::SummonedBullet::_ctor_0
	mov edi,eax
	jmp Block117

 Block116:
	xor edi,edi

 Block117:
	mov dword ptr [esp+0x6C],edi
	test edi,edi
	je Block119

 Block118:
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block119:
	sub esp,8
	mov eax,esp
	mov byte ptr [esp+0xB38],5
	mov dword ptr [esp+0x68],esp
	mov dword ptr [eax+4],edi
	test edi,edi
	je Block121

 Block120:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block121:
	mov ebp,dword ptr [esp+0x3C]
	lea ecx,[ebp+0x9C]
	call BulletContainer<CSummoned::SummonedBullet>::Insert
	mov ecx,dword ptr [esp+0x48]
	mov edx,dword ptr [esp+0x4C]
	mov eax,dword ptr [esp+0x98]
	mov dword ptr [esi+0x90],ecx
	mov dword ptr [esi+0x94],edx
	mov dword ptr [esi+0x10],eax
	mov byte ptr [esp+0xB30],1
	test edi,edi
	je Block133

 Block122:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block124

 Block123:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block124:
	mov dword ptr [esp+0x6C],0
	jmp Block133

 Block125:
	test ebp,ebp
	jne Block128

 Block126:
	cmp dword ptr [esp+0x90],ebp
	je Block128

 Block127:
	lea eax,[esp+0x48]
	jmp Block129

 Block128:
	mov ecx,dword ptr [esp+0x80]
	mov edx,dword ptr [esp+0x84]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x98]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x9C]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esi]
	mov dword ptr [eax+0xC],edx
	lea eax,[esp+0x80]
	push eax
	call CMob::GetHitPoint

 Block129:
	cmp dword ptr [esp+0x90],0
	mov ecx,dword ptr [eax]
	mov dword ptr [esi+0x90],ecx
	mov edx,dword ptr [eax+4]
	mov dword ptr [esi+0x94],edx
	je Block131

 Block130:
	mov eax,dword ptr [esp+0x44]
	jmp Block132

 Block131:
	mov eax,ebp
	imul eax,0x32

 Block132:
	mov ecx,dword ptr [esp+0x98]
	mov ebp,dword ptr [esp+0x34]
	add eax,ecx
	mov dword ptr [esi+0x10],eax

 Block133:
	mov edi,dword ptr [esi]
	mov edx,dword ptr [edi+0x174]
	cmp dword ptr [edx+0x220],0
	jle Block135

 Block134:
	call _rand
	mov ecx,dword ptr [edi+0x174]
	cdq
	idiv dword ptr [ecx+0x220]
	add edx,7
	jmp Block136

 Block135:
	or edx,0xFFFFFFFF

 Block136:
	mov eax,dword ptr [ebp+0xE0]
	mov ecx,dword ptr [ebp+0xC0]
	mov edi,dword ptr [esi]
	mov dword ptr [esi+4],edx
	mov edx,dword ptr [esp+0x58]
	push edx
	mov edx,dword ptr [esp+0xB40]
	push eax
	push ecx
	push edx
	add edi,0x188
	call get_summoned_attack_damage
	add esp,0x10
	cmp dword ptr [esp+0xD8],0
	je Block138

 Block137:
	mov ebp,dword ptr [esp+0x94]
	mov ecx,dword ptr [ebp+0x3FD4]
	push ecx
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edx,dword ptr [ecx+0x58C]
	push edx
	push eax
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x74],esp
	push eax
	call CUserLocal::GetPassiveSkillData
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0x170]
	push ecx
	add eax,0x168
	push eax
	mov byte ptr [esp+0xB4C],6
	call _ZtlSecureFuseHelper<unsigned long>::call
	mov edx,dword ptr [esp+0x50]
	mov ecx,dword ptr [edx+0xC8]
	mov edx,dword ptr [esp+0x54]
	add esp,8
	push ecx
	push edx
	lea ecx,[ebp+0x2148]
	push ecx
	lea ecx,[ebp+0x20D0]
	push ecx
	mov ecx,dword ptr [esp+0x7C]
	push ecx
	push edi
	push eax
	lea ecx,[ebp+0x3C78]
	mov byte ptr [esp+0xB60],1
	call CalcDamage::MDamage_2
	mov ebp,dword ptr [esp+0x34]
	jmp Block139

 Block138:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edx,dword ptr [ecx+0x58C]
	push 0
	push edx
	push eax
	sub esp,8
	mov edx,esp
	mov dword ptr [esp+0x74],esp
	push edx
	call CUserLocal::GetPassiveSkillData
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0x170]
	push ecx
	add eax,0x168
	push eax
	mov byte ptr [esp+0xB4C],7
	call _ZtlSecureFuseHelper<unsigned long>::call
	mov edx,dword ptr [ebp+0xC8]
	mov ecx,dword ptr [esp+0x54]
	add esp,8
	push edx
	push ecx
	mov ecx,dword ptr [esp+0xB0]
	lea edx,[ecx+0x2148]
	push edx
	lea edx,[ecx+0x20D0]
	push edx
	mov edx,dword ptr [esp+0x7C]
	push edx
	push edi
	push eax
	add ecx,0x3C78
	mov byte ptr [esp+0xB60],1
	call CalcDamage::PDamage_1

 Block139:
	mov dword ptr [esi+0x18],eax
	mov eax,dword ptr [esi]
	mov eax,dword ptr [eax+0x174]
	mov ecx,dword ptr [eax+0x1B8]
	push ecx
	add eax,0x1B0
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block142

 Block140:
	cmp dword ptr [esi+0x18],0
	jle Block142

 Block141:
	mov dword ptr [esi+0x18],eax

 Block142:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [ebp+0xC0]
	mov ecx,dword ptr [edx+0x174]
	push eax
	call CMobTemplate::IsVulnerableTo
	test eax,eax
	jne Block144

 Block143:
	mov dword ptr [esi+0x18],eax

 Block144:
	mov ecx,dword ptr [esi+0x18]
	mov edx,dword ptr [esi]
	mov dword ptr [esp+0x3C],ecx
	mov eax,dword ptr [edx+0x174]
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	push 0
	lea edx,[esp+0x48]
	push edx
	push 1
	push eax
	mov eax,dword ptr [esp+0x70]
	push eax
	call CItemInfo::CheckDamageModifiedByEquipUpgrade
	add esp,0x1C
	test eax,eax
	je Block146

 Block145:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr [esi+0x18],ecx

 Block146:
	mov edi,dword ptr [esp+0x28]
	push 0
	push 0
	push 0
	push 0
	push 1
	push 1
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x7C],esp
	push edi
	push edx
	lea ecx,[esp+0x168]
	call CSkill_HitAni::operator()
	mov ecx,dword ptr [esi+0x94]
	mov edx,dword ptr [esi+0x90]
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [eax+0x20B4]
	push ecx
	mov ecx,dword ptr [esi+0x18]
	push edx
	mov edx,dword ptr [esp+0x54]
	push 0
	push 0
	push ecx
	mov ecx,dword ptr [esi+4]
	push edx
	mov edx,dword ptr [esi+0x10]
	add edx,dword ptr [esp+0xB6C]
	push ecx
	mov ecx,dword ptr [ebp+0xC0]
	push edx
	push ecx
	mov ecx,dword ptr [esi]
	push eax
	call CMob::AddDamageInfo
	mov ecx,dword ptr [TSingleton<CBattleRecordMan>::ms_pInstance]
	test ecx,ecx
	je Block148

 Block147:
	mov edx,dword ptr [esi+0x18]
	push 1
	push 0
	push edx
	call CBattleRecordMan::SetBattleDamageInfo

 Block148:
	inc edi
	cmp edi,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x28],edi
	jl Block104

 Block149:
	xor ebp,ebp

 Block150:
	mov edi,dword ptr [esp+0x34]
	jmp Block152

 Block152:
	push ebp
	lea eax,[esp+0x58]
	push eax
	lea ecx,[esp+0xCC]
	push ecx
	mov dword ptr [esp+0xE0],0x19DEA1BD
	mov dword ptr [esp+0x60],0xBE02FF0A
	call DR_check
	add esp,0xC
	push 0xD0
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x60],eax
	call COutPacket::_ctor_1
	mov edx,dword ptr [edi+0xB4]
	push edx
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xB34],8
	call COutPacket::Encode4
	mov eax,dword ptr [esp+0xC4]
	not eax
	push eax
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	mov ecx,dword ptr [esp+0xC8]
	not ecx
	push ecx
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	call get_update_time
	push eax
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	mov edx,dword ptr [esp+0xCC]
	not edx
	push edx
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	mov eax,dword ptr [esp+0xD0]
	not eax
	push eax
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	mov cl,byte ptr [esp+0x50]
	mov al,byte ptr [esp+0x30]
	and cl,0x7F
	shl al,7
	or cl,al
	movzx edx,cl
	push edx
	lea ecx,[esp+0x1C]
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0xC4]
	mov esi,eax
	mov ecx,offset _D_G_RAND
	cmp eax,ebp
	je Block154

 Block153:
	call CRand32::Random
	xor edx,edx
	div esi
	mov esi,edx
	jmp Block155

 Block154:
	call CRand32::Random
	mov esi,eax

 Block155:
	push esi
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	push ebp
	push ebp
	push ebp
	push esi
	lea eax,[esp+0x6C]
	push 4
	push eax
	call CCrc32::GetCrc32
	add esp,0x18
	push eax
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	mov esi,dword ptr [esp+0x2C]
	push esi
	lea ecx,[esp+0x1C]
	call COutPacket::Encode1
	jmp Block157

 Block157:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edx,dword ptr [ecx+4]
	mov edx,dword ptr [edx+0x10]
	add ecx,4
	lea eax,[esp+0x70]
	push eax
	call edx
	movzx eax,word ptr [eax]
	push eax
	lea ecx,[esp+0x1C]
	call COutPacket::Encode2
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edx,dword ptr [ecx+4]
	mov edx,dword ptr [edx+0x10]
	add ecx,4
	lea eax,[esp+0x70]
	push eax
	call edx
	movzx eax,word ptr [eax+4]
	push eax
	lea ecx,[esp+0x1C]
	call COutPacket::Encode2
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x70]
	push eax
	mov ecx,ebx
	call edx
	movzx eax,word ptr [eax]
	push eax
	lea ecx,[esp+0x1C]
	call COutPacket::Encode2
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x70]
	push eax
	mov ecx,ebx
	call edx
	movzx eax,word ptr [eax+4]
	push eax
	lea ecx,[esp+0x1C]
	call COutPacket::Encode2
	push ebp
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	cmp esi,ebp
	mov dword ptr [esp+0x28],ebp
	jle Block276

 Block158:
	mov edi,dword ptr [esp+0x28]
	imul edi,0x98
	mov eax,dword ptr [esp+edi+0x240]
	mov ecx,dword ptr [eax+0x170]
	lea edi,[esp+edi+0x240]
	push ecx
	add eax,0x168
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	mov esi,eax
	mov eax,dword ptr [esp+0x24]
	add esp,8
	cmp eax,ebp
	jne Block160

 Block159:
	xor edx,edx
	jmp Block161

 Block160:
	mov edx,dword ptr [eax-4]

 Block161:
	mov ecx,dword ptr [esp+0x20]
	add ecx,4
	cmp ecx,edx
	jbe Block167

 Block162:
	cmp eax,ebp
	jne Block164

 Block163:
	xor eax,eax
	jmp Block165

 Block164:
	mov eax,dword ptr [eax-4]
	lea ebx,[ebx]

 Block165:
	add eax,eax
	cmp ecx,eax
	ja Block165

 Block166:
	lea edx,[esp+0x17]
	push edx
	push ebp
	push eax
	lea ecx,[esp+0x28]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x1C]

 Block167:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [eax+ecx],esi
	mov eax,dword ptr [edi]
	add dword ptr [esp+0x20],4
	cmp dword ptr [eax+0x28C],ebp
	je Block170

 Block168:
	mov ecx,dword ptr [eax+0x178]
	cmp ecx,ebp
	je Block170

 Block169:
	mov eax,ecx
	jmp Block171

 Block170:
	mov eax,dword ptr [eax+0x174]

 Block171:
	mov edx,dword ptr [eax+0x14]
	push edx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	mov esi,eax
	mov eax,dword ptr [esp+0x24]
	add esp,8
	cmp eax,ebp
	jne Block173

 Block172:
	xor edx,edx
	jmp Block174

 Block173:
	mov edx,dword ptr [eax-4]

 Block174:
	mov ecx,dword ptr [esp+0x20]
	add ecx,4
	cmp ecx,edx
	jbe Block181

 Block175:
	cmp eax,ebp
	jne Block177

 Block176:
	xor eax,eax
	jmp Block179

 Block177:
	mov eax,dword ptr [eax-4]
	jmp Block179

 Block179:
	add eax,eax
	cmp ecx,eax
	ja Block179

 Block180:
	lea ecx,[esp+0x17]
	push ecx
	push ebp
	push eax
	lea ecx,[esp+0x28]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x1C]

 Block181:
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [eax+edx],esi
	mov eax,dword ptr [esp+0x1C]
	add dword ptr [esp+0x20],4
	mov bl,byte ptr [edi+4]
	cmp eax,ebp
	jne Block183

 Block182:
	xor edx,edx
	jmp Block184

 Block183:
	mov edx,dword ptr [eax-4]

 Block184:
	mov ecx,dword ptr [esp+0x20]
	inc ecx
	cmp ecx,edx
	jbe Block190

 Block185:
	cmp eax,ebp
	jne Block187

 Block186:
	xor eax,eax
	jmp Block188

 Block187:
	mov eax,dword ptr [eax-4]
	lea esp,[esp]

 Block188:
	add eax,eax
	cmp ecx,eax
	ja Block188

 Block189:
	lea ecx,[esp+0x17]
	push ecx
	push ebp
	push eax
	lea ecx,[esp+0x28]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x1C]

 Block190:
	mov edx,dword ptr [esp+0x20]
	mov byte ptr [eax+edx],bl
	mov eax,dword ptr [edi]
	mov esi,1
	add dword ptr [esp+0x20],esi
	mov ecx,dword ptr [eax+0x174]
	cmp dword ptr [ecx+0x1A0],ebp
	je Block192

 Block191:
	mov eax,esi
	jmp Block193

 Block192:
	mov edx,dword ptr [eax+0x3D8]
	push edx
	add eax,0x3D0
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	and eax,esi

 Block193:
	mov bl,byte ptr [edi+8]
	shl al,7
	and bl,0x7F
	or bl,al
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	jne Block195

 Block194:
	xor edx,edx
	jmp Block196

 Block195:
	mov edx,dword ptr [eax-4]

 Block196:
	mov ecx,dword ptr [esp+0x20]
	inc ecx
	cmp ecx,edx
	jbe Block202

 Block197:
	cmp eax,ebp
	jne Block199

 Block198:
	xor eax,eax
	jmp Block200

 Block199:
	mov eax,dword ptr [eax-4]

 Block200:
	add eax,eax
	cmp ecx,eax
	ja Block200

 Block201:
	lea ecx,[esp+0x17]
	push ecx
	push ebp
	push eax
	lea ecx,[esp+0x28]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x1C]

 Block202:
	mov edx,dword ptr [esp+0x20]
	mov byte ptr [eax+edx],bl
	mov eax,dword ptr [esp+0x1C]
	add dword ptr [esp+0x20],esi
	mov bl,byte ptr [edi+0xC]
	cmp eax,ebp
	jne Block204

 Block203:
	xor edx,edx
	jmp Block205

 Block204:
	mov edx,dword ptr [eax-4]

 Block205:
	mov ecx,dword ptr [esp+0x20]
	inc ecx
	cmp ecx,edx
	jbe Block211

 Block206:
	cmp eax,ebp
	jne Block208

 Block207:
	xor eax,eax
	jmp Block209

 Block208:
	mov eax,dword ptr [eax-4]
	mov edi,edi

 Block209:
	add eax,eax
	cmp ecx,eax
	ja Block209

 Block210:
	lea ecx,[esp+0x17]
	push ecx
	push ebp
	push eax
	lea ecx,[esp+0x28]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x1C]

 Block211:
	mov edx,dword ptr [esp+0x20]
	mov byte ptr [eax+edx],bl
	mov eax,dword ptr [edi]
	add dword ptr [esp+0x20],esi
	mov ebx,dword ptr [eax+0x4EC]
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	jne Block213

 Block212:
	xor edx,edx
	jmp Block214

 Block213:
	mov edx,dword ptr [eax-4]

 Block214:
	mov ecx,dword ptr [esp+0x20]
	inc ecx
	cmp ecx,edx
	jbe Block220

 Block215:
	cmp eax,ebp
	jne Block217

 Block216:
	xor eax,eax
	jmp Block218

 Block217:
	mov eax,dword ptr [eax-4]

 Block218:
	add eax,eax
	cmp ecx,eax
	ja Block218

 Block219:
	lea ecx,[esp+0x17]
	push ecx
	push ebp
	push eax
	lea ecx,[esp+0x28]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x1C]

 Block220:
	mov edx,dword ptr [esp+0x20]
	mov byte ptr [eax+edx],bl
	mov eax,dword ptr [edi]
	inc dword ptr [esp+0x20]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x10]
	lea edx,[esp+0x70]
	push edx
	call eax
	movzx esi,word ptr [eax]
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	jne Block222

 Block221:
	xor edx,edx
	jmp Block223

 Block222:
	mov edx,dword ptr [eax-4]

 Block223:
	mov ecx,dword ptr [esp+0x20]
	add ecx,2
	cmp ecx,edx
	jbe Block229

 Block224:
	cmp eax,ebp
	jne Block226

 Block225:
	xor eax,eax
	jmp Block227

 Block226:
	mov eax,dword ptr [eax-4]
	mov edi,edi

 Block227:
	add eax,eax
	cmp ecx,eax
	ja Block227

 Block228:
	lea ecx,[esp+0x17]
	push ecx
	push ebp
	push eax
	lea ecx,[esp+0x28]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x1C]

 Block229:
	mov edx,dword ptr [esp+0x20]
	mov word ptr [eax+edx],si
	mov eax,dword ptr [edi]
	lea ecx,[eax+4]
	mov ebx,2
	add dword ptr [esp+0x20],ebx
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x10]
	lea edx,[esp+0xF0]
	push edx
	call eax
	movzx esi,word ptr [eax+4]
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	jne Block231

 Block230:
	xor edx,edx
	jmp Block232

 Block231:
	mov edx,dword ptr [eax-4]

 Block232:
	mov ecx,dword ptr [esp+0x20]
	add ecx,ebx
	cmp ecx,edx
	jbe Block238

 Block233:
	cmp eax,ebp
	jne Block235

 Block234:
	xor eax,eax
	jmp Block236

 Block235:
	mov eax,dword ptr [eax-4]

 Block236:
	add eax,eax
	cmp ecx,eax
	ja Block236

 Block237:
	lea ecx,[esp+0x17]
	push ecx
	push ebp
	push eax
	lea ecx,[esp+0x28]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x1C]

 Block238:
	mov edx,dword ptr [esp+0x20]
	mov word ptr [eax+edx],si
	mov eax,dword ptr [edi]
	add dword ptr [esp+0x20],ebx
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x14]
	lea edx,[esp+0x100]
	push edx
	call eax
	movzx esi,word ptr [eax]
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	jne Block240

 Block239:
	xor edx,edx
	jmp Block241

 Block240:
	mov edx,dword ptr [eax-4]

 Block241:
	mov ecx,dword ptr [esp+0x20]
	add ecx,ebx
	cmp ecx,edx
	jbe Block247

 Block242:
	cmp eax,ebp
	jne Block244

 Block243:
	xor eax,eax
	jmp Block245

 Block244:
	mov eax,dword ptr [eax-4]

 Block245:
	add eax,eax
	cmp ecx,eax
	ja Block245

 Block246:
	lea ecx,[esp+0x17]
	push ecx
	push ebp
	push eax
	lea ecx,[esp+0x28]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x1C]

 Block247:
	mov edx,dword ptr [esp+0x20]
	mov word ptr [eax+edx],si
	mov eax,dword ptr [edi]
	add dword ptr [esp+0x20],ebx
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x14]
	lea edx,[esp+0x68]
	push edx
	call eax
	movzx esi,word ptr [eax+4]
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	jne Block249

 Block248:
	xor edx,edx
	jmp Block250

 Block249:
	mov edx,dword ptr [eax-4]

 Block250:
	mov ecx,dword ptr [esp+0x20]
	add ecx,ebx
	cmp ecx,edx
	jbe Block256

 Block251:
	cmp eax,ebp
	jne Block253

 Block252:
	xor eax,eax
	jmp Block254

 Block253:
	mov eax,dword ptr [eax-4]

 Block254:
	add eax,eax
	cmp ecx,eax
	ja Block254

 Block255:
	lea ecx,[esp+0x17]
	push ecx
	push ebp
	push eax
	lea ecx,[esp+0x28]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x1C]

 Block256:
	mov edx,dword ptr [esp+0x20]
	mov word ptr [eax+edx],si
	mov eax,dword ptr [esp+0x1C]
	add dword ptr [esp+0x20],ebx
	movzx esi,word ptr [edi+0x10]
	cmp eax,ebp
	jne Block258

 Block257:
	xor edx,edx
	jmp Block259

 Block258:
	mov edx,dword ptr [eax-4]

 Block259:
	mov ecx,dword ptr [esp+0x20]
	add ecx,ebx
	cmp ecx,edx
	jbe Block265

 Block260:
	cmp eax,ebp
	jne Block262

 Block261:
	xor eax,eax
	jmp Block263

 Block262:
	mov eax,dword ptr [eax-4]

 Block263:
	add eax,eax
	cmp ecx,eax
	ja Block263

 Block264:
	lea ecx,[esp+0x17]
	push ecx
	push ebp
	push eax
	lea ecx,[esp+0x28]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x1C]

 Block265:
	mov edx,dword ptr [esp+0x20]
	mov word ptr [eax+edx],si
	mov eax,dword ptr [esp+0x1C]
	add dword ptr [esp+0x20],ebx
	mov esi,dword ptr [edi+0x18]
	cmp eax,ebp
	jne Block267

 Block266:
	xor edx,edx
	jmp Block268

 Block267:
	mov edx,dword ptr [eax-4]

 Block268:
	mov ecx,dword ptr [esp+0x20]
	add ecx,4
	cmp ecx,edx
	jbe Block274

 Block269:
	cmp eax,ebp
	jne Block271

 Block270:
	xor eax,eax
	jmp Block272

 Block271:
	mov eax,dword ptr [eax-4]

 Block272:
	add eax,eax
	cmp ecx,eax
	ja Block272

 Block273:
	lea ecx,[esp+0x17]
	push ecx
	push ebp
	push eax
	lea ecx,[esp+0x28]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x1C]

 Block274:
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [eax+edx],esi
	mov eax,dword ptr [esp+0x28]
	add dword ptr [esp+0x20],4
	inc eax
	cmp eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x28],eax
	jl Block158

 Block275:
	mov edi,dword ptr [esp+0x34]

 Block276:
	mov ecx,dword ptr [esp+0x38]
	cmp ecx,ebp
	je Block278

 Block277:
	call SKILLENTRY::GetCrc
	mov esi,eax
	jmp Block279

 Block278:
	xor esi,esi

 Block279:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	jne Block281

 Block280:
	xor edx,edx
	jmp Block282

 Block281:
	mov edx,dword ptr [eax-4]

 Block282:
	mov ecx,dword ptr [esp+0x20]
	add ecx,4
	cmp ecx,edx
	jbe Block288

 Block283:
	cmp eax,ebp
	jne Block285

 Block284:
	xor eax,eax
	jmp Block286

 Block285:
	mov eax,dword ptr [eax-4]

 Block286:
	add eax,eax
	cmp ecx,eax
	ja Block286

 Block287:
	lea ecx,[esp+0x17]
	push ecx
	push ebp
	push eax
	lea ecx,[esp+0x28]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x1C]

 Block288:
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [eax+edx],esi
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	add dword ptr [esp+0x20],4
	lea eax,[esp+0x18]
	push eax
	call CClientSocket::SendPacket
	mov ecx,dword ptr [esp+0xB38]
	mov edx,dword ptr [esp+0x50]
	mov dword ptr [edi+0x134],ecx
	push edx
	mov ecx,edi
	call CSummoned::SetAttackAction
	mov eax,1
	mov dword ptr [edi+0x168],eax
	cmp dword ptr [esp+0xB3C],eax
	jne Block290

 Block289:
	mov ecx,edi
	mov dword ptr [edi+0x16C],eax
	call CSummoned::PreserveAction

 Block290:
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xB30],1
	call ZArray<unsigned char>::RemoveAll
	lea ecx,[esp+0x144]
	mov dword ptr [esp+0xB30],0xFFFFFFFF
	call CSkill_HitAni::~CSkill_HitAni

 Block291:
	mov ecx,dword ptr [esp+0xB28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xB20
	ret 8
}
}
// CSummoned::TryDoingTaslaCoilAttack
_SUB_EXCEPTION_HANDLER(352780)
__SUB_CLASS_THIS(00352780, __thiscall, 67264,  CSummoned, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_352780
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xA20
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xA34]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x68],ebx
	cmp dword ptr [ebx+0x1DC],1
	jne Block158

 Block1:
	cmp dword ptr [ebx+0x1E4],0
	je Block158

 Block2:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x74]
	push eax
	mov dword ptr [esp+0x4C],ecx
	call CWvsContext::GetCharacterData
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x38],ecx
	lea ecx,[esp+0x74]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x217C05A
	call CSkillInfo::GetSkill
	mov edx,dword ptr [ebx+0xC8]
	push edx
	mov ecx,eax
	mov dword ptr [esp+0x40],eax
	call SKILLENTRY::GetLevelData
	lea esi,[ebx+0x88]
	push 3
	mov ecx,esi
	mov ebp,eax
	call CSummonedBase::AIType2Action
	mov edi,6
	push 6
	mov ecx,esi
	sub edi,eax
	call CSummonedBase::Action2AIType
	mov ecx,dword ptr [ebx+0xC0]
	push eax
	mov eax,dword ptr [ebx+0xC8]
	push eax
	push edi
	push ecx
	lea edx,[esp+0x5C]
	push edx
	mov ecx,esi
	call CSummonedBase::LoadAttackInfo
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x4C]
	call ZRef<SummonedAttackInfo>::~ZRef<SummonedAttackInfo>
	test esi,esi
	je Block158

 Block3:
	mov eax,dword ptr [ebp+0x15C]
	push eax
	add ebp,0x154
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [ebx+0x104]
	push ecx
	lea edx,[ebx+0xFC]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,0x10
	and eax,1
	xor edi,edi
	push edi
	mov dword ptr [esp+0x70],eax
	mov eax,dword ptr [esi+0x1C]
	push edi
	push eax
	mov eax,dword ptr [ebx+0x1E4]
	lea ecx,[esp+0x98]
	push ecx
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [ecx+4],eax
	cmp eax,edi
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ecx,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	call CMobPool::FindHitMobInTriangle
	mov esi,eax
	mov dword ptr [esp+0x34],esi
	cmp esi,edi
	je Block158

 Block6:
	mov eax,dword ptr [esp+0x38]
	mov edx,dword ptr [eax+0x35]
	push edx
	add eax,0x33
	push eax
	call _ZtlSecureFuseHelper<unsigned char>::call
	mov ecx,dword ptr [ebx+0xC8]
	add esp,8
	push edi
	mov byte ptr [esp+0x30],al
	mov edx,dword ptr [esp+0x30]
	lea eax,[esp+0x150]
	push eax
	mov eax,dword ptr [esp+0x44]
	push esi
	push 6
	push edi
	push ecx
	push edx
	push eax
	lea ecx,[esp+0xE8]
	call CSkill_HitAni::_ctor_0
	cmp esi,edi
	mov dword ptr [esp+0xA3C],edi
	mov dword ptr [esp+0x2C],edi
	jle Block25

 Block7:
	lea esi,[esp+0x164]
	lea esp,[esp]

 Block8:
	push 0x98
	lea edi,[esi-0x18]
	push 0
	push edi
	call _memset
	mov ecx,dword ptr [esp+0x38]
	mov ecx,dword ptr [esp+ecx*4+0x98]
	add esp,0xC
	push 0
	mov dword ptr [edi],ecx
	call CMob::GetCurrentAction
	mov ebp,dword ptr [edi]
	push 0
	mov ecx,ebp
	mov dword ptr [esi-0x10],eax
	call CMob::GetCurrentAction
	mov edx,dword ptr [ebp+0x400]
	mov ecx,dword ptr [ebp+0x458]
	lea eax,[eax+eax*4]
	push edx
	lea ecx,[ecx+eax*4]
	call ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>::IndexOf
	mov ecx,dword ptr [edi]
	push 1
	lea edx,[esp+0x80]
	push edx
	mov dword ptr [esi-0xC],eax
	call CMob::GetBodyRect
	mov ecx,dword ptr [esp+0x7C]
	mov edx,dword ptr [esp+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x94]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x98]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [edi]
	mov dword ptr [eax+0xC],edx
	lea eax,[esp+0x50]
	push eax
	call CMob::GetHitPoint
	mov ecx,dword ptr [eax]
	mov dword ptr [esi+0x78],ecx
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [ebx+0xC8]
	push eax
	push 0x217C05A
	mov dword ptr [esi+0x7C],edx
	call get_summoned_attack_delay
	mov ebp,eax
	add esp,8
	sub ebp,0x12C
	je Block11

 Block9:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	div ebp
	test edx,edx
	jge Block12

 Block10:
	xor eax,eax
	jmp Block13

 Block11:
	xor edx,edx

 Block12:
	mov eax,edx

 Block13:
	mov ebp,dword ptr [edi]
	mov dword ptr [esi-8],eax
	mov ecx,dword ptr [ebp+0x174]
	cmp dword ptr [ecx+0x220],0
	jle Block15

 Block14:
	call _rand
	mov ecx,dword ptr [ebp+0x174]
	cdq
	idiv dword ptr [ecx+0x220]
	add edx,7
	jmp Block16

 Block15:
	or edx,0xFFFFFFFF

 Block16:
	mov eax,dword ptr [ebx+0xE0]
	mov ecx,dword ptr [ebx+0xC0]
	mov ebp,dword ptr [edi]
	mov dword ptr [esi-0x14],edx
	mov edx,dword ptr [esp+0x38]
	push edx
	push eax
	push ecx
	push 3
	add ebp,0x188
	call get_summoned_attack_damage
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edx,dword ptr [ecx+0x58C]
	add esp,0x10
	push 0
	push edx
	push eax
	sub esp,8
	mov edx,esp
	mov dword ptr [esp+0x60],esp
	push edx
	call CUserLocal::GetPassiveSkillData
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0x170]
	push ecx
	add eax,0x168
	push eax
	mov byte ptr [esp+0xA58],1
	call _ZtlSecureFuseHelper<unsigned long>::call
	mov edx,dword ptr [ebx+0xC8]
	mov ecx,dword ptr [esp+0x58]
	add esp,8
	push edx
	push ecx
	mov ecx,dword ptr [esp+0x64]
	lea edx,[ecx+0x2148]
	push edx
	lea edx,[ecx+0x20D0]
	push edx
	mov edx,dword ptr [esp+0x5C]
	push edx
	push ebp
	push eax
	add ecx,0x3C78
	mov byte ptr [esp+0xA6C],0
	call CalcDamage::PDamage_1
	mov dword ptr [esi],eax
	mov eax,dword ptr [edi]
	mov eax,dword ptr [eax+0x174]
	mov ecx,dword ptr [eax+0x1B8]
	push ecx
	add eax,0x1B0
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block19

 Block17:
	cmp dword ptr [esi],0
	jle Block19

 Block18:
	mov dword ptr [esi],eax

 Block19:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [ebx+0xC0]
	mov ecx,dword ptr [edx+0x174]
	push eax
	call CMobTemplate::IsVulnerableTo
	test eax,eax
	jne Block21

 Block20:
	mov dword ptr [esi],eax

 Block21:
	mov ebp,dword ptr [esp+0x2C]
	push 0
	push 0
	push 0
	push 0
	push 1
	push 1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x68],esp
	push ebp
	push ecx
	lea ecx,[esp+0xEC]
	call CSkill_HitAni::operator()
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x174]
	cmp dword ptr [edx+0x1A0],0
	mov byte ptr [esp+0xA58],2
	je Block23

 Block22:
	mov ecx,1
	jmp Block24

 Block23:
	mov ecx,dword ptr [eax+0x3D8]
	push ecx
	add eax,0x3D0
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	and eax,1
	mov ecx,eax

 Block24:
	mov edx,dword ptr [esp+0x64]
	mov eax,dword ptr [edx+0x20B4]
	mov edx,dword ptr [esi+0x7C]
	push edx
	mov edx,dword ptr [esi+0x78]
	push edx
	mov edx,dword ptr [esi]
	push 0
	push 0
	push edx
	xor edx,edx
	test ecx,ecx
	mov ecx,dword ptr [esi-0x14]
	sete dl
	push edx
	mov edx,dword ptr [esi-8]
	add edx,dword ptr [esp+0xA78]
	push ecx
	mov ecx,dword ptr [ebx+0xC0]
	push edx
	push ecx
	mov ecx,dword ptr [edi]
	push eax
	mov byte ptr [esp+0xA80],0
	call CMob::AddDamageInfo
	inc ebp
	add esi,0x98
	cmp ebp,dword ptr [esp+0x34]
	mov dword ptr [esp+0x2C],ebp
	jl Block8

 Block25:
	jmp Block27

 Block27:
	push 0
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x5C]
	push eax
	mov dword ptr [esp+0x70],0x19DEA1BD
	mov dword ptr [esp+0x3C],0xBE02FF0A
	call DR_check
	add esp,0xC
	push 0xD0
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x2C],eax
	call COutPacket::_ctor_1
	mov ecx,dword ptr [ebx+0xB4]
	push ecx
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xA40],3
	call COutPacket::Encode4
	mov edx,dword ptr [esp+0x54]
	not edx
	push edx
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	mov eax,dword ptr [esp+0x58]
	not eax
	push eax
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	call get_update_time
	push eax
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	mov ecx,dword ptr [esp+0x5C]
	not ecx
	push ecx
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	mov edx,dword ptr [esp+0x60]
	not edx
	push edx
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	mov al,byte ptr [esp+0x6C]
	shl al,7
	or al,6
	movzx eax,al
	push eax
	lea ecx,[esp+0x1C]
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x54]
	mov esi,eax
	mov ecx,offset _D_G_RAND
	test eax,eax
	je Block29

 Block28:
	call CRand32::Random
	xor edx,edx
	div esi
	mov esi,edx
	jmp Block30

 Block29:
	call CRand32::Random
	mov esi,eax

 Block30:
	push esi
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	push 0
	push 0
	push 0
	push esi
	lea ecx,[esp+0x38]
	push 4
	push ecx
	call CCrc32::GetCrc32
	add esp,0x18
	push eax
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	mov edi,dword ptr [esp+0x34]
	push edi
	lea ecx,[esp+0x1C]
	call COutPacket::Encode1
	jmp Block32

 Block32:
	cmp dword ptr [ebx+0x1EC],0
	je Block157

 Block33:
	xor esi,esi

 Block34:
	mov eax,dword ptr [ebx+0x1EC]
	mov edx,dword ptr [eax]
	mov eax,dword ptr [edx+esi]
	push eax
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	add esi,4
	cmp esi,0xC
	jl Block34

 Block35:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edx,dword ptr [ecx+4]
	mov edx,dword ptr [edx+0x10]
	add ecx,4
	lea eax,[esp+0x40]
	push eax
	call edx
	movzx eax,word ptr [eax]
	push eax
	lea ecx,[esp+0x1C]
	call COutPacket::Encode2
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edx,dword ptr [ecx+4]
	mov edx,dword ptr [edx+0x10]
	add ecx,4
	lea eax,[esp+0x40]
	push eax
	call edx
	movzx eax,word ptr [eax+4]
	push eax
	lea ecx,[esp+0x1C]
	call COutPacket::Encode2
	mov edx,dword ptr [ebx+4]
	mov edx,dword ptr [edx+0x10]
	lea esi,[ebx+4]
	lea eax,[esp+0x40]
	push eax
	mov ecx,esi
	call edx
	movzx eax,word ptr [eax]
	push eax
	lea ecx,[esp+0x1C]
	call COutPacket::Encode2
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0x40]
	push eax
	mov ecx,esi
	call edx
	movzx eax,word ptr [eax+4]
	push eax
	lea ecx,[esp+0x1C]
	call COutPacket::Encode2
	push 0
	lea ecx,[esp+0x1C]
	call COutPacket::Encode4
	xor ebp,ebp
	test edi,edi
	jle Block145

 Block36:
	lea esp,[esp]

 Block37:
	mov ecx,ebp
	imul ecx,0x98
	mov eax,dword ptr [esp+ecx+0x14C]
	mov edx,dword ptr [eax+0x170]
	lea edi,[esp+ecx+0x14C]
	push edx
	add eax,0x168
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	mov esi,eax
	mov eax,dword ptr [esp+0x24]
	add esp,8
	test eax,eax
	jne Block39

 Block38:
	xor edx,edx
	jmp Block40

 Block39:
	mov edx,dword ptr [eax-4]

 Block40:
	mov ecx,dword ptr [esp+0x20]
	add ecx,4
	cmp ecx,edx
	jbe Block45

 Block41:
	test eax,eax
	je Block43

 Block42:
	mov eax,dword ptr [eax-4]
	mov edi,edi

 Block43:
	add eax,eax
	cmp ecx,eax
	ja Block43

 Block44:
	lea ecx,[esp+0x17]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x28]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x1C]

 Block45:
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [eax+edx],esi
	mov eax,dword ptr [edi]
	add dword ptr [esp+0x20],4
	cmp dword ptr [eax+0x28C],0
	je Block48

 Block46:
	mov ecx,dword ptr [eax+0x178]
	test ecx,ecx
	je Block48

 Block47:
	mov eax,ecx
	jmp Block49

 Block48:
	mov eax,dword ptr [eax+0x174]

 Block49:
	mov ecx,dword ptr [eax+0x14]
	push ecx
	add eax,0xC
	push eax
	call _ZtlSecureFuseHelper<unsigned long>::call
	mov esi,eax
	mov eax,dword ptr [esp+0x24]
	add esp,8
	test eax,eax
	jne Block51

 Block50:
	xor edx,edx
	jmp Block52

 Block51:
	mov edx,dword ptr [eax-4]

 Block52:
	mov ecx,dword ptr [esp+0x20]
	add ecx,4
	cmp ecx,edx
	jbe Block57

 Block53:
	test eax,eax
	je Block55

 Block54:
	mov eax,dword ptr [eax-4]
	lea esp,[esp]

 Block55:
	add eax,eax
	cmp ecx,eax
	ja Block55

 Block56:
	lea edx,[esp+0x17]
	push edx
	push 0
	push eax
	lea ecx,[esp+0x28]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x1C]

 Block57:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [eax+ecx],esi
	mov eax,dword ptr [esp+0x1C]
	add dword ptr [esp+0x20],4
	mov bl,byte ptr [edi+4]
	test eax,eax
	jne Block59

 Block58:
	xor edx,edx
	jmp Block60

 Block59:
	mov edx,dword ptr [eax-4]

 Block60:
	mov ecx,dword ptr [esp+0x20]
	inc ecx
	cmp ecx,edx
	jbe Block65

 Block61:
	test eax,eax
	je Block63

 Block62:
	mov eax,dword ptr [eax-4]
	lea esp,[esp]

 Block63:
	add eax,eax
	cmp ecx,eax
	ja Block63

 Block64:
	lea edx,[esp+0x17]
	push edx
	push 0
	push eax
	lea ecx,[esp+0x28]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x1C]

 Block65:
	mov ecx,dword ptr [esp+0x20]
	mov byte ptr [eax+ecx],bl
	inc dword ptr [esp+0x20]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x174]
	cmp dword ptr [edx+0x1A0],0
	je Block67

 Block66:
	mov eax,1
	jmp Block68

 Block67:
	mov ecx,dword ptr [eax+0x3D8]
	push ecx
	add eax,0x3D0
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	and eax,1

 Block68:
	mov bl,byte ptr [edi+8]
	shl al,7
	and bl,0x7F
	or bl,al
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	jne Block70

 Block69:
	xor edx,edx
	jmp Block71

 Block70:
	mov edx,dword ptr [eax-4]

 Block71:
	mov ecx,dword ptr [esp+0x20]
	inc ecx
	cmp ecx,edx
	jbe Block76

 Block72:
	test eax,eax
	je Block74

 Block73:
	mov eax,dword ptr [eax-4]

 Block74:
	add eax,eax
	cmp ecx,eax
	ja Block74

 Block75:
	lea edx,[esp+0x17]
	push edx
	push 0
	push eax
	lea ecx,[esp+0x28]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x1C]

 Block76:
	mov ecx,dword ptr [esp+0x20]
	mov byte ptr [eax+ecx],bl
	mov eax,dword ptr [esp+0x1C]
	mov bl,byte ptr [edi+0xC]
	mov esi,1
	add dword ptr [esp+0x20],esi
	test eax,eax
	jne Block78

 Block77:
	xor edx,edx
	jmp Block79

 Block78:
	mov edx,dword ptr [eax-4]

 Block79:
	mov ecx,dword ptr [esp+0x20]
	inc ecx
	cmp ecx,edx
	jbe Block84

 Block80:
	test eax,eax
	je Block82

 Block81:
	mov eax,dword ptr [eax-4]
	lea ecx,[ecx]

 Block82:
	add eax,eax
	cmp ecx,eax
	ja Block82

 Block83:
	lea edx,[esp+0x17]
	push edx
	push 0
	push eax
	lea ecx,[esp+0x28]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x1C]

 Block84:
	mov ecx,dword ptr [esp+0x20]
	mov byte ptr [eax+ecx],bl
	add dword ptr [esp+0x20],esi
	mov eax,dword ptr [esp+0x1C]
	mov edx,dword ptr [edi]
	mov ebx,dword ptr [edx+0x4EC]
	test eax,eax
	jne Block86

 Block85:
	xor edx,edx
	jmp Block87

 Block86:
	mov edx,dword ptr [eax-4]

 Block87:
	mov ecx,dword ptr [esp+0x20]
	inc ecx
	cmp ecx,edx
	jbe Block92

 Block88:
	test eax,eax
	je Block90

 Block89:
	mov eax,dword ptr [eax-4]
	lea ecx,[ecx]

 Block90:
	add eax,eax
	cmp ecx,eax
	ja Block90

 Block91:
	lea ecx,[esp+0x17]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x28]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x1C]

 Block92:
	mov edx,dword ptr [esp+0x20]
	mov byte ptr [eax+edx],bl
	mov eax,dword ptr [edi]
	inc dword ptr [esp+0x20]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x10]
	lea edx,[esp+0x40]
	push edx
	call eax
	movzx esi,word ptr [eax]
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	jne Block94

 Block93:
	xor edx,edx
	jmp Block95

 Block94:
	mov edx,dword ptr [eax-4]

 Block95:
	mov ecx,dword ptr [esp+0x20]
	add ecx,2
	cmp ecx,edx
	jbe Block101

 Block96:
	test eax,eax
	je Block99

 Block97:
	mov eax,dword ptr [eax-4]
	jmp Block99

 Block99:
	add eax,eax
	cmp ecx,eax
	ja Block99

 Block100:
	lea ecx,[esp+0x17]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x28]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x1C]

 Block101:
	mov edx,dword ptr [esp+0x20]
	mov word ptr [eax+edx],si
	mov ecx,dword ptr [edi]
	mov ebx,2
	add dword ptr [esp+0x20],ebx
	mov eax,dword ptr [ecx+4]
	mov eax,dword ptr [eax+0x10]
	add ecx,4
	lea edx,[esp+0x74]
	push edx
	call eax
	movzx esi,word ptr [eax+4]
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	jne Block103

 Block102:
	xor edx,edx
	jmp Block104

 Block103:
	mov edx,dword ptr [eax-4]

 Block104:
	mov ecx,dword ptr [esp+0x20]
	add ecx,ebx
	cmp ecx,edx
	jbe Block109

 Block105:
	test eax,eax
	je Block107

 Block106:
	mov eax,dword ptr [eax-4]

 Block107:
	add eax,eax
	cmp ecx,eax
	ja Block107

 Block108:
	lea ecx,[esp+0x17]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x28]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x1C]

 Block109:
	mov edx,dword ptr [esp+0x20]
	mov word ptr [eax+edx],si
	mov eax,dword ptr [edi]
	add dword ptr [esp+0x20],ebx
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x14]
	lea edx,[esp+0x4C]
	push edx
	call eax
	movzx esi,word ptr [eax]
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	jne Block111

 Block110:
	xor edx,edx
	jmp Block112

 Block111:
	mov edx,dword ptr [eax-4]

 Block112:
	mov ecx,dword ptr [esp+0x20]
	add ecx,ebx
	cmp ecx,edx
	jbe Block117

 Block113:
	test eax,eax
	je Block115

 Block114:
	mov eax,dword ptr [eax-4]
	lea ecx,[ecx]

 Block115:
	add eax,eax
	cmp ecx,eax
	ja Block115

 Block116:
	lea ecx,[esp+0x17]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x28]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x1C]

 Block117:
	mov edx,dword ptr [esp+0x20]
	mov word ptr [eax+edx],si
	mov ecx,dword ptr [edi]
	add dword ptr [esp+0x20],ebx
	mov eax,dword ptr [ecx+4]
	mov eax,dword ptr [eax+0x14]
	add ecx,4
	lea edx,[esp+0x6C]
	push edx
	call eax
	movzx esi,word ptr [eax+4]
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	jne Block119

 Block118:
	xor edx,edx
	jmp Block120

 Block119:
	mov edx,dword ptr [eax-4]

 Block120:
	mov ecx,dword ptr [esp+0x20]
	add ecx,ebx
	cmp ecx,edx
	jbe Block125

 Block121:
	test eax,eax
	je Block123

 Block122:
	mov eax,dword ptr [eax-4]
	lea ecx,[ecx]

 Block123:
	add eax,eax
	cmp ecx,eax
	ja Block123

 Block124:
	lea ecx,[esp+0x17]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x28]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x1C]

 Block125:
	mov edx,dword ptr [esp+0x20]
	mov word ptr [eax+edx],si
	mov eax,dword ptr [esp+0x1C]
	add dword ptr [esp+0x20],ebx
	movzx esi,word ptr [edi+0x10]
	test eax,eax
	jne Block127

 Block126:
	xor edx,edx
	jmp Block128

 Block127:
	mov edx,dword ptr [eax-4]

 Block128:
	mov ecx,dword ptr [esp+0x20]
	add ecx,ebx
	cmp ecx,edx
	jbe Block134

 Block129:
	test eax,eax
	je Block132

 Block130:
	mov eax,dword ptr [eax-4]
	jmp Block132

 Block132:
	add eax,eax
	cmp ecx,eax
	ja Block132

 Block133:
	lea ecx,[esp+0x17]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x28]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x1C]

 Block134:
	mov edx,dword ptr [esp+0x20]
	mov word ptr [eax+edx],si
	mov eax,dword ptr [esp+0x1C]
	add dword ptr [esp+0x20],ebx
	mov esi,dword ptr [edi+0x18]
	test eax,eax
	jne Block136

 Block135:
	xor edx,edx
	jmp Block137

 Block136:
	mov edx,dword ptr [eax-4]

 Block137:
	mov ecx,dword ptr [esp+0x20]
	add ecx,4
	cmp ecx,edx
	jbe Block143

 Block138:
	test eax,eax
	je Block141

 Block139:
	mov eax,dword ptr [eax-4]
	jmp Block141

 Block141:
	add eax,eax
	cmp ecx,eax
	ja Block141

 Block142:
	lea ecx,[esp+0x17]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x28]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x1C]

 Block143:
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [eax+edx],esi
	add dword ptr [esp+0x20],4
	inc ebp
	cmp ebp,dword ptr [esp+0x34]
	jl Block37

 Block144:
	mov ebx,dword ptr [esp+0x68]

 Block145:
	mov ecx,dword ptr [esp+0x3C]
	test ecx,ecx
	je Block147

 Block146:
	call SKILLENTRY::GetCrc
	mov esi,eax
	jmp Block148

 Block147:
	xor esi,esi

 Block148:
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	jne Block150

 Block149:
	xor edx,edx
	jmp Block151

 Block150:
	mov edx,dword ptr [eax-4]

 Block151:
	mov ecx,dword ptr [esp+0x20]
	add ecx,4
	cmp ecx,edx
	jbe Block156

 Block152:
	test eax,eax
	je Block154

 Block153:
	mov eax,dword ptr [eax-4]
	lea ebx,[ebx]

 Block154:
	add eax,eax
	cmp ecx,eax
	ja Block154

 Block155:
	lea ecx,[esp+0x17]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x28]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x1C]

 Block156:
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [eax+edx],esi
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	add dword ptr [esp+0x20],4
	lea eax,[esp+0x18]
	push eax
	call CClientSocket::SendPacket
	mov ecx,dword ptr [esp+0xA44]
	mov dword ptr [ebx+0x134],ecx

 Block157:
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xA3C],0
	call ZArray<unsigned char>::RemoveAll
	lea ecx,[esp+0xC8]
	mov dword ptr [esp+0xA3C],0xFFFFFFFF
	call CSkill_HitAni::~CSkill_HitAni

 Block158:
	mov ecx,dword ptr [esp+0xA34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA2C
	ret 4
}
}
// CSummoned::PrepareActionLayer
_SUB_EXCEPTION_HANDLER(349CD0)
__SUB_CLASS_THIS0(00349CD0, __thiscall, 67253,  CSummoned, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_349CD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x80
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x90]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [edi+0x174]
	test eax,eax
	jne Block55

 Block1:
	lea eax,[esp+0x1C]
	push eax
	call CSummoned::GetCurrentAction
	mov edx,dword ptr [edi+0x114]
	lea ecx,[eax+eax*4]
	lea ebp,[edx+ecx*4]
	mov ecx,dword ptr [ebp+8]
	mov dword ptr [esp+0x18],ebp
	test ecx,ecx
	jne Block9

 Block2:
	mov ecx,dword ptr [edi+0xC0]
	push ebp
	push eax
	mov eax,dword ptr [edi+0xC8]
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	call CActionMan::LoadSummonedAction
	cmp dword ptr [ebp+8],0
	jne Block9

 Block3:
	mov eax,dword ptr [edi+0xD0]
	cmp eax,4
	je Block6

 Block4:
	cmp eax,5
	je Block6

 Block5:
	xor eax,eax
	jmp Block7

 Block6:
	mov eax,2

 Block7:
	mov edx,dword ptr [edi+0xC8]
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	push ebp
	push eax
	mov eax,dword ptr [edi+0xC0]
	push edx
	push eax
	call CActionMan::LoadSummonedAction
	cmp dword ptr [ebp+8],0
	jne Block9

 Block8:
	push 0x22000006
	lea ecx,[esp+0x14]
	call CMSException::_ctor_0
	mov ecx,dword ptr [esp+0x10]
	push offset CTerminateException::THROW_INFO
	lea edx,[esp+0x18]
	push edx
	mov dword ptr [esp+0x1C],ecx
	call _CxxThrowException

 Block9:
	mov eax,3
	mov word ptr [esp+0x20],ax
	mov dword ptr [esp+0x28],0xFFFFFFFE
	mov ecx,dword ptr [edi+0xF8]
	mov dword ptr [esp+0x98],0
	test ecx,ecx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	cmp word ptr [esp+0x20],8
	mov dword ptr [esp+0x98],0xFFFFFFFF
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov dword ptr [edi+0x130],0
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [esp+0x10],eax
	test eax,eax
	je Block49

 Block18:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea esp,[esp]

 Block19:
	lea edx,[esp+0x10]
	push edx
	call ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>::GetNext
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esi+0x40]
	add dword ptr [edi+0x130],eax
	add esp,4
	lea ecx,[esp+0x70]
	push ecx
	call ebp
	lea edx,[esp+0x70]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block51

 Block20:
	lea eax,[esp+0x60]
	push eax
	mov dword ptr [esp+0x9C],1
	call ebp
	lea ecx,[esp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block51

 Block21:
	mov eax,dword ptr [esi+0x48]
	mov edx,3
	mov word ptr [esp+0x50],dx
	mov dword ptr [esp+0x58],eax
	mov eax,dword ptr [esi+0x44]
	mov ecx,edx
	mov word ptr [esp+0x40],cx
	mov dword ptr [esp+0x48],eax
	mov eax,dword ptr [esi+0x40]
	mov word ptr [esp+0x30],dx
	mov dword ptr [esp+0x38],eax
	mov ecx,dword ptr [edi+0xF8]
	mov esi,dword ptr [esi+0xC]
	mov byte ptr [esp+0x98],5
	test ecx,ecx
	je Block10

 Block22:
	lea eax,[esp+0x70]
	push eax
	lea edx,[esp+0x64]
	push edx
	lea eax,[esp+0x58]
	push eax
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x40]
	push eax
	push esi
	lea edx,[esp+0x98]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x80],8
	jne Block29

 Block23:
	xor eax,eax
	mov word ptr [esp+0x80],ax
	mov eax,dword ptr [esp+0x88]
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block25:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block26:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x98],4
	jne Block30

 Block27:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block31

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block29:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x80]
	push ecx
	call esi
	jmp Block26

 Block30:
	lea eax,[esp+0x30]
	push eax
	call esi

 Block31:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x98],3
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea edx,[esp+0x40]
	push edx
	call esi

 Block35:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x98],2
	jne Block38

 Block36:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea ecx,[esp+0x50]
	push ecx
	call esi

 Block39:
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0x98],1
	jne Block42

 Block40:
	mov eax,dword ptr [esp+0x68]
	xor edx,edx
	mov word ptr [esp+0x60],dx
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea eax,[esp+0x60]
	push eax
	call esi

 Block43:
	cmp word ptr [esp+0x70],8
	mov dword ptr [esp+0x98],0xFFFFFFFF
	jne Block46

 Block44:
	mov eax,dword ptr [esp+0x78]
	xor ecx,ecx
	mov word ptr [esp+0x70],cx
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea edx,[esp+0x70]
	push edx
	call esi

 Block47:
	cmp dword ptr [esp+0x10],0
	jne Block19

 Block48:
	mov ebp,dword ptr [esp+0x18]

 Block49:
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [edi+0x118],eax
	mov esi,dword ptr [edi+0xF8]
	test esi,esi
	jne Block52

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	push eax
	call _com_issue_error

 Block52:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xD8]
	xor edx,edx
	cmp dword ptr [esp+0x1C],edx
	sete dl
	push edx
	push esi
	call eax
	test eax,eax
	jge Block54

 Block53:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block54:
	mov ecx,dword ptr [edi+0x118]
	push ecx
	push ebp
	mov ecx,edi
	call CSummoned::SetFrameInfo

 Block55:
	mov ecx,dword ptr [esp+0x90]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x8C
	ret
}
}
// CSummoned::_UpdateEffect
_SUB_EXCEPTION_HANDLER(354970)
__SUB_CLASS_THIS0(00354970, __thiscall, 67253,  CSummoned, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_354970
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x4C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x20],ebx
	cmp dword ptr [esi+0x178],ebx
	jne Block2

 Block1:
	cmp dword ptr [esi+0x17C],ebx
	je Block49

 Block2:
	mov eax,dword ptr [esi+0xC0]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push eax
	call CSkillInfo::GetSkill
	test eax,eax
	je Block49

 Block3:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,eax
	call SKILLENTRY::GetSummonedUOL
	mov ecx,dword ptr [esi+0x174]
	mov dword ptr [esp+0x54],0
	test ecx,ecx
	je Block5

 Block4:
	lea edx,[esp+0x18]
	push edx
	call CAvatar::GetLayerUnderFace
	mov ebx,1
	jmp Block6

 Block5:
	lea eax,[esi+0xF8]

 Block6:
	mov edi,dword ptr [eax]
	mov dword ptr [esp+0x10],edi
	test edi,edi
	je Block8

 Block7:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx

 Block8:
	mov byte ptr [esp+0x54],1
	test bl,1
	je Block11

 Block9:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block11

 Block10:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block11:
	cmp dword ptr [esi+0x178],0
	je Block28

 Block12:
	cmp dword ptr [esi+0x180],0
	lea edi,[esi+0x180]
	sete al
	test al,al
	sete al
	test al,al
	je Block27

 Block13:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	call IWzGr2DLayer::GetanimationState
	test eax,eax
	jne Block27

 Block16:
	push eax
	push 0xFF
	push eax
	push ecx
	lea edx,[esp+0x20]
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push edx
	mov dword ptr [esi+0x178],eax
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push 0
	push 0
	push ecx
	lea eax,[esi+0x188]
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push eax
	call _x_com_ptr<IWzVector2D>::_ctor_copy
	push offset _S_REPEAT
	lea ecx,[esp+0x40]
	push ecx
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x78],3
	call Ztl_bstr_t::op_add_1
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x70],4
	test eax,eax
	je Block18

 Block17:
	mov eax,dword ptr [eax]
	jmp Block19

 Block18:
	xor eax,eax

 Block19:
	push 0
	push eax
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0x7C],5
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block21:
	mov ecx,dword ptr [esp+0x20]
	mov byte ptr [esp+0x54],1
	test ecx,ecx
	je Block23

 Block22:
	call _xbstr_t::Data_t::Release

 Block23:
	cmp dword ptr [edi],0
	je Block27

 Block24:
	mov ecx,dword ptr [esp+0x10]
	test ecx,ecx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	call IWzGr2DLayer::Getflip
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Putflip
	push offset _D_VTMISSING
	lea ecx,[esp+0x40]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x58],6
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x3C]
	push eax
	lea ecx,[esp+0x30]
	push ecx
	push 0x20
	mov ecx,edi
	mov byte ptr [esp+0x60],7
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x2C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x54],1
	call Ztl_variant_t::~Ztl_variant_t

 Block27:
	mov edi,dword ptr [esp+0x10]

 Block28:
	cmp dword ptr [esi+0x17C],0
	je Block45

 Block29:
	cmp dword ptr [esi+0x184],0
	lea edi,[esi+0x184]
	sete al
	test al,al
	sete al
	test al,al
	je Block44

 Block30:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	call IWzGr2DLayer::GetanimationState
	test eax,eax
	jne Block44

 Block33:
	push eax
	push 0xFF
	push eax
	push ecx
	lea edx,[esp+0x20]
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push edx
	mov dword ptr [esi+0x17C],eax
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push 0
	push 0
	push ecx
	add esi,0x188
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push esi
	call _x_com_ptr<IWzVector2D>::_ctor_copy
	push offset _S_REPEAT0
	lea eax,[esp+0x3C]
	push eax
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x78],9
	call Ztl_bstr_t::op_add_1
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x70],0xA
	test eax,eax
	je Block35

 Block34:
	mov eax,dword ptr [eax]
	jmp Block36

 Block35:
	xor eax,eax

 Block36:
	push 0
	push eax
	lea ecx,[esp+0x44]
	push ecx
	mov byte ptr [esp+0x7C],0xB
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block38

 Block37:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block38:
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x54],1
	test ecx,ecx
	je Block40

 Block39:
	call _xbstr_t::Data_t::Release

 Block40:
	cmp dword ptr [edi],0
	je Block44

 Block41:
	mov ecx,dword ptr [esp+0x10]
	test ecx,ecx
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	call IWzGr2DLayer::Getflip
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Putflip
	push offset _D_VTMISSING
	lea ecx,[esp+0x30]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x58],0xC
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x40]
	push edx
	push 0x20
	mov ecx,edi
	mov byte ptr [esp+0x60],0xD
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x3C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x2C]
	call Ztl_variant_t::~Ztl_variant_t

 Block44:
	mov edi,dword ptr [esp+0x10]

 Block45:
	mov byte ptr [esp+0x54],0
	test edi,edi
	je Block47

 Block46:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block47:
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	je Block49

 Block48:
	call _xbstr_t::Data_t::Release

 Block49:
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x48
	ret
}
}
// CSummoned::SetTargetID
__SUB_CLASS_THIS(00348E80, __thiscall, 67279,  CSummoned, void, unsigned long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0xE8],eax
	ret 4
}
}
// CSummoned::MoveAction2RawAction
// 748EEC
static uint8_t _SUB_348E90_LOOKUP_TABLE_0[21] = {
0, 1, 4, 4, 4, 2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 3, 
};
__SUB_CLASS_THIS(00348E90, __thiscall, 67293,  CSummoned, long, long, long*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+8]
	mov eax,dword ptr [esp+4]
	test ecx,ecx
	je Block2

 Block1:
	mov edx,eax
	and edx,1
	mov dword ptr [ecx],edx

 Block2:
	sar eax,1
	dec eax
	cmp eax,0x14
	ja Block7

 Block3:
	movzx eax,byte ptr [eax+_SUB_348E90_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block4
cmp EAX, 1
je Block7
cmp EAX, 2
je Block5
cmp EAX, 3
je Block6
cmp EAX, 4
je Block7


 Block4:
	mov eax,1
	ret 8

 Block5:
	mov eax,2
	ret 8

 Block6:
	mov eax,6
	ret 8

 Block7:
	xor eax,eax
	ret 8
}
}
// CSummoned::GetZMass
__SUB_CLASS_THIS0(0034FF40, __thiscall, 67287,  CSummoned, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x184]
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax+0x1B8]
	ret

 Block2:
	xor eax,eax
	mov eax,dword ptr [eax+0x1C4]
	ret
}
}
// CSummoned::GetVecCtrl
__SUB_CLASS_THIS0(0023C7A0, __thiscall, 67268,  CSummoned, _x_com_ptr<IWzVector2D>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x188]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esp+4],0
	mov dword ptr [esi],eax
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
