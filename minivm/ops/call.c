#include <stdint.h>

#include <minivm/language.h>

#include "ops.h"
#include "../regs.h"
#include "../mem.h"

void inline vm_CALL_REG(int32_t param1, int32_t param2)
{
    /* REG: push PC to the stack and set PC to the value on REG */

    REG(SP) -= 4;
    MEM32(REG(SP)) = REG(PC);

    REG(PC) = REG(param1);
}

void inline vm_CALL_IMM(int32_t param1, int32_t param2)
{
    /* REG: push PC to the stack and set PC to IMM */

    REG(SP) -= 4;
    MEM32(REG(SP)) = REG(PC);

    REG(PC) = param1;
}
