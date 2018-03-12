cmake_minimum_required(VERSION 3.5)
project(untitled2)

set(CMAKE_CXX_STANDARD 11)


add_executable(untitled2 main.cpp Builder.cpp Builder.h Product.cpp Product.h ConcreteBuilders.cpp ConcreteBuilders.h courier.cpp courier.h AbstractFactory.cpp AbstractFactory.h concreteFactories.cpp concreteFactories.h director.cpp director.h Client.cpp Client.h)