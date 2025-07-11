// AnimationDisplayer.hpp
#pragma once
#include <extra.h>

#include "util/base.h"
#include "pcom/wz.h"

#include "IG/IG.hpp"
#include "Bullet/Bullet.hpp"
#include "Stage/Stage.hpp"


struct GW_ItemSlotBase;
struct AnimationState;

class CField;

// Level: 1 0x47a0
class CAfterImageBullet;
// Level: 1 0x48eb
class CAnimationDisplayer;

class CAfterImageBullet : public CBullet
{
	// Nested
	// Fields
private:
	long m_tInterval{};

private:
	long m_nAlpha_Start{};

private:
	unsigned long m_tLastUpdated{};

private:
	int32_t m_bHasAfterImage{};
	// Methods
public:
	CAfterImageBullet() {}

public:
	virtual ~CAfterImageBullet();

public:
	void _dtor_0();

public:
	CAfterImageBullet(const CAfterImageBullet &arg0);

public:
	void _ctor_1(const CAfterImageBullet &arg0);

public:
	CAfterImageBullet(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd, _x_com_ptr<IWzVector2D> pVecTarget, int32_t bAfterImage, unsigned long tInterval, long nAlpha_Start);

public:
	void _ctor_0(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd, _x_com_ptr<IWzVector2D> pVecTarget, int32_t bAfterImage, unsigned long tInterval, long nAlpha_Start);

public:
	virtual int32_t Update(long tCur);

public:
	CAfterImageBullet &operator=(const CAfterImageBullet &arg0);

public:
	static CAfterImageBullet &_op_assign_4(CAfterImageBullet *pThis, const CAfterImageBullet &arg0);
};
STATIC_ASSERT_SIZE(CAfterImageBullet, 68);
class CAnimationDisplayer : public IGObj, public TSingleton<CAnimationDisplayer>
{
	// Nested
public:
	template <typename T>
	struct TAnimation
	{
		// Nested
		// Fields
	private:
		ZList<T> m_lList{};

	public:
        TAnimation() = default;

		void Update(long tCur)
		{
            auto head = m_lList.GetHeadPosition();
            while (head)
            {
                auto cur  = m_lList.GetNext(head);
                if(cur->Update(tCur)) {
                    m_lList.RemoveAt(cur);
                }
            }
		}

        T& Add() {
            return m_lList.AddTail();
        }

        void RemoveAll() {
            m_lList.RemoveAll();
        }

        bool IsRunning() {
            return m_lList.GetCount() > 0;
        }
    };

	struct FOLLOWINFO
	{
		// Nested
		// Fields
	public:
		ZArray<_x_com_ptr<IWzProperty>> apProperty;

	public:
		_x_com_ptr<IWzVector2D> pOrigin;

	public:
		_x_com_ptr<IWzGr2DLayer> pParentLayer;

	public:
		ZArray<_x_com_ptr<IWzVector2D>> apGenPoint;

	public:
		tagRECT rtStart{};

	public:
		tagSIZE szOffset0{};

	public:
		tagSIZE szOffset1{};

	public:
		long z{};

	public:
		long tDelay{};

	public:
		long tUpdateInterval{};

	public:
		int32_t bRelPos{};

	public:
		int32_t bEmission{};

	public:
		long nTheta{};

	public:
		int32_t bNoFlip{};

	public:
		long tUpdateNext{};

	public:
		long nCurrentAngle{};

	public:
		long nCurrentGenPointIndex{};

	public:
		ZRef<AnimationState> pAniState;
		// Methods
	public:
		~FOLLOWINFO();

	public:
		void _dtor_0();

	public:
		FOLLOWINFO(const CAnimationDisplayer::FOLLOWINFO &arg0);

	public:
		void _ctor_1(const CAnimationDisplayer::FOLLOWINFO &arg0);

	public:
		FOLLOWINFO();

	public:
		void _ctor_0();

	public:
		int32_t Update(long tCur);

	public:
		CAnimationDisplayer::FOLLOWINFO &operator=(const CAnimationDisplayer::FOLLOWINFO &__that);

	public:
		static CAnimationDisplayer::FOLLOWINFO &_op_assign_4(CAnimationDisplayer::FOLLOWINFO *pThis, const CAnimationDisplayer::FOLLOWINFO &__that);
	};

public:
	struct ONETIMEINFO
	{
		// Nested
		// Fields
	public:
		_x_com_ptr<IWzGr2DLayer> pLayer;

	public:
		_x_com_ptr<IWzGr2DLayer> pFlipOrigin;

	public:
		int32_t bWaiting{};

	public:
		long tDelayBeforeStart{};
		// Methods
	public:
		~ONETIMEINFO();

	public:
		void _dtor_0();

	public:
		ONETIMEINFO(const CAnimationDisplayer::ONETIMEINFO &arg0);

	public:
		void _ctor_1(const CAnimationDisplayer::ONETIMEINFO &arg0);

	public:
		ONETIMEINFO();

	public:
		void _ctor_0();

	public:
		int32_t Update(long tCur);

	public:
		CAnimationDisplayer::ONETIMEINFO &operator=(const CAnimationDisplayer::ONETIMEINFO &arg0);

	public:
		static CAnimationDisplayer::ONETIMEINFO &_op_assign_4(CAnimationDisplayer::ONETIMEINFO *pThis, const CAnimationDisplayer::ONETIMEINFO &arg0);
	};

public:
	struct REPEATINFO
	{
		// Nested
		// Fields
	public:
		long tDelayLeft{};

	public:
		_x_com_ptr<IWzGr2DLayer> pLayer;
		// Methods
	public:
		~REPEATINFO();

	public:
		void _dtor_0();

	public:
		REPEATINFO(const CAnimationDisplayer::REPEATINFO &arg0);

	public:
		void _ctor_1(const CAnimationDisplayer::REPEATINFO &arg0);

	public:
		REPEATINFO();

	public:
		void _ctor_0();

	public:
		int32_t Update(long arg0);

	public:
		CAnimationDisplayer::REPEATINFO &operator=(const CAnimationDisplayer::REPEATINFO &arg0);

	public:
		static CAnimationDisplayer::REPEATINFO &_op_assign_4(CAnimationDisplayer::REPEATINFO *pThis, const CAnimationDisplayer::REPEATINFO &arg0);
	};

public:
	struct USERSTATEINFO
	{
		// Nested
	public:
		enum CUREFF_
		{
			CUREFF_START = 0,
			CUREFF_REPEAT = 1,
			CUREFF_REPEAT_OFF = 2,
			CUREFF_END = 3
		};
		// Fields
	public:
		_x_com_ptr<IWzGr2DLayer> pStartLayer;

	public:
		_x_com_ptr<IWzGr2DLayer> pRepeatLayer;

	public:
		_x_com_ptr<IWzGr2DLayer> pEndLayer;

	public:
		unsigned long dwCharacterID{};

	public:
		long nCurEffect{};
		// Methods
	public:
		~USERSTATEINFO();

	public:
		void _dtor_0();

	public:
		USERSTATEINFO(const CAnimationDisplayer::USERSTATEINFO &arg0);

	public:
		void _ctor_1(const CAnimationDisplayer::USERSTATEINFO &arg0);

	public:
		USERSTATEINFO();

	public:
		void _ctor_0();

	public:
		int32_t Update(long tCur);

	public:
		CAnimationDisplayer::USERSTATEINFO &operator=(const CAnimationDisplayer::USERSTATEINFO &arg0);

	public:
		static CAnimationDisplayer::USERSTATEINFO &_op_assign_4(CAnimationDisplayer::USERSTATEINFO *pThis, const CAnimationDisplayer::USERSTATEINFO &arg0);
	};

public:
	class NormalBullet : public CBullet
	{
		// Nested
		// Fields
	private:
		_x_com_ptr<IWzGr2DLayer> m_pLayerEffect;

	private:
		long m_nZ{};

	private:
		Ztl_bstr_t m_sBulletEffectUOL;

	private:
		long m_nWeaponItemID{};

	private:
		long m_nBulletItemID{};
		// Methods
	public:
		virtual ~NormalBullet();

	public:
		void _dtor_0();

	public:
		NormalBullet(const CAnimationDisplayer::NormalBullet &arg0);

	public:
		void _ctor_1(const CAnimationDisplayer::NormalBullet &arg0);

	public:
		NormalBullet(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd, _x_com_ptr<IWzVector2D> pVecTarget, long z, Ztl_bstr_t sBulletEffectUOL, long nWeaponItemID, long nBulletItemID);

	public:
		void _ctor_0(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd, _x_com_ptr<IWzVector2D> pVecTarget, long z, Ztl_bstr_t sBulletEffectUOL, long nWeaponItemID, long nBulletItemID);

	protected:
		virtual _x_com_ptr<IWzGr2DLayer> PrepareBulletLayer(_x_com_ptr<IWzVector2D> arg0, int32_t arg1);

	public:
		CAnimationDisplayer::NormalBullet &operator=(const CAnimationDisplayer::NormalBullet &arg0);

	public:
		static CAnimationDisplayer::NormalBullet &_op_assign_4(CAnimationDisplayer::NormalBullet *pThis, const CAnimationDisplayer::NormalBullet &arg0);
	};

public:
	class MagicBullet : public CAfterImageBullet
	{
		// Nested
		// Fields
	private:
		long m_nZ{};

	private:
		Ztl_bstr_t m_sBallUOL;
		// Methods
	public:
		virtual ~MagicBullet();

	public:
		void _dtor_0();

	public:
		MagicBullet(const CAnimationDisplayer::MagicBullet &arg0);

	public:
		void _ctor_1(const CAnimationDisplayer::MagicBullet &arg0);

	public:
		MagicBullet(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd, _x_com_ptr<IWzVector2D> pVecTarget, long z, Ztl_bstr_t sBallUOL, int32_t bAfterImage);

	public:
		void _ctor_0(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd, _x_com_ptr<IWzVector2D> pVecTarget, long z, Ztl_bstr_t sBallUOL, int32_t bAfterImage);

	protected:
		virtual _x_com_ptr<IWzGr2DLayer> PrepareBulletLayer(_x_com_ptr<IWzVector2D> pOrigin, int32_t bClockwise);

	public:
		CAnimationDisplayer::MagicBullet &operator=(const CAnimationDisplayer::MagicBullet &arg0);

	public:
		static CAnimationDisplayer::MagicBullet &_op_assign_4(CAnimationDisplayer::MagicBullet *pThis, const CAnimationDisplayer::MagicBullet &arg0);
	};

public:
	struct ABSORBITEM
	{
		// Nested
		// Fields
	public:
		unsigned long dwCharacterID{};

	public:
		unsigned long dwMobID{};

	public:
		tagPOINT pt{};

	public:
		_x_com_ptr<IWzGr2DLayer> pLayer;

	public:
		long tStarted{};

	public:
		long nPetIndex{};
		// Methods
	public:
		~ABSORBITEM();

	public:
		void _dtor_0();

	public:
		ABSORBITEM(const CAnimationDisplayer::ABSORBITEM &arg0);

	public:
		void _ctor_1(const CAnimationDisplayer::ABSORBITEM &arg0);

	public:
		ABSORBITEM();

	public:
		void _ctor_0();

	public:
		int32_t Update(long tCur);

	public:
		CAnimationDisplayer::ABSORBITEM &operator=(const CAnimationDisplayer::ABSORBITEM &arg0);

	public:
		static CAnimationDisplayer::ABSORBITEM &_op_assign_4(CAnimationDisplayer::ABSORBITEM *pThis, const CAnimationDisplayer::ABSORBITEM &arg0);
	};

public:
	struct FALLINGINFO
	{
		// Nested
		// Fields
	public:
		int32_t bLeft{};

	public:
		tagRECT rcStart{};

	public:
		long nX{};

	public:
		long nY{};

	public:
		long nAlpha{};

	public:
		long tFall{};

	public:
		long tUpdateInterval{};

	public:
		long nUpdateCount{};

	public:
		long tUpdateNext{};

	public:
		long tEnd{};

	public:
		ZArray<_x_com_ptr<IWzProperty>> apProperty;
		// Methods
	public:
		~FALLINGINFO();

	public:
		void _dtor_0();

	public:
		FALLINGINFO(const CAnimationDisplayer::FALLINGINFO &arg0);

	public:
		void _ctor_1(const CAnimationDisplayer::FALLINGINFO &arg0);

	public:
		FALLINGINFO();

	public:
		void _ctor_0();

	public:
		int32_t Update(long tCur);

	public:
		CAnimationDisplayer::FALLINGINFO &operator=(const CAnimationDisplayer::FALLINGINFO &arg0);

	public:
		static CAnimationDisplayer::FALLINGINFO &_op_assign_4(CAnimationDisplayer::FALLINGINFO *pThis, const CAnimationDisplayer::FALLINGINFO &arg0);
	};

public:
	struct EXPLOSIONINFO
	{
		// Nested
		// Fields
	public:
		long nX{};

	public:
		long nY{};

	public:
		long nWidth{};

	public:
		long nCurWidth{};

	public:
		long nHeight{};

	public:
		long nCurHeight{};

	public:
		long tUpdateInterval{};

	public:
		long nUpdateCount{};

	public:
		long tUpdateNext{};

	public:
		long tEnd{};

	public:
		ZArray<_x_com_ptr<IWzProperty>> apProperty;
		// Methods
	public:
		~EXPLOSIONINFO();

	public:
		void _dtor_0();

	public:
		EXPLOSIONINFO(const CAnimationDisplayer::EXPLOSIONINFO &arg0);

	public:
		void _ctor_1(const CAnimationDisplayer::EXPLOSIONINFO &arg0);

	public:
		EXPLOSIONINFO();

	public:
		void _ctor_0();

	public:
		int32_t Update(long tCur);

	public:
		CAnimationDisplayer::EXPLOSIONINFO &operator=(const CAnimationDisplayer::EXPLOSIONINFO &arg0);

	public:
		static CAnimationDisplayer::EXPLOSIONINFO &_op_assign_4(CAnimationDisplayer::EXPLOSIONINFO *pThis, const CAnimationDisplayer::EXPLOSIONINFO &arg0);
	};

public:
	struct FIRECRACKER
	{
		// Nested
		// Fields
	public:
		long nX{};

	public:
		long nY{};

	public:
		long nWidth{};

	public:
		long nCurWidth{};

	public:
		long nHeight{};

	public:
		long nCurHeight{};

	public:
		long tUpdateInterval{};

	public:
		long nUpdateCount{};

	public:
		long tUpdateNext{};

	public:
		long tEnd{};

	public:
		ZArray<_x_com_ptr<IWzProperty>> apProperty;
		// Methods
	public:
		~FIRECRACKER();

	public:
		void _dtor_0();

	public:
		FIRECRACKER(const CAnimationDisplayer::FIRECRACKER &arg0);

	public:
		void _ctor_1(const CAnimationDisplayer::FIRECRACKER &arg0);

	public:
		FIRECRACKER();

	public:
		void _ctor_0();

	public:
		int32_t Update(long tCur);

	public:
		CAnimationDisplayer::FIRECRACKER &operator=(const CAnimationDisplayer::FIRECRACKER &arg0);

	public:
		static CAnimationDisplayer::FIRECRACKER &_op_assign_4(CAnimationDisplayer::FIRECRACKER *pThis, const CAnimationDisplayer::FIRECRACKER &arg0);
	};

public:
	struct NEWYEARINFO
	{
		// Nested
		// Fields
	public:
		long nX{};

	public:
		long nY{};

	public:
		long nWidth{};

	public:
		long nCurWidth{};

	public:
		long nHeight{};

	public:
		long nCurHeight{};

	public:
		long tUpdateInterval{};

	public:
		long nUpdateCount{};

	public:
		long tUpdateNext{};

	public:
		long tEnd{};

	public:
		ZXString16 sSoundUOL;

	public:
		uint32_t uNewYearCookie{};

	public:
		_x_com_ptr<IWzProperty> pProperty;
		// Methods
	public:
		~NEWYEARINFO();

	public:
		void _dtor_0();

	public:
		NEWYEARINFO(const CAnimationDisplayer::NEWYEARINFO &arg0);

	public:
		void _ctor_1(const CAnimationDisplayer::NEWYEARINFO &arg0);

	public:
		NEWYEARINFO();

	public:
		void _ctor_0();

	public:
		int32_t Update(long tCur);

	public:
		CAnimationDisplayer::NEWYEARINFO &operator=(const CAnimationDisplayer::NEWYEARINFO &arg0);

	public:
		static CAnimationDisplayer::NEWYEARINFO &_op_assign_4(CAnimationDisplayer::NEWYEARINFO *pThis, const CAnimationDisplayer::NEWYEARINFO &arg0);
	};

public:
	struct RESERVEDINFO
	{
		// Nested
		// Fields
	public:
		long nType{};

	public:
		ZXString16 sVisual;

	public:
		ZXString16 sSound;

	public:
		long tStart{};

	public:
		long nX{};

	public:
		long nY{};

	public:
		long nX1{};

	public:
		long nY1{};

	public:
		long z{};

	public:
		long tDuration{};

	public:
		long nWidth{};

	public:
		long nHeight{};

	public:
		double dProbability{};

	public:
		unsigned long dwField{};

	public:
		std::array<ZRef<GW_ItemSlotBase>, 60> aEquipped{};

	public:
		Ztl_bstr_t sActionName;
		// Methods
	public:
		~RESERVEDINFO();

	public:
		void _dtor_0();

	public:
		RESERVEDINFO(const CAnimationDisplayer::RESERVEDINFO &arg0);

	public:
		void _ctor_1(const CAnimationDisplayer::RESERVEDINFO &arg0);

	public:
		RESERVEDINFO();

	public:
		void _ctor_0();

	public:
		int32_t Update(long arg0);

	public:
		CAnimationDisplayer::RESERVEDINFO &operator=(const CAnimationDisplayer::RESERVEDINFO &arg0);

	public:
		static CAnimationDisplayer::RESERVEDINFO &_op_assign_4(CAnimationDisplayer::RESERVEDINFO *pThis, const CAnimationDisplayer::RESERVEDINFO &arg0);
	};

public:
	struct SQUIBINFO
	{
		static inline int32_t tLastSoundPlayed = 0;
		static const int32_t tSoundTolerance = 50;
		// Nested
		// Fields
	public:
		_x_com_ptr<IWzProperty> pVisual;

	public:
		ZXString16 sSound;

	public:
		double dX{};

	public:
		double dY{};

	public:
		double dProbability{};

	public:
		long tEnd{};

	public:
		long z{};

	public:
		long nWidth{};

	public:
		long nHeight{};
		// Methods
	public:
		~SQUIBINFO();

	public:
		void _dtor_0();

	public:
		SQUIBINFO(const CAnimationDisplayer::SQUIBINFO &arg0);

	public:
		void _ctor_1(const CAnimationDisplayer::SQUIBINFO &arg0);

	public:
		SQUIBINFO();

	public:
		void _ctor_0();

	public:
		int32_t Update(long tCur);

	public:
		CAnimationDisplayer::SQUIBINFO &operator=(const CAnimationDisplayer::SQUIBINFO &arg0);

	public:
		static CAnimationDisplayer::SQUIBINFO &_op_assign_4(CAnimationDisplayer::SQUIBINFO *pThis, const CAnimationDisplayer::SQUIBINFO &arg0);
	};

public:
	struct FOOTHOLDINFO
	{
		// Nested
		// Fields
	public:
		long tStart{};

	public:
		long tEnd{};

	public:
		long a0{};

	public:
		long a1{};

	public:
		ZArray<_x_com_ptr<IWzGr2DLayer>> apLayer;
		// Methods
	public:
		~FOOTHOLDINFO();

	public:
		void _dtor_0();

	public:
		FOOTHOLDINFO(const CAnimationDisplayer::FOOTHOLDINFO &arg0);

	public:
		void _ctor_1(const CAnimationDisplayer::FOOTHOLDINFO &arg0);

	public:
		FOOTHOLDINFO();

	public:
		void _ctor_0();

	public:
		int32_t Update(long tCur);

	public:
		CAnimationDisplayer::FOOTHOLDINFO &operator=(const CAnimationDisplayer::FOOTHOLDINFO &arg0);

	public:
		static CAnimationDisplayer::FOOTHOLDINFO &_op_assign_4(CAnimationDisplayer::FOOTHOLDINFO *pThis, const CAnimationDisplayer::FOOTHOLDINFO &arg0);
	};

public:
	struct PREPAREINFO
	{
		// Nested
		// Fields
	public:
		unsigned long dwCharacterID{};

	public:
		__POSITION *posList{};

	public:
		ZArray<_x_com_ptr<IWzGr2DLayer>> apLayer;

	public:
		_x_com_ptr<IWzGr2DLayer> pFlipLayer;
		// Methods
	public:
		~PREPAREINFO();

	public:
		void _dtor_0();

	public:
		PREPAREINFO(const CAnimationDisplayer::PREPAREINFO &arg0);

	public:
		void _ctor_1(const CAnimationDisplayer::PREPAREINFO &arg0);

	public:
		PREPAREINFO();

	public:
		void _ctor_0();

	public:
		int32_t Update(long tCur);

	public:
		CAnimationDisplayer::PREPAREINFO &operator=(const CAnimationDisplayer::PREPAREINFO &arg0);

	public:
		static CAnimationDisplayer::PREPAREINFO &_op_assign_4(CAnimationDisplayer::PREPAREINFO *pThis, const CAnimationDisplayer::PREPAREINFO &arg0);
	};

public:
	struct CHAINLIGHTNINGINFO
	{
		// Nested
		// Fields
	public:
		long tStart{};

	public:
		long tEnd{};

	public:
		tagPOINT pt1{};

	public:
		long z{};

	public:
		_x_com_ptr<IWzGr2DLayer> pLayer;

	public:
		Ztl_bstr_t sBallUOL;

	public:
		long nAngle{};
		// Methods
	public:
		~CHAINLIGHTNINGINFO();

	public:
		void _dtor_0();

	public:
		CHAINLIGHTNINGINFO(const CAnimationDisplayer::CHAINLIGHTNINGINFO &arg0);

	public:
		void _ctor_1(const CAnimationDisplayer::CHAINLIGHTNINGINFO &arg0);

	public:
		CHAINLIGHTNINGINFO();

	public:
		void _ctor_0();

	public:
		int32_t Update(long tCur);

	public:
		CAnimationDisplayer::CHAINLIGHTNINGINFO &operator=(const CAnimationDisplayer::CHAINLIGHTNINGINFO &arg0);

	public:
		static CAnimationDisplayer::CHAINLIGHTNINGINFO &_op_assign_4(CAnimationDisplayer::CHAINLIGHTNINGINFO *pThis, const CAnimationDisplayer::CHAINLIGHTNINGINFO &arg0);
	};

public:
	struct HOOKING_CHAIN_INFO
	{
		// Nested
		// Fields
	public:
		long tEnd1{};

	public:
		long tEnd2{};

	public:
		long nChainLength{};

	public:
		long nStretchSpeed{};

	public:
		unsigned long dwCharacterID{};

	public:
		unsigned long dwMobID{};

	public:
		tagPOINT ptUser{};

	public:
		tagPOINT ptTarget{};

	public:
		int32_t bCatchDone{};

	public:
		int32_t bLeft{};

	public:
		Ztl_bstr_t sImageUOL;

	public:
		_x_com_ptr<IWzCanvas> pCanvasChain;

	public:
		_x_com_ptr<IWzCanvas> pCanvasHook;

	public:
		_x_com_ptr<IWzGr2DLayer> pLayer;
		// Methods
	public:
		~HOOKING_CHAIN_INFO();

	public:
		void _dtor_0();

	public:
		HOOKING_CHAIN_INFO(const CAnimationDisplayer::HOOKING_CHAIN_INFO &arg0);

	public:
		void _ctor_1(const CAnimationDisplayer::HOOKING_CHAIN_INFO &arg0);

	public:
		HOOKING_CHAIN_INFO();

	public:
		void _ctor_0();

	public:
		int32_t Update(long tCur);

	public:
		CAnimationDisplayer::HOOKING_CHAIN_INFO &operator=(const CAnimationDisplayer::HOOKING_CHAIN_INFO &arg0);

	public:
		static CAnimationDisplayer::HOOKING_CHAIN_INFO &_op_assign_4(CAnimationDisplayer::HOOKING_CHAIN_INFO *pThis, const CAnimationDisplayer::HOOKING_CHAIN_INFO &arg0);
	};

public:
	struct MOTIONBLURINFO
	{
		// Nested
		// Fields
	public:
		long tUpdateNext{};

	public:
		_x_com_ptr<IWzGr2DLayer> pOverlay;

	public:
		ZArray<_x_com_ptr<IWzGr2DLayer>> apLayer;

	public:
		long tDelay{};

	public:
		long tUpdateInterval{};

	public:
		unsigned char nAlpha{};

	public:
		ZRef<AnimationState> pAniState;
		// Methods
	public:
		~MOTIONBLURINFO();

	public:
		void _dtor_0();

	public:
		MOTIONBLURINFO(const CAnimationDisplayer::MOTIONBLURINFO &arg0);

	public:
		void _ctor_1(const CAnimationDisplayer::MOTIONBLURINFO &arg0);

	public:
		MOTIONBLURINFO();

	public:
		void _ctor_0();

	public:
		int32_t Update(long tCur);

	public:
		CAnimationDisplayer::MOTIONBLURINFO &operator=(const CAnimationDisplayer::MOTIONBLURINFO &arg0);

	public:
		static CAnimationDisplayer::MOTIONBLURINFO &_op_assign_4(CAnimationDisplayer::MOTIONBLURINFO *pThis, const CAnimationDisplayer::MOTIONBLURINFO &arg0);
	};

public:
	struct FADEINFO
	{
		// Nested
		// Fields
	public:
		int32_t bStartFadeOut{};

	public:
		long tStartFadeOut{};

	public:
		long tFadeOut{};

	public:
		_x_com_ptr<IWzGr2DLayer> pLayer;
		// Methods
	public:
		~FADEINFO();

	public:
		void _dtor_0();

	public:
		FADEINFO(const CAnimationDisplayer::FADEINFO &arg0);

	public:
		void _ctor_1(const CAnimationDisplayer::FADEINFO &arg0);

	public:
		FADEINFO();

	public:
		void _ctor_0();

	public:
		int32_t Update(long tCur);

	public:
		CAnimationDisplayer::FADEINFO &operator=(const CAnimationDisplayer::FADEINFO &arg0);

	public:
		static CAnimationDisplayer::FADEINFO &_op_assign_4(CAnimationDisplayer::FADEINFO *pThis, const CAnimationDisplayer::FADEINFO &arg0);
	};

public:
	class MobSwallowedBullet : public CAfterImageBullet
	{
		// Nested
		// Fields
	private:
		long m_nZ{};

	private:
		int32_t m_bAfterImage{};

	private:
		_x_com_ptr<IWzCanvas> m_pCanvas;

	private:
		long m_tLastUpdate{};

	private:
		long m_nAngle{};
		// Methods
	public:
		virtual ~MobSwallowedBullet();

	public:
		void _dtor_0();

	public:
		MobSwallowedBullet(const CAnimationDisplayer::MobSwallowedBullet &arg0);

	public:
		void _ctor_1(const CAnimationDisplayer::MobSwallowedBullet &arg0);

	public:
		MobSwallowedBullet(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd, _x_com_ptr<IWzVector2D> pVecTarget, long z, int32_t bAfterImage, _x_com_ptr<IWzCanvas> pCanvas);

	public:
		void _ctor_0(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd, _x_com_ptr<IWzVector2D> pVecTarget, long z, int32_t bAfterImage, _x_com_ptr<IWzCanvas> pCanvas);

	protected:
		virtual _x_com_ptr<IWzGr2DLayer> PrepareBulletLayer(_x_com_ptr<IWzVector2D> pOrigin, int32_t bClockwise);

	protected:
		virtual int32_t Update(long tCur);

	public:
		CAnimationDisplayer::MobSwallowedBullet &operator=(const CAnimationDisplayer::MobSwallowedBullet &arg0);

	public:
		static CAnimationDisplayer::MobSwallowedBullet &_op_assign_5(CAnimationDisplayer::MobSwallowedBullet *pThis, const CAnimationDisplayer::MobSwallowedBullet &arg0);
	};

public:
	class MobBullet : public CAfterImageBullet
	{
		// Nested
		// Fields
	private:
		long m_nZ{};

	private:
		int32_t m_bAfterImage{};

	private:
		_x_com_ptr<IWzCanvas> m_pCanvas;

	private:
		long m_tLastUpdate{};

	private:
		long m_nAngle{};

	private:
		Ztl_bstr_t m_sBallUOL;

	private:
		_x_com_ptr<IWzGr2DLayer> m_pBallLayer;
		// Methods
	public:
		virtual ~MobBullet();

	public:
		void _dtor_0();

	public:
		MobBullet(const CAnimationDisplayer::MobBullet &arg0);

	public:
		void _ctor_1(const CAnimationDisplayer::MobBullet &arg0);

	public:
		MobBullet(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd, _x_com_ptr<IWzVector2D> pVecTarget, long z, int32_t bAfterImage, _x_com_ptr<IWzCanvas> pCanvas, Ztl_bstr_t sBallUOL);

	public:
		void _ctor_0(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd, _x_com_ptr<IWzVector2D> pVecTarget, long z, int32_t bAfterImage, _x_com_ptr<IWzCanvas> pCanvas, Ztl_bstr_t sBallUOL);

	protected:
		virtual _x_com_ptr<IWzGr2DLayer> PrepareBulletLayer(_x_com_ptr<IWzVector2D> pOrigin, int32_t bClockwise);

	protected:
		virtual int32_t Update(long tCur);

	protected:
		_x_com_ptr<IWzGr2DLayer> GetBallLayer();

	protected:
		void SetBallLayer(_x_com_ptr<IWzGr2DLayer> arg0);

	public:
		CAnimationDisplayer::MobBullet &operator=(const CAnimationDisplayer::MobBullet &arg0);

	public:
		static CAnimationDisplayer::MobBullet &_op_assign_7(CAnimationDisplayer::MobBullet *pThis, const CAnimationDisplayer::MobBullet &arg0);
	};
	// Fields
protected:
	ZMap<unsigned long, ZRef<CAnimationDisplayer::PREPAREINFO>, unsigned long> m_mPrepare;

protected:
	ZList<ZRef<CAnimationDisplayer::PREPAREINFO>> m_lPrepare;

protected:
	TAnimation<CAnimationDisplayer::ONETIMEINFO> m_OneTime;

protected:
	TAnimation<CAnimationDisplayer::REPEATINFO> m_Repeat;

protected:
	TAnimation<CAnimationDisplayer::SQUIBINFO> m_Squib;

protected:
	TAnimation<CAnimationDisplayer::RESERVEDINFO> m_Reserved;

protected:
	TAnimation<CAnimationDisplayer::ABSORBITEM> m_AbsorbItem;

protected:
	TAnimation<CAnimationDisplayer::FALLINGINFO> m_Falling;

protected:
	TAnimation<CAnimationDisplayer::EXPLOSIONINFO> m_Explosion;

protected:
	TAnimation<CAnimationDisplayer::CHAINLIGHTNINGINFO> m_Chainlightning;

protected:
	TAnimation<CAnimationDisplayer::HOOKING_CHAIN_INFO> m_HookingChain;

protected:
	TAnimation<CAnimationDisplayer::FIRECRACKER> m_FireCracker;

protected:
	TAnimation<CAnimationDisplayer::NEWYEARINFO> m_Newyear;

protected:
	TAnimation<CAnimationDisplayer::FOLLOWINFO> m_Follow;

protected:
	TAnimation<CAnimationDisplayer::MOTIONBLURINFO> m_MotionBlur;

protected:
	TAnimation<CAnimationDisplayer::FADEINFO> m_Fade;

protected:
	ZMap<unsigned long, ZRef<TAnimation<CAnimationDisplayer::CHAINLIGHTNINGINFO>>, unsigned long> m_mChainlightning;

protected:
	TAnimation<CAnimationDisplayer::USERSTATEINFO> m_UserState;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLocalFadeLayer;

protected:
	BulletContainer<CBullet> m_Bullets;

public:
	TAnimation<CAnimationDisplayer::FOOTHOLDINFO> m_FootHold;

protected:
	_x_com_ptr<IWzProperty> m_pEffNo_Red0;

protected:
	_x_com_ptr<IWzProperty> m_pEffNo_Red1;

protected:
	_x_com_ptr<IWzProperty> m_pEffNo_Blue0;

protected:
	_x_com_ptr<IWzProperty> m_pEffNo_Blue1;

protected:
	_x_com_ptr<IWzProperty> m_pEffNo_Violet0;

protected:
	_x_com_ptr<IWzProperty> m_pEffNo_Violet1;

protected:
	_x_com_ptr<IWzProperty> m_pEffNo_Cri0;

protected:
	_x_com_ptr<IWzProperty> m_pEffNo_Cri1;

protected:
	double m_dTrembleForce{};

protected:
	long m_tTrembleStart{};

protected:
	long m_tTrembleEnd{};

protected:
	double m_dTrembleReduction{};
	// Methods
public:
	virtual ~CAnimationDisplayer();

public:
	void _dtor_0();

public:
	CAnimationDisplayer(const CAnimationDisplayer &arg0);

public:
	void _ctor_1(const CAnimationDisplayer &arg0);

public:
	CAnimationDisplayer();

public:
	void _ctor_0();

public:
	static _x_com_ptr<IWzGr2DLayer> __cdecl LoadLayer(_x_com_ptr<IWzProperty> pProp, int32_t bFlip, _x_com_ptr<IWzVector2D> pOrigin, long rx, long ry, _x_com_ptr<IWzGr2DLayer> pOverlay, long z, long alpha, long magLevel);
	static _x_com_ptr<IWzGr2DLayer> __cdecl LoadLayer_0(_x_com_ptr<IWzProperty> pProp, int32_t bFlip, _x_com_ptr<IWzVector2D> pOrigin, long rx, long ry, _x_com_ptr<IWzGr2DLayer> pOverlay, long z, long alpha, long magLevel)
	{
		return LoadLayer(pProp, bFlip, pOrigin, rx, ry, pOverlay, z, alpha, magLevel);
	}

public:
	static _x_com_ptr<IWzGr2DLayer> __cdecl LoadLayer(const wchar_t *sLayerUOL, int32_t bFlip, _x_com_ptr<IWzVector2D> pOrigin, long rx, long ry, _x_com_ptr<IWzGr2DLayer> pOverlay, long z, long alpha, long magLevel);
	static _x_com_ptr<IWzGr2DLayer> __cdecl LoadLayer_1(const wchar_t *sLayerUOL, int32_t bFlip, _x_com_ptr<IWzVector2D> pOrigin, long rx, long ry, _x_com_ptr<IWzGr2DLayer> pOverlay, long z, long alpha, long magLevel)
	{
		return LoadLayer(sLayerUOL, bFlip, pOrigin, rx, ry, pOverlay, z, alpha, magLevel);
	}

public:
	static _x_com_ptr<IWzGr2DLayer> __cdecl LoadRandomLayer(const wchar_t *sLayerUOL, int32_t bFlip, _x_com_ptr<IWzVector2D> pOrigin, long rx, long ry, _x_com_ptr<IWzGr2DLayer> pOverlay, long z, long alpha, long magLevel);

public:
	static _x_com_ptr<IWzGr2DLayer> __cdecl LoadRotateLayer(_x_com_ptr<IWzProperty> pProp, int32_t bFlip, _x_com_ptr<IWzVector2D> pOrigin, long rx, long ry, _x_com_ptr<IWzGr2DLayer> pOverlay, long z, long alpha, long magLevel, long nRotate, int32_t bRotateSelf);

public:
	static _x_com_ptr<IWzGr2DLayer> __cdecl LoadSingleLayer(const wchar_t *sLayerUOL, int32_t bFlip, _x_com_ptr<IWzVector2D> pOrigin, long rx, long ry, _x_com_ptr<IWzGr2DLayer> pOverlay, long z, long alpha, long magLevel);
	static _x_com_ptr<IWzGr2DLayer> __cdecl LoadSingleLayer_1(const wchar_t *sLayerUOL, int32_t bFlip, _x_com_ptr<IWzVector2D> pOrigin, long rx, long ry, _x_com_ptr<IWzGr2DLayer> pOverlay, long z, long alpha, long magLevel)
	{
		return LoadSingleLayer(sLayerUOL, bFlip, pOrigin, rx, ry, pOverlay, z, alpha, magLevel);
	}

public:
	static _x_com_ptr<IWzGr2DLayer> __cdecl LoadSingleLayer(_x_com_ptr<IWzCanvas> pCanvas, int32_t bFlip, _x_com_ptr<IWzVector2D> pOrigin, long rx, long ry, _x_com_ptr<IWzGr2DLayer> pOverlay, long z, long alpha, long magLevel);
	static _x_com_ptr<IWzGr2DLayer> __cdecl LoadSingleLayer_0(_x_com_ptr<IWzCanvas> pCanvas, int32_t bFlip, _x_com_ptr<IWzVector2D> pOrigin, long rx, long ry, _x_com_ptr<IWzGr2DLayer> pOverlay, long z, long alpha, long magLevel)
	{
		return LoadSingleLayer(pCanvas, bFlip, pOrigin, rx, ry, pOverlay, z, alpha, magLevel);
	}

public:
	static void __cdecl LoadCanvas(_x_com_ptr<IWzGr2DLayer> pLayer, _x_com_ptr<IWzCanvas> pCanvas);

public:
	static unsigned long __cdecl CalcTotalDelay(_x_com_ptr<IWzGr2DLayer> pLayer);

public:
	void RegisterOneTimeAnimation(_x_com_ptr<IWzGr2DLayer> pLayer, long tDelayBeforeStart, _x_com_ptr<IWzGr2DLayer> pFlipOrigin);

public:
	void RegisterRepeatAnimation(_x_com_ptr<IWzGr2DLayer> pLayer, long tDelay);

public:
	void RegisterBulletAnimation(long tStart, long tEnd, tagPOINT pt1, tagPOINT pt2, _x_com_ptr<IWzVector2D> pVecTarget, long z, Ztl_bstr_t sBulletEffectUOL, long nWeaponItemID, long nBulletItemID);

public:
	void RegisterMagicBulletAnimation(long tStart, long tEnd, tagPOINT pt1, tagPOINT pt2, _x_com_ptr<IWzVector2D> pVecTarget, long z, Ztl_bstr_t sBallUOL, int32_t bAfterImage);

public:
	void RegisterAbsorbItemAnimation(unsigned long dwCharacterID, unsigned long dwMobID, tagPOINT pt, _x_com_ptr<IWzGr2DLayer> pLayer, long nPetIndex);

public:
	void RegisterFallingAnimation(const wchar_t *sUOL, int32_t b, const tagRECT &rcStart, long tStart);

public:
	void RegisterExplosionAnimation(const wchar_t *sUOL, const tagRECT &rcArea);

public:
	void RegisterFireCrackerAnimation(const wchar_t *sUOL, const tagRECT &rcArea, long tUpdateInterval, long nUpdateCount, long tUpdateNext, long tDuration);

public:
	void RemoveFireCrackerAnimation();

public:
	int32_t IsFireCrackerRunning();

public:
	void RemoveNewYearAnimation();

public:
	void RegisterNewYearAnimation(const wchar_t *sUOL, ZXString16 sSoundUOL, const tagRECT &rcArea, long tUpdateInterval, long nUpdateCount, long tUpdateNext, long tDuration);

public:
	void RegisterFootHoldAnimation(const wchar_t *sUOL, const tagRECT &rcArea, long tStartDelay, long tDuration, long a0, long a1, int32_t bRandomPos);

public:
	ZRef<AnimationState> RegisterFollowAnimation(const CAnimationDisplayer::FOLLOWINFO &fi);

public:
	ZRef<AnimationState> RegisterMotionBlurAnimation(_x_com_ptr<IWzGr2DLayer> pOverlay, ZArray<_x_com_ptr<IWzGr2DLayer>> &apLayer, long tDelay, long tInterval, unsigned char nAlpha);

public:
	void RegisterFadeInOutAnimation(long tFadeIn, long tDelay, long tFadeOut, long z, long nAlpha);

public:
	void RemoveAllFadeInAnimation(long tFadeOut);

public:
	void SetLocalFadeLayer(long z, long nAlpha);

public:
	void ResetLocalFadeLayer();

public:
	void RegisterMobSwallowAnimation(long tStart, long tEnd, tagPOINT pt1, tagPOINT pt2, _x_com_ptr<IWzVector2D> pVecTarget, long z, _x_com_ptr<IWzCanvas> pCanvas, int32_t bAfterImage);

public:
	void RegisterMobBulletAnimation(long tStart, long tEnd, tagPOINT pt1, tagPOINT pt2, _x_com_ptr<IWzVector2D> pVecTarget, long z, unsigned long dwMobTemplateID, Ztl_bstr_t sBallUOL, int32_t bAfterImage);

public:
	void RemoveAll();

public:
	void RegisterPrepareAnimation(unsigned long dwCharacterID, ZArray<_x_com_ptr<IWzGr2DLayer>> &apLayer, _x_com_ptr<IWzGr2DLayer> pFlipLayer);

public:
	void RemovePrepareAnimation(unsigned long dwCharacterID);

public:
	void RegisterHookingChainAnimation(long tAttack, unsigned long dwCharacterID, unsigned long dwMobID, int32_t bLeft, long z, Ztl_bstr_t sImageUOL);

public:
	void RegisterChainlightningAnimation(long tStart, long tEnd, tagPOINT pt1, tagPOINT pt2, long z, Ztl_bstr_t sBallUOL, int32_t bOrdered);

public:
	void RegisterTeslacoilAnimation(long tStart, long tEnd, tagPOINT pt1, tagPOINT pt2, long z, Ztl_bstr_t sBallUOL, unsigned long dwKey);

public:
	void RemoveTeslacoilAnimation(unsigned long dwKey);

public:
	void RegisterUserStateAnimation(_x_com_ptr<IWzGr2DLayer> pStartLayer, _x_com_ptr<IWzGr2DLayer> pRepeatLayer, _x_com_ptr<IWzGr2DLayer> pEndLayer, unsigned long dwCharacterID);

public:
	virtual void Update();

public:
	void NonFieldUpdate(long tCur);

public:
	void UpdateBeforeUserUpdate();

public:
	void SetCenterOrigin(_x_com_ptr<IWzVector2D> pOrigin);

public:
	void Effect_HP(long arg0, long arg1, long arg2, long arg3, int32_t arg4);

public:
	void Effect_Guard(long lCenterLeft, long lCenterTop, long lColorType);

public:
	void Effect_Miss(long lCenterLeft, long lCenterTop, long lColorType);

public:
	void Effect_Catch(long lCenterLeft, long lCenterTop, int32_t bSuccess, long tDelay);

public:
	void Effect_General(const wchar_t *sEffect, int32_t bFlip, _x_com_ptr<IWzVector2D> pOrigin, long rx, long ry, _x_com_ptr<IWzGr2DLayer> pOverlay, long z);

public:
	void Effect_ApplyStartDelay(const wchar_t *arg0, int32_t arg1, _x_com_ptr<IWzVector2D> arg2, long arg3, long arg4, _x_com_ptr<IWzGr2DLayer> arg5, long arg6, long arg7);

public:
	void Effect_Reserved(const wchar_t *arg0, long arg1, long arg2, long arg3);

public:
	void Effect_Squib(_x_com_ptr<IWzProperty> pVisual, double dX, double dY, long width, long height, ZXString16 sSound, long duration, double probability, long z);

public:
	void Effect_SkillUse(const wchar_t *sEffect, int32_t bFlip, _x_com_ptr<IWzVector2D> pOrigin, _x_com_ptr<IWzGr2DLayer> pOverlay, long nDelayRate, long nLast, long z, long x, long y, int32_t bAutoFlip);

public:
	void Effect_Quest(long nEffect, _x_com_ptr<IWzVector2D> pOrigin);

public:
	void Effect_Tremble(double dTrembleForce, int32_t bHeavyNShortTremble, long tDelay, long tAddEffectTime, int32_t bEnforceTremble);

public:
	void Effect_SkillPrepare(unsigned long dwCharacterID, const wchar_t *sEffect, int32_t bFlip, _x_com_ptr<IWzVector2D> pOrigin, _x_com_ptr<IWzGr2DLayer> pOverlay, long nDelayRate, long nLast, int32_t bRepeat, long x, long y);

public:
	void Effect_ItemUnrelease(int32_t bFlip, _x_com_ptr<IWzVector2D> pOrigin, _x_com_ptr<IWzGr2DLayer> pOverlay);

public:
	void Effect_ItemUpgrade(int32_t arg0, _x_com_ptr<IWzVector2D> arg1, _x_com_ptr<IWzGr2DLayer> arg2, int32_t arg3, int32_t arg4);

public:
	void Effect_ItemMake(int32_t bFlip, _x_com_ptr<IWzVector2D> pOrigin, _x_com_ptr<IWzGr2DLayer> pOverlay, long nResult);

public:
	void Effect_BuffItemUse(const wchar_t *sEffect, int32_t bFlip, _x_com_ptr<IWzVector2D> pOrigin, long rx, long ry, _x_com_ptr<IWzGr2DLayer> pOverlay, long z);

public:
	void Effect_ByItem(long lCenterLeft, long lCenterTop, long nItemID, int32_t bSuccess);

public:
	void Effect_EnchantItemUpgrade(const wchar_t *arg0, int32_t arg1, _x_com_ptr<IWzVector2D> arg2, _x_com_ptr<IWzGr2DLayer> arg3);

public:
	void Effect_SkillBookUsed(int32_t bFlip, _x_com_ptr<IWzVector2D> pOrigin, _x_com_ptr<IWzGr2DLayer> pOverlay, int32_t bSuccess);

public:
	void Effect_RewardRullet(long arg0, long arg1, long arg2, _x_com_ptr<IWzVector2D> arg3);

public:
	void Effect_Cool(long lCenterLeft, long lCenterTop);

public:
	void Effect_BasicFloat(long lCenterLeft, long lCenterTop, _x_com_ptr<IWzCanvas> pCanvas);

public:
	void Effect_ViciousHammer(int32_t bFlip, _x_com_ptr<IWzVector2D> pOrigin, _x_com_ptr<IWzGr2DLayer> pOverlay, long nFinished);

public:
	void Effect_Vega(int32_t bFlip, _x_com_ptr<IWzVector2D> pOrigin, _x_com_ptr<IWzGr2DLayer> pOverlay, unsigned long dwMode);

public:
	void Effect_CashItemGachapon(int32_t bFlip, _x_com_ptr<IWzVector2D> pOrigin, _x_com_ptr<IWzGr2DLayer> pOverlay, int32_t bJackpotAni);

public:
	void Effect_FullChargedAngerGauge(ZXString16 sUOL, _x_com_ptr<IWzVector2D> pOrigin, _x_com_ptr<IWzGr2DLayer> pOverlay);

public:
	_x_com_ptr<IWzGr2DLayer> Effect_Transformed(_x_com_ptr<IWzProperty> pEffect, double x, double y, _x_com_ptr<IWzGr2DLayer> pOverlay, long z, double scale, double angle);

public:
	void Effect_GoldHammer(int32_t arg0, _x_com_ptr<IWzVector2D> arg1, _x_com_ptr<IWzGr2DLayer> arg2, long arg3);

public:
	void Effect_QuestDeliveryItemUse(long nItemID, _x_com_ptr<IWzVector2D> pOrigin, _x_com_ptr<IWzGr2DLayer> pOverlay, unsigned long dwCharacterID);

public:
	void MakeLayer_FootHold(const wchar_t *sEffect, const tagRECT &rcArea, ZArray<_x_com_ptr<IWzGr2DLayer>> &apLayer, long nEffectDistance, int32_t bRandomPos);

public:
	CAnimationDisplayer &operator=(const CAnimationDisplayer &arg0);

public:
	static CAnimationDisplayer &_op_assign_74(CAnimationDisplayer *pThis, const CAnimationDisplayer &arg0);
};
STATIC_ASSERT_SIZE(CAnimationDisplayer, 480);
STATIC_ASSERT_SIZE(CAnimationDisplayer::MagicBullet, 0x4c);

CField *__cdecl get_field();
double __cdecl get_double(Ztl_variant_t &v, double dDefault);
int32_t __cdecl _ZtlSecureFuse_int_(const int32_t *at, uint32_t uCS);
uint32_t __cdecl get_rand_range(uint32_t nRange, uint32_t nStart);
HRESULT __cdecl _com_util__UIntAdd(uint32_t puResult, uint32_t arg1, uint32_t *arg2);
const wchar_t *__cdecl get_string(Ztl_variant_t &v, const wchar_t *sDefault);
HRESULT __cdecl raw_InvokeFly(IWzVector2D *pVector, int32_t nOriginCount, FLYORIGIN *aOrigins);
void __cdecl PcCreateObject__com_ptr_t__com_IIID_IWzVector2D___GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4___(const wchar_t *sUOL, _x_com_ptr<IWzVector2D> &pObj, IUnknown *pUnkOuter);
