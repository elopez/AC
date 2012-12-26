#include <stdint.h>

#include <minivm/language.h>

#include "ops.h"
#include "../regs.h"
#include "../mem.h"

void inline vm_RET(int32_t param1, int32_t param2)
{
    /* pop PC */

    REG(PC) = MEM32(REG(SP));
    REG(SP) += 4;
}
