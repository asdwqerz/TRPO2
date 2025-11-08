cmake_minimum_required(VERSION 3.10)
project(TRPO2)
add_executable(TRPO2 main.cpp func.cpp)

enable_testing()
add_executable(tests func.cpp tests.cpp)