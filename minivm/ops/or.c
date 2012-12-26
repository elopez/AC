#include <stdint.h>

#include <minivm/language.h>

#include "ops.h"
#include "../regs.h"

inline void vm_OR_IMM_IMM(int32_t unused param1, int32_t unused param2)
{
    INVALID_INSTRUCTION();
}

inline void vm_OR_IMM_REG(int32_t param1, int32_t param2)
{
    /* IMM -> REG: REG |= IMM */

    REG(param2) |= param1;
}

inline void vm_OR_REG_IMM(int32_t unused param1, int32_t unused param2)
{
    INVALID_INSTRUCTION();
}

inline void vm_OR_REG_REG(int32_t param1, int32_t param2)
{
    /* REG -> REG: REG2 |= REG1 */

    REG(param2) |= REG(param1);
}
