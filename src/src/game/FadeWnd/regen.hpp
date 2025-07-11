#pragma once
#include "RegenBase.hpp"

#include "UIMessenger/UIMessenger.hpp"
#include "Field/Field.hpp"
#include "UtilDlg/UtilDlg.hpp"
#include "ExpeditionIntermediary/ExpeditionIntermediary.hpp"
#include "QuestMan/QuestMan.hpp"
#include "PartyQuestInfo/PartyQuestInfo.hpp"

//TODO get_job_name
#include "CSCommon/CSCommon.hpp"
#include "UIStatusBar/UIStatusBar.hpp"

#include "Util/Util.hpp"


void __cdecl __DrawTextA(_x_com_ptr<IWzCanvas> pCanvas, long x, long y, ZXString<char> sText, IWzFont *pFont,
                       ENUM_TEXT_ALIGN eAlign) {
    DrawTextA(pCanvas, x, y, sText, pFont, eAlign);
}
