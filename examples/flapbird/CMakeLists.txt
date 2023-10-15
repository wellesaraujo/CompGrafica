cmake_minimum_required(VERSION 3.11)

project(flapbird)

add_executable(${PROJECT_NAME} main.cpp window.cpp bird.cpp pipes.cpp)

enable_abcg(${PROJECT_NAME})
