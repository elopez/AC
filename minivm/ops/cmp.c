#include <stdint.h>

#include <minivm/language.h>

#include "ops.h"
#include "../regs.h"

inline void vm_CMP_IMM_IMM(int32_t param1, int32_t param2)
{
    /* IMM -> IMM: compare two IMMs */

    FLAGS_CLEAR();

    if (param1 < param2)
        FLAGS_SET(LT);
    else if (param1 == param2)
        FLAGS_SET(EQUAL);
}

inline void vm_CMP_IMM_REG(int32_t param1, int32_t param2)
{
    /* IMM -> REG: compare IMM and REG */

    FLAGS_CLEAR();

    if (param1 < REG(param2))
        FLAGS_SET(LT);
    else if (param1 == REG(param2))
        FLAGS_SET(EQUAL);
}

inline void vm_CMP_REG_IMM(int32_t param1, int32_t param2)
{
    /* REG -> IMM: compare REG and IMM */

    FLAGS_CLEAR();

    if (REG(param1) < param2)
        FLAGS_SET(LT);
    else if (REG(param1) == param2)
        FLAGS_SET(EQUAL);
}

inline void vm_CMP_REG_REG(int32_t param1, int32_t param2)
{
    /* REG -> REG: compare two regs */

    FLAGS_CLEAR();

    if (REG(param1) < REG(param2))
        FLAGS_SET(LT);
    else if (REG(param1) == REG(param2))
        FLAGS_SET(EQUAL);
}
