#include <stdint.h>

#include <minivm/language.h>

#include "ops.h"
#include "../regs.h"

inline void vm_NOT_REG(int32_t param1, int32_t unused param2)
{
    /* REG = ~REG */;

    REG(param1) = ~REG(param1);
}

inline void vm_NOT_IMM(int32_t unused param1, int32_t unused param2)
{
    INVALID_INSTRUCTION();
}
