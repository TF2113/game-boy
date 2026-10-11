#include "register.h"

// Alongside the 8 bit registers, registers can be accessed as pairs to create 16 bit registers

uint16_t get_bc(uint8_t b, uint8_t c){
    uint16_t bc = (static_cast<uint16_t>(b) << 8) | static_cast<uint16_t>(c);
    return bc;
}