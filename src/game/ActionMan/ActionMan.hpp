// ActionMan.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"
#include "util/extra.h"
#include <array>
#include "CSCommon/CSCommon.hpp"

class CActionFrame;
class CNpcTemplate;
class CPetTemplate;
class CEmployeeTemplate;

// Level: 0 0x5242
struct ActionKey;
// Level: 1 0x82a2
class CActionMan;


struct AHECODES
{
	std::array<long, 60> aHair{};
	long nAction{};
};

struct ActionKey
{
	// Nested
	// Fields
public:
	long nSkillID{};

public:
	long nSLV{};

public:
	long nAction{};
	// Methods
public:
	ActionKey(long arg0, long arg1, long arg2);

public:
	void _ctor_0(long arg0, long arg1, long arg2);

public:
	int32_t operator==(const ActionKey &rhs) const;

public:
	static int32_t _op_eq_1(ActionKey *pThis, const ActionKey &rhs);
};
STATIC_ASSERT_SIZE(ActionKey, 12);
class CActionMan : public TSingleton<CActionMan>
{
	// Nested
public:
	struct CHARACTERIMGENTRY : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		_x_com_ptr<IWzProperty> pImg;

	public:
		Ztl_bstr_t sISlot;

	public:
		Ztl_bstr_t sVSlot;

	public:
		long nWeapon{};

	public:
		Ztl_bstr_t sWeaponAfterimage;

	public:
		long nAttackSpeed{};

	public:
		long nWalk{};

	public:
		long nStand{};

	public:
		long nAttack{};

	public:
		long tLastAccessed{};

	public:
		__POSITION *posMap{};

	public:
		Ztl_bstr_t sSfx;

	public:
		int32_t bWeekly{};

	public:
		_x_com_ptr<IWzProperty> pWeeklyImg;
		// Methods
	public:
		virtual ~CHARACTERIMGENTRY();

	public:
		void _dtor_0();

	public:
		CHARACTERIMGENTRY(const CActionMan::CHARACTERIMGENTRY &arg0);

	public:
		void _ctor_1(const CActionMan::CHARACTERIMGENTRY &arg0);

	public:
		CHARACTERIMGENTRY();

	public:
		void _ctor_0();

	public:
		CActionMan::CHARACTERIMGENTRY &operator=(const CActionMan::CHARACTERIMGENTRY &arg0);

	public:
		static CActionMan::CHARACTERIMGENTRY &_op_assign_3(CActionMan::CHARACTERIMGENTRY *pThis, const CActionMan::CHARACTERIMGENTRY &arg0);
	};

public:
	struct CHARACTERACTIONFRAMEENTRY : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		_x_com_ptr<IWzCanvas> pCanvasUnderFace;

	public:
		_x_com_ptr<IWzCanvas> pCanvasOverFace;

	public:
		tagPOINT ptBrow{};

	public:
		tagPOINT ptNavel{};

	public:
		tagPOINT ptMuzzle{};
		// Methods
	public:
		virtual ~CHARACTERACTIONFRAMEENTRY();

	public:
		void _dtor_0();

	public:
		CHARACTERACTIONFRAMEENTRY(const CActionMan::CHARACTERACTIONFRAMEENTRY &arg0);

	public:
		void _ctor_1(const CActionMan::CHARACTERACTIONFRAMEENTRY &arg0);

	public:
		CHARACTERACTIONFRAMEENTRY();

	public:
		void _ctor_0();

	public:
		CActionMan::CHARACTERACTIONFRAMEENTRY &operator=(const CActionMan::CHARACTERACTIONFRAMEENTRY &arg0);

	public:
		static CActionMan::CHARACTERACTIONFRAMEENTRY &_op_assign_3(CActionMan::CHARACTERACTIONFRAMEENTRY *pThis, const CActionMan::CHARACTERACTIONFRAMEENTRY &arg0);
	};

public:
	struct TAMINGMOBACTIONFRAMEENTRY : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		_x_com_ptr<IWzCanvas> pCanvasUnderCharacter;

	public:
		_x_com_ptr<IWzCanvas> pCanvasOverCharacter;

	public:
		tagRECT rcBody{};

	public:
		long tDelay{};

	public:
		tagPOINT ptNavel{};

	public:
		tagPOINT ptHead{};

	public:
		tagPOINT ptMuzzle{};
		// Methods
	public:
		virtual ~TAMINGMOBACTIONFRAMEENTRY();

	public:
		void _dtor_0();

	public:
		TAMINGMOBACTIONFRAMEENTRY(const CActionMan::TAMINGMOBACTIONFRAMEENTRY &arg0);

	public:
		void _ctor_1(const CActionMan::TAMINGMOBACTIONFRAMEENTRY &arg0);

	public:
		TAMINGMOBACTIONFRAMEENTRY();

	public:
		void _ctor_0();

	public:
		CActionMan::TAMINGMOBACTIONFRAMEENTRY &operator=(const CActionMan::TAMINGMOBACTIONFRAMEENTRY &arg0);

	public:
		static CActionMan::TAMINGMOBACTIONFRAMEENTRY &_op_assign_3(CActionMan::TAMINGMOBACTIONFRAMEENTRY *pThis, const CActionMan::TAMINGMOBACTIONFRAMEENTRY &arg0);
	};

public:
	struct MELEEATTACKAFTERIMAGE : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		ZArray<ZArray<_x_com_ptr<IWzCanvas>>> aapCanvas;

	public:
		ZArray<SECRECT> arcRange;
		// Methods
	public:
		virtual ~MELEEATTACKAFTERIMAGE();

	public:
		void _dtor_0();

	public:
		MELEEATTACKAFTERIMAGE(const CActionMan::MELEEATTACKAFTERIMAGE &arg0);

	public:
		void _ctor_1(const CActionMan::MELEEATTACKAFTERIMAGE &arg0);

	public:
		MELEEATTACKAFTERIMAGE();

	public:
		void _ctor_0();

	public:
		CActionMan::MELEEATTACKAFTERIMAGE &operator=(const CActionMan::MELEEATTACKAFTERIMAGE &arg0);

	public:
		static CActionMan::MELEEATTACKAFTERIMAGE &_op_assign_3(CActionMan::MELEEATTACKAFTERIMAGE *pThis, const CActionMan::MELEEATTACKAFTERIMAGE &arg0);
	};

public:
	struct FACELOOKENTRY : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		ZList<_x_com_ptr<IWzCanvas>> lpEmotion;

	public:
		long tDuration{};

	public:
		long tLastAccessed{};

	public:
		__POSITION *posMap{};

	public:
		__POSITION *posList{};
		// Methods
	public:
		virtual ~FACELOOKENTRY();

	public:
		void _dtor_0();

	public:
		FACELOOKENTRY(const CActionMan::FACELOOKENTRY &arg0);

	public:
		void _ctor_1(const CActionMan::FACELOOKENTRY &arg0);

		CTOR_DEFAULT(FACELOOKENTRY)
	public:
		FACELOOKENTRY();

	public:
		void _ctor_0();

	public:
		CActionMan::FACELOOKENTRY &operator=(const CActionMan::FACELOOKENTRY &arg0);

	public:
		static CActionMan::FACELOOKENTRY &_op_assign_3(CActionMan::FACELOOKENTRY *pThis, const CActionMan::FACELOOKENTRY &arg0);
	};

public:
	struct MORPHIMGENTRY : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		_x_com_ptr<IWzProperty> pImg;

	public:
		long tLastAccessed{};

	public:
		__POSITION *posMap{};
		// Methods
	public:
		virtual ~MORPHIMGENTRY();

	public:
		void _dtor_0();

	public:
		MORPHIMGENTRY(const CActionMan::MORPHIMGENTRY &arg0);

	public:
		void _ctor_1(const CActionMan::MORPHIMGENTRY &arg0);

	public:
		MORPHIMGENTRY();

	public:
		void _ctor_0();

	public:
		CActionMan::MORPHIMGENTRY &operator=(const CActionMan::MORPHIMGENTRY &arg0);

	public:
		static CActionMan::MORPHIMGENTRY &_op_assign_3(CActionMan::MORPHIMGENTRY *pThis, const CActionMan::MORPHIMGENTRY &arg0);
	};

public:
	struct MORPHACTIONFRAMEENTRY : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		_x_com_ptr<IWzCanvas> pCanvas;

	public:
		tagRECT rcBody{};

	public:
		tagPOINT ptHead{};

	public:
		long tDelay{};
		// Methods
	public:
		virtual ~MORPHACTIONFRAMEENTRY();

	public:
		void _dtor_0();

	public:
		MORPHACTIONFRAMEENTRY(const CActionMan::MORPHACTIONFRAMEENTRY &arg0);

	public:
		void _ctor_1(const CActionMan::MORPHACTIONFRAMEENTRY &arg0);

	public:
		MORPHACTIONFRAMEENTRY();

	public:
		void _ctor_0();

	public:
		CActionMan::MORPHACTIONFRAMEENTRY &operator=(const CActionMan::MORPHACTIONFRAMEENTRY &arg0);

	public:
		static CActionMan::MORPHACTIONFRAMEENTRY &_op_assign_3(CActionMan::MORPHACTIONFRAMEENTRY *pThis, const CActionMan::MORPHACTIONFRAMEENTRY &arg0);
	};

public:
	struct MORPHACTIONENTRY : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		unsigned long dwTemplateID{};

	public:
		long nAction{};

	public:
		ZArray<ZRef<CActionMan::MORPHACTIONFRAMEENTRY>> apFE;

	public:
		long tLastAccessed{};

	public:
		__POSITION *posMap{};

	public:
		__POSITION *posList{};
		// Methods
	public:
		virtual ~MORPHACTIONENTRY();

	public:
		void _dtor_0();

	public:
		MORPHACTIONENTRY(const CActionMan::MORPHACTIONENTRY &arg0);

	public:
		void _ctor_1(const CActionMan::MORPHACTIONENTRY &arg0);

	public:
		MORPHACTIONENTRY();

	public:
		void _ctor_0();

	public:
		CActionMan::MORPHACTIONENTRY &operator=(const CActionMan::MORPHACTIONENTRY &arg0);

	public:
		static CActionMan::MORPHACTIONENTRY &_op_assign_3(CActionMan::MORPHACTIONENTRY *pThis, const CActionMan::MORPHACTIONENTRY &arg0);
	};

public:
	struct MOBIMGENTRY : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		_x_com_ptr<IWzProperty> pImg;

	public:
		long tLastAccessed{};

	public:
		__POSITION *posMap{};
		// Methods
	public:
		virtual ~MOBIMGENTRY();

	public:
		void _dtor_0();

	public:
		MOBIMGENTRY(const CActionMan::MOBIMGENTRY &arg0);

	public:
		void _ctor_1(const CActionMan::MOBIMGENTRY &arg0);

	public:
		MOBIMGENTRY();

	public:
		void _ctor_0();

	public:
		CActionMan::MOBIMGENTRY &operator=(const CActionMan::MOBIMGENTRY &arg0);

	public:
		static CActionMan::MOBIMGENTRY &_op_assign_3(CActionMan::MOBIMGENTRY *pThis, const CActionMan::MOBIMGENTRY &arg0);
	};

public:
	struct MOBACTIONFRAMEENTRY : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		_x_com_ptr<IWzCanvas> pCanvas;

	public:
		SECRECT rcBody;

	public:
		ZArray<SECRECT> arcMultiBody;

	public:
		ZArray<SECRECT> arcAttackOnlyBody;

	public:
		tagPOINT ptHead{};

	public:
		long tDelay{};

	public:
		long a0{};

	public:
		long a1{};
		// Methods
	public:
		virtual ~MOBACTIONFRAMEENTRY();

	public:
		void _dtor_0();

	public:
		MOBACTIONFRAMEENTRY(const CActionMan::MOBACTIONFRAMEENTRY &arg0);

	public:
		void _ctor_1(const CActionMan::MOBACTIONFRAMEENTRY &arg0);

	public:
		MOBACTIONFRAMEENTRY();

	public:
		void _ctor_0();

	public:
		CActionMan::MOBACTIONFRAMEENTRY &operator=(const CActionMan::MOBACTIONFRAMEENTRY &arg0);

	public:
		static CActionMan::MOBACTIONFRAMEENTRY &_op_assign_3(CActionMan::MOBACTIONFRAMEENTRY *pThis, const CActionMan::MOBACTIONFRAMEENTRY &arg0);
	};

public:
	struct MOBACTIONENTRY : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		unsigned long dwTemplateID{};

	public:
		long nAction{};

	public:
		ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>> lpFrame;

	public:
		long tLastAccessed{};

	public:
		__POSITION *posMap{};

	public:
		__POSITION *posList{};
		// Methods
	public:
		virtual ~MOBACTIONENTRY();

	public:
		void _dtor_0();

	public:
		MOBACTIONENTRY(const CActionMan::MOBACTIONENTRY &arg0);

	public:
		void _ctor_1(const CActionMan::MOBACTIONENTRY &arg0);

	public:
		MOBACTIONENTRY();

	public:
		void _ctor_0();

	public:
		CActionMan::MOBACTIONENTRY &operator=(const CActionMan::MOBACTIONENTRY &arg0);

	public:
		static CActionMan::MOBACTIONENTRY &_op_assign_3(CActionMan::MOBACTIONENTRY *pThis, const CActionMan::MOBACTIONENTRY &arg0);
	};

public:
	struct NPCIMGENTRY : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		_x_com_ptr<IWzProperty> pImg;

	public:
		long tLastAccessed{};

	public:
		__POSITION *posMap{};
		// Methods
	public:
		virtual ~NPCIMGENTRY();

	public:
		void _dtor_0();

	public:
		NPCIMGENTRY(const CActionMan::NPCIMGENTRY &arg0);

	public:
		void _ctor_1(const CActionMan::NPCIMGENTRY &arg0);

	public:
		NPCIMGENTRY();

	public:
		void _ctor_0();

	public:
		CActionMan::NPCIMGENTRY &operator=(const CActionMan::NPCIMGENTRY &arg0);

	public:
		static CActionMan::NPCIMGENTRY &_op_assign_3(CActionMan::NPCIMGENTRY *pThis, const CActionMan::NPCIMGENTRY &arg0);
	};

public:
	struct NPCACTIONFRAMEENTRY : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		_x_com_ptr<IWzCanvas> pCanvas;

	public:
		long nDelay{};
		// Methods
	public:
		virtual ~NPCACTIONFRAMEENTRY();

	public:
		void _dtor_0();

	public:
		NPCACTIONFRAMEENTRY(const CActionMan::NPCACTIONFRAMEENTRY &arg0);

	public:
		void _ctor_1(const CActionMan::NPCACTIONFRAMEENTRY &arg0);

	public:
		NPCACTIONFRAMEENTRY();

	public:
		void _ctor_0();

	public:
		CActionMan::NPCACTIONFRAMEENTRY &operator=(const CActionMan::NPCACTIONFRAMEENTRY &arg0);

	public:
		static CActionMan::NPCACTIONFRAMEENTRY &_op_assign_3(CActionMan::NPCACTIONFRAMEENTRY *pThis, const CActionMan::NPCACTIONFRAMEENTRY &arg0);
	};

public:
	struct NPCACTIONENTRY : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		unsigned long dwTemplateID{};

	public:
		long nAction{};

	public:
		ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>> lpFrame;

	public:
		long tLastAccessed{};

	public:
		__POSITION *posMap{};

	public:
		__POSITION *posList{};
		// Methods
	public:
		virtual ~NPCACTIONENTRY();

	public:
		void _dtor_0();

	public:
		NPCACTIONENTRY(const CActionMan::NPCACTIONENTRY &arg0);

	public:
		void _ctor_1(const CActionMan::NPCACTIONENTRY &arg0);

	public:
		NPCACTIONENTRY();

	public:
		void _ctor_0();

	public:
		CActionMan::NPCACTIONENTRY &operator=(const CActionMan::NPCACTIONENTRY &arg0);

	public:
		static CActionMan::NPCACTIONENTRY &_op_assign_3(CActionMan::NPCACTIONENTRY *pThis, const CActionMan::NPCACTIONENTRY &arg0);
	};

public:
	struct PETIMGENTRY : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		_x_com_ptr<IWzProperty> pImg;

	public:
		long tLastAccessed{};

	public:
		__POSITION *posMap{};
		// Methods
	public:
		virtual ~PETIMGENTRY();

	public:
		void _dtor_0();

	public:
		PETIMGENTRY(const CActionMan::PETIMGENTRY &arg0);

	public:
		void _ctor_1(const CActionMan::PETIMGENTRY &arg0);

	public:
		PETIMGENTRY();

	public:
		void _ctor_0();

	public:
		CActionMan::PETIMGENTRY &operator=(const CActionMan::PETIMGENTRY &arg0);

	public:
		static CActionMan::PETIMGENTRY &_op_assign_3(CActionMan::PETIMGENTRY *pThis, const CActionMan::PETIMGENTRY &arg0);
	};

public:
	struct PETACTIONFRAMEENTRY : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		_x_com_ptr<IWzCanvas> pCanvas;

	public:
		SECRECT rcBody;

	public:
		long nDelay{};
		// Methods
	public:
		virtual ~PETACTIONFRAMEENTRY();

	public:
		void _dtor_0();

	public:
		PETACTIONFRAMEENTRY(const CActionMan::PETACTIONFRAMEENTRY &arg0);

	public:
		void _ctor_1(const CActionMan::PETACTIONFRAMEENTRY &arg0);

	public:
		PETACTIONFRAMEENTRY();

	public:
		void _ctor_0();

	public:
		CActionMan::PETACTIONFRAMEENTRY &operator=(const CActionMan::PETACTIONFRAMEENTRY &arg0);

	public:
		static CActionMan::PETACTIONFRAMEENTRY &_op_assign_3(CActionMan::PETACTIONFRAMEENTRY *pThis, const CActionMan::PETACTIONFRAMEENTRY &arg0);
	};

public:
	struct PETACTIONENTRY : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		unsigned long dwTemplateID{};

	public:
		long nAction{};

	public:
		int32_t bZigZag{};

	public:
		ZList<ZRef<CActionMan::PETACTIONFRAMEENTRY>> lpFrame;

	public:
		long tLastAccessed{};

	public:
		__POSITION *posMap{};

	public:
		__POSITION *posList{};
		// Methods
	public:
		virtual ~PETACTIONENTRY();

	public:
		void _dtor_0();

	public:
		PETACTIONENTRY(const CActionMan::PETACTIONENTRY &arg0);

	public:
		void _ctor_1(const CActionMan::PETACTIONENTRY &arg0);

	public:
		PETACTIONENTRY();

	public:
		void _ctor_0();

	public:
		CActionMan::PETACTIONENTRY &operator=(const CActionMan::PETACTIONENTRY &arg0);

	public:
		static CActionMan::PETACTIONENTRY &_op_assign_3(CActionMan::PETACTIONENTRY *pThis, const CActionMan::PETACTIONENTRY &arg0);
	};

public:
	struct EMPLOYEEIMGENTRY : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		_x_com_ptr<IWzProperty> pImg;

	public:
		long tLastAccessed{};

	public:
		__POSITION *posMap{};
		// Methods
	public:
		virtual ~EMPLOYEEIMGENTRY();

	public:
		void _dtor_0();

	public:
		EMPLOYEEIMGENTRY(const CActionMan::EMPLOYEEIMGENTRY &arg0);

	public:
		void _ctor_1(const CActionMan::EMPLOYEEIMGENTRY &arg0);

	public:
		EMPLOYEEIMGENTRY();

	public:
		void _ctor_0();

	public:
		CActionMan::EMPLOYEEIMGENTRY &operator=(const CActionMan::EMPLOYEEIMGENTRY &arg0);

	public:
		static CActionMan::EMPLOYEEIMGENTRY &_op_assign_3(CActionMan::EMPLOYEEIMGENTRY *pThis, const CActionMan::EMPLOYEEIMGENTRY &arg0);
	};

public:
	struct EMPLOYEEACTIONFRAMEENTRY : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		_x_com_ptr<IWzCanvas> pCanvas;

	public:
		SECRECT rcBody;

	public:
		long nDelay{};
		// Methods
	public:
		virtual ~EMPLOYEEACTIONFRAMEENTRY();

	public:
		void _dtor_0();

	public:
		EMPLOYEEACTIONFRAMEENTRY(const CActionMan::EMPLOYEEACTIONFRAMEENTRY &arg0);

	public:
		void _ctor_1(const CActionMan::EMPLOYEEACTIONFRAMEENTRY &arg0);

	public:
		EMPLOYEEACTIONFRAMEENTRY();

	public:
		void _ctor_0();

	public:
		CActionMan::EMPLOYEEACTIONFRAMEENTRY &operator=(const CActionMan::EMPLOYEEACTIONFRAMEENTRY &arg0);

	public:
		static CActionMan::EMPLOYEEACTIONFRAMEENTRY &_op_assign_3(CActionMan::EMPLOYEEACTIONFRAMEENTRY *pThis, const CActionMan::EMPLOYEEACTIONFRAMEENTRY &arg0);
	};

public:
	struct EMPLOYEEACTIONENTRY : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		unsigned long dwTemplateID{};

	public:
		long nAction{};

	public:
		int32_t bZigZag{};

	public:
		ZList<ZRef<CActionMan::EMPLOYEEACTIONFRAMEENTRY>> lpFrame;

	public:
		long tLastAccessed{};

	public:
		__POSITION *posMap{};

	public:
		__POSITION *posList{};
		// Methods
	public:
		virtual ~EMPLOYEEACTIONENTRY();

	public:
		void _dtor_0();

	public:
		EMPLOYEEACTIONENTRY(const CActionMan::EMPLOYEEACTIONENTRY &arg0);

	public:
		void _ctor_1(const CActionMan::EMPLOYEEACTIONENTRY &arg0);

	public:
		EMPLOYEEACTIONENTRY();

	public:
		void _ctor_0();

	public:
		CActionMan::EMPLOYEEACTIONENTRY &operator=(const CActionMan::EMPLOYEEACTIONENTRY &arg0);

	public:
		static CActionMan::EMPLOYEEACTIONENTRY &_op_assign_3(CActionMan::EMPLOYEEACTIONENTRY *pThis, const CActionMan::EMPLOYEEACTIONENTRY &arg0);
	};

public:
	struct SUMMONEDACTIONFRAMEENTRY : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		_x_com_ptr<IWzCanvas> pCanvas;

	public:
		SECRECT rcBody;

	public:
		long tDelay{};

	public:
		long a0{};

	public:
		long a1{};
		// Methods
	public:
		virtual ~SUMMONEDACTIONFRAMEENTRY();

	public:
		void _dtor_0();

	public:
		SUMMONEDACTIONFRAMEENTRY(const CActionMan::SUMMONEDACTIONFRAMEENTRY &arg0);

	public:
		void _ctor_1(const CActionMan::SUMMONEDACTIONFRAMEENTRY &arg0);

	public:
		SUMMONEDACTIONFRAMEENTRY();

	public:
		void _ctor_0();

	public:
		CActionMan::SUMMONEDACTIONFRAMEENTRY &operator=(const CActionMan::SUMMONEDACTIONFRAMEENTRY &arg0);

	public:
		static CActionMan::SUMMONEDACTIONFRAMEENTRY &_op_assign_3(CActionMan::SUMMONEDACTIONFRAMEENTRY *pThis, const CActionMan::SUMMONEDACTIONFRAMEENTRY &arg0);
	};

public:
	struct SUMMONEDACTIONENTRY : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		long nSkillID{};

	public:
		long nSLV{};

	public:
		long nAction{};

	public:
		int32_t bZigZag{};

	public:
		ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>> lpFrame;

	public:
		long tLastAccessed{};

	public:
		__POSITION *posMap{};

	public:
		__POSITION *posList{};
		// Methods
	public:
		virtual ~SUMMONEDACTIONENTRY();

	public:
		void _dtor_0();

	public:
		SUMMONEDACTIONENTRY(const CActionMan::SUMMONEDACTIONENTRY &arg0);

	public:
		void _ctor_1(const CActionMan::SUMMONEDACTIONENTRY &arg0);

	public:
		SUMMONEDACTIONENTRY();

	public:
		void _ctor_0();

	public:
		CActionMan::SUMMONEDACTIONENTRY &operator=(const CActionMan::SUMMONEDACTIONENTRY &arg0);

	public:
		static CActionMan::SUMMONEDACTIONENTRY &_op_assign_3(CActionMan::SUMMONEDACTIONENTRY *pThis, const CActionMan::SUMMONEDACTIONENTRY &arg0);
	};

public:
	struct SHADOWPARTNERACTIONFRAMEENTRY : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		_x_com_ptr<IWzCanvas> pCanvas;

	public:
		long a0{};

	public:
		long a1{};
		// Methods
	public:
		virtual ~SHADOWPARTNERACTIONFRAMEENTRY();

	public:
		void _dtor_0();

	public:
		SHADOWPARTNERACTIONFRAMEENTRY(const CActionMan::SHADOWPARTNERACTIONFRAMEENTRY &arg0);

	public:
		void _ctor_1(const CActionMan::SHADOWPARTNERACTIONFRAMEENTRY &arg0);

	public:
		SHADOWPARTNERACTIONFRAMEENTRY();

	public:
		void _ctor_0();

	public:
		CActionMan::SHADOWPARTNERACTIONFRAMEENTRY &operator=(const CActionMan::SHADOWPARTNERACTIONFRAMEENTRY &arg0);

	public:
		static CActionMan::SHADOWPARTNERACTIONFRAMEENTRY &_op_assign_3(CActionMan::SHADOWPARTNERACTIONFRAMEENTRY *pThis, const CActionMan::SHADOWPARTNERACTIONFRAMEENTRY &arg0);
	};

public:
	struct SHADOWPARTNERACTIONENTRY : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		long nSkillID{};

	public:
		long nAction{};

	public:
		int32_t bZigZag{};

	public:
		ZList<ZRef<CActionMan::SHADOWPARTNERACTIONFRAMEENTRY>> lpFrame;

	public:
		long tLastAccessed{};

	public:
		__POSITION *posMap{};

	public:
		__POSITION *posList{};
		// Methods
	public:
		virtual ~SHADOWPARTNERACTIONENTRY();

	public:
		void _dtor_0();

	public:
		SHADOWPARTNERACTIONENTRY(const CActionMan::SHADOWPARTNERACTIONENTRY &arg0);

	public:
		void _ctor_1(const CActionMan::SHADOWPARTNERACTIONENTRY &arg0);

	public:
		SHADOWPARTNERACTIONENTRY();

	public:
		void _ctor_0();

	public:
		CActionMan::SHADOWPARTNERACTIONENTRY &operator=(const CActionMan::SHADOWPARTNERACTIONENTRY &arg0);

	public:
		static CActionMan::SHADOWPARTNERACTIONENTRY &_op_assign_3(CActionMan::SHADOWPARTNERACTIONENTRY *pThis, const CActionMan::SHADOWPARTNERACTIONENTRY &arg0);
	};

public:
	struct DRAGONACTIONENTRY : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		long nAction{};

	public:
		int32_t bZigZag{};

	public:
		ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>> lpFrame;

	public:
		long tLastAccessed{};
		// Methods
	public:
		virtual ~DRAGONACTIONENTRY();

	public:
		void _dtor_0();

	public:
		DRAGONACTIONENTRY(const CActionMan::DRAGONACTIONENTRY &arg0);

	public:
		void _ctor_1(const CActionMan::DRAGONACTIONENTRY &arg0);

	public:
		DRAGONACTIONENTRY();

	public:
		void _ctor_0();

	public:
		CActionMan::DRAGONACTIONENTRY &operator=(const CActionMan::DRAGONACTIONENTRY &arg0);

	public:
		static CActionMan::DRAGONACTIONENTRY &_op_assign_3(CActionMan::DRAGONACTIONENTRY *pThis, const CActionMan::DRAGONACTIONENTRY &arg0);
	};

public:
	enum CACHE_EXPIRE
	{
		CACHE_EXPIRE = 300000
	};
	// Fields
protected:
	ZList<ZRef<CActionMan::CHARACTERIMGENTRY>> m_lCharacterImgEntry;

protected:
	ZMap<long, ZRef<CActionMan::CHARACTERIMGENTRY>, long> m_mCharacterImgEntry;

protected:
	ZList<ZRef<CActionMan::FACELOOKENTRY>> m_lFaceLook;

protected:
	ZMap<FACELOOKCODES, ZRef<CActionMan::FACELOOKENTRY>, FACELOOKCODES> m_mFaceLook;

protected:
	ZMap<long, ZXString<char>, long> m_msCharacterUOL;

protected:
	ZList<ZRef<CActionMan::MORPHIMGENTRY>> m_lMorphImgEntry;

protected:
	ZMap<long, ZRef<CActionMan::MORPHIMGENTRY>, long> m_mMorphImgEntry;

protected:
	ZList<ZRef<CActionMan::MORPHACTIONENTRY>> m_lMorphAction;

protected:
	ZMap<unsigned long, ZRef<CActionMan::MORPHACTIONENTRY>, unsigned long> m_mMorphAction;

protected:
	ZList<ZRef<CActionMan::MOBIMGENTRY>> m_lMobImgEntry;

protected:
	ZMap<long, ZRef<CActionMan::MOBIMGENTRY>, long> m_mMobImgEntry;

protected:
	ZList<ZRef<CActionMan::MOBACTIONENTRY>> m_lMobAction;

protected:
	ZMap<unsigned long, ZRef<CActionMan::MOBACTIONENTRY>, unsigned long> m_mMobAction;

protected:
	ZMap<wchar_t const *, ZRef<CActionMan::MELEEATTACKAFTERIMAGE>, ZXString16> m_mAfterimage;

protected:
	ZList<ZRef<CActionMan::NPCIMGENTRY>> m_lNpcImgEntry;

protected:
	ZMap<long, ZRef<CActionMan::NPCIMGENTRY>, long> m_mNpcImgEntry;

protected:
	ZList<ZRef<CActionMan::NPCACTIONENTRY>> m_lNpcAction;

protected:
	ZMap<int64_t, ZRef<CActionMan::NPCACTIONENTRY>, int64_t> m_mNpcAction;

protected:
	ZList<ZRef<CActionMan::PETIMGENTRY>> m_lPetImgEntry;

protected:
	ZMap<long, ZRef<CActionMan::PETIMGENTRY>, long> m_mPetImgEntry;

protected:
	ZList<ZRef<CActionMan::PETACTIONENTRY>> m_lPetAction;

protected:
	ZMap<unsigned long, ZRef<CActionMan::PETACTIONENTRY>, unsigned long> m_mPetAction;

protected:
	ZList<ZRef<CActionMan::EMPLOYEEIMGENTRY>> m_lEmployeeImgEntry;

protected:
	ZMap<long, ZRef<CActionMan::EMPLOYEEIMGENTRY>, long> m_mEmployeeImgEntry;

protected:
	ZList<ZRef<CActionMan::EMPLOYEEACTIONENTRY>> m_lEmployeeAction;

protected:
	ZMap<unsigned long, ZRef<CActionMan::EMPLOYEEACTIONENTRY>, unsigned long> m_mEmployeeAction;

protected:
	ZList<ZRef<CActionMan::SUMMONEDACTIONENTRY>> m_lSummonedAction;

protected:
	ZMap<ActionKey, ZRef<CActionMan::SUMMONEDACTIONENTRY>, ActionKey> m_mSummonedAction;

protected:
	ZList<ZRef<CActionMan::SHADOWPARTNERACTIONENTRY>> m_lShadowPartnerAction;

protected:
	ZMap<unsigned long, ZRef<CActionMan::SHADOWPARTNERACTIONENTRY>, unsigned long> m_mShadowPartnerAction;

protected:
	ZMap<long, ZMap<long, ZRef<CActionMan::DRAGONACTIONENTRY>, long>, long> m_mDragonAction;

protected:
	long m_tLastSweepCache{};
	// Methods
public:
	virtual ~CActionMan();

public:
	void _dtor_0();

public:
	CActionMan(const CActionMan &arg0);

public:
	void _ctor_1(const CActionMan &arg0);

public:
	CActionMan();

public:
	void _ctor_0();

public:
	void Init();

public:
	void LoadCharacterAction(long b, long aCharacterFrame, long arg2, long *arg3, ZArray<ZRef<CActionMan::CHARACTERACTIONFRAMEENTRY>> &arg4, long arg5, long arg6, int32_t arg7, long arg8);

public:
	int32_t load_character_action(long nAction, long nSkin, const long *aAvatarHairEquip, ZArray<CActionFrame> &aFrame, long nWeaponStickerID, long nGhostIndex) const;

public:
	void LoadTamingMobAction(long b, long aFrame, long *arg2, int32_t arg3, ZArray<ZRef<CActionMan::TAMINGMOBACTIONFRAMEENTRY>> &arg4);

public:
	long LoadFaceLook(long arg0, long arg1, long arg2, long arg3, ZList<_x_com_ptr<IWzCanvas>> &arg4);

public:
	ZRef<CActionMan::CHARACTERIMGENTRY> GetInfoImgEntry(long nUOLKey);

public:
	ZRef<CActionMan::CHARACTERIMGENTRY> GetCharacterImgEntry(long nUOLKey);

public:
	void LoadMorphAction(unsigned long dwTemplateID, long nAction, ZArray<ZRef<CActionMan::MORPHACTIONFRAMEENTRY>> &apFE);

public:
	ZRef<CActionMan::MORPHIMGENTRY> GetMorphImgEntry(unsigned long dwTemplateID);

public:
	void LoadMobAction(unsigned long dwTemplateID, long nAction, ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>> &lpFrame);

public:
	ZRef<CActionMan::MOBIMGENTRY> GetMobImgEntry(unsigned long dwTemplateID);

public:
	void LoadNpcAction(CNpcTemplate *pTemplate, long nAction, ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>> &lpFrame, long nClientActionIdx);

public:
	ZRef<CActionMan::NPCIMGENTRY> GetNpcImgEntry(unsigned long dwTemplateID);

public:
	void LoadPetAction(CPetTemplate *arg0, long arg1, long arg2, ZList<ZRef<CActionMan::PETACTIONFRAMEENTRY>> &arg3);

public:
	ZRef<CActionMan::PETIMGENTRY> GetPetImgEntry(unsigned long dwTemplateID);

public:
	void LoadEmployeeAction(CEmployeeTemplate *pTemplate, long nAction, ZList<ZRef<CActionMan::EMPLOYEEACTIONFRAMEENTRY>> &lpFrame);

public:
	ZRef<CActionMan::EMPLOYEEIMGENTRY> GetEmployeeImgEntry(unsigned long dwTemplateID);

public:
	void LoadSummonedAction(long nSkillID, long nSLV, long nAction, ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>> &lpFrame);

public:
	_x_com_ptr<IWzProperty> GetSummonedProp(long nSkillID, long nSLV);

public:
	void LoadShadowPartnerAction(long arg0, long arg1, ZList<ZRef<CActionMan::SHADOWPARTNERACTIONFRAMEENTRY>> &arg2);

public:
	_x_com_ptr<IWzProperty> GetShadowPartnerProp(long nSkillID);

public:
	void LoadDragonAction(long nJob, long nAction, ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>> &lpFrame);

public:
	void CreateAfterimageLayer(Ztl_bstr_t sAfterimageUOL, long nAction, _x_com_ptr<IWzGr2DLayer> pLayer);

public:
	void GetMeleeAttackRange(Ztl_bstr_t sAfterimageUOL, long nAction, tagRECT &rc);

public:
	void SweepCache();

protected:
	void MergeCharacterSprite(const AHECODES &b, ZArray<CActionFrame> &aFrame, ZArray<ZRef<CActionMan::CHARACTERACTIONFRAMEENTRY>> &apFE);

protected:
	void MergeTamingMobSprite(ZArray<CActionFrame> &aFrame, ZArray<ZRef<CActionMan::TAMINGMOBACTIONFRAMEENTRY>> &apFE);

protected:
	CActionMan::MELEEATTACKAFTERIMAGE *GetWeaponAfterImage(Ztl_bstr_t arg0);

public:
	CActionMan &operator=(const CActionMan &arg0);

public:
	static CActionMan &_op_assign_31(CActionMan *pThis, const CActionMan &arg0);
};
STATIC_ASSERT_SIZE(CActionMan, 696);

template <>
struct ZHash<FACELOOKCODES>
{
	size_t operator()(const FACELOOKCODES &value)
	{
		return zhash_class_fields(value.nFace,
								  value.nEmotion,
								  value.nAcc);
	}
};

template <>
struct ZHash<ActionKey>
{
	size_t operator()(const ActionKey &value)
	{
		return zhash_class_fields(value.nSkillID,
								  value.nSLV,
								  value.nAction);
	}
};

//_x_com_ptr<IUnknown> __cdecl get_unknown(Ztl_variant_t &v);
//long __cdecl get_int32(Ztl_variant_t &v, long nDefault);
tagRECT &__cdecl operator___146404(tagRECT &rcDst, const SECRECT &rcSrc);
char *__cdecl ZStrUtil___Conv(const wchar_t *w, char *m, int32_t nChars);
int32_t __cdecl operator___146393(const none &b1, const none &b2);
uint32_t __fastcall _ZtlSecureTear_long_(long arg0, long *arg1);
void __cdecl load_tamingmob_action(long arg0, long arg1, long arg2, ZArray<CActionFrame> &arg3);
void __cdecl PcCreateObject__com_ptr_t__com_IIID_IWzProperty___GUID_986515d9_0a0b_4929_8b4f_718682177b92___(const wchar_t *sUOL, _x_com_ptr<IWzProperty> &pObj, IUnknown *pUnkOuter);
void __cdecl operatordelete_146388(void *__formal, void *___formal);
void __cdecl load_item_action(long arg0, long arg1, long arg2, ZArray<CActionFrame> &arg3, long arg4, long arg5, int32_t arg6);
// int32_t __cdecl SetRectEmpty(SECRECT *p);
int32_t __cdecl ZStrUtil___ConvReqSize(const wchar_t *w, char *__formal, int32_t nChars);
long __cdecl _ZtlSecureFuse_long_(const long *at, uint32_t uCS);
void __cdecl action_mapping_for_ghost(long &nAction);

struct ActionData {
	static ACTIONDATA m_saCharacterActions[273];
	static Ztl_bstr_t m_saMorphActions[49];
	static Ztl_bstr_t m_saEmotionName[24];
	static Ztl_bstr_t m_sNpcAction[2];
	static Ztl_bstr_t m_sPetAction[34];
	static Ztl_bstr_t m_saEmployeeAction[1];
	static Ztl_bstr_t m_saMobAction[43];
	static Ztl_bstr_t m_saSummonedAction[19];
};

extern Ztl_bstr_t _D_S_SZMAPIMG;
extern Ztl_bstr_t _D_S_SSMAPIMG;
