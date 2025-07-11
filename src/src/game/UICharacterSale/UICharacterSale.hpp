// UICharacterSale.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Packet/Packet.hpp"
#include "AdminShopDlg/AdminShopDlg.hpp"

// Level: 1 0x1068b
class CUICharacterSaleDlg;

class CUICharacterSaleDlg : public CUniqueModeless
{
	// Nested
public:
	struct NEWEQUIP
	{
		// Nested
		// Fields
	public:
		long nGender{};

	public:
		long nType{};

	public:
		long nItemId{};
		// Methods
	};

public:
	struct ASITEM
	{
		// Nested
		// Fields
	public:
		long nItemId{};

	public:
		ZXString<char> sItemName;
		// Methods
	public:
		~ASITEM();

	public:
		void _dtor_0();

	public:
		ASITEM(const CUICharacterSaleDlg::ASITEM &arg0);

	public:
		void _ctor_1(const CUICharacterSaleDlg::ASITEM &arg0);

	public:
		ASITEM();

	public:
		void _ctor_0();

	public:
		CUICharacterSaleDlg::ASITEM &operator=(const CUICharacterSaleDlg::ASITEM &arg0);

	public:
		static CUICharacterSaleDlg::ASITEM &_op_assign_3(CUICharacterSaleDlg::ASITEM *pThis, const CUICharacterSaleDlg::ASITEM &arg0);
	};

public:
	enum kUIAS_
	{
		kUIAS_Width = 225,
		kUIAS_Height = 377,
		kUIAS_PROP_X = 221,
		kUIAS_PROP_Y = 101,
		kUIAS_PROP_Width = 200,
		kUIAS_PROP_Height = 162
	};
	enum CSD_STEP
	{
		CSD_STEP1 = 1,
		CSD_STEP2 = 2,
		CSD_STEP2_1 = 3,
		CSD_STEP3 = 4,
		CSD_STEP4 = 5,
		CSD_STEP5 = 6
	};
	enum ID_CTRL_
	{
		ID_CTRL_BT_NEXT = 1000,
		ID_CTRL_BT_BACK = 1001,
		ID_CTRL_BT_FINISH = 1002,
		ID_CTRL_BTCLASS_LEFT = 1003,
		ID_CTRL_BTCLASS_RIGHT = 1004,
		ID_CTRL_EDIT_TEXT = 1005,
		ID_CTRL_BTSP_LEFT = 1006,
		ID_CTRL_BTSP_RIGHT = 1007,
		ID_CTRL_NEWCHAR_BT_LEFT = 1008,
		ID_CTRL_NEWCHAR_BT_RIGHT = 1017,
		ID_CTRL_NEWCHAR_BT_LR_END = 1026
	};
	// Fields
public:
	std::array<const char *, 11> strSPWarrior;

public:
	std::array<const char *, 11> strSPMagician;

private:
	long m_nPOS{};

private:
	long m_nItemID{};

private:
	ZRef<CCtrlEdit> m_pEdit;

private:
	ZRef<CCtrlButton> m_pBtCancel;

private:
	ZRef<CCtrlButton> m_pBtNext;

private:
	ZRef<CCtrlButton> m_pBtBack;

private:
	ZRef<CCtrlButton> m_pBtFinish;

private:
	ZRef<CCtrlButton> m_pBtClassLeft;

private:
	ZRef<CCtrlButton> m_pBtClassRight;

private:
	std::array<ZRef<CCtrlButton>, 9> m_pBtCharSelLeft;

private:
	std::array<ZRef<CCtrlButton>, 9> m_pBtCharSelRight;

private:
	ZRef<CCtrlButton> m_pBtSPLeft;

private:
	ZRef<CCtrlButton> m_pBtSPRight;

private:
	long m_nCurrentClass{};

private:
	long m_nCurrentStep{};

private:
	long m_nSP{};

private:
	_x_com_ptr<IWzCanvas> m_pCanvasSP;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerClass;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerClassNameTag;

private:
	ZArray<_x_com_ptr<IWzCanvas>> m_apCanvasClass;

private:
	std::array<_x_com_ptr<IWzCanvas>, 9> m_pCanvasSel;

private:
	unsigned char m_nGender{};

private:
	std::array<ZArray<CUICharacterSaleDlg::ASITEM>, 9> m_aMaleItem;

private:
	std::array<ZArray<CUICharacterSaleDlg::ASITEM>, 9> m_aFemaleItem;

private:
	std::array<ZXString<char>, 5> m_strClassName;

private:
	std::array<ZXString<char>, 5> m_strClassDesc;

private:
	std::array<ZXString<char>, 5> m_strInitStatDesc;

private:
	std::array<ZXString<char>, 5> m_strInitSPDesc;

private:
	std::array<ZXString<char>, 5> m_strStartMap;

private:
	std::array<ZXString<char>, 5> m_strEquip;

private:
	std::array<ZXString<char>, 5> m_strItem;

private:
	int32_t m_bRequestSent{};

private:
	ZRef<CAvatar> m_pNewAvatar;

private:
	ZList<CUICharacterSaleDlg::NEWEQUIP> m_lNewEquip;

private:
	ZArray<_x_com_ptr<IWzFont>> m_apStep4Font;

private:
	ZArray<_x_com_ptr<IWzFont>> m_apStep5Font;

private:
	ZXString<char> m_strStep4Text_Warrior;

private:
	ZXString<char> m_strStep4Text_Magician;

private:
	ZXString<char> m_strStep5Text;
	// Methods
public:
	virtual ~CUICharacterSaleDlg();

public:
	void _dtor_0();

public:
	CUICharacterSaleDlg(const CUICharacterSaleDlg &arg0);

public:
	void _ctor_1(const CUICharacterSaleDlg &arg0);

public:
	CUICharacterSaleDlg(long nPOS, long nItemID);

public:
	void _ctor_0(long nPOS, long nItemID);

	CLASS_RTTI_(CUICharacterSaleDlg, CUniqueModeless);

public:
	virtual void OnCreate(void *arg0);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	ZXString<char> GetNewCharEquipName(long nIdx);

public:
	void ShiftNewCharEquip(long item, long arg1);

public:
	void OnAvatarChanged();

public:
	void ChangeNewCharacterGender();

public:
	int32_t IsRequestSent();

public:
	void InitNewCharEquip();

public:
	_x_com_ptr<IWzGr2DLayer> GetDlgLayer();

public:
	void SendCheckDuplicateIDPacket(const ZXString<char> &sCharName);

public:
	void SendRequest(COutPacket &oPacket);

public:
	virtual void OnPacket(long nType, CInPacket &iPacket);

private:
	void SendCreateNewCharacter();

private:
	int32_t ShowWindow();

private:
	int32_t ShowClass();

private:
	int32_t SetStep1(int32_t bSet);

private:
	int32_t SetStep2(int32_t bSet);

private:
	int32_t SetStep2_1(int32_t bSet);

private:
	int32_t SetStep3(int32_t bSet);

private:
	int32_t SetStep4(int32_t bSet);

private:
	int32_t SetStep5(int32_t bSet);

private:
	int32_t SetAvatar(int32_t bSet);

private:
	int32_t ClearWindow();

private:
	int32_t ClearCurrentStep(long nStep);

private:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

private:
	void GetSelectedAL_1(AvatarLook &al);

private:
	long GetSelectedAL_0(long nIdx);

private:
	void SetNewCharacterGender(unsigned char arg0);

private:
	ZList<CUICharacterSaleDlg::NEWEQUIP> &GetNewEquip();

private:
	ZXString<char> GetNewCharItemName(long nGender, long nType, long nItemID);

private:
	void LoadNewCharInfo();

private:
	void LoadSPInfo();

private:
	void OnCheckDuplicatedIDResult(CInPacket &iPacket);

private:
	void OnCreateNewCharacterResult(CInPacket &iPacket);

public:
	CUICharacterSaleDlg &operator=(const CUICharacterSaleDlg &arg0);

public:
	static CUICharacterSaleDlg &_op_assign_41(CUICharacterSaleDlg *pThis, const CUICharacterSaleDlg &arg0);
};
STATIC_ASSERT_SIZE(CUICharacterSaleDlg, 792);
