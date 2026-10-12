#include "rom.h"
#include "mmu.h"

#include <cstddef>
#include <iostream>

const unsigned char *ROM::rom_data;
size_t ROM::rom_size;

bool ROM::load_rom(const char *file_path) {

    if(file_path == NULL) {
        cout << "[ROM] File path required\n";
    }

    FILE *rom = fopen(file_path, "rb");

    if(rom == NULL) {
        printf("[ROM] Not able to open ROM\n");
        return false;
    }

    if(fseek(rom, 0, SEEK_END) != 0) {
        printf("[ROM] fseek failed\n");
        fclose(rom);
        return false;
    }

    rom_size = ftell(rom);

    if(rom_size == -1L) {
        printf("[ROM] ftell failed\n");
        fclose(rom);
        return false;
    }

    rewind(rom);

    rom_data = new unsigned char[rom_size];

    fread((void *)rom_data, 1, rom_size, rom);
    fclose(rom);

    return true;
};