#include <stdint.h>

#include <minivm/language.h>

#include "ops.h"
#include "../regs.h"
#include "../mem.h"

inline void vm_PUSH_REG(int32_t param1, int32_t unused param2)
{
    /* REG: push REG value to stack */

    REG(SP) -= 4;
    MEM32(REG(SP)) = REG(param1);
}

inline void vm_PUSH_IMM(int32_t param1, int32_t unused param2)
{
    /* IMM: push IMM to stack */

    REG(SP) -= 4;
    MEM32(REG(SP)) = param1;
}
