#include <stdint.h>

#include <minivm/language.h>

#include "ops.h"
#include "../regs.h"
#include "../mem.h"

inline void vm_READ_REG(int32_t param1, int32_t unused param2)
{
    /* REG: read an integer and copy it to REG */

    scanf("%d", &REG(param1));
}

inline void vm_READ_IMM(int32_t param1, int32_t unused param2)
{
    /* IMM: read an integer and copy it to address IMM */

    MEMORY_CHECK(param1);

    scanf("%d", &MEM32(param1));
}
