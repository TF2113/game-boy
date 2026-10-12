#include "mmu.h"
#include <iostream>

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
}