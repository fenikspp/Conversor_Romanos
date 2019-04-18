cmake_minimum_required(VERSION 3.10.2)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Link runTests with what we want to test and the GTest and pthread library
add_executable(executeTestes gTest.cpp ConverteRomano.hpp ConverteInteiro.hpp ValidaRomano.hpp)
target_link_libraries(executeTestes ${GTEST_LIBRARIES} pthread)

