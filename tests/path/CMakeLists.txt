cmake_minimum_required(VERSION 3.31)
project(path_test LANGUAGES CXX)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/tests/path")
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCEFILES "src/path_test.cpp") # Source code files
set(INCLUDEDIRS "../../include") # Include Directories
set(LIBRARYDIRS "../../out/debug/lib") # Library directories
set(LIBRARIES "acerlib") # Libraries
set(COMPILATIONFLAGS -fdiagnostics-color=always -Wall -Wextra -Wno-unused -g) # Compilation Flags

if(WIN32)
    list(APPEND LIBRARIES mingw32)
endif()

# Create executable
add_executable(path_test ${SOURCEFILES})
target_compile_options(path_test PUBLIC ${COMPILATIONFLAGS})
target_include_directories(path_test PUBLIC ${INCLUDEDIRS})
target_link_directories(path_test PUBLIC ${LIBRARYDIRS})
target_link_libraries(path_test PUBLIC ${LIBRARIES})