// Pet.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "VecCtrl/VecCtrl.hpp"
#include "User/User.hpp"
#include "Packet/Packet.hpp"
#include "PetTemplate/PetTemplate.hpp"
#include "Life/Life.hpp"
#include "GW/GW.hpp"

// External
class CUser;

// Level: 0 0xbb82
class CDurationChecker;
// Level: 0 0xbbaa
struct PETLAYER;
// Level: 1 0xb965
class CPet;

class CDurationChecker
{
	// Nested
public:
	class DurationQueue
	{
		// Nested
		// Fields
	private:
		const long m_nCountLimit{};

	private:
		long m_nCount{};

	private:
		long m_nCountTotal{};

	private:
		long m_nDurationTotal{};

	private:
		long index{};

	private:
		ZArray<long> m_atDuration;
		// Methods

	public:
		DurationQueue() : m_nCountLimit(0)
		{
		}

	public:
		~DurationQueue();

	public:
		void _dtor_0();

	public:
		DurationQueue(const CDurationChecker::DurationQueue &arg0);

	public:
		void _ctor_1( const CDurationChecker::DurationQueue &arg0);

	public:
		DurationQueue(long nCountLimit);

	public:
		void _ctor_0( long nCountLimit);

	public:
		long Add(long arg0);

	public:
		void Clear();

	public:
		long GetCountLimit();

	public:
		long GetCount();

	public:
		long GetCountTotal();

	public:
		long GetDurationTotal();
	};
	// Fields
private:
	const long m_nCountMin{};

private:
	const long m_nCountMax{};

private:
	long m_nDurationLimitMin{};

private:
	long m_nDurationLimitMax{};

private:
	const long m_nDurationMin{};

private:
	const long m_nDurationMax{};

private:
	CDurationChecker::DurationQueue m_DurationQueue;
	// Methods
public:
	virtual ~CDurationChecker();

public:
	void _dtor_0();

public:
	CDurationChecker(const CDurationChecker &arg0);

public:
	void _ctor_1( const CDurationChecker &arg0);

public:
	CDurationChecker(long arg0, long arg1, long arg2, long arg3, long arg4, long arg5);

public:
	void _ctor_0( long arg0, long arg1, long arg2, long arg3, long arg4, long arg5);

public:
	CDurationChecker();

public:
	void _ctor_3();

public:
	int32_t Validate(long tDuration);

public:
	void Reset();

public:
	long GetCountLimit();

public:
	long GetCount();

public:
	long GetDurationLimitMin();

public:
	long GetDurationLimitMax();

public:
	void SetDurationLimit(long arg0, long arg1);

public:
	long GetDurationTotal();
};
STATIC_ASSERT_SIZE(CDurationChecker, 52);
struct PETLAYER
{
	// Nested
public:
	enum POSTYPE
{
	POS_GROUND_ORIGIN = 0,
	POS_CENTER = 1
};
	// Fields
public:
	int32_t bFixed{};

public:
	PETLAYER::POSTYPE nPos;

public:
	_x_com_ptr<IWzGr2DLayer> pLayer;
	// Methods
public:
	~PETLAYER();

public:
	void _dtor_0();

public:
	PETLAYER(const PETLAYER &arg0);

public:
	void _ctor_1( const PETLAYER &arg0);

public:
	PETLAYER();

public:
	void _ctor_0();

public:
	PETLAYER &operator=(const PETLAYER &arg0);

public:
	static PETLAYER &_op_assign_3(PETLAYER *pThis, const PETLAYER &arg0);
};
STATIC_ASSERT_SIZE(PETLAYER, 12);
class CPet : public CLife
{
	// Nested
public:
	struct ADDITIONALLAYER
	{
		// Nested
		// Fields
	public:
		long nData{};

	public:
		long nDataForRepeat{};

	public:
		long nEffIndex{};

	public:
		PETLAYER l;
		// Methods
	public:
		~ADDITIONALLAYER();

	public:
		void _dtor_0();

	public:
		ADDITIONALLAYER(const CPet::ADDITIONALLAYER &arg0);

	public:
		void _ctor_1( const CPet::ADDITIONALLAYER &arg0);
	CTOR_DEFAULT(ADDITIONALLAYER);

	public:
		ADDITIONALLAYER();

	public:
		void _ctor_0();

	public:
		void Reset();

	public:
		CPet::ADDITIONALLAYER &operator=(const CPet::ADDITIONALLAYER &arg0);

	public:
		static CPet::ADDITIONALLAYER &_op_assign_4(CPet::ADDITIONALLAYER *pThis, const CPet::ADDITIONALLAYER &arg0);
	};
	// Fields
public:
	CPetTemplate *m_pTemplate{};

public:
	ZArray<long> m_aExceptionList;

protected:
	_x_com_ptr<IWzVector2D> m_pvc;

protected:
	CUser *m_pOwner{};

protected:
	ZXString<char> m_sName;

protected:
	long m_nPetIndex{};

protected:
	_LARGE_INTEGER m_liPetLockerSN;

protected:
	long m_nTameness{};

protected:
	long m_nRepleteness{};

protected:
	long m_nPetAttribute{};

protected:
	int32_t m_bInteractionRequested{};

protected:
	long m_tStand{};

protected:
	int32_t m_bRandomAction{};

protected:
	std::array<CPet::ADDITIONALLAYER, 2> m_aAdditionalLayer;

protected:
	long m_nMoveAction{};

protected:
	long m_nRestAction{};

protected:
	long m_nOneTimeAction{};

protected:
	__POSITION *m_posFrame{};

protected:
	long m_tFrameDelay{};

protected:
	ZArray<ZList<ZRef<CActionMan::PETACTIONFRAMEENTRY>>> m_aAction;

protected:
	ZList<ZRef<CActionMan::PETACTIONFRAMEENTRY>> m_lMultipetHangAction;

protected:
	long m_bHangOnBack{};

protected:
	long m_tHangOnBack{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerAction;

protected:
	std::array<int32_t, 2> _ZtlSecureTear_m_bPickupMeso{};

protected:
	uint32_t _ZtlSecureTear_m_bPickupMeso_CS{};

protected:
	std::array<int32_t, 2> _ZtlSecureTear_m_bPickupItem{};

protected:
	uint32_t _ZtlSecureTear_m_bPickupItem_CS{};

protected:
	std::array<int32_t, 2> _ZtlSecureTear_m_bPickupOthers{};

protected:
	uint32_t _ZtlSecureTear_m_bPickupOthers_CS{};

protected:
	std::array<int32_t, 2> _ZtlSecureTear_m_bLongRange{};

protected:
	uint32_t _ZtlSecureTear_m_bLongRange_CS{};

protected:
	std::array<int32_t, 2> _ZtlSecureTear_m_bSweepForDrop{};

protected:
	uint32_t _ZtlSecureTear_m_bSweepForDrop_CS{};

protected:
	std::array<int32_t, 2> _ZtlSecureTear_m_bConsumeHP{};

protected:
	uint32_t _ZtlSecureTear_m_bConsumeHP_CS{};

protected:
	std::array<int32_t, 2> _ZtlSecureTear_m_bConsumeMP{};

protected:
	uint32_t _ZtlSecureTear_m_bConsumeMP_CS{};

protected:
	std::array<int32_t, 2> _ZtlSecureTear_m_bIgnoreItems{};

protected:
	uint32_t _ZtlSecureTear_m_bIgnoreItems_CS{};

protected:
	std::array<int32_t, 2> _ZtlSecureTear_m_bNameTag{};

protected:
	uint32_t _ZtlSecureTear_m_bNameTag_CS{};

protected:
	std::array<int32_t, 2> _ZtlSecureTear_m_bChatBalloon{};

protected:
	uint32_t _ZtlSecureTear_m_bChatBalloon_CS{};

protected:
	int32_t m_bItemSoltChange{};

protected:
	long m_tItemSoltChange{};

private:
	ZRef<CAttrShoe> m_pAttrShoe;

private:
	SECPOINT m_ptPos;

private:
	SECPOINT m_ptPosPrev;

private:
	tagRECT m_rcPet{};

private:
	int32_t m_bPreviewState{};

private:
	unsigned long m_ptPosCheck{};

private:
	std::array<unsigned long, 2> _ZtlSecureTear_m_dwPosCRC;

private:
	uint32_t _ZtlSecureTear_m_dwPosCRC_CS{};

private:
	CDurationChecker m_DCClient;

private:
	int32_t m_bFirstPetAction{};

private:
	long m_tLastPetAction{};

protected:
	long m_tAutoSpeakingTimer{};
	// Methods
public:
	virtual ~CPet();

public:
	void _dtor_0();

public:
	CPet(const CPet &arg0);

public:
	void _ctor_1( const CPet &arg0);

public:
	CPet();

public:
	void _ctor_0();

public:
	void Init(CUser *pOwner, long nPetID);
	void Init_0(CUser *pOwner, long nPetID) {
		Init(pOwner, nPetID);
	
	}

public:
	void Init(CUser *pOwner, CInPacket &iPacket);
	void Init_1(CUser *pOwner, CInPacket &iPacket) {
		Init(pOwner, iPacket);
	
	}

public:
	unsigned long GetTemplateID();

public:
	const ZXString<char> &GetName();

public:
	const ZXString<char> &GetBasicName();

public:
	int32_t IsNamedPet();

public:
	GW_ItemSlotPet *GetItemSlot();

public:
	long GetLevel();

public:
	CUser *GetOwner();

public:
	_x_com_ptr<IWzVector2D> GetVecCtrl();

	_x_com_ptr<IWzVector2D> GetVecCtrl_0()
	{
		return GetVecCtrl();
	}

	_x_com_ptr<IWzVector2D> GetVecCtrl_1()
	{
		return GetVecCtrl();
	}

public:
	int32_t IsLeft();

public:
	long GetMoveAction();

public:
	void SetMoveAction(long nMA, int32_t bReload);

public:
	void GetBodyRect(tagRECT &rc);

public:
	_LARGE_INTEGER GetPetLockerSN();

public:
	int32_t IsOnPlayingOneTimeAction();

public:
	long GetOneTimeAction();

public:
	void ResetOneTimeAction();

public:
	long GetCurrentAction(long *arg0);

public:
	_x_com_ptr<IWzGr2DLayer> GetLayerAction();

public:
	int32_t ParseCommand(ZXString<char> sChat);

public:
	void ChatCommand(const ZXString<char> &sContent);

public:
	void CursedChatCommand();

public:
	void RandomAction();

public:
	void SetSetItemEffect(long nEffectID, long nEffIndex);

public:
	void SetSetItemBackground(long nEffIndex, int32_t bTeleport);

public:
	void ChatCommandInPreview(const ZXString<char> &s);

public:
	void ShowEffect(long nType, tagPOINT ptOld, tagPOINT ptNew);
	void ShowEffect_0(long nType, tagPOINT ptOld, tagPOINT ptNew)
	{
		ShowEffect(nType, ptOld, ptNew);
	}

public:
	void ShowEffect(long arg0);
	void ShowEffect_1(long arg0)
	{
		ShowEffect(arg0);
	}

public:
	virtual void Update();

public:
	void TryPickUpDrop();

public:
	int32_t SendDropPickUpRequest(const tagPOINT &pt, unsigned long dwID, unsigned long dwCliCrc, unsigned long dwRectCrc);

public:
	void SetShoeAttr();

public:
	uint16_t GetUpgradePetSkill();

public:
	int32_t IsUpgradePetSkillChanged(uint16_t arg0);

public:
	void SendUpdateExceptionListRequest(ZArray<long> &aList);

public:
	int32_t IsInExceptionListPet(long nItemID);

public:
	void SetPreviewState();

public:
	void SetPetIndex(long arg0);

public:
	long GetPetIndex();

public:
	void SetPositionContext(long nPositonContext);

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

public:
	void OnMove(CInPacket &iPacket);

public:
	void OnAction(CInPacket &iPacket);

public:
	void OnNameChanged(CInPacket &iPacket);

public:
	void OnActionCommand(CInPacket &iPacket);

public:
	void OnAvatarModified();

public:
	void OnValidateStat();

public:
	void OnLoadExceptionList(CInPacket &iPacket);

public:
	long GetPetNameTagRing();

private:
	void DoAction(long nType, long nAction, Ztl_bstr_t sChat, int32_t bSend, int32_t bChatBalloon, int32_t bIgnoreOnPlayingOneTimeAction);

public:
	long DoActionByUserAction(long nUserAction);

public:
	int32_t IsInterActPetByUserAction();

private:
	void HangOnBack(int32_t bHangOnBack, int32_t bForce);

protected:
	CPet::ADDITIONALLAYER *GetAdditionalLayer(long nType);

protected:
	CPet::ADDITIONALLAYER *RemoveAdditionalLayer(long nType);

protected:
	void UpdateAdditionalLayer();

protected:
	int32_t LoadLayer(Ztl_bstr_t bsUOL, int32_t bLeft, PETLAYER &l, long *pnRepeatStartIndex);

protected:
	void ClearActionLayer();

protected:
	void PrepareActionLayer();

protected:
	void SetLayerZ();

protected:
	long MoveAction2RawAction(long nMA, long *pnDir);

public:
	int32_t CanPickupMeso();

public:
	int32_t CanPickupItem();

public:
	int32_t CanPickupOthers();

public:
	int32_t IsLongRange();

public:
	int32_t SweepForDrop();

public:
	int32_t CanConsumeHP();

public:
	int32_t CanConsumeMP();

public:
	int32_t CanIgnoreItems();

public:
	int32_t HaveNameTagRing();

public:
	int32_t HaveChatBalloonRing();

public:
	int32_t IsInPickupForbiddenMap();

public:
	void UpdatePetAbility();

public:
	int32_t IsItemSoltChangeEnded(long nItemID);

public:
	void BeginItemSoltChange();

public:
	void EndItemSoltChange();

protected:
	int32_t __fastcall _ZtlSecureGet_m_bPickupMeso() const;

protected:
	int32_t __fastcall _ZtlSecurePut_m_bPickupMeso(int32_t arg0);

protected:
	int32_t __fastcall _ZtlSecureGet_m_bPickupItem() const;

protected:
	int32_t __fastcall _ZtlSecurePut_m_bPickupItem(int32_t arg0);

protected:
	int32_t __fastcall _ZtlSecureGet_m_bPickupOthers() const;

protected:
	int32_t __fastcall _ZtlSecurePut_m_bPickupOthers(int32_t arg0);

protected:
	int32_t __fastcall _ZtlSecureGet_m_bLongRange() const;

protected:
	int32_t __fastcall _ZtlSecurePut_m_bLongRange(int32_t arg0);

protected:
	int32_t __fastcall _ZtlSecureGet_m_bSweepForDrop() const;

protected:
	int32_t __fastcall _ZtlSecurePut_m_bSweepForDrop(int32_t arg0);

protected:
	int32_t __fastcall _ZtlSecureGet_m_bConsumeHP() const;

protected:
	int32_t __fastcall _ZtlSecurePut_m_bConsumeHP(int32_t arg0);

protected:
	int32_t __fastcall _ZtlSecureGet_m_bConsumeMP() const;

protected:
	int32_t __fastcall _ZtlSecurePut_m_bConsumeMP(int32_t arg0);

protected:
	int32_t __fastcall _ZtlSecureGet_m_bIgnoreItems() const;

protected:
	int32_t __fastcall _ZtlSecurePut_m_bIgnoreItems(int32_t arg0);

protected:
	int32_t __fastcall _ZtlSecureGet_m_bNameTag() const;

protected:
	int32_t __fastcall _ZtlSecurePut_m_bNameTag(int32_t arg0);

protected:
	int32_t __fastcall _ZtlSecureGet_m_bChatBalloon() const;

protected:
	int32_t __fastcall _ZtlSecurePut_m_bChatBalloon(int32_t arg0);

private:
	unsigned long __fastcall _ZtlSecureGet_m_dwPosCRC() const;

private:
	unsigned long __fastcall _ZtlSecurePut_m_dwPosCRC(unsigned long arg0);

public:
	static int32_t __cdecl IsRestAction(long arg0);

public:
	void AutoSpeakingByEvent(long nEvent);

public:
	void AutoSpeakingByRandom();

public:
	void SetRestAction();

public:
	void SetAngryAction();

	CLASS_RTTI_(CPet, CLife);
};
STATIC_ASSERT_SIZE(CPet, 584);


