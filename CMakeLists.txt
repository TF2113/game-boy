cmake_minimum_required(VERSION 3.28.3)

project(game-boy)

add_executable(game-boy)

target_sources(game-boy
    PRIVATE
        src/main.cpp
        src/cpu/cpu.cpp
)