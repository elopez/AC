#include <stdint.h>

#include <minivm/language.h>

#include "ops.h"
#include "../regs.h"
#include "../mem.h"

void inline vm_SW_IMM_IMM(int32_t param1, int32_t param2)
{
    /* IMM -> IMM: copy value IMM to address IMM */

    MEMORY_CHECK(param2);

    MEM32(param2) = param1;
}

void inline vm_SW_IMM_REG(int32_t param1, int32_t param2)
{
    /* IMM -> REG: copy value IMM to address on REG */

    MEMORY_CHECK(REG(param2));

    MEM32(REG(param2)) = param1;
}

void inline vm_SW_REG_IMM(int32_t param1, int32_t param2)
{
    /* REG -> IMM: copy value on REG to address IMM */

    MEMORY_CHECK(param2);

    MEM32(param2) = REG(param1);
}

void inline vm_SW_REG_REG(int32_t param1, int32_t param2)
{
    /* REG -> REG: copy value on REG to address on REG */

    MEMORY_CHECK(REG(param2));

    MEM32(REG(param2)) = REG(param1);
}
