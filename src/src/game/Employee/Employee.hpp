// Employee.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

//#include "ActionMan/ActionMan.hpp"
#include "VecCtrl/VecCtrl.hpp"
#include "Packet/Packet.hpp"
#include "ChatBalloon/ChatBalloon.hpp"
#include "EmployeeTemplate/EmployeeTemplate.hpp"
#include "Life/Life.hpp"
#include "ActionMan/ActionMan.hpp"

// Level: 1 0x10907
class CEmployee;

class CEmployee : public CLife
{
	// Nested
	// Fields
protected:
	unsigned long m_dwEmployerID{};

protected:
	CEmployeeTemplate *m_pTemplate{};

protected:
	long m_nMiniRoomType{};

protected:
	unsigned long m_dwMiniRoomSN{};

protected:
	ZXString<char> m_sNameTag;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerAction;

protected:
	_x_com_ptr<IWzVector2D> m_pvc;

protected:
	long m_nMoveAction{};

protected:
	long m_nOneTimeAction{};

protected:
	__POSITION *m_posFrame{};

protected:
	long m_tFrameDelay{};

protected:
	ZArray<ZList<ZRef<CActionMan::EMPLOYEEACTIONFRAMEENTRY>>> m_aAction;

private:
	ZRef<CAttrShoe> m_pAttrShoe;

private:
	tagPOINT m_ptPos{};

private:
	tagRECT m_rcBalloon{};
	// Methods
public:
	virtual ~CEmployee();

public:
	void _dtor_0();

public:
	CEmployee(const CEmployee &arg0);

public:
	void _ctor_1( const CEmployee &arg0);

public:
	CEmployee(unsigned long dwEmployerID, CEmployeeTemplate *pEmployeeTemplate);

public:
	void _ctor_0( unsigned long dwEmployerID, CEmployeeTemplate *pEmployeeTemplate);

public:
	unsigned long GetEmployerID();

public:
	unsigned long GetTemplateID();

public:
	unsigned long GetMiniRoomSN();

public:
	unsigned long GetMiniRoomType();

public:
	ZXString<char> GetNameTag();

public:
	void Init(CInPacket &iPacket);

public:
	void SetBalloon(CInPacket &iPacket);

public:
	long GetMoveAction();

public:
	void SetMoveAction(long arg0);

public:
	int32_t IsOnPlayingOneTimeAction();

public:
	long GetOneTimeAction();

public:
	void ResetOneTimeAction();

public:
	long GetCurrentAction(long *arg0);

public:
	virtual void Update();

public:
	virtual long GetType();

public:
	virtual long OnResolveMoveAction(long nInputX, long nInputY, long nCurMoveAction, const CVecCtrl *pvc);

public:
	virtual void OnLayerZChanged(const CVecCtrl *pvc);

public:
	virtual const ZRef<CAttrShoe> GetShoeAttr();

public:
	virtual const tagPOINT GetPos();

public:
	virtual const tagPOINT GetPosPrev();

public:
	virtual long GetZMass();

protected:
	void ClearActionLayer();

protected:
	void PrepareActionLayer();

protected:
	void SetLayerZ();

public:
	const CChatBalloon &GetChatBalloon();

public:
	void GetMiniRoomBalloonRect(tagRECT &arg0);
	CLASS_RTTI_(CEmployee, CLife);

public:
	CEmployee &operator=(const CEmployee &arg0);

public:
	static CEmployee &_op_assign_32(CEmployee *pThis, const CEmployee &arg0);
};
STATIC_ASSERT_SIZE(CEmployee, 216);

CEmployee *__cdecl CreateEmployee(unsigned long dwEmployerID, CEmployeeTemplate *pEmployeeTemplate);
