cmake_minimum_required(VERSION 3.28.3)

project(game-boy)

add_executable(game-boy)

target_sources(game-boy
    PRIVATE
        src/main.cpp
        src/cpu/cpu.cpp
        src/cpu/mmu.cpp
        src/cpu/rom.cpp
)

target_include_directories(game-boy PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/src/cpu")