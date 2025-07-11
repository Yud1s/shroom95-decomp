// WvsContext_UserList.cpp
#include "WvsContext_UserList.hpp"
#include "WvsContext_UserList_regen.ipp"

 PARTYSERACH_SETTING::PARTYSERACH_SETTING() {
 	Clear();
}
void PARTYSERACH_SETTING::_ctor_0() {
 	new(this) PARTYSERACH_SETTING();
}
void PARTYSERACH_SETTING::Clear() {
 	this->bCleared = 1;
 	this->nMin_Level = 0;
 	this->nMax_Level = 0;
 	this->nNumOf_PartyMember = 0;
 	this->dwSearchingJob = 0;
}

void __cdecl InsertionSort_ZXString_char__Friend_GroupAscComp_S_(ZArray<ZXString<char> >& a, int32_t nFrom, int32_t nTo, Friend_GroupAscComp_S& comp) {
	return __sub_006109E0(a, nFrom, nTo, comp);
}
int32_t __cdecl is_online(const GW_Friend& f, int32_t bListenBlocked) {
 	auto nFlag = f.nFlag;
 	return f.dwFriendID && (nFlag == 0 || nFlag == 3 || nFlag == 4) && f.nChannelID >= 0 && !bListenBlocked;
}
