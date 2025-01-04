cmake_minimum_required(VERSION 3.31)
project(acerlib LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(WIN32)
    link_libraries(stdc++exp)
endif()

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 3.0.0
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM)
FetchContent_MakeAvailable(SFML)


# Main Source code files ########################################
set(SOURCES
    "src/acerlib_pathmanip.cpp"
    "src/acerlib_strmanip.cpp"
)
set(HEADERS
    "src/acerlib.h"
    "src/acerlib_pathmanip.h"
    "src/acerlib_pathmanip.tpp"
    "src/acerlib_strmanip.h"
    "src/acerlib_strmanip.tpp"
)

# SFML extension source code files ########################################
set(SFMLSOURCES)
set(SFMLHEADERS
    "src/SFML/acerlib_sfml.h"
    "src/SFML/acerlib_sfml.tpp"
)

# Include Directories ########################################
# set(INCLUDEDIRS)

set(SFMLEXTLIBRARIES
    "SFML::Graphics"
)

# Compilation Flags ########################################
set(COMPILATIONFLAGS 
    -fdiagnostics-color=always 
    -Wall 
    -Wextra 
    -Wno-unused
)
if (NOT CMAKE_BUILD_TYPE STREQUAL "Release")
    list(APPEND COMPILATIONFLAGS -g)
endif()

# include_directories(${INCLUDEDIRS})
add_compile_options(${COMPILATIONFLAGS})

# Create Static Libraries
add_library(acerlib STATIC ${SOURCES})
set_target_properties(
    acerlib
    PROPERTIES
        PUBLIC_HEADER "${HEADERS}"
)

add_library(acerlib_sfml INTERFACE ${SFMLHEADERS})
target_link_libraries(acerlib_sfml INTERFACE ${SFMLEXTLIBRARIES})
set_target_properties(
    acerlib_sfml
    PROPERTIES
        PUBLIC_HEADER "${SFMLHEADERS}"
)

if (CMAKE_BUILD_TYPE STREQUAL "Release")
    set(ACERLIB_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/out/release/include/acerlib)
    set(ACERLIB_ARCHIVE_DIR ${CMAKE_SOURCE_DIR}/out/release/lib)
else()
    set(ACERLIB_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/out/debug/include/acerlib)
    set(ACERLIB_ARCHIVE_DIR ${CMAKE_SOURCE_DIR}/out/debug/lib)
endif()


install(
    TARGETS acerlib acerlib_sfml
    ARCHIVE 
        DESTINATION ${ACERLIB_ARCHIVE_DIR}
    PUBLIC_HEADER 
        DESTINATION ${ACERLIB_INCLUDE_DIR}
)

add_subdirectory("tests/path")
add_subdirectory("tests/strmanip")