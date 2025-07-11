// Config.cpp
#include "Config.hpp"
#include "Stage/Stage.hpp"


static ZRef<CStage> FAKE_ZREF_STAGE{};
#include "Config_regen.ipp"

CConfig::~CConfig()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CConfig::_dtor_0()
{
	return __sub_000B6880(this, nullptr);
}
CConfig::CConfig(const CConfig &arg0)
{
	_ctor_1(arg0);
}
void CConfig::_ctor_1(const CConfig &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CConfig::CConfig()
{
	// TODO: ZERO Initialize
	auto key = RegCreateKeyExA(
		HKEY_CURRENT_USER,
		"Software\\Wizet\\Shroom", // TODO from string pool
		0,
		nullptr,
		REG_OPTION_NON_VOLATILE,
		KEY_ALL_ACCESS,
		nullptr,
		&m_hKeyGlobal,
		nullptr);

	LoadGlobal();
	ResetSessionInfo();
	m_tStartTime = timeGetTime();

	// return __sub_000B6740(this, nullptr);
}
void CConfig::_ctor_0()
{
	new (this) CConfig();
}
void CConfig::LoadGlobal()
{
	__sub_000B51B0(this, nullptr);
}
void CConfig::SaveGlobal()
{
	__sub_000B3BE0(this, nullptr);
}
unsigned long CConfig::LoadLastConnectedCharacterID(long nWorldID, unsigned long dwAccountID)
{
	return __sub_000B4180(this, nullptr, nWorldID, dwAccountID);
}
void CConfig::SaveLastConnectedCharacterID(long nWorldID, unsigned long dwCharacterID)
{
	__sub_000B4320(this, nullptr, nWorldID, dwCharacterID);
}
void CConfig::LoadCharacter(long nWorldID, unsigned long dwCharacterId)
{
	__sub_000B6C00(this, nullptr, nWorldID, dwCharacterId);
}
void CConfig::SaveCharacter()
{
	__sub_000B5B00(this, nullptr);
}
void CConfig::LoadBlockFriend()
{
	__sub_000B43C0(this, nullptr);
}
void CConfig::SaveBlockFriend()
{
	__sub_000B45E0(this, nullptr);
}
void CConfig::LoadFriendGroup()
{
	__sub_000B69E0(this, nullptr);
}
void CConfig::SaveFriendGroup()
{
	__sub_000B4B50(this, nullptr);
}
void CConfig::LoadBlackList()
{
	__sub_000B6540(this, nullptr);
}
void CConfig::SaveBlackList()
{
	__sub_000B47D0(this, nullptr);
}
void CConfig::LoadQuestAlarm()
{
	__sub_000B48F0(this, nullptr);
}
void CConfig::SaveQuestAlarm()
{
	__sub_000B4A30(this, nullptr);
}
void CONFIG_SYSOPT::GetVideo_MagLevel(long &nMagLevel_Obj, long &nMagLevel_Back)
{
	switch (nSysOpt_Video)
	{
	case 0:
		nMagLevel_Obj = 2;
		nMagLevel_Back = 2;
		break;
	case 1:
		nMagLevel_Obj = 1;
		nMagLevel_Back = 1;
		break;
	case 2:
		nMagLevel_Obj = 0;
		nMagLevel_Back = 1;
		break;
	default:
		nMagLevel_Obj = 0;
		nMagLevel_Back = 0;
		break;
	}
}
int32_t CConfig::LoadFuncKeyMapped(FUNCKEY_MAPPED *aFuncKeyMapped)
{
	if (!m_gameOpt.bGameOpt_KeyConfig)
	{
		return 0;
	}

	memcpy(aFuncKeyMapped, m_aFuncKeyMapped_Reg.data(), sizeof(FUNCKEY_MAPPED) * 89);
	return 1;
}
void CConfig::GetUIWndPos_(int32_t nUIType, int32_t &x, int32_t &y, int32_t &op, ZArray<unsigned char> &abOption)
{
	if (nUIType == 6)
	{
		GetUIWndPos(nUIType, x, y, op);
		abOption = m_abQuestInfoOption;
	}
}
void CConfig::GetUIWndPos(int32_t nUIType, int32_t &x, int32_t &y, int32_t &op)
{
	x = m_nUIWnd_X[nUIType];
	y = m_nUIWnd_Y[nUIType];
	op = m_nUIWnd_Option[nUIType];
}
void CConfig::SetUIWndPos(int32_t nUIType, int32_t x, int32_t y, int32_t op, ZArray<unsigned char> &abOption)
{
	if (nUIType == 6)
	{
		SetUIWndPos(nUIType, x, y, op);
		m_abQuestInfoOption = abOption;
	}
}
void CConfig::SetUIWndPos(int32_t nUIType, int32_t x, int32_t y, int32_t op)
{
	m_nUIWnd_X[nUIType] = x;
	m_nUIWnd_Y[nUIType] = y;
	m_nUIWnd_Option[nUIType] = op;
}
void CConfig::GetUIWndPosLarge(int32_t nUIType, int32_t &x, int32_t &y)
{
	x = m_nUIWnd_LargeX[nUIType];
	y = m_nUIWnd_LargeY[nUIType];
}
void CConfig::SetUIWndPosLarge(int32_t nUIType, int32_t x, int32_t y)
{
	m_nUIWnd_LargeX[nUIType] = x;
	m_nUIWnd_LargeY[nUIType] = y;
}
long CConfig::GetLastConnectedVersion()
{
	return m_nLastConnectedVersion;
}
void CConfig::ApplyGameOpt(CONFIG_GAMEOPT *pGameOpt)
{
	if (pGameOpt)
	{
		m_gameOpt = *pGameOpt;
	}
	//__sub_000B2060(this, nullptr, pGameOpt);
}
void CConfig::ApplySysOpt(CONFIG_SYSOPT *pSysOpt, int32_t bApplyVideo)
{
	/*if(pSysOpt) {
		m_sysOpt = *pSysOpt;
	}

	auto ctx = CWvsContext::m_pInstance;
	auto opt = m_sysOpt.nSysOpt_MobInfo;
	ctx->SetShowMobInfoName(opt == 1 || opt == 3);
	ctx->SetShowMobInfoHP(opt == 2 || opt == 3);*/

	//__sub_000B2300(this, nullptr, pSysOpt, bApplyVideo);
}
void CConfig::ApplyJoyPad(CONFIG_JOYPAD *pJoyPad)
{
	if (pJoyPad)
	{
		m_joyPad = *pJoyPad;
	}
	//__sub_000B2080(this, nullptr, pJoyPad);
}
void CConfig::CheckExecPathReg(ZXString<char> sModulePath)
{
	__sub_000B5850(this, nullptr, CreateNakedParam(sModulePath));
}
int32_t CConfig::GetShowPartyHP()
{
	return __sub_000B3110(this, nullptr);
}
void CConfig::SetShowPartyHP(int32_t bShow)
{
	__sub_000B31A0(this, nullptr, bShow);
}
int32_t CConfig::IsBlockedFriend(unsigned long dwFriendID, long nFlag)
{
	return __sub_000B2CC0(this, nullptr, dwFriendID, nFlag);
}
long CConfig::FindBlockedFriendIndex(unsigned long dwFriendID, ZArray<unsigned long> &aFriend)
{
	return __sub_000B27F0(this, nullptr, dwFriendID, aFriend);
}
int32_t CConfig::ChangeBlockOption(unsigned long dwFriendID, long nFlag, int32_t bBlocked)
{
	return __sub_000B4D00(this, nullptr, dwFriendID, nFlag, bBlocked);
}
int32_t CConfig::IsFriendGroupFolded(ZXString<char> sGroupName)
{
	return __sub_000B3010(this, nullptr, CreateNakedParam(sGroupName));
}
void CConfig::SetFriendGroupFolded(ZXString<char> sGroupName, int32_t bFolded)
{
	__sub_000B6B80(this, nullptr, CreateNakedParam(sGroupName), bFolded);
}
void CConfig::ResetFriendGroupFolded()
{
	__sub_000B2CB0(this, nullptr);
}
int32_t CConfig::GetShowOnlineOnly()
{
	return __sub_000B2040(this, nullptr);
}
void CConfig::SetShowOnlineOnly(int32_t bShow)
{
	__sub_000B2050(this, nullptr, bShow);
}
void CConfig::AddBlackList(ZXString<char> sCharacterName)
{
	__sub_000B4DA0(this, nullptr, CreateNakedParam(sCharacterName));
}
void CConfig::DeleteBlackList(ZXString<char> sCharacterName)
{
	__sub_000B4E30(this, nullptr, CreateNakedParam(sCharacterName));
}
int32_t CConfig::IsInBlackList(ZXString<char> sCharacterName)
{
	return __sub_000B3050(this, nullptr, CreateNakedParam(sCharacterName));
}
void CConfig::AddQuestAlarm(long nQuestID, long nInsertBefore)
{
	__sub_000B4EF0(this, nullptr, nQuestID, nInsertBefore);
}
void CConfig::DeleteQuestAlarm(long nIdx)
{
	__sub_000B4F30(this, nullptr, nIdx);
}
void CConfig::DeleteAllQuestAlarm()
{
	__sub_000B4F60(this, nullptr);
}
ZArray<long> CConfig::GetQuestAlarm()
{
	return m_aQuestAlarm;
	//return __sub_004220E0(this, nullptr);
}
int32_t CConfig::GetQuestAlarmAutoRegister()
{
	return __sub_000B3530(this, nullptr);
}
void CConfig::SetQuestAlarmAutoRegister(int32_t bUseAutoRegister)
{
	__sub_000B35C0(this, nullptr, bUseAutoRegister);
}
int32_t CConfig::GetQueatAlarmOpened()
{
	return __sub_000B3650(this, nullptr);
}
void CConfig::SetQuestAlarmOpened(int32_t bOpened)
{
	__sub_000B36E0(this, nullptr, bOpened);
}
int32_t CConfig::GetInventoryExpanded()
{
	return __sub_000B3770(this, nullptr);
}
void CConfig::SetInventoryExpanded(int32_t bExpanded)
{
	__sub_000B3800(this, nullptr, bExpanded);
}
void CConfig::ResetSessionInfo()
{
	__sub_000B3230(this, nullptr);
}
void CConfig::SaveSessionInfo()
{
	__sub_000B3350(this, nullptr);
}
void CConfig::SaveSessionInfo_ChannelID(long nChannelID)
{
	__sub_000B34A0(this, nullptr, nChannelID);
}
void CConfig::SaveSessionInfo_FieldID(long nFieldID)
{
	__sub_000B2680(this, nullptr, nFieldID);
}
ZXString<char> CConfig::GetSessionCharacterName()
{
	return __sub_0055C640(this, nullptr);
}
long CConfig::GetSessionWorldID()
{
	return __sub_000B26A0(this, nullptr);
}
long CConfig::GetSessionChannelID()
{
	return __sub_000B26A0(this, nullptr);
}
long CConfig::GetSessionFieldID()
{
	return GetOpt_Int(0, "siFieldID", -1, 0x80000000, 0x7fffffff);
	//return __sub_000B26A0(this, nullptr);
}
int32_t CConfig::GetDialogVisible(unsigned long dwDialogID)
{
	if(dwDialogID < 1) {
		return m_aDialogVisible[dwDialogID];
	}
	return 0;
	//return __sub_000B2140(this, nullptr, dwDialogID);
}
void CConfig::SetDialogVisible(unsigned long dwDialogID, int32_t bVisible)
{
	if(dwDialogID < 1) {
		m_aDialogVisible[dwDialogID] = bVisible;
	}
	//__sub_000B2160(this, nullptr, dwDialogID, bVisible);
}
int32_t CConfig::GetOpt_BOOL(int32_t nType, const char *sKey, int32_t bDefaultValue)
{
	auto hKey = GetOptKey(nType);
	DWORD dwType;
	DWORD dwSize = sizeof(int32_t);
	int32_t bValue{};
	if(RegQueryValueExA(hKey, sKey, nullptr, &dwType, (uint8_t *)&bValue, &dwSize) != ERROR_SUCCESS) {
		return bDefaultValue;
	}

	if(dwType != REG_DWORD) {
		return bDefaultValue;
	}

	return bValue;


	//return __sub_000B24C0(this, nullptr, nType, sKey, bDefaultValue);
}
void CConfig::SetOpt_BOOL(int32_t nType, const char *sKey, int32_t bValue)
{
	auto hKey = GetOptKey(nType);
	RegSetValueExA(hKey, sKey, 0, REG_DWORD, (const uint8_t *)&bValue, sizeof(bValue));
	//__sub_000B2520(this, nullptr, nType, sKey, bValue);
}
ZXString<char> CConfig::GetOpt_String(int32_t nType, const char *sKey, const char *sDefaultValue)
{
	ZXString<char> sValue;
	return *__sub_000B4F80(this, nullptr , &sValue, nType, sKey, sDefaultValue);
}
void CConfig::SetOpt_String(int32_t nType, const char *sKey, const char *sValue)
{
	sValue = sValue ? sValue : "";
	RegSetValueExA(GetOptKey(nType), sKey, 0, REG_SZ, (const uint8_t *)sValue, strlen(sValue));


	//__sub_000B2560(this, nullptr, nType, sKey, sValue);
}
int32_t CConfig::GetOpt_Int(int32_t nType, const char *sKey, int32_t nDefaultValue, int32_t nLowBound, int32_t nHighBound)
{
	auto hKey = GetOptKey(nType);
	DWORD dwType;
	DWORD dwSize = sizeof(int32_t);
	int32_t nValue{};
	if(RegQueryValueExA(hKey, sKey, nullptr, &dwType, (uint8_t *)&nValue, &dwSize) != ERROR_SUCCESS) {
		return nDefaultValue;
	}

	if(dwType != REG_DWORD) {
		return nDefaultValue;
	}

	if(nValue < nLowBound || nValue > nHighBound) {
		return nDefaultValue;
	}

	return nValue;


	//return __sub_000B25F0(this, nullptr, nType, sKey, nDefaultValue, nLowBound, nHighBound);
}
void CConfig::SetOpt_Int(int32_t nType, const char *sKey, int32_t nValue)
{
	__sub_000B2650(this, nullptr, nType, sKey, nValue);
}
void CConfig::GetOpt_Binary(int32_t nType, const char *sKey, ZArray<unsigned char> &abData)
{
	__sub_000B2F00(this, nullptr, nType, sKey, abData);
}
void CConfig::SetOpt_Binary(int32_t nType, const char *sKey, ZArray<unsigned char> &abData)
{
	auto data = abData.GetData();
	auto n = abData.GetCount(); //TODO GetCount
	if (data && n)
	{
		RegSetValueExA(GetOptKey(nType), sKey, 0, REG_BINARY, data, n);
	}

	//__sub_000B2830(this, nullptr, nType, sKey, abData);
}
HKEY__ *CConfig::GetOptKey(int32_t nType)
{
	switch (nType)
	{
	case 0:
		return m_hKeyGlobal;
	case 1:
		return m_hKeyLastConnected;
	case 2:
		return m_hKeyCharacter;
	default:
		return nullptr;
	}
	// return __sub_000B2100(this, nullptr, nType);
}
long CConfig::GetPlayTime()
{
	return __sub_000B26A0(this, nullptr);
}
long CConfig::GetPartnerCode()
{
	return __sub_000B26A0(this, nullptr);
}
long CConfig::GetQuestGuideOption(long nOption)
{
	return __sub_000B3890(this, nullptr, nOption);
}
void CConfig::SetQuestGuideOption(long nOption, long nValue)
{
	__sub_000B39D0(this, nullptr, nOption, nValue);
}
CConfig &CConfig::operator=(const CConfig &arg0)
{
	return _op_assign_75(this, arg0);
}
CConfig &CConfig::_op_assign_75(CConfig *pThis, const CConfig &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
