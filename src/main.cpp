#include "cpu.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    CPU gbCPU;

    gbCPU.b = 1;
    gbCPU.c = 2;

    uint16_t bc = gbCPU.get_bc();

    cout << int(gbCPU.b) << "\n" << int(gbCPU.c) << "\n" << bc << "\n";

    gbCPU.set_bc(12343);
    bc = gbCPU.get_bc();

    cout << bc << "\n";
}