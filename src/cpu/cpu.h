#ifndef CPU_H
#define CPU_H

#include <cstdint>

class CPU {
  public:
    // 8 bit registers
    uint8_t a, b, c, d, e, f, h, l;
    uint16_t stack_pointer;
<<<<<<< HEAD
    uint16_t program_counter;
=======
    uint16_t pc;
>>>>>>> fd89589 (refactor to use c++ features & add 16 bit registers (#3))

    uint16_t get_af();
    void set_af(uint16_t value);

    uint16_t get_bc();
    void set_bc(uint16_t value);

    uint16_t get_de();
    void set_de(uint16_t value);

    uint16_t get_hl();
    void set_hl(uint16_t value);
};

#endif