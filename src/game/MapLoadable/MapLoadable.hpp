// MapLoadable.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Stage/Stage.hpp"
#include "Packet/Packet.hpp"

class CAvatar;

class CWvsPhysicalSpace2D;

// Level: 1 0x4d02
class CMapLoadable;

class CMapLoadable : public CStage
{
	// Nested
public:
	struct OBSTACLE : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		_x_com_ptr<IWzGr2DLayer> pLayer;

	public:
		int32_t bFlip{};

	public:
		long nDamage{};

	public:
		long nMobDamage{};

	public:
		long nDirection{};

	public:
		long nMobSkillID{};

	public:
		long nSLV{};

	public:
		long nForceHP{};

	public:
		ZXString<char> sName;

	public:
		unsigned long dwTargetField{};

	public:
		int32_t bSafeZoneByMob{};
		// Methods
	public:
		virtual ~OBSTACLE();

	public:
		void _dtor_0();

	public:
		OBSTACLE(const CMapLoadable::OBSTACLE &arg0);

	public:
		void _ctor_1( const CMapLoadable::OBSTACLE &arg0);

	public:
		OBSTACLE();

	public:
		void _ctor_0();

	public:
		CMapLoadable::OBSTACLE &operator=(const CMapLoadable::OBSTACLE &arg0);

	public:
		static CMapLoadable::OBSTACLE &_op_assign_3(CMapLoadable::OBSTACLE *pThis, const CMapLoadable::OBSTACLE &arg0);
	};

public:
	struct OBJECT_STATE
	{
		// Nested
		// Fields
	public:
		long nRepeat{};

	public:
		Ztl_bstr_t bsSfx;

	public:
		_x_com_ptr<IWzGr2DLayer> pLayer;

	public:
		int32_t bRestartMoving{};
		// Methods
	public:
		~OBJECT_STATE();

	public:
		void _dtor_0();

	public:
		OBJECT_STATE(const CMapLoadable::OBJECT_STATE &arg0);

	public:
		void _ctor_1( const CMapLoadable::OBJECT_STATE &arg0);

	public:
		OBJECT_STATE();

	public:
		void _ctor_0();

	public:
		CMapLoadable::OBJECT_STATE &operator=(const CMapLoadable::OBJECT_STATE &arg0);

	public:
		static CMapLoadable::OBJECT_STATE &_op_assign_3(CMapLoadable::OBJECT_STATE *pThis, const CMapLoadable::OBJECT_STATE &arg0);
	};

public:
	struct CHANGING_OBJECT
	{
		// Nested
		// Fields
	public:
		long nState{};

	public:
		unsigned long dwSN{};

	public:
		ZArray<CMapLoadable::OBJECT_STATE> aState;
		// Methods
	public:
		~CHANGING_OBJECT();

	public:
		void _dtor_0();

	public:
		CHANGING_OBJECT(const CMapLoadable::CHANGING_OBJECT &arg0);

	public:
		void _ctor_1( const CMapLoadable::CHANGING_OBJECT &arg0);

	public:
		CHANGING_OBJECT();

	public:
		void _ctor_0();

	public:
		CMapLoadable::CHANGING_OBJECT &operator=(const CMapLoadable::CHANGING_OBJECT &arg0);

	public:
		static CMapLoadable::CHANGING_OBJECT &_op_assign_3(CMapLoadable::CHANGING_OBJECT *pThis, const CMapLoadable::CHANGING_OBJECT &arg0);
	};

public:
	struct OBSTACLE_INFO
	{
		// Nested
		// Fields
	public:
		tagRECT rcObs{};

	public:
		tagPOINT vecForce{};

	public:
		const CMapLoadable::OBSTACLE *pObstacle{};
		// Methods
	};

public:
	struct REFLECTION_INFO
	{
		// Nested
		// Fields
	public:
		_x_com_ptr<IWzGr2DLayer> pLayer;

	public:
		_x_com_ptr<IWzCanvas> pOriginalCanvas;

	public:
		_x_com_ptr<IWzCanvas> pAvatarCanvas;

	public:
		_x_com_ptr<IWzCanvas> pRemoverCanvas;

	public:
		tagRECT rcArea{};

	public:
		long nAlpha{};

	public:
		int32_t bLastFrameUpdated{};
		// Methods
	public:
		~REFLECTION_INFO();

	public:
		void _dtor_0();

	public:
		REFLECTION_INFO(const CMapLoadable::REFLECTION_INFO &arg0);

	public:
		void _ctor_1( const CMapLoadable::REFLECTION_INFO &arg0);

	public:
		REFLECTION_INFO();

	public:
		void _ctor_0();

	public:
		CMapLoadable::REFLECTION_INFO &operator=(const CMapLoadable::REFLECTION_INFO &arg0);

	public:
		static CMapLoadable::REFLECTION_INFO &_op_assign_3(CMapLoadable::REFLECTION_INFO *pThis, const CMapLoadable::REFLECTION_INFO &arg0);
	};

public:
	struct VISIBLE_BY_QUEST
	{
		// Nested
		// Fields
	public:
		_x_com_ptr<IWzGr2DLayer> pLayer;

	public:
		ZArray<ZPair<unsigned short, long>> aQuestCond;
		// Methods
	public:
		~VISIBLE_BY_QUEST();

	public:
		void _dtor_0();

	public:
		VISIBLE_BY_QUEST(const CMapLoadable::VISIBLE_BY_QUEST &arg0);

	public:
		void _ctor_1( const CMapLoadable::VISIBLE_BY_QUEST &arg0);

	public:
		VISIBLE_BY_QUEST();

	public:
		void _ctor_0();

	public:
		CMapLoadable::VISIBLE_BY_QUEST &operator=(const CMapLoadable::VISIBLE_BY_QUEST &arg0);

	public:
		static CMapLoadable::VISIBLE_BY_QUEST &_op_assign_3(CMapLoadable::VISIBLE_BY_QUEST *pThis, const CMapLoadable::VISIBLE_BY_QUEST &arg0);
	};
	// Fields
protected:
	long m_nJukeBoxItemID{};

protected:
	long m_tNextMusic{};

protected:
	int32_t m_bJukeBoxPlaying{};

protected:
	uint32_t m_unWeatherSoundCookie{};

protected:
	ZXString16 m_sChangedBgmUOL;

protected:
	_x_com_ptr<IWzProperty> m_pPropFieldInfo;

protected:
	_x_com_ptr<IWzProperty> m_pPropField;

protected:
	int32_t m_bField{};

protected:
	ZRef<CWvsPhysicalSpace2D> m_pSpace2D;

protected:
	ZList<_x_com_ptr<IWzGr2DLayer>> m_lpLayerGen;

protected:
	ZList<_x_com_ptr<IWzGr2DLayer>> m_lpLayerObj;

protected:
	ZList<_x_com_ptr<IWzGr2DLayer>> m_lpLayerTransient;

protected:
	ZList<ZRef<CMapLoadable::OBSTACLE>> m_lpObstacle;

protected:
	ZList<ZRef<CMapLoadable::REFLECTION_INFO>> m_lpRefInfo;

protected:
	ZList<CMapLoadable::VISIBLE_BY_QUEST> m_lVisibleByQuest;

protected:
	ZMap<char const *, CMapLoadable::CHANGING_OBJECT, ZXString<char>> m_mNamedObj;

protected:
	ZMap<char const *, ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>>, ZXString<char>> m_mTagedObj;

protected:
	ZMap<long, ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>>, long> m_mlLayerBack;

protected:
	ZList<_x_com_ptr<IWzGr2DLayer>> m_lpLayerLetterBox;

protected:
	long m_nMagLevel_Obj{};

protected:
	long m_nMagLevel_Back{};

protected:
	tagRECT m_rcViewRange{};

protected:
	int32_t m_bSysOptTremble{};

protected:
	int32_t m_bMagLevelModifying{};

protected:
	ZArray<CMapLoadable::OBSTACLE_INFO> m_aObstacleInfo;

protected:
	long m_tRestoreBgmVolume{};

protected:
	long m_nRestoreBgmVolume{};

protected:
	int32_t m_bPlayHoldedBGM{};

protected:
	long m_tPlayHoldedBGM{};
	// Methods
public:
	virtual ~CMapLoadable();

public:
	void _dtor_0();

public:
	CMapLoadable(const CMapLoadable &arg0);

public:
	void _ctor_1( const CMapLoadable &arg0);

	CTOR_DEFAULT(CMapLoadable);
public:
	CMapLoadable();

public:
	void _ctor_0();

public:
	virtual void Init(void *pParam);

public:
	virtual void Close();

public:
	virtual void Update();

public:
	virtual void LoadMap();

public:
	const tagRECT &GetViewRangeRect();

public:
	int32_t GetCollideObstacleRect(const tagRECT &rc, long &nDamage, unsigned long &dwObstacleData, tagPOINT &vecForce, unsigned long &dwTargetField, int32_t bIsMob);

public:
	int32_t IsInSafeZone(const tagRECT &rc);

public:
	int32_t IsField();

public:
	void CheckNearestObstacle(const tagPOINT &arg0, const tagRECT &arg1);

public:
	int32_t TransientLayer_Exist();

public:
	int32_t IsJukeBoxPlaying();

public:
	void SetFieldMagLevel();

public:
	void OnEventChangeScreenResolution();

public:
	void SetSysTrembleOpt(int32_t arg0);

public:
	int32_t GetSysTrembleOpt();

public:
	long GetObjectState(const char *arg0);

public:
	int32_t SetObjectState(const char *sName, long nState);

public:
	tagRECT GetObjectRect(const char *sName);

public:
	long GetObjectSN(const char *arg0);

public:
	void FootHoldMove(const char *sName, long x1, long y1);

public:
	void FootHoldStateChange(const char *sName, long nState);

public:
	void PlayNextMusic();

public:
	void PrepareNextBGM();

public:
	void UpdateObstacleInfo();

public:
	void OnLeaveDirectionMode();

public:
	virtual void OnPacket(long nType, CInPacket &iPacket);

protected:
	void RestoreTile();

protected:
	void MakeTile(int32_t nPageIdx, _x_com_ptr<IWzProperty> pTileSet, _x_com_ptr<IWzProperty> pPiece);

protected:
	void RestoreObj();

protected:
	void MakeObj(int32_t nPageIdx, _x_com_ptr<IWzProperty> pPiece);

protected:
	_x_com_ptr<IWzGr2DLayer> MakeObjLayer(_x_com_ptr<IWzProperty> pProp, long nPageIdx, long x, long y, long z, int32_t f, long rx, long ry, long nFlow, long nMagLevel, long &nOption, const ZXString<char> &sObjName);

protected:
	void MakeObstacles(_x_com_ptr<IWzProperty> pProp, _x_com_ptr<IWzGr2DLayer> pLayer, int32_t bFlip, const ZXString<char> &sObjName);

protected:
	static void __cdecl AnimateObjLayer(_x_com_ptr<IWzGr2DLayer> pLayer, long nRepeat);

protected:
	void RestoreBack();

protected:
	void MakeBack(int32_t arg0, _x_com_ptr<IWzProperty> arg1, unsigned long arg2, int32_t arg3, long arg4, long arg5, long arg6, long arg7);

protected:
	void MakeGrid(_x_com_ptr<IWzGr2DLayer> pLayer, long type, long cx, long cy, long alpha, long nAnimate, int32_t bObj, ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>> pList, unsigned long ulColor);

protected:
	void MakeVectorAnimate(_x_com_ptr<IWzGr2DLayer> pLayer, _x_com_ptr<IWzVector2D> pOrigin);

protected:
	void RestoreWeather();

protected:
	void MakeCloud();

protected:
	void TransientLayer_Weather(const ZXString16 &arg0, long arg1, long arg2, long arg3);

protected:
	void TransientLayer_FireCracker(ZXString16 sPath);

protected:
	void WeatherLayer_RemoveAll();

protected:
	void TransientLayer_NewYear(ZXString16 sPath);

protected:
	void TransientLayer_Clear();

protected:
	void RestoreViewRange();

protected:
	void PlayBGMFromMapInfo();

protected:
	void RestoreBGM();

protected:
	void ProcessReflection();

protected:
	void RenderAvatar(_x_com_ptr<IWzCanvas> pCanvas, CAvatar *pAvatar, tagRECT *pRc);

public:
	void ReloadBack();

protected:
	void RestoreLetterBox();

protected:
	void AddLetterBox(long w, long h, long l, long t);

protected:
	void OnSetBackEffect(CInPacket &iPacket);

protected:
	void OnClearBackEffect(CInPacket &iPacket);

protected:
	void OnSetMapObjectVisible(CInPacket &iPacket);

protected:
	void SetMapObjectVisible(const ZXString<char> &sTag, int32_t bVisible);

protected:
	static void __cdecl SetLayerListVisible(ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>> plLayer, int32_t bVisible);

public:
	void PlaySoundWithMuteBgm(const ZXString<char> &sName);
	
	CLASS_RTTI_(CMapLoadable, CStage);

public:
	CMapLoadable &operator=(const CMapLoadable &arg0);

public:
	static CMapLoadable &_op_assign_64(CMapLoadable *pThis, const CMapLoadable &arg0);
};
STATIC_ASSERT_SIZE(CMapLoadable, 328);

void __cdecl draw_layer(_x_com_ptr<IWzCanvas> pCanvas, _x_com_ptr<IWzGr2DLayer> pLayer, long ox, long oy, tagRECT *pRc, int32_t bIsLeft);
