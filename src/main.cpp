#include "register.h"
#include <iostream>

using namespace std;

gbRegisters registers;

int main(int argc, char *argv[]) {
    registers.b = 1;
    registers.c = 2;

    uint16_t bc = get_bc(registers);

    cout << int(registers.b) << "\n" << int(registers.c) << "\n" << bc << "\n";

    set_bc(registers, 12343);
    bc = get_bc(registers);

    cout << bc << "\n";
}