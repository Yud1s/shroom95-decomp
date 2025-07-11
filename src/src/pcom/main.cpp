#include <WinSock2.h>
#include <windows.h>
#include <iostream>

#include "wz/IWzVector2D.h"
#include "wz/IWzProperty.h"
#include "xcom_ptr.h"
#include "PCom.h"
#include "spdlog/include/spdlog/spdlog.h"

const wchar_t *LOAD_PATH = L"/home/jonas/shared_vm/maplestory";
const wchar_t *PCOM_PATH = L"/home/jonas/shared_vm/maplestory/PCOM.dll";


// Small test tool for pcom

int main() {
    if (PcInitialize(PCOM_PATH) < 0) {
        spdlog::error("Failed to initialize PCOM");
        return 1;
    }


    auto vec = G_PCOM.CreateObjectPtr<IWzVector2D>(L"Shape2D#Vector2D");

    auto rr = vec->AddRef();
    auto rr1 = vec->Release();
    std::cout << "Ref: " << rr << ", Release: " << rr1 << std::endl;

    vec->put_x(10);
    vec->put_y(20);
    auto x = vec->Getx();
    auto y = vec->Gety();
    std::cout << "x: " << x << ", y: " << y << std::endl;

    auto t = vec->GetcurrentTime();
    std::cout << "Current time: " << t << std::endl;

    variant_t time(100);
    //vec->RelMove(10, 20, time, 1);

    vec->put_currentTime(200);

    auto time2 = vec->GetcurrentTime();
    x = vec->Getx();
    y = vec->Gety();
    std::cout << "x: " << x << ", y: " << y << ", time: " << time2 << std::endl;

    auto r = vec->AddRef();
    auto r1 = vec->Release();
    std::cout << "Ref: " << r << ", Release: " << r1 << std::endl;

    PcUninitialize();
    return 0;
}