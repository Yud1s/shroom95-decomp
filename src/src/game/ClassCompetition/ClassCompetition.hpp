// ClassCompetition.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "WebWnd/WebWnd.hpp"

// Level: 1 0x1404e
class CClassCompetition;

class CClassCompetition : public CWebWnd, public TSingleton<CClassCompetition>
{
	// Nested
public:
	enum  ID_CTRL_BT_OK
{
	ID_CTRL_BT_OK = 0
};
	// Fields
	SINGLETON_PAD; // For Singleton(TODO)
protected:
	ZRef<CCtrlButton> m_pBtOK;

private:
	int32_t m_bLogined{};

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerLoading;

private:
	unsigned long m_dwLastAuthUpdateRequest{};
	// Methods
public:
	virtual ~CClassCompetition();

public:
	void _dtor_0();

public:
	CClassCompetition(const CClassCompetition &arg0);

public:
	void _ctor_1( const CClassCompetition &arg0);

	CTOR_DEFAULT(CClassCompetition)
public:
	CClassCompetition();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Update();

public:
	virtual void OnNavigateComplete(const char *url);

public:
	virtual void OnBeforeNavigate(const char *url);

public:
	virtual void OnButtonClicked(uint32_t nId);

protected:
	int32_t CheckAuthKeyValid();

protected:
	void SendRequestAuthKey();

public:
	CClassCompetition &operator=(const CClassCompetition &arg0);

public:
	static CClassCompetition &_op_assign_10(CClassCompetition *pThis, const CClassCompetition &arg0);
};
STATIC_ASSERT_SIZE(CClassCompetition, 2980);


