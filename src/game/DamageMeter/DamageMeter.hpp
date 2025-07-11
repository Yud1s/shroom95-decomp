// DamageMeter.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Wnd/Wnd.hpp"
#include "CakePieEvent/CakePieEvent.hpp"

// Level: 1 0x116f6
class CUIDamageBoard;
// Level: 1 0x1170a
class CDamageMeter;

class CUIDamageBoard : public CWnd
{
    // Nested
    // Fields
protected:
    long m_nAverageDamage{};

protected:
    long m_nMaxAverageDamage{};
    // Methods
public:
    virtual ~CUIDamageBoard();

public:
    void _dtor_0();

public:
    CUIDamageBoard(const CUIDamageBoard& arg0);

public:
    void _ctor_1(const CUIDamageBoard& arg0);

public:
    CUIDamageBoard();

public:
    void _ctor_0();

public:
    virtual void OnCreate(void* pData);

public:
    virtual void Draw(const tagRECT* arg0);

public:
    virtual int32_t OnSetFocus(int32_t bFocus);

public:
    void UpdateDamageInfo(long nAverageDamage, long nMaxAverageDamage);

public:
    CUIDamageBoard& operator=(const CUIDamageBoard& arg0);

public:
    static CUIDamageBoard& _op_assign_7(CUIDamageBoard* pThis, const CUIDamageBoard& arg0);
};

STATIC_ASSERT_SIZE(CUIDamageBoard, 136);

class CDamageMeter : public TSingleton<CDamageMeter>
{
    // Nested
    // Fields
protected:
    int32_t m_bActivate{};

protected:
    long m_nTotalDamage{};

protected:
    long m_nAverageDamage{};

protected:
    long m_nMaxAverageDamage{};

protected:
    long m_nTimer{};

protected:
    long m_nDuration{};

protected:
    CClock* m_pClock{};

protected:
    CUIDamageBoard* m_pDamageBoard{};
    // Methods
public:
    virtual ~CDamageMeter();

public:
    void _dtor_0();

public:
    CDamageMeter(const CDamageMeter& arg0);

public:
    void _ctor_1(const CDamageMeter& arg0);

public:
    CDamageMeter();

public:
    void _ctor_0();

public:
    void LoadDamageInfo();

public:
    void AddDamageInfo(long nDamage);

public:
    void Update();

public:
    void SetTimer(long nDuration);

public:
    void SetActivate(int32_t arg0);

public:
    int32_t IsActivate();

public:
    long GetAverageDamage();

public:
    long GetMaxAverageDamage();

protected:
    void KillTimer();

protected:
    void SaveDamageInfo();

public:
    CDamageMeter& operator=(const CDamageMeter& arg0);

public:
    static CDamageMeter& _op_assign_13(CDamageMeter* pThis, const CDamageMeter& arg0);
};

STATIC_ASSERT_SIZE(CDamageMeter, 36);
