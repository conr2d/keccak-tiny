cmake_minimum_required(VERSION 3.5)

project(keccak-tiny)

if (NOT CMAKE_BUILD_TYPE OR CMAKE_BUILD_TYPE STREQUAL "")
    set(CMAKE_BUILD_TYPE "Release" CACHE STRING "" FORCE)
endif()

add_library(keccak-tiny SHARED
   keccak-tiny-unrolled.c
)

set_target_properties(keccak-tiny PROPERTIES PUBLIC_HEADER keccak-tiny.h)

target_include_directories(keccak-tiny PUBLIC ${CMAKE_SOURCE_DIR})

install(TARGETS keccak-tiny
   LIBRARY DESTINATION lib ${CMAKE_INSTALL_LIBDIR}
   PUBLIC_HEADER DESTINATION include ${CMAKE_INSTALL_INCLUDEDIR}
)
