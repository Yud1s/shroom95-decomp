// Field_AriantArena.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Field/Field.hpp"
#include "Packet/Packet.hpp"

// Level: 1 0x13c7e
class CField_AriantArena;

class CField_AriantArena : public CField
{
	// Nested
public:
	struct UserScore
	{
		// Nested
		// Fields
	public:
		ZXString<char> sName;

	public:
		long nScore{};

	public:
		_x_com_ptr<IWzCanvas> pCanvasIcon;
		// Methods
	public:
		~UserScore();

	public:
		void _dtor_0();

	public:
		UserScore(const CField_AriantArena::UserScore &arg0);

	public:
		void _ctor_1(const CField_AriantArena::UserScore &arg0);

	public:
		UserScore();

	public:
		void _ctor_0();

	public:
		bool operator<(const CField_AriantArena::UserScore &arg0) const;

	public:
		static bool _op_lt_3(CField_AriantArena::UserScore *pThis, const CField_AriantArena::UserScore &arg0);

	public:
		CField_AriantArena::UserScore &operator=(const CField_AriantArena::UserScore &arg0);

	public:
		static CField_AriantArena::UserScore &_op_assign_4(CField_AriantArena::UserScore *pThis, const CField_AriantArena::UserScore &arg0);
	};

public:
	enum k
	{
		kLineHeight = 17,
		kTopMargin = 2,
		kIconPosX = 5,
		kNamePosX = 21,
		kScorePosX = 106,
		kResultTopMargin = 104,
		kResultLineHeight = 26
	};
	// Fields
private:
	ZArray<CField_AriantArena::UserScore> m_aUserScore;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerScore;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerResult;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerResultText;
	// Methods
public:
	virtual ~CField_AriantArena();

public:
	void _dtor_0();

public:
	CField_AriantArena(const CField_AriantArena &arg0);

public:
	void _ctor_1(const CField_AriantArena &arg0);

public:
	CField_AriantArena();

public:
	void _ctor_0();

public:
	virtual long GetFieldType();

public:
	virtual void OnPacket(long nType, CInPacket &iPacket);

public:
	virtual void Update();

public:
	long GetRank(ZXString<char> &sName);

public:
	const char *GetRankString(ZXString<char> &arg0);

public:
	void RemoveUserFromRank(ZXString<char> &sName);

protected:
	void OnUserScore(CInPacket &iPacket);

protected:
	void OnShowResult(CInPacket &iPacket);

protected:
	void UpdateScoreAndRank();

public:
	CField_AriantArena &operator=(CField_AriantArena &arg0);

public:
	static CField_AriantArena &_op_assign_12(CField_AriantArena *pThis, CField_AriantArena &arg0);
};
STATIC_ASSERT_SIZE(CField_AriantArena, 3504);

void __cdecl ZSort_CField_AriantArena__UserScore_(ZArray<CField_AriantArena::UserScore> &a);
void __cdecl DownHeap_CField_AriantArena__UserScore_(ZArray<CField_AriantArena::UserScore> &a, int32_t nIdx, int32_t nLen, int32_t nFrom);
int32_t __cdecl Partition_CField_AriantArena__UserScore_(ZArray<CField_AriantArena::UserScore> &a, int32_t nFrom, int32_t nTo, const CField_AriantArena::UserScore &pivot);
void __cdecl ZSort_CField_AriantArena__UserScore_(ZArray<CField_AriantArena::UserScore> &a, __POSITION *posFrom, __POSITION *posTo);
void __cdecl InsertionSort_CField_AriantArena__UserScore_(ZArray<CField_AriantArena::UserScore> &a, int32_t nFrom, int32_t nTo);
