// VecProcess.cpp
#include "VecProcess.hpp"
#include "VecProcess_regen.ipp"

 CVecProcess::~CVecProcess() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CVecProcess::_dtor_0() {
	return __sub_005A2A50(this, nullptr);
}
 CVecProcess::CVecProcess(const CVecProcess& arg0) {
	 _ctor_1(arg0);
}
void CVecProcess::_ctor_1( const CVecProcess& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CVecProcess::CVecProcess() {
	 ms_pInstance = this;
}
void CVecProcess::_ctor_0() {
	new(this) CVecProcess();
	//return __sub_005A2A20(this, nullptr);
}
_x_com_ptr<IWzVector2D> CVecProcess::MakeCircularMove(_x_com_ptr<IWzVector2D> arg0, long arg1, long arg2, int32_t arg3) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
_x_com_ptr<IWzVector2D> CVecProcess::MakeElipticalMove(_x_com_ptr<IWzVector2D> pOrigin, long nWidth, long nHeight, long nPeriod, int32_t bClockwise, int32_t bCenterStart) {
	_x_com_ptr<IWzVector2D> ret;
	return *__sub_005A2B30(this, nullptr, &ret, CreateNakedParam(pOrigin), nWidth, nHeight, nPeriod, bClockwise, bCenterStart);
}
_x_com_ptr<IWzVector2D> CVecProcess::MakeRotate(_x_com_ptr<IWzVector2D> pOrigin, long nPeriod, long rx, long ry) {
	_x_com_ptr<IWzVector2D> ret;
	return *__sub_005A3660(this, nullptr, &ret, CreateNakedParam(pOrigin), nPeriod, rx, ry);
}
_x_com_ptr<IWzVector2D> CVecProcess::MakeOscilate(_x_com_ptr<IWzVector2D> pOrigin, long nDiff, long nPeriod, int32_t bVer, int32_t bCenterStart) {
	_x_com_ptr<IWzVector2D> ret;
	return *__sub_005A3C40(this, nullptr, &ret, CreateNakedParam(pOrigin), nDiff, nPeriod, bVer, bCenterStart);
}
_x_com_ptr<IWzVector2D> CVecProcess::CreateVector() {
	_x_com_ptr<IWzVector2D> ret;
	return *__sub_005A2A90(this, nullptr, &ret);
}
CVecProcess& CVecProcess::operator=(const CVecProcess& arg0) {
	return _op_assign_8(this, arg0);
}
CVecProcess& CVecProcess::_op_assign_8(CVecProcess* pThis, const CVecProcess& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

