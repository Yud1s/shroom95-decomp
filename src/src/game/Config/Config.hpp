// Config.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "GW/GW.hpp"

// Level: 1 0x3064
class CConfig;

struct CONFIG_GAMEOPT
{
	// Nested
	// Fields
public:
	int32_t bGameOpt_Whisper{};

public:
	int32_t bGameOpt_Friend{};

public:
	int32_t bGameOpt_Messenger{};

public:
	int32_t bGameOpt_Exchange{};

public:
	int32_t bGameOpt_Party{};

public:
	int32_t bGameOpt_PartySearch{};

public:
	int32_t bGameOpt_AllowExpeditionInvite{};

public:
	int32_t bGameOpt_Game{};

public:
	int32_t bGameOpt_GuildInvite{};

public:
	int32_t bGameOpt_GuildTalk{};

public:
	int32_t bGameOpt_AllianceInvite{};

public:
	int32_t bGameOpt_AllianceTalk{};

public:
	int32_t bGameOpt_Family{};

public:
	int32_t bGameOpt_KeyConfig{};

public:
	long nGameOpt_ChatType{};

public:
	int32_t bGameOpt_QuickType{};

public:
	long nGameOpt_ChatWndHeight{};

public:
	long nGameOpt_OpBoardIndex{};

public:
	int32_t bGameOpt_FollowRequest{};
	// Methods
};
STATIC_ASSERT_SIZE(CONFIG_GAMEOPT, 76);

struct CONFIG_JOYPAD
{
	// Nested
	// Fields
public:
	std::array<long, 12> nJoyPad_Btn{};
	// Methods
};
STATIC_ASSERT_SIZE(CONFIG_JOYPAD, 48);

struct CONFIG_SYSOPT
{
	// Nested
	// Fields
public:
	long nSysOpt_Video{};

public:
	long nSysOpt_BGMVol{};

public:
	int32_t bSysOpt_BGMMute{};

public:
	long nSysOpt_SEVol{};

public:
	int32_t bSysOpt_SEMute{};

public:
	long nSysOpt_ScreenShot{};

public:
	long nSysOpt_MouseSpeed{};

public:
	long nSysOpt_HPFlash{};

public:
	long nSysOpt_MPFlash{};

public:
	int32_t bSysOpt_Tremble{};

public:
	long nSysOpt_MobInfo{};

public:
	int32_t bSysOpt_LargeScreen{};

public:
	int32_t bSysOpt_WindowedMode{};

public:
	int32_t bSysOpt_Minimap_Normal{};
	// Methods


public:
	void GetVideo_MagLevel(long &nMagLevel_Obj, long &nMagLevel_Back);

};
STATIC_ASSERT_SIZE(CONFIG_SYSOPT, 56);

class CConfig : public TSingleton<CConfig>
{
	// Nested
public:
    enum UnnamedEnum4940 : int32_t
    {
        GLOBAL_OPT = 0,
        LASTCONNECT_INFO = 1,
        CHARACTER_OPT = 2
    };
    enum SCREENMODE_ : int32_t
    {
        SCREENMODE_WINDOWED = 1,
        SCREENMODE_LARGESCREEN = 2
    };
	// Fields
public:
	int32_t m_bRememberMailAddr{};

public:
	ZXString<char> m_sLastMailAddr;

public:
	ZXString<char> m_sLastConnectWorldName;

public:
	int32_t m_nScr_RRate{};

public:
	int32_t m_bScr_FirstRun{};

public:
	long m_nPetConsumeItemID{};

public:
	long m_nPetConsumeMPItemID{};

public:
	CONFIG_GAMEOPT m_gameOpt;

public:
	CONFIG_SYSOPT m_sysOpt;

public:
	CONFIG_JOYPAD m_joyPad;

public:
	ZArray<unsigned long> m_aListenBlockedFriend;

public:
	ZArray<unsigned long> m_aTalkBlockedFriend;

public:
	ZMap<ZXString<char>, unsigned char, ZXString<char>> m_aFriendGroup;

public:
	int32_t m_bShowOnlineOnly{};

public:
	ZArray<ZXString<char>> m_asBlackList;

public:
	ZArray<long> m_aQuestAlarm;

protected:
	HKEY__ *m_hKeyGlobal{};

protected:
	HKEY__ *m_hKeyLastConnected{};

protected:
	HKEY__ *m_hKeyCharacter{};

protected:
	std::array<int32_t, 43> m_nUIWnd_X{};

protected:
	std::array<int32_t, 43> m_nUIWnd_Y{};

protected:
	std::array<int32_t, 43> m_nUIWnd_LargeX{};

protected:
	std::array<int32_t, 43> m_nUIWnd_LargeY{};

protected:
	std::array<int32_t, 43> m_nUIWnd_Option{};

protected:
	ZArray<unsigned char> m_abQuestInfoOption;

protected:
	std::array<FUNCKEY_MAPPED, 89> m_aFuncKeyMapped_Reg{};

protected:
	std::array<int32_t, 1> m_aDialogVisible{};

protected:
	long m_nLastConnectedVersion{};

protected:
	long m_tStartTime{};
	// Methods
public:
	virtual ~CConfig();

public:
	void _dtor_0();

public:
	CConfig(const CConfig &arg0);

public:
	void _ctor_1( const CConfig &arg0);

public:
	CConfig();

public:
	void _ctor_0();

public:
	void LoadGlobal();

public:
	void SaveGlobal();

public:
	unsigned long LoadLastConnectedCharacterID(long nWorldID, unsigned long dwAccountID);

public:
	void SaveLastConnectedCharacterID(long nWorldID, unsigned long dwCharacterID);

public:
	void LoadCharacter(long nWorldID, unsigned long dwCharacterId);

public:
	void SaveCharacter();

public:
	void LoadBlockFriend();

public:
	void SaveBlockFriend();

public:
	void LoadFriendGroup();

public:
	void SaveFriendGroup();

public:
	void LoadBlackList();

public:
	void SaveBlackList();

public:
	void LoadQuestAlarm();

public:
	void SaveQuestAlarm();

public:
	int32_t LoadFuncKeyMapped(FUNCKEY_MAPPED *aFuncKeyMapped);

public:
	void GetUIWndPos_(int32_t arg0, int32_t &arg1, int32_t &arg2, int32_t &arg3, ZArray<unsigned char> &arg4);

public:
	void GetUIWndPos(int32_t nUIType, int32_t &x, int32_t &y, int32_t &op);

public:
	void SetUIWndPos(int32_t nUIType, int32_t x, int32_t y, int32_t op, ZArray<unsigned char> &abOption);
	void SetUIWndPos_1(int32_t nUIType, int32_t x, int32_t y, int32_t op, ZArray<unsigned char> &abOption)
	{
		SetUIWndPos(nUIType, x, y, op, abOption);
	}

public:
	void SetUIWndPos(int32_t nUIType, int32_t x, int32_t y, int32_t op);
	void SetUIWndPos_0(int32_t nUIType, int32_t x, int32_t y, int32_t op)
	{
		SetUIWndPos(nUIType, x, y, op);
	}

public:
	void GetUIWndPosLarge(int32_t nUIType, int32_t &x, int32_t &y);

public:
	void SetUIWndPosLarge(int32_t nUIType, int32_t x, int32_t y);

public:
	long GetLastConnectedVersion();

public:
	void ApplyGameOpt(CONFIG_GAMEOPT *pGameOpt);

public:
	void ApplySysOpt(CONFIG_SYSOPT *pSysOpt, int32_t bApplyVideo);

public:
	void ApplyJoyPad(CONFIG_JOYPAD *pJoyPad);

public:
	void CheckExecPathReg(ZXString<char> sModulePath);

public:
	int32_t GetShowPartyHP();

public:
	void SetShowPartyHP(int32_t bShow);

public:
	int32_t IsBlockedFriend(unsigned long dwFriendID, long nFlag);

public:
	long FindBlockedFriendIndex(unsigned long dwFriendID, ZArray<unsigned long> &aFriend);

public:
	int32_t ChangeBlockOption(unsigned long dwFriendID, long nFlag, int32_t bBlocked);

public:
	int32_t IsFriendGroupFolded(ZXString<char> sGroupName);

public:
	void SetFriendGroupFolded(ZXString<char> sGroupName, int32_t bFolded);

public:
	void ResetFriendGroupFolded();

public:
	int32_t GetShowOnlineOnly();

public:
	void SetShowOnlineOnly(int32_t bShow);

public:
	void AddBlackList(ZXString<char> sCharacterName);

public:
	void DeleteBlackList(ZXString<char> sCharacterName);

public:
	int32_t IsInBlackList(ZXString<char> sCharacterName);

public:
	void AddQuestAlarm(long nQuestID, long nInsertBefore);

public:
	void DeleteQuestAlarm(long nIdx);

public:
	void DeleteAllQuestAlarm();

public:
	ZArray<long> GetQuestAlarm();

public:
	int32_t GetQuestAlarmAutoRegister();

public:
	void SetQuestAlarmAutoRegister(int32_t bUseAutoRegister);

public:
	int32_t GetQueatAlarmOpened();

public:
	void SetQuestAlarmOpened(int32_t bOpened);

public:
	int32_t GetInventoryExpanded();

public:
	void SetInventoryExpanded(int32_t bExpanded);

public:
	void ResetSessionInfo();

public:
	void SaveSessionInfo();

public:
	void SaveSessionInfo_ChannelID(long nChannelID);

public:
	void SaveSessionInfo_FieldID(long nFieldID);

public:
	ZXString<char> GetSessionCharacterName();

public:
	long GetSessionWorldID();

public:
	long GetSessionChannelID();

public:
	long GetSessionFieldID();

public:
	int32_t GetDialogVisible(unsigned long dwDialogID);

public:
	void SetDialogVisible(unsigned long dwDialogID, int32_t bVisible);

protected:
	int32_t GetOpt_BOOL(int32_t nType, const char *sKey, int32_t bDefaultValue);

protected:
	void SetOpt_BOOL(int32_t nType, const char *sKey, int32_t bValue);

protected:
	ZXString<char> GetOpt_String(int32_t nType, const char *sKey, const char *sDefaultValue);

protected:
	void SetOpt_String(int32_t nType, const char *sKey, const char *sValue);

protected:
	int32_t GetOpt_Int(int32_t nType, const char *sKey, int32_t nDefaultValue, int32_t nLowBound, int32_t nHighBound);

protected:
	void SetOpt_Int(int32_t nType, const char *sKey, int32_t nValue);

protected:
	void GetOpt_Binary(int32_t nType, const char *sKey, ZArray<unsigned char> &abData);

protected:
	void SetOpt_Binary(int32_t nType, const char *sKey, ZArray<unsigned char> &abData);

protected:
	HKEY__ *GetOptKey(int32_t nType);

public:
	long GetPlayTime();

public:
	long GetPartnerCode();

public:
	long GetQuestGuideOption(long nOption);

public:
	void SetQuestGuideOption(long nOption, long nValue);

public:
	CConfig &operator=(const CConfig &arg0);

public:
	static CConfig &_op_assign_75(CConfig *pThis, const CConfig &arg0);
};
STATIC_ASSERT_SIZE(CConfig, 1592);


