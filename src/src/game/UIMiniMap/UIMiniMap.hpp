// UIMiniMap.hpp
#pragma once

#include "util/base.h"
#include "pcom/wz.h"

#include "UIWnd/UIWnd.hpp"
#include "WvsContext/WvsContext.hpp"
#include "CtrlWnd/CtrlWnd.hpp"

struct SimpleMiniMap_FootHold {
// Nested
// Fields
public:
    tagPOINT pt1{};
public:
    tagPOINT pt2{};
public:
    long CurSN{};
public:
    long PrevSN{};
public:
    long NextSN{};
public:
    int32_t bUsed{};
// Methods
};
STATIC_ASSERT_SIZE(SimpleMiniMap_FootHold, 32);

struct SimpleMiniMap_LadderRope {
// Nested
// Fields
public:  long x{};
public:  long y1{};
public:  long y2{};
// Methods
};
STATIC_ASSERT_SIZE(SimpleMiniMap_LadderRope, 12);

// Level: 1 0xdb9b
class CUIMiniMap;

class CUIMiniMap : public CUIWnd, public TSingleton<CUIMiniMap> {
    // Nested
public:
    enum ID_CTRL_BT_ {
        ID_CTRL_BT_MINIMIZE = 1000,
        ID_CTRL_BT_MAXIMIZE = 1001,
        ID_CTRL_BT_WORLDMAP = 1002,
        ID_CTRL_BT_2X = 1003
    };
    enum UI_MINIMAP_ {
        UI_MINIMAP_MAXIMIZED = 0,
        UI_MINIMAP_HIDEMAPNAME = 1,
        UI_MINIMAP_MINIMIZED = 2
    };
    enum M {
        MINIMAP_TYPE_SIMPLE = 0,
        MINIMAP_TYPE_NORMAL = 1,
        MAX_MINIMAP_TYPE = 2
    };
    // Fields
protected:
    int32_t m_nMiniMapType{};

protected:
    int32_t m_nPrevOption{};

protected:
    long m_nPane_W{};

protected:
    long m_nPane_H{};

protected:
    long m_nMini_W{};

protected:
    long m_nMini_H{};

protected:
    long m_nReal_W{};

protected:
    long m_nReal_H{};

protected:
    long m_nReal_CX{};

protected:
    long m_nReal_CY{};

protected:
    long m_nMag{};

protected:
    long m_nMag_Normal{};

protected:
    long m_nMag_2X{};

protected:
    long m_nLocal_X{};

protected:
    long m_nLocal_Y{};

protected:
    long m_nPane_X{};

protected:
    long m_nPane_Y{};

protected:
    long m_nScrOrig_X{};

protected:
    long m_nScrOrig_Y{};

protected:
    _x_com_ptr<IWzCanvas> m_pMini_Canvas;

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerBack;

protected:
    ZArray<tagPOINT> m_aPtNpc;

protected:
    ZMap<long, unsigned long, long> m_mNpc;

protected:
    ZMap<unsigned long, tagPOINT, unsigned long> m_mStalkee;

protected:
    ZMap<unsigned long, ZXString<char>, unsigned long> m_mStalkeeName;

protected:
    ZRef<CCtrlButton> m_pBtMinimize;

protected:
    ZRef<CCtrlButton> m_pBtMaximize;

protected:
    ZRef<CCtrlButton> m_pBtWorldMap;

protected:
    ZRef<CCtrlButton> m_pBtSimpleMap;

protected:
    ZRef<CCtrlButton> m_pBt2X;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconSelfSimple;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconRemoteUserSimple;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconFriendSimple;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconGuildSimple;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconGuildMasterSimple;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconMatchSimple;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconPartySimple;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconPartyMasterSimple;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconNpcSimple;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconNpcStartSimple;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconNpcEndSimple;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconShopSelfSimple;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconShopRemoteSimple;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconPortalSimple;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconNWSimple;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconNSimple;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconNESimple;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconSWSimple;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconSSimple;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconSESimple;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconWSimple;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconESimple;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconNpcLowLevelSimple;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconSheepSimple;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconWolvesSimple;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconNakedSheepSimple;

protected:
    ZMap<long, ZRef<SimpleMiniMap_FootHold>, long> FootHoldMap;

protected:
    ZArray<ZRef<SimpleMiniMap_FootHold>> m_lFootHold;

protected:
    ZList<ZRef<SimpleMiniMap_LadderRope>> m_lLadderRope;

protected:
    _x_com_ptr<IWzCanvas> m_pSimple_Canvas;

protected:
    _x_com_ptr<IWzCanvas> m_pSimple_Canvas_Huge;

protected:
    _x_com_ptr<IWzProperty> m_pPropFieldInfo;

protected:
    _x_com_ptr<IWzProperty> m_pPropField;

protected:
    _x_com_ptr<IWzFont> m_pFont;

protected:
    _x_com_ptr<IWzFont> m_pFontMapName;

protected:
    _x_com_ptr<IWzFont> m_pFontMapNameBack;

protected:
    unsigned long m_dwFieldID{};

protected:
    unsigned long m_dwSearchedShop{};

protected:
    int32_t m_bCreated{};

protected:
    int32_t m_bShowMiniMap{};

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconSelf;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconRemoteUser;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconFriend;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconGuild;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconGuildMaster;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconMatch;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconParty;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconPartyMaster;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconNpc;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconNpcStart;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconNpcEnd;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconShopSelf;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconShopRemote;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconPortal;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconNW;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconN;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconNE;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconSW;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconS;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconSE;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconW;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconE;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconSheep;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconWolves;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconNakedSheep;

protected:
    ZXString<char> m_strRemoteNW;

protected:
    ZXString<char> m_strRemoteN;

protected:
    ZXString<char> m_strRemoteNE;

protected:
    ZXString<char> m_strRemoteW;

protected:
    ZXString<char> m_strRemoteE;

protected:
    ZXString<char> m_strRemoteSW;

protected:
    ZXString<char> m_strRemoteS;

protected:
    ZXString<char> m_strRemoteSE;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasIconNpcLowLevel;
    // Methods
public:
    virtual ~CUIMiniMap();

public:
    void _dtor_0();

public:
    CUIMiniMap(const CUIMiniMap &arg0);

public:
    void _ctor_1(const CUIMiniMap &arg0);

public:
    CUIMiniMap(CWvsContext *pWvsContext);

public:
    void _ctor_0(CWvsContext *pWvsContext);

public:
    void SetLayer();

public:
    void SetCtrl();

public:
    void ToggleMap();

public:
    void ToggleMiniMapState();

public:
    int32_t LoadMiniMap(_x_com_ptr<IWzProperty> arg0, _x_com_ptr<IWzProperty> arg1, unsigned long arg2);

public:
    int32_t ReloadMiniMap();

public:
    void CalculateScr();

public:
    long GetMiniMapWidth();

public:
    virtual void Update();

public:
    virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
    virtual void OnButtonClicked(uint32_t nId);

public:
    virtual int32_t OnMouseMove(long rx, long ry);

public:
    virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
    void SetSearch(unsigned long dwCharacterID);

public:
    void InsertStalkee(unsigned long dwCharacterID, ZXString<char> &strName, tagPOINT pt);

public:
    void RemoveStalkee(unsigned long dwCharacterID);

public:
    void SetShowMiniMap(int32_t bShow);

public:
    void SetMiniMapType(long arg0, int32_t arg1);

public:
    void SortFootHold();

public:
    void ReleaseFootHoldData();

public:
    void ReleaseFootHoldMapData();

protected:
    void DestroyMMWindow();

protected:
    tagPOINT TransformPoint(const tagPOINT &ptIn);

protected:
    void DrawIcon_1(ZList<tagPOINT> &lPt, _x_com_ptr<IWzCanvas> pIcon);

protected:
    void DrawIcon_0(tagPOINT &pt, _x_com_ptr<IWzCanvas> pIcon);

protected:
    void MakeSimpleMiniMap(_x_com_ptr<IWzProperty> pField);

protected:
    int32_t LoadFootHold(_x_com_ptr<IWzProperty> pPropFootHold);

protected:
    int32_t LoadLadderRope(_x_com_ptr<IWzProperty> pPropLadderRope);

protected:
    void MakeConvexLayer();

protected:
    void MakeIconsForSimpleMiniMap();

protected:
    void SetSize();

protected:
    void SetLayer_Simple();

protected:
    void SetCtrl_Simple();

protected:
    double CalcAngle(tagPOINT pt1, tagPOINT pt2, tagPOINT pt3);

protected:
    void UpdateRect(tagRECT &rt);

public:
    CUIMiniMap &operator=(const CUIMiniMap &arg0);

public:
    static CUIMiniMap &_op_assign_38(CUIMiniMap *pThis, const CUIMiniMap &arg0);
};

STATIC_ASSERT_SIZE(CUIMiniMap, 3356);


