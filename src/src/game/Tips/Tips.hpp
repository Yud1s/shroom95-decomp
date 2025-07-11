// Tips.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

// Level: 0 0x2d4c
class CTips;

class CTips
{
	// Nested
public:
	struct TIPS_INFO
	{
		// Nested
		// Fields
	public:
		long nLevelMin{};

	public:
		long nLevelMax{};

	public:
		long nInterval{};

	public:
		long nJob{};

	public:
		long nAll{};

	public:
		ZXString16 sTipPath;
		// Methods
	public:
		~TIPS_INFO();

	public:
		void _dtor_0();

	public:
		TIPS_INFO(const CTips::TIPS_INFO &arg0);

	public:
		void _ctor_1(const CTips::TIPS_INFO &arg0);

	public:
		TIPS_INFO();

	public:
		void _ctor_0();

	public:
		CTips::TIPS_INFO &operator=(const CTips::TIPS_INFO &arg0);

	public:
		static CTips::TIPS_INFO &_op_assign_3(CTips::TIPS_INFO *pThis, const CTips::TIPS_INFO &arg0);
	};
	// Fields
protected:
	ZArray<CTips::TIPS_INFO> m_aTipsInfo;

protected:
	unsigned long m_tLastTip{};
	// Methods
public:
	virtual ~CTips();

public:
	void _dtor_0();

public:
	CTips(const CTips &arg0);

public:
	void _ctor_1(const CTips &arg0);
	CTOR_DEFAULT(CTips)
public:
	CTips();

public:
	void _ctor_0();

public:
	void Init();

public:
	int32_t GetTip(long nJob, long nLevel, ZXString<char> &sTip);

public:
	CTips &operator=(const CTips &arg0);

public:
	static CTips &_op_assign_5(CTips *pThis, const CTips &arg0);
};
STATIC_ASSERT_SIZE(CTips, 12);
