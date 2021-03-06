#include <stdint.h>

#include <minivm/language.h>

#include "ops.h"
#include "../regs.h"
#include "../mem.h"

inline void vm_MOV_IMM_IMM(int32_t param1, int32_t param2)
{
    /* IMM -> IMM: immediate to memory address */

    MEMORY_CHECK(param2);

    MEM32(param2) = param1;
}

inline void vm_MOV_IMM_REG(int32_t param1, int32_t param2)
{
    /* IMM -> REG: immediate to register */

    REG(param2) = param1;
}

inline void vm_MOV_REG_IMM(int32_t param1, int32_t param2)
{
    /* REG -> IMM: register to memory address */

    MEMORY_CHECK(param2);

    MEM32(param2) = REG(param1);
}

inline void vm_MOV_REG_REG(int32_t param1, int32_t param2)
{
    /* REG -> REG: register to register */

    REG(param2) = REG(param1);
}
