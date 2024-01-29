# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(CalculatorProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)

# Include directories
include_directories(include)

# Add the source files
add_library(calculator_lib src/calculator.cpp)

# Add the executable for the unit tests
add_executable(test_calculator tests/test_calculator.cpp)
target_link_libraries(test_calculator PRIVATE calculator_lib)

# Include Google Test
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.11.0
)
FetchContent_MakeAvailable(googletest)
target_link_libraries(test_calculator PRIVATE gtest gtest_main)

# Enable CMake testing
enable_testing()
add_test(NAME test_calculator COMMAND test_calculator)
