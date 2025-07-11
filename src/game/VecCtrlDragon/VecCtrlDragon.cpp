// VecCtrlDragon.cpp
#include "VecCtrlDragon.hpp"
#include "VecCtrlDragon_regen.ipp"

 CVecCtrlDragon::~CVecCtrlDragon() {
}
void CVecCtrlDragon::_dtor_0() {
	this->~CVecCtrlDragon();
}
 CVecCtrlDragon::CVecCtrlDragon(const CVecCtrlDragon& arg0) {
	_ctor_1( arg0);
}
void CVecCtrlDragon::_ctor_1( const CVecCtrlDragon& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CVecCtrlDragon::CVecCtrlDragon() {

}
void CVecCtrlDragon::_ctor_0() {
 	new(this) CVecCtrlDragon();
}
void CVecCtrlDragon::Init(IVecCtrlOwner* pUser, unsigned long dwCharacterID) {
	CVecCtrl::Init(pUser);
 	m_dwCharacterID = dwCharacterID;
 	m_nDistanceX_for_Walk = 5;
}
void CVecCtrlDragon::ChaseTarget(int32_t bChase, IVecCtrlOwner* pTarget) {
 	if ( bChase )
 	{
 		if ( this->m_pTarget != pTarget )
 			this->m_pTarget = pTarget;
 	}
 	else
 	{
 		this->m_pTarget = 0;
 	}
}
CVecCtrlDragon* __cdecl CVecCtrlDragon::CreateInstance() {
	return new CVecCtrlDragon();
}
int32_t CVecCtrlDragon::WorkUpdateActive(long rcOut) {
	return __sub_00595FC0(this, nullptr, rcOut);
}
void CVecCtrlDragon::EndUpdateActive() {
 	if ( this->m_path.IsTimeForFlush(0, 0) )
 	{
 		COutPacket pkt(Cp::Dragonmove);
 		if ( !this->m_path.Flush( pkt, 0, nullptr) )
 			SendPacket(pkt);
 	}
}
int CVecCtrlDragon::WorkUpdatePassive(long tElapse) {
 	auto updated = CVecCtrl::WorkUpdatePassive(tElapse, 0, 0);
 	auto pSpace = TSingleton<CWvsPhysicalSpace2D>::ms_pInstance;
 	auto x = m_ap._ZtlSecureGet_x();
 	auto y = m_ap._ZtlSecureGet_y();
 	auto pFh = pSpace->GetFootholdUnderneath(x, y, nullptr, 0x7FFFFFFF, 1);
 	if ( pFh )
 	{
 		m_lPage = pFh->GetPage();
 		if ( this->m_lPage != m_lPage || this->m_lZMass != pFh->GetZMass() )
 		{
 			this->m_lPage = m_lPage;
 			m_pOwner = this->m_pOwner;
 			this->m_lZMass = pFh->GetZMass();
 			m_pOwner->OnLayerZChanged(this);
 		}
 	}
 	return updated;
}
CVecCtrlDragon& CVecCtrlDragon::operator=(const CVecCtrlDragon& arg0) {
	return _op_assign_9(this, arg0);
}
CVecCtrlDragon& CVecCtrlDragon::_op_assign_9(CVecCtrlDragon* pThis, const CVecCtrlDragon& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

