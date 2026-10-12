#include "register.h"

// Alongside the 8 bit registers, registers can be accessed as pairs to create
// 16 bit registers

uint16_t get_af(gbRegisters &registers) {
    uint16_t af = static_cast<uint16_t>(registers.a << 8) |
                  static_cast<uint16_t>(registers.f);
    return af;
}

void set_af(gbRegisters &registers, uint16_t value) {
    registers.a = (value & 0xFF00) >> 8;
    registers.f = value & 0x00FF;
}

uint16_t get_bc(gbRegisters &registers) {
    uint16_t bc = static_cast<uint16_t>(registers.b << 8) |
                  static_cast<uint16_t>(registers.c);
    return bc;
}

void set_bc(gbRegisters &registers, uint16_t value) {
    registers.b = (value & 0xFF00) >> 8;
    registers.c = value & 0x00FF;
}

uint16_t get_de(gbRegisters &registers) {
    uint16_t de = static_cast<uint16_t>(registers.d << 8) |
                  static_cast<uint16_t>(registers.e);
    return de;
}

void set_de(gbRegisters &registers, uint16_t value) {
    registers.d = (value & 0xFF00) >> 8;
    registers.e = value & 0x00FF;
}

uint16_t get_hl(gbRegisters &registers) {
    uint16_t hl = static_cast<uint16_t>(registers.h << 8) |
                  static_cast<uint16_t>(registers.l);
    return hl;
}

void set_hl(gbRegisters &registers, uint16_t value) {
    registers.h = (value & 0xFF00) >> 8;
    registers.l = value & 0x00FF;
}
