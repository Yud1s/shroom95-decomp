// UIDragonBox.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "UIWnd/UIWnd.hpp"

// Level: 1 0x118e6
class CUIDragonBox;

class CUIDragonBox : public CUIWnd, public TSingleton<CUIDragonBox>
{
	// Nested
public:
	enum  ID_CTRL_UIDRAGONBOX_SUMMON
{
	ID_CTRL_UIDRAGONBOX_SUMMON = 2000
};
enum  k
{
	kWidth = 160,
	kHeight = 200,
	kBtClose_X = 125,
	kBtClose_Y = 12
};

	// Fields
protected:
	ZRef<CCtrlButton> m_pBtSummon;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerDragonBoxWnd;

protected:
	int32_t bAbleToSummon{};

private:
	long m_tRemainTime{};

private:
	long m_tLastUpdate{};
	// Methods
public:
	virtual ~CUIDragonBox();

public:
	void _dtor_0();

public:
	CUIDragonBox(const CUIDragonBox &arg0);

public:
	void _ctor_1( const CUIDragonBox &arg0);

	CTOR_DEFAULT(CUIDragonBox);
public:
	CUIDragonBox();

public:
	void _ctor_0();

public:
	void SetOrb(long nOrb, int32_t bAbleToSummonByServer);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Update();

public:
	virtual void OnChildNotify(uint32_t uId, uint32_t param1, uint32_t param2);

	CLASS_RTTI_(CUIDragonBox, CUIWnd);

protected:
	void SetLayer();

protected:
	void SetLayerSize(long arg0, long arg1);

public:
	void SetRemainTimeMin(long arg0);

private:
	void ShowToolTip();

public:
	CUIDragonBox &operator=(const CUIDragonBox &arg0);

public:
	static CUIDragonBox &_op_assign_19(CUIDragonBox *pThis, const CUIDragonBox &arg0);
};
STATIC_ASSERT_SIZE(CUIDragonBox, 2848);

