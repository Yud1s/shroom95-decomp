//
//

#ifndef GMS95_REGEN_CRTTI_H
#define GMS95_REGEN_CRTTI_H

class CRTTI
{
public:
    const CRTTI* m_pPrev{};
    // Methods
    constexpr explicit CRTTI(const CRTTI* prev = nullptr) : m_pPrev(prev)
    {
    }

    bool IsKindOf(const CRTTI* arg0) const
    {
        auto p = this;
        while (p)
        {
            if (p == arg0)
            {
                return true;
            }
            p = p->m_pPrev;
        }

        return false;
    }

    template <typename T, typename U>
    static T* DynamicCast(U* p)
    {
        if (p->GetRTTI()->IsKindOf(U::GetClassRTTI()))
        {
            return dynamic_cast<T*>(p);
        }
        return nullptr;
    }
};

// STATIC_ASSERT_SIZE(CRTTI, 4);

#define CLASS_RTTI(CLASS)                                                            \
public:                                                                              \
    static constexpr CRTTI ms_RTTI_##CLASS = CRTTI(nullptr);                         \
    virtual const CRTTI *GetRTTI() { return &ms_RTTI_##CLASS; }                      \
    virtual bool IsKindOf(const CRTTI *pRTTI) { return GetRTTI()->IsKindOf(pRTTI); } \
    static const CRTTI *__cdecl GetClassRTTI() { return &ms_RTTI_##CLASS; }

#define CLASS_RTTI_(CLASS, __BASE_CLASS__)                                                        \
public:                                                                                           \
    static constexpr CRTTI ms_RTTI_##CLASS = CRTTI(&__BASE_CLASS__## ::ms_RTTI_##__BASE_CLASS__); \
    virtual const CRTTI *GetRTTI() { return &ms_RTTI_##CLASS; }                                   \
    virtual bool IsKindOf(const CRTTI *pRTTI) { return GetRTTI()->IsKindOf(pRTTI); }              \
    static const CRTTI *__cdecl GetClassRTTI() { return &ms_RTTI_##CLASS; }

#endif //GMS95_REGEN_CRTTI_H
