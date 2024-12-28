cmake_minimum_required(VERSION 3.31)
project(path_test LANGUAGES CXX)

set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)

# Source code files
set(SOURCEFILES "src/main.cpp")

# Include Directories
set(INCLUDEDIRS "dep/acerlib/include")

# Library directories
set(LIBRARYDIRS "dep/acerlib/lib")

# Libraries
set(LIBRARIES "acerlib")
if(WIN32)
    list(APPEND LIBRARIES mingw32)
endif()

# Compilation Flags
set(COMPILATIONFLAGS -fdiagnostics-color=always -Wall -Wextra -Wno-unused -g)

# Create executable
add_executable(main ${SOURCEFILES} ${INCLUDEDIRS})
target_compile_options(main PUBLIC ${COMPILATIONFLAGS})
target_include_directories(main PUBLIC ${INCLUDEDIRS})
target_link_directories(main PUBLIC ${LIBRARYDIRS})
target_link_libraries(main PUBLIC ${LIBRARIES})
set_target_properties(main PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})