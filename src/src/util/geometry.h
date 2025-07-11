#pragma once

#include "base.h"

namespace Geometry
{
    class InclusionChecker
    {
    public:
        class Line
        { /* Size=0x10 */
            /* 0x0000 */ private:
            int32_t y{};
            /* 0x0004 */ private:
            int32_t x1{};
            /* 0x0008 */ private:
            int32_t x2{};
            /* 0x000c */ private:
            bool bOpen{};

            public: Line(int32_t y, int32_t x1, int32_t x2, bool bOpen) {
                this->y = y;
                this->x1 = x1;
                this->x2 = x2;
                this->bOpen = bOpen;
            }
            public: Line() {
                this->y = 0;
                this->x1 = 0;
                this->x2 = 0;
                this->bOpen = false;
            }
            public: int32_t GetY() const{
                return this->y;
            }
            public: int32_t GetX1() const {
                return this->x1;
            }
            public: int32_t GetX2() const {
                return this->x2;
            }
            public: bool IsOpen() const {
                return this->bOpen;
            }
            public: bool operator<(const Geometry::InclusionChecker::Line&) const  {
                //TODO
                return false;
            }

        };

        /* Size=0x18 */
        /* 0x0000 */ private:
        ZArray<tagRECT> vecRect;
        /* 0x0004 */ private:
        ZArray<int> vecX;
        /* 0x0008 */ private:
        ZArray<int> vecY;
        /* 0x000c */ private:
        ZArray<ZArray<bool>> vvArea;
        /* 0x0010 */ private:
        ZFatalSection m_lock;

        public: InclusionChecker() {

        }
        public: void AddToArea(const tagRECT* rects, int32_t n) {
            // TODO lock
            for(int32_t i = 0; i < n; i++) {
                this->_AddToArea(rects[i]);
            }

            this->MakeArea();


        }
        public: void _AddToArea(const tagRECT& rect) {
            //this->vecRect.InsertBefore(-1) = rect;

        }
        public: void ClearArea() {

        }
        public: bool IsInArea(int32_t, int32_t) const {
            return false;
        }
        public: bool IsInArea(const tagPOINT& point) const {
            return this->IsInArea(point.x, point.y);
        
        }
        private: void MakeArea() {
            //TODO
        }

        public: static void SortAndUnique(ZArray<int>&) {
            //TODO
        }
    };
}