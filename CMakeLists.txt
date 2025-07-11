cmake_minimum_required(VERSION 3.25)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set(CMAKE_POSITION_INDEPENDENT_CODE TRUE)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /w44733 /EHsc")
set(CMake_MSVC_PARALLEL ON)
add_definitions(-DWIN32_LEAN_AND_MEAN)

include(FetchContent)


project(
        gms95-regen
        VERSION 1.0
        LANGUAGES CXX)

add_subdirectory("${CMAKE_SOURCE_DIR}/lib/spdlog")

include_directories(src)
include_directories(src/ztl)
include_directories(src/util)
include_directories(src/game)
include_directories(src/global)
include_directories(src/ext)
include_directories(lib)


add_executable(gms95-regen src/main.cpp)

add_library(game95
        src/util/imports.cpp
        src/util/helper.cpp
        src/game/WvsPhysicalSpace2D/trs_tree.hpp
        src/game/WvsPhysicalSpace2D/rtree.hpp
)


add_dependencies(${PROJECT_NAME} spdlog)

add_subdirectory(src/ztl)
add_subdirectory(src/game)
add_subdirectory(src/ext)
add_subdirectory(src/pcom)
add_subdirectory(tests)
#todo dinput

add_definitions(-DNOMINMAX)
include_directories(lib/THST/include)

if (WIN32)
    target_link_libraries(game95 wsock32 ws2_32 winmm Imm32 Wininet Iphlpapi Netapi32 version Shell32 dinput8 dxguid ztl spdlog::spdlog)
    target_link_libraries(gms95-regen game95 wsock32 ws2_32 winmm Imm32 Wininet Iphlpapi Netapi32 version Shell32 dinput8 dxguid ztl spdlog::spdlog)
endif ()

if (MSVC)
    set_target_properties(gms95-regen PROPERTIES LINK_FLAGS "/LARGEADDRESSAWARE")
endif()

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)