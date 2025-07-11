


add_executable(pcom-test PCom.cpp main.cpp)

target_sources(game95 PRIVATE
        PCom.cpp
)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

