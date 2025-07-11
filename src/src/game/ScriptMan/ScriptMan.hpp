// ScriptMan.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Packet/Packet.hpp"

class CUtilDlgEx;
class CSlideMenuDlg;
class CSlideMenuDlgEX;

// Level: 1 0xcd07
class CScriptMan;

class CScriptMan : public TSingleton<CScriptMan>
{
	// Nested
	// Fields
protected:
	int32_t m_bProcMessage{};

protected:
	ZRef<CUtilDlgEx> m_pDlg;

protected:
	ZRef<CSlideMenuDlg> m_pSlideDlg;

protected:
	ZRef<CSlideMenuDlgEX> m_pSlideDlgEX;
	// Methods
public:
	virtual ~CScriptMan();

public:
	void _dtor_0();

public:
	CScriptMan(const CScriptMan &arg0);

public:
	void _ctor_1( const CScriptMan &arg0);

public:
	CScriptMan();

public:
	void _ctor_0();

public:
	void Init();

public:
	int32_t IsDialogOpened();

public:
	void OnPacket(long nType, CInPacket &iPacket);

public:
	void Destroy();

protected:
	void OnScriptMessage(CInPacket &iPacket);

protected:
	void OnSay(long nSpeakerTypeID, long nSpeakerTemplateID, CInPacket &iPacket, unsigned char bParam);

protected:
	void OnSayImage(long nSpeakerTypeID, long nSpeakerTemplateID, CInPacket &iPacket, unsigned char bParam);

protected:
	void OnAskYesNo(long nSpeakerTypeID, long nSpeakerTemplateID, CInPacket &iPacket, unsigned char bParam, int32_t bNoNpc, int32_t bQuest);

protected:
	void OnAskText(long nSpeakerTypeID, long nSpeakerTemplateID, CInPacket &iPacket, unsigned char bParam);

protected:
	void OnAskBoxText(long nSpeakerTypeID, long nSpeakerTemplateID, CInPacket &iPacket, unsigned char bParam);

protected:
	void OnAskNumber(long nSpeakerTypeID, long nSpeakerTemplateID, CInPacket &iPacket, unsigned char bParam);

protected:
	void OnAskMenu(long nSpeakerTypeID, long nSpeakerTemplateID, CInPacket &iPacket, unsigned char bParam);

protected:
	void OnAskAvatar(long nSpeakerTypeID, long nSpeakerTemplateID, CInPacket &iPacket);

protected:
	void OnAskMembershopAvatar(long nSpeakerTypeID, long nSpeakerTemplateID, CInPacket &iPacket);

protected:
	void OnAskPet(long nSpeakerTypeID, long nSpeakerTemplateID, CInPacket &iPacket);

protected:
	void OnAskPetAll(long nSpeakerTypeID, long nSpeakerTemplateID, CInPacket &iPacket);

protected:
	void OnAskQuiz(long nSpeakerTypeID, long nSpeakerTemplateID, CInPacket &iPacket);

protected:
	void OnAskSpeedQuiz(long nSpeakerTypeID, long nSpeakerTemplateID, CInPacket &iPacket);

protected:
	void OnAskSlideMenu(CInPacket &iPacket);

public:
	CScriptMan &operator=(const CScriptMan &arg0);

public:
	static CScriptMan &_op_assign_22(CScriptMan *pThis, const CScriptMan &arg0);
};
STATIC_ASSERT_SIZE(CScriptMan, 32);



// 86B510 32
//static CScriptMan _D_G_SCRIPTMAN{};