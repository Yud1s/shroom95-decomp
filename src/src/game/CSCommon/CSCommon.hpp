// CSCommon.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

// Level: 0 0x1cb59
struct ACTIONDATA;

struct ACTIONDATA
{
	// Nested
public:
	struct PIECE
	{
		// Nested
		// Fields
	public:
		long nAction{};

	public:
		long nFrameIdx{};

	public:
		long tFrameDelay{};

	public:
		int32_t bShowFace{};

	public:
		int32_t bFlip{};

	public:
		long nRotate{};

	public:
		tagPOINT ptMove{};

		PIECE() =default;

		PIECE(long action, long frameIdx, long frameDelay, int32_t showFace, int32_t flip, long rotate, long ptX, long ptY)
		{
			nAction = action;
			nFrameIdx = frameIdx;
			tFrameDelay = frameDelay;
			bShowFace = showFace;
			bFlip = flip;
			nRotate = rotate;
			ptMove.x = ptX;
			ptMove.y = ptY;
		}
		// Methods
	};
	// Fields
public:
	Ztl_bstr_t bsName;

public:
	int32_t bZigZag{};

public:
	int32_t bPieced{};

public:
	long tTotalDelay{};

public:
	long tEventDelay{};

public:
	ZArray<ACTIONDATA::PIECE> aPiece;
	// Methods
public:
	~ACTIONDATA();

public:
	void _dtor_0();

public:

	ACTIONDATA(int32_t bZigZag, int32_t bPieced, long eventDelay, Ztl_bstr_t bsName, std::initializer_list<PIECE> pieces):
		bsName(bsName), bZigZag(bZigZag), bPieced(bPieced), tEventDelay(eventDelay)
	{

		for (auto& piece: pieces)
		{
			aPiece.Insert(piece);
			tTotalDelay += piece.tFrameDelay;
		}


	}
	ACTIONDATA()
	{
	}

public:
	ACTIONDATA(const ACTIONDATA &__that);

public:
	void _ctor_1( const ACTIONDATA &__that);

public:
	ACTIONDATA(int32_t bZigZag, int32_t bPieced, Ztl_bstr_t bsName);

public:
	void _ctor_0( int32_t bZigZag, int32_t bPieced, Ztl_bstr_t bsName);

public:
	ACTIONDATA &operator=(const ACTIONDATA &__that);

public:
	static ACTIONDATA &_op_assign_3(ACTIONDATA *pThis, const ACTIONDATA &__that);
};
STATIC_ASSERT_SIZE(ACTIONDATA, 24);



int32_t __cdecl slashcmd_check(ZXString<char> sText, const char *sCmd);
int32_t __cdecl slashcmd_check_with_subcmd2(ZXString<char> sText, const char *sCmd, ZXString<char> &sSubCmd, ZXString<char> &sSubCmd2);
int32_t __cdecl is_not_capturable_mob(unsigned long dwMobTemplateID);
void __cdecl get_skill_root_from_job(long nJob, ZArray<long> &a);
Ztl_bstr_t __cdecl get_action_name_from_code(long nAction);
int32_t __cdecl slashcmd_check_with_subcmd3(ZXString<char> sText, const char *sCmd, ZXString<char> &sSubCmd, ZXString<char> &sSubCmd2, ZXString<char> &sSubCmd3);
int32_t __cdecl slashcmd_check_with_subcmd(ZXString<char> sText, const char *sCmd, ZXString<char> &sSubCmd);
int32_t __cdecl is_crossline(tagPOINT &P2, tagPOINT &F, tagPOINT &P3, tagPOINT &C);
const char *__cdecl get_job_name(long nJob);
long __cdecl get_action_code_from_name(Ztl_bstr_t bsName);
