cmake_minimum_required(VERSION 4.3)
project(PracticingCPP)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

FetchContent_Declare(
        raylib
        GIT_REPOSITORY https://github.com/raysan5/raylib.git
        GIT_TAG 5.5
)

FetchContent_MakeAvailable(raylib)

add_executable(PracticingCPP src/main.cpp
        src/Object.cpp
        src/Object.h
        src/game/Player.cpp
        src/game/Player.h
)

target_link_libraries(PracticingCPP PRIVATE raylib)
