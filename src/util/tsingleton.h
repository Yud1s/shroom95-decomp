#pragma once 


template <typename T>
class TSingleton
{
    public:
        static T *ms_pInstance;

    public:
        /*void _ctor_0() {
            ms_pInstance = reinterpret_cast<T*>(this);
        }*/

        void _ctor_default() {
            ms_pInstance = reinterpret_cast<T*>(this);
        }


        TSingleton() 
        {
            ms_pInstance = reinterpret_cast<T*>(this);
        }

        ~TSingleton()
        {
            ms_pInstance = nullptr;
        }

        static T* _S()
        {
            return ms_pInstance;
        }

        static T* GetInstance()
        {
            return ms_pInstance;
        }

        static T* CreateInstance()
        {
            if (ms_pInstance == nullptr)
            {
                ms_pInstance = new T();
            }
            return ms_pInstance;
        }

        static bool IsInstantiated()
        {
            return ms_pInstance != nullptr;
        }

        static void DestroyInstance()
        {
            if (ms_pInstance != nullptr)
            {
                delete ms_pInstance;
                ms_pInstance = nullptr;
            }
        }
};


template <typename T>
T* TSingleton<T>::ms_pInstance = nullptr;

template <typename T>
class TSimpleSingleton
{
   /* private:
        static T *instance;

    public:
        TSimpleSingleton() 
        {
            instance = static_cast<T*>(this);
        }*/

       public:
       TSimpleSingleton() {

       }

        static T* GetInstance()
        {
            static T instance;
            return &instance;
            //return instance;
        }
};


//template <typename T>
//T* TSimpleSingleton<T>::instance = nullptr;