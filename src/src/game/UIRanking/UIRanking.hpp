// UIRanking.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "WebWnd/WebWnd.hpp"

// Level: 1 0x1142e
class CUIRanking;

class CUIRanking : public CWebWnd
{
	// Nested
public:
	enum  ID_CTRL_RANKING_TAB
{
	ID_CTRL_RANKING_TAB = 1000
};
enum  TAB_NO
{
	TAB_NO = 1
};
	// Fields
protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerLoading;
	// Methods
public:
	virtual ~CUIRanking();

public:
	void _dtor_0();

public:
	CUIRanking(const CUIRanking &arg0);

public:
	void _ctor_1( const CUIRanking &arg0);

public:
	CUIRanking();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual void Update();

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnNavigateComplete(const char *url);

public:
	virtual void OnBeforeNavigate(const char *url);

	CLASS_RTTI_(CUIRanking, CWebWnd);

public:
	CUIRanking &operator=(const CUIRanking &arg0);

public:
	static CUIRanking &_op_assign_12(CUIRanking *pThis, const CUIRanking &arg0);
};
STATIC_ASSERT_SIZE(CUIRanking, 2960);


