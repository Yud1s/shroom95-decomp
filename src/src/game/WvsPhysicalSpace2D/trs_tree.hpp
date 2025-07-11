//
// Created by jonas on 08.02.2025.
//

#ifndef TRS_TREE_HPP
#define TRS_TREE_HPP

#include "THST/RTree.h"
#include "THST/bbox.h"

//typedef TRSTree<long, long, 2, 5, 2> TRSTree2D;
struct I2
{
    long l{};
    long t{};
    long r{};
    long b{};
};


template<typename T>
class TFHTree
{
    struct Data {
        spatial::BoundingBox<long, 2> bbox;
        T data;
    };

    struct Indexable {
        const long *min(const Data &value) const { return value.bbox.min; }
        const long *max(const Data &value) const { return value.bbox.max; }
    };


public:
    TFHTree() : m_tree(std::make_unique<spatial::RTree<long, Data, 2, 4, 2, Indexable>>()) {}
    void _ctor_default()
    {
        new(this) TFHTree();
    }
    ~TFHTree() = default;

    void dtor()
    {
        this->~TFHTree();
    }


    int Delete(void* pos)
    {
        //TODO m_tree->remove()
        return 0;
    }


    void* InsertData(long x0, long y0, long x1, long y1, T* data)
    {
        auto minX  = std::min(x0, x1);
        auto minY  = std::min(y0, y1);
        auto maxX  = std::max(x0, x1);
        auto maxY  = std::max(y0, y1);
        long min[2] = {minX, minY};
        long max[2] = {maxX, maxY};
        m_tree->insert(Data {
            spatial::BoundingBox<long, 2>(
                min,
                max
            ),
            *data
        });
        //TODO
        return nullptr;
    }

    void raw_Search(void* pNodeEntry, const I2& i2, ZList<T>& list)
    {
        long min[2] = {i2.l, i2.t};
        long max[2] = {i2.r, i2.b};

        std::vector<Data> results;
        m_tree->query(spatial::intersects<2>(min, max), std::back_inserter(results));
        for (auto &result : results)
        {
            list.AddTail(result.data);
        }
    }

private:
    std::unique_ptr<spatial::RTree<long, Data, 2, 4, 2, Indexable>> m_tree;
    std::array<uint8_t, 52> m_padding{};
};
#endif //TRS_TREE_HPP
