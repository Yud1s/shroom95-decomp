// MovePath.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "WvsPhysicalSpace2D/WvsPhysicalSpace2D.hpp"
#include "Packet/Packet.hpp"

class CVecCtrl;

// Level: 0 0x5a90
class CMovePath;

class CMovePath
{
	// Nested
public:
	struct ELEM
	{
		// Nested
		// Fields
	public:
		unsigned char nAttr{};

	public:
		short x{};

	public:
		short y{};

	public:
		short vx{};

	public:
		short vy{};

	public:
		unsigned char bMoveAction{};

	public:
		short fh{};

	public:
		short fhFallStart{};

	public:
		short tElapse{};

	public:
		unsigned char bStat{};

	public:
		short xOffset{};

	public:
		short yOffset{};

	public:
		uint16_t usRandCnt{};

	public:
		uint16_t usActualRandCnt{};
		// Methods
	public:
		ELEM();

	public:
		void _ctor_0();

	public:
		ZXString<char> ToString();
	};
	// Fields
protected:
	std::array<short, 2> _ZtlSecureTear_m_x{};

protected:
	uint32_t _ZtlSecureTear_m_x_CS{};

protected:
	std::array<short, 2> _ZtlSecureTear_m_y{};

protected:
	uint32_t _ZtlSecureTear_m_y_CS{};

protected:
	std::array<short, 2> _ZtlSecureTear_m_vx{};

protected:
	uint32_t _ZtlSecureTear_m_vx_CS{};

protected:
	std::array<short, 2> _ZtlSecureTear_m_vy{};

protected:
	uint32_t _ZtlSecureTear_m_vy_CS{};

protected:
	ZList<CMovePath::ELEM> m_lElem;

protected:
	ZArray<unsigned char> m_aKeyPadState;

protected:
	ZArray<unsigned char> m_aKeyPadStateByFoothold;

protected:
	int32_t m_bForcedFlush{};

protected:
	short m_fhLast{};

protected:
	tagRECT m_rcMove{};

public:
	uint16_t m_usRandCnt{};

public:
	uint16_t m_usActualRandCnt{};

protected:
	int32_t m_bShortUpdate{};

protected:
	CMovePath::ELEM m_elemLast;

protected:
	long m_tGatherDuration{};

protected:
	std::array<long, 2> _ZtlSecureTear_m_tInterval{};

protected:
	uint32_t _ZtlSecureTear_m_tInterval_CS{};

protected:
	std::array<long, 2> _ZtlSecureTear_m_tOffset{};

protected:
	uint32_t _ZtlSecureTear_m_tOffset_CS{};

protected:
	std::array<long, 2> _ZtlSecureTear_m_tReceived{};

protected:
	uint32_t _ZtlSecureTear_m_tReceived_CS{};
	// Methods
public:
	~CMovePath();

public:
	void _dtor_0();

	CTOR_DEFAULT(CMovePath)
public:
	CMovePath(const CMovePath &arg0);

public:
	void _ctor_1( const CMovePath &arg0);

public:
	CMovePath();

public:
	void _ctor_0();

public:
	void Decode(CInPacket &iPacket, int32_t bPassive);

public:
	void Encode(COutPacket &oPacket, int32_t *pbPassive);

public:
	long GetStartPositionX();

public:
	long GetStartPositionY();

public:
	long GetEndPositionX();

public:
	long GetEndPositionY();

public:
	long GetHeadPositionX();

public:
	long GetHeadPositionY();

public:
	unsigned char GetLastMoveAction();

public:
	short GetLastFoothold();

public:
	short GetLastFootholdStepOn();

public:
	int32_t IsEmpty();

public:
	CMovePath::ELEM &GetLastElement();

public:
	tagRECT GetMoveRect();

public:
	ZXString<char> DumpPosition();

public:
	void DumpMovePath();

public:
	void SetForcedFlush();

protected:
	short __fastcall _ZtlSecureGet_m_x() const;

protected:
	short __fastcall _ZtlSecurePut_m_x(short arg0);

protected:
	short __fastcall _ZtlSecureGet_m_y() const;

protected:
	short __fastcall _ZtlSecurePut_m_y(short arg0);

protected:
	short __fastcall _ZtlSecureGet_m_vx() const;

protected:
	short __fastcall _ZtlSecurePut_m_vx(short arg0);

protected:
	short __fastcall _ZtlSecureGet_m_vy() const;

protected:
	short __fastcall _ZtlSecurePut_m_vy(short arg0);

public:
	void Init(int32_t bSend, int32_t bShortUpdate, long x, long y, long vx, long vy, long nMoveAction, CStaticFoothold *pfh, CLadderOrRope *pLR);

public:
	void MakeMovePath(long nAttr, const CStaticFoothold *pfh, const CStaticFoothold *pfhStart, const CLadderOrRope *pLR, long x, long y, long vx, long vy, long nMoveAction, long tElapse, long xOffset, long yOffset);

public:
	void AddNewElem(long nAttr, const CStaticFoothold *pfh, const CStaticFoothold *pfhFallStart, const CLadderOrRope *pLR, long x, long y, long vx, long vy, long nMoveAction, long xOffset, long yOffset);

public:
	void SetStatChangedPoint(unsigned char bStat);

public:
	int32_t IsTimeForFlush(int32_t bFly, int32_t bDynamicFoothold);

public:
	int32_t Flush(COutPacket &oPacket, int32_t bFly, CMovePath *oPath);

public:
	void SetKeyPadState(int32_t bLeftKeyPressed, int32_t bRightKeyPressed, int32_t bUpKeyPressed, int32_t bDownKeyPressed);

public:
	void SetKeyPadStateByFoothold(int32_t bLeftKeyPressed, int32_t bRightKeyPressed, int32_t bUpKeyPressed, int32_t bDownKeyPressed);

public:
	long GetGatherDuration() const;

public:
	int32_t CalcPassivePos(double &h3, double &h4, double &h1, double &xn, short &h2, long &arg5, int64_t &arg6, double &arg7, double &arg8);

public:
	void OnMovePacket(CInPacket &iPacket, int32_t bPassive);

public:
	void DiscardByInterrupt(long nMoveType, CVecCtrl *pvc, int32_t bNotForceLanding);

public:
	long GetPassiveRemain();

public:
	const CMovePath::ELEM &GetElemLast() const;

public:
	uint16_t GetRandCnt() const;

public:
	uint16_t GetActualRandCnt() const;

public:
	void SetRandCnt(uint16_t arg0);

public:
	void SetActualRandCnt(uint16_t arg0);

protected:
	long __fastcall _ZtlSecureGet_m_tInterval() const;

protected:
	long __fastcall _ZtlSecurePut_m_tInterval(long arg0);

protected:
	long __fastcall _ZtlSecureGet_m_tOffset() const;

protected:
	long __fastcall _ZtlSecurePut_m_tOffset(long arg0);

protected:
	long __fastcall _ZtlSecureGet_m_tReceived() const;

protected:
	long __fastcall _ZtlSecurePut_m_tReceived(long arg0);

public:
	CMovePath &operator=(const CMovePath &arg0);

public:
	static CMovePath &_op_assign_52(CMovePath *pThis, const CMovePath &arg0);
};
STATIC_ASSERT_SIZE(CMovePath::ELEM, 0x1c);
STATIC_ASSERT_SIZE(CMovePath, 160);

void __cdecl CalcHermiteSplineCoeff(long t, long T, double &h1, double &h2, double &h3, double &h4);
