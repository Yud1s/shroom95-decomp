file(GLOB HEADER_LIST CONFIGURE_DEPENDS "*.h")
file(GLOB SOURCE_LIST CONFIGURE_DEPENDS "*.cpp")

add_library(ztl ${SOURCE_LIST} ${HEADER_LIST}
        ZSocketBase.cpp
        ZSocketBase.cpp
        ZFileStream.cpp
        sectype.cpp
        CRand32.cpp
        zxstring.cpp
        zcom.cpp
        zcomapi.h
        zcomapi.cpp
        zsort.h
        util.cpp
        ZTimeUtil.cpp
)

# setup link libraries
set(_LIBS )
if (WIN32)
    list(APPEND _LIBS wsock32 ws2_32)
endif ()

target_include_directories(ztl PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(ztl PUBLIC ${_LIBS})