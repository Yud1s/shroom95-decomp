// Field.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "ext/ext_field.h"
#include "FieldCommon/FieldCommon.hpp"

#include "UICharacterSale/UICharacterSale.hpp"
#include "AdminShopDlg/AdminShopDlg.hpp"
#include "Packet/Packet.hpp"
#include "MapLoadable/MapLoadable.hpp"
#include "UIGoldHammer/UIGoldHammer.hpp"
#include "CakePieEvent/CakePieEvent.hpp"
#include "UIToolTip/UIToolTip.hpp"
#include "Field_GuildBoss/Field_GuildBoss.hpp"
#include "DBBasic/DBBasic.hpp"
#include "Avatar/Avatar.hpp"

class CUser;

// Level: 0 0x6124
struct DYNAMIC_OBJ_INFO;
// Level: 1 0x22ef2
class CSnowBall;
// Level: 1 0x2307e
class CField_MonsterCarnivalS2_Game;
// Level: 1 0x22edc
class CSnowMan;
// Level: 1 0x61eb
class CField;
// Level: 1 0x23172
class CHealer;
// Level: 2 0x232c6
class CField_AranTutorial;
// Level: 2 0x2306d
class CField_MonsterCarnivalWaitingRoom;
// Level: 2 0xd22b
class CField_Tournament;
// Level: 2 0x2310f
class CField_LimitedView;
// Level: 2 0x23163
class CField_GuildBoss;
// Level: 2 0x22e1f
class CField_WeddingPhoto;

struct MOVING_OBJ_INFO
{
	// Nested
	// Fields
public:
	long nSpeed{};

public:
	long nX1{};

public:
	long nX2{};

public:
	long nY1{};

public:
	long nY2{};

public:
	long nCurX{};

public:
	long nCurY{};

public:
	int32_t bReverseVertical{};

public:
	int32_t bReverseHorizontal{};

public:
	int32_t bMoving{};

public:
	long nLastTime{};
	// Methods
	/*public:    MOVING_OBJ_INFO();
		public: void _ctor_0();*/
};
STATIC_ASSERT_SIZE(MOVING_OBJ_INFO, 44);

struct DYNAMIC_OBJ_INFO
{
	// Nested
	// Fields
public:
	ZList<long> m_ldwFootHoldSN;

public:
	long nStartState{};

public:
	long nEndState{};

public:
	long nTime{};

public:
	long nCurState{};

public:
	ZXString<char> sObjName;

public:
	ZRef<MOVING_OBJ_INFO> sMovingObjInfo;
	// Methods
public:
	~DYNAMIC_OBJ_INFO();

public:
	void _dtor_0();

public:
	DYNAMIC_OBJ_INFO(const DYNAMIC_OBJ_INFO &arg0);

public:
	void _ctor_1(const DYNAMIC_OBJ_INFO &arg0);

public:
	DYNAMIC_OBJ_INFO();

public:
	void _ctor_0();

public:
	DYNAMIC_OBJ_INFO &operator=(const DYNAMIC_OBJ_INFO &arg0);

public:
	static DYNAMIC_OBJ_INFO &_op_assign_3(DYNAMIC_OBJ_INFO *pThis, const DYNAMIC_OBJ_INFO &arg0);
};
STATIC_ASSERT_SIZE(DYNAMIC_OBJ_INFO, 48);
class CSnowBall : public ZRefCounted
{

public:
	// TODO
	static int32_t ms_nDeltaX;

public:
	static int32_t ms_anDelay[10];
	// Nested
	// Fields
protected:
	long m_nXPos{};

protected:
	long m_nXPosDifference{};

protected:
	long m_nSpeedDegree{};

protected:
	long m_tElapsed{};

protected:
	ZXString<char> m_sPortalName;

protected:
	tagRECT m_rcArea{};

protected:
	_x_com_ptr<IWzVector2D> m_pVecOrg;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayer;
	// Methods
public:
	virtual ~CSnowBall();

public:
	void _dtor_0();

public:
	CSnowBall(const CSnowBall &arg0);

public:
	void _ctor_1(const CSnowBall &arg0);

	CTOR_DEFAULT(CSnowBall)
public:
	CSnowBall();

public:
	void _ctor_0();

public:
	void Init(long x, long y, const ZXString<char> &sPortalName, const wchar_t *sUOL);

public:
	void Move(long dx);

public:
	void Win();

public:
	void Update();

public:
	void SetPos(long x, long s, int32_t bReset);

public:
	const tagRECT &GetRect();

public:
	const ZXString<char> &GetPortalName();

public:
	static void __cdecl SetDeltaX(long arg0);

public:
	CSnowBall &operator=(const CSnowBall &arg0);

public:
	static CSnowBall &_op_assign_11(CSnowBall *pThis, const CSnowBall &arg0);
};
STATIC_ASSERT_SIZE(CSnowBall, 56);

class CSnowMan : public ZRefCounted
{
	// Nested
	// Fields
public:
	long m_nHP{};

protected:
	tagRECT m_rcArea{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayer;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerHPTag;
	// Methods
public:
	virtual ~CSnowMan();

public:
	void _dtor_0();

public:
	CSnowMan(const CSnowMan &arg0);

public:
	void _ctor_1(const CSnowMan &arg0);

	CTOR_DEFAULT(CSnowMan)
public:
	CSnowMan();

public:
	void _ctor_0();

public:
	void Init(long x, long y, const wchar_t *sUOL);

public:
	void Hit();

public:
	void DrawHPTag();

public:
	const tagRECT &GetRect();

public:
	CSnowMan &operator=(const CSnowMan &arg0);

public:
	static CSnowMan &_op_assign_7(CSnowMan *pThis, const CSnowMan &arg0);
};
STATIC_ASSERT_SIZE(CSnowMan, 40);
class CField : public CMapLoadable
{
	// Nested
public:
	struct PROPERTY
	{
		// Nested
		// Fields
	public:
		_x_com_ptr<IWzProperty> pInfo;

	public:
		_x_com_ptr<IWzProperty> pData;
		// Methods
	public:
		~PROPERTY();

	public:
		void _dtor_0();

	public:
		PROPERTY(const CField::PROPERTY &__that);

	public:
		void _ctor_1(const CField::PROPERTY &__that);

	public:
		PROPERTY();

	public:
		void _ctor_0();

	public:
		CField::PROPERTY &operator=(const CField::PROPERTY &arg0);

	public:
		static CField::PROPERTY &_op_assign_3(CField::PROPERTY *pThis, const CField::PROPERTY &arg0);
	};

public:
	struct INITPARAM
	{
		// Nested
		// Fields
	public:
		ZRef<CharacterData> pCharacterData;

	public:
		unsigned char bFieldKey{};

	public:
		_FILETIME ftServer;
		// Methods
	public:
		~INITPARAM();

	public:
		void _dtor_0();

	public:
		INITPARAM(const CField::INITPARAM &arg0);

	public:
		void _ctor_1(const CField::INITPARAM &arg0);

	public:
		INITPARAM();

	public:
		void _ctor_0();

	public:
		CField::INITPARAM &operator=(const CField::INITPARAM &arg0);

	public:
		static CField::INITPARAM &_op_assign_3(CField::INITPARAM *pThis, const CField::INITPARAM &arg0);
	};

public:
	struct WEATHERMSGINFO
	{
		// Nested
	public:
		enum UnnamedEnum25235
		{
			ONLYTIME = 0,
			DIDNTKILLMOB = 1
		};
		// Fields
	public:
		long tTime{};

	public:
		long nItemID{};

	public:
		long nOption{};

	public:
		ZXString<char> sMsg;
		// Methods
	public:
		~WEATHERMSGINFO();

	public:
		void _dtor_0();

	public:
		WEATHERMSGINFO(const CField::WEATHERMSGINFO &arg0);

	public:
		void _ctor_1(const CField::WEATHERMSGINFO &arg0);

	public:
		WEATHERMSGINFO();

	public:
		void _ctor_0();

	public:
		CField::WEATHERMSGINFO &operator=(const CField::WEATHERMSGINFO &arg0);

	public:
		static CField::WEATHERMSGINFO &_op_assign_3(CField::WEATHERMSGINFO *pThis, const CField::WEATHERMSGINFO &arg0);
	};

public:
	struct UserLook : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		ZList<ZRef<Field::UserCond>> lpCond;

	public:
		AvatarLook avatarLook;
		// Methods
	public:
		virtual ~UserLook();

	public:
		void _dtor_0();

	public:
		UserLook(const CField::UserLook &arg0);

	public:
		void _ctor_1(const CField::UserLook &arg0);

	public:
		UserLook();

	public:
		void _ctor_0();

	public:
		int32_t IsCondTrue(CUser *pUser);

	public:
		void ForceLook(CUser *pUser);

	public:
		CField::UserLook &operator=(const CField::UserLook &arg0);

	public:
		static CField::UserLook &_op_assign_5(CField::UserLook *pThis, const CField::UserLook &arg0);
	};
	// Fields
public:
	CToolTipHelper m_ttHelper;

protected:
	unsigned char m_bFieldKey{};

protected:
	TSecType<unsigned long> m_dwField;

protected:
	unsigned long m_dwOption{};

protected:
	double m_dRecovery{};

protected:
	long m_nReduceHPAmount{};

protected:
	int32_t m_bTown{};

protected:
	int32_t m_bSwim{};

protected:
	int32_t m_bFly{};

protected:
	int32_t m_bNeedSkillForFly{};

protected:
	int32_t m_bPersonalShopAvailable{};

protected:
	int32_t m_bDropEverlast{};

protected:
	int32_t m_bForcedReturn{};

protected:
	ZArray<ZXString<char>> m_asHelpMsg;

protected:
	ZXString16 m_sMapSpecificEffectUOL;

protected:
	ZArray<tagPOINT> m_aSeat;

protected:
	ZArray<tagPOINT> m_aTownPortal;

protected:
	std::array<std::array<_x_com_ptr<IWzGr2DLayer>, 3>, 6> m_apLayerTownPortal;

protected:
	ZArray<ZRef<CClock>> m_aTimer;

protected:
	ZRef<CClock> m_pClock;

protected:
	std::array<double, 2> _ZtlSecureTear_m_fs{};

protected:
	uint32_t _ZtlSecureTear_m_fs_CS{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerHPTag;

protected:
	long m_nMobIconWidth{};

protected:
	long m_nMobIconHeight{};

protected:
	int32_t m_bCannotUseCashWeather{};

protected:
	int32_t m_bExpeditionOnly{};

protected:
	long m_tConsumeItemCoolTime{};

protected:
	CUIItemUpgrade *m_pItemUpgrade{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerGL5thEvent;

protected:
	CUICharacterSaleDlg *m_pCharacterSaleDlg{};

protected:
	CUIVega *m_pVega{};

protected:
	long m_nPhase{};

protected:
	unsigned long m_dwPhaseAlpha{};

protected:
	ZArray<long> m_aPhaseAlphaBG;

protected:
	ZList<CField::WEATHERMSGINFO> m_lWeatherMsgInfo;

protected:
	ZList<ZRef<DYNAMIC_OBJ_INFO>> m_lDynamicObjs;

protected:
	ZMap<ZXString<char>, ZRef<DYNAMIC_OBJ_INFO>, ZXString<char>> m_mDynamicObjs;

protected:
	long m_tInitTimeForWeatherMsg{};

protected:
	long m_tStartBlowingTime{};

protected:
	int32_t m_bBlowWeatherByClient{};

protected:
	int32_t m_bWhisperSent{};

protected:
	ZXString<char> m_sLastWhisper;

protected:
	long m_tWhisperSent{};

protected:
	_FILETIME m_ftRel{};

public:
	long m_nBlowType{};

protected:
	ZXString<char> m_sGuildName;

protected:
	int32_t m_bTimerEventFlag{};

private:
	CUIToolTip m_uiTooltip;

private:
	ZXString<char> m_sMobName;

public:
	ZArray<tagRECT> m_aSwimRect;

protected:
	ZList<ZRef<CField::UserLook>> m_lpUserLook;

protected:
	Field::SkillInfo m_siForbiddenSkill;

protected:
	ZList<long> m_lAllowedItem;

private:
	unsigned long m_dwCrc{};

private:
	long m_tLastUpdateQuestLayer{};

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerDark_ss;

private:
	_x_com_ptr<IWzCanvas> m_pCanvasDark_ss;

private:
	_x_com_ptr<IWzCanvas> m_pCanvasSmallDark_ss;

private:
	_x_com_ptr<IWzCanvas> m_pCanvasViewrange_ss;

private:
	ZList<tagPOINT> m_lpPrev_ss;

private:
	int32_t m_bScreenBlackOn{};

private:
	int32_t m_bFearEffectOn{};
	// Methods
public:
	virtual ~CField();

public:
	void _dtor_0();

	CTOR_DEFAULT(CField)
public:
	CField(const CField &arg0);

public:
	void _ctor_1(const CField &arg0);

public:
	CField();

public:
	void _ctor_0();

public:
	static CField::PROPERTY __cdecl GetFieldProp(unsigned long arg0);

public:
	static ZRef<CField> __cdecl FieldFactory(unsigned long dwFieldID);

public:
	virtual void Init(void *pParam);

public:
	virtual void Close();

public:
	virtual void Update();

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	void OnJoystickButton(uint32_t wButton, unsigned long dwData);

public:
	virtual void OnPacket(long nType, CInPacket &iPacket);

public:
	virtual void LoadMap(unsigned long dwField);

public:
	virtual void DecodeFieldSpecificData(CUser *pUser, CInPacket &iPacket);

public:
	virtual int32_t BasicActionAttack();

public:
	virtual long GetFieldType();

public:
	virtual void OnFieldSetVariable(ZXString<char> sKey, ZXString<char> sVal);

public:
	virtual void OnSessionValue(ZXString<char> sKey, ZXString<char> sVal);

public:
	virtual void OnPartyValue(ZXString<char> sKey, ZXString<char> sVal);

public:
	void SendChatMsg(const ZXString<char> &sText, int32_t bOnlyBalloon);

public:
	void SendChatMsgSlash(const ZXString<char> &arg0);

public:
	void SendChatMsgWhisper(const ZXString<char> &sText, const ZXString<char> &sWhisperTarget);

public:
	void SendLocationWhisper(const ZXString<char> &sWhisperTarget, int32_t bTabFriend);

public:
	void SendInviteTradingRoomMsg(const ZXString<char> &sTradeTarget, int32_t bCashTrade);

public:
	void SendCreateNewPartyMsg();

public:
	void SendWithdrawPartyMsg();

public:
	void SendJoinPartyMsg(const ZXString<char> &sTarget);

public:
	void SendKickPartyMsg(const ZXString<char> &sTarget);

public:
	void SendChangePartyBossMsg(const ZXString<char> &sTarget);

public:
	void SendCreateExpeditionMsg(ZXString<char> &sExpeditionName);

public:
	void SendKickExpeditionMsg(const ZXString<char> &sTarget);

public:
	void SendInviteExpeditionMsg(const ZXString<char> &sTarget);

public:
	void SendWithdrawExpeditionMsg();

public:
	void InputGuildName();

public:
	void SendCreateGuildAgreeMsg(int32_t bAgree);

public:
	void SendWithdrawGuildMsg();

public:
	void SendInviteGuildMsg(const ZXString<char> sTarget);

public:
	void SendKickGuildMsg(const ZXString<char> sTarget);

public:
	void SendIncMaxMemberNumMsg(long nTargetChannel);

public:
	void SendSetMemberGradeMsg(unsigned long dwCharacterID, long nGrade);

public:
	void SendSetGradeNameMsg(ZXString<char> sName1, ZXString<char> sName2, ZXString<char> sName3, ZXString<char> sName4, ZXString<char> sName5);

public:
	void SendSetGuildMarkMsg(uint16_t nMarkBg, unsigned char nMarkBgColor, uint16_t nMark, unsigned char nMarkColor);

public:
	void SendSetGuildNoticeMsg(ZXString<char> sNotice);

public:
	int32_t SendTransferFieldRequest(unsigned long dwTargetField, const char *sPortal, int32_t bPremium, long nTargetPosition_X, long nTargetPosition_Y);

public:
	void SendTransferChannelRequest(long nTargetChannel);

public:
	void SendSetFriendMsg(const ZXString<char> sTarget, ZXString<char> sFriendGroup, int32_t bVerbose);

public:
	void SendDeleteFriendMsg(unsigned long dwFriendID);

public:
	void SendAcceptFriendMsg(unsigned long dwFriendID);

public:
	void AddBlackList(ZXString<char> sCharacterName);

public:
	void DeleteBlackList(ZXString<char> sCharacterName);

public:
	void SendMapleTVRequest(unsigned char arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, const ZXString<char> &arg5, const ZXString<char> &arg6, const ZXString<char> &arg7, const ZXString<char> &arg8, const ZXString<char> &arg9, const ZXString<char> &arg10);

public:
	unsigned long GetFieldID();

public:
	unsigned char GetFieldKey();

public:
	unsigned long GetOption();

public:
	double GetRecoveryRate();

public:
	long GetReduceHPAmount();

public:
	const tagPOINT &GetSeat(long arg0);

public:
	long FindSeatByPosition(tagPOINT ptUser);

public:
	int32_t IsEventMap(int32_t bExceptETC);

public:
	ZXString16 GetMapSpecificEffectUOL();

public:
	void OnTownPortalChanged(int32_t bParty, const PARTYDATA &rpd, const PARTYDATA::TOWNPORTAL &rtp, int32_t bOnlyPortalChange);

public:
	void OnOpenGate();

public:
	void TryEnterTownPortal(tagPOINT pt);

public:
	tagPOINT GetTownPortalPos(long nIdx);

public:
	double GetFs();

public:
	int32_t IsUnableToMigrate();

public:
	int32_t IsTown();

public:
	int32_t IsSwimmingMap() const;

public:
	int32_t IsFlyingMap();

public:
	int32_t IsNeedSkillForFlying();

public:
	int32_t IsPersonalShopAvailable();

public:
	int32_t IsUnableToOpenMiniGame();

public:
	int32_t IsUnableToUsePortalScroll();

public:
	int32_t IsUnableToUseSkill();

public:
	int32_t IsUnableToUseRocketBoost();

public:
	int32_t IsUnableToUseMysticDoor();

public:
	int32_t IsUnableToUseSummonItem();

public:
	int32_t IsUnableToUseTeleportItem();

public:
	int32_t IsUnableToJump();

public:
	int32_t IsUnableToUseSpecificPortalScroll();

public:
	int32_t IsUnableToUseTamingMob();

public:
	int32_t IsUnableToUseWeddingInvitationItem();

public:
	int32_t IsUnableToConsumeStatChangeItem();

public:
	int32_t IsUnableToChangePartyBoss();

public:
	int32_t IsUnableToUseCashWeatherItem();

public:
	int32_t IsUnableToUseAntiMacroItem();

public:
	int32_t IsUnableToFallDown();

public:
	int32_t IsUnableToSummonNPC();

public:
	int32_t IsNoDamageOnFalling();

public:
	int32_t IsDropLimit();

public:
	int32_t IsDropEverlast();

public:
	int32_t IsForcedReturnMapExistent();

public:
	int32_t IsExpeditionOnly();

public:
	long GetConsumeItemCoolTime();

public:
	int32_t IsUnableToKickParty();

public:
	int32_t IsUnableToWithdrawParty();

public:
	long GetMaxMapPhase();

public:
	unsigned long GetPhaseAlpha();

public:
	long GetPhaseAlphaBG(long arg0);

public:
	int32_t HasAllowedItem();

public:
	int32_t IsAllowedItem(long arg0);

public:
	void ShowMobHPTag(unsigned long arg0, long arg1, long arg2, long arg3, long arg4);

public:
	_FILETIME FileTimeAdd(_FILETIME arg0, _FILETIME arg1);

public:
	_FILETIME FileTimeSubtract(_FILETIME arg0, _FILETIME arg1);

public:
	_FILETIME GetRelTime();

public:
	_SYSTEMTIME GetCorrectTime();

public:
	void RestoreTownPortal(tagPOINT pt);

public:
	void SetIUDlg(CUIItemUpgrade *arg0);

public:
	void ReSetIUDlg();

public:
	void SetCSDlg(CUICharacterSaleDlg *arg0);

public:
	void ReSetCSDlg();

public:
	void SetVegaDlg(CUIVega *arg0);

public:
	void ReSetVegaDlg();

protected:
	double __fastcall _ZtlSecureGet_m_fs() const;

protected:
	double __fastcall _ZtlSecurePut_m_fs(double arg0);

protected:
	void RestoreOption();

protected:
	void RestorePeculiarInfo();

protected:
	void RestoreSwinArea();

protected:
	void RestoreUserInfo();

protected:
	void RestoreForbiddenSkill();

protected:
	void RestoreHelpMsg(unsigned long dwField);

protected:
	void RestoreSeat();

protected:
	void RestoreClock();

protected:
	void RestoreToolTip();

protected:
	void RestoreWeatherMsg();

protected:
	void RestoreAllowedItem();

protected:
	void RestorePhaseBG();

protected:
	int32_t IsWhisperSent();

protected:
	void SetWhisperSent(int32_t bAgree);

protected:
	void OnTransferFieldReqIgnored(CInPacket &iPacket);

protected:
	void OnTransferChannelReqIgnored(CInPacket &iPacket);

protected:
	void OnFieldSpecificData(CInPacket &iPacket);

protected:
	void OnGroupMessage(CInPacket &iPacket);

protected:
	void OnCoupleMessage(CInPacket &iPacket);

protected:
	void OnWhisper(CInPacket &iPacket);

protected:
	void OnSummonItemInavailable(CInPacket &iPacket);

protected:
	void OnFieldObstacleOnOff(CInPacket &iPacket);

protected:
	void OnFieldObstacleOnOffStatus(CInPacket &iPacket);

protected:
	void OnFieldObstacleAllReset(CInPacket &iPacket);

protected:
	void OnFieldEffect(CInPacket &iPacket);

protected:
	void OnBlowWeather(CInPacket &iPacket);

protected:
	void OnPlayJukeBox(CInPacket &iPacket);

protected:
	void OnAdminResult(CInPacket &iPacket);

protected:
	void OnQuiz(CInPacket &arg0);

protected:
	void OnDesc(CInPacket &iPacket);

protected:
	void OnSetQuestClear(CInPacket &iPacket);

protected:
	void OnSetQuestTime(CInPacket &ftStart);

protected:
	void OnSetObjectState(CInPacket &iPacket);

protected:
	virtual void OnClock(CInPacket &iPacket);

protected:
	virtual void OnMakeTimerParam(CClock::INITPARAM &param, long &nX, long &nY);

protected:
	void OnDestroyClock(CInPacket &iPacket);

protected:
	void OnZakumTimer(CInPacket &iPacket);

protected:
	void OnChaosZakumTimer(CInPacket &iPacket);

protected:
	void OnHontaleTimer(CInPacket &iPacket);

protected:
	void OnHontailTimer(CInPacket &iPacket);

protected:
	void OnStalkResult(CInPacket &iPacket);

protected:
	void OnSetPortalUsable(CInPacket &arg0);

protected:
	void OnFootHoldInfo(CInPacket &iPacket);

protected:
	void OnRequestFootHoldInfo(CInPacket &iPacket);

protected:
	void OnItemUpgrade(long nType, CInPacket &iPacket);

protected:
	void ShowScreenEffect(ZXString16 sName);

public:
	// TODO
	void BlowWeather(long nItemID, ZXString<char> sMsg, int32_t bBlowWeatherByClient, long tDuration);
	void BlowWeather_0(long nItemID, ZXString<char> sMsg, int32_t bBlowWeatherByClient, long tDuration)
	{
		BlowWeather(nItemID, sMsg, bBlowWeatherByClient, tDuration);
	}

public:
	void BlowWeather(long nItemID, ZXString<char> sMsg, int32_t bBlowWeatherByClient);
	void BlowWeather_1(long nItemID, ZXString<char> sMsg, int32_t bBlowWeatherByClient)
	{
		BlowWeather(nItemID, sMsg, bBlowWeatherByClient);
	}

public:
	void BlowWeather(long nItemID, ZXString<char> sMsg);
	void BlowWeather_2(long nItemID, ZXString<char> sMsg)
	{
		BlowWeather(nItemID, sMsg);
	}

public:
	void OnWarnMessage(CInPacket &iPacket);

public:
	void OnCharacterSale(long nType, CInPacket &iPacket);

public:
	void OnVega(long nType, CInPacket &iPacket);
	CLASS_RTTI_(CField, CMapLoadable);

public:
	int32_t IsSkillForbiden(long nSkillID);

protected:
	void ApplyUserLook(CUser *pUser);

public:
	virtual int32_t CanUseSpecialArts();

public:
	unsigned long GetCrc();

public:
	void UpdateQuestLayer();

public:
	void LoadDynamicObject();

public:
	void UpdateDynamicObject();

public:
	void InitFearEffect();

public:
	void DrawFearEffect();

public:
	void OnFearEffect();

public:
	void OffFearEffect();

public:
	int32_t IsFearEffectOn();

public:
	CField &operator=(CField &arg0);

public:
	static CField &_op_assign_184(CField *pThis, CField &arg0);
};
STATIC_ASSERT_SIZE(CField, 3488);
class CHealer : public ZRefCounted
{
	// Nested
	// Fields
protected:
	_x_com_ptr<IWzVector2D> m_pVecOrg;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayer;
	// Methods
public:
	virtual ~CHealer();

public:
	void _dtor_0();

public:
	CHealer(const CHealer &arg0);

public:
	void _ctor_1(const CHealer &arg0);

public:
	CHealer();

public:
	void _ctor_0();

public:
	void Init(long x, long y, const wchar_t *sUOL);

public:
	void Move(long y);

public:
	CHealer &operator=(const CHealer &arg0);

public:
	static CHealer &_op_assign_5(CHealer *pThis, const CHealer &arg0);
};
STATIC_ASSERT_SIZE(CHealer, 20);
class CField_AranTutorial : public CField
{
	// Nested
	// Fields
	// Methods
public:
	virtual ~CField_AranTutorial();

public:
	void _dtor_0();

public:
	CField_AranTutorial(const CField_AranTutorial &arg0);

public:
	void _ctor_1(const CField_AranTutorial &arg0);

public:
	CField_AranTutorial();

public:
	void _ctor_0();

public:
	virtual long GetFieldType();

public:
	CField_AranTutorial &operator=(CField_AranTutorial &arg0);

public:
	static CField_AranTutorial &_op_assign_4(CField_AranTutorial *pThis, CField_AranTutorial &arg0);
};
STATIC_ASSERT_SIZE(CField_AranTutorial, 3488);
class CField_Tournament : public CField
{
	// Nested
public:
	struct AvatarInfo
	{
		// Nested
		// Fields
	public:
		long nGender{};

	public:
		long nSkin{};

	public:
		long nFace{};

	public:
		long nFaceAcc{};

	public:
		std::array<long, 60> aAvatarHairEquip{};

	public:
		long nWeaponStickerID{};

	public:
		ZXString<char> sCharacterName;
		// Methods
		CTOR_DEFAULT(AvatarInfo)
	public:
		~AvatarInfo();

	public:
		void _dtor_0();

	public:
		AvatarInfo(const CField_Tournament::AvatarInfo &arg0);

	public:
		void _ctor_1(const CField_Tournament::AvatarInfo &arg0);

	public:
		AvatarInfo();

	public:
		void _ctor_0();

	public:
		CField_Tournament::AvatarInfo &operator=(const CField_Tournament::AvatarInfo &arg0);

	public:
		static CField_Tournament::AvatarInfo &_op_assign_3(CField_Tournament::AvatarInfo *pThis, const CField_Tournament::AvatarInfo &arg0);
	};
	// Fields
protected:
	int32_t m_bReceivedAI{};

protected:
	std::array<CField_Tournament::AvatarInfo, 32> m_aAvatarInfo;
	// Methods
	CTOR_DEFAULT(CField_Tournament)
public:
	virtual ~CField_Tournament();

public:
	void _dtor_0();

public:
	CField_Tournament(const CField_Tournament &arg0);

public:
	void _ctor_1(const CField_Tournament &arg0);

public:
	CField_Tournament();

public:
	void _ctor_0();

public:
	virtual void OnPacket(long nType, CInPacket &iPacket);

public:
	CField_Tournament::AvatarInfo GetAvatarInfo(long arg0);

public:
	int32_t IsAvatarInfoExist();

protected:
	void OnTournament(CInPacket &iPacket);

protected:
	void OnTournamentMatchTable(CInPacket &iPacket);

protected:
	void OnTournamentSetPrize(CInPacket &iPacket);

protected:
	void OnTournamentUEW(CInPacket &iPacket);

protected:
	void OnTournamentAvatarInfo(CInPacket &arg0);

public:
	CField_Tournament &operator=(CField_Tournament &arg0);

public:
	static CField_Tournament &_op_assign_11(CField_Tournament *pThis, CField_Tournament &arg0);
};
STATIC_ASSERT_SIZE(CField_Tournament, 11944);
class CField_LimitedView : public CField
{
	// Nested
	// Fields
protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerDark;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasDark;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasSmallDark;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasViewrange;

protected:
	ZList<tagPOINT> m_lpPrev;

protected:
	int32_t m_bShareView{};
	// Methods
public:
	virtual ~CField_LimitedView();

public:
	void _dtor_0();

public:
	CField_LimitedView(const CField_LimitedView &arg0);

public:
	void _ctor_1(const CField_LimitedView &arg0);

public:
	CField_LimitedView();

public:
	void _ctor_0();

public:
	virtual void Init(void *pParam);

public:
	virtual void Update();

public:
	void SetShareView(int32_t arg0);

protected:
	void DrawViewrange();

public:
	CField_LimitedView &operator=(CField_LimitedView &arg0);

public:
	static CField_LimitedView &_op_assign_7(CField_LimitedView *pThis, CField_LimitedView &arg0);
};
STATIC_ASSERT_SIZE(CField_LimitedView, 3528);
class CField_GuildBoss : public CField
{
	// Nested
public:
	enum UnnamedEnum143678
	{
		START = 0,
		END = 1
	};
	// Fields
protected:
	long m_nY{};

protected:
	long m_nState{};

protected:
	CHealer m_healer;

protected:
	CPulley m_pulley;
	// Methods
public:
	virtual ~CField_GuildBoss();

public:
	void _dtor_0();

public:
	CField_GuildBoss(const CField_GuildBoss &arg0);

public:
	void _ctor_1(const CField_GuildBoss &arg0);

public:
	CField_GuildBoss();

public:
	void _ctor_0();

public:
	virtual void Init(void *pParam);

public:
	virtual void OnPacket(long nType, CInPacket &iPacket);

public:
	virtual int32_t BasicActionAttack();

protected:
	void OnHealerMove(CInPacket &iPacket);

protected:
	void OnPulleyStateChange(CInPacket &iPacket);

public:
	CField_GuildBoss &operator=(CField_GuildBoss &arg0);

public:
	static CField_GuildBoss &_op_assign_8(CField_GuildBoss *pThis, CField_GuildBoss &arg0);
};
STATIC_ASSERT_SIZE(CField_GuildBoss, 3552);
class CField_WeddingPhoto : public CField
{
	// Nested
	// Fields
	// Methods
public:
	virtual ~CField_WeddingPhoto();

public:
	void _dtor_0();

public:
	CField_WeddingPhoto(const CField_WeddingPhoto &arg0);

public:
	void _ctor_1(const CField_WeddingPhoto &arg0);

public:
	CField_WeddingPhoto();

public:
	void _ctor_0();

public:
	virtual long GetFieldType();

public:
	CField_WeddingPhoto &operator=(CField_WeddingPhoto &arg0);

public:
	static CField_WeddingPhoto &_op_assign_4(CField_WeddingPhoto *pThis, CField_WeddingPhoto &arg0);
};
STATIC_ASSERT_SIZE(CField_WeddingPhoto, 3488);

char *__stdcall _com_util__ZtlConvertBSTRToString(wchar_t *pSrc);
unsigned long __cdecl GETCRC32Svr_long_(const long &a, unsigned long dwInit);
double __cdecl _ZtlSecureFuse_double_(const double *at, uint32_t uCS);
uint32_t __fastcall _ZtlSecureTear_double_(double t, double *arg1);
