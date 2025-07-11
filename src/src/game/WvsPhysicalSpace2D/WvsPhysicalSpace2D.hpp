// WvsPhysicalSpace2D.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "extra.h"
#include "geometry.hpp"

#include "trs_tree.hpp"

// Level: 0 0x4376
class CAttrField;
// Level: 1 0x42f7
class CAttrFoothold;
// Level: 1 0x440b
class CWvsPhysicalSpace2D;
// Level: 1 0x4392
class CStaticFoothold;

class CAttrField
{
	// Nested
public:
	enum UnnamedEnum16431
	{
		FLY = 0,
		SWIM = 1,
		USERFLY = 2
	};
	// Fields
public:
	TSecType<double> walk;

public:
	TSecType<double> drag;

public:
	TSecType<double> fly;

public:
	TSecType<double> g;

public:
	TSecType<long> nMapType;

public:
	int32_t bNeedSkillForFlying{};

public:
	Geometry::InclusionChecker icSwimArea;
	// Methods
public:
	~CAttrField();

public:
	void _dtor_0();

public:
	CAttrField(const CAttrField &arg0);

public:
	void _ctor_1(const CAttrField &arg0);

	CTOR_DEFAULT(CAttrField)
public:
	CAttrField();

public:
	void _ctor_0();

public:
	bool IsSwimMap() const;

public:
	bool IsUserFlyMap() const;

public:
	void SetSwimMap();

public:
	void SetUserFlyMap();

public:
	CAttrField &operator=(CAttrField &arg0);

public:
	static CAttrField &_op_assign_7(CAttrField *pThis, CAttrField &arg0);
};
STATIC_ASSERT_SIZE(CAttrField, 88);
class CAttrFoothold : public ZRefCounted
{
	// Nested
	// Fields
public:
	TSecType<double> walk;

public:
	TSecType<double> drag;

public:
	TSecType<double> force;

public:
	TSecType<int> forbidfalldown;

public:
	TSecType<int> cantThrough;
	// Methods
public:
	virtual ~CAttrFoothold();

public:
	void _dtor_0();

public:
	CAttrFoothold(const CAttrFoothold &arg0);

public:
	void _ctor_1(const CAttrFoothold &arg0);

	CTOR_DEFAULT(CAttrFoothold)
public:
	CAttrFoothold();

public:
	void _ctor_0();

public:
	CAttrFoothold &operator=(CAttrFoothold &arg0);

public:
	static CAttrFoothold &_op_assign_3(CAttrFoothold *pThis, CAttrFoothold &arg0);
};
STATIC_ASSERT_SIZE(CAttrFoothold, 72);
class CWvsPhysicalSpace2D : public TSingleton<CWvsPhysicalSpace2D>
{
	// Nested
	// Fields
public:
	ZRef<CONSTANTS> m_constants;

public:
	Geometry::InclusionChecker m_icSwimArea;

protected:
	tagRECT m_rcMBR{};

protected:
	ZArray<RANGE> m_aMassRange;

protected:
	ZArray<long> m_aIndexZMass;

protected:
	ZArray<ZArray<unsigned long>> m_aaMassFootholdList;

protected:
	long m_nBaseZMass{};

protected:
	TFHTree<ZRef<CStaticFoothold>> m_rtFoothold;

protected:
	ZList<ZRef<CStaticFoothold>> m_lFoothold;

protected:
	ZMap<unsigned long, ZRef<CStaticFoothold>, unsigned long> m_mFoothold;

protected:
	ZList<ZRef<__POSITION *>> m_lDynamicObjPos;

protected:
	ZArray<CLadderOrRope> m_aLadderOrRope;

protected:
	CAttrField *m_pAttrField{};

private:
	unsigned long m_dwCRC{};
	// Methods
public:
	virtual ~CWvsPhysicalSpace2D();

public:
	void _dtor_0();

public:
	CWvsPhysicalSpace2D(const CWvsPhysicalSpace2D &arg0);

public:
	void _ctor_1(const CWvsPhysicalSpace2D &arg0);

public:
	CWvsPhysicalSpace2D();

public:
	void _ctor_0();

public:
	const tagRECT &GetMBR() const;

public:
	long GetBaseZMass();

public:
	long GetMassCount();

public:
	long GetZMassByIndex(long arg0);

public:
	const RANGE &GetMassRange(long arg0);

public:
	const ZArray<unsigned long> &GetMassFootholdList(long arg0);

public:
	void Load(_x_com_ptr<IWzProperty> pPropFoothold, _x_com_ptr<IWzProperty> pLadderRope, _x_com_ptr<IWzProperty> pInfo);

private:
	void LoadFoothold(_com_ptr_t<_com_IIID<IWzProperty, &__uuidof(IWzProperty)>>& prop, long page, long zMass, long dwSn);



public:
	void GetCrossCandidate(long x1, long y1, long x2, long y2, ZList<ZRef<CStaticFoothold>> &lCrossCandidate);

public:
	CStaticFoothold *GetFoothold(unsigned long dwSN);

public:
	CStaticFoothold *GetFootholdAbove(long x, long y, long *pcy, long yMax);

public:
	CStaticFoothold *GetFootholdAboveForRocketBooster(long x, long y, long yRangeMin, long yRangeMax, long &cyReturn);

public:
	CStaticFoothold *GetFootholdUnderneath(long x, long y, long *pcy, long yMin, long nRangeX);

public:
	CStaticFoothold *GetFootholdClosest(long x, long y);

public:
	void GetFootholdRange(long x, long y1, long y2, ZList<long> &lPosition);

public:
	int32_t CanGoThrough(long xm1, long ym1, long &xm2, long &ym2, long nZMass);

public:
	int32_t CanWalkThrough(ZRef<CStaticFoothold> pfhFrom, ZRef<CStaticFoothold> pfhTo);

public:
	long FindRightEndX_CanWalkThrough(ZRef<CStaticFoothold> arg0);

public:
	long FindLeftEndX_CanWalkThrough(ZRef<CStaticFoothold> arg0);

public:
	CLadderOrRope *GetLadderOrRope(long x1, long y1, long x2, long y2);

public:
	CLadderOrRope *GetLadderOrRopeBySN(unsigned long arg0);

public:
	CAttrField *GetFieldAttr();

public:
	void SetFieldAttr();

public:
	void FootHoldMove(unsigned long dwSN, long x, long y);

public:
	void FootHoldStateChange(unsigned long dwSN, long nState);

public:
	unsigned long GetCRC();

private:
	unsigned long GetConstantCRC();

public:
	CWvsPhysicalSpace2D &operator=(const CWvsPhysicalSpace2D &arg0);

public:
	static CWvsPhysicalSpace2D &_op_assign_29(CWvsPhysicalSpace2D *pThis, const CWvsPhysicalSpace2D &arg0);
};
STATIC_ASSERT_SIZE(CWvsPhysicalSpace2D, 200);

class CStaticFoothold : public ZRefCounted
{
	// Nested
	// Fields
protected:
	long m_x1{};

protected:
	long m_y1{};

protected:
	long m_x2{};

protected:
	long m_y2{};

protected:
	long m_xReal1{};

protected:
	long m_yReal1{};

protected:
	long m_xReal2{};

protected:
	long m_yReal2{};

protected:
	long m_lPage{};

protected:
	long m_lZMass{};

protected:
	ZRef<CAttrFoothold> m_pAttrFoothold;

protected:
	double m_uvx{};

protected:
	double m_uvy{};

protected:
	double m_len{};

protected:
	unsigned long m_dwSN{};

protected:
	long m_nState{};

protected:
	__POSITION *m_posDel{};

protected:
	union
	{
		unsigned long m_dwSNPrev{};
		CStaticFoothold *m_pfhPrev;
	};

protected:
	union
	{
		unsigned long m_dwSNNext{};
		CStaticFoothold *m_pfhNext;
	};
	// Methods
public:
	virtual ~CStaticFoothold();

public:
	void _dtor_0();

public:
	CStaticFoothold(const CStaticFoothold &arg0);

public:
	void _ctor_1(const CStaticFoothold &arg0);

public:
	CStaticFoothold(unsigned long dwSN, long x1, long y1, long x2, long y2, long page, long ZMass, unsigned long dwSNPrev, unsigned long dwSNNext, CAttrFoothold *pAttrFoothold);

public:
	void _ctor_0(unsigned long dwSN, long x1, long y1, long x2, long y2, long page, long ZMass, unsigned long dwSNPrev, unsigned long dwSNNext, CAttrFoothold *pAttrFoothold);

public:
	unsigned long GetSN() const;

public:
	long GetXReal1() const;

public:
	long GetYReal1() const;

public:
	long GetXReal2() const;

public:
	long GetYReal2() const;

public:
	long GetX1() const;

public:
	long GetY1() const;

public:
	long GetX2() const;

public:
	long GetY2() const;

public:
	long GetPage() const;

public:
	long GetZMass() const;

public:
	double GetUVX() const;

public:
	double GetUVY() const;

public:
	double GetLen() const;

public:
	CStaticFoothold *GetNextLink() const;

public:
	CStaticFoothold *GetPrevLink() const;

public:
	const CStaticFoothold *GetForwardLink(double d, double posCur, double len);

public:
	long GetFootHoldState() const;

public:
	int32_t IsVertical() const;

public:
	CAttrFoothold *GetAttribute() const;

public:
	void SetPosition(long x1, long x2, long y1, long y2);

public:
	void SetFootHoldState(long arg0);

	bool CheckCollisionLeft(const CStaticFoothold& other) const;
	bool CheckCollisionRight(const CStaticFoothold& other) const;

	double CalcSlopeScale(double dx, double dy) const;


	long Det(long x1, long x2) const;

protected:
	void ValidateVectorInfo();

public:
	CStaticFoothold &operator=(const CStaticFoothold &arg0);

public:
	static CStaticFoothold &_op_assign_26(CStaticFoothold *pThis, const CStaticFoothold &arg0);
};
STATIC_ASSERT_SIZE(CStaticFoothold, 112);
