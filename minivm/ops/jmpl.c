#include <stdint.h>

#include <minivm/language.h>

#include "ops.h"
#include "../regs.h"

inline void vm_JMPL_REG(int32_t param1, int32_t unused param2)
{
    /* REG: set PC to the value in REG if LT flag on */

    if(FLAGS_ISSET(LT))
        REG(PC) = REG(param1);
}

inline void vm_JMPL_IMM(int32_t param1, int32_t unused param2)
{
    /* IMM: set PC to IMM if LT flag on */

    if(FLAGS_ISSET(LT))
        REG(PC) = param1;
}
