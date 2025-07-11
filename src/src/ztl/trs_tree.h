#pragma once

#include "util.h"

#include <algorithm>
#include <cstddef> // Include for size_t
#include <cstdint> // Include for int32_t
#include "zlist.h"
#include <cassert>

#include "zref.h"

template<typename Coord, typename Data, size_t MinE, size_t E, size_t Dim>
class TRSTree {

public:
    struct VectorData {
        Coord x0;
        Coord y0;
        Coord x1;
        Coord y1;
        ZRef<Data> data;

        VectorData() : x0(0), y0(0), x1(0), y1(0), data(nullptr) {}

        VectorData(Coord x0, Coord y0, Coord x1, Coord y1, ZRef<Data> d) : x0(x0), y0(y0), x1(x1), y1(y1), data(d) {}
    };

    struct I2 {
        Coord l;
        Coord t;
        Coord r;
        Coord b;

        I2() : l(0), t(0), r(0), b(0) {}

        I2(Coord l, Coord t, Coord r, Coord b) : l(l), t(t), r(r), b(b) {}

        void SetFromVec(Coord x0, Coord y0, Coord x1, Coord y1) {
            l = x0;
            t = y0;
            r = x1;
            b = y1;
        }


        bool IsContaining(const I2 &other) {
            return l <= other.l && t <= other.t && r >= other.r && b >= other.b;
        }

        void Union(const I2 &first, const I2 &second) {
            this->l = 0;//std::min(first.l, second.l);
            this->t = 0;//std::min(first.t, second.t);
            this->r = 0;//TODO std::max(first.r, second.r);
            this->b = 0;//TODDO std::max(first.b, second.b);
        }

        bool IsOverlap(const I2 &other) {
            //TODO
            return l <= other.r && r >= other.l && t <= other.b && b >= other.t;
        }

        bool Overlap(const I2 &first, const I2 &second) {
            return first.l <= second.r && first.r >= second.l && first.t <= second.b && first.b >= second.t;
        }

        Coord Area() {
            return (r - l) * (b - t);
        }
    };

    struct Node {
        struct Entry {
            I2 i;
            ZRef<VectorData> data;
            Node *child;
        };


        union {
            Node *parent;
            Node *av_next;
        };
        int level{};
        Entry entries[E + 1];
        int count{};
        // TODO might be int
        bool valid_mbr{};
        I2 mbr;


        void InitNode(int lvl) {
            this->level = level;
            this->count = 0;
            this->valid_mbr = false;
            this->mbr.SetFromVec(0, 0, 0, 0);
            this->parent = nullptr;
            this->av_next = nullptr;
        }

        int GetCount() {
            return this->count;
        }

        Entry *GetFirstEntry() {
            return &this->entries[0];
        }

        Entry *GetEntry(size_t index) {
            return &this->entries[index];
        }

        Node *GetParent() {
            return this->parent;
        }

        int GetLevel() {
            return this->level;
        }

        bool IsLeaf() {
            //TODO
            return this->level == 0;
        }

        void InsertEntry(const Entry &entry) {
            this->entries[this->count] = entry;
            this->count++;

            if (level > 0) {
                entry.child->parent = this;
            }

            if (count == 1) {
                valid_mbr = true;
                mbr = entry.i;
            }
            if (valid_mbr) {
                mbr.Union(mbr, entry.i);
            }
        }

        void RemoveAllEntries() {
            // Delete all entries
            for (int i = 0; i < count; i++) {
                //TODO
                entries[i].data = nullptr;
                entries[i].child = nullptr;
            }


            this->count = 0;
            this->valid_mbr = false;
            this->mbr.SetFromVec(0, 0, 0, 0);
        }

        void DeleteEntry(size_t index) {
            auto last = this->count - 1;
            if (index != last) {
                this->entries[index] = this->entries[last];
            }
            valid_mbr = false;
            count--;
            this->entries[last].child = nullptr;
        }

        Entry *FindNodeEntry(const Node *node) {
            //TODO
            for (int i = 0; i < count; i++) {
                if (entries[i].child == node) {
                    return &entries[i];
                }
            }
            return nullptr;
        }

        size_t FindEntryIndex(const Node *node) {
            //TODO
            for (int i = 0; i < count; i++) {
                if (entries[i].child == node) {
                    return i;
                }
            }
            return SIZE_MAX;
        }

        I2 &GetMBR() {
            return mbr;
        }

        void RecalcMBR() {
            //TODO
            valid_mbr = false;
            for (int i = 0; i < count; i++) {
                if (!valid_mbr) {
                    mbr = entries[i].i;
                    valid_mbr = true;
                } else {
                    mbr.Union(mbr, entries[i].i);
                }
            }
        }

        void UpdateEntryMBR(size_t index, const I2 &newMBR) {
            //TODO
            entries[index].i = newMBR;
            if (index == 0) {
                mbr = newMBR;
            } else {
                mbr.Union(mbr, newMBR);
            }
        }


    };

public:
    TRSTree()
    = default;

    void _ctor_default() {
        new(this) TRSTree();
    }

    virtual ~TRSTree()
    = default;

    void *InsertData(int x0, int y0, int x1, int y1, ZRef<Data> data) {
        VectorData vecData(x0, y0, x1, y1, data);
        //m_lpVecData.push_back(vecData);
        return nullptr;
    }

    bool Delete(void *pos) {
        return false;
    }

    void Search(int x0, int y0, int x1, int y1, ZList<ZRef<Data>> &result) {
        I2 searchRect(x0, y0, x1, y1);
        //Search(m_pRoot, searchRect, result);
        //TODO
    }

    size_t GetHeight() {
        //TODO
        return 0;
    }

protected:
    bool raw_CheckAllMBR(Node *node) {
        //TODO
        return false;
    }

    void raw_AdjustTree(Node *node, const I2 *i2) {
        //TODO
    }

    void raw_Insert(const Node &node, ZList<int> &list, int level) {
        //TODO
    }

    Node *raw_ChooseSubTree(const I2 &i2, int level) {
        //TODO
        return nullptr;
    }

    Node *raw_OverflowTreatment(Node *node, ZList<int> &list) {
        //TODO
        return nullptr;
    }

    Node *raw_SplitNode(Node *node) {
        //TODO
        return nullptr;
    }

    void raw_Reinsert(Node *node, ZList<int> &list) {
        //TODO
    }

    void raw_Search(const Node *node, const I2 &i2, ZList<ZRef<Data>> &result) {
        //TODO
    }

    bool raw_Delete(const ZRef<VectorData> &data) {
        //TODO
        return false;
    }

    Node *FindLeaf(const Node *node, const I2 &i2, const ZRef<VectorData> &data, bool &found) {
        //TODO
        return nullptr;
    }

    void raw_CondenseTree(Node *node) {
        //TODO
    }

    bool IsRootNode(const Node *node) {
        return node == m_pRoot;
    }

    Node *AllocNode(int level) {
        //TODO
        Node *node = m_pAvNodeHead;
        if (node) {
            m_pAvNodeHead = node->av_next;
        } else {
            node = new Node();
        }
        node->InitNode(level);
        //m_allNodes.push_back(node);
        return node;
    }

private:
    ZList<TRSTree::Node> m_allNodes;
    TRSTree::Node *m_pAvNodeHead;
    TRSTree::Node *m_pRoot;
    int32_t m_nCount{};
    ZList<TRSTree::VectorData> m_lpVecData;

};

typedef TRSTree<long, long, 2, 5, 2> TRSTree2D;
Z_ASSERT_SIZE(TRSTree2D, 0x38);