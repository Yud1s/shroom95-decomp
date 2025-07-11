// Npc.hpp
#pragma once
#include <VecCtrlNpc/VecCtrlNpc.hpp>

#include "util/base.h"
#include "pcom/wz.h"

#include "Packet/Packet.hpp"
#include "Life/Life.hpp"
#include "NpcTemplate/NpcTemplate.hpp"
#include "AdminShopDlg/AdminShopDlg.hpp"
#include "VecCtrl/VecCtrl.hpp"
#include "ActionMan/ActionMan.hpp"

// Level: 1 0xc4f2
class CNpc;

class CNpc : public CLife
{
	// Nested
	// Fields
public:
	ZRef<CAvatar> m_pImitatedLook;

protected:
	_x_com_ptr<IWzVector2D> m_pvc;

protected:
	_x_com_ptr<IWzVector2D> m_pvcActive;

protected:
	int32_t m_bMovePathSent{};

protected:
	RANGE m_rgHorz;

protected:
	unsigned long m_dwNpcId{};

protected:
	CNpcTemplate *m_pTemplate;

protected:
	long m_nMoveAction{};

protected:
	long m_nOneTimeAction{};

protected:
	__POSITION *m_posFrame;

protected:
	long m_tFrameDelay{};

protected:
	ZArray<ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>> m_aAction;

protected:
	int32_t m_bSpecialAction{};

protected:
	ZArray<unsigned short> m_aQuest;

protected:
	ZArray<unsigned short> m_aCompleteQuest;

protected:
	ZArray<unsigned short> m_aPreStartQuest;

protected:
	ZArray<unsigned short> m_aPerformQuest;

protected:
	ZArray<unsigned short> m_aPreCompleteQuest;

protected:
	ZArray<unsigned short> m_aNearStartQuest;

protected:
	long m_nQuestState{};

protected:
	long m_nLastQuestState{};

protected:
	long m_tWaitTimeForNextActionOrChat{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerAction;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerDcMark;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerQuestInfo;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerEffect;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerMapleTV;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerMapleTVDefaultAnimation;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerMapleTVMSGIntermission;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerMapleTVMSGBasicUI;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerMapleTVSoleBGAnimation;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerMapleTVLoveBGAnimation;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasMapleTV;

protected:
	_x_com_ptr<IWzFont> m_pFont;

protected:
	long m_nMapleTVMessageID{};

protected:
	ZRef<CAvatar> m_pAvatarSender;

protected:
	ZRef<CAvatar> m_pAvatarReceiver;

protected:
	unsigned long m_tMapleTVElapsedTime{};

protected:
	int32_t m_bCurSoloTVAni{};

protected:
	int32_t m_bCurLoveTVAni{};

protected:
	int32_t m_bEnabled{};

protected:
	tagPOINT m_ptBalloonOffset{};

protected:
	ZArray<ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>> m_aClientAction;

protected:
	long m_nClientActionIdx{};

protected:
	long m_nClientActionIdx_Old{};

protected:
	int32_t m_bHideToLocalUser{};

protected:
	int32_t m_bShowEtc{};

private:
	ZRef<CAttrShoe> m_pAttrShoe;

private:
	tagPOINT m_ptPos{};

private:
	tagPOINT m_ptPosPrev{};

private:
	tagRECT m_rcNPC{};

private:
	tagRECT m_rcQuestNPC{};
	// Methods
public:
	virtual ~CNpc();

public:
	void _dtor_0();

public:
	CNpc(const CNpc &arg0);

public:
	void _ctor_1(const CNpc &arg0);

public:
	CNpc(CNpcTemplate *pNpcTemplate, unsigned long dwID);

public:
	void _ctor_0(CNpcTemplate *pNpcTemplate, unsigned long dwID);

public:
	unsigned long GetNpcId();

public:
	void Init(unsigned long dwNpcId, CInPacket &iPacket);

public:
	void SetActive(int32_t bActive);

public:
	unsigned long GetTemplateID();

public:
	int32_t IsQuestNpc();

public:
	long GetQuestState();

public:
	long GetMoveAction();

public:
	void SetMoveAction(long nMA, int32_t bReload);

public:
	int32_t IsOnPlayingOneTimeAction();

public:
	long GetOneTimeAction();

public:
	void ResetOneTimeAction();

public:
	long GetCurrentAction(long *pnDir);

public:
	ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>> &GetActionFrameList(long nAction);

public:
	const tagRECT &GetDCRange();

public:
	const tagRECT &GetQuestDCRange();

public:
	void SetShoeAttr();

public:
	void OnChat(Ztl_bstr_t bsText);

public:
	void ShowQuestList();

public:
	virtual void Update();

public:
	void UpdateScript(_SYSTEMTIME st) const;

public:
	void SetMapleTVMessage();

public:
	void DrawMapleTVMessage();

public:
	void SetImitatedLook(AvatarLook &al);

public:
	int32_t IsImitated() const;

public:
	int32_t IsEnabled() const;

public:
	int32_t IsHideToLocalUser() const;

public:
	void RequestSpecialAction(ZXString<char> sAction);

public:
	void SetQuestList(int32_t bReload);

public:
	void SetAcceptQuestOnlyOne(uint16_t usQuestID);

public:
	void SetCompletedQuestOnlyOne(uint16_t usQuestID);

public:
	virtual long GetType();

public:
	virtual long OnResolveMoveAction(long nInputX, long nInputY, long nCurMoveAction, const CVecCtrl *pvc);

public:
	virtual void OnLayerZChanged(const CVecCtrl *pvc);

public:
	virtual const ZRef<CAttrShoe> GetShoeAttr();

public:
	virtual const tagPOINT GetPos();

public:
	virtual const tagPOINT GetPosPrev();

public:
	virtual long GetZMass();

public:
	void OnMove(CInPacket &iPacket);

public:
	void OnSetSpecialAction(CInPacket &iPacket);

public:
	void OnUpdateLimitedInfo(CInPacket &iPacket);

protected:
	void SetWaitTimeForNextActionOrChat();

protected:
	int32_t DoActionOrChat(long &nAction, long &nChatIdx);

protected:
	void PrepareActionLayer();

protected:
	void SetLayerZ();

protected:
	long MoveAction2RawAction(long arg0, long *arg1);

protected:
	void GenerateMovePath(long nAction, long nChatIdx);

protected:
	void RestoreLayers();

protected:
	void ViewOrHide(int32_t bView, int32_t bViewNameTag);

public:
	void SetClientActionByQuest();

	CVecCtrlNpc* GetVecCtrlNpc();

	CLASS_RTTI_(CNpc, CLife);

public:
	CNpc &operator=(const CNpc &arg0);

public:
	static CNpc &_op_assign_55(CNpc *pThis, const CNpc &arg0);
};
STATIC_ASSERT_SIZE(CNpc, 400);

CNpc *__cdecl CreateNpc(CNpcTemplate *pNpcTemplate, unsigned long dwID);
