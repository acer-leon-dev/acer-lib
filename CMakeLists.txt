cmake_minimum_required(VERSION 3.31)
project(acerlib LANGUAGES CXX)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 3.0.0
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM)
FetchContent_MakeAvailable(SFML)

set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)

# Source code files
set(PRIMARYSOURCEFILES
"include/acerlib/acerlib.h"
"include/acerlib/acerlib_pathmanip.h"
"src/acerlib_pathmanip.cpp"
)

# SFML extension source code files
set(SFMLEXTSOURCEFILES
"include/acerlib/SFML/acerlib_sfml.h"
"include/acerlib/SFML/acerlib_sfml.tcc"
)

# Include Directories
set(INCLUDEDIRS
"include"
"src"
)

set(SFMLEXTLIBRARIES
"SFML::Graphics"
)

# Compilation Flags
set(COMPILATIONFLAGS -fdiagnostics-color=always -Wall -Wextra -Wno-unused
)
if (NOT CMAKE_BUILD_TYPE STREQUAL "Release")
    list(APPEND COMPILATIONFLAGS -g)
endif()

# Create Static Library
add_library(acerlib STATIC ${PRIMARYSOURCEFILES} ${INCLUDEDIRS})
target_include_directories(acerlib PUBLIC ${INCLUDEDIRS})
# target_link_libraries(acerlib PUBLIC ${LIBRARIES})
target_compile_options(acerlib PUBLIC ${COMPILATIONFLAGS})

add_library(acerlib_sfml STATIC ${SFMLEXTSOURCEFILES} ${INCLUDEDIRS})
target_include_directories(acerlib_sfml PUBLIC ${INCLUDEDIRS})
target_link_libraries(acerlib_sfml PUBLIC ${SFMLEXTLIBRARIES})
target_compile_options(acerlib_sfml PUBLIC ${COMPILATIONFLAGS})

if (CMAKE_BUILD_TYPE STREQUAL "Release")
    set_target_properties(acerlib PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/out/release/acerlib/lib)
    set_target_properties(acerlib PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/out/release/acerlib/lib)
    set_target_properties(acerlib_sfml PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/out/release/acerlib/lib)
    set_target_properties(acerlib_sfml PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/out/release/acerlib/lib)
    file(COPY ${CMAKE_SOURCE_DIR}/include DESTINATION ${CMAKE_SOURCE_DIR}/out/release/acerlib)
else()
    set_target_properties(acerlib PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/out/debug/acerlib/lib)
    set_target_properties(acerlib PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/out/debug/acerlib/lib)
    set_target_properties(acerlib_sfml PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/out/debug/acerlib/lib)
    set_target_properties(acerlib_sfml PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/out/debug/acerlib/lib)
    file(COPY ${CMAKE_SOURCE_DIR}/include DESTINATION ${CMAKE_SOURCE_DIR}/out/debug/acerlib)
endif()
