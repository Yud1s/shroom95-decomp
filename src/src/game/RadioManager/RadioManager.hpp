// RadioManager.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Wnd/Wnd.hpp"
#include "UIToolTip/UIToolTip.hpp"

// Level: 1 0x1148e
class CUIRadio;
// Level: 1 0x114a8
class CRadioManager;

class CUIRadio : public CWnd
{
	// Nested
	// Fields
protected:
	CUIToolTip m_uiToolTip;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pOnLayer;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pOffLayer;
	// Methods
public:
	virtual ~CUIRadio();

public:
	void _dtor_0();

public:
	CUIRadio(const CUIRadio &arg0);

public:
	void _ctor_1( const CUIRadio &arg0);

public:
	CUIRadio(int32_t bMute);

public:
	void _ctor_0( int32_t bMute);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	void SetMute(int32_t bMute);

protected:
	void CreateLayer(int32_t bLeft);

public:
	CUIRadio &operator=(const CUIRadio &arg0);

public:
	static CUIRadio &_op_assign_9(CUIRadio *pThis, const CUIRadio &arg0);
};
STATIC_ASSERT_SIZE(CUIRadio, 2768);
class CRadioManager : public TSingleton<CRadioManager>
{
	// Nested
	// Fields
protected:
	unsigned long m_tLastUpdate{};

protected:
	int32_t m_bPlaying{};

protected:
	int32_t m_bMute{};

protected:
	uint32_t m_uiLastBGMVolume{};

protected:
	ZXString<char> m_sTrackName;

protected:
	_x_com_ptr<IWzProperty> m_pTrackProp;

protected:
	_x_com_ptr<IWzSound> m_pSound;

protected:
	none *m_handle{};

protected:
	ZRef<CUIRadio> m_pRadio;
	// Methods
public:
	virtual ~CRadioManager();

public:
	void _dtor_0();

public:
	CRadioManager(const CRadioManager &arg0);

public:
	void _ctor_1( const CRadioManager &arg0);

public:
	CRadioManager();

public:
	void _ctor_0();

public:
	void Update(unsigned long tCur);

public:
	void Play(ZXString<char> sTrack, unsigned long tPassSec);

public:
	void Stop(int32_t bOnComplete);

public:
	void Stop_();

public:
	void Mute(int32_t bMute);

public:
	void ShowUI(int32_t bShow);

public:
	void SetVolume(uint32_t uiVolume);

public:
	int32_t IsPlaying();

public:
	int32_t IsMute();

public:
	ZXString<char> GetTrackName();

protected:
	void MMS_Startup();

protected:
	void MMS_Shutdown();

protected:
	int32_t MMS_Play(ZXString<char> sTrack, unsigned long tPassSec);

protected:
	void MMS_Stop();

protected:
	void MMS_SetVolume(float fVolume);

public:
	CRadioManager &operator=(const CRadioManager &arg0);

public:
	static CRadioManager &_op_assign_18(CRadioManager *pThis, const CRadioManager &arg0);
};
STATIC_ASSERT_SIZE(CRadioManager, 44);
