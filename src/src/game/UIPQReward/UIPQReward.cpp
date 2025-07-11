// UIPQReward.cpp
#include "UIPQReward.hpp"
#include "UIPQReward_regen.ipp"

 CUIPQReward::~CUIPQReward() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIPQReward::_dtor_0() {
	return __sub_0041E0F0(this, nullptr);
}
 CUIPQReward::CUIPQReward(const CUIPQReward& arg0) {
	_ctor_1( arg0);
}
void CUIPQReward::_ctor_1( const CUIPQReward& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIPQReward::CUIPQReward(ZArray<int>& aRare) {
	_ctor_0( aRare);
}
void CUIPQReward::_ctor_0( ZArray<int>& aRare) {
	return __sub_0041DBB0(this, nullptr, aRare);
}
void CUIPQReward::OnCreate(void* pData) {
	__sub_0041E290(this, nullptr, pData);
}
int32_t CUIPQReward::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_0041CA40(this, nullptr, rx, ry, ppCtrl);
}
void CUIPQReward::Draw(const tagRECT* pRect) {
	__sub_0041D010(this, nullptr, pRect);
}
void CUIPQReward::OnButtonClicked(uint32_t nId) {
	__sub_0041CC70(this, nullptr, nId);
}
void CUIPQReward::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_0041E090(this, nullptr, wParam, lParam);
}
void CUIPQReward::Update() {
	__sub_0041CCD0(this, nullptr);
}
int32_t CUIPQReward::SelectReward(long nBTId) {
	return __sub_0041CBB0(this, nullptr, nBTId);
}
void CUIPQReward::RequestReward() {
	__sub_0041CAD0(this, nullptr);
}
int32_t CUIPQReward::IsRequest() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIPQReward::SetRequest(int32_t arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CUIPQReward::IsReceived() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIPQReward::SetReceived(int32_t arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CUIPQReward::IsRequestReward() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIPQReward::SetRequestReward(int32_t arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIPQReward::OnSelectRewardSuccess(ZXString<char> sName, int32_t bRemote, long nSelectedIdx) {
	__sub_0041D600(this, nullptr, CreateNakedParam(sName), bRemote, nSelectedIdx);
}
void CUIPQReward::OnSelectRewardFail(long nRetCode) {
	__sub_0041D440(this, nullptr, nRetCode);
}
void CUIPQReward::OnReceiveReward(CInPacket& iPacket) {
	__sub_0041D8F0(this, nullptr, iPacket);
}
void CUIPQReward::OnFailToRequestReward(CInPacket& iPacket) {
	__sub_0041CA70(this, nullptr, iPacket);
}
CUIPQReward& CUIPQReward::operator=(const CUIPQReward& arg0) {
	return _op_assign_24(this, arg0);
}
CUIPQReward& CUIPQReward::_op_assign_24(CUIPQReward* pThis, const CUIPQReward& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIPQReward::RewardBoxInfo::~RewardBoxInfo() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIPQReward::RewardBoxInfo::_dtor_0() {
	return __sub_0041CB80(this, nullptr);
}
 CUIPQReward::RewardBoxInfo::RewardBoxInfo(const CUIPQReward::RewardBoxInfo& arg0) {
	_ctor_1( arg0);
}
void CUIPQReward::RewardBoxInfo::_ctor_1( const CUIPQReward::RewardBoxInfo& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIPQReward::RewardBoxInfo::RewardBoxInfo() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUIPQReward::RewardBoxInfo::_ctor_0() {
	return __sub_0041CB50(this, nullptr);
}
CUIPQReward::RewardBoxInfo& CUIPQReward::RewardBoxInfo::operator=(const CUIPQReward::RewardBoxInfo& arg0) {
	return _op_assign_3(this, arg0);
}
CUIPQReward::RewardBoxInfo& CUIPQReward::RewardBoxInfo::_op_assign_3(CUIPQReward::RewardBoxInfo* pThis, const CUIPQReward::RewardBoxInfo& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

