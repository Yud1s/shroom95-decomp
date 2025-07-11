// DayOfWeek.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"


// Level: 1 0x11413
class CDayOfWeek;

class CDayOfWeek : public TSimpleSingleton<CDayOfWeek>
{
    // Nested
    // Fields
private:
    int32_t m_bPassiveMode{};

private:
    int32_t m_wDayOfWeek{};
    // Methods
public:
    virtual ~CDayOfWeek();

public:
    void _dtor_0();

public:
    CDayOfWeek(const CDayOfWeek& arg0);

public:
    void _ctor_1(const CDayOfWeek& arg0);

public:
    CDayOfWeek();

public:
    void _ctor_0();

public:
    uint16_t GetCurrentDay() const;

public:
    void SetCurrentDay(uint16_t wDayOfWeek);

public:
    void SetPassveModeOn();

public:
    void SetPassveModeOff();

public:
    CDayOfWeek& operator=(const CDayOfWeek& arg0);

public:
    static CDayOfWeek& _op_assign_7(CDayOfWeek* pThis, const CDayOfWeek& arg0);
};

STATIC_ASSERT_SIZE(CDayOfWeek, 12);
