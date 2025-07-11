// PetTemplate.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

// Level: 0 0xba11
class CPetTemplate;

class CPetTemplate
{
	// Nested
public:
	struct ACTION
	{
		// Nested
		// Fields
	public:
		Ztl_bstr_t bsAction;

	public:
		ZArray<Ztl_bstr_t> absSpeak;
		// Methods
	public:
		~ACTION();

	public:
		void _dtor_0();

	public:
		ACTION(const CPetTemplate::ACTION &arg0);

	public:
		void _ctor_1( const CPetTemplate::ACTION &arg0);

	public:
		ACTION();

	public:
		void _ctor_0();

	public:
		CPetTemplate::ACTION &operator=(const CPetTemplate::ACTION &arg0);

	public:
		static CPetTemplate::ACTION &_op_assign_3(CPetTemplate::ACTION *pThis, const CPetTemplate::ACTION &arg0);
	};

public:
	struct INTERACTION
	{
		// Nested
		// Fields
	public:
		RANGE rgLevel;

	public:
		long nFriendnessInc{};

	public:
		long nProb{};

	public:
		ZArray<ZXString<char>> asCommand;

	public:
		ZArray<CPetTemplate::ACTION> actSuccess;

	public:
		ZArray<CPetTemplate::ACTION> actFail;
		// Methods
	public:
		~INTERACTION();

	public:
		void _dtor_0();

	public:
		INTERACTION(const CPetTemplate::INTERACTION &arg0);

	public:
		void _ctor_1( const CPetTemplate::INTERACTION &arg0);

	public:
		INTERACTION();

	public:
		void _ctor_0();

	public:
		CPetTemplate::INTERACTION &operator=(const CPetTemplate::INTERACTION &arg0);

	public:
		static CPetTemplate::INTERACTION &_op_assign_3(CPetTemplate::INTERACTION *pThis, const CPetTemplate::INTERACTION &arg0);
	};

public:
	struct FOODREACTION
	{
		// Nested
		// Fields
	public:
		RANGE rgLevel;

	public:
		ZArray<CPetTemplate::ACTION> actSuccess;

	public:
		ZArray<CPetTemplate::ACTION> actFail;
		// Methods
	public:
		~FOODREACTION();

	public:
		void _dtor_0();

	public:
		FOODREACTION(const CPetTemplate::FOODREACTION &arg0);

	public:
		void _ctor_1( const CPetTemplate::FOODREACTION &arg0);

	public:
		FOODREACTION();

	public:
		void _ctor_0();

	public:
		CPetTemplate::FOODREACTION &operator=(const CPetTemplate::FOODREACTION &arg0);

	public:
		static CPetTemplate::FOODREACTION &_op_assign_3(CPetTemplate::FOODREACTION *pThis, const CPetTemplate::FOODREACTION &arg0);
	};

public:
	struct SLANGREACTION
	{
		// Nested
		// Fields
	public:
		RANGE rgLevel;

	public:
		ZArray<CPetTemplate::ACTION> act;
		// Methods
	public:
		~SLANGREACTION();

	public:
		void _dtor_0();

	public:
		SLANGREACTION(const CPetTemplate::SLANGREACTION &arg0);

	public:
		void _ctor_1( const CPetTemplate::SLANGREACTION &arg0);

	public:
		SLANGREACTION();

	public:
		void _ctor_0();

	public:
		CPetTemplate::SLANGREACTION &operator=(const CPetTemplate::SLANGREACTION &arg0);

	public:
		static CPetTemplate::SLANGREACTION &_op_assign_3(CPetTemplate::SLANGREACTION *pThis, const CPetTemplate::SLANGREACTION &arg0);
	};

public:
	struct RANDOMACTION
	{
		// Nested
		// Fields
	public:
		RANGE rgLevel;

	public:
		ZArray<CPetTemplate::ACTION> act;
		// Methods
	public:
		~RANDOMACTION();

	public:
		void _dtor_0();

	public:
		RANDOMACTION(const CPetTemplate::RANDOMACTION &arg0);

	public:
		void _ctor_1( const CPetTemplate::RANDOMACTION &arg0);

	public:
		RANDOMACTION();

	public:
		void _ctor_0();

	public:
		CPetTemplate::RANDOMACTION &operator=(const CPetTemplate::RANDOMACTION &arg0);

	public:
		static CPetTemplate::RANDOMACTION &_op_assign_3(CPetTemplate::RANDOMACTION *pThis, const CPetTemplate::RANDOMACTION &arg0);
	};

public:
	static ZMap<long,ZRef<CPetTemplate>,long> ms_mPetTemplate;
	// Fields
public:
	unsigned long dwTemplateID{};

public:
	ZXString<char> sName;

public:
	long nMoveAbility{};

public:
	long nHungry{};

public:
	long nNameTag{};

public:
	long nChatBalloon{};

public:
	int32_t bPickUpItem{};

public:
	int32_t bConsumeHP{};

public:
	int32_t bConsumeMP{};

public:
	int32_t bSweepForDrop{};

public:
	int32_t bLongRange{};

public:
	int32_t bIgnorePickup{};

public:
	int32_t bRecall{};

public:
	int32_t bAutoSpeaking{};

public:
	int32_t bAutoReact{};

public:
	ZArray<Ztl_bstr_t> absAction;

public:
	int32_t bInterActByUserAction{};

protected:
	long m_nInteractions{};

protected:
	ZArray<CPetTemplate::INTERACTION> m_aInteraction;

protected:
	ZArray<CPetTemplate::FOODREACTION> m_aFoodReaction;

protected:
	ZArray<CPetTemplate::SLANGREACTION> m_aSlangReaction;

protected:
	ZArray<CPetTemplate::RANDOMACTION> m_aRandomReaction;

protected:
	ZArray<long> m_aFavoriteItem;

protected:
	ZArray<long> m_aUnfavoriteItem;

protected:
	ZArray<ZXString<char>> m_aAutoSpeakingByEvent;

protected:
	ZArray<ZXString<char>> m_aAutoSpeaking;
	// Methods
public:
	~CPetTemplate();

public:
	void _dtor_0();

public:
	CPetTemplate(const CPetTemplate &arg0);

public:
	void _ctor_1( const CPetTemplate &arg0);

public:
	CPetTemplate();

public:
	void _ctor_0();

public:
	long GetTemplateID();

public:
	long GetInteractions();

public:
	long GetFoodReactions();

public:
	long GetSlangReactions();

public:
	long GetRandomReactions();

public:
	Ztl_bstr_t GetActionName(long nAction);

public:
	long GetActionNo(Ztl_bstr_t sAction);

public:
	const CPetTemplate::INTERACTION &GetInteraction(long arg0);

public:
	const CPetTemplate::FOODREACTION &GetFoodReaction(long arg0);

public:
	const CPetTemplate::SLANGREACTION &GetSlangReaction(long arg0);

public:
	const CPetTemplate::RANDOMACTION &GetRandomReaction(long arg0);

public:
	int32_t IsAutoReact();

public:
	static ZXString<char> __cdecl GetSkillName(long arg0);

public:
	ZXString<char> GetAutoSpeakingByEvent(long nEvent);

public:
	ZXString<char> GetAutoSpeakingByRandom();

public:
	const ZArray<long> &GetFavoriteItems();

public:
	const ZArray<long> &GetUnfavoriteItems();

public:
	static void __cdecl Load();

public:
	static void __cdecl Unload();

public:
	static CPetTemplate *__cdecl GetPetTemplate(unsigned long dwTemplateID);

protected:
	static int32_t __cdecl RegisterPet(unsigned long arg0, _x_com_ptr<IWzProperty> arg1, _x_com_ptr<IWzProperty> arg2);

public:
	CPetTemplate &operator=(const CPetTemplate &arg0);

public:
	static CPetTemplate &_op_assign_24(CPetTemplate *pThis, const CPetTemplate &arg0);
};
STATIC_ASSERT_SIZE(CPetTemplate, 104);
