// LoginWnd_Char.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Login/Login.hpp"
#include "FadeWnd/FadeWnd.hpp"
#include "Wnd/Wnd.hpp"
#include "GW/GW.hpp"

// Level: 1 0x21f9f
class CUIAvatarVAC;
// Level: 1 0x21f57
class CUIAvatar;
// Level: 1 0x21f2d
class CUICharDetail;
// Level: 1 0x21f11
class CUICharSelect;
// Level: 1 0x21f72
class CUICharDetailVAC;

class CUIAvatarVAC : public CWnd, public TSingleton<CUIAvatarVAC>
{
	// Nested
	enum ID_CTRL_
	{
		ID_CTRL_SCROLLBAR = 1000,
		ID_CTRL_VAC_BT_LOGIN = 1001,
		ID_CTRL_VAC_SCR_ITEM = 1002
	};
	enum UnnamedEnum138769
	{
		kOKBtn_XPos = 415,
		kOKBtn_YPos = 377,
		kScroll_XPos = 376,
		kScroll_YPos = 67,
		kScroll_Height = 345,
		Vertical_Avatars_PER_PAGE = 3
	};
	// Fields
protected:
	CLogin *m_pLogin;

protected:
	ZRef<CCtrlButton> m_pBtLogin;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	ZRef<CCtrlScrollBar> m_pScrollBar;

protected:
	std::array<AvatarData *, 60> m_apAD{};

protected:
	std::array<GW_CharacterStat, 60> m_aStat{};

protected:
	std::array<ZRef<CAvatar>, 60> m_apAvatar{};

protected:
	std::array<_x_com_ptr<IWzGr2DLayer>, 60> m_apNameTag{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pSelectedNameTag;

protected:
	std::array<_x_com_ptr<IWzGr2DLayer>, 60> m_apWorldIcon{};

protected:
	std::array<_x_com_ptr<IWzFont>, 2> m_pFont;

protected:
	std::array<std::array<_x_com_ptr<IWzCanvas>, 3>, 2> m_pCanvasNameTag{};

protected:
	std::array<_x_com_ptr<IWzCanvas>, 36> m_pCanvasWorldIcon{};
	// Methods
public:
	virtual ~CUIAvatarVAC();

public:
	void _dtor_0();

public:
	CUIAvatarVAC(const CUIAvatarVAC &arg0);

public:
	void _ctor_1(const CUIAvatarVAC &arg0) const;

public:
	CUIAvatarVAC(CLogin *pLogin, void *pData);

public:
	void _ctor_0(CLogin *pLogin, void *pData);

public:
	virtual void OnCreate(void *arg0);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void Update();

public:
	void MakeCharacter(long nIdx, AvatarData &ad);

public:
	void MakeSelectedCharacterNameTag();

public:
	void MakeWorldIcon(long nIdx);

public:
	void ResetAvatarPosition();

public:
	void SetSelection(long nIdx);

public:
	long GetScrollBarIdx();

public:
	long GetViewingIdxFromRealIdx(long arg0) const;

public:
	int32_t IsViewingIdxNow(long arg0) const;

public:
	void ResetCharacter(long nIdx, AvatarData &ad);

protected:
	int32_t IsRequestValid();

protected:
	long GetSelectedIdx(tagPOINT pt);

protected:
	void DrawNameTag(long nIdx, int32_t bSelected);

protected:
	void DrawSelectedNameTag(long nIdx);

protected:
	void DrawWorldIcon(long nIdx);

public:
	CUIAvatarVAC &operator=(const CUIAvatarVAC &arg0);

public:
	static CUIAvatarVAC &_op_assign_23(CUIAvatarVAC *pThis, const CUIAvatarVAC &arg0);
};
STATIC_ASSERT_SIZE(CUIAvatarVAC, 16476);
class CUIAvatar : public CWnd, public TSingleton<CUIAvatar>
{
	// Nested
	// Fields
private:
	CLogin *m_pLogin;

private:
	std::array<AvatarData *, 15> m_apAD{};

private:
	std::array<ZRef<CAvatar>, 3> m_apAvatar{};

private:
	std::array<_x_com_ptr<IWzGr2DLayer>, 3> m_apNameTag{};

private:
	std::array<_x_com_ptr<IWzGr2DLayer>, 3> m_apPremiumDecoration{};

private:
	std::array<_x_com_ptr<IWzGr2DLayer>, 3> m_apEmptySlot{};

private:
	std::array<_x_com_ptr<IWzGr2DLayer>, 3> m_apEmptySlotBase{};

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerPrev;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerNext;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerPrev_over;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerNext_over;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerBallon;

private:
	long m_nBallonDestroyTime{};

private:
	std::array<_x_com_ptr<IWzFont>, 2> m_pFont{};

private:
	std::array<std::array<_x_com_ptr<IWzCanvas>, 3>, 2> m_pCanvasNameTag{};

private:
	long m_nSlotCount{};

private:
	long m_nPageIndex{};

private:
	long m_nCharCount{};

private:
	long m_nBuyCharCount{};
	// Methods
public:
	virtual ~CUIAvatar();

public:
	void _dtor_0();

public:
	CUIAvatar(const CUIAvatar &arg0);

public:
	void _ctor_1(const CUIAvatar &arg0) const;

public:
	CUIAvatar(CLogin *pLogin, void *pData);

public:
	void _ctor_0(CLogin *pLogin, void *pData);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void Update();

public:
	void Refresh();

public:
	void SelectCharacter(long nIdx);

private:
	void EnterCharacter() const;

private:
	void ResetCharacter(long nIdx, const AvatarData &ad, int32_t bBuyCharacter);

private:
	void NextPage() const;

private:
	void PrevPage() const;

private:
	void DrawNameTag(long nIdx, int32_t bSelected);

private:
	_x_com_ptr<IWzGr2DLayer> MakeBalloon(long nWidth, long nHeight);

private:
	long GetSelectedIdx(tagPOINT pt);

private:
	long GetPageSize() const;

private:
	long GetRealIndex(long arg0) const;

private:
	int32_t IsSlotEnable(long arg0) const;

public:
	CUIAvatar &operator=(const CUIAvatar &arg0);

public:
	static CUIAvatar &_op_assign_21(CUIAvatar *pThis, const CUIAvatar &arg0);
};
STATIC_ASSERT_SIZE(CUIAvatar, 336);
class CUICharDetail : public CFadeWnd, public TSingleton<CUICharDetail>
{
	// Nested
	// Fields
protected:
	CLogin *m_pLogin;

protected:
	long m_nIdx{};

protected:
	int32_t m_bCheck{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerAni;

protected:
	int32_t m_bRankInfo{};

protected:
	std::array<_x_com_ptr<IWzGr2DLayer>, 2> m_pLayerIcon{};
	// Methods
public:
	virtual ~CUICharDetail();

public:
	void _dtor_0();

public:
	CUICharDetail(const CUICharDetail &arg0);

public:
	void _ctor_1(const CUICharDetail &arg0) const;

public:
	CUICharDetail(CLogin *pLogin, long nIdx);

public:
	void _ctor_0(CLogin *pLogin, long nIdx);

public:
	virtual void Draw(const tagRECT *arg0);

public:
	virtual void Delete();

public:
	virtual void OnPreFadeIn();

public:
	long GetIdx() const;

public:
	CUICharDetail &operator=(const CUICharDetail &arg0);

public:
	static CUICharDetail &_op_assign_7(CUICharDetail *pThis, const CUICharDetail &arg0);
};
STATIC_ASSERT_SIZE(CUICharDetail, 272);
class CUICharSelect : public CWnd, public TSingleton<CUICharSelect>
{
	// Nested
public:
	enum UnnamedEnum138761
	{
		BT_SEL = 0,
		BT_NEW = 1,
		BT_DEL = 2,
		BT_NO = 3,
		ID_CTRL_CHARSELECT_BT_SEL = 1000,
		ID_CTRL_CHARSELECT_BT_NEW = 1001,
		ID_CTRL_CHARSELECT_BT_DEL = 1002
	};
	// Fields
protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerAdvice;

protected:
	CLogin *m_pLogin;

protected:
	long m_nBtIdx{};

protected:
	std::array<ZRef<CCtrlButton>, 3> m_apButton{};
	// Methods
public:
	virtual ~CUICharSelect();

public:
	void _dtor_0();

public:
	CUICharSelect(const CUICharSelect &arg0);

public:
	void _ctor_1(const CUICharSelect &arg0) const;

public:
	CUICharSelect(CLogin *pData);

public:
	void _ctor_0(CLogin *pData);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	void MakeAdvice();

public:
	virtual void Update();

protected:
	void SetKeyFocus(long nIdx);

protected:
	int32_t IsRequestValid() const;

protected:
	_x_com_ptr<IWzGr2DLayer> MakeBalloon(long nWidth, long nHeight, int32_t bArrowType);

public:
	CUICharSelect &operator=(const CUICharSelect &arg0);

public:
	static CUICharSelect &_op_assign_12(CUICharSelect *pThis, const CUICharSelect &arg0);
};
STATIC_ASSERT_SIZE(CUICharSelect, 164);
class CUICharDetailVAC : public CFadeWnd, public TSingleton<CUICharDetailVAC>
{
	// Nested
	// Fields
protected:
	CLogin *m_pLogin;

protected:
	long m_nIdx{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerAni;

protected:
	int32_t m_bRankInfo{};

protected:
	std::array<_x_com_ptr<IWzGr2DLayer>, 2> m_pLayerIcon{};
	// Methods
public:
	virtual ~CUICharDetailVAC();

public:
	void _dtor_0();

public:
	CUICharDetailVAC(const CUICharDetailVAC &arg0);

public:
	void _ctor_1(const CUICharDetailVAC &arg0) const;

public:
	CUICharDetailVAC(CLogin *pLogin, long nIdx);

public:
	void _ctor_0(CLogin *pLogin, long nIdx);

public:
	virtual void Draw(const tagRECT *arg0);

public:
	virtual void Delete();

public:
	virtual void OnPreFadeIn();

public:
	long GetIdx() const;

public:
	CUICharDetailVAC &operator=(const CUICharDetailVAC &arg0);

public:
	static CUICharDetailVAC &_op_assign_7(CUICharDetailVAC *pThis, const CUICharDetailVAC &arg0);
};
STATIC_ASSERT_SIZE(CUICharDetailVAC, 268);

int32_t __cdecl _anon__PtInRect(tagRECT &rt, tagPOINT &pt);
