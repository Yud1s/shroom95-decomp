// BasicSystem.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"





long __cdecl get_bodypart_from_item(long nItemID, long nGender, long* pnBodyPart, int32_t bAll);
int32_t __cdecl is_correct_bodypart(long nItemID, long nBodyPart, long nGender);
