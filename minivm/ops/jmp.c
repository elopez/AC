#include <stdint.h>

#include <minivm/language.h>

#include "ops.h"
#include "../regs.h"

inline void vm_JMP_REG(int32_t param1, int32_t unused param2)
{
    /* REG: set PC to the value in REG */

    REG(PC) = REG(param1);
}

inline void vm_JMP_IMM(int32_t param1, int32_t unused param2)
{
    /* IMM: set PC to IMM */

    REG(PC) = param1;
}
