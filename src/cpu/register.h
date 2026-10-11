#ifndef REGISTER_H
#define REGISTER_H

#include <cstdint>

struct gbRegisters {
    uint8_t a;
    uint8_t b;
    uint8_t c;
    uint8_t d;
    uint8_t e;
    uint8_t h;
    uint8_t l;
};

uint16_t get_bc(gbRegisters registers);
void set_bc(gbRegisters &registers, uint16_t value);

#endif