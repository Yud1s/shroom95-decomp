#pragma once
#include "RegenBase.hpp"


#include "StringPolicy/StringPolicy.hpp"
#include "ExpeditionIntermediary/ExpeditionIntermediary.hpp"
#include "UtilDlg/UtilDlg.hpp"
#include "UserLocal/UserLocal.hpp"
#include "UtilPartyQuestDraw/UtilPartyQuestDraw.hpp"
#include "UIStatusBar/UIStatusBar.hpp"

template<>
struct ZHash<TabPartyAdver::ENUM_CTRL_ID> {
	size_t operator()(TabPartyAdver::ENUM_CTRL_ID value) {
		//TODO/zhash)
		return 0;
	}
};