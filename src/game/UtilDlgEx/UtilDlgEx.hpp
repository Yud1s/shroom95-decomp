// UtilDlgEx.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Dialog/Dialog.hpp"
#include "LayoutMan/LayoutMan.hpp"
#include "UIToolTip/UIToolTip.hpp"

//TODO(hdr) CT_INFO
//#include "BookDlg/BookDlg.hpp"


class CtrlWnd;
struct AvatarLook;
class CAvatar;
class CCtrlScrollBar;
class CCtrlEdit;
class CCtrlMLEdit;
class CCtrlComboBox;

struct CT_INFO;

// Level: 1 0xadcf
class CTextAnalyzer;
// Level: 1 0xae73
class CUtilDlgEx;

class CTextAnalyzer : public ZRefCounted
{
    // Nested
public:
    enum MOB_
    {
        MOB_NAME = 77,
        MOB_BONUS_EXP = 120
    };

    enum QUEST_
    {
        QUEST_NAME = 121,
        QUEST_PROGRESS = 117
    };

    // Fields
private:
    long m_nMargin{};

private:
    long m_nWidth{};
    // Methods
public:
    virtual ~CTextAnalyzer();

public:
    void _dtor_0();

public:
    CTextAnalyzer(const CTextAnalyzer& arg0);

public:
    void _ctor_1(const CTextAnalyzer& arg0);

public:
    CTextAnalyzer(long arg0, long arg1);

public:
    void _ctor_0(long arg0, long arg1);

public:
    long AnalyzeText(ZXString<char> arg0, ZArray<CT_INFO>& arg1, ZArray<_x_com_ptr<IWzFont>>& arg2, int32_t bWhiteBased,
                     uint16_t usQuestId, int32_t bSkipListIcon);

private:
    long GetParameterNo(ZXString<char> sPhrase);

private:
    void GetPhrase(ZXString<char>& sText, ZXString<char>& sPhrase);

private:
    void GetCharacter(ZXString<char>& sText, ZXString<char>& sChar, int32_t bRemove);

private:
    void GetPhrase_Sharp(ZXString<char>& sText, ZXString<char>& sPhrase);

private:
    void GetPhrase_Gen(ZXString<char>& sText, ZXString<char>& sPhrase);

private:
    void SeparateLineText(long nIdx, ZXString<char> sCur, ZXString<char> sNext, ZArray<CT_INFO>& aCT);

private:
    void SeparateLineIcon(long nIdx, ZArray<CT_INFO>& aCT);

private:
    void GetLine(long nLine, long& nStart, long& nEnd, long& nHeightMax, ZArray<CT_INFO>& aCT);

private:
    void AdjustHeight(long nStart, long nEnd, long nTop, long nHeightMax, ZArray<CT_INFO>& aCT);

private:
    int32_t IsDilimiter(ZXString<char> target);

private:
    int32_t IsSuffix(ZXString<char> target);

private:
    long GetPhraseType(ZXString<char> sPhrase);

private:
    _x_com_ptr<IWzCanvas> GetOutlineCanvas(_x_com_ptr<IWzCanvas> pIcon);

private:
    long CheckSecretItemID(long nParam);

public:
    CTextAnalyzer& operator=(const CTextAnalyzer& arg0);

public:
    static CTextAnalyzer& _op_assign_18(CTextAnalyzer* pThis, const CTextAnalyzer& arg0);
};

STATIC_ASSERT_SIZE(CTextAnalyzer, 20);

class CUtilDlgEx : public CDialog
{
public:
    static ZList<CUtilDlgEx*> ms_lDialog;
    // Nested
public:
    struct PET_INFO
    {
        // Nested
        // Fields
    public:
        unsigned long dwTempletID{};

    public:
        ZXString<char> sName;

    public:
        long nLevel{};

    public:
        long nTameness{};

    public:
        int32_t bIsDead{};
        // Methods
    public:
        ~PET_INFO();

    public:
        void _dtor_0();

    public:
        PET_INFO(const CUtilDlgEx::PET_INFO& arg0);

    public:
        void _ctor_1(const CUtilDlgEx::PET_INFO& arg0);

    public:
        PET_INFO();

    public:
        void _ctor_0();

    public:
        CUtilDlgEx::PET_INFO& operator=(const CUtilDlgEx::PET_INFO& arg0);

    public:
        static CUtilDlgEx::PET_INFO& _op_assign_3(CUtilDlgEx::PET_INFO* pThis, const CUtilDlgEx::PET_INFO& arg0);
    };

public:
    enum ID_CTRL_
    {
        ID_CTRL_EDIT_UDLGEX_INPUT = 1000,
        ID_CTRL_SCROLLBAR = 1001,
        ID_CTRL_COMBOBOX = 1002,
        ID_CTRL_EDIT_UDLGEX_MLINPUT = 1003
    };

    // Fields
public:
    int32_t m_bMsgImage{};

public:
    long m_bMsgImage_Img{};

protected:
    long m_dlgType{};

protected:
    long m_ctLeft{};

protected:
    long m_ctTop{};

protected:
    long m_ctHeight{};

protected:
    long m_scrHeight{};

protected:
    long m_nScrollPos{};

protected:
    int32_t m_bScrollBar{};

protected:
    long m_wndWidth{};

protected:
    long m_wndHeight{};

protected:
    long m_nTemplateID{};

protected:
    int32_t m_bNoNPC{};

protected:
    int32_t m_bQuest{};

protected:
    int32_t m_bTextPrev{};

protected:
    int32_t m_bTextNext{};

protected:
    int32_t m_bImagePrev{};

protected:
    int32_t m_bImageNext{};

protected:
    ZArray<ZXString<char>> m_aImageList;

protected:
    uint16_t m_usCurImage{};

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerImage;

protected:
    ZXString<char> m_sInputDefault;

protected:
    long m_nInputLen{};

protected:
    long m_nInputNo_Min{};

protected:
    long m_nInputNo_Max{};

protected:
    long m_nInputNo_Result{};

protected:
    long m_nInputStr_Min{};

protected:
    long m_nInputCol{};

protected:
    long m_nInputLine{};

protected:
    ZXString<char> m_sInputStr_Result;

protected:
    int32_t m_bInputStr_Passwd{};

protected:
    int32_t m_bKoreanBaseLen{};

protected:
    long m_nSelect{};

protected:
    long m_nSelectPrev{};

protected:
    long m_nListFocus{};

protected:
    ZArray<CT_INFO*> m_apListCT;

protected:
    ZArray<long> m_aAvatarCandidate;

protected:
    long m_nAvatarType{};

protected:
    long m_nAvatarIndex{};

protected:
    int32_t m_bEquipPreview{};

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasLine;

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerNPC;

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerNameTag;

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerNPCNameTag;

protected:
    ZRef<AvatarLook> m_pAvatarLook;

protected:
    ZRef<CAvatar> m_pAvatar;

protected:
    ZRef<CharacterData> m_pCharacterData;

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerQDeliveryIcon;

protected:
    ZArray<CUtilDlgEx::PET_INFO> m_aPetInfo;

protected:
    long m_nPetIndex{};

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerPet;

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerPetInfo;

protected:
    CUIToolTip m_uiToolTip;

protected:
    ZRef<CCtrlButton> m_pBtUIClose;

protected:
    ZRef<CCtrlEdit> m_pEditInput;

protected:
    ZRef<CCtrlMLEdit> m_pMLEditInput;

protected:
    ZRef<CCtrlScrollBar> m_pScrollBar;

protected:
    ZRef<CCtrlComboBox> m_pCombobox;

protected:
    std::array<ZRef<CCtrlButton>, 7> m_apButton;

protected:
    ZArray<ZRef<CCtrlButton>> m_apBtnFocus;

protected:
    ZArray<CT_INFO> m_aCT;

protected:
    ZArray<_x_com_ptr<IWzFont>> m_apFont;

protected:
    _x_com_ptr<IWzFont> m_pFontPet;

protected:
    long m_nCurDisplayItemIndex{};

protected:
    long m_nCurDisplayTextItemPos{};

protected:
    long m_bFinishShow{};

protected:
    long m_nBtnFocus{};

protected:
    int32_t m_bParam{};

protected:
    int32_t m_bSpeakerOnRight{};

private:
    CLayoutMan m_lm;
    // Methods
public:
    virtual ~CUtilDlgEx();

public:
    void _dtor_0();

public:
    CUtilDlgEx(const CUtilDlgEx& arg0);

public:
    void _ctor_1(const CUtilDlgEx& arg0);

public:
    CUtilDlgEx();

public:
    void _ctor_0();

public:
    virtual void OnCreate(void* pData);

public:
    virtual void OnDestroy();

public:
    virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
    virtual int32_t OnMouseMove(long rx, long ry);

public:
    virtual void OnMouseEnter(int32_t bEnter);

public:
    virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
    virtual void OnButtonClicked(uint32_t nId);

public:
    virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
    virtual void SetRet(long nRet);

public:
    virtual void Draw(const tagRECT* arg0);

public:
    virtual int32_t HitTest(long rx, long ry, CCtrlWnd** ppCtrl);

public:
    virtual void ClearToolTip();

public:
    void CreateUtilDlgEx();

public:
    void SetUtilDlgEx(long dlgType, long nTemplateID, ZXString<char> sText, int32_t bNoNpc, int32_t bQuest);

    void SetUtilDlgEx_1(long dlgType, long nTemplateID, ZXString<char> sText, int32_t bNoNpc, int32_t bQuest)
    {
        SetUtilDlgEx(dlgType, nTemplateID, sText, bNoNpc, bQuest);
    }

public:
    void SetUtilDlgEx(long dlgType, long nTemplateID, int32_t bNoNpc, int32_t bQuest);

    void SetUtilDlgEx_0(long dlgType, long nTemplateID, int32_t bNoNpc, int32_t bQuest)
    {
        SetUtilDlgEx(dlgType, nTemplateID, bNoNpc, bQuest);
    }

public:
    void SetUtilDlgEx_Param(unsigned char arg0);

public:
    void SetUtilDlgEx_TEXT(int32_t bPrev, int32_t bNext);

public:
    void SetUtilDlgEx_IMAGE(int32_t bPrev, int32_t bNext);

public:
    void SetUtilDlgEx_YESNO();

public:
    void SetUtilDlgEx_INPUT_NO(long nIntDefault, long nIntMin, long nIntMax, long nStrMin, long nStrMax,
                               int32_t bPasswd);

public:
    void SetUtilDlgEx_INPUT_STR(const char* sStrDefault, long nStrMin, long nStrMax, int32_t bPasswd,
                                int32_t bKoreanBaseLen);

public:
    void SetUtilDlgEx_INPUT_MLSTR(const char* sStrDefault, long nCol, long nLine);

public:
    void SetUtilDlgEx_COMBOBOX(ZList<ZXString<char>>& lItems);

public:
    void SetUtilDlgEx_LIST(int32_t bReset);

public:
    void SetUtilDlgEx_AVATAR(ZArray<long>& aCandidate, ZRef<CharacterData> pCharacterData);

public:
    void SetUtilDlgEx_Pet(ZArray<ZRef<GW_ItemSlotPet>>& apDeadPet);

public:
    long GetInputNo_Result();

public:
    ZXString<char> GetInputStr_Result();

public:
    long GetList_Result();

public:
    long GetAvatar_Result();

public:
    long GetPet_Result();

public:
    ZXString<char> GetComboBoxStr();

public:
    void ApplyComboBoxItemList(ZList<ZXString<char>>& lsItem);

public:
    void AddImageList(ZXString<char> sPath);

public:
    static void __cdecl ForcedRet();

protected:
    void OnCreate_TEXT();

protected:
    void OnCreate_YESNO();

protected:
    void OnCreate_INPUT();

protected:
    void OnCreate_INPUT1();

protected:
    void OnCreate_MLINPUT();

protected:
    void OnCreate_COMBOBOX_EDITABLE();

protected:
    void OnCreate_LIST();

protected:
    void OnCreate_AVATAR();

protected:
    void OnCreate_PET();

protected:
    void OnCreate_IMAGE();

protected:
    void Layout_GEN(int32_t bAvatar);

protected:
    void Layout_INPUT();

protected:
    void Layout_MLINPUT();

protected:
    void CheckMousePoint(long rx, long ry);

protected:
    long GetWndWidth();

protected:
    long GetWndHeight();

protected:
    long GetBasicCTWidth();

protected:
    long GetCTHeight_Max();

protected:
    long GetCTHeight_Min();

protected:
    long GetBasicCTMargin();

protected:
    void ValidateScroll(CT_INFO* pCti);

protected:
    void SetAvatar(ZRef<AvatarLook> pAvatarLook);

protected:
    void MakeAvatar(ZRef<AvatarLook> pAvatarLook);

protected:
    void MakePet();

protected:
    void MakeImage();

protected:
    void UpdateImage();

protected:
    void SetNPC();

protected:
    virtual void Update();

protected:
    void SetKeyFocus(long nIdx);

protected:
    void SetBackground();

protected:
    void MakeBorder();

protected:
    void MakeInnerBorder(long arg0, long arg1, long arg2, long arg3);

protected:
    const wchar_t* MakeUOLByUIType(ZXString16& sOut, const wchar_t* sUOL, const wchar_t* sUOL2);

public:
    CUtilDlgEx& operator=(const CUtilDlgEx& arg0);

public:
    static CUtilDlgEx& _op_assign_71(CUtilDlgEx* pThis, const CUtilDlgEx& arg0);
};

STATIC_ASSERT_SIZE(CUtilDlgEx, 3152);


// 874018 8
static ZRef<CUtilDlgEx> _D_PPREVIOUSDLG{};

ZXString<char> __cdecl ask_SPW();
int32_t __cdecl ask_guildname(ZXString<char>& sGuildName);
