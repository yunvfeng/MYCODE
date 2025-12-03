#include <stdio.h>
#include "cpu.h"

int ram;
int regs[4];
int pc = 0;
int flag = 0;
int ram[128];

void cpu_reset()
{
    pc = flag = 0;
    regs[0] = regs[1] = regs[2] = regs[3] = 0;
}



