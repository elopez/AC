#include <stdint.h>

#include <minivm/language.h>

#include "ops.h"
#include "../regs.h"
#include "../mem.h"

void inline vm_NOT_REG(int32_t param1, int32_t param2)
{
    /* REG = ~REG */;

    REG(param1) = ~REG(param1);
}

void inline vm_NOT_IMM(int32_t param1, int32_t param2)
{
    INVALID_INSTRUCTION();
}
