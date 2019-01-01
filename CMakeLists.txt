cmake_minimum_required(VERSION 3.5)

project(keccak-tiny)

if (NOT CMAKE_BUILD_TYPE OR CMAKE_BUILD_TYPE STREQUAL "")
    set(CMAKE_BUILD_TYPE "Release" CACHE STRING "" FORCE)
endif()

add_library(keccak-tiny SHARED
   src/keccak-tiny-unrolled.c
)

set_target_properties(keccak-tiny PROPERTIES PUBLIC_HEADER include/keccak-tiny.h)

target_include_directories(keccak-tiny PRIVATE .)

install(TARGETS keccak-tiny
   LIBRARY DESTINATION lib ${CMAKE_INSTALL_LIBDIR}
   PUBLIC_HEADER DESTINATION include ${CMAKE_INSTALL_INCLUDEDIR}
)
