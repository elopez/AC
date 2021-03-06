#include <stdint.h>

#include <minivm/language.h>

#include "ops.h"
#include "../regs.h"
#include "../mem.h"

inline void vm_LW_IMM_IMM(int32_t unused param1, int32_t unused param2)
{
    INVALID_INSTRUCTION();
}

inline void vm_LW_IMM_REG(int32_t param1, int32_t param2)
{
    /* IMM -> REG: copy value at address IMM to REG */

    MEMORY_CHECK(param1);

    REG(param2) = MEM32(param1);
}

inline void vm_LW_REG_IMM(int32_t unused param1, int32_t unused param2)
{
    INVALID_INSTRUCTION();
}

inline void vm_LW_REG_REG(int32_t param1, int32_t param2)
{
    /* REG -> REG: copy value at address REG to REG */

    MEMORY_CHECK(REG(param1));

    REG(param2) = MEM32(REG(param1));
}
