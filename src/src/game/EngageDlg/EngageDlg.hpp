// EngageDlg.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "AdminShopDlg/AdminShopDlg.hpp"

// Level: 1 0xea3d
class CEngageDlg;

class CEngageDlg : public CUniqueModeless
{
	// Nested
public:
enum  ID_CTRL_EDIT_INPUT
{
	ID_CTRL_EDIT_INPUT = 3000
};
enum  UnnamedEnum46541
{
	TH = 20,
	CH = 16,
	SH = 15
};

	// Fields
protected:
	long m_nHorzMax{};

protected:
	ZXString<char> m_sMsgDefault;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	ZArray<ZXString<char>> m_aMsg;

protected:
	int32_t m_bNoEnterInput{};
	// Methods
public:
	virtual ~CEngageDlg();

public:
	void _dtor_0();

public:
	CEngageDlg(const CEngageDlg &arg0);

public:
	void _ctor_1( const CEngageDlg &arg0);

public:
	CEngageDlg();

public:
	void _ctor_0();

public:
	virtual void PreCreateWnd(long l, long t, long w, long h, long z, int32_t bScreenCoord, void *pData);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void SetRet(long nRet);

public:
	void OnProposeAccepted();

public:
	void OnProposeRefused();

public:
	void SetUtilDlg(long arg0, ZXString<char> arg1, const wchar_t *arg2, int32_t arg3, int32_t arg4);

protected:
	long GetTextTileCount();
	CLASS_RTTI_(CEngageDlg, CUniqueModeless);

public:
	CEngageDlg &operator=(const CEngageDlg &arg0);

public:
	static CEngageDlg &_op_assign_14(CEngageDlg *pThis, const CEngageDlg &arg0);
};
STATIC_ASSERT_SIZE(CEngageDlg, 172);
