cmake_minimum_required(VERSION 3.5)
project(untitled2)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS -pthread)

find_package(GTest REQUIRED)
#include_directories(${GTEST_INCLUDE_DIRS})
include_directories(${gtest_SOURCE_DIR}/include)

add_executable(untitled2 main.cpp Builder.cpp Builder.h Product.cpp Product.h ConcreteBuilders.cpp ConcreteBuilders.h courier.cpp courier.h AbstractFactory.cpp AbstractFactory.h concreteFactories.cpp concreteFactories.h director.cpp director.h Client.cpp Client.h test.h)
target_link_libraries(untitled2 gtest gtest_main)