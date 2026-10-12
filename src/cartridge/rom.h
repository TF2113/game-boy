#ifndef ROM_H
#define ROM_H

#include <cstddef>

using namespace std;

class ROM {
  public:
    static const unsigned char *rom_data;
    static size_t rom_size;

    bool load_rom(const char *file_path);
};

#endif