cmake_minimum_required(VERSION 3.19)
project(afg4)

set(CMAKE_CXX_STANDARD 20)

add_executable(afg4 main.cpp Animal.cpp Aligator.cpp Cat.cpp Dog.cpp Mammal.cpp Reptile.cpp)