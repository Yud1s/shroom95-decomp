// FuncKeyMappedMan.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "GW/GW.hpp"
#include "Packet/Packet.hpp"

// Level: 1 0x1114c
class CFuncKeyMappedMan;

class CFuncKeyMappedMan : public TSingleton<CFuncKeyMappedMan>
{
    // Nested
    // Fields
protected:
    std::array<FUNCKEY_MAPPED, 89> m_aFuncKeyMapped{};

protected:
    std::array<FUNCKEY_MAPPED, 89> m_aFuncKeyMapped_Old{};

protected:
    std::array<long, 8> m_aQuickslotKeyMapped{};

protected:
    std::array<long, 8> m_aQuickslotKeyMapped_Old{};

protected:
    long m_nPetConsumeItemID{};

protected:
    long m_nPetConsumeMPItemID{};

protected:
    long m_nNormalAttackCode{};
    // Methods
public:
    virtual ~CFuncKeyMappedMan();

public:
    void _dtor_0();

public:
    CFuncKeyMappedMan(const CFuncKeyMappedMan& arg0);

public:
    void _ctor_1(const CFuncKeyMappedMan& arg0);

public:
    CFuncKeyMappedMan();

public:
    void _ctor_0();

public:
    void OnInit(CInPacket& iPacket);

public:
    void OnPetConsumeItemInit(CInPacket& iPacket);

public:
    void OnPetConsumeMPItemInit(CInPacket& iPacket);

public:
    void OnPacket(long nType, CInPacket& iPacket);

public:
    void BackUpFuncKeyMap();

public:
    void SaveFuncKeyMap();

public:
    void AdaptVirtualKey();

public:
    void RestoreFuncKeyMap();

public:
    int32_t IsFuncKeyMapModified();

public:
    void RemoveAllFuncKeyMap();

public:
    void DefaultFuncKeyMap();

public:
    void ChangePetConsumeItemID(long nPetConsumeItemID);

public:
    void ChangePetConsumeMPItemID(long nPetConsumeMPItemID);

public:
    long GetPetConsumeItemID();

public:
    long GetPetConsumeMPItemID();

public:
    FUNCKEY_MAPPED& FuncKeyMapped(long nIdx);

public:
    void SetNormalAttackCode(long arg0);

public:
    long GetNormalAttackCode();

public:
    FUNCKEY_MAPPED& FuncKeyMapped_StatusBar(long nIdx);

protected:
    void AdjustConfigurationByVersion();

public:
    CFuncKeyMappedMan& operator=(const CFuncKeyMappedMan& arg0);

public:
    static CFuncKeyMappedMan& _op_assign_23(CFuncKeyMappedMan* pThis, const CFuncKeyMappedMan& arg0);
};

STATIC_ASSERT_SIZE(CFuncKeyMappedMan, 972);
