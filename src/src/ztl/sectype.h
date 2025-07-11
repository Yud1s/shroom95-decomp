#ifndef ZTL_SECTYPE_H
#define ZTL_SECTYPE_H

#include <cstdint>
#include <cstdlib>
#include <exception>
#include "helper.h"
#include "util.h"

#include <iostream>

static uint32_t get_tsec_rand() {
    return rand(); // NOLINT(*-msc50-cpp)
}

constexpr uint16_t CHECKSUM_SEED = 39525;
constexpr uint8_t KEY_OFFSET = 42;


template <typename T>
class TSecData
{
public:
    T data{};
    uint8_t bKey{};
    uint8_t FakePtr1{};
    uint8_t FakePtr2{};
    uint16_t wChecksum{};
};

template <typename T>
class TSecType
{
private:
    uint32_t FakePtr1{};
    uint32_t FakePtr2{};
    TSecData<T>* _secData{};


public:
    TSecType()
    {
        _secData = new TSecData<T>();

        FakePtr1 = get_tsec_rand();
        FakePtr2 = get_tsec_rand();

        _secData->FakePtr1 = (FakePtr1 & 0xFF);
        _secData->FakePtr2 = (FakePtr2 & 0xFF);

        SetData(0);
    }

    explicit TSecType(const T op)
    {
        _secData = new TSecData<T>();

        FakePtr1 = get_tsec_rand();
        FakePtr2 = get_tsec_rand();

        _secData->FakePtr1 = (FakePtr1 & 0xFF);
        _secData->FakePtr2 = (FakePtr2 & 0xFF);

        SetData(op);
    }

    ~TSecType()
    {
        if (_secData) // NOLINT(*-delete-null-pointer)
        {
            delete _secData;
        }
    }

    operator T() // NOLINT(*-explicit-constructor)
    {
        return GetData();
    }

    explicit operator T() const // NOLINT(*-explicit-constructor)
    {
        return GetData();
    }

    bool operator==(const TSecType& other) const
    {
        return GetData() == other.GetData();
    }

    bool operator==(const T value) const
    {
        return GetData() == value;
    }

    TSecType& operator=(const T op)
    {
        SetData(op);
        return *this;
    }

    TSecType& operator=(const TSecType<T>& other) // NOLINT(*-unconventional-assign-operator, *-unhandled-self-assignment)
    {
        SetData(other.GetData());
        return *this;
    }

    T operator/=(const T div)
    {
        auto tmp = GetData() / div;
        SetData(tmp);
        return tmp;
    }

    T operator*=(const T op)
    {
        T tmp = GetData() * op;
        SetData(tmp);
        return tmp;
    }

    T operator+=(const T op)
    {
        T tmp = GetData() + op;
        SetData(tmp);
        return tmp;
    }

    T operator-=(const T op)
    {
        T tmp = GetData() - op;
        SetData(tmp);
        return tmp;
    }

    [[nodiscard]] T GetData() const
    {
        auto cs = CHECKSUM_SEED;
        auto key = _secData->bKey;
        auto data = _secData->data;

        auto d = reinterpret_cast<uint8_t*>(&data);
        for(auto i = 0; i < sizeof(T); i++) {
            key = !key ? KEY_OFFSET : key;
            auto enc = d[i];
            d[i] ^= key;
            key = key + enc + KEY_OFFSET;
            cs = ((cs >> 0xd) + key) | (cs << 3);
        }

        if (_secData->wChecksum != cs) //TODO || (FakePtr1 & 0xFF) != _secData->FakePtr1 || (FakePtr2 & 0xFF) != _secData->FakePtr2)
        {
            throw std::exception("TSecType::GetData() failed.");
        }

        return data;
    }

    void SetData(T data)
    {
        auto cs = CHECKSUM_SEED;
        uint8_t key = (get_tsec_rand() & 0xFF);
        _secData->bKey = key;
        const auto d = reinterpret_cast<uint8_t*>(&data);
        for(auto i = 0; i < sizeof(T); i++) {
            key = !key ? KEY_OFFSET : key;
            d[i] ^= key;
            key = key + d[i] + KEY_OFFSET;
            cs = ((cs >> 0xd) + key) | (cs << 3);
        }

        _secData->wChecksum = cs;
        _secData->data = data;
    }



    void _ctor_default() {
        new(this) TSecType();
    }

    void _ctor_1(const T value) {
        new(this) TSecType(value);
    }


    //TODO verify
    TSecType&  op_assign(const T value) {
        return operator=(value);
    }

    TSecType& op_assign_0(TSecType& other) {
        return operator=(other);
    }


    TSecType&  op_assign_1(const T value) {
        return operator=(value);
    }


    T op_mul_assign(const T value) {
        return operator*= (value);
    }

    T op_t() {
        return GetData();
    }

    [[nodiscard]] bool op_eq_0(const TSecType<T>& other) const {
        return GetData() == other.GetData();
    }
};
Z_ASSERT_SIZE(TSecType<long>, (sizeof(size_t) * 3));


struct SECPOINT {
    TSecType<long> y{0};
    TSecType<long> x{0};

    SECPOINT() = default;
    SECPOINT(const SECPOINT& other) = default;
    SECPOINT& operator=(const SECPOINT& other);
    SECPOINT& operator=(const tagPOINT& other);
    bool operator==(const SECPOINT& other) const;
    bool operator==(const tagPOINT& other) const;
    explicit operator tagPOINT() const;

    void _ctor_default();
    SECPOINT& op_assign_1(const SECPOINT& other);
    SECPOINT& op_assign_0(const tagPOINT& pt);
    [[nodiscard]] bool op_neq_tagpoint(const tagPOINT& pt) const;
    [[nodiscard]] tagPOINT op_tagpoint() const;
};

#endif //ZTL_SECTYPE_H

