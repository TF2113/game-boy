#ifndef REGISTER_H
#define REGISTER_H

#include <cstdint>

typedef struct Registers {
    uint8_t a;
    uint8_t b;
    uint8_t c;
    uint8_t d;
    uint8_t e;
    uint8_t h;
    uint8_t l;
} Registers;

uint16_t get_bc(uint8_t b, uint8_t c);

#endif