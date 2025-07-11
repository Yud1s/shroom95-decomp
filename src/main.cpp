#include <cstdio>
#include <iostream>

#include "ClientConfig.hpp"

#include "imports.h"
#include "WvsApp/WvsApp.hpp"
#include "StringDecoder/StringDecoder.hpp"
#include "spdlog/spdlog.h"

// Required to ensure MonsterBookManStr is defined
#include <Mob/Mob.hpp>
#include <ScriptMan/ScriptMan.hpp>
#include <SequencedKeyMan/SequencedKeyMan.hpp>
#include <Util/Util.hpp>
#include <UtilDlgEx/UtilDlgEx.hpp>

#include "BookDlg/BookDlg.hpp"

#include "MonsterBookMan/MonsterBookMan.hpp"

int main(int, char**){
    spdlog::info("Hello, from gms95-regen!");



    /*for (auto i = 0; i < 128; i++)
    {
        spdlog::info("set{}: {}", i, (bool)(flag & MY_UINT128(1, i)));
    }

    spdlog::info("check: {}", (bool)(flag & CTS_SPEED));
    spdlog::info("check: {}", (bool)(flag & CTS_SUMMON_BOMB));

    return 0;*/

    ZArray<long> a;
    get_random_unique_array(a, 0, 10, 3u);

    ZImports::LoadImports();
    auto filePool = new FileStringPool();
    filePool->LoadFromFile(STRING_POOL_PATH);
    spdlog::info("First string pool: {}", filePool->GetStringAt(0));

    /*SKILLLEVELDATA lvl;
    auto data = lvl.GetParsedCommonData(ZXString<char>("130+4*x"), 30);
    spdlog::info("s: {}", data);
    return 0;*/

    CWvsApp app("");
    app.SetUp();





    /*
    auto ft = get_basic_font(FONT_BASIC_WHITE);
    ZArray<_x_com_ptr<IWzFont>> fonts;
    fonts.Insert(ft);
    //ZXString<char> inp("The #rBlack Mage#k's forces approaches here in an unstoppable pace... We have no other way than to flee this area now, leaving our home behind. Oh, the tragedy!");
    ZArray<CT_INFO> lCt;
    CTextAnalyzer analyzer(10, 10);
    auto res = analyzer.AnalyzeText(inp, lCt, fonts, false, 0, true);*/

    CScriptMan::CreateInstance();
    CSequencedKeyMan::CreateInstance();

    int term = 0;
    app.Run(&term);

    app.CleanUp();

    spdlog::info("Goodbye, from gms95-regen!");
}
