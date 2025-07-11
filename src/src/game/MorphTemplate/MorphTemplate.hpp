// MorphTemplate.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

// Level: 1 0x5258
class CMorphTemplate;

class CMorphTemplate : public ZRefCounted
{
public:
	static ZMap<unsigned long, ZRef<CMorphTemplate>, unsigned long> ms_mMorphTemplate;

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
	long nMovability{};

public:
	int32_t bMorphEffect{};

public:
	int32_t bSuperMan{};

public:
	int32_t bHide{};

public:
	int32_t bAttackable{};
	// Methods
public:
	virtual ~CMorphTemplate();

public:
	void _dtor_0();

public:
	CMorphTemplate(const CMorphTemplate &arg0);

public:
	void _ctor_1( const CMorphTemplate &arg0);

public:
	CMorphTemplate();

public:
	void _ctor_0();

public:
	static void __cdecl Load();

public:
	static void __cdecl Unload();

public:
	static CMorphTemplate *__cdecl GetMorphTemplate(unsigned long dwTemplateID);

public:
	int32_t IsSuperMan_();

public:
	static int32_t __cdecl IsSuperMan(unsigned long dwTemplateID);

public:
	static int32_t __cdecl IsHideMorphed(unsigned long dwTemplateID);

public:
	static int32_t __cdecl IsMonsterMorphed(unsigned long arg0);

public:
	int32_t IsHide();

public:
	static int32_t __cdecl IsAttackableMorphed(unsigned long dwTemplateID);

public:
	int32_t IsAttackable();

protected:
	static int32_t __cdecl RegisterMorph(unsigned long dwTemplateID, _x_com_ptr<IWzProperty> pProp);

public:
	CMorphTemplate &operator=(const CMorphTemplate &arg0);

public:
	static CMorphTemplate &_op_assign_14(CMorphTemplate *pThis, const CMorphTemplate &arg0);
};
STATIC_ASSERT_SIZE(CMorphTemplate, 64);
