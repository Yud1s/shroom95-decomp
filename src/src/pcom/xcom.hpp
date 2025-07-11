#pragma once

#include <iterator>
#include <comdef.h>
#include "xcom_ptr.h"

struct IWzProperty;

class EnumVariantIterator
{

public:
    using iterator_category = std::forward_iterator_tag;
    using difference_type = std::ptrdiff_t;
    using value_type = Ztl_variant_t;
    using pointer = Ztl_variant_t*;
    using reference = Ztl_variant_t&;

    EnumVariantIterator() = default;

    explicit EnumVariantIterator(_x_com_ptr<IEnumVARIANT> enumPtr)
        : _enum(std::move(enumPtr)) {
        ++(*this); // Preload the first element
    }

    reference operator*() { return _currentValue; }
    pointer operator->() { return &_currentValue; }

    EnumVariantIterator& operator++() {
        if (_enum) {
            Ztl_variant_t var;
            ULONG fetched = 0;

            if (SUCCEEDED(_enum->Next(1, &var, &fetched)) && fetched == 1) {
                _currentValue = var;
            } else {
                _currentValue = {};
                _enum = 0;
            }
        }
        return *this;
    }

    EnumVariantIterator operator++(int) { EnumVariantIterator tmp = *this; ++(*this); return tmp; }

    bool operator!=(const EnumVariantIterator& other) const {
        return _enum != other._enum;
    }

    bool operator==(const EnumVariantIterator& other) const {
        return _enum == other._enum;
    }

  private:
    _x_com_ptr<IEnumVARIANT> _enum;
    Ztl_variant_t _currentValue;
};

class EnumVariantWrapper {
public:
    explicit EnumVariantWrapper(_x_com_ptr<IEnumVARIANT> enumPtr)
        : enumVariant(std::move(enumPtr)) {}

    explicit EnumVariantWrapper(IWzProperty* prop)
    {
        IUnknown* pEnm{};
        if (prop->Get__NewEnum(&pEnm) == S_OK)
            enumVariant = pEnm;
    }

    EnumVariantIterator begin() { return EnumVariantIterator(enumVariant); }
    EnumVariantIterator end() { return {}; }

private:
    _x_com_ptr<IEnumVARIANT> enumVariant;
};