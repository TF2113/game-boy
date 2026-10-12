#include "mmu.h"
#include <cstring>
#include <iostream>

using namespace std;

void MMU::initialise() {
    for(size_t i = 0; i < cartridge.size(); i++) {
        cartridge[i] = 0;
    }

    for(size_t i = 0; i < vram.size(); i++) {
        vram[i] = 0;
    }

    for(size_t i = 0; i < external.size(); i++) {
        external[i] = 0;
    }

    for(size_t i = 0; i < wram.size(); i++) {
        wram[i] = 0;
    }

    for(size_t i = 0; i < oam.size(); i++) {
        oam[i] = 0;
    }

    for(size_t i = 0; i < io.size(); i++) {
        io[i] = 0;
    }

    for(size_t i = 0; i < hram.size(); i++) {
        hram[i] = 0;
    }

    cout << "MMU Initialised\n";
};

bool MMU::load_game(const uint8_t *rom_data, size_t size) {
    if(size > cartridge.size()) {
        cout << "[MMU] ROM is too large to store\n";
        return false;
    }

    memcpy(&cartridge.front(), (void *)rom_data, size);
    cout << "Successfully loaded ROM!\n";
    return true;
};