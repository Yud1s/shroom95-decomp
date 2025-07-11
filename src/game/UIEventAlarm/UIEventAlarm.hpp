// UIEventAlarm.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Dialog/Dialog.hpp"

struct CT_INFO;

// Level: 1 0x15528
class CUIEventAlarm;

class CUIEventAlarm : public CDialog, public TSingleton<CUIEventAlarm>
{
	// Nested
	// Fields

	SINGLETON_PAD;

public:
	ZArray<_x_com_ptr<IWzFont>> m_apFont;

protected:
	long m_ctLeft{};

protected:
	long m_ctTop{};

protected:
	long m_ctHeight{};

protected:
	long m_wndWidth{};

protected:
	long m_wndHeight{};

protected:
	long m_nSelect{};

protected:
	std::array<ZRef<CCtrlButton>, 5> m_apButton;

protected:
	ZArray<CT_INFO> m_aCT;

protected:
	long m_tEnd{};
	// Methods
public:
	virtual ~CUIEventAlarm();

public:
	void _dtor_0();

public:
	CUIEventAlarm(const CUIEventAlarm &arg0);

public:
	void _ctor_1(const CUIEventAlarm &arg0);
	CTOR_DEFAULT(CUIEventAlarm);
public:
	CUIEventAlarm();

public:
	void _ctor_0();

public:
	void SetEventAlarm(ZXString<char> sText);

public:
	void Layout_GEN();

public:
	void CreateEventAlarm();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

protected:
	void SetBackground();

protected:
	const wchar_t *MakeUOLByUIType(ZXString16 &sOut, const wchar_t *sUOL, const wchar_t *sUOL2);

protected:
	virtual void Update();

public:
	CUIEventAlarm &operator=(const CUIEventAlarm &arg0);

public:
	static CUIEventAlarm &_op_assign_11(CUIEventAlarm *pThis, const CUIEventAlarm &arg0);
};
STATIC_ASSERT_SIZE(CUIEventAlarm, 224);
