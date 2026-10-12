#ifndef MMU_H
#define MMU_H

#include <array>
#include <cstdint>

using namespace std;

class MMU {
  public:
    void initialise();
    
  private:
    // Memory Map
    array<char, 0x8000> cartridge; // 0x0000 - 0x7FFF Cartridge ROM
    array<char, 0x2000> vram;      // 0x8000 - 0x9FFF Video RAM
    array<char, 0x2000> external;  // 0xA000 - 0xBFFF External RAM
    array<char, 0x2000> wram;      // 0xC000 - 0xDFFF Work RAM
                                   // 0xE000 - 0xFDFF Echo RAM (Prohibited use)
    array<char, 0x00A0> oam;       // 0xFE00 - 0xFE9F Object Attribute Memory
                                   // 0xFEA0 - 0xFEFF Not usable (Prohibited use)
    array<char, 0x0080> io;        // 0xFF00 - 0xFF7F I/O registers
    array<char, 0x007F> hram;      // 0xFF80 - 0xFFFE High RAM
    uint8_t ie;                    //      0xFFFF     Interrupt Enable Register
};

#endif