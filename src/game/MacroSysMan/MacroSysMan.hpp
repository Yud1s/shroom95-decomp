// MacroSysMan.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "DBBasic/DBBasic.hpp"
#include "IG/IG.hpp"
#include "Packet/Packet.hpp"

// Level: 1 0xcda0
class CMacroSysMan;

class CMacroSysMan : public IGObj, public TSingleton<CMacroSysMan>
{
	// Nested
public:
	struct ACTIVEMACROINFO
	{
		// Nested
		// Fields
	public:
		long nSkillID{};

	public:
		long nMacroIdx{};

	public:
		int32_t bShoutTime{};
		// Methods
	};

public:
	enum WAITING_TIMEOVER
	{
		WAITING_TIMEOVER = 4000
	};
	// Fields
protected:
	ZList<CMacroSysMan::ACTIVEMACROINFO> m_lDoingNow;

protected:
	long m_tSkillWait{};

protected:
	ZXString16 m_sLastMessage;

protected:
	MACROSYSDATA m_macrosysdata;

private:
	int32_t m_bCheked{};
	// Methods
public:
	virtual ~CMacroSysMan();

public:
	void _dtor_0();

public:
	CMacroSysMan(const CMacroSysMan &arg0);

public:
	void _ctor_1(const CMacroSysMan &arg0);

public:
	CMacroSysMan();

public:
	void _ctor_0();

public:
	virtual void Update();

public:
	void Reset();

public:
	void CheckMacro();

public:
	void SetMacro(CInPacket &iPacket);

public:
	long GetMacro(long nMacroIdx, long nSkillIdx);

public:
	ZXString<char> GetMacroName(long nMacroIdx);

public:
	long GetMacroCount();

public:
	void FlushToSvr();

public:
	void DoActiveMacro(long nMacroIdx);

public:
	void Stop();

public:
	int32_t IsOnPlayingMacro();

public:
	void Delete(long nMacroIdx, long nSkillIdx);

public:
	void Map(long nMacroIdx, long nSkillIdx, long nSkillID);

public:
	int32_t IsShoutMacro(long nMacroIdx);

public:
	void SetMacroInfo(long nMacroIdx, ZXString<char> sName, int32_t bShout);

public:
	int32_t CanItShow(ZXString16 sChat);

public:
	void ValidateMacro();

protected:
	void Realloc(long nMacroCount);

public:
	CMacroSysMan &operator=(const CMacroSysMan &arg0);

public:
	static CMacroSysMan &_op_assign_21(CMacroSysMan *pThis, const CMacroSysMan &arg0);
};
STATIC_ASSERT_SIZE(CMacroSysMan, 40);
