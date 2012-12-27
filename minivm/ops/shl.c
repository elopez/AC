#include <stdint.h>

#include <minivm/language.h>

#include "ops.h"
#include "../regs.h"

inline void vm_SHL_IMM_IMM(int32_t unused param1, int32_t unused param2)
{
    INVALID_INSTRUCTION();
}

inline void vm_SHL_IMM_REG(int32_t param1, int32_t param2)
{
    /* IMM -> REG: shift REG left by IMM */

    REG(param2) = UREG(param2) << param1;
}

inline void vm_SHL_REG_IMM(int32_t unused param1, int32_t unused param2)
{
    INVALID_INSTRUCTION();
}

inline void vm_SHL_REG_REG(int32_t param1, int32_t param2)
{
    /* REG -> REG: shift REG left by value in REG */

    REG(param2) = UREG(param2) << REG(param1);
}
