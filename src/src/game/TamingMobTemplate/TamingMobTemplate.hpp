// TamingMobTemplate.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

// Level: 1 0x1302d
class CTamingMobTemplate;

class CTamingMobTemplate : public ZRefCounted
{

public:
	static ZMap<unsigned long, ZRef<CTamingMobTemplate>, unsigned long> ms_mTamingMobTemplate;

	// Nested
	// Fields
public:
	unsigned long dwTemplateID{};

public:
	ZXString<char> sName;

public:
	long nSpeed{};

public:
	long nJump{};

public:
	double dFs{};

public:
	long nSwim{};

public:
	long nFatigue{};
	// Methods
public:
	virtual ~CTamingMobTemplate();

public:
	void _dtor_0();

public:
	CTamingMobTemplate(const CTamingMobTemplate &arg0);

public:
	void _ctor_1( const CTamingMobTemplate &arg0);

public:
	CTamingMobTemplate();

public:
	void _ctor_0();

public:
	static void __cdecl Load();

public:
	static void __cdecl Unload();

public:
	static CTamingMobTemplate *__cdecl GetTamingMobTemplate(unsigned long dwTemplateID);

protected:
	static int32_t __cdecl RegisterTamingMob(unsigned long dwTemplateID, _x_com_ptr<IWzProperty> pProp);

public:
	CTamingMobTemplate &operator=(const CTamingMobTemplate &arg0);

public:
	static CTamingMobTemplate &_op_assign_7(CTamingMobTemplate *pThis, const CTamingMobTemplate &arg0);
};
STATIC_ASSERT_SIZE(CTamingMobTemplate, 48);
