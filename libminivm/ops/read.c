#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "ops.h"
#include "../regs.h"
#include "../mem.h"

void inline vm_READ_REG(int32_t param1, int32_t param2)
{
    /* REG: read an integer and copy it to REG */

    scanf("%d", &REG(param1));
}

void inline vm_READ_IMM(int32_t param1, int32_t param2)
{
    /* IMM: read an integer and copy it to address IMM */

    scanf("%d", &MEM32(param1));
}
