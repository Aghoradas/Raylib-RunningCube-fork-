cmake_minimum_required(VERSION 3.31)
project(RunningCube)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(RunningCube
        src/main.cpp
        src/square.cpp 
)


target_link_libraries(RunningCube
        PRIVATE raylib m pthread dl GL X11)
