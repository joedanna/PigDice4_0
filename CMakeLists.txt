cmake_minimum_required(VERSION 3.29)
project(PigDice4_0)

set(CMAKE_CXX_STANDARD 20)

add_executable(PigDice4_0 main.cpp
        Die.cpp
        Die.h
        GameState.cpp
        GameState.h
        Game.cpp
        Game.h)
