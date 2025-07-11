// QuickslotKeyMappedMan.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Packet/Packet.hpp"

// Level: 1 0x12ec8
class CQuickslotKeyMappedMan;

class CQuickslotKeyMappedMan : public TSingleton<CQuickslotKeyMappedMan>
{
	// Nested
	// Fields
protected:
	std::array<long, 8> m_aQuickslotKeyMapped{};

protected:
	std::array<long, 8> m_aQuickslotKeyMapped_Old{};
	// Methods
public:
	virtual ~CQuickslotKeyMappedMan();

public:
	void _dtor_0();

public:
	CQuickslotKeyMappedMan(const CQuickslotKeyMappedMan &arg0);

public:
	void _ctor_1(const CQuickslotKeyMappedMan &arg0);

public:
	CQuickslotKeyMappedMan();

public:
	void _ctor_0();

public:
	void OnInit(CInPacket &iPacket);

public:
	void BackUpQuickslotKeyMap();

public:
	void SaveQuickslotKeyMap();

public:
	void RestoreQuickslotKeyMap();

public:
	int32_t IsQuickslotKeyMapModified();

public:
	long GetQuickslotKeyMapped(long arg0);

public:
	void ModifyQuickslotKeyMapped(long *arg0);

public:
	void DefaultQuickslotKeyMap();

public:
	CQuickslotKeyMappedMan &operator=(const CQuickslotKeyMappedMan &arg0);

public:
	static CQuickslotKeyMappedMan &_op_assign_11(CQuickslotKeyMappedMan *pThis, const CQuickslotKeyMappedMan &arg0);
};
STATIC_ASSERT_SIZE(CQuickslotKeyMappedMan, 68);
