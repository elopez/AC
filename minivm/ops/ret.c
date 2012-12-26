#include <stdint.h>

#include <minivm/language.h>

#include "ops.h"
#include "../regs.h"
#include "../mem.h"

inline void vm_RET(int32_t unused param1, int32_t unused param2)
{
    /* pop PC */

    REG(PC) = MEM32(REG(SP));
    REG(SP) += 4;
}
