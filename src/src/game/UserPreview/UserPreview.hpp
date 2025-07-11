// UserPreview.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Packet/Packet.hpp"
#include "User/User.hpp"
#include "Stat/Stat.hpp"

// Level: 1 0xbbfb
class CUserPreview;

class CUserPreview : public CUser, public TSingleton<CUserPreview>
{
	// Nested
	// Fields
protected:
	long m_tLastShootAttack{};

protected:
	long m_tDelay{};

protected:
	long m_nBulletItemID{};

protected:
	int32_t m_bMobDieAction{};

protected:
	long m_nMessageBoxSN{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerMessageBox;

protected:
	_x_com_ptr<IWzVector2D> m_pvecMessageBox;

protected:
	tagPOINT m_nMessageBoxPos{};

protected:
	long m_nPersonalShopSN{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerPersonalShop;

protected:
	int32_t m_bStun{};

protected:
	long m_nEntrustedShopSN{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerShopFront;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerShopBack;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerShopSignBoard;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerEmployee;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerEffect;

protected:
	std::array<_x_com_ptr<IWzGr2DLayer>, 5> m_pLayerFireCrack;

protected:
	long m_tLastEmployeeFlip{};

protected:
	int32_t m_bADBoardPreview{};
	// Methods
public:
	virtual ~CUserPreview();

public:
	void _dtor_0();

public:
	CUserPreview(const CUserPreview &arg0);

public:
	void _ctor_1( const CUserPreview &arg0);

public:
	CUserPreview();

public:
	void _ctor_0();

public:
	void Init_(long arg0, long arg1);

public:
	void Init();

public:
	void InitObjects();

public:
	virtual unsigned char GetCharacterLevel();

public:
	virtual const SecondaryStat &GetSecondaryStat();

public:
	virtual int32_t IsLocalUser();

public:
	virtual int32_t IsPreview();

public:
	virtual int32_t IsRemoteUser();

public:
	virtual long OnPetActivated(CInPacket &iPacket);

public:
	virtual long GetJobCode();

public:
	void SetPet(long nPetID);

public:
	void SetRiding(long nTamingMobID);

public:
	virtual void Update();

public:
	void OnChat(ZXString<char> sText);

public:
	void DoMeleeAttack(long nWeaponItemID, long nAttackActionType);

public:
	void DoShootAttack(long nWeaponItemID, long nBulletItemID);

public:
	void ShowMessageBox(long arg0, long arg1);

public:
	void ShowPersonalShop(long arg0, long arg1);

public:
	void ShowEntrustedShop(long arg0, long arg1);

public:
	void ShowADBoard(long nItemID, long nCommSN);

public:
	void ShowFireCrack(long arg0);

public:
	void DeleteFireCrack();

public:
	long GetMessageBoxSN();

public:
	long GetPersonalShopSN();

public:
	long GetEntrustedShopSN();

public:
	virtual const ZRef<CAttrShoe> GetShoeAttr();

public:
	void SetStun(int32_t arg0);

public:
	int32_t IsStun();

protected:
	void ShowMobHitByBullet();

	CLASS_RTTI_(CUserPreview, CUser);

public:
	CUserPreview &operator=(CUserPreview &arg0);

public:
	static CUserPreview &_op_assign_35(CUserPreview *pThis, CUserPreview &arg0);
};
STATIC_ASSERT_SIZE(CUserPreview, 15144);
