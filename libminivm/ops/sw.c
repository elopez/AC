#include <stdint.h>
#include <stdlib.h>

#include "ops.h"
#include "../regs.h"
#include "../mem.h"

void inline vm_SW_IMM_IMM(uint32_t param1, uint32_t param2)
{
    /* IMM -> IMM: copy value IMM to address IMM */

    MEM32(param2) = param1;
}

void inline vm_SW_IMM_REG(uint32_t param1, uint32_t param2)
{
    /* IMM -> REG: copy value IMM to address on REG */

    MEM32(REG(param2)) = param1;
}

void inline vm_SW_REG_IMM(uint32_t param1, uint32_t param2)
{
    /* REG -> IMM: copy value on REG to address IMM */

    MEM32(param2) = REG(param1);
}

void inline vm_SW_REG_REG(uint32_t param1, uint32_t param2)
{
    /* REG -> REG: copy value on REG to address on REG */

    MEM32(REG(param2)) = REG(param1);
}
