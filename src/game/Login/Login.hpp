// Login.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"
#include <nb30.h>
#include <iphlpapi.h>

#include "Wnd/Wnd.hpp"
#include "GW/GW.hpp"
#include "MapLoadable/MapLoadable.hpp"
#include "Dialog/Dialog.hpp"
#include "LoginWnd_Etc/LoginWnd_Etc.hpp"
#include "AdminShopDlg/AdminShopDlg.hpp"
#include "FadeWnd/FadeWnd.hpp"
#include "Packet/Packet.hpp"
#include "Avatar/Avatar.hpp"

// Level: 0 0x1c4ad
class AvatarData;
// Level: 1 0xcf71
class CLogin;
// Level: 1 0x1345d
class CLoginGradeWnd;
// Level: 1 0x21e31
class CConnectionNoticeDlg;

class CUILoginStart;

#pragma pack(push, 1)
class AvatarData
{
	// Nested
	// Fields
public:
	GW_CharacterStat characterStat;

public:
	AvatarLook avatarLook;
	// Methods
public:
	~AvatarData();

public:
	void _dtor_0();

public:
	AvatarData(const AvatarData &arg0);

public:
	void _ctor_1(const AvatarData &arg0);

public:
	AvatarData();

public:
	void _ctor_0();

public:
	void Encode(COutPacket &arg0);

public:
	void Decode(CInPacket &arg0);

public:
	AvatarData &operator=(const AvatarData &__that);

public:
	static AvatarData &_op_assign_5(AvatarData *pThis, const AvatarData &__that);
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(AvatarData, 766);
class CLogin : public CMapLoadable
{
	// Nested
public:
	struct CHANNELITEM
	{
		// Nested
		// Fields
	public:
		ZXString<char> sName;

	public:
		long nUserNo{};

	public:
		long nWorldID{};

	public:
		long nChannelID{};

	public:
		int32_t bAdultChannel{};
		// Methods
	public:
		~CHANNELITEM();

	public:
		void _dtor_0();

	public:
		CHANNELITEM(const CLogin::CHANNELITEM &arg0);

	public:
		void _ctor_1(const CLogin::CHANNELITEM &arg0);

	public:
		CHANNELITEM();

	public:
		void _ctor_0();

	public:
		CLogin::CHANNELITEM &operator=(const CLogin::CHANNELITEM &arg0);

	public:
		static CLogin::CHANNELITEM &_op_assign_3(CLogin::CHANNELITEM *pThis, const CLogin::CHANNELITEM &arg0);
	};

public:
	struct WORLDITEM
	{
		// Nested
		// Fields
	public:
		long nWorldID{};
		ZXString<char> sName;
		long nWorldState{};
		ZXString<char> sWorldEventDesc;
		long nWorldEventEXP_WSE{};
		long nWorldEventDrop_WSE{};
		long nBlockCharCreation{};
		ZArray<CLogin::CHANNELITEM> ci;
		// Methods
	public:
		~WORLDITEM();

	public:
		void _dtor_0();

	public:
		WORLDITEM(const CLogin::WORLDITEM &arg0);

	public:
		void _ctor_1(const CLogin::WORLDITEM &arg0);

	public:
		WORLDITEM();

	public:
		void _ctor_0();

	public:
		CLogin::WORLDITEM &operator=(const CLogin::WORLDITEM &arg0);

	public:
		static CLogin::WORLDITEM &_op_assign_3(CLogin::WORLDITEM *pThis, const CLogin::WORLDITEM &arg0);
	};

public:
	struct NEWEQUIP
	{
		// Nested
		// Fields
	public:
		long nGender{};

	public:
		long nType{};

	public:
		long nItemId{};
		// Methods
	};

public:
	struct RANK
	{
		// Nested
		// Fields
	public:
		long nWorldRank{};

	public:
		long nWorldRankGap{};

	public:
		long nJobRank{};

	public:
		long nJobRankGap{};
		// Methods
	};

public:
	struct BALLOON
	{
		// Nested
		// Fields
	public:
		long nX{};

	public:
		long nY{};

	public:
		ZXString<char> sMessage;
		// Methods
	public:
		~BALLOON();

	public:
		void _dtor_0();

	public:
		BALLOON(const CLogin::BALLOON &arg0);

	public:
		void _ctor_1(const CLogin::BALLOON &arg0);

	public:
		BALLOON();

	public:
		void _ctor_0();

	public:
		CLogin::BALLOON &operator=(const CLogin::BALLOON &arg0);

	public:
		static CLogin::BALLOON &_op_assign_3(CLogin::BALLOON *pThis, const CLogin::BALLOON &arg0);
	};

public:
	struct ASITEM
	{
		// Nested
		// Fields
	public:
		long nItemId{};

	public:
		ZXString<char> sItemName;
		// Methods
	public:
		~ASITEM();

	public:
		void _dtor_0();

	public:
		ASITEM(const CLogin::ASITEM &arg0);

	public:
		void _ctor_1(const CLogin::ASITEM &arg0);

	public:
		ASITEM();

	public:
		void _ctor_0();

	public:
		CLogin::ASITEM &operator=(const CLogin::ASITEM &arg0);

	public:
		static CLogin::ASITEM &_op_assign_3(CLogin::ASITEM *pThis, const CLogin::ASITEM &arg0);
	};

public:
	enum LS_
	{
		LS_TITLE = 0,
		LS_WORLDSELECT = 1,
		LS_CHARSELECT = 2,
		LS_NEWCHAR_RACE = 3,
		LS_NEWCHAR_NAME = 4,
		LS_VIEWALLCHAR = 5,
		LS_NO = 6
	};
	enum LSS_NEWCHAR_
	{
		LSS_NEWCHAR_NAME = 0,
		LSS_NEWCHAR_JOB = 1,
		LSS_NEWCHAR_AVATAR = 2
	};
	// Fields
protected:
	ZRef<CConnectionNoticeDlg> m_pConnectionDlg;
	int32_t m_bIsWaitingVAC{};
	int32_t m_bIsVACDlgOn{};
	long m_tSentTimeVACPacket{};
	long m_nCountRelatedSvrs{};
	long m_nCountCharacters{};
	long m_nCountDataReceivedCharacters{};
	int32_t m_bRecommandWorld{};
	ZArray<AvatarData> m_aAvatarDataVAC;
	ZArray<CLogin::RANK> m_aRankVAC;
	ZArray<unsigned long> m_adwCharacterID;
	ZArray<ZXString<char>> m_asCharacterName;
	ZArray<long> m_anWorldID;
	ZFatalSection m_lock_Avatar;
	ZFatalSection m_lock_CountSvr;
	ZFatalSection m_lock_Character;
	_x_com_ptr<IWzGr2DLayer> m_pLayerBook;
	long m_nFadeOutLoginStep{};
	long m_tStartFadeOut{};
	long m_nLoginStep{};
	long m_tStepChanging{};
	int32_t m_bRequestSent{};
	unsigned char m_bLoginOpt{};
	int32_t m_bQuerySSNOnCreateNewCharacter{};
	long m_nSlotCount{};
	long m_nBuyCharCount{};
	long m_nBaseStep{};
	int32_t m_bTerminate{};
	IUIMsgHandler *m_pFocusedUI{};
	ZArray<CLogin::WORLDITEM> m_WorldItem;
	long m_nCharSelected{};
	ZArray<AvatarData> m_aAvatarData;
	ZArray<CLogin::RANK> m_aRank;
	ZArray<int> m_abOnFamily;
	ZList<CLogin::NEWEQUIP> m_lNewEquip;
	unsigned char m_nRegStatID{};
	_x_com_ptr<IWzGr2DLayer> m_pLayerLight;
	_x_com_ptr<IWzGr2DLayer> m_pLayerDust;
	ZRef<CAvatar> m_pNewAvatar;
	ZRef<CUILoginStart> m_pLoginStart;
	ZRef<CFadeWnd> m_pLoginDesc0;
	ZRef<CFadeWnd> m_pLoginDesc1;
	ZRef<CDialog> m_pChildModal;
	ZXString<char> m_sEventCharacterID;
	long m_nBalloonCount{};
	ZArray<CLogin::BALLOON> m_aBalloon;
	long m_nLatestConnectedWorldID{};
	int32_t m_bRecommendWorldMsgLoaded{};
	ZArray<RECOMMENDWORLDMSG> m_aRecommendWorldMsg;
	long m_nCurSelectedRace{};
	short m_nCurSelectedSubJob{};
	std::array<ZXString<char>, 5> m_aCmd{};
	unsigned long m_tFadeInRemain{};
	int32_t m_bNeedAgreement{};
	unsigned char m_nGender{};
	long m_nSubStep{};

private:
	int32_t m_bSubStepChanged{};
	ZXString<char> m_sCheckedName;
	std::array<ZArray<CLogin::ASITEM>, 9> m_aMaleItem{};
	std::array<ZArray<CLogin::ASITEM>, 9> m_aFemaleItem{};
	int32_t m_bCharSale{};
	long m_nCharSaleJob{};

protected:
	int32_t m_bCanHaveExtraChar{};
	// Methods
public:
	virtual ~CLogin();

public:
	void _dtor_0();

public:
	CLogin(const CLogin &arg0);

public:
	void _ctor_1(const CLogin &arg0);

	CTOR_DEFAULT(CLogin)
public:
	CLogin();

public:
	void _ctor_0();

public:
	virtual void Init(void *pParam);

public:
	virtual void Close();

public:
	virtual void Update();

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnPacket(long nType, CInPacket &iPacket);

public:
	void ChangeStep(long nStep);

public:
	void ChangeStepImmediate(long nStep);

public:
	void OnStepChanged();

public:
	void SetSubStep(long arg0);

public:
	void OnNewCharStep(int32_t bCharSale);

public:
	void SetCharSelected(long arg0);

public:
	void OnSelectedCharChanged(long nIdx);

public:
	void OnNewCharCanceled();

public:
	void OnNewCharAvatarSelCanceled();

public:
	void OnNewCharJobSel();

public:
	void OnNewCharJobSelCanceled();

public:
	void OnAvatarChanged();

public:
	void OnCancleRaceSelect();

public:
	long GetWorldItemCount();

public:
	CLogin::WORLDITEM *GetWorldItem(long arg0);

public:
	GW_CharacterStat &GetCharacterStat();

public:
	GW_CharacterStat &GetCharacterStatVAC();

public:
	long GetCharSelected();

public:
	ZList<CLogin::NEWEQUIP> &GetNewEquip();

public:
	CLogin::RANK &GetRank(long arg0);

public:
	CLogin::RANK &GetRankVAC(long arg0);

public:
	int32_t IsRequestSent() const;
	bool CheckValidStep(long ls) const;

public:
	long GetLoginStep() const;

public:
	long GetBaseStep() const;

public:
	ZXString<char> GetEventCharacterID();

public:
	long GetBalloonCount() const;

public:
	ZArray<CLogin::BALLOON> GetBalloonInfo();

public:
	int32_t IsStepChanging() const;

public:
	ZArray<RECOMMENDWORLDMSG> &GetRecommendWorldMsg();

public:
	CUILoginStart *GetUILoginStart();

public:
	void SendRequest(COutPacket &oPacket);

public:
	int32_t SendCheckPasswordPacket(const char *sID, const char *sPasswd);

public:
	int32_t SendGuestIDLoginPacket();

public:
	int32_t SendLoginPacket(long nWorldID, long nChannelID);

public:
	void SendDeleteCharPacket();

public:
	void SendSelectCharPacket();

public:
	void SendSelectCharPacketByVAC();

public:
	void SendNewCharPacket();

public:
	void SendNewCharPacket_Ex();

public:
	void SendCheckDuplicateIDPacket(const ZXString<char> &sCharName);

public:
	void GotoTitle(int32_t bAsk, IUIMsgHandler *pFocus);

public:
	void ExitGame(int32_t bAsk, IUIMsgHandler *pFocus);

public:
	void CloseChannelSelect();

public:
	void GotoWorldSelect(int32_t bFromVAC);

public:
	void CloseLoginDescWnd(CFadeWnd *pWnd);

public:
	long GetSlotCount() const;

public:
	long GetBuyCharacterCount() const;

public:
	void SetFocusedUI(IUIMsgHandler *arg0);

public:
	IUIMsgHandler *GetFocusedUI() const;

public:
	void SendCheckUserLimitPacket(long nWorldIdx);

public:
	void SendSetGenderPacket(unsigned char nGender);

public:
	void SendCancelGenderPacket();

public:
	void OnSetAccountResult(CInPacket &iPacket);

public:
	void OnConfirmEULAResult(CInPacket &iPacket);

public:
	void OnCheckPinCodeResult(CInPacket &iPacket);

public:
	void OnUpdatePinCodeResult(CInPacket &iPacket);

public:
	ZXString<char> GetCheckedName();

public:
	void SetCheckedName(const ZXString<char> &sCharName);

public:
	void InitNewCharEquip();

public:
	ZXString<char> GetNewCharEquipName(long nIdx);

public:
	void ShiftNewCharEquip(long item, long arg1);

public:
	long ConvertSelectedRaceToUIRace() const;

protected:
	void OnCheckPasswordResult(CInPacket &arg0);

protected:
	void OnGuestIDLoginResult(CInPacket &iPacket);

protected:
	void OnAccountInfoResult(CInPacket &iPacket);

protected:
	void OnCheckUserLimitResult(CInPacket &iPacket);

protected:
	void OnWorldInformation(CInPacket &iPacket);

protected:
	void OnSelectWorldResult(CInPacket &iPacket);

protected:
	void OnCheckDuplicatedIDResult(CInPacket &iPacket);

protected:
	void OnDeleteCharacterResult(CInPacket &iPacket);

protected:
	void OnCreateNewCharacterResult(CInPacket &iPacket);

protected:
	void OnSelectCharacterResult(CInPacket &iPacket);

protected:
	void OnEnableSPWResult(CInPacket &iPacket);

protected:
	void OnCheckSPWResult(CInPacket &iPacket);

protected:
	void OnLatestConnectedWorld(CInPacket &iPacket);

protected:
	void OnRecommendWorldMessage(CInPacket &iPacket);

protected:
	void OnViewAllCharResult(CInPacket &iPacket);

protected:
	void OnSelectCharacterByVACResult(CInPacket &iPacket);

public:
	void DrawNoticeConnecting();

public:
	void RemoveNoticeConnecting();

public:
	void SetWaitingForVAC();

public:
	int32_t SendViewAllCharPacket();

public:
	void ResetVAC();

public:
	void MakeVACDlg();

public:
	void EnableLoginStartCtrl(long nEnable);

public:
	void SetRecommandWorld(int32_t arg0);

public:
	long GetVACCharCount();

public:
	void SetVACCharCount();

public:
	long VACCharacterDataReceived();

public:
	long GetWorldIDfromCharIdx(long nStep);

public:
	ZXString<char> GetWorldNamefromCharIdx(long nIdx);

protected:
	long GetStepHeight(long nStep);

protected:
	void LoadNewCharInfo();

protected:
	void RecoverPassport();

public:
	int32_t IsRecommendWorldMsgAvailable();

public:
	void ViewRecommendWorld(int32_t bView);

public:
	void SetSelectedRace(long arg0);

public:
	long GetSelectedRace() const;

public:
	void SetSelectedSubJob(short arg0);

public:
	short GetSelectedSubJob() const;

public:
	void ResetRaceAndSubJob();

public:
	void OnAcceptLicense();

public:
	void OnDenyLicense();

public:
	int32_t CheckLicenseAgreement();

public:
	unsigned char GetNewCharacterGender() const;

public:
	void SetNewCharacterGender(unsigned char nGender);

public:
	void ChangeNewCharacterGender();

protected:
	void GetLocalMacAddress(ZXString<char> &sMacAddress);

protected:
	void GetLocalMacAddressWithHDDSerialNo(ZXString<char> &sMacAddressWithHDDSerial);

	CLASS_RTTI_(CLogin, CMapLoadable);

private:
	void GetSelectedAL(AvatarLook &al);

	void GetSelectedAL_1(AvatarLook &al)
	{
		GetSelectedAL(al);
	}

private:
	long GetSelectedAL(long nIdx);
	long GetSelectedAL_0(long nIdx)
	{
		return GetSelectedAL(nIdx);
	}

private:
	ZXString<char> GetNewCharItemName(long nGender, long nType, long nItemID);

public:
	long GetCharSaleJob();

public:
	void ShiftCharSaleJob(long arg0);

public:
	void ReSetExtraCharInfo();

public:
	int32_t CanGetExtraChar(long arg0);

public:
	void SendExtraCharInfoPacket();

public:
	void OnExtraCharInfoResult(CInPacket &iPacket);

public:
	CLogin &operator=(const CLogin &arg0);

public:
	static CLogin &_op_assign_129(CLogin *pThis, const CLogin &arg0);
};
STATIC_ASSERT_SIZE(CLogin, 712);
class CLoginGradeWnd : public CWnd, public TSingleton<CLoginGradeWnd>
{
	// Nested
	// Fields
	// Methods
public:
	virtual ~CLoginGradeWnd();

public:
	void _dtor_0();

public:
	CLoginGradeWnd(const CLoginGradeWnd &arg0);

public:
	void _ctor_1(const CLoginGradeWnd &arg0);

public:
	CLoginGradeWnd();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	CLoginGradeWnd &operator=(const CLoginGradeWnd &arg0);

public:
	static CLoginGradeWnd &_op_assign_4(CLoginGradeWnd *pThis, const CLoginGradeWnd &arg0);
};
STATIC_ASSERT_SIZE(CLoginGradeWnd, 128);
class CConnectionNoticeDlg : public CDialog, public TSingleton<CConnectionNoticeDlg>
{
	// Nested
public:
	enum ID_CTRL_BT_CANCEL
	{
		ID_CTRL_BT_CANCEL = 1000
	};
	// Fields

private:
	SINGLETON_PAD;

protected:
	CLogin *m_pLogin{};

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerAnimationBar;
	// Methods
public:
	virtual ~CConnectionNoticeDlg();

public:
	void _dtor_0();

public:
	CConnectionNoticeDlg(const CConnectionNoticeDlg &arg0);

public:
	void _ctor_1(const CConnectionNoticeDlg &arg0);

public:
	CConnectionNoticeDlg(CLogin *pLogin);

public:
	void _ctor_0(CLogin *pLogin);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	CConnectionNoticeDlg &operator=(const CConnectionNoticeDlg &arg0);

public:
	static CConnectionNoticeDlg &_op_assign_7(CConnectionNoticeDlg *pThis, const CConnectionNoticeDlg &arg0);
};
STATIC_ASSERT_SIZE(CConnectionNoticeDlg, 164);
