cmake_minimum_required(VERSION 3.20)
project(CLion)

set(CMAKE_CXX_STANDARD 14)

add_executable(CLion
        .idea/CLion.iml
        .idea/modules.xml
        .idea/vcs.xml
        .idea/workspace.xml
        main.cpp)
