#include <stdint.h>

#include <minivm/language.h>

#include "ops.h"
#include "../regs.h"
#include "../mem.h"

inline void vm_PRINT_REG(int32_t param1, int32_t unused param2)
{
    /* REG: print value on register */

    printf("%d\n", REG(param1));
}

inline void vm_PRINT_IMM(int32_t param1, int32_t unused param2)
{
    /* IMM: print value at memory address */

    MEMORY_CHECK(param1);

    printf("%d\n", MEM32(param1));
}
