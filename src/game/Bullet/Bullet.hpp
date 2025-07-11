// Bullet.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

// Level: 1 0x477d
class CBullet;
// Level: 1 0x47b2
class CFadeoutBullet;

class CBullet : public ZRefCounted
{
	// Nested
	// Fields
private:
	_x_com_ptr<IWzVector2D> m_pOrigin;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayer;

private:
	int32_t m_bClockwise{};

private:
	long m_tStart{};

private:
	long m_tEnd{};

private:
	tagPOINT m_ptStart{};

private:
	tagPOINT m_ptEnd{};

private:
	_x_com_ptr<IWzVector2D> m_pVecTarget;
	// Methods
public:
	virtual ~CBullet();

public:
	void _dtor_0();

public:
	CBullet()
	{
	}

public:
	CBullet(const CBullet &arg0);

public:
	void _ctor_1( const CBullet &arg0);

public:
	CBullet(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd, _x_com_ptr<IWzVector2D> pVecTarget);

public:
	void _ctor_0( long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd, _x_com_ptr<IWzVector2D> pVecTarget);

public:
	int32_t NeedsUpdate(long tCur);

public:
	int32_t Initialize();

public:
	int32_t CallUpdate(long tCur);

protected:
	virtual _x_com_ptr<IWzVector2D> CreateBulletOrigin();

protected:
	virtual _x_com_ptr<IWzGr2DLayer> PrepareBulletLayer(_x_com_ptr<IWzVector2D> arg0, int32_t arg1);

protected:
	virtual int32_t Update(long tCur);

protected:
	_x_com_ptr<IWzGr2DLayer> GetLayer();

protected:
	_x_com_ptr<IWzVector2D> GetOrigin();

protected:
	int32_t IsClockwise();

protected:
	_x_com_ptr<IWzVector2D> GetVecTarget();

protected:
	long GetStartTime();

protected:
	long GetEndTime();

public:
	CBullet &operator=(const CBullet &arg0);

public:
	static CBullet &_op_assign_15(CBullet *pThis, const CBullet &arg0);
};
STATIC_ASSERT_SIZE(CBullet, 52);

template <typename T>
class BulletContainer
{

public:
	struct CallUpdateFunc
	{
		long m_tCur{};
		CallUpdateFunc(long tCur) : m_tCur(tCur) {}

		int32_t operator()(T& p)
		{
			return p.CallUpdate(m_tCur);
		}
	};

	struct OnRemovedFunc
	{
		OnRemovedFunc() {}

		int32_t operator()(T& p)
		{
			p.OnRemoved();
			return 0;
		}
	};

private:
	ZList<ZRef<T>> m_lList;

public:
	virtual ~BulletContainer()
	{
	}

public:
	void Insert(ZRef<T> bullet)
	{
		m_lList.Insert(bullet);
	}

public:
	void RemoveAll()
	{
		m_lList.RemoveAll();
	}

public:
	void Update(int32_t)
	{
	}

public:
	template <typename FN>
	void CallUpdate(FN f)
	{
		auto cur = m_lList.GetHeadPosition();
		while (cur)
		{
			auto p = m_lList.GetNext(cur);
			if (f(*p->op_arrow()))
				m_lList.RemoveAt(p);
		}
	}


	// CallUpdate<BulletContainer<T>::CallUpdateFunc>
	void CallUpdate_T(CallUpdateFunc f)
	{
		CallUpdate<CallUpdateFunc>(f);
	}

	// CallUpdate<T::OnRemovedFunc>
	// TODO T::OnRemovedFunc f
	void CallUpdate_RemoveT(OnRemovedFunc f)
	{
		CallUpdate<BulletContainer::OnRemovedFunc>(f);
	}

	// CallUpdate<T::ProcessAttackFunc>
	//TODO T::ProcessAttackFunc f
	void CallUpdate_ProcessT()
	{
		//CallUpdate<T::ProcessAttackFunc>(f);
	}
};

STATIC_ASSERT_SIZE(BulletContainer<CBullet>, 0x18);

class CFadeoutBullet : public CBullet
{
	// Nested
public:
	class Container : public BulletContainer<CFadeoutBullet>
	{
		// Nested
		// Fields
		// Methods
	public:
		virtual ~Container();

	public:
		void _dtor_0();

	public:
		Container(const CFadeoutBullet::Container &arg0);

	public:
		void _ctor_1( const CFadeoutBullet::Container &arg0);

	public:
		Container();

	public:
		void _ctor_0();

	public:
		void OnRemoved();

	public:
		CFadeoutBullet::Container &operator=(const CFadeoutBullet::Container &arg0);

	public:
		static CFadeoutBullet::Container &_op_assign_4(CFadeoutBullet::Container *pThis, const CFadeoutBullet::Container &arg0);
	};

public:
	struct OnRemovedFunc
	{
		// Nested
		// Fields
		// Methods
	public:
		int32_t operator()(CFadeoutBullet &arg0);

	public:
		static int32_t _op_call_0(CFadeoutBullet::OnRemovedFunc *pThis, CFadeoutBullet &arg0);
	};
	// Fields
	// Methods
public:
	CFadeoutBullet() {}

public:
	virtual ~CFadeoutBullet();

public:
	void _dtor_0();

public:
	CFadeoutBullet(const CFadeoutBullet &arg0);

public:
	void _ctor_1( const CFadeoutBullet &arg0);

public:
	CFadeoutBullet(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd, _x_com_ptr<IWzVector2D> pVecTarget);

public:
	void _ctor_0( long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd, _x_com_ptr<IWzVector2D> pVecTarget);

public:
	void OnRemoved();

protected:
	virtual int32_t Update(long tCur);

private:
	void Fadeout(long tEnd);

public:
	CFadeoutBullet &operator=(const CFadeoutBullet &arg0);

public:
	static CFadeoutBullet &_op_assign_6(CFadeoutBullet *pThis, const CFadeoutBullet &arg0);
};
STATIC_ASSERT_SIZE(CFadeoutBullet, 52);


