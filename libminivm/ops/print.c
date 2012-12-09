#include <stdint.h>
#include <stdio.h>

#include "ops.h"
#include "../regs.h"
#include "../mem.h"

void inline vm_PRINT_REG(uint32_t param1, uint32_t param2)
{
    /* REG: print value on register */

    printf("%d\n", REG(param1));
}

void inline vm_PRINT_IMM(uint32_t param1, uint32_t param2)
{
    /* IMM: print value at memory address */

    printf("%d\n", MEM32(param1));
}
