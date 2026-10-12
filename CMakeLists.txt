cmake_minimum_required(VERSION 3.28.3)

project(game-boy)

add_executable(game-boy)

target_sources(game-boy
    PRIVATE
        src/main.cpp
        src/cpu/cpu.cpp
        src/mmu/mmu.cpp
        src/cartridge/rom.cpp
)

target_include_directories(game-boy 
    PRIVATE 
        "${CMAKE_CURRENT_SOURCE_DIR}/src/cpu"
        "${CMAKE_CURRENT_SOURCE_DIR}/src/mmu"
        "${CMAKE_CURRENT_SOURCE_DIR}/src/cartridge")