#include "./cpu/register.h"
#include <iostream>

using namespace std;

Registers registers;

int main(int argc, char *argv[]){

    registers.b = 1;
    registers.c = 2;

    uint16_t bc = get_bc(registers.b, registers.c);

    cout << registers.b << registers.c << bc;
}