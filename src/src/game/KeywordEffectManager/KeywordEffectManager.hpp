// KeywordEffectManager.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

// Level: 0 0x603f
class CKeywordEffectManager;

class CKeywordEffectManager
{
	// Nested
	// Fields
private:
	ZMap<ZXString<char>, ZRef<ZMap<long, _x_com_ptr<IWzProperty>, long>>, ZXString<char>> m_mKeywordItemIDs;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayer;
	// Methods
	CTOR_DEFAULT(CKeywordEffectManager)
public:
	~CKeywordEffectManager();

public:
	void _dtor_0();

public:
	CKeywordEffectManager(const CKeywordEffectManager &arg0);

public:
	void _ctor_1(const CKeywordEffectManager &arg0);

public:
	CKeywordEffectManager();

public:
	void _ctor_0();

public:
	static _x_com_ptr<IWzProperty> __cdecl GetKeywordEffectProp(long nItemID);

public:
	void Show(const char *szChat, _x_com_ptr<IWzVector2D> pOrigin, long base_z);

public:
	void RegisterKeyword(const char *szKeyword, long nItemID, _x_com_ptr<IWzProperty> pProp);

public:
	void ClearKeyword();

public:
	void Update();

private:
	void ShowKeywordEffect(const char *szKeyword, _x_com_ptr<IWzVector2D> pOrigin, long base_z);

public:
	CKeywordEffectManager &operator=(const CKeywordEffectManager &arg0);

public:
	static CKeywordEffectManager &_op_assign_9(CKeywordEffectManager *pThis, const CKeywordEffectManager &arg0);
};
STATIC_ASSERT_SIZE(CKeywordEffectManager, 28);
