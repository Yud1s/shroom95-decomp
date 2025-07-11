// ReactorTemplate.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

// Level: 1 0x12d0a
class CReactorTemplate;

class CReactorTemplate : public ZRefCounted
{
	// Nested
public:
	struct REACTOREVENTINFO
	{
		// Nested
		// Fields
	public:
		long nType{};

	public:
		tagRECT rcCheckArea{};

	public:
		ZArray<long> aActiveSkillID;
		// Methods
	public:
		~REACTOREVENTINFO();

	public:
		void _dtor_0();

	public:
		REACTOREVENTINFO(const CReactorTemplate::REACTOREVENTINFO &arg0);

	public:
		void _ctor_1( const CReactorTemplate::REACTOREVENTINFO &arg0);

	public:
		REACTOREVENTINFO();

	public:
		void _ctor_0();

	public:
		CReactorTemplate::REACTOREVENTINFO &operator=(const CReactorTemplate::REACTOREVENTINFO &arg0);

	public:
		static CReactorTemplate::REACTOREVENTINFO &_op_assign_3(CReactorTemplate::REACTOREVENTINFO *pThis, const CReactorTemplate::REACTOREVENTINFO &arg0);
	};

public:
	struct STATEINFO
	{
		// Nested
		// Fields
	public:
		int32_t m_bRepeat{};

	public:
		ZArray<ZRef<CReactorTemplate::REACTOREVENTINFO>> aReactorEventInfo;
		// Methods
	public:
		~STATEINFO();

	public:
		void _dtor_0();

	public:
		STATEINFO(const CReactorTemplate::STATEINFO &arg0);

	public:
		void _ctor_1( const CReactorTemplate::STATEINFO &arg0);

	public:
		STATEINFO();

	public:
		void _ctor_0();

	public:
		CReactorTemplate::STATEINFO &operator=(const CReactorTemplate::STATEINFO &arg0);

	public:
		static CReactorTemplate::STATEINFO &_op_assign_3(CReactorTemplate::STATEINFO *pThis, const CReactorTemplate::STATEINFO &arg0);
	};

 public:
  static ZMap<unsigned long,ZRef<CReactorTemplate>,unsigned long> ms_mReactorTemplate;

public:
	enum REACTOR_LAYER_
{
	REACTOR_LAYER_NORMAL = 0,
	REACTOR_LAYER_BACK = 1,
	REACTOR_LAYER_UPPERMOST = 2
};
	// Fields
public:
	unsigned long m_dwTemplateID{};

public:
	long m_nStateCount{};

public:
	int32_t m_bMove{};

public:
	long m_nLayer{};

public:
	long m_bNotHitable{};

public:
	int32_t m_bActivateByTouch{};

public:
	long m_nQuestID{};

protected:
	ZArray<ZRef<CReactorTemplate::STATEINFO>> m_aStateInfo;
	// Methods
public:
	virtual ~CReactorTemplate();

public:
	void _dtor_0();

public:
	CReactorTemplate(const CReactorTemplate &arg0);

public:
	void _ctor_1( const CReactorTemplate &arg0);

public:
	CReactorTemplate();

public:
	void _ctor_0();

public:
	ZRef<CReactorTemplate::STATEINFO> GetStateInfo(long nState);

public:
	int32_t IsMovable();

public:
	_x_com_ptr<IWzProperty> GetTemplateProp();

public:
	_x_com_ptr<IWzProperty> GetHitProp(long nCurState, long nProperEventIdx);

public:
	static void __cdecl Load();

public:
	static void __cdecl Unload();

public:
	static CReactorTemplate *__cdecl GetReactorTemplate(unsigned long dwTemplateID);

protected:
	static int32_t __cdecl RegisterReactor(unsigned long dwTemplateID, _x_com_ptr<IWzProperty> pProp);

protected:
	static int32_t __cdecl LoadEvent(_x_com_ptr<IWzProperty> arg0, ZArray<ZRef<CReactorTemplate::REACTOREVENTINFO>> &arg1);

public:
	CReactorTemplate &operator=(const CReactorTemplate &arg0);

public:
	static CReactorTemplate &_op_assign_12(CReactorTemplate *pThis, const CReactorTemplate &arg0);
};
STATIC_ASSERT_SIZE(CReactorTemplate, 44);


