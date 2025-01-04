cmake_minimum_required(VERSION 3.31)
project(strmanip_test LANGUAGES CXX)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/tests")
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCEFILES "src/strmanip_test.cpp") # Source code files
set(LIBRARYDIRS "../../out/debug/lib") # Library directories
set(LIBRARIES "acerlib") # Libraries
set(COMPILATIONFLAGS -fdiagnostics-color=always -Wall -Wextra -Wno-unused -g) # Compilation Flags

if(WIN32)
    list(APPEND LIBRARIES mingw32)
endif()

# Create executable
add_executable(strmanip_test ${SOURCEFILES})
target_compile_options(strmanip_test PUBLIC ${COMPILATIONFLAGS})
target_link_directories(strmanip_test PUBLIC ${LIBRARYDIRS})
target_link_libraries(strmanip_test PUBLIC ${LIBRARIES})