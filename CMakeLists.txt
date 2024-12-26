cmake_minimum_required(VERSION 3.31)
project(acerlib LANGUAGES CXX)

if (CMAKE_BUILD_TYPE STREQUAL "Release")
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib/release)
    set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib/release)
else()
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib/debug)
    set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib/debug)
endif()


set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)

# Source code files
set(SOURCEFILES
"include/acerlib.h"
"include/acerlib_pathmanip.h"
"src/acerlib_pathmanip.cpp"
)

# Include Directories
set(INCLUDEDIRS
"include"
)

# Compilation Flags
set(COMPILATIONFLAGS -fdiagnostics-color=always -Wall -Wextra -Wno-unused
)
if (NOT CMAKE_BUILD_TYPE STREQUAL "Release")
    list(APPEND COMPILATIONFLAGS -g)
endif()

# Create Static Library
add_library(acerlib STATIC ${SOURCEFILES} ${INCLUDEDIRS})
target_include_directories(acerlib PRIVATE ${INCLUDEDIRS})
target_compile_options(acerlib PRIVATE ${COMPILATIONFLAGS})