// AvatarMegaphone.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "AdminShopDlg/AdminShopDlg.hpp"
#include "Wnd/Wnd.hpp"
#include "Avatar/Avatar.hpp"

// Level: 1 0xf391
class CAvatarMegaphone;

class CAvatarMegaphone : public CWnd, public TSingleton<CAvatarMegaphone>
{
	// Nested
public:
	enum CHATLOG_LINEMAX
	{
		CHATLOG_LINEMAX = 1000
	};

	// Fields
public:
	long m_nItemID{};

public:
	AvatarLook m_al;

public:
	ZRef<CAvatar> m_pAvatarLook;

public:
	int32_t m_bWhisper{};

public:
	long m_nChannel{};

public:
	long m_nEmotion{};

public:
	long m_nScreenWidth{};

public:
	ZXString16 m_sPath;

public:
	ZXString<char> m_sName;

public:
	ZXString<char> m_s1;

public:
	ZXString<char> m_s2;

public:
	ZXString<char> m_s3;

public:
	ZXString<char> m_s4;

protected:
	_x_com_ptr<IWzFont> m_pFontText;

protected:
	_x_com_ptr<IWzFont> m_pFontID;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerAvatarSkin;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerNameTag;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasNameTag;
	// Methods
public:
	virtual ~CAvatarMegaphone();

public:
	void _dtor_0();

public:
	CAvatarMegaphone(const CAvatarMegaphone &arg0);

public:
	void _ctor_1(const CAvatarMegaphone &arg0);

public:
	CAvatarMegaphone(long nItemID, const AvatarLook &al, ZXString<char> sName, ZXString<char> s1, ZXString<char> s2, ZXString<char> s3, ZXString<char> s4, long nChannel, int32_t bWhisper);

public:
	void _ctor_0(long nItemID, const AvatarLook &al, ZXString<char> sName, ZXString<char> s1, ZXString<char> s2, ZXString<char> s3, ZXString<char> s4, long nChannel, int32_t bWhisper);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	void ByeAvatarMegaphone();

public:
	void HelloAvatarMegaphone();

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void Update();

public:
	CAvatarMegaphone &operator=(const CAvatarMegaphone &arg0);

public:
	static CAvatarMegaphone &_op_assign_12(CAvatarMegaphone *pThis, const CAvatarMegaphone &arg0);
};
STATIC_ASSERT_SIZE(CAvatarMegaphone, 720);
