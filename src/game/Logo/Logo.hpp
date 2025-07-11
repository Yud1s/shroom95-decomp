// Logo.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Stage/Stage.hpp"

// Level: 1 0x1177e
class CLogo;

class CLogo : public CStage
{
	// Nested
public:
	enum VIDEO_STATE
{
	VIDEO_STATE_UNAVAILABLE = 0,
	VIDEO_STATE_OPENING = 1,
	VIDEO_STATE_READY = 2,
	VIDEO_STATE_PLAYING = 3,
	VIDEO_STATE_FADEOUT = 4,
	VIDEO_STATE_END = 5
};

	// Fields
protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerBackground;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerMain;

protected:
	_x_com_ptr<IWzProperty> m_pLogoProp;

protected:
	long m_nLogoCount{};

protected:
	unsigned long m_dwTickInitial{};

protected:
	unsigned long m_dwClick{};

protected:
	int32_t m_bLogoSoundPlayed{};

protected:
	int32_t m_bWZInit{};

protected:
	int32_t m_bNXFadeIn{};

protected:
	int32_t m_bNXFadeOut{};

private:
	int32_t m_bVideoMode{};

private:
	CLogo::VIDEO_STATE m_videoState{};
	// Methods
public:
	virtual ~CLogo();

public:
	void _dtor_0();

public:
	CLogo(const CLogo &arg0);

public:
	void _ctor_1( const CLogo &arg0);
	CTOR_DEFAULT(CLogo);

public:
	CLogo();

public:
	void _ctor_0();

public:
	virtual void Init(void *pParam);

public:
	virtual void Close();

public:
	virtual void Update();

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	bool CanSkip() const;

protected:
	void InitWZLogo();

protected:
	void DrawWZLogo(long nFrame);

protected:
	void LogoEnd();

protected:
	void ForcedEnd();

protected:
	void InitNXLogo();

protected:
	void DrawNXLogo(long nFrame);

private:
	void UpdateLogo();

private:
	void UpdateVideo();
	CLASS_RTTI_(CLogo, CStage);

public:
	CLogo &operator=(const CLogo &arg0);

public:
	static CLogo &_op_assign_21(CLogo *pThis, const CLogo &arg0);
};
STATIC_ASSERT_SIZE(CLogo, 72);

