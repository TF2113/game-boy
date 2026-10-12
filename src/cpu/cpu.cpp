#include "cpu.h"

// Alongside the 8 bit registers, registers can be accessed as pairs to
// create 16 bit registers

uint16_t CPU::get_af() {
    uint16_t af = static_cast<uint16_t>(a << 8) | static_cast<uint16_t>(f);
    return af;
}

void CPU::set_af(uint16_t value) {
    a = (value & 0xFF00) >> 8;
    f = value & 0x00FF;
}

uint16_t CPU::get_bc() {
    uint16_t bc = static_cast<uint16_t>(b << 8) | static_cast<uint16_t>(c);
    return bc;
}

void CPU::set_bc(uint16_t value) {
    b = (value & 0xFF00) >> 8;
    c = value & 0x00FF;
}

uint16_t CPU::get_de() {
    uint16_t de = static_cast<uint16_t>(d << 8) | static_cast<uint16_t>(e);
    return de;
}

void CPU::set_de(uint16_t value) {
    d = (value & 0xFF00) >> 8;
    e = value & 0x00FF;
}

uint16_t CPU::get_hl() {
    uint16_t hl = static_cast<uint16_t>(h << 8) | static_cast<uint16_t>(l);
    return hl;
}

void CPU::set_hl(uint16_t value) {
    h = (value & 0xFF00) >> 8;
    l = value & 0x00FF;
}