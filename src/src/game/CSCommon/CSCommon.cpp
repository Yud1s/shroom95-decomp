// CSCommon.cpp
#include "CSCommon.hpp"
#include "CSCommon_regen.ipp"

ACTIONDATA::~ACTIONDATA() = default;
void ACTIONDATA::_dtor_0()
{
	this->~ACTIONDATA();
	//return __sub_000B8870(this, nullptr);
}
ACTIONDATA::ACTIONDATA(const ACTIONDATA &__that)
{
	bsName = __that.bsName;
	bZigZag = __that.bZigZag;
	bPieced = __that.bPieced;
	tTotalDelay = __that.tTotalDelay;
	tEventDelay = __that.tEventDelay;
	aPiece = __that.aPiece;
	//_ctor_1( __that);
}
void ACTIONDATA::_ctor_1(const ACTIONDATA &__that)
{
	new (this) ACTIONDATA(__that);
	// return __sub_000B88D0(this, nullptr, __that);
}
ACTIONDATA::ACTIONDATA(int32_t bZigZag, int32_t bPieced, Ztl_bstr_t bsName)
{
	this->bZigZag = bZigZag;
	this->bPieced = bPieced;
	this->bsName = bsName;
	//_ctor_0( bZigZag, bPieced, bsName);
}
void ACTIONDATA::_ctor_0(int32_t bZigZag, int32_t bPieced, Ztl_bstr_t bsName)
{
	this->bZigZag = bZigZag;
	this->bPieced = bPieced;
	this->bsName = bsName;
	//return __sub_000BABC0(this, nullptr, bZigZag, bPieced, CreateNakedParam(bsName));
}
ACTIONDATA &ACTIONDATA::operator=(const ACTIONDATA &__that)
{
	if(this == &__that)
	{
		return *this;
	}

	bsName = __that.bsName;
	bZigZag = __that.bZigZag;
	bPieced = __that.bPieced;
	tTotalDelay = __that.tTotalDelay;
	tEventDelay = __that.tEventDelay;
	aPiece = __that.aPiece;
	return *this;
	//return _op_assign_3(this, __that);
}
ACTIONDATA &ACTIONDATA::_op_assign_3(ACTIONDATA *pThis, const ACTIONDATA &__that)
{
	return __sub_00512360(pThis, nullptr, __that);
}

int32_t __cdecl slashcmd_check(ZXString<char> sText, const char *sCmd)
{
	return __sub_000B8610(CreateNakedParam(sText), sCmd);
}
int32_t __cdecl slashcmd_check_with_subcmd2(ZXString<char> sText, const char *sCmd, ZXString<char> &sSubCmd, ZXString<char> &sSubCmd2)
{
	return __sub_000BAE30(CreateNakedParam(sText), sCmd, sSubCmd, sSubCmd2);
}
int32_t __cdecl is_not_capturable_mob(unsigned long dwMobTemplateID)
{
	return __sub_000B7AC0(dwMobTemplateID);
}
void __cdecl get_skill_root_from_job(long nJob, ZArray<long> &a)
{
	return __sub_000BA830(nJob, a);
}
Ztl_bstr_t __cdecl get_action_name_from_code(long nAction)
{
	return ActionData::m_saCharacterActions[nAction].bsName;
	// return __sub_000BA910(nAction);
}
int32_t __cdecl slashcmd_check_with_subcmd3(ZXString<char> sText, const char *sCmd, ZXString<char> &sSubCmd, ZXString<char> &sSubCmd2, ZXString<char> &sSubCmd3)
{
	return __sub_000BB190(CreateNakedParam(sText), sCmd, sSubCmd, sSubCmd2, sSubCmd3);
}
int32_t __cdecl slashcmd_check_with_subcmd(ZXString<char> sText, const char *sCmd, ZXString<char> &sSubCmd)
{
	return __sub_000BAC10(CreateNakedParam(sText), sCmd, sSubCmd);
}
int32_t __cdecl is_crossline(tagPOINT &P2, tagPOINT &F, tagPOINT &P3, tagPOINT &C)
{
	return __sub_000B80E0(P2, F, P3, C);
}
const char *__cdecl get_job_name(long nJob)
{
	return __sub_000B8960(nJob);
}
long __cdecl get_action_code_from_name(Ztl_bstr_t bsName)
{
	auto i = 0;
	for (auto &data : ActionData::m_saCharacterActions)
	{
		if (data.bsName == bsName.operator const wchar_t *())
		{
			return i;
		}
		i++;
	}
	return -1;
	// return __sub_000BA950(CreateNakedParam(bsName));
}
