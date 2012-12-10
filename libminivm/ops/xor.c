#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "ops.h"
#include "../regs.h"
#include "../mem.h"

void inline vm_XOR_IMM_IMM(int32_t param1, int32_t param2)
{
    INVALID_INSTRUCTION();
}

void inline vm_XOR_IMM_REG(int32_t param1, int32_t param2)
{
    /* IMM -> REG: REG ^= IMM */

    REG(param2) ^= param1;
}

void inline vm_XOR_REG_IMM(int32_t param1, int32_t param2)
{
    INVALID_INSTRUCTION();
}

void inline vm_XOR_REG_REG(int32_t param1, int32_t param2)
{
    /* REG -> REG: REG2 ^= REG1 */

    REG(param2) ^= REG(param1);
}