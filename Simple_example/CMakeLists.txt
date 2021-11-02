cmake_minimum_required(VERSION 3.1)

set(This Example)

project(${This} C CXX)

enable_testing()

add_subdirectory(googletest)

set(Headers 
    Example.hpp
)
set(Sources 
    Example.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(test)