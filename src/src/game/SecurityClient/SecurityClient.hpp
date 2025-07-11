// SecurityClient.hpp
#pragma once

#include "util/base.h"
#include "pcom/wz.h"

#include "Packet/Packet.hpp"

// Level: 0 0x3f2b
class CSecurityException;

// Level: 1 0x3f6b
class CSecurityClearFailed;

// Level: 1 0x3f94
class CSecurityClient;

// Level: 1 0x3f5b
class CSecurityInitFailed;

// Level: 1 0x3f7b
class CSecurityThreatDetected;

// Level: 1 0x3f3b
class CSecurityUpdateFailed;

class CSecurityException {
protected:
    unsigned long m_dwErrorCode{};

public:
    CSecurityException();
    ~CSecurityException();
    CSecurityException(const CSecurityException &__that);
    void _ctor_1(const CSecurityException &__that);
    explicit CSecurityException(unsigned long arg0);
    void _ctor_0(unsigned long arg0);
    virtual ZXString<char> GetErrorMessage();
    unsigned long GetErrorCode();
    CSecurityException &operator=(const CSecurityException &arg0);
    static CSecurityException &_op_assign_5(CSecurityException *pThis, const CSecurityException &arg0);
};

STATIC_ASSERT_SIZE(CSecurityException, 8);

class CSecurityClearFailed : public CSecurityException {
public:
    ~CSecurityClearFailed();
    CSecurityClearFailed(const CSecurityClearFailed &__that);
    void _ctor_1(const CSecurityClearFailed &__that);
    explicit CSecurityClearFailed(unsigned long arg0);
    void _ctor_0(unsigned long arg0);
    ZXString<char> GetErrorMessage() override;
    CSecurityClearFailed &operator=(const CSecurityClearFailed &arg0);
    static CSecurityClearFailed &_op_assign_4(CSecurityClearFailed *pThis, const CSecurityClearFailed &arg0);
};

STATIC_ASSERT_SIZE(CSecurityClearFailed, 8);

class CSecurityClient : public TSingleton<CSecurityClient> {
// Nested
// Fields
public:
    TSecType<int> m_bInitModule;
public:
    TSecType<int> m_bStartModule;
public:
    long m_nThreatCode{};
public:
    TSecType<long> m_nThreatParamSize;
public:
    void *m_pThreatParam{};
public:
    unsigned long m_dwCallbackTime{};
public:
    std::array<char, 260> m_szHShieldPath{};
private:
    HWND__ *m_hMainWnd{};
// Methods
public:
    virtual  ~CSecurityClient();

public:
    void _dtor_0();

public:
    CSecurityClient(const CSecurityClient &arg0);

public:
    void _ctor_1(const CSecurityClient &arg0);

public:
    CSecurityClient();

public:
    void _ctor_0();

public:
    void InitModule();

public:
    void ClearModule();

public:
    void StartModule();

public:
    void StopModule();

public:
    void Update();

public:
    void OnPacket(CInPacket &iPacket);

public:
    void SetThreat(long arg0, long arg1, void *arg2);

public:
    void SetUserID(const char *arg0);

private:
    void OnCheckClientIntegrityRequest(CInPacket &iPacket);

public:
    void SetMainWnd(HWND__ *arg0);

public:
    CSecurityClient &operator=(CSecurityClient &arg0);

public:
    static CSecurityClient &_op_assign_13(CSecurityClient *pThis, CSecurityClient &arg0);
};

STATIC_ASSERT_SIZE(CSecurityClient, 316);

class CSecurityInitFailed : public CSecurityException {
// Nested
// Fields
// Methods
public:
    ~CSecurityInitFailed();

public:
    void _dtor_0();

public:
    CSecurityInitFailed(const CSecurityInitFailed &__that);

public:
    void _ctor_1(const CSecurityInitFailed &__that);

public:
    CSecurityInitFailed(unsigned long arg0);

public:
    void _ctor_0(unsigned long arg0);

public:
    virtual ZXString<char> GetErrorMessage();

public:
    CSecurityInitFailed &operator=(const CSecurityInitFailed &arg0);

public:
    static CSecurityInitFailed &_op_assign_4(CSecurityInitFailed *pThis, const CSecurityInitFailed &arg0);
};

STATIC_ASSERT_SIZE(CSecurityInitFailed, 8);

class CSecurityThreatDetected : public CSecurityException {
// Nested
// Fields
// Methods
public:
    ~CSecurityThreatDetected();

public:
    void _dtor_0();

public:
    CSecurityThreatDetected(const CSecurityThreatDetected &__that);

public:
    void _ctor_1(const CSecurityThreatDetected &__that);

public:
    CSecurityThreatDetected(unsigned long arg0);

public:
    void _ctor_0(unsigned long arg0);

public:
    virtual ZXString<char> GetErrorMessage();

public:
    CSecurityThreatDetected &operator=(const CSecurityThreatDetected &arg0);

public:
    static CSecurityThreatDetected &_op_assign_4(CSecurityThreatDetected *pThis, const CSecurityThreatDetected &arg0);
};

STATIC_ASSERT_SIZE(CSecurityThreatDetected, 8);

class CSecurityUpdateFailed : public CSecurityException {
// Nested
// Fields
// Methods
public:
    ~CSecurityUpdateFailed();

public:
    void _dtor_0();

public:
    CSecurityUpdateFailed(const CSecurityUpdateFailed &__that);

public:
    void _ctor_1(const CSecurityUpdateFailed &__that);

public:
    CSecurityUpdateFailed(unsigned long arg0);

public:
    void _ctor_0(unsigned long arg0);

public:
    virtual ZXString<char> GetErrorMessage();

public:
    CSecurityUpdateFailed &operator=(const CSecurityUpdateFailed &arg0);

public:
    static CSecurityUpdateFailed &_op_assign_4(CSecurityUpdateFailed *pThis, const CSecurityUpdateFailed &arg0);
};

STATIC_ASSERT_SIZE(CSecurityUpdateFailed, 8);


int32_t __stdcall _AhnHS_Callback(long lCode, long lParamSize, void *pParam);
