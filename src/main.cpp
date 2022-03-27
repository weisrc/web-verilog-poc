#include <stdio.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtest.h"
#include "Vtest___024root.h"

int main()
{
    Vtest *u = new Vtest;
    u->a = 1;
    u->b = 1;
    u->eval();
    printf("hello world! %d\n", u->c);
}