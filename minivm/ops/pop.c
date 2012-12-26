#include <stdint.h>

#include <minivm/language.h>

#include "ops.h"
#include "../regs.h"
#include "../mem.h"

inline void vm_POP_REG(int32_t param1, int32_t unused param2)
{
    /* REG: pop register value to stack */

    REG(param1) = MEM32(REG(SP));
    REG(SP) += 4;
}

inline void vm_POP_IMM(int32_t unused param1, int32_t unused param2)
{
    INVALID_INSTRUCTION();
}
