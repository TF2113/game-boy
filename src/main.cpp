#include "cpu.h"
#include "mmu.h"
#include "rom.h"
#include <iostream>

using namespace std;

CPU gbCPU;
MMU gbMMU;
ROM gbROM;

int main(int argc, char *argv[]) {
    gbMMU.initialise();

    if(!gbROM.load_rom(argv[1])) {
        return 1;
    }

    gbMMU.load_game(ROM::rom_data, ROM::rom_size);
}