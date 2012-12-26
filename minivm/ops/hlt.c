#include <stdlib.h>
#include <stdint.h>

#include <minivm/language.h>

#include "ops.h"

inline void vm_HLT(int32_t unused param1, int32_t unused param2)
{
    exit(EXIT_SUCCESS);
}
