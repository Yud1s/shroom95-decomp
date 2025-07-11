// VecProcess.hpp
#pragma once

#include "util/base.h"
#include "pcom/wz.h"


// Level: 1 0x13002
class CVecProcess;

class CVecProcess : public TSingleton<CVecProcess> {
// Nested
// Fields
// Methods
public:
    virtual  ~CVecProcess();

public:
    void _dtor_0();

public:
    CVecProcess(const CVecProcess &arg0);

public:
    void _ctor_1(const CVecProcess &arg0);

public:
    CVecProcess();

public:
    void _ctor_0();

public:
    _x_com_ptr<IWzVector2D> MakeCircularMove(_x_com_ptr<IWzVector2D> arg0, long arg1, long arg2, int32_t arg3);

public:
    _x_com_ptr<IWzVector2D>
    MakeElipticalMove(_x_com_ptr<IWzVector2D> pOrigin, long nWidth, long nHeight, long nPeriod, int32_t bClockwise,
                      int32_t bCenterStart);

public:
    _x_com_ptr<IWzVector2D> MakeRotate(_x_com_ptr<IWzVector2D> pOrigin, long nPeriod, long rx, long ry);

public:
    _x_com_ptr<IWzVector2D>
    MakeOscilate(_x_com_ptr<IWzVector2D> pOrigin, long nDiff, long nPeriod, int32_t bVer, int32_t bCenterStart);

private:
    _x_com_ptr<IWzVector2D> CreateVector();

public:
    CVecProcess &operator=(const CVecProcess &arg0);

public:
    static CVecProcess &_op_assign_8(CVecProcess *pThis, const CVecProcess &arg0);
};

STATIC_ASSERT_SIZE(CVecProcess, 4);


