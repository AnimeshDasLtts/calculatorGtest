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

# Link the calculator library to the test executable
target_link_libraries(test_calculator PRIVATE calculator_lib)

# Find and link Google Test
find_package(GTest REQUIRED)
target_link_libraries(test_calculator PRIVATE GTest::GTest GTest::Main)

# Enable CMake testing
enable_testing()
add_test(NAME test_calculator COMMAND test_calculator)
