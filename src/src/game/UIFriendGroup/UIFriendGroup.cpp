// UIFriendGroup.cpp
#include "UIFriendGroup.hpp"
#include "UIFriendGroup_regen.ipp"

 CUIFriendGroup::~CUIFriendGroup() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIFriendGroup::_dtor_0() {
	return __sub_003BCF50(this, nullptr);
}
 CUIFriendGroup::CUIFriendGroup(const CUIFriendGroup& arg0) {
	_ctor_1( arg0);
}
void CUIFriendGroup::_ctor_1( const CUIFriendGroup& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIFriendGroup::CUIFriendGroup(long l, long t, ZXString<char> sGroupName, const ZArray<CUIFriendGroup::Friend>& aFriends, int32_t bAdd) {
	_ctor_0( l, t, sGroupName, aFriends, bAdd);
}
void CUIFriendGroup::_ctor_0( long l, long t, ZXString<char> sGroupName, const ZArray<CUIFriendGroup::Friend>& aFriends, int32_t bAdd) {
	return __sub_003BD0F0(this, nullptr, l, t, CreateNakedParam(sGroupName), aFriends, bAdd);
}
void CUIFriendGroup::SetRet(long nRet) {
	__sub_003BCE80(this, nullptr, nRet);
}
void CUIFriendGroup::Draw(const tagRECT* pRect) {
	__sub_003BC770(this, nullptr, pRect);
}
void CUIFriendGroup::OnCreate(void* pData) {
	__sub_003BBFD0(this, nullptr, pData);
}
void CUIFriendGroup::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_003BBDD0(this, nullptr, nId, param1, param2);
}
int32_t CUIFriendGroup::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_003BBD90(this, nullptr, rx, ry, ppCtrl);
}
void CUIFriendGroup::SetScrollBar() {
	__sub_003BBE60(this, nullptr);
}
int32_t CUIFriendGroup::OnOK() {
	return __sub_003BCBE0(this, nullptr);
}
CUIFriendGroup& CUIFriendGroup::operator=(const CUIFriendGroup& arg0) {
	return _op_assign_13(this, arg0);
}
CUIFriendGroup& CUIFriendGroup::_op_assign_13(CUIFriendGroup* pThis, const CUIFriendGroup& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIFriendGroup::Friend::~Friend() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIFriendGroup::Friend::_dtor_0() {
	return __sub_003BBEF0(this, nullptr);
}
 CUIFriendGroup::Friend::Friend(const CUIFriendGroup::Friend& __that) {
	_ctor_1( __that);
}
void CUIFriendGroup::Friend::_ctor_1( const CUIFriendGroup::Friend& __that) {
	return __sub_003BBF60(this, nullptr, __that);
}
 CUIFriendGroup::Friend::Friend(ZXString<char> sFriendName, ZXString<char> sGroupName, int32_t bChecked) {
	_ctor_0( sFriendName, sGroupName, bChecked);
}
void CUIFriendGroup::Friend::_ctor_0( ZXString<char> sFriendName, ZXString<char> sGroupName, int32_t bChecked) {
	return __sub_004BE900(this, nullptr, CreateNakedParam(sFriendName), CreateNakedParam(sGroupName), bChecked);
}
 CUIFriendGroup::Friend::Friend() {
	UNIMPLEMENTED; //_ctor_3();
}
void CUIFriendGroup::Friend::_ctor_3() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIFriendGroup::Friend& CUIFriendGroup::Friend::operator=(const CUIFriendGroup::Friend& arg0) {
	return _op_assign_4(this, arg0);
}
CUIFriendGroup::Friend& CUIFriendGroup::Friend::_op_assign_4(CUIFriendGroup::Friend* pThis, const CUIFriendGroup::Friend& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

