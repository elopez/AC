#include <stdint.h>

#include <minivm/language.h>

#include "ops.h"
#include "../regs.h"

void inline vm_JMP_REG(int32_t param1, int32_t param2)
{
    /* REG: set PC to the value in REG */

    REG(PC) = REG(param1);
}

void inline vm_JMP_IMM(int32_t param1, int32_t param2)
{
    /* IMM: set PC to IMM */

    REG(PC) = param1;
}
