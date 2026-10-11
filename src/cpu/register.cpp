#include "register.h"

// Alongside the 8 bit registers, registers can be accessed as pairs to create
// 16 bit registers

uint16_t get_bc(gbRegisters registers) {
    uint16_t bc = static_cast<uint16_t>(registers.b << 8) |
                  static_cast<uint16_t>(registers.c);
    return bc;
}

void set_bc(gbRegisters &registers, uint16_t value) {
    registers.b = (value & 0xFF00) >> 8;
    registers.c = value & 0x00FF;
}
