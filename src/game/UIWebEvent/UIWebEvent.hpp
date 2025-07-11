// UIWebEvent.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "WebWnd/WebWnd.hpp"

// Level: 1 0x11506
class CUIWebEvent;

class CUIWebEvent : public CWebWnd, public TSingleton<CUIWebEvent>
{
	// Nested
public:
	enum UnnamedEnum70895 : int32_t
	{
		kWidth = 312,
		kHeight = 389,
		lm = 3,
		tm = 24,
		rm = 3,
		bm = 10,
		kBtCloseX = 294,
		kBtCloseY = 6
	};
	// Fields
private:
	SINGLETON_PAD;

protected:
	long m_rx{};

protected:
	long m_ry{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerLoading;

protected:
	int32_t m_bLogined{};

protected:
	unsigned long m_dwLastAuthUpdateRequest{};
	// Methods
public:
	virtual ~CUIWebEvent();

public:
	void _dtor_0();

public:
	CUIWebEvent(const CUIWebEvent &arg0);

public:
	void _ctor_1(const CUIWebEvent &arg0);

public:
	CUIWebEvent();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnNavigateComplete(const char *url);

public:
	virtual void OnBeforeNavigate(const char *url);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void Update();

protected:
	int32_t CheckAuthKeyValid();

protected:
	void SendRequestAuthKey();

	CLASS_RTTI_(CUIWebEvent, CWebWnd);

public:
	CUIWebEvent &operator=(const CUIWebEvent &arg0);

public:
	static CUIWebEvent &_op_assign_15(CUIWebEvent *pThis, const CUIWebEvent &arg0);
};
STATIC_ASSERT_SIZE(CUIWebEvent, 2980);

ZXString16 __cdecl get_server_string();
